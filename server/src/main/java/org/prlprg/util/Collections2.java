package org.prlprg.util;

import com.google.common.base.Function;
import com.google.common.base.Predicate;
import java.util.Collection;
import java.util.Objects;

public class Collections2 {
  /// [com.google.common.collect.Collections2#transform(Collection, Function)] but no nullability.
  public static <F, T> Collection<T> mapLazy(Collection<F> from, Function<? super F, T> function) {
    return com.google.common.collect.Collections2.transform(
        from, x -> function.apply(Objects.requireNonNull(x)));
  }

  /// [com.google.common.collect.Collections2#filter(Collection, Predicate)] but no nullability.
  public static <E> Collection<E> filter(Collection<E> unfiltered, Predicate<? super E> predicate) {
    return com.google.common.collect.Collections2.filter(
        unfiltered, x -> predicate.apply(Objects.requireNonNull(x)));
  }

  private Collections2() {}
}
