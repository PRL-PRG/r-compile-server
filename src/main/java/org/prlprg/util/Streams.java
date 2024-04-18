package org.prlprg.util;

import java.util.HashSet;
import java.util.Optional;
import java.util.stream.Stream;

public class Streams {
  /**
   * A stream which keeps yielding elements by calling {@code supplier} until it returns {@code
   * null}.
   */
  public static <T> Stream<T> untilNull(OptionalSupplier<T> supplier) {
    return com.google.common.collect.Streams.stream(new UntilNullIterator<>(supplier));
  }

  public static <T> boolean hasNoDuplicates(Stream<T> stream) {
    // From https://stackoverflow.com/a/40977178
    return stream.sequential().allMatch(new HashSet<>()::add);
  }

  public static <T> boolean hasDuplicates(Stream<T> stream) {
    return !hasNoDuplicates(stream);
  }

  /**
   * Returns the only element of the stream, or {@link Optional#empty()} if the stream is empty or
   * has multiple elements.
   */
  public static <T> Optional<T> onlyOrNone(Stream<T> stream) {
    return stream.map(Optional::of).reduce((_, _) -> Optional.empty()).flatMap(o -> o);
  }

  private Streams() {}
}
