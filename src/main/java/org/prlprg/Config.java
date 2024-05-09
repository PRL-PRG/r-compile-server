package org.prlprg;

import org.prlprg.util.Strings;

/** Environment variables to configure the application. */
@SuppressWarnings("SameParameterValue")
public class Config {
  // region actual configuration variables
  /** If true, adds extra verification checks. */
  public static final CfgDebugLevel CFG_DEBUG_LEVEL = get("CFG_DEBUG_LEVEL", CfgDebugLevel.VERIFY);

  /** Maximum number of characters vectors will print in `toString` before being truncated. */
  public static final int VECTOR_TRUNCATE_SIZE = get("VECTOR_TRUNCATE_SIZE", 1000);

  // endregion

  // region associated enums
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

  // endregion

  // region boilerplate getters
  private static <E extends Enum<E>> E get(String name, E defaultValue) {
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

  private static int get(String name, int defaultValue) {
    String value = System.getenv(name);
    return value != null ? Integer.parseInt(value) : defaultValue;
  }

  private Config() {}
  // endregion
}
