package org.prlprg.util;

import com.google.common.base.Function;
import java.util.Collection;
import java.util.Objects;
import org.checkerframework.checker.nullness.qual.NonNull;

public class Collections2 {
  /// [com.google.common.collect.Collections2#transform(Collection, Function)] but no nullability.
  public static <F extends @NonNull Object, T> Collection<T> mapLazy(
      Collection<F> from, Function<? super F, T> function) {
    return com.google.common.collect.Collections2.transform(
        from, x -> function.apply(Objects.requireNonNull(x)));
  }

  private Collections2() {}
}
