package org.prlprg.fir.ir.abstraction.substitute;

import static org.prlprg.fir.opt.Cleanup.removingJumpArgument;

import java.util.List;
import java.util.Map;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

abstract class AbstractSubstituter {
  protected final Abstraction scope;

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

              doStage(local, substitution);
            });
  }

  protected abstract void doStage(Register local, Argument substitution);

  /// Applies substitutions. Returns `true` if there were any
  public boolean commit() {
    return scope
        .module()
        .record(
            getClass().getSimpleName() + "#commit",
            List.of(this),
            () -> {
              if (!substEntries().iterator().hasNext()) {
                // Fastcase: no substitutions.
                return false;
              }

              // Remove or replace locals from scope.
              commitAffectLocals();

              // Replace occurrences of locals in every CFG.
              run(scope);

              // Clear substitutions so we can reuse this instance.
              clearSubstitutionData();

              return true;
            });
  }

  protected abstract void commitAffectLocals();

  protected abstract void clearSubstitutionData();

  private void run(Abstraction scope) {
    scope.streamCfgs().flatMap(cfg -> cfg.bbs().stream()).forEach(this::run);
  }

  private void run(BB bb) {
    for (var i = 0; i < bb.phiParameters().size(); i++) {
      var oldPhi = bb.phiParameters().get(i);
      var newPhi = substitutePhi(bb, oldPhi);
      if (newPhi == null) {
        for (var pred : bb.predecessors()) {
          pred.setJump(removingJumpArgument(pred.jump(), bb, i));
        }
        bb.removeParameterAt(i);
        i--;
      } else if (!oldPhi.equals(newPhi)) {
        bb.replaceParameterAt(i, newPhi);
      }
    }

    for (var i = 0; i < bb.statements().size(); i++) {
      var statement = bb.statements().get(i);
      var pos = new CfgPosition(bb, i);
      var newAssignee = substituteAssignee(pos, statement.assignee());
      var newStatement =
          statement.expression() instanceof Promise
              ? statement
              : statement.mapArguments(arg -> substitute(pos, arg));
      bb.replaceStatementAt(
          i, new Statement(newStatement.comments(), newAssignee, newStatement.expression()));
    }
    var jumpPos = new CfgPosition(bb, bb.statements().size());
    bb.setJump(bb.jump().mapArguments(arg -> substitute(jumpPos, arg)));
  }

  protected abstract @Nullable Register substitutePhi(BB bb, Register phi);

  protected abstract @Nullable Register substituteAssignee(
      CfgPosition pos, @Nullable Register assignee);

  protected abstract Argument substitute(CfgPosition pos, Argument argument);

  protected final Argument convertIntoConsume(Argument argument) {
    return switch (argument) {
      case Read(var r) -> new Consume(r);
      case Consume _ -> argument;
      case Constant _ ->
          throw new IllegalStateException(
              "can't substitute use with constant:\n" + this + "\n" + scope);
    };
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
          for (var substitution : substEntries()) {
            w.write('\n');
            p.print(substitution.getKey());
            w.write(" -> ");
            p.print(substitution.getValue());
          }
        });
    w.write("\n}");
  }

  protected abstract Iterable<? extends Map.Entry<Register, ?>> substEntries();
}
