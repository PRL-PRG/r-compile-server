package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

/**
 * Either {@link SymSXP} (AST identifier) or {@link LangSXP} (AST call). Note that AST nodes can
 * also be simple-scalars.
 */
@Immutable
public sealed interface SymOrLangSXP extends SEXP permits SymSXP, LangSXP {}
