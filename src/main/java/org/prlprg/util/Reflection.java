package org.prlprg.util;

import com.google.common.collect.Streams;
import io.github.classgraph.ClassGraph;
import java.lang.annotation.Annotation;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.RecordComponent;
import java.util.Arrays;
import java.util.Objects;
import java.util.function.Function;
import java.util.stream.Stream;
import org.prlprg.parseprint.ParseMethod;

public class Reflection {
  /** Reflectively construct the class, converting all exceptions to runtime exceptions. */
  public static <T> T construct(Class<T> cls, Object... arguments) {
    try {
      return cls.getConstructor().newInstance(arguments);
    } catch (InvocationTargetException e) {
      if (e.getCause() instanceof RuntimeException e1) {
        throw e1;
      } else if (e.getCause() instanceof Error e1) {
        throw e1;
      }
      throw new RuntimeException("checked exception in reflectively called constructor", e);
    } catch (ReflectiveOperationException e) {
      throw new RuntimeException("failed to reflectively construct", e);
    }
  }

  /**
   * Reflectively get the record components, converting all exceptions to runtime exceptions.
   *
   * @throws IllegalArgumentException If {@code target} isn't a record.
   */
  public static Iterable<Object> getComponents(Record target) {
    return () -> streamComponents(target).iterator();
  }

  /**
   * Reflectively get the record components, converting all exceptions to runtime exceptions.
   *
   * @throws IllegalArgumentException If {@code target} isn't a record.
   */
  public static Stream<Object> streamComponents(Record target) {
    if (!target.getClass().isRecord()) {
      throw new IllegalArgumentException("target is not a record");
    }
    return Arrays.stream(target.getClass().getRecordComponents()).map(c -> getComponent(target, c));
  }

  /** Reflectively get the record component, converting all exceptions to runtime exceptions. */
  public static Object getComponent(Record target, RecordComponent component) {
    try {
      return component.getAccessor().invoke(target);
    } catch (InvocationTargetException e) {
      if (e.getCause() instanceof RuntimeException e1) {
        throw e1;
      } else if (e.getCause() instanceof Error e1) {
        throw e1;
      }
      throw new RuntimeException(
          "checked exception in reflectively called record component accessor", e);
    } catch (ReflectiveOperationException e) {
      throw new RuntimeException("failed to reflectively get record component", e);
    }
  }

  /**
   * Reflectively call the method in the given class with the given name, converting all exceptions
   * to runtime exceptions.
   *
   * <p>It only searches methods within the given class, but can call private methods. It finds the
   * only overload with the method name that can be called with the given arguments, and will call
   * regardless of whether the types are correct. It also can't call var-args methods.
   *
   * @throws IllegalArgumentException If no methods in {@code target} have {@code methodName}.
   * @throws IllegalArgumentException If multiple methods in {@code target} have {@code methodName}.
   */
  @SuppressWarnings("UnusedReturnValue")
  public static Object callByName(
      Object target, Class<?> methodClass, String methodName, Object... arguments) {
    try {
      @SuppressWarnings("UnstableApiUsage")
      var methods =
          Arrays.stream(methodClass.getDeclaredMethods())
              .filter(
                  m ->
                      m.getName().equals(methodName)
                          && !m.isVarArgs()
                          && m.getParameterCount() == arguments.length
                          && Streams.zip(
                                  Arrays.stream(m.getParameterTypes()),
                                  Arrays.stream(arguments),
                                  Class::isInstance)
                              .allMatch(b -> b))
              .toList();
      var method =
          switch (methods.size()) {
            case 0 -> throw new IllegalArgumentException("no methods in target have methodName");
            case 1 -> methods.getFirst();
            default ->
                throw new IllegalArgumentException("multiple methods in target have methodName");
          };

      var oldIsAccessible = method.canAccess(target);
      method.setAccessible(true);
      var result = method.invoke(target, arguments);
      method.setAccessible(oldIsAccessible);
      return result;
    } catch (InvocationTargetException e) {
      if (e.getCause() instanceof RuntimeException e1) {
        throw e1;
      } else if (e.getCause() instanceof Error e1) {
        throw e1;
      }
      throw new RuntimeException("checked exception in reflectively called method", e);
    } catch (ReflectiveOperationException e) {
      throw new RuntimeException("failed to reflectively call method", e);
    }
  }

  /** Return the superclass, its superclass, and so on. */
  public static Stream<Class<?>> streamSuperclassChain(Class<?> cls, boolean includeSelf) {
    return Stream.iterate(
        includeSelf ? cls : cls.getSuperclass(), Objects::nonNull, Class::getSuperclass);
  }

  /** Return the superclass, its superclass, and so on. */
  public static Iterable<Class<?>> superclassChain(Class<?> cls, boolean includeSelf) {
    return () -> streamSuperclassChain(cls, includeSelf).iterator();
  }

  /**
   * Find and process all methods with the annotation in {@link org.prlprg}.
   *
   * <p>Uses <a href="https://github.com/classgraph/classgraph">ClassGraph</a>.
   *
   * @param processMethods function is provided with a stream of methods that all have an annotation
   *     of the given class, and its return is returned by this function.
   */
  public static <R> R findAndProcessMethodsWithAnnotation(
      Class<? extends Annotation> annotationClass, Function<Stream<Method>, R> processMethods) {
    try (var scanResult = Reflection.classGraph().enableMethodInfo().scan()) {
      var stream =
          scanResult.getClassesWithMethodAnnotation(annotationClass).loadClasses().stream()
              .flatMap(clazz -> Arrays.stream(clazz.getDeclaredMethods()))
              .filter(method -> method.getAnnotation(ParseMethod.class) != null);
      return processMethods.apply(stream);
    }
  }

  /**
   * Creates a {@link ClassGraph} to scan reflection data in {@link org.prlprg}.
   *
   * <p>Main purpose is to get all locations of some annotation.
   */
  private static ClassGraph classGraph() {
    return new ClassGraph().acceptPackages("org.prlprg");
  }

  private Reflection() {}
}
