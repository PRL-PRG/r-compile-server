package org.prlprg.ir;

import java.util.List;
import org.prlprg.sexp.*;

/**
 * Instruction within an IR which encompasses both PIR and GNU-R bytecodes.
 *
 * @implNote Instead of subclassing directly, we declare them in a separate file to auto-generate
 *     the corresponding methods, and so we can use record-like notation while keeping each argument
 *     mutable.
 */
public sealed interface Instr extends Node {
  /** The instruction's arguments, which are the other nodes it depends on. */
  List<Node> args();

  /** Replace the node in arguments. */
  Instr replace(Node old, Node replacement);

  /**
   * Instruction was created directly from a GNU-R bytecode instruction
   *
   * <p>Every bytecode instruction ({@link org.prlprg.bc.BcInstr} except those which manipulate the
   * stack have a corresponding node of this type.
   */
  sealed interface GnuR extends Instr, Node.GnuR {}
  // /** Instruction corresponds to a PIR instruction. */
  // sealed interface PIR extends Instr permits ... {}
}
