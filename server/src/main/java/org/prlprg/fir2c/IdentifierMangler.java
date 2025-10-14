package org.prlprg.fir2c;

import java.util.HashMap;
import java.util.Map;

/** Maintains stable unique C identifiers derived from FIŘ names. */
final class IdentifierMangler {
  private final Map<String, Integer> counters = new HashMap<>();

  public String unique(String candidate) {
    var sanitized = sanitize(candidate);
    var count = counters.merge(sanitized, 1, Integer::sum);
    if (count == 1) {
      return sanitized;
    }
    return sanitized + "_" + (count - 1);
  }

  public String sanitize(String candidate) {
    if (candidate.isEmpty()) {
      return "fir";
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
    return builder.toString();
  }

  private boolean isIdentifierChar(char c, boolean first) {
    if (c >= 'a' && c <= 'z') {
      return true;
    }
    if (c >= 'A' && c <= 'Z') {
      return true;
    }
    if (c == '_' || (!first && c >= '0' && c <= '9')) {
      return true;
    }
    return false;
  }
}
