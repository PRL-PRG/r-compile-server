package org.prlprg.fir.analyze.cfg;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
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
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.Register;

/// Computes liveness information for a control-flow graph.
///
/// A register is "live" at a program point if its value may be used later.
/// A register is "killed" at an instruction if that instruction is its last use.
///
/// Only registers defined in this [CFG] are tracked. A [Promise] statement has no arguments of its
/// own, so the registers it *captures* count as used where the promise is created (see
/// [#capturedRegisters]); registers defined inside the promise's own code belong to that nested
/// [CFG] and are not tracked here.
public final class Liveness implements CfgAnalysis {
  private final CFG cfg;
  private final Map<BB, Set<Register>> liveIn = new HashMap<>();
  private final Map<BB, Set<Register>> liveOut = new HashMap<>();
  private final Map<Instruction, Set<Register>> killsByInstruction = new HashMap<>();

  @AnalysisConstructor
  public Liveness(CFG cfg) {
    this.cfg = cfg;
    run();
  }

  /// Get the registers killed (have their last use) at the instruction at `(bb, instructionIndex)`
  /// (the terminator jump is index `bb.statements().size()`).
  public @Unmodifiable Set<Register> kills(BB bb, int instructionIndex) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("Position not in CFG");
    }
    var instruction =
        instructionIndex == bb.statements().size()
            ? bb.jump()
            : bb.statements().get(instructionIndex);
    return deadAfter(instruction);
  }

  /// Check if a register is killed at the instruction at `(bb, instructionIndex)`.
  public boolean isKilled(Register register, BB bb, int instructionIndex) {
    return kills(bb, instructionIndex).contains(register);
  }

  /// Get the registers that are dead after (have their last use at) the given instruction.
  /// This is an alias for kills that takes an Instruction directly.
  ///
  /// A register that is defined but never used is killed nowhere: it has no last use.
  public @Unmodifiable Set<Register> deadAfter(Instruction instruction) {
    if (!killsByInstruction.containsKey(instruction)) {
      throw new IllegalArgumentException("Instruction not in CFG");
    }

    return Collections.unmodifiableSet(Objects.requireNonNull(killsByInstruction.get(instruction)));
  }

  /// Get the registers live at block entry (before any instruction executes).
  ///
  /// This excludes `bb`'s own [phi parameters][BB#phiParameters], since those are defined on entry
  /// rather than live into it.
  public @Unmodifiable Set<Register> liveIn(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    if (!liveIn.containsKey(bb)) {
      throw new IllegalArgumentException("BB not in CFG (removed)");
    }

    return Collections.unmodifiableSet(Objects.requireNonNull(liveIn.get(bb)));
  }

  /// Get the registers live at block exit: the union of [#liveIn] over `bb`'s successors, plus
  /// the phi arguments `bb`'s jump passes to them.
  ///
  /// Phi arguments are included because that's LLVM convention and easier for a traditional
  /// backend. Note that if the jump is a branch, the condition isn't necessarily live after.
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
      liveIn.put(bb, new LinkedHashSet<>());
      liveOut.put(bb, new LinkedHashSet<>());
    }

    var order = visitOrder();

    // Fixed-point iteration
    boolean changed = true;
    while (changed) {
      changed = false;

      for (var bb : order) {
        // What the successors need on entry: the union of liveIn over each target of B.jump().
        var fromSuccessors = successorLiveIn(bb);

        // liveOut(B) = that, plus the phi arguments B's jump passes (live until the edge copies
        // them into the successors' phi parameters).
        var newLiveOut = new LinkedHashSet<>(fromSuccessors);
        newLiveOut.addAll(phiArguments(bb));

        // Compute liveIn(B) = (liveOut(B) - defs(B)) + uses(B)
        var newLiveIn = new LinkedHashSet<>(fromSuccessors);

        // + uses(B.jump), which covers the phi arguments and branch condition
        newLiveIn.addAll(uses(bb.jump()));

        for (var stmt : bb.statements().reversed()) {
          // - defs(B.stmts[i])
          if (stmt.assignee() != null) {
            newLiveIn.remove(stmt.assignee());
          }

          // + uses(B.stmts[i])
          newLiveIn.addAll(uses(stmt));
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

  /// Every block in the [CFG], reverse-DFS from the exits first (which converges the backward
  /// analysis fastest), then whatever that missed.
  ///
  /// [BbReverseDfs] starts at [CFG#exits()], so it never reaches a block that can't reach an
  /// exit (e.g. the body of an infinite loop). Those blocks still need to be iterated, or their
  /// liveness would be left empty and callers would see live registers reported as dead.
  private List<BB> visitOrder() {
    var order = new ArrayList<BB>(cfg.bbs().size());
    var seen = new HashSet<BB>();

    for (var bb : BbReverseDfs.bbReverseDfs(cfg)) {
      if (seen.add(bb)) {
        order.add(bb);
      }
    }
    for (var bb : cfg.bbs()) {
      if (seen.add(bb)) {
        order.add(bb);
      }
    }

    return order;
  }

  private void computeKills() {
    for (var bb : cfg.bbs()) {
      // Walk backward through the block, tracking what's live after each instruction.
      //
      // This starts from what the successors need, not from liveOut: a phi argument is live out
      // of this block but dies on the edge, so the jump is still its last use.
      var liveAfter = successorLiveIn(bb);

      // Process jump first (it's the last instruction). A use is a kill iff nothing later in the
      // block, and no successor, needs the register: i.e. iff it isn't already live after.
      var jumpKills = new LinkedHashSet<Register>();
      for (var use : uses(bb.jump())) {
        if (liveAfter.add(use)) {
          jumpKills.add(use);
        }
      }
      killsByInstruction.put(bb.jump(), jumpKills);

      // Process statements backward
      for (var i = bb.statements().size() - 1; i >= 0; i--) {
        var stmt = bb.statements().get(i);

        // Remove def from liveAfter (def happens after use in the same instruction)
        if (stmt.assignee() != null) {
          liveAfter.remove(stmt.assignee());
        }

        // Find kills: used by this instruction and not live after
        // Also add uses to liveAfter for the next iteration
        var stmtKills = new LinkedHashSet<Register>();
        for (var use : uses(stmt)) {
          if (liveAfter.add(use)) {
            stmtKills.add(use);
          }
        }
        killsByInstruction.put(stmt, stmtKills);
      }
    }
  }

  /// The registers the successors of `bb` need on entry, i.e. the union of [#liveIn] over them.
  ///
  /// This is [#liveOut] minus phi arguments from other blocks dead at `bb`.
  private LinkedHashSet<Register> successorLiveIn(BB bb) {
    var result = new LinkedHashSet<Register>();
    for (var target : bb.jump().targets()) {
      result.addAll(liveIn.get(target.bb()));
    }
    return result;
  }

  /// The registers `bb`'s jump passes as phi arguments to its successors.
  private static Set<Register> phiArguments(BB bb) {
    var result = new LinkedHashSet<Register>();
    for (var target : bb.jump().targets()) {
      for (var arg : target.phiArgs()) {
        var variable = arg.variable();
        if (variable != null) {
          result.add(variable);
        }
      }
    }
    return result;
  }

  /// The registers whose values must be live immediately before `instruction` executes.
  private static Set<Register> uses(Instruction instruction) {
    if (instruction instanceof Statement s && s.expression() instanceof Promise p) {
      return capturedRegisters(p);
    }

    var uses = new LinkedHashSet<Register>();
    for (var arg : instruction.args()) {
      var variable = arg.variable();
      if (variable != null) {
        uses.add(variable);
      }
    }
    return uses;
  }

  /// The registers a promise captures from an enclosing [CFG]: those used by the instructions in
  /// its code, at any nesting depth, minus those its code defines.
  ///
  /// A [Promise] statement contributes no arguments at its own level, so without this its captures
  /// would look dead where the promise is created even though forcing it reads them later. The
  /// registers the promise's code defines must be subtracted, because they belong to that nested
  /// [CFG]; leaking them here would report registers as live in a [CFG] that doesn't contain them.
  private static Set<Register> capturedRegisters(Promise promise) {
    var used = new LinkedHashSet<Register>();
    var defined = new HashSet<Register>();
    collectRegisters(promise.code(), used, defined);
    used.removeAll(defined);
    return used;
  }

  private static void collectRegisters(CFG code, Set<Register> used, Set<Register> defined) {
    for (var bb : code.bbs()) {
      defined.addAll(bb.phiParameters());

      for (var instruction : bb.instructions()) {
        if (instruction instanceof Statement s) {
          if (s.assignee() != null) {
            defined.add(s.assignee());
          }
          if (s.expression() instanceof Promise nested) {
            collectRegisters(nested.code(), used, defined);
            continue;
          }
        }

        for (var arg : instruction.args()) {
          var variable = arg.variable();
          if (variable != null) {
            used.add(variable);
          }
        }
      }
    }
  }
}
