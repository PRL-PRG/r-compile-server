package org.prlprg.optimizations;

import java.util.ArrayList;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.ir.analysis.DomTree;
import org.prlprg.ir.analysis.Loops.Loop;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.JumpData;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.util.UnreachableError;

/**
 * <a href="https://en.wikipedia.org/wiki/Loop-invariant_code_motion">Wikipedia</a>
 *
 * <p>Note that R semantics mean we have to prove no reflection within the loop that could affect
 * the invariant.
 */
class LoopInvariantCodeMotion implements OptimizationPass {
  @Override
  public void doApply(CFG cfg, OptimizationContext ctx) {
    cfg.section(
        "loop invariant code motion",
        () ->
            cfg.batchSubst(
                subst -> {
                  for (var loop : cfg.loops()) {
                    if (!isSafeToHoist(loop)) {
                      continue;
                    }

                    var preheader = loop.ensurePreheader();

                    // Maybe must be after `ensurePreheader` because it may modify this.
                    // But maybe not, because the dominator tree probably isn't used in a way that
                    // the
                    // modification does anything...
                    var domTree = cfg.domTree();

                    for (var bb : loop.body()) {
                      for (var i = 0; i < bb.stmts().size(); i++) {
                        var instr = bb.stmts().get(i);
                        if (instr.data() instanceof StmtData.LdVar
                            || instr.data() instanceof StmtData.LdFun) {
                          var sameLoad = outerLoopEquivalent(instr, domTree, preheader);
                          System.err.println("LICM actually did something");
                          if (sameLoad == null) {
                            bb.moveStmt(i--, preheader, preheader.stmts().size());
                          } else {
                            subst.stage(instr, sameLoad);
                            bb.removeAt(i--);
                          }
                        }
                      }
                    }
                  }
                }));
  }

  private boolean isSafeToHoist(Loop loop) {
    return loop.body().stream()
        .flatMap(BB::streamInstrs)
        .noneMatch(instr -> taintsEnvironment(instr, loop));
  }

  private boolean taintsEnvironment(Instr instr, @Nullable Loop loop) {
    return switch (instr.data()) {
      case JumpData.Deopt _ -> true;
      case StmtData.CallBuiltin cb ->
          cb.fun().isNonObject()
              && cb.args().stream()
                  .anyMatch(
                      a -> a.type().isObject() != Maybe.NO
                      // TODO if `RType.EXPANDED_DOTS` is added: `||
                      // a.type().equals(RType.EXPANDED_DOTS)`
                      );
        // For these instructions we test later they don't change the particular binding.
      case StmtData.StVar _, StmtData.StVarSuper _, StmtData.MkEnv _ -> false;
        // If `loop == null` these are checked elsewhere.
      case StmtData.LdVar ld -> loop != null && loopOverwritesBinding(ld.name(), ld.env(), loop);
      case StmtData.LdFun ld -> loop != null && loopOverwritesBinding(ld.name(), ld.env(), loop);
      default -> instr.effects().contains(REffect.WritesEnvArg);
    };
  }

  private boolean loopOverwritesBinding(RegSymSXP binding, @IsEnv RValue env, Loop loop) {
    return loop.body().stream()
        .flatMap(BB::streamInstrs)
        .anyMatch(instr -> instrOverwritesBinding(binding, env, instr));
  }

  private boolean instrOverwritesBinding(RegSymSXP binding, @IsEnv RValue env, Instr instr) {
    return switch (instr.data()) {
      case StmtData.MkEnv mk -> instr == env || mk.names().contains(binding);
      case StmtData.StVar st -> st.name().equals(binding);
      case StmtData.StVarSuper st -> st.name().equals(binding);
      default -> false;
    };
  }

  private @Nullable Stmt outerLoopEquivalent(Stmt load, DomTree domTree, BB current) {
    var name =
        switch (load.data()) {
          case StmtData.LdVar ld -> ld.name();
          case StmtData.LdFun ld -> ld.name();
          default -> throw new UnsupportedOperationException("only supports load instructions");
        };
    var env =
        switch (load.data()) {
          case StmtData.LdVar ld -> ld.env();
          case StmtData.LdFun ld -> ld.env();
          default -> throw new UnreachableError();
        };
    var betweenLoadedLoop = new ArrayList<Instr>();
    Stmt sameLoad = null;

    do {
      for (var instr : current.instrs()) {
        var otherName =
            switch (instr.data()) {
              case StmtData.LdVar ld -> ld.name();
              case StmtData.LdFun ld -> ld.name();
              default -> null;
            };

        // Importantly, they may not be identical, just loading the same variable.
        if (Objects.equals(otherName, name) && instr.env() == load.env()) {
          sameLoad = (Stmt) instr;
          break;
        } else {
          betweenLoadedLoop.add(instr);
        }
      }

      current = domTree.idominator(current);
    } while (current != null);

    if (sameLoad == null) {
      return null;
    }

    // Check that the variable is not modified between the two loads.
    if (betweenLoadedLoop.stream()
        .anyMatch(
            instr -> instrOverwritesBinding(name, env, instr) || taintsEnvironment(instr, null))) {
      return null;
    }

    return sameLoad;
  }
}
