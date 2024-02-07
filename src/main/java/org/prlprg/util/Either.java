package org.prlprg.util;

public sealed interface Either<L, R> permits Left, Right {
  static <L, R> Either<L, R> left(L left) {
    return new Left<>(left);
  }

  static <L, R> Either<L, R> right(R right) {
    return new Right<>(right);
  }
}
