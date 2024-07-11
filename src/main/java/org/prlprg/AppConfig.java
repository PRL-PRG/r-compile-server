package org.prlprg;

import org.prlprg.ir.closure.CodeObject;
import org.prlprg.util.Strings;

/**
 * Environment variables to configure the application.
 *
 * @see Config
 */
public final class AppConfig extends Config {
  /**
   * Shell command to invoke R. <b>Default</b> is "R", pass something else to provide a custom R
   * binary (e.g. different version than the default installed one).
   *
   * <p>Note that we pass extra arguments to the command. The working directory of the command is
   * the working directory of this running program.
   */
  public static final String R_BIN = get("R_BIN", "R");

  /**
   * Adds extra verification checks.
   *
   * <p><b>Default:</b>: {@link CfgDebugLevel#VERIFY}.
   */
  public static final CfgDebugLevel CFG_DEBUG_LEVEL = get("CFG_DEBUG_LEVEL", CfgDebugLevel.VERIFY);

  /**
   * Whether to verify phi inputs' incoming basic block when they are added.
   *
   * <p>They are always verified during {@linkplain org.prlprg.ir.cfg.CFG#verify()} verification
   *
   * <p><b>Default:</b>: true
   */
  public static final boolean EAGERLY_VERIFY_PHI_INPUTS = get("EAGERLY_VERIFY_PHI_INPUTS", true);

  /**
   * Maximum number of characters vectors will print in `toString` before being truncated.
   *
   * <p><b>Default:</b>: 1000
   */
  public static final int VECTOR_TRUNCATE_SIZE = get("VECTOR_TRUNCATE_SIZE", 1000);

  /**
   * Whether to log optimization phases/passes, and if so, how granular.
   *
   * <p><b>Default:</b>: {@link OptimizationLogLevel#NONE}.
   */
  public static final OptimizationLogLevel OPTIMIZATION_LOG_LEVEL =
      get("OPTIMIZATION_LOG_LEVEL", OptimizationLogLevel.NONE);

  /**
   * How to log RDS reads and writes. Useful for diagnosing misalignments between input and output
   * streams.
   *
   * <p><b>Default:</b>: {@link RDSLogLevel#NONE}
   */
  public static final RDSLogLevel RDS_LOG_LEVEL = get("RDS_LOG_LEVEL", RDSLogLevel.NONE);

  public enum CfgDebugLevel {
    /** No extra checks. */
    NONE,
    /** Run verification. */
    VERIFY,
    /** Run verification and track stack traces of removed nodes and blocks. */
    VERIFY_AND_TRACK;

    public boolean trackStack() {
      return this == VERIFY_AND_TRACK;
    }
  }

  public enum OptimizationLogLevel implements Comparable<OptimizationLogLevel> {
    /** Don't log anything wrt. optimizations (excluding compiler bugs). */
    NONE,
    /** Log when a closure gets optimized. */
    CLOSURE,
    /** Log every optimization phase. */
    PHASE,
    /** Log every optimization pass. */
    PASS,
    /** Log every optimization pass <i>and</i> every inner {@link CodeObject} it's applied to. */
    ALL,
  }

  public enum RDSLogLevel implements Comparable<RDSLogLevel> {
    /** Don't log any RDS input or output */
    NONE,
    /** Only log RDS input and output directly from tests */
    TEST,
    /**
     * Log general RDS input and output, such as from base initialization (WARNING: logging general
     * output may cause very large files to be generated, or even lead to out-of-memory errors)
     */
    GENERAL,
  }
}

/**
 * Environment variables to configure an application.
 *
 * <p>One config contains every environment variable used everywhere in the main application: {@link
 * AppConfig}. Another config contains every test-exclusive environment variable: {@code
 * TestConfig}.
 *
 * <p>This provides a balance between having configuration variables everywhere (no structure, hard
 * to find every configuration), and over-engineered configuration libraries with features we don't
 * use or need (which can also end up with no structure and make it hard to find every
 * configuration). Every configuration variable is an environment variable, and is defined/located
 * in {@link AppConfig} if its used within the app, or {@code TestConfig} if it's only used within
 * tests.
 */
abstract class Config {
  protected static <E extends Enum<E>> E get(String name, E defaultValue) {
    String value = System.getenv(name);
    if (value == null) {
      return defaultValue;
    }

    var enumClass = defaultValue.getDeclaringClass();
    try {
      return Enum.valueOf(enumClass, value);
    } catch (IllegalArgumentException e) {
      throw new IllegalArgumentException(
          "Invalid value for "
              + name
              + ": "
              + value
              + ". Expected one of: "
              + Strings.join(", ", Enum::name, enumClass.getEnumConstants()));
    }
  }

  protected static String get(String name, String defaultValue) {
    return System.getenv().getOrDefault(name, defaultValue);
  }

  protected static int get(String name, int defaultValue) {
    String value = System.getenv(name);
    return value != null ? Integer.parseInt(value) : defaultValue;
  }

  protected static boolean get(String name, boolean defaultValue) {
    String value = System.getenv(name);
    return value != null ? Boolean.parseBoolean(value) : defaultValue;
  }

  protected Config() {}
}
