package org.prlprg.fir.check;

import com.google.common.collect.Iterables;
import javax.annotation.Nullable;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.binding.Binding;
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
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Placeholder;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Kind.PrimitiveScalar;
import org.prlprg.fir.ir.type.Kind.PrimitiveVector;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Checks type and effect soundness.
public final class TypeAndEffectChecker extends Checker {
  @Override
  public void doRun(Abstraction version) {
    var function = function();

    // Check guaranteed effects and return type
    var guaranteedEffects = function.guaranteedEffects();
    var guaranteedReturnType = function.guaranteedReturnType();
    if (!version.effects().isSubsetOf(guaranteedEffects)) {
      report(
          version,
          "Version's effects must be a subset of its function's guaranteed effects: "
              + version.effects()
              + " doesn't subtype "
              + guaranteedEffects
              + "\nIn fun "
              + function.name()
              + " { ... }");
    }
    if (!version.returnType().canBeAssignedTo(guaranteedReturnType)) {
      report(
          version,
          "Version's return type must be assignable to its function's guaranteed return type: "
              + version.returnType()
              + " isn't assignable to "
              + guaranteedReturnType
              + "\nIn fun "
              + function.name()
              + " { ... }");
    }

    // Check that versions with strictly worse parameters have strictly worse effects/return.
    var signature = version.signature();
    for (var worse : function.versionsSorted().tailSet(version)) {
      var worseSignature = worse.signature();
      if (signature.hasNarrowerParameters(worseSignature)
          && !signature.hasNarrowerEffectsAndReturn(worseSignature)) {
        report(
            version,
            "Version has strictly narrower parameters than another, but not strictly narrower effects and return type:"
                + "\nThis version's signature: "
                + signature
                + "\nOther version's signature: "
                + worseSignature
                + "\nOther version:\n"
                + worse);
      }
    }

    // Check type and effects.
    // Doesn't `streamScopes` because `run` includes inline callees.
    new OnAbstraction(version).run();
  }

  private class OnAbstraction {
    final Abstraction scope;
    final InferType inferType;
    final InferEffects inferEffects;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      inferType = new InferType(scope);
      inferEffects = new InferEffects(scope);
    }

    void run() {
      var cfg = new OnCfg(scope.cfg());

      // Check parameters and locals well-formedness
      for (var binding : Iterables.concat(scope.parameters(), scope.locals())) {
        cfg.checkWellFormed(binding);
      }

      // Check return type well-formedness
      cfg.checkWellFormed(scope.returnType());
      if (!scope.returnType().canBeAssignedTo(Type.ANY_VALUE)) {
        cfg.report(
            "Return type's kind must subtype `V` and it must be definite: " + scope.returnType());
      }

      // Check return type and effects are expected
      var returnType = inferType.of(scope.cfg());
      var effects = inferEffects.of(scope.cfg());
      cfg.checkSubtype(returnType, scope.returnType(), "Return type mismatch");
      cfg.checkSubEffects(effects, scope.effects(), "Function effects mismatch");

      // Check instruction invariants
      // Doesn't `streamCfgs` because `run` includes promises.
      cfg.run();
    }

    class OnCfg {
      final CFGCursor cursor;

      OnCfg(CFG cfg) {
        cursor = new CFGCursor(cfg);
      }

      void run() {
        for (var bb : cursor.cfg().bbs()) {
          cursor.iterateBb(bb, this::run, this::run);
        }
      }

      void run(Statement statement) {
        var expr = statement.expression();
        var assignee = statement.assignee();

        run(expr);

        var type = inferType.of(expr);
        if (type != null && assignee != null) {
          var assigneeType = scope.typeOf(assignee);
          if (assigneeType == null) {
            report("Undeclared register: " + assignee);
          } else {
            checkAssignment(type, assigneeType, "Can't assign it to " + assignee);
          }
        }
      }

      void run(Expression expression) {
        if (!(expression instanceof Promise)) {
          for (var argument : expression.arguments()) {
            run(argument);
          }
        }

        switch (expression) {
          case Aea(var _) -> {}
          case Call call -> {
            var argumentTypes = call.callArguments().stream().map(inferType::of).toList();

            java.util.function.Consumer<Abstraction> checkArguments =
                callee -> {
                  if (callee.parameters().size() != argumentTypes.size()) {
                    report(
                        "Call expects "
                            + callee.parameters().size()
                            + " arguments, got "
                            + argumentTypes.size());
                  }
                  for (int i = 0;
                      i < Math.min(callee.parameters().size(), argumentTypes.size());
                      i++) {
                    var param = callee.parameters().get(i);
                    var argType = argumentTypes.get(i);
                    checkMatches(argType, param.type(), "Type mismatch in argument " + i);
                  }
                };

            switch (call.callee()) {
              case StaticCallee(var _, var version) -> checkArguments.accept(version);
              case DispatchCallee(var function, var signature) -> {
                // If `signature == null`, this is a call to an unknown version,
                // although we may still have some guarantees.
                if (signature == null) {
                  break;
                }

                var version = function.guess(signature);

                // If there's no explicit version, the actual version is unknown, but this is
                // also an error: an explicit signature means we expect a known version, though
                // it may have weaker parameters or stronger effects/return.
                if (version == null) {
                  report(
                      "Call to "
                          + function.name()
                          + " with signature "
                          + signature
                          + " has no matching version");
                }

                // Check arguments against signature parameters.
                if (signature.parameterTypes().size() != argumentTypes.size()) {
                  report(
                      "Signature expects "
                          + signature.parameterTypes().size()
                          + " arguments, got "
                          + argumentTypes.size());
                }
                for (int i = 0;
                    i < Math.min(signature.parameterTypes().size(), argumentTypes.size());
                    i++) {
                  var paramType = signature.parameterTypes().get(i);
                  var argType = argumentTypes.get(i);
                  checkMatches(
                      argType, paramType, "Type mismatch in argument " + i + " (for signature)");
                }
              }
              case DynamicCallee(var actualCallee, var argumentNames) -> {
                var calleeType = scope.typeOf(actualCallee);
                if (calleeType != null && !calleeType.isDefinitely(Kind.Closure.class)) {
                  report(
                      "Dynamic callee must be a closure, got "
                          + actualCallee
                          + " {:"
                          + calleeType
                          + "}");
                }

                if (argumentNames.size() > argumentTypes.size()) {
                  report(
                      "Dynamic call has more argument names ("
                          + argumentNames.size()
                          + ") than arguments ("
                          + argumentTypes.size()
                          + ")");
                }
              }
              case InlineCallee(var inlinee) -> checkArguments.accept(inlinee);
            }
          }
          case Cast(var _, var _), Closure _ -> {}
          case Dup(var value) -> {
            var type = scope.typeOf(value);
            if (type == null) {
              break;
            }

            if (!type.isDefinitely(PrimitiveVector.class)) {
              report("Can't dup non-vector, got " + value + " {:" + type + "}");
            }
          }
          case Force(var value) -> {
            var type = scope.typeOf(value);
            if (type == null) {
              break;
            }

            if (!(type.kind() instanceof Kind.Promise(var _, var _))) {
              report("Can't force non-promise, got " + type);
            } else if (type.concreteness() == Concreteness.MAYBE) {
              report("Can't force maybe-non-promise (use maybe-force), got " + type);
            }
          }
          case Load(var _), LoadFun(var _, var _), MaybeForce(var _) -> {}
          case MkVector(var elements) -> {
            for (var i = 0; i < elements.size(); i++) {
              var element = elements.get(i);
              var type = scope.typeOf(element);
              checkSubtype(type, Type.INTEGER, "Type mismatch in element " + i);
            }
          }
          case Placeholder() -> {}
          case Promise(var expectedInnerType, var expectedEffects, var promiseCode) -> {
            checkWellFormed(expectedInnerType);
            if (expectedInnerType.ownership() != Ownership.SHARED) {
              report(
                  "Promise inner type must be shared (in <"
                      + expectedInnerType
                      + " "
                      + expectedEffects
                      + ">)");
            }

            new OnCfg(promiseCode).run();

            var actualInnerType = inferType.of(promiseCode);
            var actualEffects = inferEffects.of(promiseCode);

            checkAssignment(actualInnerType, expectedInnerType, "Promise inner type mismatch");
            checkSubEffects(actualEffects, expectedEffects, "Promise effects mismatch");
          }
          case ReflectiveLoad(var promise, var _) -> {
            var promiseType = scope.typeOf(promise);
            if (promiseType != null && !promiseType.isDefinitely(Kind.Promise.class)) {
              report(
                  "Reflective read target must be a promise, got "
                      + promise
                      + " {:"
                      + promiseType
                      + "}");
            }
          }
          case ReflectiveStore(var promise, var _, var _) -> {
            var promiseType = scope.typeOf(promise);
            if (promiseType != null && !promiseType.isDefinitely(Kind.Promise.class)) {
              report(
                  "Reflective write target must be a promise, got "
                      + promise
                      + " {:"
                      + promiseType
                      + "}");
            }
          }
          case Store(var variable, var value) -> {
            var type = scope.typeOf(variable);
            var valueType = scope.typeOf(value);

            checkAssignment(valueType, type, "Can't assign " + value + " to " + variable);

            if (value instanceof Use) {
              report(
                  "Never store a `use` because the load can't be optimized. Instead, assign it to a register and store that.");
            }
          }
          case SubscriptRead(var target, var index) -> {
            var targetType = scope.typeOf(target);
            var indexType = scope.typeOf(index);

            if (targetType != null && !targetType.isDefinitely(PrimitiveVector.class)) {
              report(
                  "Subscript read target must be a vector, got "
                      + target
                      + " {:"
                      + targetType
                      + "}");
            }

            checkSubtype(
                indexType,
                Type.INTEGER,
                "Subscript index must be an integer, got " + index + " {:" + indexType + "}");
          }
          case SubscriptWrite(var target, var index, var value) -> {
            var targetType = scope.typeOf(target);
            var indexType = scope.typeOf(index);
            var valueType = scope.typeOf(value);

            if (targetType != null) {
              if (!targetType.isDefinitely(PrimitiveVector.class)) {
                report(
                    "Subscript write target must be a vector, got "
                        + target
                        + " {:"
                        + targetType
                        + "}");
              }
              if (targetType.ownership() != Ownership.OWNED
                  && targetType.ownership() != Ownership.FRESH) {
                report(
                    "Subscript write target must be owned or fresh, got "
                        + target
                        + " {:"
                        + targetType
                        + "}");
              }
            }

            checkSubtype(indexType, Type.INTEGER, "Subscript index must be integer");

            if (valueType != null && !valueType.isDefinitely(PrimitiveScalar.class)) {
              report(
                  "Subscript write value must be a primitive scalar, got "
                      + value
                      + " {:"
                      + valueType
                      + "}");
            }
            if (targetType != null
                && targetType.kind() instanceof PrimitiveVector(var targetKind)
                && valueType != null
                && valueType.kind() instanceof PrimitiveScalar(var valueKind)
                && valueKind != targetKind) {
              report(
                  "Subscript write kind mismatch: expected " + targetKind + ", got " + valueKind);
            }
          }
          case SuperLoad(var _), SuperStore(var _, var _) -> {}
        }
      }

      void run(Argument argument) {
        switch (argument) {
          case Constant(var _), Read(var _) -> {}
          case Use(var register) -> {
            var type = scope.typeOf(register);
            if (type == null) {
              break;
            }

            if (!type.isDefinitely(PrimitiveVector.class)) {
              report("Can't use non-vector, got " + type);
            } else if (type.ownership() != Ownership.OWNED) {
              report("Can't use non-owned vector, got " + type);
            }
          }
        }
      }

      void run(Jump jump) {
        switch (jump) {
          case Unreachable(), Return(var _), Goto(var _) -> {}
          case If(var condition, var _, var _) -> {
            var condType = scope.typeOf(condition);
            checkSubtype(condType, Type.BOOLEAN, "Type mismatch in condition");
          }
        }
      }

      void checkWellFormed(Binding binding) {
        var isNamed = binding.variable() instanceof NamedVariable;
        var type = binding.type();

        if (!type.isWellFormed()) {
          report("Variable type is not well-formed: " + binding);
        }
        if (!isNamed && type.ownership() == Ownership.FRESH) {
          report("Variables can't be fresh: " + binding);
        }
        if (isNamed && type.ownership() != Ownership.SHARED) {
          report("Named variables must be shared: " + binding);
        }
        if (isNamed && type.concreteness() == Concreteness.DEFINITE) {
          report("Named variables can't have definite types: " + binding);
        }
      }

      void checkWellFormed(Type type) {
        if (!type.isWellFormed()) {
          report("Type is not well-formed: " + type);
        }
      }

      void checkSubtype(@Nullable Type type, Type expected, String message) {
        if (type != null && !type.isSubtypeOf(expected)) {
          report(message + ": " + type + " doesn't subtype " + expected);
        }
      }

      void checkMatches(@Nullable Type type, Type expected, String message) {
        if (type != null && !type.matches(expected)) {
          report(message + ": " + type + " doesn't match " + expected);
        }
      }

      void checkAssignment(@Nullable Type type, Type expected, String message) {
        if (type != null && !type.canBeAssignedTo(expected)) {
          report(message + ": can't assign " + type + " to " + expected);
        }
      }

      void checkSubEffects(Effects effects, Effects expected, String message) {
        if (!effects.isSubsetOf(expected)) {
          report(message + ": " + effects + " don't subset " + expected);
        }
      }

      void report(String message) {
        TypeAndEffectChecker.this.report(cursor.bb(), cursor.instructionIndex(), message);
      }
    }
  }
}
