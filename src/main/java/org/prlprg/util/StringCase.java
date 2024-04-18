package org.prlprg.util;

/** A string "case", e.g. camelCase. Provides methods to convert strings between cases. */
public enum StringCase {
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
      case SCREAMING_SNAKE ->
          switch (to) {
            case SCREAMING_SNAKE -> s;
            case CAMEL -> snakeToCamelOrPascal(s, false);
            case PASCAL -> snakeToCamelOrPascal(s, true);
          };
      case CAMEL ->
          switch (to) {
            case CAMEL -> s;
            case SCREAMING_SNAKE -> camelOrPascalToScreamingSnake(s);
            case PASCAL -> snakeToCamelOrPascal(s, true);
          };
      case PASCAL ->
          switch (to) {
            case PASCAL -> s;
            case SCREAMING_SNAKE -> camelOrPascalToScreamingSnake(s);
            case CAMEL -> snakeToCamelOrPascal(s, false);
          };
    };
  }

  private static String camelOrPascalToScreamingSnake(String s) {
    var sb = new StringBuilder();
    var wasLower = false;
    for (var c : s.toCharArray()) {
      if (Character.isUpperCase(c)) {
        if (wasLower) {
          sb.append('_');
        }
        sb.append(c);
        wasLower = false;
      } else {
        sb.append(Character.toUpperCase(c));
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
