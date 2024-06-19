package org.prlprg.util;

import java.lang.reflect.Modifier;
import java.util.ArrayDeque;
import java.util.Arrays;

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
   * Get the sealed class's {@link Class#getPermittedSubclasses() permitted subclasses} with a more
   * refined type.
   *
   * <p>Assuming the given sealed class is its erased type, the returned classes are also guaranteed
   * to be their erased type. Unfortunately Java's type system can't express this via an instance
   * method, so we have this static method as a workaround.
   */
  @SuppressWarnings("unchecked")
  public static <T> Class<? extends T>[] permittedSubclassesOf(Class<? extends T> sealedClass) {
    return (Class<? extends T>[]) sealedClass.getPermittedSubclasses();
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

  /**
   * Return the descendant in the permitted subclass hierarchy with the given simple name.
   *
   * <p>The "hierarchy" as defined above is recursive and include the given class. Non-sealed
   * subclasses are included, even non-final ones, but they are leaf nodes.
   *
   * <p>Returns {@code null}
   *
   * @throws IllegalArgumentException If the given class is not sealed or final.
   * @throws IllegalArgumentException If no such descendant is found.
   */
  public static <T> Class<? extends T> sealedSubclassWithSimpleName(
      Class<? extends T> sealedClass, String simpleName) {
    if (!sealedClass.isSealed() && !Modifier.isFinal(sealedClass.getModifiers())) {
      throw new IllegalArgumentException("Not a sealed or final class: " + sealedClass.getName());
    }

    // We don't need `seen`, because iterating duplicates doesn't affect behavior,
    // and the hierarchy is a tree.
    var worklist = new ArrayDeque<Class<? extends T>>();
    worklist.add(sealedClass);
    while (!worklist.isEmpty()) {
      var current = worklist.removeFirst();
      if (current.getSimpleName().equals(simpleName)) {
        return current;
      }
      if (current.isSealed()) {
        worklist.addAll(Arrays.asList(permittedSubclassesOf(current)));
      }
    }

    throw new IllegalArgumentException(
        "No subclass of " + sealedClass.getName() + " with simple name: " + simpleName);
  }

  private Classes() {}
}
