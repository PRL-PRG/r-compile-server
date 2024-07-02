package org.prlprg.optimizations;

import com.google.common.collect.ImmutableList;
import java.util.HashSet;
import java.util.Optional;
import java.util.stream.Stream;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Constant;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.RValueStmt;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData;
import org.prlprg.ir.cfg.StmtData.Force;
import org.prlprg.ir.cfg.StmtData.LdEnclosEnv;
import org.prlprg.ir.cfg.StmtData.MkEnv;
import org.prlprg.ir.cfg.StmtData.StVar;
import org.prlprg.ir.type.REffect;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.UnreachableError;

/**
 * (R-specific optimization) replace environments in instructions that don't need them with {@link
 * StaticEnv#ELIDED}.
 */
class ElideEnvs implements OptimizationPass {
  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    var neededEnvs = new HashSet<RValue>();
    var envsToStub = new HashSet<RValue>();

    for (var bb : cfg.iter()) {
      for (var instr : bb.instrs()) {
        // Determine which environment instructions can be removed:
        // if the current instruction references one, it can't.
        if (instr.effects().contains(REffect.ReadsEnvArg)
            || instr.effects().contains(REffect.LeaksEnvArg)) {
          var env = instr.env();
          assert env != null;
          neededEnvs.add(env);
          if ((forcesMaterialize(instr) != YesOrMaybe.YES
              && env instanceof Stmt s
              && s.data() instanceof MkEnv mk
              && !mk.isStub()
              && !mk.neverStub())) {
            envsToStub.add(env);
          }
        }

        // Remove environment arguments in the current instruction
        if (instr.data() instanceof Force(var promise, var _, var _)
            && promise.type().isLazy() == Troolean.NO) {
          Instr.mutateArgs(
              (RValueStmt) instr, new Force(promise, Optional.empty(), StaticEnv.ELIDED));
        }
      }
    }

    var newStubs = new HashSet<RValue>();

    // Remove dead envs
    for (var bb : cfg.iter()) {
      var instrs = bb.instrs().iterator();
      while (instrs.hasNext()) {
        var instr = instrs.next();
        if ((instr.data() instanceof LdEnclosEnv || instr.data() instanceof MkEnv)
            && !(neededEnvs.contains((RValue) instr))) {
          instrs.remove();
        }
      }
    }

    // Convert new stubs into stubs.
    // This involves adding explicit unbound values to all variables that will be set in the stub.
    for (var env : envsToStub) {
      if (!(((RValueStmt) env).data()
          instanceof
          MkEnv(
              var parent,
              var names,
              var values,
              var missingness,
              var context,
              var isStub,
              var neverStub))) {
        throw new UnreachableError();
      }
      assert !isStub && !neverStub;

      Instr.mutateArgs(
          (RValueStmt) env, new MkEnv(parent, names, values, missingness, context, true, false));
    }

    for (var bb : cfg.iter()) {
      for (var instr : bb.instrs()) {
        if (instr.data() instanceof StVar(var name, var value, var env, var isArg)
            && envsToStub.contains(env)) {
          if (!(((RValueStmt) env).data()
              instanceof
              MkEnv(
                  var parent,
                  var names,
                  var values,
                  var missingness,
                  var context,
                  var isStub,
                  var neverStub))) {
            throw new UnreachableError();
          }
          assert isStub && !neverStub;

          if (!names.contains(name)) {
            Instr.mutateArgs(
                (RValueStmt) env,
                new MkEnv(
                    parent,
                    Stream.concat(names.stream(), Stream.of(name))
                        .collect(ImmutableList.toImmutableList()),
                    Stream.concat(values.stream(), Stream.of(new Constant(SEXPs.UNBOUND_VALUE)))
                        .collect(ImmutableList.toImmutableList()),
                    Stream.concat(missingness.stream(), Stream.of(false))
                        .collect(ImmutableList.toImmutableList()),
                    context,
                    true,
                    false));
          }
        }
      }
    }

    // TODO: Remove instructions that don't do anything without environments.
  }

  private YesOrMaybe forcesMaterialize(Instr instr) {
    return switch (instr.data()) {
      case StmtData.LdVar _,
              StmtData.LdVarSuper _,
              StmtData.StVar _,
              StmtData.StVarSuper _,
              StmtData.FrameState_ _,
              StmtData.IsEnvStub _,
              StmtData.LdDots _,
              StmtData.IsMissing _ ->
          YesOrMaybe.MAYBE;
      default -> YesOrMaybe.YES;
    };
  }
}
