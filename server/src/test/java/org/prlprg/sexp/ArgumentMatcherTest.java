package org.prlprg.sexp;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

import java.util.List;
import java.util.Map;
import org.junit.jupiter.api.Test;

class ArgumentMatcherTest {
  @Test
  void duplicateExactMatchesThrow() {
    var formals = List.of("x");
    var actuals = List.of("x", "x");

    assertThrows(
        ArgumentMatcher.MatchException.class,
        () -> ArgumentMatcher.matchArgumentNames(formals, actuals));
  }

  @Test
  void manualExampleAllowsExactMatchBeforePartialMatching() {
    var formals = List.of("fumble", "fooey");
    var actuals = List.of("f", "fooey");

    var results = ArgumentMatcher.matchArgumentNames(formals, actuals);

    assertEquals(Map.of("fumble", 0, "fooey", 1), results.arguments());
    assertEquals(List.of(), results.dddNames());
  }

  @Test
  void manualExampleRejectsAmbiguousPartialMatch() {
    var formals = List.of("fumble", "fooey");
    var actuals = List.of("f", "fo");

    assertThrows(
        ArgumentMatcher.MatchException.class,
        () -> ArgumentMatcher.matchArgumentNames(formals, actuals));
  }

  @Test
  void partialMatchingStopsBeforeDots() {
    var formals = List.of("alpha", "...", "fooey");
    var actuals = List.of("alpha", "foo");

    var results = ArgumentMatcher.matchArgumentNames(formals, actuals);

    assertEquals(Map.of("alpha", 0), results.arguments());
    assertEquals(List.of("foo"), results.dddNames());
    assertEquals(List.of(1), results.dddIndices());
  }

  @Test
  void positionalMatchingBindsUnnamedSuppliedArguments() {
    var formals = List.of("alpha", "beta");
    var actuals = List.of("", "");

    var results = ArgumentMatcher.matchArgumentNames(formals, actuals);

    assertEquals(Map.of("alpha", 0, "beta", 1), results.arguments());
  }

  @Test
  void dotsCollectsAllRemainingArguments() {
    var formals = List.of("alpha", "...");
    var actuals = List.of("alpha", "named", "");

    var results = ArgumentMatcher.matchArgumentNames(formals, actuals);

    assertEquals(Map.of("alpha", 0), results.arguments());
    assertEquals(List.of("named", ""), results.dddNames());
    assertEquals(List.of(1, 2), results.dddIndices());
  }

  @Test
  void unmatchedArgumentsWithoutDotsThrow() {
    var formals = List.of("alpha");
    var actuals = List.of("", "");

    assertThrows(
        ArgumentMatcher.MatchException.class,
        () -> ArgumentMatcher.matchArgumentNames(formals, actuals));
  }
}
