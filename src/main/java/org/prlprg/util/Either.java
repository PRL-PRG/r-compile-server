package org.prlprg.util;

@SuppressWarnings("MissingJavadoc")
public sealed interface Either<L, R> permits Left, Right {
  static <L, R> Either<L, R> left(L left) {
    return new Left<>(left);
  }

  static <L, R> Either<L, R> right(R right) {
    return new Right<>(right);
  }
}

record Left<L, R>(L left) implements Either<L, R> {}

record Right<L, R>(R right) implements Either<L, R> {}
