package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

/** Either {@link ListSXP} (AST identifier) or {@link LangSXP} (AST call). */
@Immutable
public sealed interface AbstractPairListSXP extends ValueSXP
    permits ListSXP, LangSXP, DotsListSXP {}
