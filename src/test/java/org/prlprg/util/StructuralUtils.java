package org.prlprg.util;

import java.util.Set;
import java.util.regex.Pattern;

public class StructuralUtils {
  private static final String HASH_PATTERN = "-?[0-9a-fA-F]{1,16}";
  private static final Set<Pair<Pattern, String>> PATTERNS =
      Set.of(
          Pair.of(Pattern.compile("@" + HASH_PATTERN), "#"),
          Pair.of(Pattern.compile("<environment: " + HASH_PATTERN + ">"), "<environment: #>"));

  /**
   * Calls {@link Object#toString}, then replaces obvious references and hash-codes with
   * deterministic values. This means that you can test that two objects are structurally equivalent
   * by comparing their {@code printStructurally}.
   *
   * <p><b>It uses heuristics to find and references and hash-codes, so it can't be relied on for
   * any data-structures we can't or aren't willing to change the {@link Object#toString}
   * representation of to make them pass the tests.</b>
   */
  public static String printStructurally(Object object) {
    var string = object.toString();

    // FIXME: is this needed?
    // Get hashes in order of occurrence
    for (var pattern : PATTERNS) {
      var hashMatcher = pattern.first().matcher(string);
      var hashes = new java.util.LinkedHashSet<String>();
      while (hashMatcher.find()) {
        hashes.add(hashMatcher.group());
      }

      // Replace each hash with its index
      var idx = 0;
      for (var hash : hashes) {
        var replacement = pattern.second().replace("#", Integer.toString(idx));
        string = string.replace(hash, replacement);
        idx++;
      }
    }
    return string;
  }

  private StructuralUtils() {}
}
