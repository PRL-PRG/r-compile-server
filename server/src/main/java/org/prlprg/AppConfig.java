package org.prlprg;

import java.io.FileInputStream;
import java.io.IOException;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Properties;
import org.jspecify.annotations.Nullable;
import org.prlprg.util.Files;
import org.prlprg.util.Strings;

/// Environment variables to configure the application.
///
/// @see Config
public final class AppConfig extends Config {
  private static final AppConfig INSTANCE = new AppConfig();

  public static final boolean DEBUG = INSTANCE.get("DEBUG", false);

  /// Shell command to invoke R. **Default** is "R", pass something else to provide a custom R
  /// binary (e.g. different version than the default installed one).
  ///
  /// Note that we pass extra arguments to the command. The working directory of the command is
  /// the working directory of this running program.
  public static final String R_BIN =
      INSTANCE.get("R_BIN", DEBUG ? "../external/R-debug/bin/R" : "../external/R/bin/R");

  /// R library paths. There are the paths that the compile server will look libraries for in. We
  /// could call `.libPaths()` in R to get the paths R knows, but we also want to support custom
  /// paths?
  public static final ArrayList<Path> R_LIBS = new ArrayList<>();

  static {
    var defaultRlibs = "~/R/x86_64-pc-linux-gnu-library/4.3/:/usr/lib/R/library";
    defaultRlibs = defaultRlibs.replaceFirst("^~", System.getProperty("user.home"));
    var r_libs = INSTANCE.get("R_LIBS", defaultRlibs);
    R_LIBS.addAll(Arrays.stream(r_libs.split(":")).map(Path::of).toList());
  }

  /// Adds extra verification checks.
  ///
  /// **Default:**: [#AFTER_STEP].
  public static final CfgDebugLevel CFG_DEBUG_LEVEL =
      INSTANCE.get("CFG_DEBUG_LEVEL", CfgDebugLevel.NONE);

  /// Whether to log optimization phases/passes, and if so, how granular.
  ///
  /// **Default:**: [#NONE].
  public static final OptimizationLogLevel OPTIMIZATION_LOG_LEVEL =
      INSTANCE.get("OPTIMIZATION_LOG_LEVEL", OptimizationLogLevel.NONE);

  /// Path or C compiler command this uses.
  ///
  /// **Default:**: "gcc"
  public static final String CC = INSTANCE.get("CC", "gcc");

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
  private final Properties properties = new Properties();

  protected Config() {
    if (Files.exists(Path.of(".config.properties"))) {
      try {
        var propertiesStream = new FileInputStream(".config.properties");
        properties.load(propertiesStream);
      } catch (IOException e) {
        throw new RuntimeException("Failed to load config", e);
      }
    }
  }

  protected <E extends Enum<E>> E get(String name, E defaultValue) {
    var value = get(name);
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

  protected String get(String name, String defaultValue) {
    var value = get(name);
    return value != null ? value : defaultValue;
  }

  protected int get(String name, int defaultValue) {
    var value = get(name);
    return value != null ? Integer.parseInt(value) : defaultValue;
  }

  protected boolean get(String name, boolean defaultValue) {
    var value = get(name);
    return value != null ? Boolean.parseBoolean(value) : defaultValue;
  }

  protected @Nullable String get(String name) {
    var fromEnv = System.getenv(name);
    if (fromEnv != null) {
      return fromEnv;
    }
    return properties.getProperty("env." + name);
  }
}
