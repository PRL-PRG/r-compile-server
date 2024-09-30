package org.prlprg.util;

import java.util.Arrays;
import java.util.Collection;
import java.util.StringJoiner;
import java.util.function.Function;
import java.util.stream.Collector;
import javax.annotation.Nullable;

public class Strings {
  @SafeVarargs
  public static <T> String join(String sep, T... items) {
    return Arrays.stream(items).collect(joining(sep));
  }

  @SafeVarargs
  public static <T, S> String join(String sep, Function<T, S> toString, T... items) {
    return Arrays.stream(items).map(toString).collect(joining(sep));
  }

  public static <T> String join(String sep, Collection<T> items) {
    return items.stream().collect(joining(sep));
  }

  public static <T, S> String join(String sep, Function<T, S> toString, Collection<T> items) {
    return items.stream().map(toString).collect(joining(sep));
  }

  public static <T> Collector<T, ?, String> joining(String sep) {
    return Collector.of(
        () -> new StringJoiner(sep),
        (r, e) -> r.add(e.toString()),
        StringJoiner::merge,
        StringJoiner::toString,
        Collector.Characteristics.UNORDERED);
  }

  public static @Nullable String stripPrefix(String str, String prefix) {
    return str.startsWith(prefix) ? str.substring(prefix.length()) : null;
  }

  /** Escape the string and surround in double-quotes. */
  public static String quote(String str) {
    return '"' + escape(str) + '"';
  }

  /** Escape the character and surround in single-quotes. */
  public static String quote(int chr) {
    return '\'' + escape(chr) + '\'';
  }

  /** Escape the character and surround in single-quotes. */
  public static String quote(char chr) {
    return '\'' + escape(chr) + '\'';
  }

  /** Escape the string, don't surround in double-quotes. */
  public static String escape(String str) {
    var sb = new StringBuilder();
    for (var c : str.toCharArray()) {
      sb.append(escape(c));
    }
    return sb.toString();
  }

  /** Escape the character, don't surround in single-quotes. */
  public static String escape(int c) {
    return switch (c) {
      case '\n' -> "\\n";
      case '\r' -> "\\r";
      case '\t' -> "\\t";
      case '\'' -> "\\'";
      case '\\' -> "\\\\";
      default -> Character.toString(c);
    };
  }

  /** Escape the character, don't surround in single-quotes. */
  public static String escape(char c) {
    return escape((int) c);
  }

  /** Whether the string can be a valid Java identifier (or reserved keyword, but no underscore). */
  public static boolean isValidJavaIdentifierOrKeyword(String s) {
    if (s.isEmpty() || s.equals("_")) {
      return false;
    }
    if (!Character.isJavaIdentifierStart(s.charAt(0))) {
      return false;
    }
    for (var i = 1; i < s.length(); i++) {
      if (!Character.isJavaIdentifierPart(s.charAt(i))) {
        return false;
      }
    }
    return true;
  }

  public static String camelCaseToSnakeCase(String s) {
    var sb = new StringBuilder();
    for (var i = 0; i < s.length(); i++) {
      var c = s.charAt(i);
      if (Character.isUpperCase(c)) {
        if (i > 0) {
          sb.append('_');
        }
        sb.append(Character.toLowerCase(c));
      } else {
        sb.append(c);
      }
    }
    return sb.toString();
  }

  private Strings() {}
}
