package org.prlprg.util;

import java.util.Collection;
import java.util.HashSet;

public class Collections2 {
  /** Whether any element occurs twice. */
  public static <T> boolean hasDuplicates(Collection<T> c) {
    return new HashSet<>(c).size() < c.size();
  }

  private Collections2() {}
}
