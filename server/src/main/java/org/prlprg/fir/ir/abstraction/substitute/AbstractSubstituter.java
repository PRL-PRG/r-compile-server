package org.prlprg.fir.ir.abstraction.substitute;

import static org.prlprg.fir.opt.Cleanup.removingJumpArgument;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.Map;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
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
import org.prlprg.fir.ir.phi.Target;
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
              scope.streamCfgs().forEach(this::run);

              // Clear substitutions so we can reuse this instance.
              clearSubstitutionData();

              return true;
            });
  }

  protected abstract void commitAffectLocals();

  protected abstract void clearSubstitutionData();

  private void run(CFG cfg) {
    for (var bb : cfg.bbs()) {
      run(bb);
    }
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
      bb.replaceStatementAt(i, substitute(new CfgPosition(bb, i), statement));
    }
    bb.setJump(substitute(new CfgPosition(bb, bb.statements().size()), bb.jump()));
  }

  private Statement substitute(CfgPosition pos, Statement statement) {
    var oldAssignee = statement.assignee();
    var oldExpr = statement.expression();

    var newAssignee = substituteAssignee(pos, oldAssignee);
    var newExpr = substitute(pos, oldExpr);

    return new Statement(statement.comments(), newAssignee, newExpr);
  }

  private Expression substitute(CfgPosition pos, Expression expression) {
    return switch (expression) {
      case Aea(var value) -> new Aea(substitute(pos, value));
      case Assume(var assumption) ->
          new Assume(
              switch (assumption) {
                case AssumeType(var target, var type) ->
                    new AssumeType(substitute(pos, target), type);
                case AssumeConstant(var target, var constant) ->
                    new AssumeConstant(substitute(pos, target), constant);
                case AssumeFunction assume ->
                    new AssumeFunction(substitute(pos, assume.target()), assume.function());
                case AssumeLoadFun assume ->
                    new AssumeLoadFun(assume.variable(), assume.function());
              });
      case Call call ->
          new Call(
              substitute(pos, call.callee()),
              call.callArguments().stream()
                  .map(a -> substitute(pos, a))
                  .collect(ImmutableList.toImmutableList()));
      case Cast(var target, var type) -> new Cast(substitute(pos, target), type);
      case Closure closure -> closure;
      case Dup(var value) -> new Dup(substitute(pos, value));
      case Force(var isMaybe, var value) -> new Force(isMaybe, substitute(pos, value));
      case Load(var loadType, var variable) -> new Load(loadType, variable);
      case MkEnv() -> new MkEnv();
      case MkVector(var kind, var elements) ->
          new MkVector(
              kind,
              elements.stream()
                  .map(ne -> new NamedArgument(ne.name(), substitute(pos, ne.argument())))
                  .collect(ImmutableList.toImmutableList()));
      case Noop() -> new Noop();
      case PopEnv() -> new PopEnv();
      case Promise(var valueType, var effects, var code) -> new Promise(valueType, effects, code);
      case ReflectiveLoad(var promise, var variable) ->
          new ReflectiveLoad(substitute(pos, promise), variable);
      case ReflectiveStore(var promise, var variable, var value) ->
          new ReflectiveStore(substitute(pos, promise), variable, substitute(pos, value));
      case Store(var storeType, var variable, var value) ->
          new Store(storeType, variable, substitute(pos, value));
      case SubscriptRead(var target, var index) ->
          new SubscriptRead(substitute(pos, target), substitute(pos, index));
      case SubscriptWrite(var target, var index, var value) ->
          new SubscriptWrite(
              substitute(pos, target), substitute(pos, index), substitute(pos, value));
    };
  }

  private Callee substitute(CfgPosition pos, Callee callee) {
    return switch (callee) {
      case StaticFnCallee(var isDispatch, var function, var version) ->
          new StaticFnCallee(isDispatch, function, version);
      case DynamicCallee(var calleeArg, var argumentNames) ->
          new DynamicCallee(substitute(pos, calleeArg), argumentNames);
    };
  }

  private Jump substitute(CfgPosition pos, Jump jump) {
    return switch (jump) {
      case Goto(var comments, var target) -> new Goto(comments, substitute(pos, target));
      case If(var comments, var condition, var ifTrue, var ifFalse) ->
          new If(
              comments,
              substitute(pos, condition),
              substitute(pos, ifTrue),
              substitute(pos, ifFalse));
      case Return(var comments, var value) -> new Return(comments, substitute(pos, value));
      case Checkpoint(var comments, var success, var deopt) ->
          new Checkpoint(comments, substitute(pos, success), substitute(pos, deopt));
      case Deopt(var comments, var pc, var arguments) ->
          new Deopt(
              comments,
              pc,
              arguments.stream()
                  .map(a -> substitute(pos, a))
                  .collect(ImmutableList.toImmutableList()));
      case Unreachable(var comments) -> new Unreachable(comments);
    };
  }

  private Target substitute(CfgPosition pos, Target target) {
    return new Target(
        target.bb(),
        target.phiArgs().stream()
            .map(a -> substitute(pos, a))
            .collect(ImmutableList.toImmutableList()));
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
