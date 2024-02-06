package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface StrOrRegSymSXP extends SEXP permits StrSXP, RegSymSXP {}
