package org.prlprg.fir.callee;

public sealed interface Callee permits DispatchCallee, DynamicCallee, InlineCallee, StaticCallee {}
