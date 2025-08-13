package org.prlprg.util;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Optional;
import java.util.function.BiConsumer;
import java.util.function.BiFunction;
import java.util.function.Supplier;
import java.util.stream.Collector;
import java.util.stream.Collector.Characteristics;
import java.util.stream.Stream;

public class Streams {
  /// Keeps yielding elements by calling `supplier` until it returns `null`.
  public static <T> Stream<T> untilNull(OptionalSupplier<T> supplier) {
    return com.google.common.collect.Streams.stream(new UntilNullIterator<>(supplier));
  }

  /// [com.google.common.collect.Streams#zip(Stream, Stream, BiFunction)] but without nullable
  /// annotations.
  public static <A, B, R> Stream<R> zip(
      Stream<A> streamA, Stream<B> streamB, BiFunction<? super A, ? super B, R> function) {
    return com.google.common.collect.Streams.zip(streamA, streamB, function);
  }

  public interface Worklist<T> {
    void add(T next);

    void addAll(Collection<? extends T> next);
  }

  /// The worklist starts with `initial`. While the worklist is non-empty, removes an element,
  /// calls the function with it to maybe add more elements, then yields it.
  public static <T> Stream<T> worklist(T initial, BiConsumer<T, Worklist<T>> iterate) {
    var worklist = new ArrayList<T>();
    var worklistFacade =
        new Worklist<T>() {
          @Override
          public void add(T next) {
            worklist.add(next);
          }

          @Override
          public void addAll(Collection<? extends T> next) {
            worklist.addAll(next);
          }
        };

    worklist.add(initial);
    return Stream.iterate(
        initial,
        prev -> {
          iterate.accept(prev, worklistFacade);
          return !worklist.isEmpty();
        },
        _ -> worklist.removeLast());
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
      Supplier<Error> exception) {
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
