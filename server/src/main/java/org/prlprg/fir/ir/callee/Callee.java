package org.prlprg.fir.ir.callee;

import javax.annotation.concurrent.Immutable;

@Immutable
public sealed interface Callee permits DispatchCallee, DynamicCallee, StaticCallee {}
