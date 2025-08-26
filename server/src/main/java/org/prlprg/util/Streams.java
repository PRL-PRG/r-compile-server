package org.prlprg.util;

import static org.prlprg.util.Math2.permuteIndex;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.List;
import java.util.Optional;
import java.util.function.BiConsumer;
import java.util.function.BiFunction;
import java.util.function.BinaryOperator;
import java.util.function.Function;
import java.util.function.Supplier;
import java.util.stream.Collector;
import java.util.stream.Collector.Characteristics;
import java.util.stream.Gatherer;
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

  /// [ImmutableMap#toImmutableMap(Function.identity(), Function)][
  /// ImmutableMap#toImmutableMap(Function, Function)].
  public static <I, V> Collector<I, ?, ImmutableMap<I, V>> toImmutableMap(
      Function<I, V> valueFunction) {
    return ImmutableMap.toImmutableMap(k -> k, valueFunction);
  }

  /// [ImmutableMap#toImmutableMap(Function, Function)] but without nullable annotations.
  public static <I, K, V> Collector<I, ?, ImmutableMap<K, V>> toImmutableMap(
      Function<I, K> keyFunction, Function<I, V> valueFunction) {
    return ImmutableMap.toImmutableMap(keyFunction, valueFunction);
  }

  /// [ImmutableMap#toImmutableMap(Function, Function, BinaryOperator)] but without nullable
  // annotations.
  public static <I, K, V> Collector<I, ?, ImmutableMap<K, V>> toImmutableMap(
      Function<I, K> keyFunction, Function<I, V> valueFunction, BinaryOperator<V> mergeFunction) {
    return ImmutableMap.toImmutableMap(keyFunction, valueFunction, mergeFunction);
  }

  /// A gatherer that collects the cartesian product of the input streams into lists, returning
  /// them in a pseudo-random order.
  ///
  /// Example: `Stream.of(Stream.of(1, 2), Stream.of(3, 4),
  /// Stream.of(5)).gather(Streams.cartesian())` yields a permutation of `List.of(1, 3, 5),
  /// List.of(2, 3, 5), List.of(1, 4, 5), List.of(2, 4, 5))`.
  public static <T> Gatherer<Stream<T>, ?, ImmutableList<T>> cartesianShuffled() {
    return Gatherer.ofSequential(
        ArrayList<List<T>>::new,
        (xss, xs, _) -> {
          var xs1 = xs.toList();
          xss.add(xs1);
          // If `false`, we'll produce no elements anyway.
          return !xs1.isEmpty();
        },
        (xss, downstream) -> {
          var current = new Object[xss.size()];

          var count = xss.stream().mapToInt(List::size).reduce((a, b) -> a * b).orElse(0);
          for (var i = 0; i < count && !downstream.isRejecting(); i++) {
            var index = permuteIndex(i, count);
            for (var j = 0; j < xss.size(); j++) {
              var xs = xss.get(j);
              current[j] = xs.get(index % xs.size());
              index /= xs.size();
            }

            @SuppressWarnings("unchecked")
            var next = (ImmutableList<T>) ImmutableList.copyOf(current);
            downstream.push(next);
          }
        });
  }

  public static <I, O> Gatherer<I, ?, O> mapWithIndex(BiFunction<I, Integer, O> mapper) {
    final int[] index = {0};
    return Gatherer.ofSequential(
        (_, element, downstream) -> downstream.push(mapper.apply(element, index[0]++)));
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
    return untilNull(
        () -> {
          if (worklist.isEmpty()) {
            return null;
          }

          var next = worklist.removeLast();
          iterate.accept(next, worklistFacade);
          return next;
        });
  }

  public static <T> boolean hasNoDuplicates(Stream<T> stream) {
    // From https://stackoverflow.com/a/40977178
    return stream.sequential().allMatch(new HashSet<>()::add);
  }

  public static <T> boolean hasDuplicates(Stream<T> stream) {
    return !hasNoDuplicates(stream);
  }

  /**
   * Returns the only element of the stream or {@link Optional#empty()} if the stream is empty.
   * Throws if the stream has multiple elements.
   */
  public static <T, E extends Throwable> Collector<T, ?, Optional<T>> zeroOneOrThrow(
      Supplier<E> exception) throws E {
    class WrappedException extends RuntimeException {
      final E inner;

      public WrappedException(E inner) {
        this.inner = inner;
      }
    }

    try {
      return Collector.of(
          MutableOptional::<T>empty,
          (acc, elem) -> {
            if (acc.isPresent()) {
              throw new WrappedException(exception.get());
            } else {
              acc.set(elem);
            }
          },
          (acc1, acc2) -> {
            if (acc1.isPresent() && acc2.isPresent()) {
              throw new WrappedException(exception.get());
            } else {
              return acc1.isPresent() ? acc1 : acc2;
            }
          },
          MutableOptional::toOptional,
          Characteristics.CONCURRENT);
    } catch (WrappedException e) {
      throw e.inner;
    }
  }

  /** Returns the only element of the stream. Throws if the stream has zero or multiple elements. */
  public static <T, E extends Throwable> Collector<T, ?, T> oneOrThrow(Supplier<E> exception)
      throws E {
    class WrappedException extends RuntimeException {
      final E inner;

      public WrappedException(E inner) {
        this.inner = inner;
      }
    }

    try {
      return Collector.of(
          MutableOptional::<T>empty,
          (acc, elem) -> {
            if (acc.isPresent()) {
              throw new WrappedException(exception.get());
            } else {
              acc.set(elem);
            }
          },
          (acc1, acc2) -> {
            if (acc1.isPresent() && acc2.isPresent()) {
              throw new WrappedException(exception.get());
            } else {
              return acc1.isPresent() ? acc1 : acc2;
            }
          },
          mo -> mo.toOptional().orElseThrow(() -> new WrappedException(exception.get())),
          Characteristics.CONCURRENT);
    } catch (WrappedException e) {
      throw e.inner;
    }
  }

  private Streams() {}
}
