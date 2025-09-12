package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Stack;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.feedback.Feedback;
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
import org.prlprg.fir.ir.expression.AssumeConstant;
import org.prlprg.fir.ir.expression.AssumeFunction;
import org.prlprg.fir.ir.expression.AssumeType;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
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
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Kind.Dots;
import org.prlprg.fir.ir.type.Kind.PrimitiveVector;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ComplexSXP;
import org.prlprg.sexp.DotsListSXP;
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
import org.prlprg.util.Lists;
import org.prlprg.util.NotImplementedError;
import org.prlprg.util.Streams;
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

  // Feedback (part of state but not depended on by [Interpreter], only updated).
  private final Map<Abstraction, Feedback> feedbacks = new HashMap<>();

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

  /// "Hijack" the function version, so when it's called, the Java closure runs. The version
  /// must be a [stub](Abstraction#isStub).
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
    if (!version.isStub()) {
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

  public BaseEnvSXP baseEnv() {
    return (BaseEnvSXP) globalEnv.parent();
  }

  public Feedback feedback(Abstraction scope) {
    return feedbacks.computeIfAbsent(scope, _ -> new Feedback());
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
    return call(function, explicitSignature, List.of(), arguments, environment);
  }

  /// Gets the function's best applicable version, and calls it with the arguments in the
  /// environment.
  public SEXP call(
      Function function,
      @Nullable Signature explicitSignature,
      List<String> argumentNames,
      List<SEXP> arguments,
      EnvSXP environment) {
    var signature = computeSignature(explicitSignature, arguments);

    var best = function.guess(signature);
    if (best == null) {
      // See if we registered external code for this function.
      var hijacker = externalFunctions.get(function);
      if (hijacker != null) {
        var argumentsSxp =
            Streams.zip(
                    Stream.concat(argumentNames.stream(), Stream.generate(() -> "")),
                    arguments.stream(),
                    (argName, arg) -> new TaggedElem(argName.isEmpty() ? null : argName, arg))
                .collect(SEXPs.toList());

        return callExternal(hijacker, function, argumentsSxp, environment);
      }

      // Otherwise we called a function with no valid overloads, a runtime error (not `Rf_error`,
      // which is an R error but OK in the runtime, either).
      throw fail(
          "No versions match signature and arguments, and no catch-all:"
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

    var result = call(best, arguments, environment);

    checkType(result, function.baseline().returnType(), "return");
    return result;
  }

  /// Calls the function version with the arguments in the environment.
  public SEXP call(Abstraction abstraction, List<SEXP> arguments, EnvSXP environment) {
    // Hijack if we registered external code for this version
    var hijacker = externalVersions.get(abstraction);
    if (hijacker != null) {
      return callExternal(hijacker, abstraction, arguments, environment);
    }

    var cfg = abstraction.cfg();
    if (cfg == null) {
      throw fail("Can't call unregistered stub");
    }

    var frame = mkFrame(abstraction, environment);
    var feedback = frame.scopeFeedback();

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
      checkType(
          arg, param.type(), "argument " + i + " (parameter " + param.variable().name() + ")");

      frame.put(param.variable(), arg);

      feedback.recordConstant(param.variable(), arg);
      recordTypeFeedback(feedback, param.variable(), arg);
    }

    // Execute CFG
    var result = run(frame, cfg);

    checkType(result, abstraction.returnType(), "return");
    return result;
  }

  private SEXP callExternal(
      ExternalFunction hijacker, Function hijacked, ListSXP arguments, EnvSXP environment) {
    checkStack();

    try {
      var result = hijacker.call(this, hijacked, arguments, environment);

      checkType(result, hijacked.baseline().returnType(), "return (from external)");
      return result;
    } catch (InterpretException e) {
      throw e;
    } catch (Throwable e) {
      throw fail("External dispatch call failed", e);
    }
  }

  private SEXP callExternal(
      ExternalVersion hijacker, Abstraction hijacked, List<SEXP> arguments, EnvSXP environment) {
    checkStack();

    try {
      var result = hijacker.call(this, hijacked, arguments, environment);

      checkType(result, hijacked.returnType(), "return (from external)");
      return result;
    } catch (InterpretException e) {
      throw e;
    } catch (Throwable e) {
      throw fail("External call failed", e);
    }
  }

  private StackFrame mkFrame(Abstraction scope, EnvSXP parentEnv) {
    return new StackFrame(scope, parentEnv, feedbacks.computeIfAbsent(scope, _ -> new Feedback()));
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
      var nextControl = cursor.iterateCurrentBb1(this::run, this::run);

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

  /// Reasonably high, but low enough so we can't hit Java's stack limit first.
  private static final int STACK_LIMIT = 1000;

  private void checkStack() {
    if (stack.size() >= STACK_LIMIT) {
      throw fail("Stack overflow");
    }
  }

  /// Executes a statement instruction.
  private void run(Statement statement) {
    var value = run(statement.expression());

    var assignee = statement.assignee();
    if (assignee != null) {
      topFrame().put(assignee, value);
      recordTypeFeedback(topFrame().scopeFeedback(), assignee, value);
    }
  }

  /// Executes a jump instruction and returns the next control-flow action.
  private ControlFlow run(Jump jump) {
    return switch (jump) {
      case Goto(var next) -> new ControlFlow.Goto(next);
      case If(var condition, var ifTrue, var ifFalse) -> {
        var condSexp = run(condition);

        if (condition instanceof Read(var conditionReg)) {
          topFrame().scopeFeedback().recordConstant(conditionReg, condSexp);
        }

        yield new ControlFlow.Goto(isTrue(condSexp) ? ifTrue : ifFalse);
      }
      case Return(var ret) -> new ControlFlow.Return(run(ret));
      case Checkpoint(var _, var _), Deopt(var _, var _) -> throw new NotImplementedError();
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
      recordTypeFeedback(topFrame().scopeFeedback(), phiVar, phiValue);
    }
  }

  /// Evaluates an expression and returns its value.
  ///
  /// @throws IllegalStateException If called outside of evaluation.
  public SEXP run(Expression expression) {
    checkEvaluation();
    return switch (expression) {
      case Aea(var value) -> run(value);
      case AssumeType(var _, var _), AssumeConstant(var _, var _), AssumeFunction(var _, var _) ->
          throw new NotImplementedError();
      case Call call -> {
        var callee = call.callee();
        var arguments = call.callArguments().stream().map(this::run).toList();
        var environment = topFrame().environment();

        yield switch (callee) {
          case StaticCallee(var _, var version) -> call(version, arguments, environment);
          case DispatchCallee(var function, var signature) ->
              call(function, signature, arguments, environment);
          case InlineCallee(var inlinee) -> call(inlinee, arguments, environment);
          case DynamicCallee(var actualCallee, var argumentNames) -> {
            var calleeSexp = run(actualCallee);
            if (!(calleeSexp instanceof CloSXP cloSXP)) {
              throw fail("Not a function: " + calleeSexp);
            }

            var function = extractClosure(cloSXP);
            if (function == null) {
              throw fail("Can't call function not in this interpreter: " + cloSXP);
            }

            if (actualCallee instanceof Read(var calleeReg)) {
              topFrame().scopeFeedback().recordCallee(calleeReg, function);
            }

            yield call(function, null, argumentNames, arguments, environment);
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
      case Load(var variable) -> load(variable);
      case LoadFun(var variable, var env) -> {
        var value =
            switch (env) {
              case LOCAL -> topFrame().getFunction(variable);
              case GLOBAL -> globalEnv.getFunction(variable.name()).orElse(null);
              case BASE -> baseEnv().getFunction(variable.name()).orElse(null);
            };
        if (value == null) {
          throw fail("Unbound function: " + variable.name());
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
      case MkVector(var kind, var elements) ->
          mkVector(
              kind,
              Lists.mapLazy(elements, e -> Optional.ofNullable(e.name())),
              Lists.mapLazy(elements, e -> run(e.argument())));
      case MkEnv(), PopEnv() -> throw new NotImplementedError();
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
      case SubscriptRead(var vectorArg, var indexArg) -> {
        var vectorSxp = run(vectorArg);
        var indexSxp = run(indexArg);

        if (!(vectorSxp instanceof ListOrVectorSXP<?> vector)) {
          throw fail("Can't subscript non-vector: " + vectorSxp);
        }

        var index = indexSxp.asScalarInteger().orElse(null);
        if (index == null) {
          throw fail("Can't subscript with non-integer index: " + indexSxp);
        }

        yield subscriptLoad(vector, index);
      }
      case SubscriptWrite(var vectorArg, var indexArg, var valueArg) -> {
        var vectorSxp = run(vectorArg);
        var indexSxp = run(indexArg);
        var value = run(valueArg);

        if (!(vectorSxp instanceof ListOrVectorSXP<?> vector)) {
          throw fail("Can't subscript non-vector: " + vectorSxp);
        }

        var index = indexSxp.asScalarInteger().orElse(null);
        if (index == null) {
          throw fail("Can't subscript with non-integer index: " + indexSxp);
        }

        yield subscriptStore(vector, index, value);
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

  /// Evaluates an [Argument] and returns its value, e.g. [#read(Register)] if it's a [Register].
  ///
  /// @throws IllegalStateException If called outside of evaluation.
  public SEXP run(Argument argument) {
    checkEvaluation();
    return switch (argument) {
      case Constant(var constant) -> constant;
      case Read(var register) -> read(register);
        // `Read` and `Use` are evaluated the same, the only difference is in the type system.
      case Use(var register) -> read(register);
    };
  }

  /// Lookup the register (on the stack) and crash if it's not defined.
  ///
  /// @throws IllegalStateException If called outside of evaluation.
  public SEXP read(Register register) {
    checkEvaluation();
    var value = topFrame().get(register);
    if (value == null) {
      throw fail("Uninitialized register: " + register);
    }
    return value;
  }

  /// Lookup the named variable (in the environment hierarchy) and crash if it's not defined.
  ///
  /// @throws IllegalStateException If called outside of evaluation.
  public SEXP load(NamedVariable nv) {
    // `..n` is a special case.
    if (nv.isDdNum()) {
      var n = nv.ddIndex();

      if (n == 0) {
        throw fail("Error: indexing '...' with non-positive index 0");
      }

      var dots = topFrame().get(NamedVariable.DOTS);
      if (dots == null) {
        throw fail("Error: '" + nv + "' used in an incorrect context, no ... to look in");
      }

      var dots1 = (DotsListSXP) dots;

      if (n > dots1.size()) {
        throw fail("Error: the ... list contains fewer than " + n + " element(s)");
      }
      return dots1.value(n - 1);
    }

    var value = topFrame().get(nv);
    if (value == null) {
      throw fail("Unbound variable: " + nv.name());
    }
    return value;
  }

  /// Create a vector of the correct type to hold `values`
  ///
  /// @throws IllegalArgumentException If `names` and `values` are different sizes.
  /// @throws InterpretException If `values` aren't elements of `kind`
  public SEXP mkVector(Kind kind, List<Optional<NamedVariable>> elementNames, List<SEXP> elements) {
    if (elementNames.size() != elements.size()) {
      throw new IllegalArgumentException(
          "Element names and values count mismatch: "
              + elementNames.size()
              + " names, "
              + elements.size()
              + " values");
    }

    return switch (kind) {
      case PrimitiveVector(var primitiveKind) -> {
        if (elementNames.stream().anyMatch(Optional::isPresent)) {
          throw fail("Primitive vector elements can't have names");
        }

        yield switch (primitiveKind) {
          case PrimitiveKind.INTEGER ->
              SEXPs.integer(
                  elements.stream()
                      .mapToInt(
                          v -> v.asScalarInteger().orElseThrow(() -> fail("Not an integer: " + v)))
                      .toArray());
          case PrimitiveKind.REAL ->
              SEXPs.real(
                  elements.stream()
                      .mapToDouble(
                          v -> v.asScalarReal().orElseThrow(() -> fail("Not a real: " + v)))
                      .toArray());
          case PrimitiveKind.LOGICAL ->
              SEXPs.logical(
                  elements.stream()
                      .map(v -> v.asScalarLogical().orElseThrow(() -> fail("Not a logical: " + v)))
                      .toArray(Logical[]::new));
          case PrimitiveKind.STRING ->
              SEXPs.string(
                  elements.stream()
                      .map(v -> v.asScalarString().orElseThrow(() -> fail("Not a string: " + v)))
                      .toArray(String[]::new));
        };
      }
      case Dots() -> throw new NotImplementedError();
      default -> throw fail("Unsupported vector kind: " + kind);
    };
  }

  public SEXP subscriptLoad(ListOrVectorSXP<?> vector, int index) {
    if (index < 0 || index >= vector.size()) {
      throw fail(
          "Subscript index out of bounds: " + index + " for vector of size " + vector.size());
    }

    // Get scalar SEXP from vector SEXP
    return switch (vector) {
      case LglSXP l -> SEXPs.logical(l.get(index));
      case IntSXP i -> SEXPs.integer(i.get(index));
      case RealSXP r -> SEXPs.real(r.get(index));
      case ComplexSXP c -> SEXPs.complex(c.get(index));
      case StrSXP s -> SEXPs.string(s.get(index));
      case RawSXP r -> SEXPs.raw(r.get(index));
      case VecSXP v -> v.get(index);
      case ListSXP l -> l.get(index).value();
      case DotsListSXP d -> d.get(index).value();
      case ExprSXP e -> e.get(index);
    };
  }

  public SEXP subscriptStore(ListOrVectorSXP<?> vector, int index, SEXP value) {
    if (!vector.getCanonicalType().isInstance(value)) {
      throw fail("Can't store " + value.type() + " value in " + vector.type() + " vector");
    }

    if (index < 0 || index >= vector.size()) {
      throw fail(
          "Subscript index out of bounds: " + index + " for vector of size " + vector.size());
    }

    // Set scalar SEXP in vector SEXP
    switch (vector) {
      case LglSXP l -> l.set(index, value.asScalarLogical().orElseThrow());
      case IntSXP i -> i.set(index, value.asScalarInteger().orElseThrow());
      case RealSXP r -> r.set(index, value.asScalarReal().orElseThrow());
      case ComplexSXP c -> c.set(index, value.asScalarComplex().orElseThrow());
      case StrSXP s -> s.set(index, value.asScalarString().orElseThrow());
      case RawSXP r -> r.set(index, value.asScalarRaw().orElseThrow());
      case VecSXP v -> v.set(index, value);
      case ListSXP l -> l.set(index, value);
      case DotsListSXP d -> d.set(index, value);
      case ExprSXP e -> e.get(index);
    }

    return value;
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

  private void recordTypeFeedback(Feedback feedback, Register variable, SEXP value) {
    feedback.recordType(variable, inferType(value, Ownership.SHARED));
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

      var argumentType = checkType(argument, parameterType, "argument " + i + " (for signature)");
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
      // Give these shared ownerships in the error message, since ownerships aren't the problem.
      throw fail(
          "Type mismatch in "
              + context
              + ": "
              + value
              + " {:"
              + actual.withOwnership(Ownership.SHARED)
              + "}"
              + " isn't a(n) "
              + expected.withOwnership(Ownership.SHARED));
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

  /// Infer the type of the [SEXP], giving it the ownership iff permissible.
  ///
  /// Ownership of the outermost type doesn't exist at runtime, so expected ownership must be
  /// provided. Note that ownership of inner promise types DOES exist. Also, if the type is only
  /// well-formed iff shared and the given ownership isn't, it's returned as shared.
  public Type inferType(SEXP sexp, Ownership ownership) {
    // We can do better than `Type.of` for promises,
    // since we create promises with stub code.
    if (sexp instanceof PromSXP promSxp) {
      var promise = promises.get(promSxp);
      if (promise != null) {
        return Type.promise(promise.expression.valueType(), promise.expression.effects());
      }
    }

    var type = Type.of(sexp);
    // Set ownership only if the type is well-formed with it.
    return type.kind().isWellFormedWithOwnership() ? type.withOwnership(ownership) : type;
  }

  private void checkEvaluation() {
    if (stack.isEmpty()) {
      throw new IllegalStateException("can only be called during evaluation");
    }
  }

  private StackFrame topFrame() {
    if (stack.isEmpty()) {
      throw new IllegalStateException("stack is empty");
    }
    return stack.getLast();
  }

  /// We don't actually know the function's possible parameters in the general case,
  /// nor do we use them, so we statically specify that it may take any parameters.
  private static final ListSXP CLOSURE_STUB_PARAMETERS = SEXPs.list(TaggedElem.DOTS);

  /// If the closure was produced by [#closureStub(Function, EnvSXP)], returns the [Function].
  public @Nullable Function extractClosure(CloSXP cloSxp) {
    var function = closures.get(cloSxp);
    if (function == null) {
      // Closure wasn't created by this interpreter
      return null;
    }
    // Don't check `GlobalModules.INTRINSICS` because they're never stubs.
    if (module.localFunction(function.name()) != function
        && GlobalModules.BUILTINS.localFunction(function.name()) != function) {
      // Closure was removed or is from another interpreter.
      return null;
    }
    return function;
  }

  /// Returns a [CloSXP] wrapping the [Function], which can be function looked-up and dynamically
  /// called by the interpreter.
  public CloSXP closureStub(Function function, EnvSXP enclosingEnv) {
    var codeStub = SEXPs.lang(SEXPs.symbol(".Interpret"), SEXPs.symbol(function.name()));
    var sexp = SEXPs.closure(CLOSURE_STUB_PARAMETERS, codeStub, enclosingEnv);
    closures.put(sexp, function);
    return sexp;
  }

  /// Returns a [PromSXP] wrapping the [Promise], which can be forced by the interpreter.
  public PromSXP promiseStub(Promise promExpr) {
    var codeStub = SEXPs.lang(SEXPs.symbol(".Interpret"), SEXPs.integer(nextPromiseId++));
    var sexp = SEXPs.promise(codeStub, topFrame().environment());
    promises.put(sexp, new PromiseCode(promExpr, topFrame()));
    return sexp;
  }

  /// Create an [InterpretException] at the current evaluation position.
  public InterpretException fail(String message) {
    return fail(message, null);
  }

  /// Create an [InterpretException] at the current evaluation position.
  public InterpretException fail(String message, @Nullable Throwable cause) {
    return new InterpretException(message, cause, stack, globalEnv);
  }

  /// Result of executing a jump instruction.
  private sealed interface ControlFlow {
    record Goto(Target next) implements ControlFlow {}

    record Return(SEXP value) implements ControlFlow {}
  }

  private record PromiseCode(Promise expression, StackFrame frame) {}
}
