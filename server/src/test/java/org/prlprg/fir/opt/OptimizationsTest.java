package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.fir.opt.Optimizations.canonicalRemoval;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizationsWithout;
import static org.prlprg.fir.opt.Optimizations.removalClosure;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.snapshot.bench.SynergyBenchmarkQuery;

class OptimizationsTest {
  private static final List<String> NAMES = Optimizations.individualOptimizationNames();

  @Test
  void withoutNamesInPipelineOrder() {
    // The one-name name is what existing snapshot directories are named after
    assertEquals("defaultWithoutUnbox", defaultOptimizationsWithout("unbox").name());
    assertEquals(
        "defaultWithoutUnboxAndUnboxPhi",
        defaultOptimizationsWithout(List.of("unboxPhi", "unbox")).name());
    assertThrows(IllegalArgumentException.class, () -> defaultOptimizationsWithout("notAnOpt"));
  }

  @Test
  void familiesAreOptimizations() {
    SynergyBenchmarkQuery.FAMILIES.forEach(family -> assertTrue(NAMES.containsAll(family)));
  }

  @Test
  void canonicalRemovalExamples() {
    // Nothing to drop, and pipeline order
    assertEquals(List.of("unbox", "unboxPhi"), canonicalRemoval(List.of("unboxPhi", "unbox")));
    // Direct
    assertEquals(
        List.of("callOwnedVersion"),
        canonicalRemoval(List.of("consumeDeadDup", "callOwnedVersion")));
    // Transitive: `elideRedundantAssumeLoad` -> `mergeAssumeLoadVar` -> `speculateAssume`
    assertEquals(
        List.of("speculateAssume"),
        canonicalRemoval(List.of("elideRedundantAssumeLoad", "speculateAssume")));
    // `copyBaseline` makes everything else change nothing
    assertEquals(
        List.of("copyBaseline"), canonicalRemoval(List.of("inline", "copyBaseline", "unbox")));
  }

  /// Over every pair and triple of names: the canonical removal removes the same, and is its own
  /// canonical removal.
  @Test
  void canonicalRemovalIsEquivalentAndIdempotent() {
    for (var a = 0; a < NAMES.size(); a++) {
      for (var b = a + 1; b < NAMES.size(); b++) {
        check(List.of(NAMES.get(a), NAMES.get(b)));
        for (var c = b + 1; c < NAMES.size(); c++) {
          check(List.of(NAMES.get(a), NAMES.get(b), NAMES.get(c)));
        }
      }
    }
  }

  private static void check(List<String> removed) {
    var canonical = canonicalRemoval(removed);
    assertTrue(removed.containsAll(canonical), () -> removed + " -> " + canonical);
    assertEquals(removalClosure(removed), removalClosure(canonical), () -> removed.toString());
    assertEquals(canonical, canonicalRemoval(canonical), () -> removed.toString());
  }
}
