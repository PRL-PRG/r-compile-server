package org.prlprg.util;

import com.google.common.collect.Streams;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.RecordComponent;
import java.util.Arrays;

public class Reflection {
  /** Reflectively construct the class, converting all exceptions to runtime exceptions. */
  public static <T> T construct(Class<T> cls, Object... arguments) {
    try {
      return cls.getConstructor().newInstance(arguments);
    } catch (InstantiationException | IllegalAccessException | NoSuchMethodException e) {
      throw new RuntimeException("failed to reflectively construct", e);
    } catch (InvocationTargetException e) {
      if (e.getCause() instanceof RuntimeException e1) {
        throw e1;
      } else if (e.getCause() instanceof Error e1) {
        throw e1;
      }
      throw new RuntimeException("checked exception in reflectively called constructor", e);
    }
  }

  /** Reflectively get the record component, converting all exceptions to runtime exceptions. */
  public static Object getComponent(Object target, RecordComponent component) {
    try {
      return component.getAccessor().invoke(target);
    } catch (IllegalAccessException e) {
      throw new RuntimeException("failed to reflectively get record component", e);
    } catch (InvocationTargetException e) {
      if (e.getCause() instanceof RuntimeException e1) {
        throw e1;
      } else if (e.getCause() instanceof Error e1) {
        throw e1;
      }
      throw new RuntimeException(
          "checked exception in reflectively called record component accessor", e);
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
    } catch (IllegalAccessException e) {
      throw new RuntimeException("failed to reflectively call method", e);
    } catch (InvocationTargetException e) {
      if (e.getCause() instanceof RuntimeException e1) {
        throw e1;
      } else if (e.getCause() instanceof Error e1) {
        throw e1;
      }
      throw new RuntimeException("checked exception in reflectively called method", e);
    }
  }

  private Reflection() {}
}
