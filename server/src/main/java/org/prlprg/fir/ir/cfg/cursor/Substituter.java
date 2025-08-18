package org.prlprg.fir.ir.cfg.cursor;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Multimap;
import com.google.common.collect.MultimapBuilder;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.stream.Collectors;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
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
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Batch substitutions so they run in `O(#arguments)` instead of `O(#substs * #arguments))`.
public class Substituter {
  private final Abstraction scope;
  private final Map<Register, Argument> locals = new LinkedHashMap<>();
  private final Multimap<Register, Register> backwards =
      MultimapBuilder.hashKeys().arrayListValues().build();

  public Substituter(Abstraction scope) {
    this.scope = scope;
  }

  public void stage(Register local, Argument substitution) {
    scope
        .module()
        .record(
            "Substituter#stage",
            List.of(this, local, substitution),
            () -> {
              if (!scope.contains(local)) {
                throw new IllegalArgumentException("Register " + local + " is not in scope.");
              }
              if (scope.isParameter(local)) {
                throw new UnsupportedOperationException(
                    "Register "
                        + local
                        + " is a parameter, substitution is currently only implemented for locals because we remove the register from the scope after substituting.");
              }
              if (locals.put(local, substitution) != null) {
                throw new IllegalArgumentException(
                    "Local " + local + " has already been marked for substitution.");
              }

              // Handle transitive substitutions:

              // Maintain O(1) lookup of rhs for the below checks: in backwards map, add `b <- a`.
              if (substitution instanceof Read(var substReg)) {
                backwards.put(substReg, local);
              }

              // If `a -> b` and we inserted `b -> c`, change the former to `a -> c`.
              var aToLocal = backwards.get(local);
              if (!aToLocal.isEmpty()) {
                for (var a : aToLocal) {
                  locals.put(a, substitution);
                }

                // In backwards map, add `c <- a`. Keep `c <- *`s in case we insert `c -> d`.
                if (substitution instanceof Read(var substReg)) {
                  backwards.putAll(substReg, aToLocal);
                }
              }

              // Likewise, if `b -> c` and we inserted `a -> b`, change to `a -> c`.
              if (substitution instanceof Read(var substReg) && locals.containsKey(substReg)) {
                var c = locals.get(substReg);
                locals.put(local, c);

                // In backwards map, add `c <- a`. Keep `c <- b` etc. in case we insert `c -> d`.
                if (c instanceof Read(var cReg)) {
                  backwards.put(cReg, local);
                }
              }
            });
  }

  public void commit() {
    scope
        .module()
        .record(
            "Substituter#commit",
            List.of(this),
            () -> {
              // Remove locals from scope.
              for (var local : locals.keySet()) {
                scope.removeLocal(local);
              }

              // Replace occurrences of locals in the CFG.
              run(scope.cfg());

              // Clear substitutions so we can reuse this instance.
              locals.clear();
            });
  }

  private void run(CFG cfg) {
    for (var bb : cfg.bbs()) {
      run(bb);
    }
  }

  private void run(BB bb) {
    var substitutions =
        locals.entrySet().stream()
            .collect(Collectors.toMap(e -> new Read(e.getKey()), Entry::getValue));

    for (var phi : bb.phiParameters()) {
      if (locals.containsKey(phi)) {
        throw new IllegalArgumentException(
            "Phi parameter with to-be-substituted register should've been removed: " + phi);
      }
    }

    for (var i = 0; i < bb.statements().size(); i++) {
      var statement = bb.statements().get(i);
      if (locals.containsKey(statement.assignee())) {
        throw new IllegalArgumentException(
            "Statement with to-be-substituted register should've been removed or its assignee changed: "
                + statement);
      }
      bb.replaceStatementAt(i, substitute(statement, substitutions));
    }
    bb.setJump(substitute(bb.jump(), substitutions));
  }

  private static Statement substitute(
      Statement statement, Map<? extends Argument, Argument> substitutions) {
    return new Statement(statement.assignee(), substitute(statement.expression(), substitutions));
  }

  private static Expression substitute(
      Expression exression, Map<? extends Argument, Argument> substitutions) {
    return switch (exression) {
      case Aea(var value) -> new Aea(substitute(value, substitutions));
      case Call call ->
          new Call(
              call.callee(),
              call.callArguments().stream()
                  .map(argument -> substitute(argument, substitutions))
                  .collect(ImmutableList.toImmutableList()));
      case Cast(var target, var type) -> new Cast(substitute(target, substitutions), type);
      case Closure closure -> closure;
      case Dup(var value) -> new Dup(substitute(value, substitutions));
      case Force(var value) -> new Force(substitute(value, substitutions));
      case Load(var variable) -> new Load(variable);
      case LoadFun(var variable, var env) -> new LoadFun(variable, env);
      case MaybeForce(var value) -> new MaybeForce(substitute(value, substitutions));
      case MkVector(var elements) ->
          new MkVector(
              elements.stream()
                  .map(element -> substitute(element, substitutions))
                  .collect(ImmutableList.toImmutableList()));
      case Placeholder() -> new Placeholder();
      case Promise(var valueType, var effects, var code) -> new Promise(valueType, effects, code);
      case ReflectiveLoad(var promise, var variable) ->
          new ReflectiveLoad(substitute(promise, substitutions), variable);
      case ReflectiveStore(var promise, var variable, var value) ->
          new ReflectiveStore(
              substitute(promise, substitutions), variable, substitute(value, substitutions));
      case Store(var variable, var value) -> new Store(variable, substitute(value, substitutions));
      case SubscriptLoad(var target, var index) ->
          new SubscriptLoad(substitute(target, substitutions), substitute(index, substitutions));
      case SubscriptStore(var target, var index, var value) ->
          new SubscriptStore(
              substitute(target, substitutions),
              substitute(index, substitutions),
              substitute(value, substitutions));
      case SuperLoad(var variable) -> new SuperLoad(variable);
      case SuperStore(var variable, var value) ->
          new SuperStore(variable, substitute(value, substitutions));
    };
  }

  private static Jump substitute(Jump jump, Map<? extends Argument, Argument> substitutions) {
    return switch (jump) {
      case Goto(var target) -> new Goto(substitute(target, substitutions));
      case If(var condition, var ifTrue, var ifFalse) ->
          new If(
              substitute(condition, substitutions),
              substitute(ifTrue, substitutions),
              substitute(ifFalse, substitutions));
      case Return(var value) -> new Return(substitute(value, substitutions));
      case Unreachable() -> new Unreachable();
    };
  }

  private static Target substitute(Target target, Map<? extends Argument, Argument> substitutions) {
    return new Target(
        target.bb(),
        target.phiArgs().stream()
            .map(argument -> substitute(argument, substitutions))
            .collect(ImmutableList.toImmutableList()));
  }

  private static Argument substitute(
      Argument argument, Map<? extends Argument, Argument> substitutions) {
    return substitutions.getOrDefault(argument, argument);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("Substituter{");
    w.runIndented(
        () -> {
          for (var substitution : locals.entrySet()) {
            w.write('\n');
            p.print(substitution.getKey());
            w.write(" -> ");
            p.print(substitution.getValue());
          }
        });
    w.write("\n}");
  }
}
