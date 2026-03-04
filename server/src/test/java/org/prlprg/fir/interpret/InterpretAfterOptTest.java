package org.prlprg.fir.interpret;

import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTestClass;

@OptimizationTestClass
public record InterpretAfterOptTest(@Override Optimization optimization)
    implements InterpretAfterGenOptTest {}
