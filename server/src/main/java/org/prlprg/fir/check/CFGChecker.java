package org.prlprg.fir.check;

import com.google.common.collect.Iterables;
import java.util.HashSet;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;

public class CFGChecker extends Checker {
  @Override
  public void run(Abstraction abstraction) {
    new OnAbstraction(abstraction).run();
  }

  private class OnAbstraction {
    final Abstraction scope;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
    }

    void run() {
      var entry = scope.cfg().entry();

      var seenBindings = new HashSet<>();
      for (var binding : Iterables.concat(scope.parameters(), scope.locals())) {
        if (!seenBindings.add(binding.variable().name())) {
          report(entry, 0, "Duplicate variable declaration: " + binding.variable());
        }
      }

      run(scope.cfg());
    }

    /// Verifies the following invariants:
    /// - The entry block and any blocks with < 2 predecessors don't have any phi parameters.
    /// - All registers (but not named variables) are either in `scope.parameters()` or
    ///   `scope.locals()`. Those in `scope.parameters()` are never assigned (never the target
    // of a
    ///   `Write` expression), while those in `scope.locals()` are assigned exactly once.
    ///   Additionally, if a non-`Write` expression contains a register in `scope.locals()`, the
    ///   register's one assignment must be in the same block in an instruction before the
    ///   expression, or in a dominating block.
    ///   - If a register is assigned in a promise, it cannot be used outside the promise,
    // although
    ///     it can be used in nested promises if they occur the assignment.
    ///   - If a register is read in a promise, it must be defined in the promise (in an earlier
    ///     instruction or dominating block), or it must be defined outside the promise in an
    ///     earlier instruction or dominating block relative to promise itself.
    /// - Every basic block is connected to the entry.
    static void run(CFG cfg) {
      // TODO: verify the invariants explained above.
      //  Follow DRY: implement static analyses like def-use and dominator tree in their respective
      //    files so they can be reused in optimizations that will be implemented later, and
      //    abstract and other analysis or methods you may feel will be reused.
    }
  }
}
