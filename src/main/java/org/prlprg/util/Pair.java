package org.prlprg.util;

@SuppressWarnings("MissingJavadoc")
public record Pair<A, B>(A first, B second) {
  public static <A, B> Pair<A, B> of(A first, B second) {
    return new Pair<>(first, second);
  }
}
