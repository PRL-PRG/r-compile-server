package org.prlprg.snapshot.bench;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizationsWithVersionLimit;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizationsWithout;

import java.util.LinkedHashMap;
import java.util.List;
import java.util.stream.Stream;
import org.prlprg.examples.Example;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.gen2c.EvalQuery;

/// Benchmark the example compiled by the default optimizations, and without one key category of
/// them, one query per category.
///
/// The rows are [VariantBenchmark#benchmark]'s, with one variant: the category's, labeled
/// `label`. Before it's benchmarked, the variant is evaluated like the eval tests do
/// ([EvalQuery]), so a wrong benchmark value fails the query instead of being timed.
///
/// @param label The category's name, and its row's label.
public record KeyBenchmarkQuery(String label, Optimization optimization)
    implements BenchmarkOutputQuery {
  public static final KeyBenchmarkQuery COPY_ELISION =
      new KeyBenchmarkQuery(
          "copyElision",
          defaultOptimizationsWithout(
              Stream.concat(
                      // Use and create owned and borrowed parameters, and remove the `dup`s
                      OwnershipBenchmarkQuery.OWNERSHIP.stream(),
                      // Owns a loop's vector, so a write in the loop doesn't copy it
                      Stream.of("ownPhiWeb"))
                  .toList()));
  public static final KeyBenchmarkQuery VARIABLE_ELISION =
      new KeyBenchmarkQuery(
          "variableElision",
          defaultOptimizationsWithout(
              List.of(
                  // Marks the environments that reflection doesn't see, which the others need
                  "specializeNonReflectiveEnv",
                  // Removes the stores that nothing loads
                  "elideDeadStore",
                  // Removes the environment that has no stores
                  "elideEnv",
                  // Replaces local variables by registers (mem2reg)
                  "promoteStaticallyKnownVariables",
                  // Replaces the loads whose value is known by registers and constants
                  "resolveLoad")));
  public static final KeyBenchmarkQuery PROMISE_INLINING =
      new KeyBenchmarkQuery(
          "promiseInlining",
          defaultOptimizationsWithout(
              List.of(
                  // Removes the promises that are never forced
                  "elideUnforcedPromise",
                  // Forces a promise argument at the call site, and passes its value
                  "strictifyPromise",
                  // Removes the trivial promises that a phi merges
                  "strictifyPhi",
                  // Defers pure instructions into the promise that uses them
                  "deferIntoPromise")));
  public static final KeyBenchmarkQuery SCALAR_UNBOXING =
      new KeyBenchmarkQuery(
          "scalarUnboxing",
          defaultOptimizationsWithout(
              List.of(
                  // Unboxes the scalar arguments and return values of calls
                  "unbox",
                  // Unboxes the scalar phis
                  "unboxPhi",
                  // Removes the `box`/`unbox` pairs
                  "elideRedundantBoxUnbox",
                  // Hoists `unbox` and defers `box`, so that they meet and cancel
                  "schedulePure")));
  /// Each function has only one version besides the baseline (see
  /// [org.prlprg.fir.opt.Optimizations#defaultOptimizationsWithVersionLimit(int)]).
  public static final KeyBenchmarkQuery CONTEXTUAL_DISPATCH =
      new KeyBenchmarkQuery("contextualDispatch", defaultOptimizationsWithVersionLimit(2));

  @Override
  public String name() {
    return "snapshot/bench/key/" + label;
  }

  @Override
  public BenchmarkOutput compute(Example example, SnapshotStore store) {
    store.verify(example, new EvalQuery(VariantBenchmark.fir2c(optimization)));

    var optimizations = new LinkedHashMap<String, Optimization>();
    optimizations.put(label, optimization);
    return VariantBenchmark.benchmark(example, store, optimizations);
  }
}
