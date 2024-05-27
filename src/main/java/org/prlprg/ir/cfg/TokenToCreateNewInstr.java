package org.prlprg.ir.cfg;

/**
 * Token to create an {@linkplain Instr instruction}, with either an existing* or new {@linkplain
 * NodeId id}.
 *
 * <p>This class's only instances are package-private and not exposed, so that {@link
 * InstrData#make(CFG, TokenToCreateNewInstr)} can only be called within the package.
 *
 * <p>* The only way to create a new instruction with an existing ID is by replaying an {@linkplain
 * CFGEdit edit}.
 */
public sealed interface TokenToCreateNewInstr {}

record CreateInstrWithExistingId(NodeId<? extends Instr> id) implements TokenToCreateNewInstr {}

record CreateInstrWithNewId(String name) implements TokenToCreateNewInstr {}
