package org.prlprg.ir.cfg.builder;

import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData;

/**
 * Constructs a {@link Stmt} to be inserted in the middle of a {@link BB}.
 *
 * @param <I> The type of the statement.
 */
public record StmtInsertion<I extends Stmt>(StmtData<I> data) implements BBInsertion<I> {}
