package org.prlprg.fir.check;

import com.google.common.collect.Iterables;
import java.util.HashSet;
import org.prlprg.fir.analyze.DefUses;
import org.prlprg.fir.analyze.DominatorTree;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.variable.Register;

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
    /// - Entry blocks and blocks with < 2 predecessors don't have phi parameters
    /// - All registers are declared in the innermost scope
    /// - Parameters are never assigned, local registers are assigned exactly once
    /// - Register reads (and uses) must be dominated by their assignments. In other words,
    ///   during execution, the assignment must be guaranteed to occur before the read.
    ///   - Registers cannot be read across scopes.
    ///   - Registers *can* be read across promises. The promise must be in the same
    // control-flow
    ///     graph as the register's definition OR in a promise in the same control-flow graph OR
    ///     in a promise in a promise in the same control-flow graph etc. For the dominance
    // check,
    ///     the "read" is considered to be the definition of the outermost promise, the one
    ///     that's in the same control-flow graph of the definition. In other words, during
    ///     execution, the definition must be guaranteed to occur before the promise containing
    ///     the read, which ensures that it occurs before the read.
    /// - All basic blocks are reachable from entry
    void run(CFG cfg) {
      var scope = cfg.scope();
      var dominatorTree = new org.prlprg.fir.analyze.DominatorTree(cfg);
      var defUses = new org.prlprg.fir.analyze.DefUses(cfg);

      // Check phi parameter invariants
      checkPhiParameters(cfg);

      // Check register scoping and definition invariants
      checkRegisterInvariants(cfg, scope, dominatorTree, defUses);

      // Check reachability
      checkReachability(cfg, dominatorTree);
    }

    private void checkPhiParameters(CFG cfg) {
      for (var bb : cfg.bbs()) {
        var phiParams = bb.phiParameters();
        if (!phiParams.isEmpty()) {
          // Entry block should not have phi parameters
          if (bb == cfg.entry()) {
            report(bb, 0, "Entry block cannot have phi parameters");
          }
          // Blocks with < 2 predecessors should not have phi parameters
          else if (bb.predecessors().size() < 2) {
            report(bb, 0, "Block with < 2 predecessors cannot have phi parameters");
          }
        }
      }
    }

    private void checkRegisterInvariants(
        CFG cfg, Abstraction scope, DominatorTree dominatorTree, DefUses defUses) {

      // Collect all registers from parameters and locals
      var parameterRegisters = new HashSet<Register>();
      var localRegisters = new HashSet<Register>();

      for (var param : scope.parameters()) {
        parameterRegisters.add(param.variable());
      }

      for (var local : scope.locals()) {
        if (local.variable() instanceof Register reg) {
          localRegisters.add(reg);
        }
      }

      // Check all registers are either parameters or locals
      var allRegisters = new HashSet<Register>();
      allRegisters.addAll(defUses.definedRegisters());
      allRegisters.addAll(defUses.usedRegisters());

      for (var register : allRegisters) {
        if (!parameterRegisters.contains(register) && !localRegisters.contains(register)) {
          report(cfg.entry(), 0, "Register " + register + " is not declared as parameter or local");
        }
      }

      // Parameters should never be assigned
      for (var paramReg : parameterRegisters) {
        var definitions = defUses.definitions(paramReg);
        if (!definitions.isEmpty()) {
          for (var def : definitions) {
            report(
                def.bb(), def.instructionIndex(), "Parameter " + paramReg + " cannot be assigned");
          }
        }
      }

      // Locals should be assigned exactly once
      for (var localReg : localRegisters) {
        var definitions = defUses.definitions(localReg);
        if (definitions.isEmpty()) {
          report(cfg.entry(), 0, "Local register " + localReg + " is never assigned");
        } else if (definitions.size() > 1) {
          for (var def : definitions) {
            report(
                def.bb(),
                def.instructionIndex(),
                "Local register " + localReg + " assigned multiple times");
          }
        }
      }

      // Check use-before-def for locals
      for (var localReg : localRegisters) {
        var definitions = defUses.definitions(localReg);
        var uses = defUses.uses(localReg);

        if (definitions.size() == 1) {
          var definition = definitions.iterator().next();

          for (var use : uses) {
            if (!isDefBeforeUse(definition, use, dominatorTree)) {
              report(
                  use.bb(),
                  use.instructionIndex(),
                  "Use of local register " + localReg + " before definition");
            }
          }
        }
      }

      // Check promise scoping rules
      checkPromiseScoping(cfg, defUses);
    }

    private boolean isDefBeforeUse(
        org.prlprg.fir.analyze.DefUses.DefUse definition,
        org.prlprg.fir.analyze.DefUses.DefUse use,
        org.prlprg.fir.analyze.DominatorTree dominatorTree) {

      // Same block: def must come before use
      if (definition.bb() == use.bb()) {
        return definition.instructionIndex() < use.instructionIndex();
      }

      // Different blocks: def's block must dominate use's block
      return dominatorTree.dominates(definition.bb(), use.bb());
    }

    private void checkPromiseScoping(CFG cfg, DefUses defUses) {
      // For now, this is a simplified check
      // A full implementation would track promise nesting and cross-promise variable access
      for (var bb : cfg.bbs()) {
        for (var i = 0; i < bb.statements().size(); i++) {
          var stmt = bb.statements().get(i);
          if (stmt.expression() instanceof Promise promise) {
            // Recursively check the promise CFG
            var promiseChecker = new CFGChecker();
            promiseChecker.run(promise.code().scope());
            // Merge any errors found
            for (var error : promiseChecker.errors()) {
              report(bb, i, "In promise: " + error.getMessage());
            }
          }
        }
      }
    }

    private void checkReachability(CFG cfg, org.prlprg.fir.analyze.DominatorTree dominatorTree) {
      var entry = cfg.entry();
      for (var bb : cfg.bbs()) {
        if (bb != entry && dominatorTree.getDominators(bb).isEmpty()) {
          report(bb, 0, "Block " + bb.label() + " is unreachable from entry");
        }
      }
    }
  }
}
