package org.prlprg;

import java.util.regex.Pattern;

/// Environment variables to configure tests.
///
/// @see Config
public class TestConfig extends Config {
  private static final TestConfig INSTANCE = new TestConfig();

  /// A regex. If set, snapshot deviations from previous runs whose [query name][
  /// org.prlprg.snapshots.Query#name] matches will always be allowed. Additionally, corrupted
  /// snapshots will be ignored (whereas normally they fail tests).
  ///
  /// This is **unset** by default.
  public static final Pattern IGNORE_SNAPSHOTS =
      Pattern.compile(INSTANCE.get("IGNORE_SNAPSHOTS", "$^"));

  /// A regex. If set, filters tested examples according to the regular expression (on path).
  public static final Pattern EXAMPLE_FILTER =
      Pattern.compile(INSTANCE.get("EXAMPLE_FILTER", ".*"));
}
