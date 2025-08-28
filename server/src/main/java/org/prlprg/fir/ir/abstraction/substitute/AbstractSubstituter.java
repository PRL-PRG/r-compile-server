package org.prlprg.fir.ir.abstraction.substitute;

import com.google.common.collect.ImmutableList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
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

abstract class AbstractSubstituter {
  protected final Abstraction scope;
  protected final Map<Register, Argument> locals = new LinkedHashMap<>();

  protected AbstractSubstituter(Abstraction scope) {
    this.scope = scope;
  }

  protected void stageAll(Map<Register, Argument> substitutions) {
    for (var entry : substitutions.entrySet()) {
      stage(entry.getKey(), entry.getValue());
    }
  }

  protected void stage(Register local, Argument substitution) {
    scope
        .module()
        .record(
            getClass().getSimpleName() + "#stage",
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
              if (locals.containsKey(local)) {
                throw new IllegalArgumentException(
                    "Local " + local + " has already been marked for substitution.");
              }

              doStage(local, substitution);
            });
  }

  protected abstract void doStage(Register local, Argument substitution);

  public boolean isEmpty() {
    return locals.isEmpty();
  }

  public void commit() {
    scope
        .module()
        .record(
            getClass().getSimpleName() + "#commit",
            List.of(this),
            () -> {
              // Remove or replace locals from scope.
              commitAffectLocals();

              // Replace occurrences of locals in every CFG.
              scope.streamCfgs().forEach(this::run);

              // Clear substitutions so we can reuse this instance.
              locals.clear();
            });
  }

  protected abstract void commitAffectLocals();

  private void run(CFG cfg) {
    for (var bb : cfg.bbs()) {
      run(bb);
    }
  }

  private void run(BB bb) {
    for (var phi : bb.phiParameters()) {
      if (locals.containsKey(phi)) {
        throw new IllegalArgumentException(
            "Phi parameter with to-be-substituted register should've been removed: " + phi);
      }
    }

    for (var i = 0; i < bb.statements().size(); i++) {
      var statement = bb.statements().get(i);
      bb.replaceStatementAt(i, substitute(statement));
    }
    bb.setJump(substitute(bb.jump()));
  }

  private Statement substitute(Statement statement) {
    var oldAssignee = statement.assignee();
    var oldExpr = statement.expression();

    var newAssignee = substituteAssignee(oldAssignee);
    var newExpr = substitute(oldExpr);

    return new Statement(newAssignee, newExpr);
  }

  protected abstract @Nullable Register substituteAssignee(@Nullable Register assignee);

  private Expression substitute(Expression exression) {
    return switch (exression) {
      case Aea(var value) -> new Aea(substitute(value));
      case Call call ->
          new Call(
              call.callee(),
              call.callArguments().stream()
                  .map(this::substitute)
                  .collect(ImmutableList.toImmutableList()));
      case Cast(var target, var type) -> new Cast(substitute(target), type);
      case Closure closure -> closure;
      case Dup(var value) -> new Dup(substitute(value));
      case Force(var value) -> new Force(substitute(value));
      case Load(var variable) -> new Load(variable);
      case LoadFun(var variable, var env) -> new LoadFun(variable, env);
      case MaybeForce(var value) -> new MaybeForce(substitute(value));
      case MkVector(var elements) ->
          new MkVector(
              elements.stream().map(this::substitute).collect(ImmutableList.toImmutableList()));
      case Placeholder() -> new Placeholder();
      case Promise(var valueType, var effects, var code) -> new Promise(valueType, effects, code);
      case ReflectiveLoad(var promise, var variable) ->
          new ReflectiveLoad(substitute(promise), variable);
      case ReflectiveStore(var promise, var variable, var value) ->
          new ReflectiveStore(substitute(promise), variable, substitute(value));
      case Store(var variable, var value) -> new Store(variable, substitute(value));
      case SubscriptLoad(var target, var index) ->
          new SubscriptLoad(substitute(target), substitute(index));
      case SubscriptStore(var target, var index, var value) ->
          new SubscriptStore(substitute(target), substitute(index), substitute(value));
      case SuperLoad(var variable) -> new SuperLoad(variable);
      case SuperStore(var variable, var value) -> new SuperStore(variable, substitute(value));
    };
  }

  private Jump substitute(Jump jump) {
    return switch (jump) {
      case Goto(var target) -> new Goto(substitute(target));
      case If(var condition, var ifTrue, var ifFalse) ->
          new If(substitute(condition), substitute(ifTrue), substitute(ifFalse));
      case Return(var value) -> new Return(substitute(value));
      case Unreachable() -> new Unreachable();
    };
  }

  private Target substitute(Target target) {
    return new Target(
        target.bb(),
        target.phiArgs().stream().map(this::substitute).collect(ImmutableList.toImmutableList()));
  }

  private Argument substitute(Argument argument) {
    return argument instanceof Read(var r) && locals.containsKey(r) ? locals.get(r) : argument;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write(getClass().getSimpleName());
    w.write("{");
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
