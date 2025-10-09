package org.prlprg.fir.analyze;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/// Every [Analysis] and [CfgAnalysis] must have a constructor annotated with this, and the
/// constructor must take an [org.prlprg.fir.ir.abstraction.Abstraction] or
/// [org.prlprg.fir.ir.cfg.CFG] respectively, followed by other analyses which are its
/// dependencies.
///
/// @see Analysis
/// @see CfgAnalysis
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.CONSTRUCTOR)
public @interface AnalysisConstructor {}
