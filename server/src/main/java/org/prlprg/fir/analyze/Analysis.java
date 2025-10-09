package org.prlprg.fir.analyze;

/// A static analysis on an [org.prlprg.fir.ir.abstraction.Abstraction].
///
/// Every analysis must have a constructor annotated [AnalysisConstructor] whose arguments are the
/// [org.prlprg.fir.ir.abstraction.Abstraction] followed by other [Analysis] which are its
/// dependencies. Java can't enforce this, but said constructor will be reflectively called by
/// [Analyses]. This constructor should run the analysis unless it's lazy or on-demand.
///
/// @see CfgAnalysis `CfgAnalysis`: a static analysis on a `CFG`
public interface Analysis {}
