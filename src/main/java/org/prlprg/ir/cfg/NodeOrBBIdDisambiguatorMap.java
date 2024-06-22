package org.prlprg.ir.cfg;

import java.util.HashMap;
import java.util.Map;
import java.util.NavigableSet;
import java.util.TreeSet;

/**
 * Map that stores names and disambiguators for {@link NodeId}s ({@link InstrOrPhiIdImpl}s) and
 * {@link BBId}s ({@link BBIdImpl}s), so that a low disambiguator can be returned that actually
 * disambiguates said name.
 *
 * <p>Specifically, it stores every disambiguator for each name, and generating a unique
 * disambiguator for a name returns one that is the successor to the largest stored one.
 */
class NodeOrBBIdDisambiguatorMap {
  private final Map<String, NavigableSet<Integer>> disambiguators = new HashMap<>();

  NodeOrBBIdDisambiguatorMap() {
    // Ensure that the an empty string always has a (positive) disambiguator.
    add("", 0);
  }

  /**
   * Get a unique disambiguator for the given name.
   *
   * <p><i>This doesn't insert the disambiguator, so a subsequent call will return the same
   * value</i>. The disambiguator is only stored when {@link #add(String, int)} is called.
   */
  int get(String name) {
    return disambiguators.containsKey(name) ? disambiguators.get(name).last() + 1 : 0;
  }

  /**
   * Record that the given disambiguator is used for the given name.
   *
   * <p>Specifically, this makes it so {@link #get(String)} is guaranteed not to return the given
   * disambiguator, until {@link #remove(String, int)} is called.
   *
   * @throws IllegalArgumentException If the given disambiguator is already used for the given name.
   */
  void add(String name, int disambiguator) {
    if (!disambiguators.computeIfAbsent(name, _ -> new TreeSet<>()).add(disambiguator)) {
      throw new IllegalArgumentException(
          "Disambiguator " + disambiguator + " is already used for name " + name);
    }
  }

  /**
   * Remove the given disambiguator from the given name.
   *
   * <p>Specifically, this makes it so {@link #get(String)} may return the given disambiguator. It
   * may not though; specifically, if a higher disambiguator still exists, it will still return a
   * disambiguator greater than that one.
   *
   * @throws IllegalArgumentException If the given disambiguator is not used for the given name.
   */
  void remove(String name, int disambiguator) {
    if (!disambiguators.computeIfAbsent(name, _ -> new TreeSet<>()).remove(disambiguator)) {
      throw new IllegalArgumentException(
          "Disambiguator " + disambiguator + " is not used for name " + name);
    }
  }
}
