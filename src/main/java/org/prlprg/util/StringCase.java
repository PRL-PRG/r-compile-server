package org.prlprg.util;

/** A string "case", e.g. camelCase. Provides methods to convert strings between cases. */
public enum StringCase {
  /** {@code snake_case} */
  SNAKE,
  /** {@code SCREAMING_SNAKE_CASE} */
  SCREAMING_SNAKE,
  /** {@code camelCase} */
  CAMEL,
  /** {@code PascalCase} */
  PASCAL;

  /**
   * Convert the string from the given case to the given case.
   *
   * @throws IllegalArgumentException If conversion between the cases isn't implemented.
   */
  public static String convert(String s, StringCase from, StringCase to) {
    return switch (from) {
      case SNAKE ->
          switch (to) {
            case SNAKE -> s;
            case SCREAMING_SNAKE -> s.toUpperCase();
            case CAMEL -> snakeToCamelOrPascal(s, false);
            case PASCAL -> snakeToCamelOrPascal(s, true);
          };
      case SCREAMING_SNAKE ->
          switch (to) {
            case SNAKE -> s.toLowerCase();
            case SCREAMING_SNAKE -> s;
            case CAMEL -> snakeToCamelOrPascal(s, false);
            case PASCAL -> snakeToCamelOrPascal(s, true);
          };
      case CAMEL ->
          switch (to) {
            case SNAKE -> camelOrPascalToSnake(s, false);
            case SCREAMING_SNAKE -> camelOrPascalToSnake(s, true);
            case CAMEL -> s;
            case PASCAL -> snakeToCamelOrPascal(s, true);
          };
      case PASCAL ->
          switch (to) {
            case SNAKE -> camelOrPascalToSnake(s, false);
            case SCREAMING_SNAKE -> camelOrPascalToSnake(s, true);
            case CAMEL -> snakeToCamelOrPascal(s, false);
            case PASCAL -> s;
          };
    };
  }

  private static String camelOrPascalToSnake(String s, boolean isScreaming) {
    var sb = new StringBuilder();
    var wasLower = false;
    for (var c : s.toCharArray()) {
      if (Character.isUpperCase(c)) {
        if (wasLower) {
          sb.append('_');
        }
        sb.append(isScreaming ? c : Character.toLowerCase(c));
        wasLower = false;
      } else {
        sb.append(isScreaming ? Character.toUpperCase(c) : c);
        wasLower = true;
      }
    }
    return sb.toString();
  }

  private static String snakeToCamelOrPascal(String s, boolean isPascal) {
    var sb = new StringBuilder();
    var nextUpper = isPascal;
    for (var c : s.toCharArray()) {
      if (c == '_') {
        nextUpper = true;
      } else {
        sb.append(nextUpper ? Character.toUpperCase(c) : Character.toLowerCase(c));
        nextUpper = false;
      }
    }
    return sb.toString();
  }
}
