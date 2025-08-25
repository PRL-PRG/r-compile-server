package org.prlprg.fir.analyze;

/// A static analysis on a [org.prlprg.fir.ir.cfg.CFG].
///
/// Every analysis must have a constructor annotated [AnalysisConstructor] whose arguments are the
/// [org.prlprg.fir.ir.cfg.CFG] followed by other [CfgAnalysis] which are its dependencies. Java
/// can't enforce this, but said constructor will be reflectively called by [Analyses]. This
/// constructor should run the analysis unless it's lazy or on-demand.
///
/// @see Analysis `Analysis`: a static analysis on an `Abstraction`
public interface CfgAnalysis {}
