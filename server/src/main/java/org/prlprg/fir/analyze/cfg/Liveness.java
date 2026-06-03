package org.prlprg.fir.analyze.cfg;

import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.iterator.BbReverseDfs;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.variable.Register;

/// Computes liveness information for a control-flow graph.
///
/// A register is "live" at a program point if its value may be used later.
/// A register is "killed" at an instruction if that instruction is its last use.
/// TODO: Claude made this and it may have bugs.
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
    if (!kills.containsKey(position)) {
      throw new IllegalArgumentException("Position not in CFG (removed)");
    }

    return Collections.unmodifiableSet(Objects.requireNonNull(kills.get(position)));
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
    if (!killsByInstruction.containsKey(instruction)) {
      throw new IllegalArgumentException("Instruction not in CFG");
    }

    return Collections.unmodifiableSet(Objects.requireNonNull(killsByInstruction.get(instruction)));
  }

  /// Get the registers live at block entry (before any instruction executes).
  public @Unmodifiable Set<Register> liveIn(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    if (!liveIn.containsKey(bb)) {
      throw new IllegalArgumentException("BB not in CFG (removed)");
    }

    return Collections.unmodifiableSet(Objects.requireNonNull(liveIn.get(bb)));
  }

  /// Get the registers live at block exit (after the jump executes).
  public @Unmodifiable Set<Register> liveOut(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    if (!liveOut.containsKey(bb)) {
      throw new IllegalArgumentException("BB not in CFG (removed)");
    }

    return Collections.unmodifiableSet(Objects.requireNonNull(liveOut.get(bb)));
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

      for (var bb : BbReverseDfs.bbReverseDfs(cfg)) {
        // Compute liveOut(B) = union for each target T of B.jump():
        var newLiveOut = new HashSet<Register>();
        for (var target : bb.jump().targets()) {
          newLiveOut.addAll(liveIn.get(target.bb()));
        }

        // Compute liveIn(B) = (liveOut(B) - defs(B)) + uses(B)
        var newLiveIn = new HashSet<>(newLiveOut);

        // + uses(B.jump)
        for (var arg : bb.jump().arguments()) {
          if (arg.variable() != null) {
            newLiveIn.add(arg.variable());
          }
        }

        for (var stmt : bb.statements().reversed()) {
          // - defs(B.stmts[i])
          if (stmt.assignee() != null) {
            newLiveIn.remove(stmt.assignee());
          }

          // + uses(B.stmts[i])
          var args =
              stmt.expression() instanceof Promise p ? p.argumentsInCode() : stmt.arguments();
          for (var arg : args) {
            if (arg.variable() != null) {
              newLiveIn.add(arg.variable());
            }
          }
        }

        // - defs(B.phis)
        bb.phiParameters().forEach(newLiveIn::remove);

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
      var liveAfter = new HashSet<>(liveOut.get(bb));
      int i = bb.statements().size();

      // Process jump first (it's the last instruction)
      // Add jump args to liveAfter if they're not already live
      var jumpKills = new HashSet<Register>();
      for (var arg : bb.jump().arguments()) {
        if (arg.variable() != null && liveAfter.add(arg.variable())) {
          jumpKills.add(arg.variable());
        }
      }
      kills.put(new CfgPosition(bb, i), jumpKills);
      killsByInstruction.put(bb.jump(), jumpKills);

      // For statements, start from liveOut (which includes phi args needed by jump)

      // Process statements backward
      for (i--; i >= 0; i--) {
        var stmt = bb.statements().get(i);

        // Remove def from liveAfter (def happens after use in the same instruction)
        if (stmt.assignee() != null) {
          liveAfter.remove(stmt.assignee());
        }

        // Find kills: used by this instruction and not live after
        // Also add uses to liveAfter for the next iteration
        var stmtKills = new HashSet<Register>();
        var args = stmt.expression() instanceof Promise p ? p.argumentsInCode() : stmt.arguments();
        for (var arg : args) {
          if (arg.variable() != null && liveAfter.add(arg.variable())) {
            stmtKills.add(arg.variable());
          }
        }
        kills.put(new CfgPosition(bb, i), stmtKills);
        killsByInstruction.put(stmt, stmtKills);
      }
    }
  }
}
