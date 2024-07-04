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

/** Removes and stubs environment instructions which are not needed (from PIR).
 *
 * <p>Specifically looks at all uses of a {@link MkEnv}. If none of them leak the environment or
 * read its contents, then it's removed.
 *
 * <p>Additionally, if all of the uses of the {@link MkEnv} work with stubs (none force it to be
 * materialized), and the environment wasn't previously materialized, then it's replaced with a
 * lightweight "stub".
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
        // TODO: Put this somewhere else
        if (instr.data() instanceof Force(var promise, var _, var _)
            && promise.type().isLazy() == Troolean.NO) {
          Instr.mutateArgs(
              (RValueStmt) instr, new Force(promise, Optional.empty(), StaticEnv.ELIDED));
        }
      }
    }

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
    // TODO: improve the code below, it's very verbose.
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
        if (instr.data() instanceof StVar(var name, var _, var env, var _)
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
