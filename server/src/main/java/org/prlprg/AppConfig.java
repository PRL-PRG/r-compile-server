package org.prlprg;

import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;
import org.prlprg.util.Strings;

/// Environment variables to configure the application.
///
/// @see Config
public final class AppConfig extends Config {
  public static final boolean DEBUG = get("DEBUG", false);

  /// Shell command to invoke R. **Default** is "R", pass something else to provide a custom R
  /// binary (e.g. different version than the default installed one).
  ///
  /// Note that we pass extra arguments to the command. The working directory of the command is
  /// the working directory of this running program.
  public static final String R_BIN =
      get("R_BIN", DEBUG ? "../external/R-debug/bin/R" : "../external/R/bin/R");

  /// R library paths. There are the paths that the compile server will look libraries for in. We
  /// could call `.libPaths()` in R to get the paths R knows, but we also want to support custom
  /// paths?
  public static final ArrayList<Path> R_LIBS = new ArrayList<>();

  static {
    var defaultRlibs = "~/R/x86_64-pc-linux-gnu-library/4.3/:/usr/lib/R/library";
    defaultRlibs = defaultRlibs.replaceFirst("^~", System.getProperty("user.home"));
    var r_libs = get("R_LIBS", defaultRlibs);
    R_LIBS.addAll(Arrays.stream(r_libs.split(":")).map(Path::of).toList());
  }

  /// Adds extra verification checks.
  ///
  /// **Default:**: [#AFTER_STEP].
  public static final CfgDebugLevel CFG_DEBUG_LEVEL = get("CFG_DEBUG_LEVEL", CfgDebugLevel.NONE);

  /// Maximum number of characters vectors will print in `toString` before being truncated.
  ///
  /// **Default:**: 1000
  public static final int VECTOR_TRUNCATE_SIZE = get("VECTOR_TRUNCATE_SIZE", 1000);

  /// Whether to log optimization phases/passes, and if so, how granular.
  ///
  /// **Default:**: [#NONE].
  public static final OptimizationLogLevel OPTIMIZATION_LOG_LEVEL =
      get("OPTIMIZATION_LOG_LEVEL", OptimizationLogLevel.NONE);

  /// Path or C compiler command this uses.
  ///
  /// **Default:**: "gcc"
  public static final String CC = get("CC", "gcc");

  public enum CfgDebugLevel implements Comparable<CfgDebugLevel> {
    /// No extra checks.
    NONE,
    /// Run verification after every pass.
    AFTER_STEP,
  }

  public enum OptimizationLogLevel implements Comparable<OptimizationLogLevel> {
    /// Don't log anything wrt. optimizations (excluding compiler bugs).
    NONE,
    /// Log when a closure gets optimized.
    CLOSURE,
    /// Log every optimization phase.
    PHASE,
    /// Log every optimization pass.
    PASS,
    /// Log as much as possible.
    ALL,
  }
}

/// Environment variables to configure an application.
///
/// One config contains every environment variable used everywhere in the main application:
/// [AppConfig]. Another config contains every test-exclusive environment variable:
/// `TestConfig`.
///
/// This provides a balance between having configuration variables everywhere (no structure, hard
/// to find every configuration), and over-engineered configuration libraries with features we don't
/// use or need (which can also end up with no structure and make it hard to find every
/// configuration). Every configuration variable is an environment variable, and is defined/located
/// in [AppConfig] if its used within the app, or `TestConfig` if it's only used within
/// tests.
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
    var value = System.getenv(name);
    return value != null ? Integer.parseInt(value) : defaultValue;
  }

  protected static boolean get(String name, boolean defaultValue) {
    var value = System.getenv(name);
    return value != null ? Boolean.parseBoolean(value) : defaultValue;
  }

  protected Config() {}
}
