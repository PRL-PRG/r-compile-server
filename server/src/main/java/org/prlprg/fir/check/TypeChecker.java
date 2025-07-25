package org.prlprg.fir.check;

import com.google.common.base.Joiner;
import com.google.common.collect.Iterables;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.Stack;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.InlineCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.instruction.Call;
import org.prlprg.fir.ir.instruction.Cast;
import org.prlprg.fir.ir.instruction.Closure;
import org.prlprg.fir.ir.instruction.Dup;
import org.prlprg.fir.ir.instruction.Expression;
import org.prlprg.fir.ir.instruction.Force;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Literal;
import org.prlprg.fir.ir.instruction.MaybeForce;
import org.prlprg.fir.ir.instruction.MkVector;
import org.prlprg.fir.ir.instruction.Placeholder;
import org.prlprg.fir.ir.instruction.Promise;
import org.prlprg.fir.ir.instruction.Read;
import org.prlprg.fir.ir.instruction.ReflectiveRead;
import org.prlprg.fir.ir.instruction.ReflectiveWrite;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.SubscriptRead;
import org.prlprg.fir.ir.instruction.SubscriptWrite;
import org.prlprg.fir.ir.instruction.SuperRead;
import org.prlprg.fir.ir.instruction.SuperWrite;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.instruction.Write;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;

public final class TypeChecker {
  private final List<CheckException> errors = new ArrayList<>();

  /// Returns all errors found during type-checking.
  public List<CheckException> errors() {
    return errors;
  }

  /// Throws an [IllegalStateException] if there are any errors found during type-checking.
  public void finish() {
    if (!errors.isEmpty()) {
      throw new IllegalStateException(
          "Encountered type errors:\n\n" + Joiner.on("\n\n").join(errors));
    }
  }

  /// Check the types, effects, and flow of all code in the module.
  public void run(Module module) {
    for (var function : module.localFunctions()) {
      // Check each function
      run(function);
    }
  }

  public void run(Function function) {
    for (var version : function.versions()) {
      run(version);
    }
  }

  public void run(Abstraction abstraction) {
    new OnAbstraction(abstraction).run();
  }

  private class OnAbstraction {
    final Abstraction abstraction;
    final Map<String, Type> types = new HashMap<>();

    OnAbstraction(Abstraction abstraction) {
      this.abstraction = abstraction;
    }

    void run() {
      var cfg = new OnCfg(abstraction.cfg());

      for (var binding : Iterables.concat(abstraction.parameters(), abstraction.locals())) {
        if (types.containsKey(binding.variable().name())) {
          cfg.report("Duplicate variable declaration: " + binding.variable());
        }
        types.put(binding.variable().name(), binding.type());

        cfg.checkWellFormed(binding.type());
        if (binding.variable() instanceof NamedVariable && binding.type().concreteness() == Concreteness.DEFINITE) {
          cfg.report("Named variables can't have definite types: " + binding.variable() + ":" + binding.type());
        }
      }
      cfg.checkWellFormed(abstraction.returnType());

      cfg.run();

      cfg.checkSubtype(cfg.returnType, abstraction.returnType(), "Return type mismatch");
      cfg.checkSubEffects(cfg.effects, abstraction.returnEffects(), "Function effects mismatch");
    }

    @Nullable Type lookup(Variable variable) {
      return types.get(variable.name());
    }

    class OnCfg {
      /// `null` is bottom.
      @Nullable Type returnType = null;
      Effects effects = Effects.NONE;
      ActionSet returnFlow = new ActionSet();
      CFGCursor cursor;

      // Modifiers are only for decoration, to indicate these shouldn't be accessed by the outer
      // class.
      private final Map<BB, ActionSet> flowStates = new HashMap<>();
      private final Stack<BB> worklist = new Stack<>();
      private ActionSet flow = new ActionSet();
      private BB next;

      /// Runs the type-checker.
      OnCfg(CFG cfg) {
        cursor = new CFGCursor(cfg);
        // `next` is set before use, so whatever it's set to here doesn't matter.
        next = cfg.entry();
      }

      void run() {
        assert flowStates.isEmpty() && worklist.isEmpty() : "already run";

        // Abstract interpretation.
        // - [ActionSet] is the state at the start of each block.
        // - There's global state in [#returnType] and [#effects].
        // - There's read-pnly context in [#types].
        // - [#cursor] is to traverse the CFG, [#flow] and [#next] are the state and
        //   currently-iterated basic block (should be parameters but more convenient as fields).

        var initialState = new ActionSet();
        // Parameters are initially written to.
        abstraction.parameters().stream()
            .map(Parameter::variable)
            .forEachOrdered(initialState.write::add);

        flowStates.put(cursor.bb(), initialState);
        worklist.add(cursor.bb());

        while (!worklist.isEmpty()) {
          next = worklist.pop();
          flow = flowStates.get(next).copy();

          for (cursor.moveTo(next, 0); cursor.isAtLocalEnd(); cursor.advance()) {
            run(cursor.instruction());
          }
        }
      }

      void run(Instruction instruction) {
        switch (instruction) {
          case Expression expression -> run(expression);
          case Jump jump -> run(jump);
        }
      }

      @Nullable Type run(Expression expression) {
        return switch (expression) {
          case Call call -> {
            var argumentTypes = call.arguments().stream()
                .map(this::run)
                .toList();

            java.util.function.Function<Abstraction, Type> finish = callee -> {
              if (callee.parameters().size() != argumentTypes.size()) {
                report("Call expects " + callee.parameters().size() + " arguments, but has "
                    + argumentTypes.size() + ": " + expression);
              }

              for (int i = 0; i < Math.min(callee.parameters().size(), argumentTypes.size()); i++) {
                var param = callee.parameters().get(i);
                var argType = argumentTypes.get(i);
                checkMatches(argType, param.type(), "Type mismatch in argument " + i + " of " + expression);
              }

              effects = effects.union(callee.returnEffects());
              return callee.returnType();
            };

            yield switch (call.callee()) {
              case StaticCallee(var _, var version) -> finish.apply(version);
              case DispatchCallee(var function, var signature) -> {
                var version = function.worstGuess(signature);
                yield finish.apply(version);
              }
              case DynamicCallee(var calleeVariable, var argumentNames) -> {
                var calleeType = lookup(calleeVariable);
                // Concreteness is [MAYBE], we only care about the kind.
                if (calleeType != null && !(calleeType.kind() instanceof Kind.Closure)) {
                  report("Dynamic call target must be a closure, got " + calleeVariable + " {: "
                      + calleeType
                      + "}");
                }

                if (argumentNames.size() > argumentTypes.size()) {
                  report("Dynamic call has more argument names than arguments: " + expression);
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

            if (valueType != null && !valueType.isSubtypeOf(castType) && !castType.isSubtypeOf(valueType)) {
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

            if (!type.isDefinitely(Kind.PrimitiveVector.class)) {
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
          case Literal(var sexp) -> Type.of(sexp);
          case MaybeForce(var value) -> {
            var type = run(value);
            if (type == null) {
              yield null;
            }

            if (type.kind() instanceof Kind.Promise(var innerTy, var promFx)) {
              effects = effects.union(promFx);
              yield innerTy;
            } else if (type.kind() instanceof Kind.Any) {
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
              checkSubtype(type, Type.INTEGER, "Type mismatch in element " + i + " of vector " + expression);
            }

            yield Type.INT_VECTOR;
          }
          case Placeholder() -> null;
          case Promise(var expectedInnerType, var expectedEffects, var promiseCode) -> {
            checkWellFormed(expectedInnerType);
            if (expectedInnerType.ownership() != Ownership.SHARED) {
              report("Promise inner type must be shared (in " + expression + ")");
            }

            var promiseAnalysis = new OnCfg(promiseCode);
            promiseAnalysis.run();
            var actualInnerType = promiseAnalysis.returnType;

            checkSubtype(actualInnerType, expectedInnerType, "Type mismatch in " + expression);
            checkSubEffects(promiseAnalysis.effects, expectedEffects, "Effects mismatch in " + expression);

            flow.compose(promiseAnalysis.flow.inPromise());
            yield Type.promise(expectedInnerType, expectedEffects);
          }
          case Read(var variable) -> {
            var type = lookup(variable);
            if (type == null) {
              report("Undeclared register: " + variable);
              yield null;
            }

            if (variable instanceof Register register) {
              // Flow check: ensure register is written before read
              if (!flow.write.contains(register)) {
                report("Read before write: " + register);
              }
              if (flow.use.contains(register)) {
                report("Read after use: " + register);
              }
              flow.read.add(register);
            }

            yield type;
          }
          case ReflectiveRead(var promise, var _) -> {
            var promiseType = run(promise);
            if (promiseType != null && !promiseType.isDefinitely(Kind.Promise.class)) {
              report("Reflective read target must be a promise, got " + promise + " {:" + promiseType + "}");
            }

            effects = Effects.ANY;
            yield Type.ANY;
          }
          case ReflectiveWrite(var promise, var _, var value) -> {
            var promiseType = run(promise);
            if (promiseType != null && !promiseType.isDefinitely(Kind.Promise.class)) {
              report("Reflective write target must be a promise, got " + promise + " {:" + promiseType + "}");
            }

            var valueType = run(value);

            effects = Effects.ANY;
            yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
          }
          case SubscriptRead(var target, var index) -> {
            var targetType = run(target);
            var indexType = run(index);

            if (targetType != null && !targetType.isDefinitely(Kind.PrimitiveVector.class)) {
              report("Subscript read target must be a vector, got " + target + " {:" + targetType + "}");
            }

            checkSubtype(indexType, Type.INTEGER, "Subscript index must be integer");

            yield targetType != null && targetType.kind() instanceof Kind.PrimitiveVector(var kind) ? Type.primitiveScalar(kind) : null;
          }
          case SubscriptWrite(var target, var index, var value) -> {
            var targetType = run(target);
            var indexType = run(index);
            var valueType = run(value);

            if (targetType != null) {
              if (!targetType.isDefinitely(Kind.PrimitiveVector.class)) {
                report("Subscript write target must be a vector, got " + target + " {:" + targetType + "}");
              }
              if (targetType.ownership() != Ownership.OWNED) {
                report("Subscript write target must be owned, got " + target + " {:" + targetType + "}");
              }
            }

            checkSubtype(indexType, Type.INTEGER, "Subscript index must be integer");

            if (valueType != null && !valueType.isDefinitely(Kind.PrimitiveScalar.class)) {
              report("Subscript write value must be a primitive scalar, got " + value + " {:" + valueType + "}");
            }
            if (targetType != null && targetType.kind() instanceof Kind.PrimitiveVector(var targetKind) && valueType != null && valueType.kind() instanceof Kind.PrimitiveScalar(var valueKind) && valueKind != targetKind) {
              report("Subscript write kind mismatch (in " + expression + "): expected " + targetKind + ", got " + valueKind);
            }

            yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
          }
          case SuperRead(var _) -> Type.ANY;
          case SuperWrite(var _, var value) -> {
            var valueType = run(value);

            yield valueType == null ? null : valueType.withOwnership(Ownership.SHARED);
          }
          case Use(var register) -> {
            var type = lookup(register);
            if (type == null) {
              report("Undeclared register: " + register);
              yield null;
            }

            if (!type.isDefinitely(Kind.PrimitiveVector.class)) {
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
          case Write(var variable, var value) -> {
            var type = lookup(variable);
            if (type == null) {
              report("Undeclared register: " + variable);
              yield null;
            }

            var valueType = run(value);

            // Check assignment compatibility
            checkAssignment(valueType, type, "Can't assign " + value + " to " + variable);

            // Check and update flow state
            if (variable instanceof Register register) {
              if (flow.use.contains(register)) {
                report("Write after use: " + register);
              }
              flow.write.add(register);
            }

            yield type;
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
            returnType = returnType == null ? type : type == null ? returnType : returnType.union(type, () -> {});
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
        if (type != null && !type.canAssignTo(expected)) {
          report(message + ": expected " + expected + ", got " + type);
        }
      }

      void checkSubEffects(Effects effects, Effects expected, String message) {
        if (!effects.isSubsetOf(expected)) {
          report(message + ": expected " + expected + ", got " + effects);
        }
      }

      void report(String message) {
        errors.add(new CheckException(message, cursor.copy()));
      }

      private class ActionSet {
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

        ActionSet inPromise() {
          var clone = new ActionSet();
          clone.read.addAll(read);
          clone.use.addAll(use);
          // `clone.defer.addAll(this)`.
          clone.capture.addAll(read);
          clone.capture.addAll(write);
          clone.capture.addAll(use);
          clone.capture.addAll(capture);
          return clone;
        }

        /// Compose two action sets = effectively run each action in `other`.
        ///
        /// Reports any flow errors: specifically, if `other` has actions that access a used
        /// register or use a captured register).
        void compose(ActionSet other) {
          for (var used : use) {
            if (other.read.contains(used)) {
              report("Read after use: " + used);
            }
            if (other.write.contains(used)) {
              report("Write after use: " + used);
            }
            if (other.use.contains(used)) {
              report("Use after use: " + used);
            }
            // `other.capture.contains(used)` is implied by `read`, `write`, and `use`.
          }
          for (var captured : capture) {
            if (other.use.contains(captured)) {
              report("Use after capture: " + captured);
            }
          }

          // Unify all sets, even `write`, because we "run all actions".
          read.addAll(other.read);
          write.addAll(other.write);
          use.addAll(other.use);
          capture.addAll(other.capture);
        }

        void merge(ActionSet other) {
          // [#read], [#use], and [#defer] are requirements, [#write] is a guarantee.
          // Unify requirements, intersect guarantees.
          read.addAll(other.read);
          write.retainAll(other.write);
          use.addAll(other.use);
          capture.addAll(other.capture);
        }
      }
    }
  }
}
