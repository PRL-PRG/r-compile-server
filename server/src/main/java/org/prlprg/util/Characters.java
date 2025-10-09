package org.prlprg.util;

public final class Characters {
  /// Whether the character can be the start of a valid identifier in most languages.
  ///
  /// Specifically, whether the character can be a valid Java identifier start,
  /// and isn't a dollar sign.
  public static boolean isIdentifierStart(int c) {
    return Character.isJavaIdentifierStart(c) && c != '$';
  }

  /// Whether the character can be part of a valid identifier in most languages.
  ///
  /// Specifically, whether the character can be a valid Java identifier part,
  /// and isn't a dollar sign.
  public static boolean isIdentifierPart(int c) {
    return Character.isJavaIdentifierPart(c) && c != '$';
  }

  private Characters() {}
}
