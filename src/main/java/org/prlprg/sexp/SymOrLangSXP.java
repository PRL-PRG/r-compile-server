package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface SymOrLangSXP extends SEXP permits SymSXP, LangSXP {}
