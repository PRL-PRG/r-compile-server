package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Stack;
import javax.annotation.Nullable;
import org.prlprg.fir.GlobalModules;
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
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ComplexSXP;
import org.prlprg.sexp.EmptyEnvSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ExprSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RawSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Strings;

/// FIŘ interpreter.
public final class Interpreter {
  // Input
  private final Module module;
  private final Map<Function, ExternalFunction> externalFunctions = new HashMap<>();
  private final Map<Abstraction, ExternalVersion> externalVersions = new HashMap<>();

  // State
  private final GlobalEnvSXP globalEnv;
  /// Forcing promise = the same frame at multiple indices.
  private final Stack<StackFrame> stack = new Stack<>();
  /// Presumably in the compiler, we store a reference to [PromiseCode] into [BCodeSXP][
  /// org.prlprg.sexp.BCodeSXP]'s
  /// constant pool. The bytecode calls into our code with the pool entry.
  ///
  /// Here, it's easier to create stub [SEXP]s and map them with this.
  private final Map<SEXP, PromiseCode> promises = new HashMap<>();
  /// Same situation as [#promises] except for [CloSXP].
  private final Map<SEXP, Function> closures = new HashMap<>();
  private int nextPromiseId = 0;

  /// Interpret the module in a global environment containing only its functions.
  ///
  /// New functions added to the module are automatically added to the interpreter's environment
  /// thanks to [org.prlprg.fir.ir.observer.Observer].
  public Interpreter(Module module) {
    this(module, Map.of());
  }

  /// Interpret the module in a global environment containing its functions and the given bindings.
  ///
  /// New functions added to the module are automatically added to the interpreter's environment
  /// thanks to [org.prlprg.fir.ir.observer.Observer].
  public Interpreter(Module module, Map<String, SEXP> bindings) {
    this.module = module;

    var baseEnv = new BaseEnvSXP();
    globalEnv = new GlobalEnvSXP(baseEnv, bindings);
    // Add module functions, including those in parents to the environment.
    addModuleToEnv(module, globalEnv);
    addModuleToEnv(GlobalModules.BUILTINS, baseEnv);
    // `GlobalModules.INTRINSICS` are only directly called, so we don't add them
    // because environments only store stub SEXPs that may be looked up by dynamic calls.

    // Add new module functions via an observer.
    module.addObserver(
        (method, arguments, returnValue) -> {
          switch (method) {
            case "Module#addFunction" -> {
              if (returnValue != null) {
                var f = (Function) returnValue;
                addFunctionToEnv(f, globalEnv);
              }
            }
            case "Module#removeFunction" -> {
              var f = (Function) arguments.getFirst();
              externalFunctions.remove(f);
              for (var v : f.versions()) {
                externalVersions.remove(v);
              }
            }
          }
        });
  }

  /// Adds stub closures for every function in the module to the environment.
  ///
  /// These stubs can be loaded by dynamic calls (`dyn&lt;x&gt;`). Otherwise, the dynamic call's
  /// function lookup won't see the function even if it has the looked-up name.
  private void addModuleToEnv(Module module, EnvSXP env) {
    for (var function : module.localFunctions()) {
      addFunctionToEnv(function, env);
    }
  }

  /// Adds a stub closure for the function to the environment.
  ///
  /// These stubs can be loaded by dynamic calls (`dyn&lt;x&gt;`). Otherwise, the dynamic call's
  /// function lookup won't see the function even if it has the looked-up name.
  private void addFunctionToEnv(Function function, EnvSXP env) {
    var stub = closureStub(function, env);
    env.set(function.name(), stub);
  }

  /// "Hijack" the function, so when it's dispatch-called and no versions match, the Java closure
  /// runs (instead of the interpreter crashing).
  public void registerExternalFunction(String functionName, ExternalFunction javaClosure) {
    var function = module.lookupFunction(functionName);
    if (function == null) {
      throw new IllegalArgumentException("Function " + functionName + " not in module:\n" + module);
    }
    if (externalFunctions.containsKey(function)) {
      throw new IllegalArgumentException("Function " + functionName + " is already hijacked");
    }
    externalFunctions.put(function, javaClosure);
  }

  /// "Hijack" the function version, so when it's called, the Java closure runs. The version's
  /// body must consist of a single [Unreachable] (`{ | ...; }`).
  public void registerExternalVersion(
      String functionName, int versionIndex, ExternalVersion javaClosure) {
    var function = module.lookupFunction(functionName);
    if (function == null) {
      throw new IllegalArgumentException("Function " + functionName + " not in module:\n" + module);
    }
    if (versionIndex < 0 || versionIndex >= function.versions().size()) {
      throw new IllegalArgumentException(
          "Function "
              + functionName
              + " version "
              + versionIndex
              + " is out of bounds:\n"
              + function);
    }
    var version = function.version(versionIndex);
    if (!version.locals().isEmpty()
        || version.cfg().bbs().size() != 1
        || !version.cfg().entry().statements().isEmpty()
        || !(version.cfg().entry().jump() instanceof Unreachable)) {
      throw new IllegalArgumentException(
          "Function " + functionName + " version " + versionIndex + " isn't a stub:\n" + version);
    }
    if (externalVersions.containsKey(version)) {
      throw new IllegalArgumentException(
          "Function " + functionName + " version " + versionIndex + " is already hijacked");
    }
    externalVersions.put(version, javaClosure);
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

    var best = function.guess(signature);
    if (best == null) {
      // See if we registered external code for this function.
      var hijacker = externalFunctions.get(function);
      if (hijacker != null) {
        return callExternal(hijacker, function, arguments, environment);
      }

      // Otherwise we called a function with no valid overloads, a runtime error (not `Rf_error`,
      // which is an R error but OK in the runtime, either).
      throw fail(
          "No versions match signature and arguments:"
              + "\nFunction: "
              + function.name()
              + "\nExplicit signature: "
              + explicitSignature
              + "\nArguments: "
              + arguments
              + "\nComputed signature: "
              + signature
              + "\nAllowed signatures: ["
              + function.versions().stream()
                  .map(Abstraction::signature)
                  .collect(Strings.joining(", "))
              + "]");
    }

    return call(best, arguments, environment);
  }

  /// Calls the function version with the arguments in the environment.
  public SEXP call(Abstraction abstraction, List<SEXP> arguments, EnvSXP environment) {
    // Hijack if we registered external code for this version
    var hijacker = externalVersions.get(abstraction);
    if (hijacker != null) {
      return callExternal(hijacker, abstraction, arguments, environment);
    }

    var frame = new StackFrame(environment);

    // Check number of parameters
    var params = abstraction.parameters();
    if (arguments.size() != params.size()) {
      throw fail(
          "Argument count mismatch: expected " + params.size() + ", got " + arguments.size());
    }

    // Bind parameters
    for (int i = 0; i < params.size(); i++) {
      var param = params.get(i);
      var arg = arguments.get(i);
      checkType(arg, param.type(), "parameter " + param.variable().name());
      frame.put(param.variable(), arg);
    }

    // Execute CFG
    return run(frame, abstraction.cfg());
  }

  private SEXP callExternal(
      ExternalFunction hijacker, Function hijacked, List<SEXP> arguments, EnvSXP environment) {
    checkStack();

    try {
      return hijacker.call(this, hijacked, arguments, environment);
    } catch (InterpretException e) {
      throw e;
    } catch (Throwable e) {
      throw fail("External dispatch call failed", e);
    }
  }

  private SEXP callExternal(
      ExternalVersion hijacker, Abstraction hijacked, List<SEXP> arguments, EnvSXP environment) {
    checkStack();

    // Add the frame for a nicer stack trace.
    var frame = new StackFrame(environment);
    frame.enter(new CFGCursor(hijacked.cfg()));
    stack.push(frame);

    SEXP result;
    try {
      result = hijacker.call(this, hijacked, arguments, environment);
    } catch (InterpretException e) {
      throw e;
    } catch (Throwable e) {
      throw fail("External call failed", e);
    }

    var f = stack.pop();
    assert f == frame : "stack imbalance";
    frame.exit();

    return result;
  }

  /// Interprets the control flow graph starting from the entry block.
  ///
  /// Also pushes/pops `frame`; every [CFG] runs at its own stack frame index (the frame itself
  /// is reused across all CFGs in the [Abstraction]).
  private SEXP run(StackFrame frame, CFG cfg) {
    checkStack();

    var cursor = new CFGCursor(cfg);
    frame.enter(cursor);
    stack.push(frame);

    while (true) {
      var nextControl = cursor.iterateBb(this::run, this::run);

      switch (nextControl) {
        case ControlFlow.Goto(var nextTarget) -> {
          cursor.moveToStart(nextTarget.bb());
          bindPhiArguments(nextTarget);
        }
        case ControlFlow.Return(var value) -> {
          var f = stack.pop();
          assert f == frame : "stack imbalance";
          frame.exit();
          return value;
        }
      }
    }
  }

  private static final int STACK_LIMIT = 1000;

  private void checkStack() {
    if (stack.size() >= STACK_LIMIT) {
      throw fail("Stack overflow");
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
      case Unreachable _ -> throw fail("Reached unimplemented or \"unreachable\" code");
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
          case DispatchCallee(var function, var signature) ->
              call(function, signature, arguments, environment);
          case InlineCallee(var inlinee) -> call(inlinee, arguments, environment);
          case DynamicCallee(var variable, var _) -> {
            var function = loadFun(variable);
            yield call(function, null, arguments, environment);
          }
        };
      }
      case Cast(var target, var type) -> {
        var value = run(target);
        checkType(value, type, "cast");
        yield value;
      }
      case Closure closure -> closureStub(closure.code(), topFrame().environment());
      case Dup(var value) -> {
        var sexp = run(value);

        if (!(sexp instanceof ListOrVectorSXP<?> s)) {
          throw fail("Can't duplicate: " + sexp);
        }

        yield s.copy();
      }
      case Force(var promArg) -> {
        var promValue = run(promArg);
        if (!(promValue instanceof PromSXP promSXP)) {
          throw fail("Can't force non-promise: " + promValue);
        }

        yield force(promSXP);
      }
      case Load(var variable) -> {
        var value = topFrame().get(variable);
        if (value == null) {
          throw fail("Unbound variable: " + variable.name());
        }
        yield value;
      }
      case MaybeForce(var value) -> {
        var sexp = run(value);
        if (!(sexp instanceof PromSXP promSXP)) {
          yield sexp;
        }

        yield force(promSXP);
      }
      case MkVector(var elements) -> {
        var values = elements.stream().map(this::run).collect(ImmutableList.toImmutableList());
        // TODO: If empty, we must provide or guess the type.
        if (values.stream().allMatch(v -> v.asScalarInteger().isPresent())) {
          yield SEXPs.integer(
              values.stream().mapToInt(v -> v.asScalarInteger().orElseThrow()).toArray());
        } else if (values.stream().allMatch(v -> v.asScalarLogical().isPresent())) {
          yield SEXPs.logical(
              values.stream().map(v -> v.asScalarLogical().orElseThrow()).toArray(Logical[]::new));
        } else if (values.stream().allMatch(v -> v.asScalarReal().isPresent())) {
          yield SEXPs.real(
              values.stream().mapToDouble(v -> v.asScalarReal().orElseThrow()).toArray());
        } else if (values.stream().allMatch(v -> v.asScalarComplex().isPresent())) {
          yield SEXPs.complex(
              values.stream().map(v -> v.asScalarComplex().orElseThrow()).toArray(Complex[]::new));
        } else if (values.stream().allMatch(v -> v.asScalarString().isPresent())) {
          yield SEXPs.string(
              values.stream().map(v -> v.asScalarString().orElseThrow()).toArray(String[]::new));
        } else if (values.stream().allMatch(v -> v.asScalarRaw().isPresent())) {
          yield SEXPs.raw(
              values.stream().map(v -> v.asScalarRaw().orElseThrow()).toArray(Byte[]::new));
        } else {
          throw fail(
              "FIŘ doesn't support creating a vector from mixed types: "
                  + values.stream().map(SEXP::type).distinct().toList());
        }
      }
      case Placeholder() -> throw fail("Can't evaluate placeholder");
      case Promise promise -> promiseStub(promise);
      case ReflectiveLoad(var promArg, var variable) -> {
        var promSxp = run(promArg);

        if (!(promSxp instanceof PromSXP promise)) {
          throw fail("Can't reflective load in non-promise: " + promSxp);
        }
        var env = promise.env();

        yield env.getLocal(variable.name())
            .orElseThrow(() -> fail("Unbound variable in promise environment: " + variable.name()));
      }
      case ReflectiveStore(var promArg, var variable, var valueArg) -> {
        var promSxp = run(promArg);
        var valueSxp = run(valueArg);

        if (!(promSxp instanceof PromSXP promise)) {
          throw fail("Can't reflective load in non-promise: " + promSxp);
        }
        var env = promise.env();

        env.set(variable.name(), valueSxp);
        yield valueSxp;
      }
      case Store(var variable, var value) -> {
        var sexp = run(value);
        topFrame().put(variable, sexp);
        yield sexp;
      }
      case SubscriptLoad(var vectorArg, var indexArg) -> {
        var vectorSxp = run(vectorArg);
        // Some code is redundant with `SubscriptStore` but it's not worth abstracting.
        @SuppressWarnings("DuplicatedCode")
        var indexSxp = run(indexArg);

        if (!(vectorSxp instanceof ListOrVectorSXP<?> vector)) {
          throw fail("Can't subscript non-vector: " + vectorSxp);
        }
        var index = indexSxp.asScalarInteger().orElse(null);
        if (index == null) {
          throw fail("Can't subscript with non-integer index: " + indexSxp);
        }

        if (index < 0 || index >= vector.size()) {
          throw fail(
              "Subscript index out of bounds: " + index + " for vector of size " + vector.size());
        }

        // Get scalar SEXP from vector SEXP
        yield switch (vector) {
          case LglSXP l -> SEXPs.logical(l.get(index));
          case IntSXP i -> SEXPs.integer(i.get(index));
          case RealSXP r -> SEXPs.real(r.get(index));
          case ComplexSXP c -> SEXPs.complex(c.get(index));
          case StrSXP s -> SEXPs.string(s.get(index));
          case RawSXP r -> SEXPs.raw(r.get(index));
          case VecSXP v -> v.get(index);
          case ListSXP l -> l.get(index).value();
          case ExprSXP e -> e.get(index);
        };
      }
      case SubscriptStore(var vectorArg, var indexArg, var valueArg) -> {
        var vectorSxp = run(vectorArg);
        // Some code is redundant with `SubscriptLoad` but it's not worth abstracting.
        @SuppressWarnings("DuplicatedCode")
        var indexSxp = run(indexArg);
        var valueSxp = run(valueArg);

        if (!(vectorSxp instanceof ListOrVectorSXP<?> vector)) {
          throw fail("Can't subscript non-vector: " + vectorSxp);
        }
        var index = indexSxp.asScalarInteger().orElse(null);
        if (index == null) {
          throw fail("Can't subscript with non-integer index: " + indexSxp);
        }
        var value = valueSxp.as(vector.getCanonicalType()).orElse(null);
        if (value == null) {
          throw fail("Can't store " + valueSxp.type() + " value in " + vector.type() + " vector");
        }

        if (index < 0 || index >= vector.size()) {
          throw fail(
              "Subscript index out of bounds: " + index + " for vector of size " + vector.size());
        }

        // Set scalar SEXP in vector SEXP
        // Get scalar SEXP from vector SEXP
        switch (vector) {
          case LglSXP l -> l.set(index, value.asScalarLogical().orElseThrow());
          case IntSXP i -> i.set(index, value.asScalarInteger().orElseThrow());
          case RealSXP r -> r.set(index, value.asScalarReal().orElseThrow());
          case ComplexSXP c -> c.set(index, value.asScalarComplex().orElseThrow());
          case StrSXP s -> s.set(index, value.asScalarString().orElseThrow());
          case RawSXP r -> r.set(index, value.asScalarRaw().orElseThrow());
          case VecSXP v -> v.set(index, value);
          case ListSXP l -> l.set(index, value);
          case ExprSXP e -> e.get(index);
        }

        yield value;
      }
      case SuperLoad(var variable) -> {
        var parentEnv = topFrame().environment().parent();
        var value = parentEnv.get(variable.name()).orElse(null);
        if (value == null) {
          throw fail("Unbound variable in parent environment: " + variable.name());
        }
        yield value;
      }
      case SuperStore(var variable, var value) -> {
        var parentEnv = topFrame().environment().parent();
        var sexp = run(value);

        // Super-store implementation
        while (!(parentEnv instanceof EmptyEnvSXP)) {
          if (parentEnv.getLocal(variable.name()).isPresent()) {
            parentEnv.set(variable.name(), sexp);
            yield sexp;
          }
          parentEnv = parentEnv.parent();
        }
        throw fail("Unbound variable in parent environment: " + variable.name());
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

  /// Function lookup implementation.
  private Function loadFun(NamedVariable variable) {
    var env = topFrame().environment();
    while (!(env instanceof EmptyEnvSXP)) {
      var value = env.getLocal(variable.name()).orElse(null);
      if (value instanceof CloSXP cloSxp) {
        var function = closures.get(cloSxp);
        if (function == null) {
          throw fail("Can't call closure created outside the interpreter: " + cloSxp);
        }
        // Don't check `GlobalModules.INTRINSICS` because they're never stubs.
        if (module.localFunction(function.name()) != function
            && GlobalModules.BUILTINS.localFunction(function.name()) != function) {
          throw fail(
              "Can't call function that was removed or is from another module: " + function.name());
        }
        return function;
      }

      env = env.parent();
    }
    throw fail("Unbound function: " + variable.name());
  }

  /// Evaluate a promise that was created by the interpreter.
  public SEXP force(PromSXP promSXP) {
    // If the promise is already forced, return the value.
    var eager = promSXP.boundVal();
    if (eager != null) {
      return eager;
    }

    // Evaluate the promise.
    var promCode = promises.remove(promSXP);
    if (promCode == null) {
      throw fail("Can't force promise code created outside the interpreter: " + promSXP);
    }
    var promExpr = promCode.expression;

    var value = run(promCode.frame, promExpr.code());
    promSXP.bind(value);
    checkType(value, promExpr.valueType(), "promise");
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
  /// throws [InterpretException] if they don't.
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
  /// @throws InterpretException if `value` isn't an instance.
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
    if (sexp instanceof PromSXP promSxp) {
      var promise = promises.get(promSxp);
      if (promise != null) {
        // Promises are always shared. If `ownership` is wrong we'll get a type error later.
        return Type.promise(promise.expression.valueType(), promise.expression.effects());
      }
    }

    return Type.of(sexp).withOwnership(ownership);
  }

  private StackFrame topFrame() {
    return stack.getLast();
  }

  /// We don't actually know the function's possible parameters in the general case,
  /// nor do we use them, so we statically specify that it may take any parameters.
  private static final ListSXP CLOSURE_STUB_PARAMETERS = SEXPs.list(TaggedElem.DOTS);

  /// Returns a [CloSXP] wrapping the [Function], which can be function looked-up and dynamically
  /// called by the interpreter.
  private CloSXP closureStub(Function function, EnvSXP enclosingEnv) {
    var codeStub = SEXPs.lang(SEXPs.symbol(".Interpret"), SEXPs.symbol(function.name()));
    var sexp = SEXPs.closure(CLOSURE_STUB_PARAMETERS, codeStub, enclosingEnv);
    closures.put(sexp, function);
    return sexp;
  }

  /// Returns a [PromSXP] wrapping the [Promise], which can be forced by the interpreter.
  private PromSXP promiseStub(Promise promExpr) {
    var codeStub = SEXPs.lang(SEXPs.symbol(".Interpret"), SEXPs.integer(nextPromiseId++));
    var sexp = SEXPs.promise(codeStub, topFrame().environment());
    promises.put(sexp, new PromiseCode(promExpr, topFrame()));
    return sexp;
  }

  private InterpretException fail(String message) {
    return fail(message, null);
  }

  private InterpretException fail(String message, @Nullable Throwable cause) {
    return new InterpretException(message, cause, stack, globalEnv);
  }

  /// Result of executing a jump instruction.
  private sealed interface ControlFlow {
    record Goto(Target next) implements ControlFlow {}

    record Return(SEXP value) implements ControlFlow {}
  }

  private record PromiseCode(Promise expression, StackFrame frame) {}
}
