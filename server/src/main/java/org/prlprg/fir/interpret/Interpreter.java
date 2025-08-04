package org.prlprg.fir.interpret;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.List;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.cfg.CFG;
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
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.SEXP;

// TODO: Allow user to add "external" definitions for functions in `module`.
// TODO: Declare a local variable `CFGCursor` and update it as we run for better exceptions.
//   Replace `throw new InterpreterException` with `throw fail` and define `fail`

/// FIŘ interpreter.
public final class Interpreter {
  private final Module module;
  private final GlobalEnvSXP globalEnv;
  private final Deque<StackFrame> callStack = new ArrayDeque<>();
  private @Nullable StackFrame currentFrame;

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
      throw new InterpreterException("Unknown function: " + functionName);
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
    var signature = inferSignature(arguments).intersection(explicitSignature);

    var best = function.worstGuess(signature);
    if (best == null) {
      throw new InterpreterException("No versions match function: " + function.name());
    }

    return call(best, arguments, environment);
  }

  /// Calls the function version with the arguments in the environment.
  public SEXP call(Abstraction abstraction, List<SEXP> arguments, EnvSXP environment) {
    var frame = new StackFrame(environment);
    callStack.push(frame);

    try {
      // Bind parameters
      var params = abstraction.parameters();
      if (arguments.size() != params.size()) {
        throw new InterpreterException(
            "Argument count mismatch: expected " + params.size() + ", got " + arguments.size());
      }

      for (int i = 0; i < params.size(); i++) {
        var param = params.get(i);
        var arg = arguments.get(i);
        checkType(arg, param.type(), "parameter " + param.variable().name());
        frame.setRegister(param.variable(), arg);
      }

      // Execute CFG
      return run(abstraction.cfg());
    } finally {
      var f = callStack.pop();
      assert f == frame : "stack imbalance";
    }
  }

  /// Interprets the control flow graph starting from the entry block.
  private SEXP run(CFG cfg) {
    var currentBB = cfg.entry();

    while (true) {
      for (var stmt : currentBB.statements()) {
        run(stmt);
      }
      var nextControl = run(currentBB.jump());

      switch (nextControl) {
        case ControlFlow.Goto(var nextTarget) -> {
          bindPhiArguments(nextTarget);
          currentBB = nextTarget.bb();
        }
        case ControlFlow.Return(var value) -> {
          return value;
        }
      }
    }
  }

  /// Executes a statement instruction.
  private void run(Statement statement) {
    var value = run(statement.expression());
    if (statement.assignee() != null) {
      getCurrentFrame().put(statement.assignee(), value);
    }
  }

  /// Executes a jump instruction and returns the next control-flow action.
  private ControlFlow run(Jump jump) {
    return switch (jump) {
      case Return(var ret) -> new ControlFlow.Return(run(ret));
      case Goto(var next) -> new ControlFlow.Goto(next);
      case If(var condition, var ifTrue, var ifFalse) ->
          new ControlFlow.Goto(isTrue(run(condition)) ? ifTrue : ifFalse);
      case Unreachable _ -> throw new InterpreterException("Reached unreachable instruction");
    };
  }

  /// Binds phi arguments to phi variables in the target block.
  private void bindPhiArguments(Target target) {
    var parameters = target.bb().phiParameters();
    var arguments = target.phiArgs();
    if (parameters.size() != arguments.size()) {
      throw new InterpreterException(
          "Phi argument count mismatch: expected "
              + parameters.size()
              + ", got "
              + arguments.size());
    }

    for (int i = 0; i < parameters.size(); i++) {
      var phiVar = parameters.get(i);
      var phiValue = run(arguments.get(i));
      getCurrentFrame().put(phiVar, phiValue);
    }
  }

  /// Evaluates an expression and returns its value.
  private SEXP run(Expression expression) {
    // TODO: Replace these with record patterns (e.g. `Aea(var aea)`)
    // EXCEPT don't replace `call` or `closure`.
    // TODO: Inline all the `evaluate...` methods.
    // We don't need to make them separate methods because there's no reuse.
    return switch (expression) {
      case Aea aea -> run(aea.argument());
      case Call call -> evaluateCall(call);
      case Cast cast -> evaluateCast(cast);
      case Closure closure -> evaluateClosure(closure);
      case Dup dup -> evaluateDup(dup);
      case Force force -> evaluateForce(force);
      case Load load -> evaluateLoad(load);
      case MaybeForce maybeForce -> evaluateMaybeForce(maybeForce);
      case MkVector mkVector -> evaluateMkVector(mkVector);
      case Placeholder _ -> throw new InterpreterException("Can't evaluate placeholder");
      case Promise promise -> evaluatePromise(promise);
      case ReflectiveLoad reflLoad -> evaluateReflectiveLoad(reflLoad);
      case ReflectiveStore reflStore -> evaluateReflectiveStore(reflStore);
      case Store store -> evaluateStore(store);
      case SubscriptLoad subLoad -> evaluateSubscriptLoad(subLoad);
      case SubscriptStore subStore -> evaluateSubscriptStore(subStore);
      case SuperLoad superLoad -> evaluateSuperLoad(superLoad);
      case SuperStore superStore -> evaluateSuperStore(superStore);
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
    var value = getCurrentFrame().get(register);
    if (value == null) {
      throw new InterpreterException("Uninitialized register: " + register);
    }
    return value;
  }

  /// Casts the value to a boolean and returns it, throws if not a boolean.
  private boolean isTrue(SEXP value) {
    return switch (value.asScalarLogical().orElse(null)) {
      case TRUE -> true;
      case FALSE -> false;
      case NA -> throw new InterpreterException("Booleans can't be NA");
      case null -> throw new InterpreterException("Booleans must be scalar logicals");
    };
  }

  private StackFrame getCurrentFrame() {
    return callStack.getLast();
  }

  /// Result of executing a jump instruction.
  private sealed interface ControlFlow {
    record Goto(Target next) implements ControlFlow {}

    record Return(SEXP value) implements ControlFlow {}
  }
}
