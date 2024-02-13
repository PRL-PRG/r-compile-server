package org.prlprg.ir;

import javax.annotation.concurrent.Immutable;

/**
 * Intermediate representation value or instruction.
 *
 * <p>This class contains nested sub-interfaces which let you refine the type of nodes represented
 * in the IR (e.g. only permit PIR nodes). Unfortunately you will have to manually cast arguments
 * since those may be {@link Node} or non-specific subtypes.
 *
 * <p>IR nodes are immutable but {@link BB}s and {@link CFG}s aren't. You can call {@link
 * CFG#replace} to replace all occurrences of a node with another.
 *
 * <p>See the {@link org.prlprg.ir} package documentation for more details.
 */
@Immutable
public interface Node {
  /** BB containing this node. */
  BB<?> bb();

  /** CFG containing this node. */
  default CFG<?> cfg() {
    return bb().cfg();
  }

  /** Instruction was created directly from a GNU-R bytecode instruction. */
  sealed interface GnuR extends Node permits Instr.GnuR {}
}
