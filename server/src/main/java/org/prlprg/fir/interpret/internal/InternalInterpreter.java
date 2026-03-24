package org.prlprg.fir.interpret.internal;

import static org.prlprg.sexp.ArgumentMatcher.matchArguments;

import com.google.common.collect.ImmutableList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Stack;
import java.util.stream.Stream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.GlobalModules;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.fir.interpret.Interpreter;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
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
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Kind.Dots;
import org.prlprg.fir.ir.type.Kind.PrimitiveVector;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Logical;
import org.prlprg.session.GNURSession;
import org.prlprg.sexp.ArgumentMatcher.MatchException;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ComplexSXP;
import org.prlprg.sexp.DotsListSXP;
import org.prlprg.sexp.EmptyEnvSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ExprSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.RawSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Lists;
import org.prlprg.util.Streams;
import org.prlprg.util.Strings;
import org.prlprg.util.UnreachableError;

/// FIŘ interpreter.
public final class InternalInterpreter implements Interpreter {
  private static final EnvSXP BASE_ENV = GNURSession.readLatestBaseEnv();

  // Input
  private final Module module;
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

  // Feedback (part of state but not depended on by [Interpreter], only updated).
  private final MockModuleFeedback feedback = new MockModuleFeedback();
  private final CheckpointTrace checkpointTrace = new CheckpointTrace(this);

  /// Interpret the module in a global environment containing only its functions.
  ///
  /// New functions added to the module are automatically added to the interpreter's environment
  /// thanks to [org.prlprg.fir.ir.observer.Observer].
  public InternalInterpreter(Module module) {
    this.module = module;

    var baseEnv = new BaseEnvSXP();
    globalEnv = new GlobalEnvSXP(baseEnv);
    // Add module functions, including those in parents to the environment.
    addModuleToEnv(module, globalEnv);
    addModuleToEnv(GlobalModules.BASE, baseEnv);
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
              for (var v : f.versions()) {
                externalVersions.remove(v);
              }
            }
          }
        });

    // Add global variables from GNU-R's base
    for (var entry : BASE_ENV.bindings()) {
      var name = entry.getKey();
      var sexp = entry.getValue();
      if (sexp.isFunction()) {
        // Already added via `GlobalModules.BASE`
        continue;
      }

      baseEnv.set(name, sexp);
    }
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
    env.set(function.name().name(), stub);
  }

  /// "Hijack" all versions that are not more generic or incompatible with the given signature
  /// (i.e. the signature's parameters, effects, and return are all supertypes/effects). The
  /// versions must be [stubs](Abstraction#isStub) and "hijack" means, when the version is
  /// called, the Java closure runs instead
  ///
  /// @throws IllegalArgumentException If no versions match the signature.
  /// @throws IllegalArgumentException If any version that matches the signature is not a stub.
  public void registerExternal(
      String functionName, Signature versionSignature, ExternalVersion javaClosure) {
    var function = module.lookupFunction(Variable.named(functionName));
    if (function == null) {
      throw new IllegalArgumentException("Function " + functionName + " not in module:\n" + module);
    }
    var registeredAny = false;
    for (var version : function.versions()) {
      if (!version.signature().hasNarrowerParameters(versionSignature)
          || !version.signature().hasNarrowerPostconditions(versionSignature)) {
        continue;
      }

      registerExternal(functionName, version, javaClosure);
      registeredAny = true;
    }
    if (!registeredAny) {
      throw new IllegalArgumentException(
          "Function "
              + functionName
              + " has no version with signature "
              + versionSignature
              + ":\n"
              + function);
    }
  }

  private void registerExternal(
      String functionName, Abstraction version, ExternalVersion javaClosure) {
    if (!version.isStub()) {
      throw new IllegalArgumentException(
          "Function "
              + functionName
              + " version with signature "
              + version.signature()
              + " isn't a stub:\n"
              + version);
    }
    externalVersions.put(version, javaClosure);
  }

  @Override
  public Module module() {
    return module;
  }

  public GlobalEnvSXP globalEnv() {
    return globalEnv;
  }

  public BaseEnvSXP baseEnv() {
    return (BaseEnvSXP) globalEnv.parent();
  }

  @Override
  public MockModuleFeedback feedback() {
    return feedback;
  }

  public CheckpointTrace checkpointTrace() {
    return checkpointTrace;
  }

  @Override
  public Value call(String functionName, Value... arguments) {
    try {
      var function = module.lookupFunction(Variable.named(functionName));
      if (function == null) {
        throw fail("Unknown function: " + functionName);
      }

      return call(function, null, List.of(arguments), globalEnv);
    } catch (InternalInterpretException e) {
      throw e;
    } catch (Throwable e) {
      throw fail("Unhandled interpreter crash", e);
    }
  }

  /// Gets the function's best applicable version, and calls it with the arguments in the
  /// environment.
  public Value call(
      Function function,
      @Nullable Signature explicitSignature,
      List<Value> arguments,
      EnvSXP environment) {
    var signature = computeSignature(function.baseline(), explicitSignature, arguments);

    var best = function.guess(signature);
    if (best == null) {
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

    var result = call(best, arguments, environment, function.baseline().cfg());

    checkType(result, function.baseline().returnType(), "return");
    return result;
  }

  /// Calls the function version with the arguments in the environment.
  public Value call(
      Abstraction abstraction,
      List<Value> arguments,
      EnvSXP environment,
      @Nullable CFG deoptRestoreCfg) {
    // Hijack if we registered external code for this version
    var hijacker = externalVersions.get(abstraction);
    if (hijacker != null) {
      return callExternal(hijacker, abstraction, arguments, environment);
    }

    var cfg = abstraction.cfg();
    if (cfg == null) {
      throw failUnsupported("Can't call unregistered stub");
    }

    var frame = mkFrame(environment);
    var feedback = feedback().get(abstraction);
    feedback.recordCall();

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
    var result = run(frame, cfg, deoptRestoreCfg);

    checkType(result, abstraction.returnType(), "return");
    return result;
  }

  private Value callExternal(
      ExternalVersion hijacker, Abstraction hijacked, List<Value> arguments, EnvSXP environment) {
    checkStack();

    try {
      var result = hijacker.call(this, hijacked, arguments, environment);

      checkType(result, hijacked.returnType(), "return (from external)");
      return result;
    } catch (InternalInterpretException e) {
      throw e;
    } catch (Throwable e) {
      throw fail("External call failed", e);
    }
  }

  private StackFrame mkFrame(EnvSXP parentEnv) {
    return new StackFrame(parentEnv);
  }

  /// Interprets the control flow graph starting from the entry block.
  ///
  /// Also pushes/pops `frame`; every [CFG] runs at its own stack frame index (the frame itself
  /// is reused across all CFGs in the [Abstraction]).
  private Value run(StackFrame frame, CFG cfg, @Nullable CFG deoptRestoreCfg) {
    checkStack();

    var cursor = new CFGCursor(cfg);
    frame.enter(cursor, feedback);
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
        case ControlFlow.Deopt(var pc, var deoptStack) -> {
          if (cfg == deoptRestoreCfg) {
            throw fail("Can't restore from the same CFG we deoptimized from");
          }

          cursor = restoreDeopt(pc, deoptStack, deoptRestoreCfg);
          frame.exit();
          frame.enter(cursor, feedback);
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
      if (value == null) {
        throw fail("Expression produces nothing but is assigned:\n" + statement);
      }

      topFrame().put(assignee, value);
      recordTypeFeedback(topFrame().scopeFeedback(), assignee, value);
    }
  }

  /// Executes a jump instruction and returns the next control-flow action.
  private ControlFlow run(Jump jump) {
    return switch (jump) {
      case Goto(_, var next) -> new ControlFlow.Goto(next);
      case If(_, var condition, var ifTrue, var ifFalse) -> {
        var condValue = run(condition);
        if (!(condValue instanceof Value.Bool(var condBool))) {
          throw fail("Condition is not a boolean: " + condValue);
        }

        if (condition instanceof Read(var conditionReg)) {
          topFrame().scopeFeedback().recordConstant(conditionReg, condValue);
        }

        yield new ControlFlow.Goto(condBool ? ifTrue : ifFalse);
      }
      case Return(_, var ret) -> new ControlFlow.Return(run(ret));
      case Checkpoint(_, var ok, var deopt) -> {
        // TODO: refactor lambda into method for readability.
        checkpointTrace.record(() -> snapshotAtCheckpoint(deopt));
        yield new ControlFlow.Goto(check(ok) ? ok : deopt);
      }
      case Deopt(_, var pc, var argStack) -> {
        var valueStack =
            argStack.stream()
                .map(this::run)
                .map(
                    value -> {
                      if (!(value instanceof Value.Sexp(var valueSexp))) {
                        throw fail("Deopt argument is not a SEXP: " + value);
                      }
                      return valueSexp;
                    })
                .collect(ImmutableList.toImmutableList());
        yield new ControlFlow.Deopt(pc, valueStack);
      }
      case Unreachable(_) -> throw fail("Reached unimplemented or \"unreachable\" code");
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
  public @Nullable Value run(Expression expression) {
    checkEvaluation();
    return switch (expression) {
      case Aea(var value) -> run(value);
      case Assume(var assumption) ->
          switch (assumption) {
            case AssumeType(var arg, var type) -> {
              var value = run(arg);
              checkType(value, type, "assume-type");
              yield value;
            }
            case AssumeConstant(_, _), AssumeFunction _, AssumeLoadFun _ -> null;
          };
      case Call call -> {
        var callee = call.callee();
        var arguments = call.callArguments().stream().map(this::run).toList();
        var environment = topFrame().environment();

        yield switch (callee) {
          case StaticFnCallee(var isDispatch, var functionRef, var signature) -> {
            var function = functionRef.get();
            if (isDispatch) {
              // Dispatch call
              yield call(function, signature, arguments, environment);
            }

            // Static call
            var exactVersion = function.guess(signature);
            if (exactVersion == null) {
              throw fail("No versions of " + function.name() + " match signature: " + signature);
            }
            yield call(
                Objects.requireNonNull(exactVersion),
                arguments,
                environment,
                function.baseline().cfg());
          }
          case DynamicCallee(var actualCallee, var argumentNames) -> {
            var calleeValue = run(actualCallee);
            if (!(calleeValue instanceof Value.Sexp(var calleeSexp)
                && calleeSexp instanceof CloSXP cloSXP)) {
              throw fail("Not a function: " + calleeValue);
            }

            var function = extractClosure(cloSXP);
            if (function == null) {
              throw fail("Can't call function not in this interpreter: " + cloSXP);
            }

            var argumentSexps =
                arguments.stream()
                    .map(
                        argValue -> {
                          if (!(argValue instanceof Value.Sexp(var argSexp))) {
                            throw fail("Dynamic function argument not SEXP: " + argValue);
                          }
                          return argSexp;
                        });

            List<SEXP> matchedArgumentSexps;
            try {
              var namedArguments =
                  Streams.zip(
                          Stream.concat(
                              argumentNames.stream(),
                              Stream.generate(OptionalNamedVariable::empty)),
                          argumentSexps,
                          OptionalNamedVariable::taggedElem)
                      .collect(SEXPs.toList());
              matchedArgumentSexps = matchArguments(cloSXP.parameters(), namedArguments);
            } catch (MatchException e) {
              throw fail(e.getMessage());
            }
            List<Value> matchedArguments = Lists.mapLazy(matchedArgumentSexps, Value.Sexp::new);

            var result = call(function, null, matchedArguments, environment);

            // Only record after the call, in case the function is an unregistered stub
            if (actualCallee instanceof Read(var calleeReg)) {
              topFrame().scopeFeedback().recordCallee(calleeReg, function);
            }

            yield result;
          }
        };
      }
      case Cast(var target, var type) -> {
        var value = run(target);
        checkType(value, type, "cast");
        yield value;
      }
      case Closure closure -> new Value.Sexp(closureStub(closure.code(), topFrame().environment()));
      case Dup(var arg) -> {
        var value = run(arg);

        if (!(value instanceof Value.Sexp(var sexp) && sexp instanceof ListOrVectorSXP<?> s)) {
          throw fail("Can't duplicate: " + value);
        }

        yield new Value.Sexp(s.copy());
      }
      case Force(var isMaybe, var arg) -> {
        var value = run(arg);
        if (!(value instanceof Value.Sexp(var sexp) && sexp instanceof PromSXP promise)) {
          if (!isMaybe) {
            throw fail("Can't force non-promise: " + value);
          }
          yield value;
        }

        yield new Value.Sexp(force(promise));
      }
      case Load(var loadType, var variable) -> {
        var valueSxp =
            switch (loadType) {
              case LOCAL_VAR -> load(variable);
              case SUPER_VAR -> topFrame().environment().parent().get(variable.name()).orElse(null);
              case LOCAL_FUN -> topFrame().getFunction(variable, this::force);
              case GLOBAL_FUN -> globalEnv.getFunction(variable.name(), this::force).orElse(null);
              case BASE_FUN -> baseEnv().getFunction(variable.name(), this::force).orElse(null);
            };

        if (valueSxp == null) {
          if (loadType == LoadType.LOCAL_FUN
              || loadType == LoadType.GLOBAL_FUN
              || loadType == LoadType.BASE_FUN) {
            throw failUnsupported(
                "Unbound function: "
                    + variable.name()
                    + "\n\"Unsupported\" because it may be a library function");
          } else {
            throw fail("Unbound variable: " + variable.name());
          }
        }
        yield new Value.Sexp(valueSxp);
      }
      case MkVector(var kind, var elements) ->
          new Value.Sexp(
              mkVector(
                  kind,
                  Lists.mapLazy(elements, e -> OptionalNamedVariable.ofNullable(e.name())),
                  Lists.mapLazy(elements, e -> run(e.argument()))));
      case MkEnv() -> {
        topFrame().mkEnv();
        yield null;
      }
      case Noop() -> null;
      case PopEnv() -> {
        try {
          topFrame().popEnv();
        } catch (IllegalStateException e) {
          // There was no pushed env
          throw fail(e.getMessage());
        }
        yield null;
      }
      case Promise promise -> new Value.Sexp(promiseStub(promise));
      case ReflectiveLoad(var promArg, var variable) -> {
        var promValue = run(promArg);

        if (!(promValue instanceof Value.Sexp(var promSexp)
            && promSexp instanceof PromSXP promise)) {
          throw fail("Can't reflective load in non-promise: " + promValue);
        }
        var env = promise.env();

        yield env.getLocal(variable.name())
            .map(Value.Sexp::new)
            .orElseThrow(() -> fail("Unbound variable in promise environment: " + variable.name()));
      }
      case ReflectiveStore(var promArg, var variable, var valueArg) -> {
        var promValue = run(promArg);
        var valueValue = run(valueArg);

        if (!(promValue instanceof Value.Sexp(var promSexp)
            && promSexp instanceof PromSXP promise)) {
          throw fail("Can't reflective store in non-promise: " + promValue);
        }
        if (!(valueValue instanceof Value.Sexp(var valueSexp))) {
          throw fail("Can't reflective store non-SEXP value: " + valueValue);
        }
        var env = promise.env();

        env.set(variable.name(), valueSexp);
        yield null;
      }
      case Store(var storeType, var variable, var arg) ->
          switch (storeType) {
            case LOCAL_VAR -> {
              var value = run(arg);
              topFrame().put(variable, value);
              yield null;
            }
            case SUPER_VAR -> {
              var parentEnv = topFrame().environment().parent();
              var value = run(arg);

              if (!(value instanceof Value.Sexp(var valueSexp))) {
                throw fail("Can't super-store non-SEXP: " + value);
              }

              // Super-store implementation
              while (!(parentEnv instanceof EmptyEnvSXP)) {
                if (parentEnv.getLocal(variable.name()).isPresent()) {
                  parentEnv.set(variable.name(), valueSexp);
                  yield null;
                }
                parentEnv = parentEnv.parent();
              }
              throw fail("Unbound variable in parent environment: " + variable.name());
            }
          };
      case SubscriptRead(var vectorArg, var indexArg) -> {
        var vectorValue = run(vectorArg);
        var indexValue = run(indexArg);

        if (!(vectorValue instanceof Value.Sexp(var vectorSexp)
            && vectorSexp instanceof ListOrVectorSXP<?> vector)) {
          throw fail("Can't subscript non-vector: " + vectorValue);
        }
        if (!(indexValue instanceof Value.Int(var index))) {
          throw fail("Can't subscript with non-integer index: " + indexValue);
        }

        yield subscriptLoad(vector, index);
      }
      case SubscriptWrite(var vectorArg, var indexArg, var valueArg) -> {
        var vectorValue = run(vectorArg);
        var indexValue = run(indexArg);
        var valueValue = run(valueArg);

        if (!(vectorValue instanceof Value.Sexp(var vectorSexp)
            && vectorSexp instanceof ListOrVectorSXP<?> vector)) {
          throw fail("Can't subscript non-vector: " + vectorValue);
        }
        if (!(indexValue instanceof Value.Int(var index))) {
          throw fail("Can't subscript with non-integer index: " + indexValue);
        }

        subscriptStore(vector, index, valueValue);
        yield null;
      }
    };
  }

  /// Evaluates an [Argument] and returns its value, e.g. [#read(Register)] if it's a [Register].
  ///
  /// @throws IllegalStateException If called outside of evaluation.
  public Value run(Argument argument) {
    checkEvaluation();
    return switch (argument) {
      case Constant(var constant) -> constant;
      case Read(var register) -> read(register);
      // `Read` and `Use` are evaluated the same, the only difference is in the type system.
      case Consume(var register) -> read(register);
    };
  }

  /// Lookup the register (on the stack) and crash if it's not defined.
  ///
  /// @throws IllegalStateException If called outside of evaluation.
  public Value read(Register register) {
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

      var dotsValue = topFrame().get(NamedVariable.DOTS);
      if (dotsValue == null) {
        throw fail("Error: '" + nv + "' used in an incorrect context, no ... to look in");
      }
      var dotsSexp = ((Value.Sexp) dotsValue).value();

      // Missing value is semantically equivalent to an empty dots list
      if (dotsSexp.equals(SEXPs.MISSING_ARG)) {
        throw fail("Error: the ... list contains fewer than " + n + " element(s)");
      }
      var dots = (DotsListSXP) dotsSexp;
      if (n > dots.size()) {
        throw fail("Error: the ... list contains fewer than " + n + " element(s)");
      }

      return dots.value(n - 1);
    }

    var value = topFrame().get(nv);
    if (value == null) {
      throw fail("Unbound variable: " + nv.name());
    }
    return ((Value.Sexp) value).value();
  }

  /// Create a vector of the correct type to hold `values`
  ///
  /// @throws IllegalArgumentException If `names` and `values` are different sizes.
  /// @throws InternalInterpretException If `values` aren't elements of `kind`
  public ListOrVectorSXP<?> mkVector(
      Kind kind, List<OptionalNamedVariable> elementNames, List<Value> elements) {
    if (elementNames.size() != elements.size()) {
      throw new IllegalArgumentException(
          "Element names and values count mismatch: "
              + elementNames.size()
              + " names, "
              + elements.size()
              + " values");
    }

    return switch (kind) {
      case PrimitiveVector(var isScalar, var primitiveKind) -> {
        if (isScalar) {
          throw fail("`box` is required to create typed size-1 vectors (boxed scalars)");
        }

        var attrs = Attributes.NONE;
        if (elementNames.stream().anyMatch(OptionalNamedVariable::isPresent)) {
          attrs =
              attrs.including(
                  "names",
                  SEXPs.string(
                      elementNames.stream()
                          .map(OptionalNamedVariable::name)
                          .toArray(String[]::new)));
        }

        yield switch (primitiveKind) {
          case PrimitiveKind.INTEGER ->
              SEXPs.integer(
                  elements.stream()
                      .mapToInt(
                          value -> {
                            if (!(value instanceof Value.Int(var value1))) {
                              throw fail("Not an int (for int vector): " + value);
                            }
                            return value1;
                          })
                      .toArray(),
                  attrs);
          case PrimitiveKind.REAL ->
              SEXPs.real(
                  elements.stream()
                      .mapToDouble(
                          value -> {
                            if (!(value instanceof Value.Real(var value1))) {
                              throw fail("Not a real (for real vector): " + value);
                            }
                            return value1;
                          })
                      .toArray(),
                  attrs);
          case PrimitiveKind.LOGICAL ->
              SEXPs.logical(
                  elements.stream()
                      .map(
                          value -> {
                            if (!(value instanceof Value.Lgl(var value1))) {
                              throw fail("Not a logical (for logical vector): " + value);
                            }
                            return value1;
                          })
                      .toArray(Logical[]::new),
                  attrs);
          case PrimitiveKind.STRING ->
              SEXPs.string(
                  elements.stream()
                      .map(
                          value -> {
                            if (!(value instanceof Value.Str(var value1))) {
                              throw fail("Not a string (for string vector): " + value);
                            }
                            return value1;
                          })
                      .toArray(String[]::new),
                  attrs);
        };
      }
      case Dots() ->
          Streams.zip(
                  elementNames.stream(),
                  elements.stream()
                      .map(
                          value -> {
                            if (!(value instanceof Value.Sexp(var valueSexp))) {
                              throw fail("Not an SEXP (for dots list): " + value);
                            }
                            return valueSexp;
                          }),
                  OptionalNamedVariable::taggedElem)
              .collect(SEXPs.toDots());
      default -> throw fail("Unsupported vector kind: " + kind);
    };
  }

  public Value subscriptLoad(ListOrVectorSXP<?> vector, int index) {
    if (index < 0 || index >= vector.size()) {
      throw fail(
          "Subscript index out of bounds: " + index + " for vector of size " + vector.size());
    }

    // Get scalar SEXP from vector SEXP
    return switch (vector) {
      case LglSXP l -> new Value.Lgl(l.get(index));
      case IntSXP i -> new Value.Int(i.get(index));
      case RealSXP r -> new Value.Real(r.get(index));
      case ComplexSXP _ -> throw failUnsupported("Complex scalars");
      case StrSXP s -> new Value.Str(s.get(index));
      case RawSXP _ -> throw failUnsupported("Raw scalars");
      case VecSXP v -> new Value.Sexp(v.get(index));
      case ListSXP l -> new Value.Sexp(l.get(index).value());
      case DotsListSXP d -> new Value.Sexp(d.get(index).value());
      case ExprSXP e -> new Value.Sexp(e.get(index));
    };
  }

  public void subscriptStore(ListOrVectorSXP<?> vector, int index, Value value) {
    if (index < 0 || index >= vector.size()) {
      throw fail(
          "Subscript index out of bounds: " + index + " for vector of size " + vector.size());
    }

    // Set scalar SEXP in vector SEXP
    switch (vector) {
      case LglSXP l -> {
        if (!(value instanceof Value.Lgl(var value1))) {
          throw fail("Not a logical (for logical vector): " + value);
        }
        l.set(index, value1);
      }
      case IntSXP i -> {
        if (!(value instanceof Value.Int(var value1))) {
          throw fail("Not an int (for int vector): " + value);
        }
        i.set(index, value1);
      }
      case RealSXP r -> {
        if (!(value instanceof Value.Real(var value1))) {
          throw fail("Not a real (for real vector): " + value);
        }
        r.set(index, value1);
      }
      case ComplexSXP _ -> throw failUnsupported("Complex scalars");
      case StrSXP s -> {
        if (!(value instanceof Value.Str(var value1))) {
          throw fail("Not a string (for string vector): " + value);
        }
        s.set(index, value1);
      }
      case RawSXP _ -> throw failUnsupported("Raw scalars");
      case VecSXP v -> {
        if (!(value instanceof Value.Sexp(var valueSexp))) {
          throw fail("Not an SEXP (for generic vector): " + value);
        }
        v.set(index, valueSexp);
      }
      case ListSXP l -> {
        if (!(value instanceof Value.Sexp(var valueSexp))) {
          throw fail("Not an SEXP (for list): " + value);
        }
        l.set(index, valueSexp);
      }
      case DotsListSXP d -> {
        if (!(value instanceof Value.Sexp(var valueSexp))) {
          throw fail("Not an SEXP (for dots list): " + value);
        }
        d.set(index, valueSexp);
      }
      case ExprSXP e -> {
        if (!(value instanceof Value.Sexp(var valueSexp))) {
          throw fail("Not an SEXP (for expression vector): " + value);
        }
        e.set(index, valueSexp);
      }
    }
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

    // No restore CFG = can't deopt in promises, at least for now.
    var value = run(promCode.frame, promExpr.code(), null);
    if (!(value instanceof Value.Sexp(var valueSexp))) {
      throw fail("Not an SEXP (for promise eval): " + value);
    }
    promSXP.bind(valueSexp);

    checkType(value, promExpr.valueType(), "promise");
    return valueSexp;
  }

  /// Force if promise, load if variable, and evaluate children.
  ///
  /// @throws UnsupportedOperationException if given `LangSXP`; evaluation of those isn't
  /// implemented.
  public Value eval(Value value) {
    if (!(value instanceof Value.Sexp(var valueSexp))) {
      return value;
    }

    return new Value.Sexp(eval(valueSexp));
  }

  private SEXP eval(SEXP valueSexp) {
    return switch (valueSexp) {
      case PromSXP promSxp -> eval(force(promSxp));
      case RegSymSXP symSxp -> eval(load(Variable.named(symSxp.name())));
      case ListSXP listSxp ->
          listSxp.stream()
              .map(te -> new TaggedElem(te.tag(), eval(te.value())))
              .collect(SEXPs.toList());
      case DotsListSXP dotsSxp ->
          dotsSxp.stream()
              .map(te -> new TaggedElem(te.tag(), eval(te.value())))
              .collect(SEXPs.toDots());
      case LangSXP langSxp ->
          throw new UnsupportedOperationException(
              "Evaluation of LangSXP not implemented: " + langSxp);
      default -> valueSexp;
    };
  }

  /// Run assumptions in `target` and return true if they all hold.
  private boolean check(Target target) {
    if (!target.phiArgs().isEmpty()) {
      throw fail("checkpoint target has arguments? Can they be in assumptions?");
    }

    for (var stmt : target.bb().statements()) {
      if (!(stmt.expression() instanceof Assume(var assumption))) {
        break;
      }
      if (!check(assumption)) {
        return false;
      }
    }
    return true;
  }

  private boolean check(Assumption assumption) {
    switch (assumption) {
      case AssumeConstant(var arg, var constant) -> {
        var value = run(arg);
        return Objects.equals(value, constant);
      }
      case AssumeFunction(var arg, var functionRef) -> {
        var function = functionRef.get();

        var value = run(arg);
        if (!(value instanceof Value.Sexp(var valueSexp) && valueSexp instanceof CloSXP valueCls)) {
          return false;
        }
        var valueFun = extractClosure(valueCls);
        return valueFun == function;
      }
      case AssumeLoadFun(var variable, var functionRef) -> {
        var function = functionRef.get();

        // Returns `false` when an unevaluated promise is encountered,
        // by returning a stub so that `extractClosure` never returns `function`
        var valueCls =
            topFrame()
                .getFunction(
                    variable,
                    _ -> SEXPs.closure(SEXPs.list(), SEXPs.symbol(".stub"), SEXPs.EMPTY_ENV));
        if (valueCls == null) {
          return false;
        }
        var valueFun = extractClosure(valueCls);
        return valueFun == function;
      }
      case AssumeType(var arg, var type) -> {
        var value = run(arg);
        var actualType = inferType(value, type.ownership());
        return actualType.isSubtypeOf(type);
      }
    }
  }

  /// Simulate deoptless: go to the [Deopt] in `deoptRestoreCfg` at `pc`, assign deopt stack
  /// arguments `deoptStack` values, then "reverse-evaluate" until the checkpoint (pop env for
  /// each [MkEnv]).
  private CFGCursor restoreDeopt(int pc, List<SEXP> deoptStack, @Nullable CFG deoptRestoreCfg) {
    CFGCursor cursor;
    if (deoptRestoreCfg == null) {
      throw fail("can't deopt without restore CFG");
    }

    // Get corresponding deopt BC and run sanity checks
    var deoptBc =
        deoptRestoreCfg.bbs().stream()
            .filter(bb -> bb.jump() instanceof Deopt(_, var pc1, _) && pc == pc1)
            .collect(
                Streams.zeroOneOrThrow(() -> fail("multiple deopt branches with the same pc?")))
            .orElseThrow(
                () ->
                    fail(
                        "restore CFG has no deopt corresponding to "
                            + pc
                            + "\n"
                            + deoptRestoreCfg));
    if (!(deoptBc.jump() instanceof Deopt(_, _, var argStack))) {
      throw new UnreachableError();
    }
    var checkBc =
        deoptBc.predecessors().stream()
            .findAny()
            .orElseThrow(() -> fail("deopt branch has no predecessors?\n" + deoptRestoreCfg));
    if (!(checkBc.jump() instanceof Checkpoint)) {
      throw fail("deopt branch predecessor is not a checkpoint?\n" + deoptRestoreCfg);
    }
    if (argStack.size() != deoptStack.size()) {
      throw fail(
          "deopt stack size mismatch: expected " + argStack.size() + ", got " + deoptStack.size());
    }

    // Replace arguments
    for (var i = 0; i < argStack.size(); i++) {
      var arg = argStack.get(i);
      var value = new Value.Sexp(deoptStack.get(i));
      switch (arg) {
        case Constant(var constant) -> {
          if (!value.equals(constant)) {
            throw fail(
                "constant in one restore branch is different than the register in deopt: expected "
                    + constant
                    + ", got "
                    + value);
          }
        }
        case Read(var variable) -> {
          topFrame().put(variable, value);
          recordTypeFeedback(topFrame().scopeFeedback(), variable, value);
        }
        case Consume(var variable) -> {
          topFrame().put(variable, value);
          recordTypeFeedback(topFrame().scopeFeedback(), variable, value);
        }
      }
    }

    // Reverse-evaluate from deopt to checkpoint
    cursor = new CFGCursor(deoptBc, deoptBc.statements().size() - 1);
    while (cursor.instructionIndex() >= 0) {
      var expression = ((Statement) Objects.requireNonNull(cursor.instruction())).expression();
      switch (expression) {
        case MkEnv() -> {
          try {
            topFrame().popEnv();
          } catch (IllegalStateException e) {
            // There was no pushed env
            throw fail(e.getMessage());
          }
        }
        case Store(var storeType, _, _) when storeType == StoreType.LOCAL_VAR -> {}
        default ->
            throw fail(
                "unexpected expression in deopt branch: "
                    + expression
                    + "\nBB:\n"
                    + deoptBc
                    + "CFG:\n"
                    + deoptRestoreCfg);
      }
      cursor.unadvance();
    }
    cursor.moveToEnd(checkBc);
    // Interpreter expects us to be before the next instruction (the checkpoint), not at it.
    cursor.unadvance();
    return cursor;
  }

  private DeoptSnapshot snapshotAtCheckpoint(Target deopt) {
    if (!deopt.phiArgs().isEmpty()) {
      throw fail("Deopt target has phi arguments: " + deopt);
    }

    var env = topFrame().environment().deepCopyUserEnvs();
    for (var i = 0; i < deopt.bb().statements().size(); i++) {
      var stmt = deopt.bb().statements().get(i);
      switch (stmt.expression()) {
        case MkEnv() -> env = new UserEnvSXP(env);
        case Store(var storeType, var variable, var arg) when storeType == StoreType.LOCAL_VAR -> {
          var value = run(arg);
          if (!(value instanceof Value.Sexp(var valueSexp))) {
            throw fail("Can't store non-SEXP in environment: " + value);
          }
          env.set(variable.name(), valueSexp);
        }
        default ->
            throw fail(
                "Unsupported expression in deopt branch at index " + i + ": " + stmt.expression());
      }
      if (stmt.assignee() != null) {
        throw fail("Deopt branch statement has assignee at index " + i + ": " + stmt);
      }
    }

    var deoptJump = (Deopt) deopt.bb().jump();
    var pc = deoptJump.pc();
    var bcStack =
        deoptJump.stack().stream()
            .map(this::run)
            .map(
                value -> {
                  if (!(value instanceof Value.Sexp(var sexp))) {
                    throw fail("Deopt stack value not SEXP: " + value);
                  }
                  return sexp;
                })
            .collect(ImmutableList.toImmutableList());

    return new DeoptSnapshot(pc, bcStack, env, stackToString());
  }

  private void recordTypeFeedback(AbstractionFeedback feedback, Register variable, Value value) {
    feedback.recordType(variable, inferType(value, Ownership.SHARED));
  }

  /// Compute the runtime signature to select a dispatch version of a function.
  ///
  /// In the process, checks that `arguments` are instances of `explicit`'s parameter types, and
  /// throws [InternalInterpretException] if they don't.
  private Signature computeSignature(
      Abstraction baseline, @Nullable Signature explicit, List<Value> arguments) {
    if (explicit == null) {
      return inferSignature(baseline, arguments);
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
    var parameterStrictnesses = ImmutableList.<Boolean>builderWithExpectedSize(numParameters);
    for (var i = 0; i < numParameters; i++) {
      var parameterType = explicit.parameterTypes().get(i);
      var parameterStrictness = explicit.parameterStrictnesses().get(i);
      var argument = arguments.get(i);

      var argumentType = checkType(argument, parameterType, "argument " + i + " (for signature)");
      argumentTypes.add(argumentType);
      parameterStrictnesses.add(parameterStrictness && !argumentType.isValue());
    }

    // `implicit`'s return type and effects are TOP, since we can't infer anything about them.
    return new Signature(
        argumentTypes.build(),
        parameterStrictnesses.build(),
        explicit.returnType(),
        explicit.effects());
  }

  /// Infer the `value`'s type, check it against `expected`, and return it.
  ///
  /// @throws InternalInterpretException if `value` isn't an instance.
  private Type checkType(Value value, Type expected, String context) {
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

  private Signature inferSignature(Abstraction baseline, List<Value> arguments) {
    return new Signature(
        arguments.stream()
            .map(a -> inferType(a, Ownership.SHARED))
            .collect(ImmutableList.toImmutableList()),
        baseline.returnType(),
        baseline.effects());
  }

  /// Infer the type of the value, giving it the ownership iff permissible.
  ///
  /// If the type is only well-formed as shared, it's returned as shared regardless of the given
  /// ownership.
  public Type inferType(Value value, Ownership ownership) {
    // We can do better than `Type.of` for promises,
    // since we create promises with stub code.
    if (value instanceof Value.Sexp(var sexp) && sexp instanceof PromSXP promSxp) {
      var promise = promises.get(promSxp);
      if (promise != null) {
        return Type.promise(promise.expression.valueType(), promise.expression.effects());
      }
    }

    var type = value.type();
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

  /// If the closure was produced by [#closureStub(Function, EnvSXP)], returns the [Function].
  public @Nullable Function extractClosure(CloSXP cloSxp) {
    var function = closures.get(cloSxp);
    if (function == null) {
      // Closure wasn't created by this interpreter
      return null;
    }
    // Don't check `GlobalModules.INTRINSICS` because they're never stubs.
    if (module.localFunction(function.name()) != function
        && GlobalModules.BASE.localFunction(function.name()) != function) {
      // Closure was removed or is from another interpreter.
      return null;
    }
    return function;
  }

  /// Returns a [CloSXP] wrapping the [Function], which can be function looked-up and dynamically
  /// called by the interpreter.
  public CloSXP closureStub(Function function, EnvSXP enclosingEnv) {
    var codeStub = SEXPs.lang(SEXPs.symbol(".Interpret"), SEXPs.symbol(function.name().name()));
    // All FIŘ functions explicitly compute parameter defaults, so their formal parameters
    // never have default values.
    var rParams =
        function.parameterNames().stream()
            .map(paramName -> new TaggedElem(paramName.name(), SEXPs.MISSING_ARG))
            .collect(SEXPs.toList());
    var sexp = SEXPs.closure(rParams, codeStub, enclosingEnv);
    closures.put(sexp, function);
    return sexp;
  }

  /// Returns a [PromSXP] wrapping the [Promise], which can be forced by the interpreter.
  public PromSXP promiseStub(Promise promExpr) {
    var codeStub =
        SEXPs.lang(
            SEXPs.symbol(".Interpret"),
            SEXPs.lang(SEXPs.symbol("promise"), SEXPs.integer(promExpr.hashCode())));
    var sexp = SEXPs.promise(codeStub, topFrame().environment());
    promises.put(sexp, new PromiseCode(promExpr, topFrame()));
    return sexp;
  }

  @Override
  public InterpretException fail(String message, @Nullable Throwable cause) {
    return new InternalInterpretException(message, cause, stack, globalEnv);
  }

  public InterpretException failUnsupported(String message) {
    return new InternalInterpretUnsupportedException(message, null, stack, globalEnv);
  }

  public String stackToString() {
    return Printer.use(this::printStack);
  }

  public void printStack(Printer p) {
    PrintStack.printStack(p, stack, globalEnv);
  }

  /// Result of executing a jump instruction.
  private sealed interface ControlFlow {
    record Goto(Target next) implements ControlFlow {}

    record Return(Value value) implements ControlFlow {}

    record Deopt(int pc, List<SEXP> stack) implements ControlFlow {}
  }

  private record PromiseCode(Promise expression, StackFrame frame) {}
}
