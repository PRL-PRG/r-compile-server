package org.prlprg.ir.cfg.builder;

import org.prlprg.ir.cfg.InstrOrPhi;

/**
 * Constructs an {@link InstrOrPhi} to be inserted in the middle of the BB.
 *
 * <p>Depending on the type of instruction and whether it's being inserted at the beginning or end,
 * this may split the BB. Specifically, a phi not inserted as the first instruction will create a
 * new BB with all phis and statements which come before it, and a jump not inserted as the last
 * instruction (with jump unset) will create a new BB with all statements and optional jump which
 * come after it.
 *
 * @param <I> The type of instruction to insert.
 */
@SuppressWarnings("unused")
public sealed interface BBInsertion<I extends InstrOrPhi>
    permits JumpInsertion, PhiInsertion, StmtInsertion {}
