package org.prlprg.util;

import java.lang.reflect.Constructor;
import java.lang.reflect.Executable;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.RecordComponent;
import java.util.Arrays;
import java.util.Objects;
import java.util.Optional;
import java.util.stream.Stream;
import javax.annotation.Nullable;

public class Reflection {
  /**
   * Reflectively get the record components, converting all exceptions to runtime exceptions.
   *
   * @throws IllegalArgumentException If {@code target} isn't a record.
   */
  public static Iterable<Optional<Object>> getComponentValues(Record target) {
    return () -> streamComponentValues(target).iterator();
  }

  /**
   * Reflectively get the record components, converting all exceptions to runtime exceptions.
   *
   * @throws IllegalArgumentException If {@code target} isn't a record.
   */
  public static Stream<Optional<Object>> streamComponentValues(Record target) {
    assert target.getClass().isRecord()
        : "target is an instance of `Record` but `getClass().isRecord()` is false?";
    return Arrays.stream(target.getClass().getRecordComponents())
        .map(c -> Optional.ofNullable(getComponentValue(target, c)));
  }

  /** Reflectively get the record component, converting all exceptions to runtime exceptions. */
  public static @Nullable Object getComponentValue(Record target, RecordComponent component) {
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
   *     <p><b>OR</b> if multiple methods in {@code target} have {@code methodName}.
   */
  public static <T> T construct(Class<T> target, @Nullable Object... arguments) {
    try {
      @SuppressWarnings("unchecked")
      var constructor =
          (Constructor<T>)
              getMethodThatCanBeCalledWithArguments(
                  "constructors", Arrays.stream(target.getConstructors()), target, arguments);

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
   *     <p><b>OR</b> if multiple methods in {@code target} have {@code methodName}.
   */
  public static Object callByName(
      Object target, Class<?> methodClass, String methodName, @Nullable Object... arguments) {
    try {
      var method =
          getMethodThatCanBeCalledWithArguments(
              "methods named " + methodName,
              Arrays.stream(methodClass.getDeclaredMethods())
                  .filter(m -> m.getName().equals(methodName)),
              target.getClass(),
              arguments);

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

  /**
   * Filters the given stream to only return methods that can be called with the given arguments.
   * Then if there is one method, returns it, otherwise throws a descriptive error that none or
   * multiple suitable methods were found.
   */
  private static <M extends Executable> M getMethodThatCanBeCalledWithArguments(
      String methodDesc, Stream<M> methodsStream, Class<?> clazz, @Nullable Object... arguments) {
    // Each argument can be null, but not the entire array.
    Objects.requireNonNull(arguments);

    var filteredMethods = methodsStream.filter(m -> canBeCalledWith(m, arguments)).toList();
    return switch (filteredMethods.size()) {
      case 0 ->
          throw new IllegalArgumentException(
              "no "
                  + methodDesc
                  + " in "
                  + clazz
                  + " support arguments of types ["
                  + Strings.join(", ", o -> o == null ? "null" : o.getClass().getName(), arguments)
                  + "]");
      case 1 -> filteredMethods.getFirst();
      default ->
          throw new IllegalArgumentException(
              "multiple "
                  + methodDesc
                  + " in "
                  + clazz
                  + " support arguments of types ["
                  + Strings.join(", ", o -> o == null ? "null" : o.getClass().getName(), arguments)
                  + "]");
    };
  }

  /**
   * Whether the given method can be called with the given arguments.
   *
   * <p>i.e. whether the given method's parameters' types are supertypes of the given arguments'
   * types, and the number of parameters are the same as the given number of arguments.
   *
   * <p>Currently, variable-argument methods are not supported: given a var-args method, this will
   * simply return {@code false}.
   */
  private static boolean canBeCalledWith(Executable m, @Nullable Object... arguments) {
    // The `@Nullable` is supposed to apply to the arguments, not the array.
    Objects.requireNonNull(arguments);

    return !m.isVarArgs()
        && m.getParameterCount() == arguments.length
        && Streams.zip(
                Arrays.stream(m.getParameterTypes())
                    .map(c -> c.isPrimitive() ? Classes.boxed(c) : c),
                Arrays.stream(arguments),
                (clazz, arg) -> arg == null || clazz.isInstance(arg))
            .allMatch(b -> b);
  }

  private Reflection() {}
}
