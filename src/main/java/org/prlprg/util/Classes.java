package org.prlprg.util;

public final class Classes {
  /**
   * Get the object's {@link #getClass() class} with a more refined type.
   *
   * <p>As explained in {@link #getClass()}, the object's class is guaranteed to be its erased type.
   * Unfortunately Java's type system can't express this via a getter, so we have this static method
   * as a workaround.
   *
   * <p>Keep in mind that the actual erased type within the class may be more specific than the type
   * provided to this method, because the object may be a subclass.
   */
  @SuppressWarnings("unchecked")
  public static <T> Class<? extends T> classOf(T object) {
    return (Class<? extends T>) object.getClass();
  }

  private Classes() {}
}
