package org.prlprg.fir.interpret;

import org.prlprg.bc2fir.BC2FirCompilerTest;
import org.prlprg.fir.ir.FirParseTest;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTestClass;
import org.prlprg.snapshots.order.OrderAfter;

@OrderAfter(BC2FirCompilerTest.class)
@OrderAfter(FirParseTest.class)
@OrderAfter(InterpretTest.class)
@OptimizationTestClass
public record InterpretAfterOptTest(@Override Optimization optimization)
    implements InterpretAfterGenOptTest {}
