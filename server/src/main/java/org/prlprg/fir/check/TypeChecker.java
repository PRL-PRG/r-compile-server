package org.prlprg.fir.check;

import com.google.common.collect.Iterables;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.Stack;
import java.util.function.Function;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.binding.Binding;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.InlineCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
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
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Kind.Any;
import org.prlprg.fir.ir.type.Kind.PrimitiveScalar;
import org.prlprg.fir.ir.type.Kind.PrimitiveVector;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;

public final class TypeChecker extends Checker {
  @Override
  public void run(Abstraction abstraction) {
    new OnAbstraction(abstraction).run();
  }

  private class OnAbstraction {
    final Abstraction abstraction;

    OnAbstraction(Abstraction abstraction) {
      this.abstraction = abstraction;
    }

    void run() {
      var cfg = new OnCfg(abstraction.cfg());

      for (var binding : Iterables.concat(abstraction.parameters(), abstraction.locals())) {
        cfg.checkWellFormed(binding);
      }
      cfg.checkWellFormed(abstraction.returnType());

      // Parameters are initially written to.
      var initialFlow = new ActionSet();
      abstraction.parameters().stream()
          .map(Parameter::variable)
          .forEachOrdered(initialFlow.write::add);

      cfg.run(initialFlow);

      cfg.checkSubtype(cfg.returnType, abstraction.returnType(), "Return type mismatch");
      cfg.checkSubEffects(cfg.effects, abstraction.returnEffects(), "Function effects mismatch");
    }

    class OnCfg {
      /// `null` is bottom.
      @Nullable Type returnType = null;
      Effects effects = Effects.NONE;
      ActionSet returnFlow = new ActionSet();
      final CFGCursor cursor;

      // Modifiers are only for decoration, to indicate these shouldn't be accessed by the outer
      // class.
      private final Map<BB, ActionSet> flowStates = new HashMap<>();
      private final Stack<BB> worklist = new Stack<>();
      private ActionSet flow;
      private BB next;

      OnCfg(CFG cfg) {
        cursor = new CFGCursor(cfg);
        // `flow` and `next` are set before use, so whatever they're set to here doesn't matter.
        flow = new ActionSet();
        next = cfg.entry();
      }

      void run(ActionSet initialFlow) {
        assert flowStates.isEmpty() && worklist.isEmpty() : "already run";

        // Abstract interpretation.
        // - [ActionSet] is the state at the start of each block.
        // - There's global state in [#returnType] and [#effects].
        // - [#cursor] is to traverse the CFG, [#flow] and [#next] are the state and
        //   currently-iterated basic block (should be parameters but more convenient as fields).

        flowStates.put(cursor.bb(), initialFlow.copy());
        worklist.add(cursor.bb());

        while (!worklist.isEmpty()) {
          next = worklist.pop();
          flow = flowStates.get(next).copy();
          cursor.iterateBb(next, this::run, this::run);
        }
      }

      void run(Statement statement) {
        var expr = statement.expression();
        var assignee = statement.assignee();

        var type = run(expr);

        if (type != null && assignee != null) {
          var assigneeType = typeOf(assignee);
          if (assigneeType == null) {
            report("Undeclared register: " + assignee);
          } else {
            checkAssignment(type, assigneeType, "Can't assign it to " + assignee);
          }

          // Check and update flow state
          if (flow.use.contains(assignee)) {
            report("Write after use: " + assignee);
          }
          flow.write.add(assignee);
        }
      }

      @Nullable Type run(Expression expression) {
        return switch (expression) {
          case Aea(var value) -> run(value);
          case Call call -> {
            var argumentTypes = call.arguments().stream().map(this::run).toList();

            Function<Abstraction, Type> finish =
                callee -> {
                  if (callee.parameters().size() != argumentTypes.size()) {
                    report(
                        "Call expects "
                            + callee.parameters().size()
                            + " arguments, but has "
                            + argumentTypes.size());
                  }

                  for (int i = 0;
                      i < Math.min(callee.parameters().size(), argumentTypes.size());
                      i++) {
                    var param = callee.parameters().get(i);
                    var argType = argumentTypes.get(i);
                    checkMatches(argType, param.type(), "Type mismatch in argument " + i);
                  }

                  effects = effects.union(callee.returnEffects());
                  return callee.returnType();
                };

            yield switch (call.callee()) {
              case StaticCallee(var _, var version) -> finish.apply(version);
              case DispatchCallee(var function, var signature) -> {
                var version = function.guess(signature);

                // If `version == null`, this is a call to an unknown version, so it could
                // do and return anything.
                if (version == null) {
                  effects = Effects.ANY;
                  yield Type.ANY_VALUE;
                }

                yield finish.apply(version);
              }
              case DynamicCallee(var calleeVariable, var argumentNames) -> {
                var calleeType = typeOf(calleeVariable);
                // Concreteness is [MAYBE], we only care about the kind.
                if (!(calleeType.kind() instanceof Kind.Closure)) {
                  report(
                      "Dynamic call target must be a closure, got "
                          + calleeVariable
                          + " {: "
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

                effects = Effects.ANY;
                yield Type.ANY_VALUE;
              }
              case InlineCallee(var inlinee) -> {
                TypeChecker.this.run(inlinee);
                yield finish.apply(inlinee);
              }
            };
          }
          case Cast(var value, var castType) -> {
            var valueType = run(value);
            checkWellFormed(castType);

            if (valueType != null
                && !valueType.isSubtypeOf(castType)
                && !castType.isSubtypeOf(valueType)) {
              report(
                  "Stupid cast: "
                      + value
                      + " {: "
                      + valueType
                      + "} as "
                      + castType
                      + " will always fail");
            }

            yield castType;
          }
          case Closure _ -> Type.CLOSURE;
          case Dup(var value) -> {
            var type = run(value);
            if (type == null) {
              yield null;
            }

            if (!type.isDefinitely(PrimitiveVector.class)) {
              report("Can't dup non-vector, got " + value + " {:" + type + "}");
              yield null;
            }

            yield type.withOwnership(Ownership.FRESH);
          }
          case Force(var value) -> {
            var type = run(value);
            if (type == null) {
              yield null;
            }

            if (type.kind() instanceof Kind.Promise(var innerTy, var promFx)) {
              if (type.concreteness() == Concreteness.MAYBE) {
                report("Can't force maybe-non-promise (use maybe-force), got " + type);
              }

              effects = effects.union(promFx);
              yield innerTy;
            } else {
              report("Can't force non-promise, got " + type);
              yield null;
            }
          }
          case Load(var variable) -> typeOf(variable);
          case MaybeForce(var value) -> {
            var type = run(value);
            if (type == null) {
              yield null;
            }

            if (type.kind() instanceof Kind.Promise(var innerTy, var promFx)) {
              effects = effects.union(promFx);
              yield innerTy;
            } else if (type.kind() instanceof Any) {
              effects = Effects.ANY;
              yield Type.ANY_VALUE;
            } else {
              yield type;
            }
          }
          case MkVector(var elements) -> {
            for (var i = 0; i < elements.size(); i++) {
              var element = elements.get(i);
              var type = run(element);
              checkSubtype(type, Type.INTEGER, "Type mismatch in element " + i);
            }

            yield Type.primitiveVector(PrimitiveKind.INTEGER, Ownership.FRESH);
          }
          case Placeholder() -> null;
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

            var promiseAnalysis = new OnCfg(promiseCode);
            promiseAnalysis.run(flow);
            var actualInnerType = promiseAnalysis.returnType;
            flow.mergePromise(promiseAnalysis.returnFlow);

            checkAssignment(actualInnerType, expectedInnerType, "Promise inner type mismatch");
            checkSubEffects(promiseAnalysis.effects, expectedEffects, "Promise effects mismatch");

            yield Type.promise(expectedInnerType, expectedEffects);
          }
          case ReflectiveLoad(var promise, var _) -> {
            var promiseType = run(promise);
            if (promiseType != null && !promiseType.isDefinitely(Kind.Promise.class)) {
              report(
                  "Reflective read target must be a promise, got "
                      + promise
                      + " {:"
                      + promiseType
                      + "}");
            }

            effects = Effects.ANY;
            yield Type.ANY;
          }
          case ReflectiveStore(var promise, var _, var value) -> {
            var promiseType = run(promise);
            if (promiseType != null && !promiseType.isDefinitely(Kind.Promise.class)) {
              report(
                  "Reflective write target must be a promise, got "
                      + promise
                      + " {:"
                      + promiseType
                      + "}");
            }

            var valueType = run(value);

            effects = Effects.ANY;
            yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
          }
          case Store(var variable, var value) -> {
            var type = typeOf(variable);

            var valueType = run(value);

            checkAssignment(valueType, type, "Can't assign " + value + " to " + variable);

            yield type;
          }
          case SubscriptLoad(var target, var index) -> {
            var targetType = run(target);
            var indexType = run(index);

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

            yield targetType != null && targetType.kind() instanceof PrimitiveVector(var kind)
                ? Type.primitiveScalar(kind)
                : null;
          }
          case SubscriptStore(var target, var index, var value) -> {
            var targetType = run(target);
            var indexType = run(index);
            var valueType = run(value);

            if (targetType != null) {
              if (!targetType.isDefinitely(PrimitiveVector.class)) {
                report(
                    "Subscript write target must be a vector, got "
                        + target
                        + " {:"
                        + targetType
                        + "}");
              }
              if (targetType.ownership() != Ownership.OWNED) {
                report(
                    "Subscript write target must be owned, got "
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

            yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
          }
          case SuperLoad(var _) -> Type.ANY;
          case SuperStore(var _, var value) -> {
            var valueType = run(value);

            yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
          }
        };
      }

      @Nullable Type run(Argument argument) {
        return switch (argument) {
          case Constant(var sexp) -> Type.of(sexp);
          case Read(var variable) -> {
            var type = typeOf(variable);
            if (type == null) {
              report("Undeclared register: " + variable);
              yield null;
            }

            // Flow check: ensure register is written before read
            if (!flow.write.contains(variable)) {
              report("Read before write: " + variable);
            }
            if (flow.use.contains(variable)) {
              report("Read after use: " + variable);
            }
            flow.read.add(variable);

            yield type;
          }
          case Use(var register) -> {
            var type = typeOf(register);
            if (type == null) {
              report("Undeclared register: " + register);
              yield null;
            }

            if (!type.isDefinitely(PrimitiveVector.class)) {
              report("Can't use non-vector, got " + type);
              yield null;
            }

            if (type.ownership() != Ownership.OWNED) {
              report("Can't use non-owned vector, got " + type);
              yield null;
            }

            // Flow check: ensure register is written before use, and not used or captured.
            if (!flow.write.contains(register)) {
              report("Use before write: " + register);
            }
            if (flow.use.contains(register)) {
              report("Use after use: " + register);
            }
            if (flow.capture.contains(register)) {
              report("Use after capture: " + register);
            }
            flow.read.add(register);
            flow.use.add(register);

            yield type.withOwnership(Ownership.FRESH);
          }
        };
      }

      void run(Jump jump) {
        switch (jump) {
          case Unreachable() -> {}
          case Return(var value) -> {
            var type = run(value);
            // Ignore ownership mismatches, because we check ownership against the expected return
            // type. Ignoring lets us return fresh and shared values from a closure version whose
            // explicit return type is shared, and that is sound.
            returnType =
                returnType == null
                    ? type
                    : type == null ? returnType : returnType.union(type, () -> {});
            returnFlow.merge(flow);
          }
          case Goto(var _) -> {}
          case If(var condition, var _, var _) -> {
            var condType = run(condition);
            checkSubtype(condType, Type.BOOLEAN, "Type mismatch in condition");
          }
        }

        for (var successor : next.successors()) {
          var successorState = flowStates.computeIfAbsent(successor, _ -> new ActionSet());
          successorState.merge(flow);
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
          report(message + ": expected " + expected + ", got " + type);
        }
      }

      void checkMatches(@Nullable Type type, Type expected, String message) {
        if (type != null && !type.matches(expected)) {
          report(message + ": expected " + expected + ", got " + type);
        }
      }

      void checkAssignment(@Nullable Type type, Type expected, String message) {
        if (type != null && !type.canBeAssignedTo(expected)) {
          report(message + ": expected " + expected + ", got " + type);
        }
      }

      void checkSubEffects(Effects effects, Effects expected, String message) {
        if (!effects.isSubsetOf(expected)) {
          report(message + ": expected " + expected + ", got " + effects);
        }
      }

      void report(String message) {
        TypeChecker.this.report(cursor.bb(), cursor.instructionIndex(), message);
      }
    }

    @Nullable Type typeOf(Register register) {
      return abstraction.typeOf(register);
    }

    Type typeOf(NamedVariable named) {
      return abstraction.typeOf(named);
    }
  }

  private static class ActionSet {
    final Set<Register> read = new HashSet<>();
    final Set<Register> write = new HashSet<>();
    final Set<Register> use = new HashSet<>();
    final Set<Register> capture = new HashSet<>();

    ActionSet copy() {
      var clone = new ActionSet();
      clone.read.addAll(read);
      clone.write.addAll(write);
      clone.use.addAll(use);
      clone.capture.addAll(capture);
      return clone;
    }

    /// Unifies requirements and intersects guarantees.
    ///
    /// [#read], [#use], and [#defer] are requirements, [#write] is a guarantee.
    void merge(ActionSet other) {
      read.addAll(other.read);
      write.retainAll(other.write);
      use.addAll(other.use);
      capture.addAll(other.capture);
    }

    /// Unifies requirements, and adds *all* registers touched by the promise to `capture`.
    ///
    /// This is the stateful analogue to the formalism's compose operator.
    ///
    /// [#read], [#use], and [#defer] are requirements, [#write] is a guarantee.
    void mergePromise(ActionSet promise) {
      read.addAll(promise.read);
      use.addAll(promise.use);
      capture.addAll(promise.read);
      capture.addAll(promise.write);
      capture.addAll(promise.use);
      capture.addAll(promise.capture);
    }
  }
}
