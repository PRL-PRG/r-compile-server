package org.prlprg.util;

import java.util.Collections;
import java.util.List;

public class Lists {
  /** Assuming the list is ordered, insert the element preserving the order. */
  public static <T extends Comparable<T>> void binaryInsert(List<T> list, T elem) {
    var index = Collections.binarySearch(list, elem);
    if (index < 0) {
      index = -index - 1;
    }
    list.add(index, elem);
  }

  private Lists() {}
}
