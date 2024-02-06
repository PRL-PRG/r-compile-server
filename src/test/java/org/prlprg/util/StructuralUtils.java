package org.prlprg.util;

import java.util.regex.Pattern;

public class StructuralUtils {
  private static final Pattern HASH_PATTERN = Pattern.compile("@[0-9a-f]{1,16}");

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
    var hashMatcher = HASH_PATTERN.matcher(string);

    // Get hashes in order of occurrence
    var hashes = new java.util.LinkedHashSet<String>();
    while (hashMatcher.find()) {
      hashes.add(hashMatcher.group());
    }

    // Replace each hash with its index
    var index = 0;
    for (var hash : hashes) {
      string = string.replace(hash, "@HASH" + index);
      index++;
    }

    return string;
  }

  private StructuralUtils() {}
}
