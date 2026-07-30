package org.prlprg.fir.ir.cfg.cursor;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.Register;

/// Deep-copies a [CFG] into another, remapping its identity-based [Register]s (parameters, phi
/// parameters, and statement assignees) to fresh ones in the destination scope.
public final class CFGCopier {
  /// Replaces a copied `Return` jump with some other terminator (used by the inliner to redirect
  /// returns to a continuation block).
  @FunctionalInterface
  public interface ReturnReplacer {
    Jump replace(Comments comments, Argument returnValue);
  }

  private static final ReturnReplacer DEFAULT_RETURN =
      (comments, value) -> new Jump(comments, new Return(), List.of(value));

  // Old register -> new register, for parameters/phis/assignees across the copied CFGs.
  // `consume r` copies to `consume r'`.
  private final Map<Register, Register> registerMap;

  // Old register -> the destination argument replacing it, for source registers with no copy.
  //
  // Unlike `registerMap`, this replaces the whole argument, so a `consume r` may be replaced by
  // a read or constant.
  private final Map<Register, Argument> substitutions;

  // Every copied instruction, whose arguments are remapped in the second pass.
  private final List<Instruction> copiedInstructions = new ArrayList<>();

  private CFGCopier(Map<Register, Register> registerMap, Map<Register, Argument> substitutions) {
    this.registerMap = registerMap;
    this.substitutions = substitutions;
  }

  /// Assuming `dst` is empty, makes it a copy of `inner` (except [CFG#scope()]).
  public static void copyTo(CFG dst, CFG inner) {
    copyTo(dst, inner, new HashMap<>());
  }

  /// As [#copyTo(CFG, CFG)] but with an initial register remapping (e.g. old parameters to new
  /// parameters). The map is updated in-place with the copied phis and assignees.
  public static void copyTo(CFG dst, CFG inner, Map<Register, Register> registerMap) {
    var copier = new CFGCopier(registerMap, Map.of());
    copier.copyBlocks(dst.entry(), inner, DEFAULT_RETURN);
    copier.remapArguments();
  }

  /// Appends instructions from `inner`'s entry block into `dstBb`, copies all other blocks, and
  /// replaces each `Return` via `replaceReturn`.
  ///
  /// `substitutions` maps registers of `inner` that have no counterpart in the copy, i.e.
  /// [parameters][org.prlprg.fir.ir.variable.FunctionParameter].
  static void copyTo(
      BB dstBb, CFG inner, Map<Register, Argument> substitutions, ReturnReplacer replaceReturn) {
    var copier = new CFGCopier(new HashMap<>(), substitutions);
    copier.copyBlocks(dstBb, inner, replaceReturn);
    copier.remapArguments();
  }

  // === Pass 1: structure + fresh registers (arguments still reference the source registers) =====

  private void copyBlocks(BB dstBb, CFG inner, ReturnReplacer replaceReturn) {
    var dst = dstBb.owner();

    // Create destination blocks (reusing source labels where free), recording substitutions.
    var bbLabels = new HashMap<BB, String>();
    for (var bb : inner.bbs()) {
      if (!bb.isEntry()) {
        var label = bb.label();
        if (dst.bb(label) != null) {
          label = dst.nextLabel();
        }
        bbLabels.put(bb, label);
        dst.addBB(label);
      }
    }

    for (var bb : inner.bbs()) {
      var dstBlock = bb.isEntry() ? dstBb : Objects.requireNonNull(dst.bb(bbLabels.get(bb)));

      // Fresh phi parameters.
      for (var oldPhi : bb.phiParameters()) {
        var newPhi = new BlockParameter(dst.scope().freshName(oldPhi.name()), oldPhi.type());
        dstBlock.appendPhiParameter(newPhi);
        registerMap.put(oldPhi, newPhi);
      }

      // Fresh statements (arguments copied verbatim for now; remapped in pass 2).
      for (var oldStmt : bb.statements()) {
        var newStmt = copyStatement(oldStmt, dst.scope());
        dstBlock.appendStatement(newStmt);
        if (oldStmt.assignee() != null) {
          registerMap.put(oldStmt.assignee(), Objects.requireNonNull(newStmt.assignee()));
        }
        copiedInstructions.add(newStmt);
      }

      // Jump (targets relabeled to destination blocks; returns possibly replaced).
      var oldJump = bb.jump();
      Jump newJump;
      if (oldJump.expression() instanceof Return) {
        newJump = replaceReturn.replace(oldJump.comments(), oldJump.arg(0));
      } else {
        newJump = new Jump(oldJump.comments(), oldJump.expression(), List.copyOf(oldJump.args()));
        newJump.mapTargets(
            t ->
                new Target(
                    t.bb() == inner.entry()
                        ? dstBb
                        : Objects.requireNonNull(dst.bb(bbLabels.get(t.bb()))),
                    t.phiArgs()));
      }
      dstBlock.setJump(newJump);
      copiedInstructions.add(newJump);
    }
  }

  private Statement copyStatement(Statement oldStmt, Abstraction newScope) {
    var expr = oldStmt.expression();
    Statement newStmt;
    if (expr instanceof Promise(var valueType, var effects, var code, var local)) {
      // Promises hold a mutable nested CFG, which references this abstraction's registers, so copy
      // it (sharing this copier's register map).
      var newCode = new CFG(newScope);
      copyBlocks(newCode.entry(), code, DEFAULT_RETURN);
      newStmt =
          new Statement(
              oldStmt.comments().copy(),
              new Promise(valueType, effects, newCode, local),
              List.of());
    } else {
      newStmt = new Statement(oldStmt.comments().copy(), expr, List.copyOf(oldStmt.args()));
    }
    if (oldStmt.assignee() != null) {
      newStmt.setAssignee(newScope.freshName(oldStmt.assignee().name()), oldStmt.assignee().type());
    }
    return newStmt;
  }

  // === Pass 2: rewrite arguments through the completed register map =============================

  private void remapArguments() {
    for (var instr : copiedInstructions) {
      for (var i = 0; i < instr.argCount(); i++) {
        var oldArg = instr.arg(i);
        var oldRegister = oldArg.variable();
        if (oldRegister == null) {
          continue;
        }

        var renamed = registerMap.get(oldRegister);
        var mapped =
            renamed != null
                ? (oldArg instanceof Consume ? new Consume(renamed) : new Read(renamed))
                : substitutions.get(oldRegister);
        if (mapped != null) {
          instr.setArg(i, mapped);
        }
      }
    }
  }
}
