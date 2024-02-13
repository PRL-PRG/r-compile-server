package org.prlprg.util;

import java.util.function.BiFunction;
import java.util.function.Function;

/** Helper to create a recursive anonymous function. */
public class YCombinator {
  /**
   * Create a recursive function from a non-recursive function whose first argument is itself (the
   * function is defined the same as normal, except instead of recursing, it calls the first
   * argument).
   */
  public static <A, B> Function<A, B> apply(BiFunction<Function<A, B>, A, B> f) {
    return new Arity1<>(f);
  }

  private record Arity1<A, B>(BiFunction<Function<A, B>, A, B> f) implements Function<A, B> {
    @Override
    public B apply(A a) {
      return f.apply(this, a);
    }
  }

  private YCombinator() {}
}
