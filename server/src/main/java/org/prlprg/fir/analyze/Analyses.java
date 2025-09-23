package org.prlprg.fir.analyze;

import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Set;
import java.util.function.Function;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
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

  private final AnalysisTypeMap<Analysis> abstractionAnalysisTypes;
  private final AnalysisTypeMap<CfgAnalysis> cfgAnalysisTypes;

  private final Analysis[] abstractionAnalyses;
  private final Map<CFG, CfgAnalysis[]> cfgAnalyses = new HashMap<>();

  public Analyses(Abstraction target, Class<?>... analysisClasses) {
    this(target, new AnalysisTypes(analysisClasses));
  }

  public Analyses(Abstraction target, AnalysisTypes analysisTypes) {
    this.target = target;

    abstractionAnalysisTypes = new AnalysisTypeMap<>(Analysis.class, analysisTypes.abstraction());
    cfgAnalysisTypes = new AnalysisTypeMap<>(CfgAnalysis.class, analysisTypes.cfg());

    abstractionAnalyses = new Analysis[abstractionAnalysisTypes.size()];
  }

  /// Run all abstraction analyses.
  public void forceAbstractionAnalyses() {
    for (var analysisClass : abstractionAnalysisTypes.inherent) {
      get(analysisClass);
    }
  }

  /// Clear all analyses so they must be recomputed.
  public void evict() {
    Arrays.fill(abstractionAnalyses, null);
    cfgAnalyses.clear();
  }

  /// @throws NoSuchElementException If `analysisType` wasn't an element of `analysisTypes` in
  /// the constructor.
  public <T extends Analysis> T get(Class<T> analysisType) {
    return get(analysisType, false);
  }

  @SuppressWarnings("unchecked")
  private <T extends Analysis> T get(Class<T> analysisType, boolean allowDependencies) {
    var info = abstractionAnalysisTypes.get(analysisType, allowDependencies);
    if (info == null) {
      throw new NoSuchElementException(
          "Analysis " + analysisType.getSimpleName() + " not in this `Analysis`");
    }

    if (abstractionAnalyses[info.index] == null) {
      abstractionAnalyses[info.index] =
          construct(target, t -> get(t, true), Analysis.class, info.analysisConstructor);
    }

    // Cast is safe because forall `T`,
    // `analysisTypes.get(T.class).analysisConstructor.newInstance(...) instanceof T`.
    return (T) abstractionAnalyses[info.index];
  }

  /// @throws NoSuchElementException If `cfg` isn't in the `Abstraction` provided to the
  /// constructor.
  /// @throws NoSuchElementException If `analysisType` wasn't an element of `analysisTypes` in
  /// the constructor.
  public <T extends CfgAnalysis> T get(CFG cfg, Class<T> analysisType) {
    return get(cfg, analysisType, false);
  }

  @SuppressWarnings("unchecked")
  private <T extends CfgAnalysis> T get(CFG cfg, Class<T> analysisType, boolean allowDependencies) {
    if (cfg.scope() != target) {
      throw new NoSuchElementException("CFG not in Abstraction");
    }
    var cfgAnalyses =
        this.cfgAnalyses.computeIfAbsent(cfg, _ -> new CfgAnalysis[cfgAnalysisTypes.size()]);

    var info = cfgAnalysisTypes.get(analysisType, allowDependencies);
    if (info == null) {
      throw new NoSuchElementException(
          "Analysis " + analysisType.getSimpleName() + " not in this `Analysis`");
    }

    if (cfgAnalyses[info.index] == null) {
      cfgAnalyses[info.index] =
          construct(cfg, t -> get(cfg, t, true), CfgAnalysis.class, info.analysisConstructor);
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

  private static class AnalysisTypeMap<A> {
    private final Map<Class<? extends A>, AnalysisInfo<A>> map = new HashMap<>();
    private final Set<Class<? extends A>> inherent;

    AnalysisTypeMap(Class<A> superclass, Collection<? extends Class<? extends A>> analysisTypes) {
      inherent = Set.copyOf(analysisTypes);

      var queue = new ArrayList<>(inherent);
      while (!queue.isEmpty()) {
        var next = queue.removeLast();
        if (map.containsKey(next)) {
          continue;
        }

        var info = new AnalysisInfo<>(superclass, next, map.size());
        map.put(next, info);

        info.streamDependencyTypes().forEach(queue::add);
      }
    }

    @Nullable AnalysisInfo<A> get(Class<? extends A> analysisType, boolean allowDependencies) {
      return !allowDependencies && !inherent.contains(analysisType) ? null : map.get(analysisType);
    }

    int size() {
      return map.size();
    }
  }

  private static class AnalysisInfo<A> {
    private final int index;
    private final Constructor<?> analysisConstructor;

    AnalysisInfo(Class<A> superclass, Class<? extends A> analysis, int index) {
      this.index = index;

      analysisConstructor =
          Arrays.stream(analysis.getDeclaredConstructors())
              .filter(c -> c.isAnnotationPresent(AnalysisConstructor.class))
              .collect(
                  Streams.oneOrThrow(
                      () ->
                          new IllegalArgumentException(
                              "Analysis must have exactly one `@AnalysisConstructor`: "
                                  + analysis.getSimpleName())));

      checkConstructorParameters(superclass, analysis);
    }

    private void checkConstructorParameters(Class<A> superclass, Class<? extends A> analysis) {
      var constructorParameters = analysisConstructor.getParameters();
      if (superclass == Analysis.class) {
        if (constructorParameters.length == 0
            || constructorParameters[0].getType() != Abstraction.class) {
          throw new IllegalArgumentException(
              "`@AnalysisConstructor` in `Analysis`'s first parameter must be an `Abstraction`: of "
                  + analysis.getSimpleName());
        }
      } else if (superclass == CfgAnalysis.class) {
        if (constructorParameters.length == 0 || constructorParameters[0].getType() != CFG.class) {
          throw new IllegalArgumentException(
              "`@AnalysisConstructor` in `CfgAnalysis`'s first parameter must be an `CFG`: of "
                  + analysis.getSimpleName());
        }
      } else {
        throw new IllegalArgumentException(
            "`@AnalysisConstructor` can only be applied to `Analysis` or `CfgAnalysis`, not "
                + superclass.getSimpleName());
      }
      for (int i = 1; i < constructorParameters.length; i++) {
        if (!superclass.isAssignableFrom(constructorParameters[i].getType())) {
          throw new IllegalArgumentException(
              "`@AnalysisConstructor` in `"
                  + superclass.getSimpleName()
                  + "`'s subsequent parameters must be subclasses of `Analysis`: of "
                  + analysis.getSimpleName()
                  + " index "
                  + i);
        }
      }
    }

    @SuppressWarnings("unchecked")
    Stream<Class<? extends A>> streamDependencyTypes() {
      return Arrays.stream(analysisConstructor.getParameters())
          .skip(1)
          .map(t -> (Class<? extends A>) t.getType());
    }
  }
}
