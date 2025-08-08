package org.prlprg.fir.check;

import com.google.common.collect.Iterables;
import java.util.HashSet;
import org.prlprg.fir.analyze.DefUses;
import org.prlprg.fir.analyze.DominatorTree;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.variable.Register;

public class CFGChecker extends Checker {
  /// Verifies the following invariants:
  /// - All basic blocks are reachable from entry
  /// - Entry blocks and blocks with < 2 predecessors don't have phi parameters
  /// - Jump targets have the correct number of phi arguments
  /// - There are no duplicate variable declarations in the scope
  /// - All registers are declared in the innermost scope
  /// - Parameters are never assigned, local registers are assigned exactly once
  /// - Register reads (and uses) must be dominated by their assignments. In other words,
  ///   during execution, the assignment must be guaranteed to occur before the read.
  ///   - Registers can't be read across scopes.
  ///   - Registers *can* be read across promises. The promise must be in the same
  ///     control-flow-graph as the register's definition OR in a promise in the same
  ///     control-flow graph OR in a promise in a promise in the same control-flow graph etc.
  ///     For the dominance check, the "read" is considered to be the definition of the
  ///     outermost promise, the one that's in the same control-flow graph of the definition.
  ///     In other words, during execution, the definition must be guaranteed to occur before
  ///     all promises containing the read (which ensures it occurs before the read itself).
  @Override
  public void run(Abstraction abstraction) {
    new OnAbstraction(abstraction).run();
  }

  private class OnAbstraction {
    final Abstraction scope;
    final DefUses defUses;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      defUses = new DefUses(scope);
    }

    void run() {
      var entry = scope.cfg().entry();

      // No duplicate variable declarations in the scope
      var seenBindings = new HashSet<>();
      for (var binding : Iterables.concat(scope.parameters(), scope.locals())) {
        if (!seenBindings.add(binding.variable().name())) {
          report(entry, -1, "Duplicate variable declaration: " + binding.variable());
        }
      }

      // All register assignments (defs) and reads (uses) must be declared
      for (var register : defUses.allRegisters()) {
        assert register != null;

        if (!scope.contains(register)) {
          report(
              scope.cfg().entry(),
              0,
              "Register " + register + " is not declared as parameter or local");
        }
      }

      // Per-CFG checks
      new OnCfg(scope.cfg()).run();
    }

    class OnCfg {
      final CFG cfg;
      final DominatorTree dominatorTree;

      OnCfg(CFG cfg) {
        this.cfg = cfg;
        dominatorTree = new DominatorTree(cfg);
      }

      void run() {
        // All blocks must be reachable from entry
        var entry = cfg.entry();
        for (var bb : cfg.bbs()) {
          if (bb != entry && dominatorTree.dominators(bb).size() == 1) {
            report(bb, -1, "Block " + bb.label() + " is unreachable from entry");
          }
        }

        // The entry block and blocks with < 2 predecessors can't have phi parameters
        for (var bb : cfg.bbs()) {
          if (!bb.phiParameters().isEmpty()) {
            if (bb == cfg.entry()) {
              report(bb, -1, "Entry block can't have phis");
            }

            if (bb.predecessors().size() < 2) {
              report(bb, -1, "Block with < 2 predecessors can't have phis");
            }
          }
        }

        // Check predecessors and successors (not in docs because it's an internal detail).
        for (var bb : cfg.bbs()) {
          for (var pred : bb.predecessors()) {
            if (!pred.successors().contains(bb)) {
              report(
                  pred,
                  pred.statements().size(),
                  "Another block, " + bb.label() + ", has this block as its predecessor");
            }
          }
        }

        // Jump targets have the correct number of phi arguments
        for (var bb : cfg.bbs()) {
          for (var target : bb.jump().targets()) {
            var arguments = target.phiArgs();
            var parameters = target.bb().phiParameters();
            if (parameters.size() != arguments.size()) {
              report(
                  bb,
                  bb.statements().size(),
                  "Phi count mismatch for "
                      + target.bb().label()
                      + ": expected "
                      + parameters.size()
                      + " argument(s), got "
                      + arguments.size()
                      + "\nParameters: "
                      + parameters);
            }
          }
        }

        // Parameters should never be assigned
        for (var parameter : scope.parameters()) {
          var definitions = defUses.definitions(parameter.variable());
          if (!definitions.isEmpty()) {
            for (var def : definitions) {
              report(def, "Parameter " + parameter + " can't be assigned");
            }
          }
        }

        // Locals should be assigned exactly once
        for (var local : scope.locals()) {
          if (!(local.variable() instanceof Register localReg)) {
            continue;
          }

          var definitions = defUses.definitions(localReg);

          if (definitions.isEmpty()) {
            report(cfg.entry(), -1, "Local register " + localReg + " is never assigned");
          } else if (definitions.size() > 1) {
            for (var def : definitions) {
              report(def, "Local register " + localReg + " assigned multiple times");
            }
          }
        }

        // Defs dominate uses
        for (var local : scope.locals()) {
          if (!(local.variable() instanceof Register localReg)) {
            continue;
          }

          var definitions = defUses.definitions(localReg);
          var uses = defUses.uses(localReg);

          if (definitions.size() != 1) {
            continue;
          }
          var def = definitions.iterator().next();

          var reportedDef = false;
          for (var use : uses) {
            if (!isDefBeforeUse(def, use)) {
              if (!reportedDef) {
                report(def, "Local register " + localReg + " assigned after use(s)");
                reportedDef = true;
              }

              report(use, "Local register " + localReg + " used before assignment");
            }
          }
        }
      }

      private boolean isDefBeforeUse(ScopePosition definition, ScopePosition use) {
        var localDef = definition.inInnermostCfg();
        var localUse = use.inCfg(definition.innermostCfg());

        if (localUse == null) {
          // Use is in a sibling or outer promise
          return false;
        }

        return localDef.bb() == localUse.bb()
            ? localDef.instructionIndex() < localUse.instructionIndex()
            : dominatorTree.dominates(localDef.bb(), localUse.bb());
      }
    }
  }
}
