package org.prlprg.ir.cfg;

interface CFGVerify extends CFGQuery {

  /**
   * Verify some CFG invariants. Specifically:
   *
   * <ul>
   *   <li>Every basic block has a non-null jump (could be a {@link JumpData.Return} or {@link
   *       JumpData.Unreachable}).
   *   <li>Only basic blocks with two or more predecessors have phi nodes.
   *   <li>Instructions and phis don't have arguments that were removed from the CFG (or were never
   *       in the CFG).
   *   <li>Every phi input node is global or originates from a block that the incoming BB dominates
   *       (non-strict, so includes the incoming block itself).
   *   <li>Every phi input's node is global or originates a block that non-strictly dominates the
   *       input's incoming block.
   *   <li>Every instruction argument is either global, originates from earlier in the instruction's
   *       block, or originates from a strictly dominating block.
   *   <li>Instruction-specific checks ({@link Instr#verify()}). Example: every {@link RValue}
   *       instruction argument is of the correct (dynamic) type.
   *   <li>Every basic block is connected to the entry block.
   * </ul>
   *
   * @throws CFGVerifyException if one of the invariants are broken.
   */
  void verify();
}
