package org.prlprg;

import org.prlprg.util.DirectorySource;

/**
 * Environment variables to configure tests.
 *
 * @see Config
 */
public class TestConfig extends Config {
  /**
   * Whether or not to skip or weaken slow tests.
   *
   * <p>Specifically, if set:
   *
   * <ul>
   *   <li>Some {@linkplain org.junit.jupiter.params.ParameterizedTest parameterized tests} (e.g.
   *       {@link DirectorySource}-annotated tests) will only test a subset of their cases (the
   *       exact number is specific to each test).
   * </ul>
   *
   * <p>This makes the entire test-suite faster, but may skip failing tests or test-cases.
   *
   * <p>This is <b>unset</b> by default.
   */
  public static final boolean FAST_TESTS = get("FAST_TESTS", false);
}