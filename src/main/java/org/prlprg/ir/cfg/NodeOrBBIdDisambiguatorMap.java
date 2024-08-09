package org.prlprg.ir.cfg;

import java.util.HashMap;
import java.util.Map;
import java.util.NavigableSet;
import java.util.TreeSet;

/**
 * Map that stores names and disambiguators for {@link LocalNodeId}s and ({@link BBId}s), so that a
 * low disambiguator can be returned that is unique to the map (actually disambiguates said name).
 *
 * <p>Specifically, it stores every "freed" disambiguator and the next un-assigned disambiguator for
 * each name, so generating a low unique disambiguator is removing the lowest element from the free-
 * list or assigning and incrementing the next un-assigned one.
 */
class NodeOrBBIdDisambiguatorMap {
  private final Map<String, FreeList> disambiguators = new HashMap<>();

  private static class FreeList {
    private final NavigableSet<Integer> free = new TreeSet<>();
    private int next = 0;

    boolean add(int disambiguator) {
      while (disambiguator > next) {
        free.add(next);
        next++;
      }
      if (disambiguator == next) {
        next++;
        return true;
      } else {
        return free.remove(disambiguator);
      }
    }

    boolean remove(int disambiguator) {
      var last = next - 1;
      if (disambiguator > last) {
        return false;
      } else if (disambiguator == last) {
        do {
          next--;
        } while (free.remove(next - 1));
        return true;
      } else {
        return free.add(disambiguator);
      }
    }

    int first() {
      return free.isEmpty() ? next : free.first();
    }
  }

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
    return disambiguators.containsKey(name) ? disambiguators.get(name).first() : 0;
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
    if (!disambiguators.computeIfAbsent(name, _ -> new FreeList()).add(disambiguator)) {
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
    if (!disambiguators.computeIfAbsent(name, _ -> new FreeList()).remove(disambiguator)) {
      throw new IllegalArgumentException(
          "Disambiguator " + disambiguator + " is not used for name " + name);
    }
  }
}
