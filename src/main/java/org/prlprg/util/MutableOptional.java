package org.prlprg.util;

import java.util.Objects;
import java.util.Optional;
import javax.annotation.Nullable;

/** Like {@link java.util.Optional}, but mutable. */
public class MutableOptional<T> {
  @Nullable private T value;

  public static <T> MutableOptional<T> empty() {
    return new MutableOptional<>(null);
  }

  public static <T> MutableOptional<T> of(T value) {
    return new MutableOptional<>(Objects.requireNonNull(value));
  }

  public static <T> MutableOptional<T> ofNullable(@Nullable T value) {
    return new MutableOptional<>(value);
  }

  private MutableOptional(@Nullable T value) {
    this.value = value;
  }

  public @Nullable T get() {
    return value;
  }

  public void set(@Nullable T value) {
    this.value = value;
  }

  public void clear() {
    this.value = null;
  }

  public boolean isPresent() {
    return value != null;
  }

  public Optional<T> toOptional() {
    return Optional.ofNullable(value);
  }
}
