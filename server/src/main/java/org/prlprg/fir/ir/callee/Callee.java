package org.prlprg.fir.ir.callee;

public sealed interface Callee permits DispatchCallee, DynamicCallee, StaticCallee {}
