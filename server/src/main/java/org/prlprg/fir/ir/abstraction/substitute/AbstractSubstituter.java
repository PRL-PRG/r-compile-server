package org.prlprg.fir.ir.abstraction.substitute;

import static org.prlprg.fir.opt.Cleanup.removingJumpArgument;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
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
import org.prlprg.fir.ir.phi.Target;
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
              clearSubstitutionData();
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
      bb.replaceStatementAt(i, substitute(bb, statement));
    }
    bb.setJump(substitute(bb, bb.jump()));
  }

  private Statement substitute(BB bb, Statement statement) {
    var oldAssignee = statement.assignee();
    var oldExpr = statement.expression();

    var newAssignee = substituteAssignee(bb, oldAssignee);
    var newExpr = substitute(bb, oldExpr);

    return new Statement(newAssignee, newExpr);
  }

  private Expression substitute(BB bb, Expression expression) {
    return switch (expression) {
      case Aea(var value) -> new Aea(substitute(bb, value));
      case AssumeConstant(var target, var constant) ->
          new AssumeConstant(substitute(bb, target), constant);
      case AssumeFunction assume ->
          new AssumeFunction(substitute(bb, assume.target()), assume.function());
      case AssumeType(var target, var type) -> new AssumeType(substitute(bb, target), type);
      case Call call ->
          new Call(
              substitute(bb, call.callee()),
              call.callArguments().stream()
                  .map(a -> substitute(bb, a))
                  .collect(ImmutableList.toImmutableList()));
      case Cast(var target, var type) -> new Cast(substitute(bb, target), type);
      case Closure closure -> closure;
      case Dup(var value) -> new Dup(substitute(bb, value));
      case Force(var value) -> new Force(substitute(bb, value));
      case Load(var variable) -> new Load(variable);
      case LoadFun(var variable, var env) -> new LoadFun(variable, env);
      case MaybeForce(var value) -> new MaybeForce(substitute(bb, value));
      case MkEnv() -> new MkEnv();
      case PopEnv() -> new PopEnv();
      case MkVector(var kind, var elements) ->
          new MkVector(
              kind,
              elements.stream()
                  .map(ne -> new NamedArgument(ne.name(), substitute(bb, ne.argument())))
                  .collect(ImmutableList.toImmutableList()));
      case Placeholder() -> new Placeholder();
      case Promise(var valueType, var effects, var code) -> new Promise(valueType, effects, code);
      case ReflectiveLoad(var promise, var variable) ->
          new ReflectiveLoad(substitute(bb, promise), variable);
      case ReflectiveStore(var promise, var variable, var value) ->
          new ReflectiveStore(substitute(bb, promise), variable, substitute(bb, value));
      case Store(var variable, var value) -> new Store(variable, substitute(bb, value));
      case SubscriptRead(var target, var index) ->
          new SubscriptRead(substitute(bb, target), substitute(bb, index));
      case SubscriptWrite(var target, var index, var value) ->
          new SubscriptWrite(substitute(bb, target), substitute(bb, index), substitute(bb, value));
      case SuperLoad(var variable) -> new SuperLoad(variable);
      case SuperStore(var variable, var value) -> new SuperStore(variable, substitute(bb, value));
    };
  }

  private Callee substitute(BB bb, Callee callee) {
    return switch (callee) {
      case DispatchCallee(var function, var signature) -> new DispatchCallee(function, signature);
      case DynamicCallee(var calleeArg, var argumentNames) ->
          new DynamicCallee(substitute(bb, calleeArg), argumentNames);
      case StaticCallee(var function, var version) -> new StaticCallee(function, version);
    };
  }

  private Jump substitute(BB bb, Jump jump) {
    return switch (jump) {
      case Goto(var target) -> new Goto(substitute(bb, target));
      case If(var condition, var ifTrue, var ifFalse) ->
          new If(substitute(bb, condition), substitute(bb, ifTrue), substitute(bb, ifFalse));
      case Return(var value) -> new Return(substitute(bb, value));
      case Checkpoint(var success, var deopt) ->
          new Checkpoint(substitute(bb, success), substitute(bb, deopt));
      case Deopt(var pc, var arguments) ->
          new Deopt(
              pc,
              arguments.stream()
                  .map(a -> substitute(bb, a))
                  .collect(ImmutableList.toImmutableList()));
      case Unreachable() -> new Unreachable();
    };
  }

  private Target substitute(BB bb, Target target) {
    return new Target(
        target.bb(),
        target.phiArgs().stream()
            .map(a -> substitute(bb, a))
            .collect(ImmutableList.toImmutableList()));
  }

  protected abstract @Nullable Register substitutePhi(BB bb, Register phi);

  protected abstract @Nullable Register substituteAssignee(BB bb, @Nullable Register assignee);

  protected abstract Argument substitute(BB bb, Argument argument);

  protected final Argument convertIntoUse(Argument argument) {
    return switch (argument) {
      case Read(var r) -> new Use(r);
      case Use(var _) -> argument;
      case Constant(var _) ->
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
