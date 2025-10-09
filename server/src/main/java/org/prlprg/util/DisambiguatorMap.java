package org.prlprg.util;

import java.util.HashMap;
import java.util.Map;

/// A map of string prefixes to disambiguator numbers, so we can generate a unique string that
/// starts with a prefix.
public class DisambiguatorMap {
  private final Map<String, Integer> disambiguators = new HashMap<>();

  /// Returns a unique string that starts with `string`, minus the disambiguator.
  public String disambiguate(String string) {
    var pd = split(string);
    var prefix = pd.first();
    var disambiguator = pd.second();

    var minDisambiguator = disambiguators.getOrDefault(prefix, -1) + 1;

    return minDisambiguator > disambiguator ? prefix + minDisambiguator : string;
  }

  /// Inserts the string so that future calls to [#disambiguate(String)] will return a different
  /// one.
  public void add(String string) {
    var pd = split(string);
    var prefix = pd.first();
    var disambiguator = pd.second();

    var current = disambiguators.getOrDefault(prefix, -1);
    if (disambiguator > current) {
      disambiguators.put(prefix, disambiguator);
    }
  }

  /// [#add(String)]s every string.
  public void addAll(Iterable<String> strings) {
    for (var s : strings) {
      add(s);
    }
  }

  private Pair<String, Integer> split(String s) {
    var disambiguatorIndex = s.length();
    while (disambiguatorIndex > 0
        && s.length() - disambiguatorIndex < 8
        && Character.isDigit(s.charAt(disambiguatorIndex - 1))) {
      disambiguatorIndex--;
    }

    var prefix = s.substring(0, disambiguatorIndex);
    var disambiguator =
        disambiguatorIndex == s.length() ? 0 : Integer.parseInt(s.substring(disambiguatorIndex));

    return Pair.of(prefix, disambiguator);
  }
}
