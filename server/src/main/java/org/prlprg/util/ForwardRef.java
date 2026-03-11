package org.prlprg.util;

import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Wrapper that can be set after creation, and only set once
///
/// For parsing and construction terms use before said terms are declared.
public abstract class ForwardRef<T> {
  private @Nullable T inner;

  /// An uninitialized deferred.
  public ForwardRef() {}

  /// A deferred that is already initialized iff `inner` is non-null.
  public ForwardRef(@Nullable T inner) {
    this.inner = inner;
  }

  public T get() {
    return Objects.requireNonNull(inner, "Deferred was not initialized");
  }

  public void set(T inner) {
    if (this.inner != null) {
      throw new IllegalStateException("Deferred was already initialized");
    }
    this.inner = inner;
  }

  @Override
  public boolean equals(Object o) {
    if (!(o instanceof ForwardRef<?> forwardRef)) {
      return false;
    }
    return Objects.equals(get(), forwardRef.get());
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(get());
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(get());
  }
}
