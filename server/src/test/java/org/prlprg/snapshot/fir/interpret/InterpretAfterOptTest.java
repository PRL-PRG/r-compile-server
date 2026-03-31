package org.prlprg.snapshot.fir.interpret;

import org.prlprg.fir.opt.Optimization;
import org.prlprg.snapshot.fir.opt.OptimizationTestClass;

@OptimizationTestClass
public record InterpretAfterOptTest(@Override Optimization optimization)
    implements InterpretAfterGenOptTest {}
