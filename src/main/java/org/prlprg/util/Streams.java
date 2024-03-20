package org.prlprg.util;

import java.util.HashSet;
import java.util.stream.Stream;

public class Streams {
  public static <T> boolean hasNoDuplicates(Stream<T> stream) {
    // From https://stackoverflow.com/a/40977178
    return stream.sequential().allMatch(new HashSet<>()::add);
  }

  public static <T> boolean hasDuplicates(Stream<T> stream) {
    return !hasNoDuplicates(stream);
  }

  private Streams() {}
}
