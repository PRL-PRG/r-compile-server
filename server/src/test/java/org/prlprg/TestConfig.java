package org.prlprg;

import java.nio.file.Path;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.CFGPirTests;
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
  public static final boolean FAST_TESTS = get("FAST_TESTS", true);

  /**
   * Whether to enable additional logging.
   *
   * <p>Mostly this adds logging to test successes; if there is a test failure we usually want as
   * much information logged as possible. But some failures may have verbose logging if they usually
   * occur in large groups.
   *
   * <p>Logging can't always be verbose because it slows down test execution and makes GitHub action
   * logs not load properly.
   */
  public static final boolean VERBOSE = get("VERBOSE", false);

  /**
   * Whether to auto-delete tests in {@link CFGPirTests} that fail {@link
   * CFGPirTests#testPirIsParseableAndPrintableWithoutError(Path)
   * testPirIsParseableAndPrintableWithoutError}.
   *
   * <p>{@link CFGPirTests} tests various parts of the IR control-flow-graph data-structure ({@link
   * CFG}), by parsing them from PIR control-flow-graphs printed with {@code PrintFinalPir}.
   * However, some of these PIR control-flow-graph prints are ambiguous, because PIR prints aren't
   * designed to be re-parsed, so certain errors encountered from parsing them are expected.
   *
   * <p>That being said, we don't expect the set of tests to get these types of errors to be
   * constant (if new tests start getting the errors, that signals a problem).
   *
   * <p>The way this flag works is, you insert a lot of PIR prints into {@code
   * src/test/resources/org/prlprg/ir/cfg/pir-prints}, and then run with this flag set with a branch
   * that you know works. All of the ambiguous tests are deleted, and the rest are kept. Then in
   * later changes, you run with the flag unset, so that you notice in case new errors are
   * unexpectedly encountered, and so that the test results aren't cluttered with tests that
   * ultimately got skipped.
   */
  public static final boolean EXPECT_AND_DELETE_SOME_PIR_TESTS =
      get("EXPECT_AND_DELETE_SOME_PIR_TESTS", false);
}
