package org.prlprg;

/// Environment variables to configure tests.
///
/// @see Config
public class TestConfig extends Config {
  /// Whether or not to skip or weaken slow tests.
  ///
  /// Specifically, if set:
  ///
  ///     - Some {@linkplain org.junit.jupiter.params.ParameterizedTest parameterized tests} (e.g.
  ///     [DirectorySource]-annotated tests) will only test a subset of their cases (the
  ///     exact number is specific to each test).
  ///
  ///
  /// This makes the entire test-suite faster, but may skip failing tests or test-cases.
  ///
  /// This is **set** by default.
  public static final boolean FAST_TESTS = get("FAST_TESTS", true);

  /// If set, snapshots will not be read, only written.
  ///
  /// This is **unset** by default.
  public static final boolean OVERRIDE_SNAPSHOTS = get("OVERRIDE_SNAPSHOTS", false);

  /// Whether to enable additional logging.
  ///
  /// Mostly this adds logging to test successes; if there is a test failure we usually want as
  /// much information logged as possible. But some failures may have verbose logging if they
  // usually
  /// occur in large groups.
  ///
  /// Logging can't always be verbose because it slows down test execution and makes GitHub action
  /// logs not load properly.
  public static final boolean VERBOSE = get("VERBOSE", false);
}
