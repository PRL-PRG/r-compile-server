package org.prlprg.util;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.RecordComponent;

public class Reflection {
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

  public static Object getComponent(Object target, RecordComponent component) {
    try {
      return component.getAccessor().invoke(target);
    } catch (IllegalAccessException | InvocationTargetException e) {
      throw new RuntimeException("failed to reflectively get record component", e);
    }
  }

  private Reflection() {}
}
