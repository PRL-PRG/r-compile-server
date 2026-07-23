package org.prlprg.fir.check;

import java.util.LinkedHashSet;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.variable.Register;

/// Verifies that only local promises read *captures*: registers that are read inside the
/// promise but defined outside it (i.e. in an enclosing stack frame).
///
/// A non-local promise may outlive the frame that created it; if it then reads a register whose
/// storage lives in that (now-gone) frame, it reads freed memory. Marking such a promise local
/// asserts it won't escape (and makes escaping-then-forcing a runtime error).
///
/// This is part of the default [Checker#checkers] set, but excluded via [Checker.Exclude#CAPTURE]
/// before [org.prlprg.fir.opt.specialize.SpecializeLocalPromise] runs (mid-optimization and right
/// after `bc2fir`), where capturing promises are legitimately non-local.
public class CaptureChecker extends Checker {
  @Override
  public String name() {
    return "capture";
  }

  @Override
  protected void doRun(Abstraction version) {
    if (version.cfg() == null) {
      return;
    }

    version
        .streamCfgs()
        .forEach(
            cfg -> {
              for (var bb : cfg.bbs()) {
                var statements = bb.statements();
                for (var i = 0; i < statements.size(); i++) {
                  if (statements.get(i).expression() instanceof Promise promise) {
                    check(bb, i, promise);
                  }
                }
              }
            });
  }

  private void check(BB bb, int index, Promise promise) {
    // Local promises are allowed to read captures (that's the point of speculating them local).
    if (promise.local()) {
      return;
    }

    var readCaptures = readCaptures(promise.code());
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
  private static LinkedHashSet<Register> readCaptures(CFG code) {
    var captures = new LinkedHashSet<Register>();
    for (var bb : code.bbs()) {
      // Only reads *directly* in `code`: a read in a nested promise body iterates that promise's
      // own CFG, and a promise statement contributes no arguments at this level.
      for (var instruction : bb.instructions()) {
        for (var argument : instruction.args()) {
          var register = argument.variable();
          if (register == null) {
            continue;
          }
          // A register read in `code` is either defined in `code` or in an enclosing CFG (a nested
          // CFG's registers aren't in scope here), so if it isn't defined in `code` it's a capture.
          var defCfg = register.definingCfg();
          if (defCfg != null && defCfg != code) {
            captures.add(register);
          }
        }
      }
    }
    return captures;
  }
}
