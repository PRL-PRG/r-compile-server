package org.prlprg.util;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.api.extension.ExtensionContext.Namespace;
import org.junit.jupiter.api.extension.ExtensionContext.Store;
import org.junit.jupiter.api.extension.ParameterContext;
import org.junit.jupiter.api.extension.ParameterResolutionException;
import org.junit.jupiter.api.extension.ParameterResolver;

/// Shares a lazily-constructed instance of `T` across tests.
///
/// `T`'s constructor arguments themselves are also singletons that may be shared by other
/// [SingletonParameterResolver]s.
public abstract class SingletonParameterResolver<T> implements ParameterResolver {
  private static final Namespace NAMESPACE =
      Namespace.create(SingletonParameterResolver.class.getName());

  /// Recursively construct `clazz` and dependencies, reusing what has already been constructed in
  // the root store.
  public static <T> T resolveSingleton(Class<T> clazz, ExtensionContext context) {
    return resolveSingleton(clazz, context.getRoot().getStore(NAMESPACE), new HashSet<>());
  }

  private static <T> T resolveSingleton(Class<T> clazz, Store store, Set<Class<?>> pending) {
    if (!pending.add(clazz)) {
      throw new IllegalStateException(
          "Cyclic dependency: "
              + Strings.join(" -> ", Class::getName, pending)
              + " --> "
              + clazz.getName());
    }

    try {
      T existing = store.get(clazz, clazz);
      if (existing != null) {
        return existing;
      }

      var singletonClassAnnotation = clazz.getAnnotation(SingletonClass.class);
      if (singletonClassAnnotation != null) {
        return clazz.cast(resolveSingleton(singletonClassAnnotation.value(), store, pending));
      }

      var ctors = clazz.getDeclaredConstructors();
      if (ctors.length != 1) {
        throw new IllegalStateException(
            "Expected exactly one constructor for "
                + clazz.getName()
                + ", found "
                + ctors.length);
      }
      var ctor = ctors[0];

      var args =
          Arrays.stream(ctor.getParameterTypes())
              .map(paramType -> resolveSingleton(paramType, store, pending))
              .toArray();

      T result;
      try {
        ctor.setAccessible(true);
        result = clazz.cast(ctor.newInstance(args));
      } catch (Exception e) {
        throw new RuntimeException("Failed to construct " + clazz.getName(), e);
      }

      store.put(clazz, result);
      return result;
    } finally {
      pending.remove(clazz);
    }
  }

  private final Class<T> clazz;

  protected SingletonParameterResolver(Class<T> clazz) {
    this.clazz = clazz;
  }

  @Override
  public boolean supportsParameter(
      ParameterContext parameterContext, ExtensionContext extensionContext)
      throws ParameterResolutionException {
    return parameterContext.getParameter().getType() == clazz;
  }

  @Override
  public T resolveParameter(ParameterContext parameterContext, ExtensionContext extensionContext)
      throws ParameterResolutionException {
    return resolveSingleton(clazz, extensionContext);
  }
}
