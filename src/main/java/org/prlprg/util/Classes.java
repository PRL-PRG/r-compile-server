package org.prlprg.util;

import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Sets;
import java.lang.reflect.Modifier;
import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Deque;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.stream.Stream;

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

  /**
   * A {@link Comparator} that sorts classes so that subclasses are before superclasses.
   *
   * <p>Afterwards, it sorts by name, so the order is deterministic and total.
   */
  public static Comparator<Class<?>> assignableComparator() {
    return (a, b) -> {
      if (a == b) {
        return 0;
      }
      if (a.isAssignableFrom(b)) {
        return 1;
      }
      if (b.isAssignableFrom(a)) {
        return -1;
      }
      return a.getName().compareTo(b.getName());
    };
  }

  /**
   * Iterate the superclasses of {@code clazz} (including {@code clazz} itself iff {@code
   * includeSelf} is set), including inherited interfaces. Guarantees that:
   *
   * <ul>
   *   <li>Directly inherited classes and interfaces are yielded before transitively inherited ones.
   *   <li>If {@code clazz} is a record, {@link Record} is yielded second-last.
   *   <li>{@link Object} is yielded last.
   * </ul>
   */
  public static Iterable<Class<?>> superclassChain(Class<?> clazz, boolean includeSelf) {
    return () ->
        new Iterator<>() {
          final Deque<Class<?>> worklist = new ArrayDeque<>();
          final Set<Class<?>> seen = new HashSet<>();
          // Make sure that `Record.class` is iterated second-last, and `Object.class` is iterated
          // last.
          final boolean isRecord = clazz.isRecord();

          {
            worklist.add(clazz);
            seen.add(clazz);
            if (!includeSelf) {
              next();
            }
          }

          @Override
          public boolean hasNext() {
            return !worklist.isEmpty()
                || (isRecord && !seen.contains(Record.class))
                || !seen.contains(Object.class);
          }

          @Override
          public Class<?> next() {
            if (worklist.isEmpty()) {
              if (isRecord && seen.add(Record.class)) {
                return Record.class;
              } else if (seen.add(Object.class)) {
                return Object.class;
              }
              throw new IllegalStateException("No more elements");
            }

            var next = worklist.removeFirst();

            if (next.getSuperclass() != null
                && next.getSuperclass() != Record.class
                && next.getSuperclass() != Object.class
                && seen.add(next.getSuperclass())) {
              worklist.add(next.getSuperclass());
            }
            for (var iface : next.getInterfaces()) {
              if (seen.add(iface)) {
                worklist.add(iface);
              }
            }

            return next;
          }
        };
  }

  /**
   * Streams every class or interface inherited by all the given classes, ordered so that subclasses
   * are before superclasses.
   */
  @SuppressWarnings("unchecked")
  public static <A> Stream<Class<? extends A>> streamCommonSuperclasses(
      Class<A> class1, Class<?>... classes) {
    return Stream.concat(Stream.of(class1), Arrays.stream(classes))
        .map(clazz -> (Set<Class<?>>) ImmutableSet.copyOf(superclassChain(clazz, true)))
        .reduce(ImmutableSet.of(), Sets::intersection)
        .stream()
        .sorted(assignableComparator())
        .map(clazz -> (Class<? extends A>) clazz);
  }

  /**
   * Returns every class or interface inherited by all the given classes, ordered so that subclasses
   * are before superclasses.
   */
  public static <A> List<Class<? extends A>> commonSuperclasses(
      Class<A> class1, Class<?>... classes) {
    return streamCommonSuperclasses(class1, classes).toList();
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
   * Return the descendant in the permitted subclass hierarchy with the given simple name.
   *
   * <p>The "hierarchy" as defined above is recursive and include the given class. Non-sealed
   * subclasses are included, even non-final ones, but they are leaf nodes.
   *
   * <p>Returns {@code null}
   *
   * @throws IllegalArgumentException If the given class is not sealed or final.
   *     <p><b>OR</b> if no such descendant is found.
   */
  public static <T> Class<? extends T> permittedSubclassWithSimpleName(
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
