package org.prlprg;

import java.util.regex.Pattern;

/// Environment variables to configure tests.
///
/// @see Config
public class TestConfig extends Config {
  private static final TestConfig INSTANCE = new TestConfig();

  /// If set, snapshot deviations from previous runs will always be allowed.
  ///
  /// This is **unset** by default.
  public static final boolean ALWAYS_ALLOW_SNAPSHOT_DEVIATIONS =
      INSTANCE.get("ALWAYS_ALLOW_SNAPSHOT_DEVIATIONS", false);

  /// If set, filters tested examples according to the regular expression (on path).
  public static final Pattern EXAMPLE_FILTER =
      Pattern.compile(INSTANCE.get("EXAMPLE_FILTER", ".*"));
}
