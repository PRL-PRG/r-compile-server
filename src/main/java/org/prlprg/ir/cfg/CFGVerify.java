package org.prlprg.ir.cfg;

interface CFGVerify extends CFGQuery {

  /**
   * Verify some CFG invariants. Specifically:
   *
   * <ul>
   *   <li>Every basic block has a non-null jump (could be a {@link Jumps.Return} or {@link
   *       Jumps.Unreachable}).
   *   <li>Only basic blocks with two or more predecessors have phi nodes.
   *   <li>Phi nodes have an entry from every predecessor.
   *   <li>Instructions don't have arguments that were removed from the CFG (or not present
   *       initially).
   *   <li>Instruction arguments all either originate from earlier in the block, or are
   *       CFG-independent. <i>Except</i> in basic blocks with exactly one predecessor, instruction
   *       arguments may be from that predecessor or, if it also has one predecessor, its
   *       predecessor and so on.
   *   <li>Instruction {@link RValue} arguments are of the correct (dynamic) type.
   *   <li>Every basic block is connected to the entry block.
   * </ul>
   *
   * @throws CFGVerifyException if one of the invariants are broken.
   */
  void verify();
}
