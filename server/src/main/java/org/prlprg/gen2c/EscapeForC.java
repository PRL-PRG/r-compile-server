package org.prlprg.gen2c;

public final class EscapeForC {
  /// Replace characters that aren't valid in C identifiers with codes that are.
  ///
  /// For any strings `a` and `b`, `escapeForC(a) == escapeForC(b)` iff `a == b`.
  ///
  /// Note that, even though the characters may make a valid C identifier, the result may be a
  /// reserved keyword or macro.
  public static String escapeForC(String text) {
    var result = new StringBuilder();
    for (var c : text.toCharArray()) {
      if (Character.isLetterOrDigit(c)) {
        result.append(c);
      } else {
        result.append("_u");
        result.append(Integer.toHexString(c));
      }
    }
    return result.toString();
  }
}
