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
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Type;
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
    final Map<Variable, Type> types = new HashMap<>();

    OnAbstraction(Abstraction abstraction) {
      this.abstraction = abstraction;
    }

    void run() {
      var cfg = new OnCfg(abstraction.cfg());

      for (var binding : Iterables.concat(abstraction.params(), abstraction.locals())) {
        types.put(binding.variable(), binding.type());
        cfg.checkWellFormed(binding.type());
      }
      cfg.checkWellFormed(abstraction.returnType());

      cfg.run();

      cfg.checkSubtype(cfg.returnType, abstraction.returnType(), "Return type mismatch");
      cfg.checkSubEffects(cfg.effects, abstraction.returnEffects(), "Function effects mismatch");
    }

    class OnCfg {
      /// `null` is bottom.
      @Nullable Type returnType = null;
      Effects effects = Effects.NONE;
      ActionSet returnState = new ActionSet();
      CFGCursor cursor;

      // Modifiers are only for decoration, to indicate these shouldn't be accessed by the outer
      // class.
      private final Map<BB, ActionSet> states = new HashMap<>();
      private final Stack<BB> worklist = new Stack<>();
      private ActionSet state = new ActionSet();
      private BB next;

      /// Runs the type-checker.
      OnCfg(CFG cfg) {
        cursor = new CFGCursor(cfg);
        // `next` is set before use, so whatever it's set to here doesn't matter.
        next = cfg.entry();
      }

      void run() {
        assert states.isEmpty() && worklist.isEmpty() : "already run";

        // Abstract interpretation.
        // - [ActionSet] is the state at the start of each block.
        // - There's global state in [#returnType] and [#effects].
        // - There's read-pnly context in [#types].
        // - [#cursor] is to traverse the CFG, [#state] and [#next] are the state and
        //   currently-iterated basic block (should be parameters but more convenient as fields).

        var initialState = new ActionSet();
        // Parameters are initially written to.
        abstraction.params().stream()
            .map(Parameter::variable)
            .forEachOrdered(initialState.write::add);

        states.put(cursor.bb(), initialState);
        worklist.add(cursor.bb());

        while (!worklist.isEmpty()) {
          next = worklist.pop();
          state = states.get(next).copy();

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
            // Type check arguments
            for (var arg : call.arguments()) {
              run(arg);
            }

            // Get function type and effects
            if (call.target() instanceof Function function) {
              var version = function.versions().get(call.versionIndex());
              effects = effects.union(version.returnEffects());
              yield version.returnType();
            } else {
              report("Invalid call target");
              yield null;
            }
          }
          case Cast(var value, var castType) -> {
            var valueType = run(value);
            checkWellFormed(castType);

            if (!valueType.isSubtypeOf(castType) && !castType.isSubtypeOf(valueType)) {
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
          case Closure mkClos -> {
            // Type check the closure's abstraction
            new OnAbstraction(mkClos.abstraction()).run();
            yield mkClos.type();
          }
          case Dup(var value) -> {
            var type = run(value);
            if (type == null) {
              yield null;
            }

            if (!type.kind().isVector()) {
              report("Can't dup non-vector, got " + type);
              yield null;
            }

            yield type.withOwnership(Type.Ownership.FRESH);
          }
          case Force(var value) -> {
            var type = run(value);
            if (type == null) {
              yield null;
            }

            if (type.kind() instanceof Kind.Promise(var innerTy, var promFx)) {
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
            } else {
              yield type;
            }
          }
          case MkVector(var elements) -> {
            for (var i = 0; i < elements.size(); i++) {
              var element = elements.get(i);
              var type = run(element);
              checkSubtype(type, Type.INTEGER, "Type mismatch in element " + i + " of vector");
            }

            yield Type.INT_VECTOR;
          }
          case Placeholder() -> null;
          case Promise(var valueType, var effects1, var code) -> {
            // Save current state for promise context
            var savedState = state.copy();
            var savedEffects = effects;

            // Check promise body in new context
            state = state.inPromise();
            effects = Effects.NONE;

            // Type check the promise code
            cursor.pushScope(code);
            var actualType = null;
            for (cursor.moveTo(code.entry(), 0); cursor.isAtLocalEnd(); cursor.advance()) {
              actualType = run(cursor.instruction());
            }
            cursor.popScope();

            // Check that actual type matches declared type
            checkSubtype(actualType, valueType, "Promise return type mismatch");
            checkSubEffects(effects, effects1, "Promise effects mismatch");

            // Restore state
            state = savedState;
            effects = savedEffects;

            yield Type.promise(valueType, effects1);
          }
          case Read(var variable) -> {
            var type = types.get(variable);
            if (type == null) {
              report("Undeclared variable: " + variable);
              yield null;
            }

            // Flow check: ensure variable is written before read
            if (variable instanceof Register reg && !state.write.contains(reg)) {
              report("Read before write: " + variable);
            }
            state.read.add((Register) variable);

            yield type;
          }
          case ReflectiveRead(var promise, var variable) -> {
            var promiseType = run(promise);
            if (promiseType != null && !promiseType.kind().isPromise()) {
              report("Reflective read target must be a promise, got " + promiseType);
            }

            // Reflective operations have reflection effects
            effects = effects.union(Effects.REFLECTION);

            yield Type.ANY;
          }
          case ReflectiveWrite(var promise, var variable, var value) -> {
            var promiseType = run(promise);
            if (promiseType != null && !promiseType.kind().isPromise()) {
              report("Reflective write target must be a promise, got " + promiseType);
            }

            var valueType = run(value);

            // Reflective operations have reflection effects
            effects = effects.union(Effects.REFLECTION);

            yield valueType.withOwnership(Type.Ownership.SHARED);
          }
          case SubscriptRead(var target, var index) -> {
            var targetType = run(target);
            var indexType = run(index);

            if (targetType != null && !targetType.kind().isVector()) {
              report("Subscript read target must be a vector, got " + targetType);
            }

            checkSubtype(indexType, Type.INTEGER, "Subscript index must be integer");

            yield Type.INTEGER;
          }
          case SubscriptWrite(var target, var index, var value) -> {
            var targetType = run(target);
            var indexType = run(index);
            var valueType = run(value);

            if (targetType != null) {
              if (!targetType.kind().isVector()) {
                report("Subscript write target must be a vector, got " + targetType);
              }
              if (!targetType.ownership().isOwned()) {
                report("Subscript write target must be owned, got " + targetType);
              }
            }

            checkSubtype(indexType, Type.INTEGER, "Subscript index must be integer");
            checkSubtype(valueType, Type.INTEGER, "Vector element must be integer");

            yield Type.INTEGER;
          }
          case SuperRead(var variable) -> {
            var type = types.get(variable);
            if (type == null) {
              report("Undeclared variable: " + variable);
              yield null;
            }

            // Super reads have different flow semantics
            state.defer.add((Register) variable);

            yield type;
          }
          case SuperWrite(var variable, var value) -> {
            var type = types.get(variable);
            if (type == null) {
              report("Undeclared variable: " + variable);
              yield null;
            }

            var valueType = run(value);
            checkSubtype(valueType, type, "Type mismatch in super write");

            // Super writes have different flow semantics
            state.defer.add((Register) variable);

            yield type;
          }
          case Use(var variable) -> {
            var type = types.get(variable);
            if (type == null) {
              report("Undeclared variable: " + variable);
              yield null;
            }

            if (!type.kind().isVector()) {
              report("Can't use non-vector, got " + type);
              yield null;
            }

            if (!type.ownership().isOwned()) {
              report("Can't use non-owned vector, got " + type);
              yield null;
            }

            // Flow check: ensure variable is written before use
            if (variable instanceof Register reg && !state.write.contains(reg)) {
              report("Use before write: " + variable);
            }
            state.read.add((Register) variable);
            state.use.add((Register) variable);

            yield type.withOwnership(Type.Ownership.FRESH);
          }
          case Write(var variable, var value) -> {
            var type = types.get(variable);
            if (type == null) {
              report("Undeclared variable: " + variable);
              yield null;
            }

            var valueType = run(value);

            // Check assignment compatibility
            if (valueType != null && !valueType.canAssignTo(type)) {
              report("Can't assign " + valueType + " to " + type);
            }

            // Update flow state
            if (variable instanceof Register reg) {
              state.write.add(reg);
            }

            yield type;
          }
        };
      }

      void run(Jump jump) {
        switch (jump) {
          case Unreachable() -> {}
          case Return(var value) -> {
            returnType = returnType == null ? value : returnType.union(value);
            returnState.merge(state);
          }
          case Goto(var _) -> {}
          case If(var condition, var _, var _) -> {
            var condType = run(condition);
            checkSubtype(condType, Type.BOOLEAN, "Type mismatch in condition");
          }
        }

        for (var successor : next.successors()) {
          var successorState = states.computeIfAbsent(successor, _ -> new ActionSet());
          successorState.merge(state);
        }
      }

      void checkWellFormed(Type type) {
        if (!type.isWellFormed()) {
          report("Type is not well-formed: " + type);
        }
      }

      void checkSubtype(@Nullable Type type, Type expected) {
        checkSubtype(type, expected, "Type mismatch");
      }

      void checkSubtype(@Nullable Type type, Type expected, String message) {
        if (type != null && !type.isSubtypeOf(expected)) {
          report(message + ": expected " + expected + ", got " + type);
        }
      }

      void checkSubEffects(Effects effects, Effects expected) {
        checkSubEffects(effects, expected, "Effects mismatch");
      }

      void checkSubEffects(Effects effects, Effects expected, String message) {
        if (!effects.isSubsetOf(expected)) {
          report(message + ": expected " + expected + ", got " + effects);
        }
      }

      void report(String message) {
        errors.add(new CheckException(message, cursor.copy()));
      }
    }
  }

  private static class ActionSet {
    final Set<Register> read = new HashSet<>();
    final Set<Register> write = new HashSet<>();
    final Set<Register> use = new HashSet<>();
    final Set<Register> defer = new HashSet<>();

    ActionSet copy() {
      var clone = new ActionSet();
      clone.read.addAll(read);
      clone.write.addAll(write);
      clone.use.addAll(use);
      clone.defer.addAll(defer);
      return clone;
    }

    ActionSet inPromise() {
      var clone = new ActionSet();
      clone.read.addAll(read);
      clone.use.addAll(use);
      // `clone.defer.addAll(this)`.
      clone.defer.addAll(read);
      clone.defer.addAll(write);
      clone.defer.addAll(use);
      clone.defer.addAll(defer);
      return clone;
    }

    void merge(ActionSet other) {
      // [#read], [#use], and [#defer] are requirements, [#write] is a guarantee.
      // Unify requirements, intersect guarantees.
      read.addAll(other.read);
      write.retainAll(other.write);
      use.addAll(other.use);
      defer.addAll(other.defer);
    }
  }
}
