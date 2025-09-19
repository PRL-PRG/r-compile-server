package org.prlprg.util;

import static org.prlprg.util.Math2.permuteIndex;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.List;
import java.util.Objects;
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
import javax.annotation.Nullable;

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

  public static <T> Gatherer<T, ?, T> filterWithIndex(
      BiFunction<Integer, T, Boolean> predicate) {
    final int[] index = {0};
    return Gatherer.ofSequential(
        (_, element, downstream) ->
          predicate.apply(index[0]++, element) ? downstream.push(element) : !downstream.isRejecting());
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

  /**
   * Returns the only element of the stream or {@link Optional#empty()} if the stream is empty.
   * Throws if the stream has multiple elements.
   */
  public static <T, E extends RuntimeException> Collector<T, ?, Optional<T>> zeroOneOrThrow(
      Supplier<E> exception) {
    class MutableOptional {
      @Nullable T value = null;
    }

    return Collector.of(
        MutableOptional::new,
        (o, elem) -> {
          if (o.value != null) {
            throw exception.get();
          } else {
            o.value = elem;
          }
        },
        (o1, o2) -> {
          if (o1.value != null && o2.value != null) {
            throw exception.get();
          } else {
            return o1.value != null ? o1 : o2;
          }
        },
        o -> Optional.ofNullable(o.value),
        Characteristics.CONCURRENT);
  }

  /** Returns the only element of the stream. Throws if the stream has zero or multiple elements. */
  public static <T, E extends RuntimeException> Collector<T, ?, T> oneOrThrow(Supplier<E> exception)
      throws E {
    class MutableOptional {
      @Nullable T value = null;
    }

    return Collector.of(
        MutableOptional::new,
        (o, elem) -> {
          if (o.value != null) {
            throw exception.get();
          } else {
            o.value = elem;
          }
        },
        (o1, o2) -> {
          if (o1.value != null && o2.value != null) {
            throw exception.get();
          } else {
            return o1.value != null ? o1 : o2;
          }
        },
        o -> Optional.ofNullable(o.value).orElseThrow(exception),
        Characteristics.CONCURRENT);
  }

  /**
   * Returns the first element of the stream if it exists and equals all other elements, otherwise
   * `Optional.empty()`.
   */
  public static <T> Collector<T, ?, Optional<T>> uniqueOrEmpty() {
    class State {
      @Nullable T value = null;
      boolean isAmbiguous = false;
    }

    var ambiguous = new State();
    ambiguous.isAmbiguous = true;

    return Collector.of(
        State::new,
        (state, elem) -> {
          if (!state.isAmbiguous && state.value == null) {
            state.value = elem;
          } else if (!Objects.equals(state.value, elem)) {
            state.value = null;
            state.isAmbiguous = true;
          }
        },
        (state1, state2) ->
            state1.isAmbiguous
                ? state1
                : state2.isAmbiguous
                    ? state2
                    : state1.value == null
                        ? state2
                        : state2.value == null
                            ? state1
                            : Objects.equals(state1.value, state2.value) ? state1 : ambiguous,
        state -> Optional.ofNullable(state.value),
        Characteristics.CONCURRENT);
  }

  public static <T> Collector<T, ?, Boolean> hasDuplicate() {
    class State {
      final HashSet<T> seen = new HashSet<>();
      boolean hasDuplicate = false;
    }

    return Collector.of(
        State::new,
        (state, elem) -> {
          if (!state.hasDuplicate) {
            state.hasDuplicate = !state.seen.add(elem);
          }
        },
        (state1, state2) -> {
          if (state1.hasDuplicate) {
            return state1;
          } else if (state2.hasDuplicate) {
            return state2;
          } else {
            for (var elem : state2.seen) {
              if (!state1.seen.add(elem)) {
                state1.hasDuplicate = true;
                break;
              }
            }
            return state1;
          }
        },
        state -> state.hasDuplicate,
        Characteristics.CONCURRENT);
  }

  private Streams() {}
}
