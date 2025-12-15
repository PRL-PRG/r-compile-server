package org.prlprg.fir2c;

import java.util.HashMap;
import java.util.Map;
import org.intellij.lang.annotations.PrintFormat;

/// Maintains stable unique C identifiers derived from FIŘ names.
final class IdentifierMangler {
  private final Map<String, Integer> counters = new HashMap<>();

  public String unique(@PrintFormat String format, Object... args) {
    var sanitized = sanitize(format.formatted(args));

    int count = counters.merge(sanitized, 1, Integer::sum);
    if (count == 1) {
      return sanitized;
    }
    return sanitized + (count - 1);
  }

  private String sanitize(String candidate) {
    if (candidate.isEmpty()) {
      return "_";
    }
    var builder = new StringBuilder(candidate.length());
    var chars = candidate.toCharArray();
    for (var i = 0; i < chars.length; i++) {
      var c = chars[i];
      if (isIdentifierChar(c, i == 0)) {
        builder.append(c);
      } else {
        builder.append('_');
      }
    }
    if (!Character.isLetter(builder.charAt(0)) && builder.charAt(0) != '_') {
      builder.insert(0, '_');
    }
    // Ensure it doesn't conflict with demangled names, in a way that also distinguishes it to
    // the user.
    if (Character.isDigit(builder.charAt(builder.length() - 1))) {
      builder.append('_');
    }
    return builder.toString();
  }

  private boolean isIdentifierChar(char c, boolean first) {
    return (c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z')
        || c == '_'
        || (!first && c >= '0' && c <= '9');
  }
}
