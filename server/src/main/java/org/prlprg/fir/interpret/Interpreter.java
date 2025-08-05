package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.InlineCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptLoad;
import org.prlprg.fir.ir.expression.SubscriptStore;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;

/// FIŘ interpreter.
public final class Interpreter {
  private final Module module;
  private final GlobalEnvSXP globalEnv;
  /// Forcing promise = the same frame at multiple indices.
  private final Deque<StackFrame> stack = new ArrayDeque<>();
  /// Presumably in the compiler, we store a reference to [PromiseCode] into [BCodeSXP]'s
  /// constant pool. The bytecode calls into our code with the pool entry.
  ///
  /// Here, it's easier to create stub [SEXP]s and map them with this.
  private final Map<SEXP, PromiseCode> promises = new HashMap<>();
  /// Same situation as [#promises] except for [CloSXP].
  private final Map<SEXP, Function> closures = new HashMap<>();
  private int nextPromiseId = 0;
  private int nextClosureId = 0;

  /// Interpret the module in an empty global environment.
  public Interpreter(Module module) {
    this(module, new GlobalEnvSXP(new BaseEnvSXP()));
  }

  /// Interpret the module in the global environment.
  public Interpreter(Module module, GlobalEnvSXP globalEnv) {
    this.module = module;
    this.globalEnv = globalEnv;
  }

  public Module module() {
    return module;
  }

  public GlobalEnvSXP globalEnv() {
    return globalEnv;
  }

  /// Looks up the function, gets the best applicable version, and calls it with the arguments
  /// in the global environment.
  public SEXP call(String functionName, SEXP... arguments) {
    var function = module.lookupFunction(functionName);
    if (function == null) {
      throw fail("Unknown function: " + functionName);
    }

    return call(function, null, List.of(arguments), globalEnv);
  }

  /// Gets the function's best applicable version, and calls it with the arguments in the
  /// environment.
  public SEXP call(
      Function function,
      @Nullable Signature explicitSignature,
      List<SEXP> arguments,
      EnvSXP environment) {
    var signature = computeSignature(explicitSignature, arguments);

    var best = function.worstGuess(signature);
    if (best == null) {
      throw fail("No versions match function: " + function.name());
    }

    return call(best, arguments, environment);
  }

  /// Calls the function version with the arguments in the environment.
  public SEXP call(Abstraction abstraction, List<SEXP> arguments, EnvSXP environment) {
    var frame = new StackFrame(environment);

    stack.push(frame);
    try {
      // Bind parameters
      var params = abstraction.parameters();
      if (arguments.size() != params.size()) {
        throw fail(
            "Argument count mismatch: expected " + params.size() + ", got " + arguments.size());
      }

      for (int i = 0; i < params.size(); i++) {
        var param = params.get(i);
        var arg = arguments.get(i);
        checkType(arg, param.type(), "parameter " + param.variable().name());
        frame.put(param.variable(), arg);
      }

      // Execute CFG
      return run(abstraction.cfg());
    } finally {
      var f = stack.pop();
      assert f == frame : "stack imbalance";
    }
  }

  /// Interprets the control flow graph starting from the entry block.
  private SEXP run(CFG cfg) {
    var cursor = new CFGCursor(cfg);
    topFrame().enter(cursor);

    while (true) {
      var nextControl = cursor.iterateBb(this::run, this::run);

      switch (nextControl) {
        case ControlFlow.Goto(var nextTarget) -> {
          cursor.moveToStart(nextTarget.bb());
          bindPhiArguments(nextTarget);
        }
        case ControlFlow.Return(var value) -> {
          topFrame().exit();
          return value;
        }
      }
    }
  }

  /// Executes a statement instruction.
  private void run(Statement statement) {
    var value = run(statement.expression());
    if (statement.assignee() != null) {
      topFrame().put(statement.assignee(), value);
    }
  }

  /// Executes a jump instruction and returns the next control-flow action.
  private ControlFlow run(Jump jump) {
    return switch (jump) {
      case Return(var ret) -> new ControlFlow.Return(run(ret));
      case Goto(var next) -> new ControlFlow.Goto(next);
      case If(var condition, var ifTrue, var ifFalse) ->
          new ControlFlow.Goto(isTrue(run(condition)) ? ifTrue : ifFalse);
      case Unreachable _ -> throw fail("Reached unreachable instruction");
    };
  }

  /// Binds phi arguments to phi variables in the target block.
  private void bindPhiArguments(Target target) {
    var parameters = target.bb().phiParameters();
    var arguments = target.phiArgs();
    if (parameters.size() != arguments.size()) {
      throw fail(
          "Phi argument count mismatch: expected "
              + parameters.size()
              + ", got "
              + arguments.size());
    }

    for (int i = 0; i < parameters.size(); i++) {
      var phiVar = parameters.get(i);
      var phiValue = run(arguments.get(i));
      topFrame().put(phiVar, phiValue);
    }
  }

  /// Evaluates an expression and returns its value.
  private SEXP run(Expression expression) {
    return switch (expression) {
      case Aea(var value) -> run(value);
      case Call call -> {
        var callee = call.callee();
        var arguments = call.arguments().stream().map(this::run).toList();
        var environment = topFrame().environment();
        
        yield switch (callee) {
          case StaticCallee(var _, var version) -> call(version, arguments, environment);
          case DispatchCallee(var function, var signature) -> call(function, signature, arguments, environment);
          case InlineCallee(var inlinee) -> call(inlinee, arguments, environment);
          case DynamicCallee(var variable, var _) -> {
            var function = loadFun(variable);
            if (function == null) {
              throw fail("Unbound function: " + variable.name());
            }

            yield call(function, null, arguments, environment);
          }
        };
      }
      case Cast(var target, var type) -> {
        var value = run(target);
        checkType(value, type, "cast");
        yield value;
      }
      case Closure closure -> {
        var function = closure.code();

        var codeStub = freshClosureStub();
        closures.put(codeStub, function);
        yield SEXPs.closure(inferParameters(function), codeStub, topFrame().environment());
      }
      case Dup(var value) -> {
        var sexp = run(value);

        // Copy
        if (sexp instanceof VecSXP)
      }
      case Force(var promArg) -> {
        var promValue = run(promArg);
        if (!(promValue instanceof PromSXP promSXP)) {
          throw fail("Tried to force non-promise: " + promValue);
        }

        // If the promise is already forced, return the value.
        var eager = promSXP.boundVal();
        if (eager != null) {
          yield eager;
        }

        // Evaluate the promise.
        var promCode = promises.remove(promSXP.expr());
        if (promCode == null) {
          throw fail("Can't force promise code created outside the interpreter: " + promSXP.expr());
        }
        var promExpr = promCode.expression;

        stack.push(promCode.frame);
        try {
          var value = run(promExpr.code());
          promSXP.bind(value);
          checkType(value, promExpr.valueType(), "promise");
          yield value;
        } finally {
          var f = stack.pop();
          assert f == promCode.frame : "stack imbalance";
        }
      }
      case Load(var variable) -> {
        var value = topFrame().environment().get(variable.name()).orElse(null);
        if (value == null) {
          throw fail("Unbound variable: " + variable.name());
        }
        yield value;
      }
      case MaybeForce(var value) -> {
        var sexp = run(value);
        if (sexp instanceof PromSXP) {
          yield run(new Force(value));
        } else {
          yield sexp;
        }
      }
      case MkVector(var elements) -> {
        var values = elements.stream().map(this::run).toArray(SEXP[]::new);
        yield SEXPs.list(values);
      }
      case Placeholder() -> throw fail("Can't evaluate placeholder");
      case Promise promExpr -> {
        var codeStub = freshPromiseStub();
        promises.put(codeStub, new PromiseCode(promExpr, topFrame()));
        yield SEXPs.promise(codeStub, topFrame().environment());
      }
      case ReflectiveLoad(var promise, var variable) -> {
        var obj = run(promise);
        throw fail("Reflective load not yet implemented for: " + variable.name());
      }
      case ReflectiveStore(var promise, var variable, var value) -> {
        var obj = run(promise);
        var val = run(value);
        throw fail("Reflective store not yet implemented for: " + variable.name());
      }
      case Store(var variable, var value) -> {
        var sexp = run(value);
        topFrame().environment().set(variable.name(), sexp);
        yield sexp;
      }
      case SubscriptLoad(var target, var index) -> {
        var obj = run(target);
        var idx = run(index);
        throw fail("Subscript load not yet implemented");
      }
      case SubscriptStore(var target, var index, var value) -> {
        var obj = run(target);
        var idx = run(index);
        var val = run(value);
        throw fail("Subscript store not yet implemented");
      }
      case SuperLoad(var variable) -> {
        var parentEnv = topFrame().environment().parent();
        if (parentEnv == null) {
          throw fail("No parent environment for super load of: " + variable.name());
        }
        var value = parentEnv.get(variable.name()).orElse(null);
        if (value == null) {
          throw fail("Unbound variable in parent environment: " + variable.name());
        }
        yield value;
      }
      case SuperStore(var variable, var value) -> {
        var parentEnv = topFrame().environment().parent();
        if (parentEnv == null) {
          throw fail("No parent environment for super store of: " + variable.name());
        }
        var val = run(value);
        parentEnv.set(variable.name(), val);
        yield val;
      }
    };
  }

  /// Evaluates an argument and returns its value.
  private SEXP run(Argument argument) {
    return switch (argument) {
      case Constant(var constant) -> constant;
      case Read(var register) -> read(register);
        // `Read` and `Use` are evaluated the same, the only difference is in the type system.
      case Use(var register) -> read(register);
    };
  }

  /// Lookup the register and crash if it's not defined.
  private SEXP read(Register register) {
    var value = topFrame().get(register);
    if (value == null) {
      throw fail("Uninitialized register: " + register);
    }
    return value;
  }

  /// Casts the value to a boolean and returns it, throws if not a boolean.
  private boolean isTrue(SEXP value) {
    return switch (value.asScalarLogical().orElse(null)) {
      case TRUE -> true;
      case FALSE -> false;
      case NA -> throw fail("Booleans can't be NA");
      case null -> throw fail("Booleans must be scalar logicals");
    };
  }

  /// Compute the runtime signature to select a dispatch version of a function.
  ///
  /// In the process, checks that `arguments` are instances of `explicit`'s parameter types, and
  /// throws [InterpreterException] if they don't.
  private Signature computeSignature(@Nullable Signature explicit, List<SEXP> arguments) {
    if (explicit == null) {
      return inferSignature(arguments);
    }

    if (explicit.parameterTypes().size() != arguments.size()) {
      throw fail(
          "Argument count mismatch (with signature): expected "
              + explicit.parameterTypes().size()
              + ", got "
              + arguments.size());
    }
    var numParameters = arguments.size();

    var argumentTypes = ImmutableList.<Type>builderWithExpectedSize(numParameters);
    for (var i = 0; i < numParameters; i++) {
      var parameterType = explicit.parameterTypes().get(i);
      var argument = arguments.get(i);

      var argumentType = checkType(argument, parameterType, "parameter " + i + " (of signature)");
      argumentTypes.add(argumentType);
    }

    // `implicit`'s return type and effects are TOP, since we can't infer anything about them.
    return new Signature(argumentTypes.build(), explicit.returnType(), explicit.effects());
  }

  /// Infer the `value`'s type, check it against `expected`, and return it.
  ///
  /// @throws InterpreterException if `value` isn't an instance.
  private Type checkType(SEXP value, Type expected, String context) {
    var actual = inferType(value, expected.ownership());
    if (!actual.isSubtypeOf(expected)) {
      throw fail(
          "Type mismatch for "
              + context
              + ": expected "
              + expected
              + ", got "
              + value
              + " {: "
              + actual
              + "}");
    }
    return actual;
  }

  private Signature inferSignature(List<SEXP> arguments) {
    return new Signature(
        arguments.stream()
            .map(a -> inferType(a, Ownership.SHARED))
            .collect(ImmutableList.toImmutableList()),
        Type.ANY_VALUE,
        Effects.ANY);
  }

  /// Infer the type of the [SEXP], giving it the ownership.
  ///
  /// Ownership of the outermost type doesn't exist at runtime, so expected ownership must be
  /// provided. Note that ownership of inner promise types DOES exist. Also, if the type can
  /// only be shared and the given ownership isn't, it's returned ownership is unspecified.
  private Type inferType(SEXP sexp, Ownership ownership) {
    // We can do better than `Type.of` for promises,
    // since we create promises with stub code.
    var promise = promises.get(sexp);
    if (promise != null) {
      // Promises are always shared. If `ownership` is wrong we'll get a type error later.
      return Type.promise(promise.expression.valueType(), promise.expression.effects());
    }

    return Type.of(sexp).withOwnership(ownership);
  }

  private StackFrame topFrame() {
    return stack.getLast();
  }

  /// An [SEXP] that we map to a [PromiseCode], so we can create and force [PromSXP] promises in
  /// the interpreter.
  private SEXP freshPromiseStub() {
    return SEXPs.symbol(".interpreterPromise" + nextPromiseId++);
  }

  /// An [SEXP] that we map to a [Function], so we can create and call [CloSXP] closures in
  /// the interpreter.
  private SEXP freshClosureStub() {
    return SEXPs.symbol(".interpreterClosure" + nextClosureId++);
  }

  private InterpreterException fail(String message) {
    return new InterpreterException(message, stack, globalEnv);
  }

  /// Result of executing a jump instruction.
  private sealed interface ControlFlow {
    record Goto(Target next) implements ControlFlow {}

    record Return(SEXP value) implements ControlFlow {}
  }

  private record PromiseCode(Promise expression, StackFrame frame) {}
}
