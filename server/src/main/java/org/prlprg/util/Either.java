package org.prlprg.util;

import java.util.NoSuchElementException;

@SuppressWarnings("MissingJavadoc")
public sealed interface Either<L, R> permits Left, Right {
  static <L, R> Either<L, R> left(L left) {
    return new Left<>(left);
  }

  static <L, R> Either<L, R> right(R right) {
    return new Right<>(right);
  }

  boolean isLeft();

  boolean isRight();

  L getLeft();

  R getRight();

  <T> T destruct(
      java.util.function.Function<? super L, ? extends T> ifLeft,
      java.util.function.Function<? super R, ? extends T> ifRight);
}

record Left<L, R>(L left) implements Either<L, R> {
  @Override
  public boolean isLeft() {
    return true;
  }

  @Override
  public boolean isRight() {
    return false;
  }

  @Override
  public L getLeft() {
    return left;
  }

  @Override
  public R getRight() {
    throw new NoSuchElementException("This either contains left value");
  }

  @Override
  public <T> T destruct(
      java.util.function.Function<? super L, ? extends T> ifLeft,
      java.util.function.Function<? super R, ? extends T> ifRight) {
    return ifLeft.apply(left);
  }
}

record Right<L, R>(R right) implements Either<L, R> {
  @Override
  public boolean isLeft() {
    return false;
  }

  @Override
  public boolean isRight() {
    return true;
  }

  @Override
  public L getLeft() {
    throw new NoSuchElementException("This either contains right value");
  }

  @Override
  public R getRight() {
    return right;
  }

  @Override
  public <T> T destruct(
      java.util.function.Function<? super L, ? extends T> ifLeft,
      java.util.function.Function<? super R, ? extends T> ifRight) {
    return ifRight.apply(right);
  }
}
