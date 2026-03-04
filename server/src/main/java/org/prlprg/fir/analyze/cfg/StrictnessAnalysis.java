package org.prlprg.fir.analyze.cfg;

import java.util.ArrayDeque;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.analyze.type.InferEffects;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.iterator.BbDfs;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.variable.Register;

/// Forward must-force dataflow analysis.
///
/// Computes which parameters are forced on all paths from entry to every `return` or reflective
/// operation (whichever comes first). Parameters that are definitely values are excluded (they
/// can't be promises, so strictness is meaningless).
///
/// Used by both {@link org.prlprg.fir.check.StrictnessChecker} and
/// {@link org.prlprg.fir.opt.StrictnessOptimization}.
public final class StrictnessAnalysis implements CfgAnalysis {
  private final Set<Register> strictParameters;

  @AnalysisConstructor
  public StrictnessAnalysis(CFG cfg) {
    strictParameters = compute(cfg);
  }

  /// Returns the set of parameter registers that satisfy the strictness condition:
  /// on every path from entry to a `return` (not `deopt`), or to a reflective operation if it
  /// comes first, the parameter is forced (via `force` or `force?`).
  public @Unmodifiable Set<Register> strictParameters() {
    return Collections.unmodifiableSet(strictParameters);
  }

  private static Set<Register> compute(CFG cfg) {
    var scope = cfg.scope();
    var params = scope.parameters();
    var inferEffects = new InferEffects(scope);

    // Identify candidate parameters: those whose type is not definitely a value.
    var candidates = new HashSet<Register>();
    for (var param : params) {
      if (!param.type().isValue()) {
        candidates.add(param.variable());
      }
    }
    if (candidates.isEmpty()) {
      return Set.of();
    }

    // Phase 1: Worklist-based forward dataflow to compute must-forced sets at BB entry.
    // Domain: Set<Register> of parameter registers that are definitely forced on all paths.
    // Transfer: add forced param register.
    // Merge at join: intersection.
    // Skip deopt exits entirely (they don't constrain strictness).
    Map<BB, Set<Register>> bbEntryMustForced = new HashMap<>();
    bbEntryMustForced.put(cfg.entry(), new HashSet<>());

    var worklist = new ArrayDeque<BB>();
    worklist.add(cfg.entry());

    while (!worklist.isEmpty()) {
      var bb = worklist.poll();
      var mustForced = new HashSet<>(bbEntryMustForced.get(bb));

      // Transfer through all statements
      for (var stmt : bb.statements()) {
        addForcedParam(stmt, scope, mustForced);
      }
      // Transfer through the jump too (it may be relevant for the successor's entry state,
      // but jumps themselves don't force — we just propagate the current state).

      // Propagate to successors (skip deopt successors from checkpoints)
      for (var succ : bb.successors()) {
        var old = bbEntryMustForced.get(succ);
        if (old == null) {
          // First time reaching this block
          bbEntryMustForced.put(succ, new HashSet<>(mustForced));
          worklist.add(succ);
        } else {
          // Merge: intersection
          if (old.retainAll(mustForced)) {
            // Changed, re-process
            worklist.add(succ);
          }
        }
      }
    }

    // Phase 2: Walk all BBs, re-compute must-forced per instruction. At each reflective
    // expression and every Return, intersect strictCandidates with current mustForced.
    var strictCandidates = new HashSet<>(candidates);

    for (var bb : BbDfs.bbDfs(cfg)) {
      var mustForced = new HashSet<>(bbEntryMustForced.getOrDefault(bb, Set.of()));

      for (var stmt : bb.statements()) {
        // Add forced param BEFORE checking reflective constraint at same instruction
        addForcedParam(stmt, scope, mustForced);

        // Check if this expression is reflective
        if (inferEffects.of(stmt.expression()).reflect()) {
          strictCandidates.retainAll(mustForced);
        }
      }

      // Check the jump
      if (bb.jump() instanceof Return) {
        strictCandidates.retainAll(mustForced);
      }
      // Deopt exits are ignored — they don't constrain strictness.
    }

    return strictCandidates;
  }

  private static void addForcedParam(Statement stmt, Abstraction scope, Set<Register> mustForced) {
    var arg =
        switch (stmt.expression()) {
          case Force(var value) -> value;
          case MaybeForce(var value) -> value;
          default -> null;
        };
    if (arg instanceof Read(var reg) && scope.isParameter(reg)) {
      mustForced.add(reg);
    }
  }
}
