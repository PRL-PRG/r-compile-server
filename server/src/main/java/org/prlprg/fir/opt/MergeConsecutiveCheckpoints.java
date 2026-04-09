package org.prlprg.fir.opt;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.Register;

/// Merge consecutive checkpoints whose deopt branches are effectively the same.
///
/// When two checkpoints are consecutive (`check L1 else D1; L1: assumes...; stmts...; check L2
/// else D2`), and both deopt branches (`D1`, `D2`) have the same deopt pc, the same deopt stack
/// (looking through type assumptions), and the same deopt-branch statements (looking through
/// assumptions), they can be merged into one checkpoint.
///
/// The assumptions from both success BBs are combined, and the non-assumption statements from the
/// first success BB are placed after all assumptions. The second checkpoint is removed.
///
/// If any non-assumption statement in the first success BB defines a register that is referenced by
/// a second-checkpoint assumption, the merge is not performed.
public record MergeConsecutiveCheckpoints() implements AbstractionOptimization {
  @Override
  public boolean runWithoutRecording(
      Function function, AbstractionFeedback feedback, Abstraction scope) {
    boolean[] changed = {false};

    scope
        .streamCfgs()
        .flatMap(cfg -> cfg.bbs().stream())
        .toList() // snapshot to allow mutation
        .forEach(
            bb -> {
              if (tryMerge(bb)) {
                changed[0] = true;
              }
            });

    return changed[0];
  }

  private static boolean tryMerge(BB bb) {
    // Find first checkpoint: `check successBb1() else deoptBb1()`
    if (!(bb.jump() instanceof Checkpoint cp1)) {
      return false;
    }

    var successBb1 = cp1.success().bb();

    // Success BB must have one predecessor and no phi parameters (general invariant).
    if (successBb1.predecessors().size() != 1 || !successBb1.phiParameters().isEmpty()) {
      return false;
    }

    // Success BB must end with a second checkpoint.
    if (!(successBb1.jump() instanceof Checkpoint cp2)) {
      return false;
    }

    var successBb2 = cp2.success().bb();
    var deoptBb1 = cp1.deopt().bb();
    var deoptBb2 = cp2.deopt().bb();

    // Second success BB must also have no phi parameters (general invariant).
    if (!successBb2.phiParameters().isEmpty()) {
      return false;
    }

    // Both deopt BBs must end with Deopt jumps (general invariant).
    if (!(deoptBb1.jump() instanceof Deopt deopt1) || !(deoptBb2.jump() instanceof Deopt deopt2)) {
      return false;
    }

    // Split first success BB's statements into assumptions and non-assumptions.
    // Copy into owned lists since we'll mutate the BB later.
    var stmts1 = successBb1.statements();
    int firstNonAssumeIdx1 = 0;
    while (firstNonAssumeIdx1 < stmts1.size()
        && stmts1.get(firstNonAssumeIdx1).expression() instanceof Assume) {
      firstNonAssumeIdx1++;
    }
    var assumes1 = List.copyOf(stmts1.subList(0, firstNonAssumeIdx1));
    var nonAssumes1 = List.copyOf(stmts1.subList(firstNonAssumeIdx1, stmts1.size()));

    // Split second success BB's statements into assumptions and non-assumptions.
    var stmts2 = successBb2.statements();
    int firstNonAssumeIdx2 = 0;
    while (firstNonAssumeIdx2 < stmts2.size()
        && stmts2.get(firstNonAssumeIdx2).expression() instanceof Assume) {
      firstNonAssumeIdx2++;
    }
    var assumes2 = List.copyOf(stmts2.subList(0, firstNonAssumeIdx2));
    var nonAssumes2 = List.copyOf(stmts2.subList(firstNonAssumeIdx2, stmts2.size()));

    // Collect registers defined by non-assumption statements in the first success BB.
    var definedByNonAssumes1 = new HashSet<Register>();
    for (var stmt : nonAssumes1) {
      if (stmt.assignee() != null) {
        definedByNonAssumes1.add(stmt.assignee());
      }
    }

    // Check that second checkpoint's assumptions don't reference any registers
    // defined by non-assumption statements in the first success BB.
    if (!definedByNonAssumes1.isEmpty()) {
      for (var stmt : assumes2) {
        for (var arg : stmt.arguments()) {
          if (arg.variable() != null && definedByNonAssumes1.contains(arg.variable())) {
            return false;
          }
        }
      }
    }

    // Build a mapping from assumption assignees to their targets.
    // This lets us "look through" assumptions when comparing deopt stacks.
    // e.g., `r9 = r3 ?: R` means r9 maps to r3.
    var assumeTargetMap = buildAssumeTargetMap(assumes1, assumes2);

    // Check that deopt branches are effectively the same:
    // 1. Same deopt pc
    if (deopt1.pc() != deopt2.pc()) {
      return false;
    }

    // 2. Same deopt stack (looking through assumptions)
    if (deopt1.stack().size() != deopt2.stack().size()) {
      return false;
    }
    for (int i = 0; i < deopt1.stack().size(); i++) {
      if (!argsEffectivelyEqual(deopt1.stack().get(i), deopt2.stack().get(i), assumeTargetMap)) {
        return false;
      }
    }

    // 3. Same deopt-branch statements (looking through assumptions)
    if (deoptBb1.statements().size() != deoptBb2.statements().size()) {
      return false;
    }
    for (int i = 0; i < deoptBb1.statements().size(); i++) {
      if (!statementsEffectivelyEqual(
          deoptBb1.statements().get(i), deoptBb2.statements().get(i), assumeTargetMap)) {
        return false;
      }
    }

    // --- Merge ---
    // The merged success BB gets: assumes1, assumes2, nonAssumes1, nonAssumes2,
    // and successBb2's jump.

    var mergedStatements = new ArrayList<Statement>();
    mergedStatements.addAll(assumes1);
    mergedStatements.addAll(assumes2);
    mergedStatements.addAll(nonAssumes1);
    mergedStatements.addAll(nonAssumes2);

    // Clear and repopulate successBb1.
    int stmtCount1 = successBb1.statements().size();
    if (stmtCount1 > 0) {
      successBb1.removeStatementsAt(0, stmtCount1);
    }
    successBb1.appendStatements(mergedStatements);
    successBb1.setJump(successBb2.jump());

    // Remove successBb2 if it has no remaining predecessors.
    var cfg = successBb1.owner();
    if (successBb2.predecessors().isEmpty()) {
      cfg.removeBB(successBb2);
    }

    // Remove deoptBb2 if it has no remaining predecessors.
    if (deoptBb2 != deoptBb1 && deoptBb2.predecessors().isEmpty()) {
      cfg.removeBB(deoptBb2);
    }

    return true;
  }

  /// Build a mapping from type-assumption assignees to their targets.
  private static Map<Register, Register> buildAssumeTargetMap(
      List<Statement> assumes1, List<Statement> assumes2) {
    var map = new HashMap<Register, Register>();
    for (var stmts : List.of(assumes1, assumes2)) {
      for (var stmt : stmts) {
        if (stmt.assignee() != null
            && stmt.expression() instanceof Assume(var assumption)
            && assumption instanceof AssumeType(var target, _)
            && target instanceof Read(var targetReg)) {
          map.put(stmt.assignee(), targetReg);
        }
      }
    }
    return map;
  }

  /// Check if two arguments are effectively equal, looking through type assumptions.
  private static boolean argsEffectivelyEqual(
      Argument a, Argument b, Map<Register, Register> assumeTargetMap) {
    return resolveArg(a, assumeTargetMap).equals(resolveArg(b, assumeTargetMap));
  }

  /// Resolve an argument through type-assumption assignments.
  /// e.g., if `r9 = r3 ?: R`, then `Read(r9)` resolves to `Read(r3)`.
  private static Argument resolveArg(Argument arg, Map<Register, Register> assumeTargetMap) {
    if (arg instanceof Read(var reg)) {
      var resolved = reg;
      while (assumeTargetMap.containsKey(resolved)) {
        resolved = assumeTargetMap.get(resolved);
      }
      if (resolved != reg) {
        return new Read(resolved);
      }
    }
    return arg;
  }

  /// Check if two statements are effectively equal, looking through type assumptions.
  private static boolean statementsEffectivelyEqual(
      Statement a, Statement b, Map<Register, Register> assumeTargetMap) {
    if (!a.expression().getClass().equals(b.expression().getClass())) {
      return false;
    }
    // Assignees must match (looking through assumptions)
    if (a.assignee() != null && b.assignee() != null) {
      var resolvedA = resolveRegister(a.assignee(), assumeTargetMap);
      var resolvedB = resolveRegister(b.assignee(), assumeTargetMap);
      if (!resolvedA.equals(resolvedB)) {
        return false;
      }
    } else if (a.assignee() != b.assignee()) {
      return false;
    }
    // Arguments must match (looking through assumptions)
    var argsA = List.copyOf(a.arguments());
    var argsB = List.copyOf(b.arguments());
    if (argsA.size() != argsB.size()) {
      return false;
    }
    for (int i = 0; i < argsA.size(); i++) {
      if (!argsEffectivelyEqual(argsA.get(i), argsB.get(i), assumeTargetMap)) {
        return false;
      }
    }
    return true;
  }

  private static Register resolveRegister(Register reg, Map<Register, Register> assumeTargetMap) {
    var resolved = reg;
    while (assumeTargetMap.containsKey(resolved)) {
      resolved = assumeTargetMap.get(resolved);
    }
    return resolved;
  }
}
