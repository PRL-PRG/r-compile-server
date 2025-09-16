package org.prlprg.fir.analyze;

import com.google.common.collect.ImmutableSet;
import java.util.Arrays;

/// A collection of [Analysis] and [CfgAnalysis] classes.
public record AnalysisTypes(
    ImmutableSet<Class<? extends Analysis>> abstraction,
    ImmutableSet<Class<? extends CfgAnalysis>> cfg) {
  @SuppressWarnings("unchecked")
  public AnalysisTypes(Class<?>... analysisClasses) {
    this(
        Arrays.stream(analysisClasses)
            .filter(Analysis.class::isAssignableFrom)
            .map(a -> (Class<? extends Analysis>) a)
            .collect(ImmutableSet.toImmutableSet()),
        Arrays.stream(analysisClasses)
            .filter(CfgAnalysis.class::isAssignableFrom)
            .map(a -> (Class<? extends CfgAnalysis>) a)
            .collect(ImmutableSet.toImmutableSet()));

    if (Arrays.stream(analysisClasses)
        .anyMatch(
            a -> !Analysis.class.isAssignableFrom(a) && !CfgAnalysis.class.isAssignableFrom(a))) {
      throw new IllegalArgumentException(
          "All types must inherit either `Analysis` or `CfgAnalysis`");
    }
  }

  public AnalysisTypes union(AnalysisTypes other) {
    return new AnalysisTypes(
        ImmutableSet.<Class<? extends Analysis>>builder()
            .addAll(this.abstraction)
            .addAll(other.abstraction)
            .build(),
        ImmutableSet.<Class<? extends CfgAnalysis>>builder()
            .addAll(this.cfg)
            .addAll(other.cfg)
            .build());
  }
}
