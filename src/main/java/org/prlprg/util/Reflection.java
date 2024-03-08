package org.prlprg.util;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.RecordComponent;

public class Reflection {
  /** Reflectively construct the class, converting all exceptions to runtime exceptions. */
  public static <T> T construct(Class<T> cls, Object... arguments) {
    try {
      return cls.getConstructor().newInstance(arguments);
    } catch (InstantiationException
        | IllegalAccessException
        | NoSuchMethodException
        | InvocationTargetException e) {
      throw new RuntimeException("failed to reflectively construct", e);
    }
  }

  /** Reflectively get the record component, converting all exceptions to runtime exceptions. */
  public static Object getComponent(Object target, RecordComponent component) {
    try {
      return component.getAccessor().invoke(target);
    } catch (IllegalAccessException | InvocationTargetException e) {
      throw new RuntimeException("failed to reflectively get record component", e);
    }
  }

  /** Reflectively call the method, converting all exceptions to runtime exceptions. */
  public static Object call(Object target, String methodName, Object... arguments) {
    try {
      var argumentClasses = new Class<?>[arguments.length];
      for (int i = 0; i < arguments.length; i++) {
        argumentClasses[i] = arguments[i].getClass();
      }

      return target.getClass().getMethod(methodName, argumentClasses).invoke(target, arguments);
    } catch (IllegalAccessException | InvocationTargetException | NoSuchMethodException e) {
      throw new RuntimeException("failed to reflectively call method", e);
    }
  }

  private Reflection() {}
}
