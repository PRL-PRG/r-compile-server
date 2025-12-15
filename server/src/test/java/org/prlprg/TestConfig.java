package org.prlprg;

import java.util.regex.Pattern;

/// Environment variables to configure tests.
///
/// @see Config
public class TestConfig extends Config {
  private static final TestConfig INSTANCE = new TestConfig();

  /// If set, snapshots will not be read, only written.
  ///
  /// This is **unset** by default.
  public static final boolean OVERRIDE_SNAPSHOTS = INSTANCE.get("OVERRIDE_SNAPSHOTS", false);

  /// If set, filters tested examples according to the regular expression (on path).
  public static final Pattern EXAMPLE_FILTER =
      Pattern.compile(INSTANCE.get("EXAMPLE_FILTER", ".*"));
}
