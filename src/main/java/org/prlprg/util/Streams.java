package org.prlprg.util;

import java.util.HashSet;
import java.util.Optional;
import java.util.function.Supplier;
import java.util.stream.Collector;
import java.util.stream.Collector.Characteristics;
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
  public static <T> Collector<T, MutableOptional<T>, Optional<T>> intoOneOrEmpty() {
    return Collector.of(
        MutableOptional::empty,
        (acc, elem) -> {
          if (acc.isPresent()) {
            acc.clear();
          } else {
            acc.set(elem);
          }
        },
        (acc1, acc2) ->
            acc1.isPresent() && acc2.isPresent()
                ? MutableOptional.empty()
                : acc1.isPresent() ? acc1 : acc2,
        MutableOptional::toOptional,
        Characteristics.CONCURRENT);
  }

  /**
   * Returns the only element of the stream, {@link Optional#empty()} if the stream is empty, or
   * throws {@link IllegalArgumentException} if the stream has multiple elements.
   */
  public static <T> Collector<T, MutableOptional<T>, Optional<T>> intoOneOrThrow(
      Supplier<RuntimeException> exception) {
    return Collector.of(
        MutableOptional::empty,
        (acc, elem) -> {
          if (acc.isPresent()) {
            throw exception.get();
          } else {
            acc.set(elem);
          }
        },
        (acc1, acc2) -> {
          if (acc1.isPresent() && acc2.isPresent()) {
            throw exception.get();
          } else {
            return acc1.isPresent() ? acc1 : acc2;
          }
        },
        MutableOptional::toOptional,
        Characteristics.CONCURRENT);
  }

  private Streams() {}
}
