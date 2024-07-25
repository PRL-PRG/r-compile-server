package org.prlprg.ir.cfg;

/** Identifies an {@link Instr} or {@link Phi} locally within a {@link CFG}.
 *
 * <p>"Locally within" = every instruction and phi in a CFG has a different identifier, but the same
 * identifier for an instruction or phi in one CFG may refer to an entirely different instruction or
 * phi in another CFG.
 *
 * <p>A {@link Phi} is a {@link LocalNode}, so its identifier is a {@link LocalNodeId}, e.g. {@code
 * %foo}. An instruction is identified by its {@link BB} and index, e.g. {@code ^entry#5}.
 */
public sealed interface InstrOrPhiId permits PhiId, InstrPos {}
