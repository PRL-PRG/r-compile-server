package org.prlprg.fir.analyze;

import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.function.Function;
import java.util.stream.Collectors;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.util.Pair;
import org.prlprg.util.Streams;

/// A group of analyses to be shared between many optimizations.
///
/// The analysis contained are [Analysis] and [CfgAnalysis]. The analyses are for a specific
/// [Abstraction]; [CfgAnalysis] will be lazily constructed for each [CFG] within. The analyses
/// aren't for inline callees and attempting to get a [CfgAnalysis] for a [CFG] in one throws
/// [IllegalArgumentException].
///
/// Each analysis is lazy, in that if no optimizations use it, it won't be constructed. Some
/// analyses run entirely when constructed, others may be further lazy or on-demand, running only
/// when queried.
public class Analyses {
  private final Abstraction target;
  private final Map<Class<? extends Analysis>, AnalysisInfo> abstractionAnalysisTypes;
  private final Map<Class<? extends CfgAnalysis>, AnalysisInfo> cfgAnalysisTypes;

  private final Analysis[] abstractionAnalyses;
  private final Map<CFG, CfgAnalysis[]> cfgAnalyses = new HashMap<>();

  public Analyses(Abstraction target, AnalysisTypes analysisTypes) {
    this.target = target;
    this.abstractionAnalysisTypes =
        analysisTypes.abstraction().stream()
            .gather(Streams.mapWithIndex(Pair::new))
            .collect(Collectors.toMap(Pair::first, p -> new AnalysisInfo(p.first(), p.second())));
    this.cfgAnalysisTypes =
        analysisTypes.cfg().stream()
            .gather(Streams.mapWithIndex(Pair::new))
            .collect(Collectors.toMap(Pair::first, p -> new AnalysisInfo(p.first(), p.second())));

    for (var entry : abstractionAnalysisTypes.entrySet()) {
      var type = entry.getKey();
      var info = entry.getValue();

      info.checkDependenciesAreInContext(type, abstractionAnalysisTypes);
    }
    for (var entry : cfgAnalysisTypes.entrySet()) {
      var type = entry.getKey();
      var info = entry.getValue();

      info.checkDependenciesAreInContext(type, cfgAnalysisTypes);
    }

    abstractionAnalyses = new Analysis[abstractionAnalysisTypes.size()];
  }

  /// @throws NoSuchElementException If `analysisType` wasn't an element of `analysisTypes` in
  /// the constructor.
  @SuppressWarnings("unchecked")
  public <T extends Analysis> T get(Class<T> analysisType) {
    var info = abstractionAnalysisTypes.get(analysisType);
    if (info == null) {
      throw new NoSuchElementException(
          "Analysis " + analysisType.getSimpleName() + " not in this `Analysis`");
    }

    if (abstractionAnalyses[info.index] == null) {
      abstractionAnalyses[info.index] =
          construct(target, this::get, Analysis.class, info.analysisConstructor);
    }

    // Cast is safe because forall `T`,
    // `analysisTypes.get(T.class).analysisConstructor.newInstance(...) instanceof T`.
    return (T) abstractionAnalyses[info.index];
  }

  /// @throws NoSuchElementException If `cfg` isn't in the `Abstraction` provided to the
  /// constructor.
  /// @throws NoSuchElementException If `analysisType` wasn't an element of `analysisTypes` in
  /// the constructor.
  @SuppressWarnings("unchecked")
  public <T extends CfgAnalysis> T get(CFG cfg, Class<T> analysisType) {
    if (cfg.scope() != target) {
      throw new NoSuchElementException("CFG not in Abstraction");
    }
    var cfgAnalyses =
        this.cfgAnalyses.computeIfAbsent(cfg, _ -> new CfgAnalysis[cfgAnalysisTypes.size()]);

    var info = cfgAnalysisTypes.get(analysisType);
    if (info == null) {
      throw new NoSuchElementException(
          "Analysis " + analysisType.getSimpleName() + " not in this `Analysis`");
    }

    if (cfgAnalyses[info.index] == null) {
      cfgAnalyses[info.index] =
          construct(cfg, t -> get(cfg, t), CfgAnalysis.class, info.analysisConstructor);
    }

    // Cast is safe because forall `T`,
    // `analysisTypes.get(T.class).analysisConstructor.newInstance(...) instanceof T`.
    return (T) cfgAnalyses[info.index];
  }

  private <T> T construct(
      Object target,
      Function<Class<? extends T>, T> getDependency,
      Class<T> analysisInterface,
      Constructor<?> constructor) {
    var parameters = constructor.getParameters();
    var arguments = new Object[parameters.length];

    arguments[0] = target;
    for (int i = 1; i < parameters.length; i++) {
      var paramType = parameters[i].getType().asSubclass(analysisInterface);
      arguments[i] = getDependency.apply(paramType);
    }

    try {
      return analysisInterface.cast(constructor.newInstance(arguments));
    } catch (InvocationTargetException | InstantiationException | IllegalAccessException e) {
      throw new RuntimeException(e);
    }
  }

  private record AnalysisInfo(int index, Constructor<?> analysisConstructor) {
    AnalysisInfo(Class<?> analysis, int index) {
      this(
          index,
          Arrays.stream(analysis.getDeclaredConstructors())
              .filter(c -> c.isAnnotationPresent(AnalysisConstructor.class))
              .collect(
                  Streams.oneOrThrow(
                      () ->
                          new IllegalArgumentException(
                              "Analysis must have exactly one `@AnalysisConstructor`: "
                                  + analysis.getSimpleName()))));

      var constructorParameters = analysisConstructor.getParameters();
      if (Analysis.class.isAssignableFrom(analysis)) {
        if (constructorParameters.length == 0
            || constructorParameters[0].getType() != Abstraction.class) {
          throw new IllegalArgumentException(
              "`@AnalysisConstructor` in `Analysis`'s first parameter must be an `Abstraction`: of "
                  + analysis.getSimpleName());
        }
        for (int i = 1; i < constructorParameters.length; i++) {
          if (!Analysis.class.isAssignableFrom(constructorParameters[i].getType())) {
            throw new IllegalArgumentException(
                "`@AnalysisConstructor` in `Analysis`'s subsequent parameters must be subclasses of `Analysis`: of "
                    + analysis.getSimpleName()
                    + " index "
                    + i);
          }
        }
      } else if (CfgAnalysis.class.isAssignableFrom(analysis)) {
        if (constructorParameters.length == 0 || constructorParameters[0].getType() != CFG.class) {
          throw new IllegalArgumentException(
              "`@AnalysisConstructor` in `CfgAnalysis`'s first parameter must be an `CFG`: of "
                  + analysis.getSimpleName());
        }
        for (int i = 1; i < constructorParameters.length; i++) {
          if (!CfgAnalysis.class.isAssignableFrom(constructorParameters[i].getType())) {
            throw new IllegalArgumentException(
                "`@AnalysisConstructor` in `CfgAnalysis`'s subsequent parameters must be subclasses of `CfgAnalysis`: of "
                    + analysis.getSimpleName()
                    + " index "
                    + i);
          }
        }
      } else {
        throw new IllegalArgumentException(
            "`@AnalysisConstructor` can only be applied to `Analysis` or `CfgAnalysis`, not "
                + analysis.getSimpleName());
      }
    }

    /// REACH: Also check cyclic dependencies (currently they'll hang [Analyses#get(Class)]).
    void checkDependenciesAreInContext(
        Class<?> analysisType, Map<? extends Class<?>, AnalysisInfo> analysisTypes) {
      var constructorParameters = analysisConstructor.getParameters();
      for (int i = 1; i < constructorParameters.length; i++) {
        var paramType = constructorParameters[i].getType();
        if (!analysisTypes.containsKey(paramType)) {
          throw new IllegalArgumentException(
              "`@AnalysisConstructor` in `Analysis` "
                  + analysisType.getSimpleName()
                  + " depends on "
                  + paramType.getSimpleName()
                  + ", which wasn't provided to `Analyses`");
        }
      }
    }
  }
}
