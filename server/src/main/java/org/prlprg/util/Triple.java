package org.prlprg.util;

@SuppressWarnings("MissingJavadoc")
public record Triple<A, B, C>(A first, B second, C third) {
  public static <A, B, C> Triple<A, B, C> of(A first, B second, C third) {
    return new Triple<>(first, second, third);
  }
}
