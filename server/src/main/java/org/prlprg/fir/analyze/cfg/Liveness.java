package org.prlprg.fir.analyze.cfg;

import static org.prlprg.fir.ir.cfg.iterator.ReverseDfs.reverseDfs;

import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.Register;

/// Computes liveness information for a control-flow graph.
///
/// A register is "live" at a program point if its value may be used later.
/// A register is "killed" at an instruction if that instruction is its last use.
public final class Liveness implements CfgAnalysis {
  private final CFG cfg;
  private final Map<BB, Set<Register>> liveIn = new HashMap<>();
  private final Map<BB, Set<Register>> liveOut = new HashMap<>();
  private final Map<CfgPosition, Set<Register>> kills = new HashMap<>();
  private final Map<Instruction, Set<Register>> killsByInstruction = new HashMap<>();

  @AnalysisConstructor
  public Liveness(CFG cfg) {
    this.cfg = cfg;
    run();
  }

  /// Get the registers killed (have their last use) at the given position.
  public @Unmodifiable Set<Register> kills(CfgPosition position) {
    if (position.bb().owner() != cfg) {
      throw new IllegalArgumentException("Position not in CFG");
    }
    return Collections.unmodifiableSet(kills.getOrDefault(position, Set.of()));
  }

  /// Get the registers killed (have their last use) at the given instruction.
  public @Unmodifiable Set<Register> kills(BB bb, int instructionIndex) {
    return kills(new CfgPosition(bb, instructionIndex));
  }

  /// Check if a register is killed at the given position.
  public boolean isKilled(Register register, CfgPosition position) {
    return kills(position).contains(register);
  }

  /// Get the registers that are dead after (have their last use at) the given instruction.
  /// This is an alias for kills that takes an Instruction directly.
  public @Unmodifiable Set<Register> deadAfter(Instruction instruction) {
    return Collections.unmodifiableSet(killsByInstruction.getOrDefault(instruction, Set.of()));
  }

  /// Get the registers live at block entry (before any instruction executes).
  public @Unmodifiable Set<Register> liveIn(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Collections.unmodifiableSet(liveIn.getOrDefault(bb, Set.of()));
  }

  /// Get the registers live at block exit (after the jump executes).
  public @Unmodifiable Set<Register> liveOut(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Collections.unmodifiableSet(liveOut.getOrDefault(bb, Set.of()));
  }

  private void run() {
    // Phase 1: Fixed-point iteration for block-level liveness
    computeBlockLiveness();

    // Phase 2: Compute per-instruction kills
    computeKills();
  }

  private void computeBlockLiveness() {
    // Initialize all blocks
    for (var bb : cfg.bbs()) {
      liveIn.put(bb, new HashSet<>());
      liveOut.put(bb, new HashSet<>());
    }

    // Fixed-point iteration in reverse DFS order
    boolean changed = true;
    while (changed) {
      changed = false;

      for (var bb : reverseDfs(cfg)) {
        // Compute liveOut(B) = union for each target T of B.jump():
        //   (liveIn(T.bb) - phiParams(T.bb)) + phiArgs(T)
        var newLiveOut = new HashSet<Register>();
        for (var target : bb.jump().targets()) {
          var targetBb = target.bb();

          // Start with liveIn of target
          var contribution = new HashSet<>(liveIn.get(targetBb));

          // Remove phi parameters (they are defs at target entry)
          contribution.removeAll(targetBb.phiParameters());

          // Add phi arguments passed via this edge
          for (var arg : target.phiArgs()) {
            if (arg.variable() != null) {
              contribution.add(arg.variable());
            }
          }

          newLiveOut.addAll(contribution);
        }

        // Compute liveIn(B) = (liveOut(B) - defs(B)) + uses(B)
        var newLiveIn = new HashSet<>(newLiveOut);

        // Remove defs: phi parameters and statement assignees
        newLiveIn.removeAll(bb.phiParameters());
        for (var stmt : bb.statements()) {
          if (stmt.assignee() != null) {
            newLiveIn.remove(stmt.assignee());
          }
        }

        // Add uses: all arguments from statements (but not phi args, which are in jump)
        for (var stmt : bb.statements()) {
          var args = stmt.expression() instanceof Promise p ? p.argumentsInCode() : stmt.arguments();
          for (var arg : args) {
            if (arg.variable() != null) {
              newLiveIn.add(arg.variable());
            }
          }
        }

        // Add uses from jump (excluding phi args, which we handled above in liveOut)
        // Note: Jump.arguments() includes phi args, but we need to handle them specially
        // For the jump itself, we only care about non-phi arguments (like If's condition)
        // However, since liveOut already handles phi args going to targets,
        // and we compute liveIn from liveOut, we need to add any direct uses in the jump
        // that aren't phi args. For simplicity, let's iterate through jump arguments
        // that are non-phi (condition in If, return value in Return, etc.)
        // Actually, the phi args ARE added to liveOut correctly above, and other jump args
        // (like If condition, Return value) need to be added to liveIn.
        // Let's reconsider: jump.arguments() includes ALL arguments including phi args.
        // We want: uses_from_jump_itself (non-phi) to be in liveIn.
        // The phi args contribute to liveOut via the target-specific handling above.
        // So we should NOT add all jump.arguments() here.
        // Let's check what types of jumps we have and their non-phi arguments:
        // - Goto: only phi args -> no direct uses
        // - If: cond + phi args -> cond is a direct use
        // - Return: ret value -> direct use
        // - Checkpoint: only phi args (like Goto with two targets) -> no direct uses
        // - Deopt: stack args -> direct uses
        // - Unreachable: no args -> no direct uses
        //
        // The cleanest approach: for each jump, get its direct (non-phi) arguments.
        // Since we can't easily distinguish, let's just add all jump arguments to liveIn.
        // The phi args will be redundant (they're also in liveOut), but that's fine.
        // Actually wait, the issue is that phi args shouldn't be in liveIn because
        // they're passed to the TARGET block's parameters, not used in THIS block's
        // context before the jump. Let me reconsider the dataflow equations.
        //
        // Standard liveness: live_in(B) = use(B) ∪ (live_out(B) - def(B))
        // With SSA/phi: phi args are "used" at the jump, but the values flow to
        // the target's phi parameters. So phi args ARE uses at the jump.
        //
        // Actually, looking back at the algorithm in the plan:
        // - liveOut includes phi args for each edge
        // - liveIn = (liveOut - defs) + uses_in_block
        // The "uses" should include statement uses AND jump's direct uses.
        // Since jump.arguments() already includes phi args, and those ARE uses
        // (the values are read at the jump to pass to the target), we should
        // include all of them. Let me add all jump arguments:
        for (var arg : bb.jump().arguments()) {
          if (arg.variable() != null) {
            newLiveIn.add(arg.variable());
          }
        }

        // Check if anything changed
        if (!newLiveOut.equals(liveOut.get(bb)) || !newLiveIn.equals(liveIn.get(bb))) {
          changed = true;
          liveOut.put(bb, newLiveOut);
          liveIn.put(bb, newLiveIn);
        }
      }
    }
  }

  private void computeKills() {
    for (var bb : cfg.bbs()) {
      // Walk backward through the block, tracking what's live after each instruction
      // For the jump, liveAfter is what's live in successors EXCLUDING phi params
      // (because phi args are consumed by the jump, not live after it)
      var liveAfterJump = new HashSet<Register>();
      for (var target : bb.jump().targets()) {
        var targetLiveIn = new HashSet<>(liveIn.get(target.bb()));
        targetLiveIn.removeAll(target.bb().phiParameters());
        liveAfterJump.addAll(targetLiveIn);
      }

      // Process jump first (it's the last instruction)
      var jumpIndex = bb.statements().size();
      var jumpKills = new HashSet<Register>();
      for (var arg : bb.jump().arguments()) {
        if (arg.variable() != null && !liveAfterJump.contains(arg.variable())) {
          jumpKills.add(arg.variable());
        }
      }
      if (!jumpKills.isEmpty()) {
        kills.put(new CfgPosition(bb, jumpIndex), jumpKills);
        killsByInstruction.put(bb.jump(), jumpKills);
      }

      // For statements, start from liveOut (which includes phi args needed by jump)
      var liveAfter = new HashSet<>(liveOut.get(bb));

      // Process statements backward
      var statements = bb.statements();
      for (int i = statements.size() - 1; i >= 0; i--) {
        var stmt = statements.get(i);

        // Remove def from liveAfter (def happens after use in the same instruction)
        if (stmt.assignee() != null) {
          liveAfter.remove(stmt.assignee());
        }

        // Find kills: used by this instruction and not live after
        var stmtKills = new HashSet<Register>();
        var args = stmt.expression() instanceof Promise p ? p.argumentsInCode() : stmt.arguments();
        for (var arg : args) {
          if (arg.variable() != null && !liveAfter.contains(arg.variable())) {
            stmtKills.add(arg.variable());
          }
        }
        if (!stmtKills.isEmpty()) {
          kills.put(new CfgPosition(bb, i), stmtKills);
          killsByInstruction.put(stmt, stmtKills);
        }

        // Add uses to liveAfter for the next iteration
        for (var arg : args) {
          if (arg.variable() != null) {
            liveAfter.add(arg.variable());
          }
        }
      }

      // At this point, liveAfter should equal liveIn (minus phi params which are defs)
      // Phi parameters are kills if they're not used later (i.e., not in liveAfter)
      // Actually, phi parameters are defined at block entry, so they can't be "killed"
      // in the traditional sense. They're not "used" by any instruction in this block
      // as a phi def - they're defined here. So we don't track kills for phi params.
    }
  }
}
