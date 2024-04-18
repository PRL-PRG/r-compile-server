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

  /**
   * Returns the boxed version of the given primitive class.
   *
   * <p>The generic type remains the same, because primitive class generics are already the boxed
   * type, since primitives can't be generic arguments.
   *
   * @throws IllegalArgumentException if the class isn't primitive.
   */
  @SuppressWarnings("unchecked")
  public static <T> Class<T> boxed(Class<T> primitiveClass) {
    if (!primitiveClass.isPrimitive()) {
      throw new IllegalArgumentException("Not a primitive type: " + primitiveClass.getName());
    }
    return (Class<T>)
        switch (primitiveClass.getName()) {
          case "boolean" -> Boolean.class;
          case "byte" -> Byte.class;
          case "short" -> Short.class;
          case "int" -> Integer.class;
          case "long" -> Long.class;
          case "float" -> Float.class;
          case "double" -> Double.class;
          case "char" -> Character.class;
          default ->
              throw new AssertionError("Unknown primitive type: " + primitiveClass.getName());
        };
  }

  private Classes() {}
}
