package org.prlprg.parseprint;

import com.google.common.collect.Streams;
import java.lang.annotation.Annotation;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.util.Classes;
import org.prlprg.util.InvalidAnnotationError;
import org.prlprg.util.Pair;

/**
 * A Rust/Haskell-style typeclass system, built lazily using reflection.
 *
 * <h1>Why?</h1>
 *
 * <p>This is bad in general, since the reflection is slower, doesn't provide the compiler hints and
 * otherwise adds redundancy and unneeded complexity.
 *
 * <p>But in the particular case of {@link org.prlprg.parseprint.ParseMethod ParseMethod} and {@link
 * org.prlprg.parseprint.PrintMethod}, Java isn't expressive enough to have a solution which doesn't
 * create tons of boilerplate.
 *
 * <h2>Use cases:</h2>
 *
 * <li>To create a static method which can return an instance of whatever type it's declared on.
 *
 *     <pre>
 *   // Not valid Java code, this is what the typeclass system enables.
 *
 *   interface FromString {
 *     static Self fromString(String s);
 *   }
 *
 *   class Foo implements FromString {
 *     static Foo fromString(String s) { ... }
 *   }
 *
 *   void &lt;T extends FromString&gt; List&lt;T&gt; parseSequence(String s) {
 *     return Arrays.stream(s.split(",")).map(T::fromString).collect(Collectors.toList());
 *   }
 * </pre>
 *
 * <li>To create a method which takes specific context, but has a fallback that takes no context.
 *
 *     <pre>
 *   // Also not valid Java code, this is what the typeclass system enables.
 *
 *   interface ToString&lt;Context&gt; {
 *     String toString(Context ctx);
 *   }
 *
 *   class Foo implements ToString&lt;FooContext&gt; { ... }
 *
 *   default extension Object implements ToString&lt;?&gt; {
 *       String toString(Object ctx) { return toString(); }
 *   }
 * </pre>
 *
 *     <h1>Usage</h1>
 *
 *     To "create" {@code SomeTypeclass}:
 *
 *     <ul>
 *       <li>Create an annotation class for the method, e.g. {@code SomeTypeclassMethod}.
 *       <li>Add a method with this annotation to a class to make it implement the typeclass. Add a
 *           context parameter to make it implement the typeclass for a specific context, otherwise
 *           it will implement generically for any or no context (if there is both a
 *           specific-context and generic-context implementation, the specific-context one is
 *           selected).
 *       <li>Add static methods with the annotation to possible context classes, which take a {@code
 *           self} parameter that is the actual class the method is implemented on, as another way
 *           to implement the typeclass which is outside of the class itself (instead in the context
 *           class).
 *       <li>Create a class containing static methods with the annotation that take a {@code self}
 *           parameter, to implement the typeclass outside of both the class itself and context
 *           class. Then explicitly call via {@link TypeclassMap#registerBuiltins(Class)} so that
 *           the methods are found.
 *     </ul>
 *
 *     <h2>Example</h2>
 *
 *     <pre>
 *   class Foo {
 *     &#64;FromStringMethod
 *     static Foo fromString(String s) { ... }
 *
 *     &#64;ToStringMethod
 *     String toString(FooContext c) { ... }
 *   }
 *
 *   class BarContext {
 *     &#64;ToStringMethod
 *     static String toString(Foo self, BarContext c) { ... }
 *   }
 *
 *   class BuiltinExtensions {
 *     &#64;FromStringMethod
 *     static Integer fromString(String s) { ... }
 *
 *     &#64;ToStringMethod
 *     static String toString(Integer self) { ... }
 *   }
 *
 *   // Somewhere else
 *   class FromToString {
 *       private static TypeclassMap&lt;FromStringMethod, FromStringMethod_&gt; FROM_STRING_METHODS = new TypeclassMap&lt;&gt;(FromStringMethod.class, FromStringMethod_::load);
 *       private static TypeclassMap&lt;ToStringMethod, ToStringMethod_&gt; TO_STRING_METHODS = new TypeclassMap&lt;&gt;(ToStringMethod.class, ToStringMethod_::load);
 *
 *       static {
 *         TO_STRING_METHODS.registerBuiltins(BuiltinExtensions.class);
 *       }
 *
 *       &lt;T&gt; T fromString(Class&lt;T&gt; clazz, String s) {
 *           return Objects.requireNonNull(FROM_STRING_METHODS.lookup(clazz), "no fromString method for " + clazz).invoke(clazz, s);
 *       }
 *
 *       String toString(Object self, Object context) {
 *           var m = TO_STRING_METHODS.lookup(self.getClass(), context.getClass());
 *           if (m != null) {
 *               return m.invoke(self, context);
 *           }
 *           m = TO_STRING_METHODS.lookup(self.getClass());
 *           if (m != null) {
 *               return m.invoke(self, null);
 *           }
 *
 *           return m.toString();
 *       }
 *
 *       private record FromStringMethod_(&#64;Override Class&lt;?&gt; objectClass, &#64;Override Class&lt;?&gt; contextClass, Method m, ...) {
 *         static FromStringMethod_ load(FromStringMethod a, Method m) { ... }
 *         &#64;Override
 *         Class&lt;?&gt; objectClass() {
 *             return m.getReturnType();
 *         }
 *         &lt;T&gt; T invoke(Class&lt;T&gt; clazz, String s) { ... }
 *       }
 *
 *       private record ToStringMethod_(&#64;Override Class&lt;?&gt; objectClass, &#64;Override Class&lt;?&gt; contextClass, Method m, ...) {
 *         static ToStringMethod_ load(ToStringMethod a, Method m) { ... }
 *         &#64;Override
 *         Class&lt;?&gt; objectClass() {
 *             return Modifiers.isStatic(m.getModifiers()) ? m.getParameterTypes()[0] : m.getDeclaringClass();
 *         }
 *         &#64;Override
 *         Class&lt;?&gt; contextClass() {
 *             return m.getParameterCount() == 2 ? m.getParameterTypes()[1] : Void.class;
 *         }
 *         String invoke(Object self, @Nullable Object context) { ... }
 *       }
 *   }
 * </pre>
 */
class TypeclassMap<A extends Annotation, M extends TypeclassMethod> {
  private final Class<A> annotationClass;
  private final TypeclassMethodLoader<A, M> loader;
  private final Map<Class<?>, Map<Class<?>, M>> methods = new HashMap<>();
  private final Set<Class<?>> registeredObjectClasses = new HashSet<>();
  private final Set<Class<?>> registeredContextClasses = new HashSet<>();
  // So we only have to resolve a specific object and context class once.
  private final Map<Pair<Class<?>, Class<?>>, Optional<M>> memoizedLookups = new HashMap<>();

  public TypeclassMap(Class<A> annotationClass, TypeclassMethodLoader<A, M> loader) {
    this.annotationClass = annotationClass;
    this.loader = loader;
  }

  // region lookup
  /**
   * Lookup a method for a specific object class and no context.
   *
   * @see #lookup(Class, Class)
   */
  public @Nullable M lookup(Class<?> clazz) {
    return lookup(clazz, Void.class);
  }

  /**
   * Lookup a method for a specific object and context class. The process is as follows:
   *
   * <ul>
   *   <li>First, it simultaneously looks for (i.e. returns an error if there are multiple
   *       matches)...
   *       <ul>
   *         <li>...a method within the object's class which takes (second argument) a context of
   *             the exact class as given.
   *         <li>...a static method within the context class which, depending on whether the method
   *             is static, takes (first argument) or returns the object's class.
   *         <li>...a builtin registered static method with both the specific object and context.
   *       </ul>
   *   <li>If such a method isn't found in the object's class or context class, it will then look
   *       for the method in each of the object's superclasss and interfaces. <i>It will not try
   *       superclasses of the context class.</i>
   *   <li>If no superclasses or interfaces have a method for the provided context class, or if the
   *       context class is {@link Void}, it will look for a method which takes <b>no context</b>,
   *       within the object class, context class, and builtins, then within superclasses and
   *       interfaces.
   *   <li>If no suitable methods are found, it will return {@code null}.
   * </ul>
   *
   * @throws InvalidAnnotationError if there are ambiguities when resolving methods. The {@link
   *     TypeclassMethodLoader} may also throw this.
   */
  public @Nullable M lookup(Class<?> clazz, Class<?> contextClass) {
    var args = Pair.<Class<?>, Class<?>>of(clazz, contextClass);
    if (memoizedLookups.containsKey(args)) {
      return memoizedLookups.get(args).orElse(null);
    }

    // We *must* use the boxed version
    clazz = clazz.isPrimitive() ? Classes.boxed(clazz) : clazz;

    lazilyRegisterObjectClassAndSupers(clazz);
    lazilyRegisterContextClass(contextClass);

    // Try to find a method for the context.
    if (contextClass != Void.class) {
      var result = lookupSpecificContext(clazz, contextClass);
      if (result != null) {
        memoizedLookups.put(args, Optional.of(result));
        return result;
      }
    }

    // Try to find a method for no context, or return null.
    var result = lookupSpecificContext(clazz, Void.class);
    memoizedLookups.put(args, Optional.ofNullable(result));
    return result;
  }

  /**
   * Same as {@link #lookup(Class, Class)}, but doesn't fallback to a method with no context, and
   * doesn't lazily register the classes.
   */
  private @Nullable M lookupSpecificContext(Class<?> clazz, Class<?> contextClass) {
    for (var superclass : methodSuperclassChain(clazz, true)) {
      var superclassMethods = methods.get(superclass);
      if (superclassMethods.containsKey(contextClass)) {
        return superclassMethods.get(contextClass);
      }
    }

    return null;
  }

  // endregion lookup

  // region register
  public void registerBuiltins(Class<?> classContainingBuiltins) {
    for (var method : classContainingBuiltins.getDeclaredMethods()) {
      if (!method.isAnnotationPresent(annotationClass)) {
        continue;
      }

      var typeclassMethod = loader.load(method.getAnnotation(annotationClass), method);
      var objectClass = typeclassMethod.objectClass();
      var contextClass = typeclassMethod.contextClass();

      registerMethod(objectClass, contextClass, typeclassMethod);
    }
  }

  private void lazilyRegisterObjectClassAndSupers(Class<?> clazz) {
    if (!registeredObjectClasses.add(clazz)) {
      // This means we registered all future superclasses as well.
      return;
    }
    registerObjectClass(clazz);

    for (var superclass : methodSuperclassChain(clazz, false)) {
      if (!registeredObjectClasses.add(superclass)) {
        // This *doesn't* necessarily mean we registered all future superclasses as well, since they
        // may not just real superclasses, but siblings of the current class if it's itself a
        // superclass (a potential optimization is to extract the iterator adn tell it to stop
        // iterating parents).
        continue;
      }
      registerObjectClass(superclass);
    }
  }

  private void lazilyRegisterContextClass(Class<?> clazz) {
    if (!registeredContextClasses.add(clazz)) {
      return;
    }

    registerContextClass(clazz);
  }

  private void registerObjectClass(Class<?> clazz) {
    var classMethods = methods.computeIfAbsent(clazz, _ -> new HashMap<>());
    for (var method : clazz.getDeclaredMethods()) {
      if (!method.isAnnotationPresent(annotationClass)) {
        continue;
      }

      var typeclassMethod = loader.load(method.getAnnotation(annotationClass), method);
      var actualObjectClass = typeclassMethod.objectClass();
      var contextClass = typeclassMethod.contextClass();

      // Have to check the superclass chain (vs `isAssignableFrom`) because we allow the classes in
      // @InterfaceHiddenMembers annotations to register the method.
      if (Streams.stream(methodSuperclassChain(actualObjectClass, true)).noneMatch(clazz::equals)) {
        throw new InvalidAnnotationError(
            method,
            "method in object class "
                + clazz
                + " is for "
                + actualObjectClass
                + "; it's only allowed to be for itself or a subclass");
      }

      registerMethod(classMethods, actualObjectClass, contextClass, typeclassMethod);
    }
  }

  private void registerContextClass(Class<?> contextClass) {
    for (var method : contextClass.getDeclaredMethods()) {
      if (!method.isAnnotationPresent(annotationClass)) {
        continue;
      }

      var typeclassMethod = loader.load(method.getAnnotation(annotationClass), method);
      var objectClass = typeclassMethod.objectClass();
      var actualContextClass = typeclassMethod.contextClass();

      if (actualContextClass != contextClass) {
        throw new InvalidAnnotationError(
            method,
            "method in context class "
                + contextClass
                + " is for a different context class "
                + actualContextClass);
      }

      registerMethod(objectClass, contextClass, typeclassMethod);
    }
  }

  private void registerMethod(Class<?> objectClass, Class<?> contextClass, M method) {
    var classMethods = methods.computeIfAbsent(objectClass, _ -> new HashMap<>());
    registerMethod(classMethods, objectClass, contextClass, method);
  }

  private void registerMethod(
      Map<Class<?>, M> objectClassMethods, Class<?> objectClass, Class<?> contextClass, M method) {
    if (objectClassMethods.containsKey(contextClass)) {
      throw new InvalidAnnotationError(
          method + " and " + objectClassMethods.get(contextClass),
          "multiple methods for " + contextClass + " in " + objectClass);
    }
    objectClassMethods.put(contextClass, method);
  }

  // endregion register

  private Iterable<Class<?>> methodSuperclassChain(Class<?> clazz, boolean includeSelf) {
    return () ->
        new Iterator<>() {
          final Deque<Class<?>> worklist = new ArrayDeque<>();
          final Set<Class<?>> seen = new HashSet<>();

          {
            worklist.add(clazz);
            seen.add(clazz);
            if (!includeSelf) {
              next();
            }
          }

          @Override
          public boolean hasNext() {
            return !worklist.isEmpty();
          }

          @Override
          public Class<?> next() {
            var next = worklist.removeFirst();

            if (next.getSuperclass() != null && seen.add(next.getSuperclass())) {
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
}
