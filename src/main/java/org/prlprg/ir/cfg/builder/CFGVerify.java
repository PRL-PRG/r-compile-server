package org.prlprg.ir.cfg.builder;

import org.prlprg.ir.cfg.CFGVerifyException;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InvalidNode;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.instr.JumpData;

public interface CFGVerify extends CFGQuery {
  /**
   * Verify some CFG invariants. Specifically:
   *
   * <ul>
   *   <li>Every basic block has a non-null jump (could be a {@link JumpData.Return} or {@link
   *       JumpData.Unreachable}).
   *   <li>The entry block doesn't have any phi nodes, nor do any blocks with < 2 predecessors.
   *   <li>Instructions and phis don't have arguments that were removed from the CFG (or were never
   *       in the CFG).
   *   <li>Every phi input node is global or originates from a block that the incoming BB dominates
   *       (non-strict, so includes the incoming block itself).
   *   <li>Every phi input's node is global or originates a block that non-strictly dominates the
   *       input's incoming block.
   *   <li>There are no {@linkplain InvalidNode#UNSET_PHI_INPUT unset phi inputs}
   *   <li>Every instruction argument is either global, originates from earlier in the instruction's
   *       block, or originates from a strictly dominating block.
   *   <li>Instruction-specific checks ({@link Instr#verify()}). Example: every {@link Node}
   *       instruction argument is of the correct generic {@link Node#type()}.
   *   <li>Every basic block is connected to the entry block.
   * </ul>
   *
   * @throws CFGVerifyException if one of the invariants are broken.
   */
  void verify();
}
