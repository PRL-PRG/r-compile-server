package org.prlprg.ir.analysis.scope;

import org.prlprg.ir.analysis.scope.AbstractInterpretation.AnalysisDebugLevel;

/**
 * Configure the "strength" of the scope analysis.
 *
 * <p>More strength = more precision, but more time and memory.
 *
 * <p>TODO: Make configurable via environment variables.
 */
public record ScopeAnalysisConfig(
    int maxDepth,
    int maxSize,
    int maxPromSize,
    int maxResults,
    int maxNumSubAnalyses,
    AnalysisDebugLevel debugLevel) {

  /** The default config, if no environment variables are set. */
  public static final ScopeAnalysisConfig DEFAULT =
      new ScopeAnalysisConfig(2, 120, 14, 800, 10, AnalysisDebugLevel.INSTRUCTION);
}
