package org.prlprg.fir.check;

import com.google.common.collect.Iterables;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.stream.Collectors;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Register;

/// Verifies the following invariants (*(strict)* only if `isStrict` is `true`):
/// - Promise CFGs have the same scope as their parents.
/// - Promises don't reuse CFG pointers.
/// - *(strict)* All basic blocks are reachable from entry
/// - *(strict)* Entry blocks and blocks with 1 predecessor (except if the predecessor branches
///   with different arguments) don't have phi parameters
/// - Jump targets have the correct number of phi arguments
/// - There are no duplicate variable declarations in the scope
/// - All registers are declared in the innermost scope
/// - Parameters are never assigned
/// - *(non-strict)* Local registers have at most one assignment
/// - *(strict)* Local registers have exactly one assignment
/// - Register reads (and uses) must be dominated by their assignments. In other words, during
///   execution, the assignment must be guaranteed to occur before the read.
///   - Registers can't be read across scopes.
///   - Registers *can* be read across promises. The promise must be in the same control-flow
///     graph as the register's definition OR in a promise in the same control-flow graph OR in
///     a promise in a promise in the same control-flow graph etc. For the dominance check, the
///     "read" is considered to be the definition of the outermost promise, the one that's in the
///     same control-flow graph of the definition. In other words, during execution, the
///     definition must be guaranteed to occur before all promises containing the read (which
///     ensures it occurs before the read itself).
public class CFGChecker extends Checker {
  private final boolean isStrict;

  public CFGChecker(boolean isStrict) {
    this.isStrict = isStrict;
  }

  @Override
  public String name() {
    return "cfg";
  }

  @Override
  protected void doRun(Abstraction version) {
    new OnAbstraction(version).run();
  }

  private class OnAbstraction {
    final Abstraction scope;
    final Map<CFG, CfgDominatorTree> dominatorTrees;
    final DominatorTree domTree;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      dominatorTrees = scope.streamCfgs().collect(Collectors.toMap(c -> c, CfgDominatorTree::new));
      domTree = new DominatorTree(scope);
    }

    void run() {
      if (scope.cfg() == null) {
        return;
      }

      var entry = scope.cfg().entry();

      // All declared registers (parameters, phi parameters, and statement assignees) and the
      // non-parameter "local" registers among them.
      var allRegisters = scope.streamRegisters().toList();
      var localRegisters = allRegisters.stream().filter(r -> !scope.isParameter(r)).toList();

      // No duplicate variable declarations in the scope. (Registers are identity-based and named
      // variables are map-keyed, so this primarily guards against the same register being attached
      // in two places.)
      var seenDeclarations = new HashSet<>();
      for (var register : allRegisters) {
        if (!seenDeclarations.add(register)) {
          report(entry, -1, "Duplicate variable declaration: " + register);
        }
      }
      for (var named : scope.namedVariableTypes().keySet()) {
        if (!seenDeclarations.add(named)) {
          report(entry, -1, "Duplicate variable declaration: " + named);
        }
      }

      // All register reads (uses) must reference a register declared (defined) in this scope.
      // A register's definition site is intrinsic to its identity, so a used register that isn't
      // in the scope is either foreign or has a detached definition.
      var reportedUndeclared = new HashSet<Register>();
      for (var cfg : (Iterable<CFG>) scope.streamCfgs()::iterator) {
        for (var bb : cfg.bbs()) {
          for (var instr : bb.instructions()) {
            for (var arg : instr.args()) {
              var used = arg.variable();
              if (used != null && !scope.contains(used) && reportedUndeclared.add(used)) {
                report(instr, "Register " + used + " is not declared as parameter or local");
              }
            }
          }
        }
      }

      // *(strict)* Every local register's definition must be attached to a block. (In the
      // identity-based model a register *is* its definition, so this only fails for a detached
      // AssigneeOf or an unattached phi/parameter — i.e. programmatically-malformed IR.)
      if (isStrict) {
        for (var localReg : localRegisters) {
          if (localReg.definingBB() == null) {
            report(scope, "Local register " + localReg + " is never assigned");
          }
        }
      }

      // Defs must dominate uses (`reg.uses()` spans nested promises; `domTree` handles the
      // cross-scope dominance projection).
      for (var localReg : localRegisters) {
        if (localReg.definingBB() == null) {
          continue;
        }

        var reportedDef = false;
        for (var use : localReg.uses()) {
          if (!domTree.dominates(localReg, use.instruction())) {
            if (!reportedDef) {
              reportDef(localReg, "Local register " + localReg + " assigned after use(s)");
              reportedDef = true;
            }

            report(use.instruction(), "Local register " + localReg + " used before assignment");
          }
        }
      }

      // Per-CFG checks
      scope.streamCfgs().forEach(cfg -> new OnCfg(cfg).run());
    }

    /// Report an error at `register`'s definition site.
    private void reportDef(Register register, String message) {
      switch (register) {
        case AssigneeOf a -> report(a.statement(), message);
        case BlockParameter p -> {
          var owner = p.owner();
          if (owner == null) {
            report(scope, message);
          } else {
            report(owner, -1, message);
          }
        }
        case FunctionParameter _ -> report(scope, message);
      }
    }

    class OnCfg {
      final CFG cfg;
      final CfgDominatorTree dominatorTree;

      OnCfg(CFG cfg) {
        this.cfg = cfg;
        dominatorTree = dominatorTrees.get(cfg);
      }

      void run() {
        // Promise CFGs have the same scope as their parents
        for (var bb : cfg.bbs()) {
          for (var i = 0; i < bb.statements().size(); i++) {
            var stmt = bb.statements().get(i);
            if (!(stmt.expression() instanceof Promise(_, _, var code))) {
              continue;
            }

            if (code.scope() != scope) {
              report(
                  bb,
                  i,
                  "Promise body CFG's scope doesn't match parent CFG's scope:"
                      + "\n=== Promise ===\n"
                      + code.scope()
                      + "\n=== Parent ===\n"
                      + scope);
            }
          }
        }

        // Promises don't reuse CFG pointers
        var seenCfgs = new HashMap<CFG, Statement>();
        for (var bb : cfg.bbs()) {
          for (var i = 0; i < bb.statements().size(); i++) {
            var stmt = bb.statements().get(i);
            if (!(stmt.expression() instanceof Promise(_, _, var code))) {
              continue;
            }
            var otherStmt = seenCfgs.put(code, stmt);
            if (otherStmt != null) {
              report(
                  otherStmt, "Promise CFG @" + code.hashCode() + " is reused in multiple places");
              report(
                  bb,
                  i,
                  "Promise CFG @" + code.hashCode() + " is reused in multiple places: " + code);
            }
          }
        }

        // *(strict)* All blocks must be reachable from entry
        if (isStrict) {
          var entry = cfg.entry();
          for (var bb : cfg.bbs()) {
            if (bb != entry && dominatorTree.dominators(bb).size() == 1) {
              report(bb, -1, "Block " + bb.label() + " is unreachable from entry");
            }
          }
        }

        // *(strict)* The entry block and blocks with < 2 predecessors can't have phi parameters
        if (isStrict) {
          for (var bb : cfg.bbs()) {
            if (!bb.phiParameters().isEmpty()) {
              if (bb == cfg.entry()) {
                report(bb, -1, "Entry block can't have phis");
              }

              if (bb.predecessors().size() == 1) {
                var predecessor = Iterables.getOnlyElement(bb.predecessors());
                var predJump = predecessor.jump();
                var predTargets = predJump.targets();
                if (!(predJump.expression() instanceof If
                    && predTargets.get(0).bb() == bb
                    && predTargets.get(1).bb() == bb
                    && !predTargets.get(0).phiArgs().equals(predTargets.get(1).phiArgs()))) {
                  report(
                      bb,
                      -1,
                      "Block with 1 predecessor (which isn't an 'if' whose arguments are different in both branches) can't have phis");
                }
              }
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
      }
    }
  }
}
