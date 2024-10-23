package org.prlprg.util;

import java.util.Random;
import java.util.function.Predicate;

public class Predicates {
  private static final long SEED = 0x123456789abcdef0L;

  /**
   * A predicate that returns true {@code ratio}00% of the time.
   *
   * <p>It's deterministic and stateful: the same ratio will return {@code true} the same sequence
   * of times it's called.
   */
  public static <T> Predicate<T> random(double ratio) {
    if (ratio < 0 || ratio > 1) {
      throw new IllegalArgumentException("Ratio must be between 0 and 1");
    }

    if (ratio == 0) {
      return _ -> false;
    } else if (ratio == 1) {
      return _ -> true;
    }

    var rand = new Random(SEED);
    return _ -> rand.nextDouble() <= ratio;
  }

  private Predicates() {}
}
