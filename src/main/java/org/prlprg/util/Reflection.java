package org.prlprg.util;

import com.google.common.collect.Streams;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.RecordComponent;
import java.util.Arrays;
import java.util.stream.Stream;

public class Reflection {
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
   * Reflectively construct the class, converting all exceptions to runtime exceptions.
   *
   * <p>It can call private constructors. It finds the only overload whose parameter types the given
   * arguments are instances of, and it can't find var-args methods.
   *
   * @throws IllegalArgumentException If no methods in {@code target} have {@code methodName}.
   * @throws IllegalArgumentException If multiple methods in {@code target} have {@code methodName}.
   */
  @SuppressWarnings("unchecked")
  public static <T> T construct(Class<T> target, Object... arguments) {
    try {
      @SuppressWarnings("UnstableApiUsage")
      var constructors =
          Arrays.stream(target.getConstructors())
              .filter(
                  m ->
                      !m.isVarArgs()
                          && m.getParameterCount() == arguments.length
                          && Streams.zip(
                                  Arrays.stream(m.getParameterTypes())
                                      .map(c -> c.isPrimitive() ? Classes.boxed(c) : c),
                                  Arrays.stream(arguments),
                                  Class::isInstance)
                              .allMatch(b -> b))
              .toList();
      var constructor =
          switch (constructors.size()) {
            case 0 ->
                throw new IllegalArgumentException(
                    "no constructors in "
                        + target
                        + " support arguments of types ["
                        + Strings.join(", ", o -> o.getClass().getName(), arguments)
                        + "]");
            case 1 -> (Constructor<T>) constructors.getFirst();
            default ->
                throw new IllegalArgumentException(
                    "multiple constructors in "
                        + target
                        + " support arguments of types ["
                        + Strings.join(", ", o -> o.getClass().getName(), arguments)
                        + "]");
          };

      constructor.setAccessible(true);
      return constructor.newInstance(arguments);
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
   * Reflectively call the method in the given class with the given name, converting all exceptions
   * to runtime exceptions.
   *
   * <p>It only searches methods within the given class, but can call private methods. It finds the
   * only overload with the method name and parameter types which the given arguments are instances
   * of, and it can't find var-args methods.
   *
   * @throws IllegalArgumentException If no methods in {@code target} have {@code methodName}.
   * @throws IllegalArgumentException If multiple methods in {@code target} have {@code methodName}.
   */
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
                                  Arrays.stream(m.getParameterTypes())
                                      .map(c -> c.isPrimitive() ? Classes.boxed(c) : c),
                                  Arrays.stream(arguments),
                                  Class::isInstance)
                              .allMatch(b -> b))
              .toList();
      var method =
          switch (methods.size()) {
            case 0 ->
                throw new IllegalArgumentException(
                    "no methods in "
                        + target
                        + " named "
                        + methodName
                        + " supporting arguments of types ["
                        + Strings.join(", ", o -> o.getClass().getName(), arguments)
                        + "]");
            case 1 -> methods.getFirst();
            default ->
                throw new IllegalArgumentException(
                    "multiple methods in "
                        + target
                        + " named "
                        + methodName
                        + " supporting arguments of types ["
                        + Strings.join(", ", o -> o.getClass().getName(), arguments)
                        + "]");
          };

      method.setAccessible(true);
      return method.invoke(target, arguments);
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

  private Reflection() {}
}
