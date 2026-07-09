package org.prlprg.fir.check;

import java.util.LinkedHashSet;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.variable.Register;

/// Verifies that only [local][Promise#local] promises read *captures*: registers that are read
/// inside the promise but defined outside it (i.e. in an enclosing stack frame).
///
/// A non-local promise may outlive the frame that created it; if it then reads a register whose
/// storage lives in that (now-gone) frame, it reads freed memory. Marking such a promise local
/// asserts it won't escape (and makes escaping-then-forcing a runtime error).
///
/// This is not part of the default [Checker#checkers] set: before [
/// org.prlprg.fir.opt.specialize.SpecializeLocalPromise] runs, capturing promises are legitimately
/// non-local.
public class LocalPromiseChecker extends Checker {
  @Override
  public String name() {
    return "localPromise";
  }

  @Override
  protected void doRun(Abstraction version) {
    if (version.cfg() == null) {
      return;
    }

    var defUses = new DefUses(version);
    version
        .streamCfgs()
        .forEach(
            cfg -> {
              for (var bb : cfg.bbs()) {
                var statements = bb.statements();
                for (var i = 0; i < statements.size(); i++) {
                  if (statements.get(i).expression() instanceof Promise promise) {
                    check(bb, i, promise, defUses);
                  }
                }
              }
            });
  }

  private void check(BB bb, int index, Promise promise, DefUses defUses) {
    // Local promises are allowed to read captures (that's the point of speculating them local).
    if (promise.local()) {
      return;
    }

    var readCaptures = readCaptures(promise.code(), defUses);
    if (!readCaptures.isEmpty()) {
      report(
          bb,
          index,
          "Non-local promise reads capture register(s) "
              + readCaptures
              + ": only local promises may read registers defined outside them");
    }
  }

  /// Registers read directly in `code` but defined outside it (in an enclosing CFG).
  private static LinkedHashSet<Register> readCaptures(CFG code, DefUses defUses) {
    var captures = new LinkedHashSet<Register>();
    for (var register : defUses.usedRegisters()) {
      // Read directly in `code` (a use in a nested promise has that promise's CFG as innermost)?
      if (defUses.uses(register).stream().noneMatch(use -> use.innermostCfg() == code)) {
        continue;
      }
      // Defined outside `code`? (A register read in `code` is either defined in `code` or in an
      // enclosing CFG, since a nested CFG's registers aren't in scope here.)
      var def = defUses.definition(register);
      if (def != null && def.innermostCfg() != code) {
        captures.add(register);
      }
    }
    return captures;
  }
}
