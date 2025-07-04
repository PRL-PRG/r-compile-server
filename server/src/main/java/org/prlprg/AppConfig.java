package org.prlprg;

import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;
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
  public static final String R_BIN = get("R_BIN", "../external/R/bin/R");

  /**
   * R library paths. There are the paths that the compile server will look libraries for in. We
   * could call `.libPaths()` in R to get the paths R knows, but we also want to support custom
   * paths?
   */
  public static final ArrayList<Path> R_LIBS = new ArrayList<>();

  static {
    String defaultRlibs = "~/R/x86_64-pc-linux-gnu-library/4.3/:/usr/lib/R/library";
    defaultRlibs = defaultRlibs.replaceFirst("^~", System.getProperty("user.home"));
    String r_libs = get("R_LIBS", defaultRlibs);
    if (r_libs != null) {
      R_LIBS.addAll(Arrays.stream(r_libs.split(":")).map(Path::of).toList());
    }
  }

  /**
   * Adds extra verification checks.
   *
   * <p><b>Default:</b>: {@link CfgDebugLevel#VERIFY}.
   */
  public static final CfgDebugLevel CFG_DEBUG_LEVEL = get("CFG_DEBUG_LEVEL", CfgDebugLevel.VERIFY);

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
    /** Log as much as possible. */
    ALL,
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
