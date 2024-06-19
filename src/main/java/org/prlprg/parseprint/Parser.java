package org.prlprg.parseprint;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.io.Reader;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.Executable;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.List;
import java.util.Objects;
import java.util.Optional;
import java.util.function.Function;
import java.util.function.Supplier;
import javax.annotation.Nullable;
import org.prlprg.util.Classes;
import org.prlprg.util.InvalidAnnotationError;
import org.prlprg.util.UnreachableError;

/**
 * Parse objects from a stream of text whose classes have a registered static {@link ParseMethod}.
 *
 * <p>In addition to parsing any object with a registered {@link ParseMethod}, this provides access
 * to the {@link Scanner} to peek and consume specific chunks of text (e.g. whitespace and commas,
 * delimiters).
 *
 * <p>The parser may be configured via a context object via {@link Parser#withContext(Object)}: if
 * set, the parser will look for a {@link ParseMethod} which takes an additional argument that is
 * the context's class. If no such method is found, it will fallback and looks for a method which
 * takes no context, as usual. See {@link TypeclassMap#lookup(Class, Class)} for the specific way
 * the parser looks for {@link ParseMethod}s.
 *
 * @see Printer
 */
public class Parser {
  private static final TypeclassMap<ParseMethod, ParseMethod_> PARSE_METHODS =
      new TypeclassMap<>(ParseMethod.class, ParseMethod_::load);

  static {
    PARSE_METHODS.registerBuiltins(BuiltinParseMethods.class);
  }

  private final Scanner scanner;
  private final @Nullable Object context;

  // region constructors
  /**
   * Creates a {@link Parser} to only parse an object of the given class from the entire given
   * input, with no context.
   *
   * @throws ParseException if the object failed to parse.
   * @throws ParseException if the input wasn't entirely parsed, excluding trailing whitespace.
   */
  public static <T> T fromString(String s, Class<T> clazz) {
    return fromString(s, clazz, null);
  }

  /**
   * Creates a {@link Parser} to only parse an object of the given class from the entire given
   * input, with the given context.
   *
   * @throws ParseException if the object failed to parse.
   * @throws ParseException if the input wasn't entirely parsed, excluding trailing whitespace.
   */
  public static <T> T fromString(String s, Class<T> clazz, @Nullable Object context) {
    var p = new Parser(s).withContext(context);
    var obj = p.parse(clazz);
    p.scanner.skipWhitespace(true);
    if (!p.scanner.isAtEof()) {
      throw new ParseException(p.scanner.position(), "input not entirely parsed");
    }
    return obj;
  }

  private Parser(Scanner scanner, @Nullable Object context) {
    this.scanner = scanner;
    this.context = context;
  }

  /** Create a parser with the given input. */
  public Parser(Reader input) {
    scanner = new Scanner(input);
    context = null;
  }

  /** Create a parser with the given input. */
  public Parser(String input) {
    scanner = new Scanner(input);
    context = null;
  }

  /** Create a parser with the given input. */
  public Parser(File input) throws FileNotFoundException {
    scanner = new Scanner(input);
    context = null;
  }

  /** Create a parser with the given input. */
  public Parser(InputStream input) {
    scanner = new Scanner(input);
    context = null;
  }

  /**
   * Create a parser which reads from the same input stream, but has a different context.
   *
   * <p>This doesn't invalidate this parser, you can even use both parsers simultaneously. They
   * share the same stream, so anything parsed by one is also consumed in the other.
   *
   * @throws IllegalArgumentException If the context itself is a parser, because you probably meant
   *     to use that parser directly.
   */
  public Parser withContext(@Nullable Object context) {
    if (context instanceof Parser) {
      throw new IllegalArgumentException(
          "Can't assign parser as context, did you mean to use that parser directly?");
    }
    return new Parser(scanner, context);
  }

  // endregion constructors

  // region getters
  /** The underlying scanner which can be used to read text directly. */
  public Scanner scanner() {
    return scanner;
  }

  /**
   * The context associated with the parser.
   *
   * <p>This isn't typed, because the dispatched {@code parse} methods will have the correct context
   * type. Those methods should use that context instead. This is for parsers which can take no
   * context, but may want to use the context when it's provided (e.g. use a specific context to
   * parse children, but then revert to the original context to parse grandchildren; or special-case
   * on the specific context in part of the method).
   */
  public @Nullable Object context() {
    return context;
  }

  // endregion getters

  // region parse non-terminals
  /** Reflectively parseable one-argument generic collection types and their constructors. */
  private static final ImmutableMap<Class<?>, Function<Collection<?>, ?>> KNOWN_COLLECTION_TYPES =
      ImmutableMap.of(
          Collection.class, ArrayList::new,
          List.class, ArrayList::new,
          ArrayList.class, ArrayList::new,
          HashSet.class, HashSet::new,
          ImmutableList.class, ImmutableList::copyOf,
          ImmutableSet.class, ImmutableSet::copyOf);

  /**
   * Parse an object of the given generic type, with limited support for parameterized types.
   *
   * <p>Specifically:
   *
   * <ul>
   *   <li>If the type has no generic parameters, will invoke {@link #parse(Class)}.
   *   <li>If the type is a known collection type, will attempt to parse a list using {@link
   *       #parseList(Type, SkipWhitespace)}, then wrap in the correct type.
   *   <li>Otherwise, throws {@link UnsupportedOperationException} (must add to this method to
   *       support more types).
   * </ul>
   */
  public Object parse(Type type, SkipWhitespace skipWhitespaceIfList) {
    return switch (type) {
      case ParameterizedType t -> {
        if (t.getRawType() == Optional.class) {
          assert t.getActualTypeArguments().length == 1;
          yield parseOptional(t.getActualTypeArguments()[0], skipWhitespaceIfList);
        } else if (t.getRawType() instanceof Class<?> collClass
            && KNOWN_COLLECTION_TYPES.containsKey(collClass)) {
          var constructor = Objects.requireNonNull(KNOWN_COLLECTION_TYPES.get(collClass));
          assert t.getActualTypeArguments().length == 1;
          var asList = parseList(t.getActualTypeArguments()[0], skipWhitespaceIfList);
          yield constructor.apply(asList);
        } else if (t.getRawType() instanceof Class<?> clazz) {
          yield parse(clazz);
        } else {
          throw new UnsupportedOperationException(
              "can't parse parameterized type whose base type is of class "
                  + t.getRawType().getClass()
                  + ": "
                  + type);
        }
      }
      case GenericArrayType a -> {
        var elemType = a.getGenericComponentType();
        var elemClass =
            switch (elemType) {
              case Class<?> c -> c;
              case ParameterizedType p when p.getRawType() instanceof Class<?> c -> c;
              default ->
                  throw new UnsupportedOperationException(
                      "can't parse generic array of non-class, non-parameterized-class type "
                          + elemType);
            };
        var asList = parseList(elemType, skipWhitespaceIfList);
        var array = Array.newInstance(elemClass, asList.size());
        for (int i = 0; i < asList.size(); i++) {
          Array.set(array, i, asList.get(i));
        }
        yield array;
      }
      case Class<?> c -> parse(c);
      default ->
          throw new UnsupportedOperationException(
              "can't parse type of class " + type.getClass().getSimpleName() + ": " + type);
    };
  }

  /**
   * Parse an object of the given class type.
   *
   * <p>This looks for a {@link ParseMethod} to parse the object according to the process defined in
   * {@link TypeclassMap#lookup(Class, Class)}. There are some builtin {@link ParseMethod}s for
   * external classes including {@link Integer} and {@link String}.
   *
   * @throws UnsupportedOperationException if no {@link ParseMethod} was resolve which takes this
   *     parser's context or no context.
   * @throws ClassCastException if this class doesn't have a resolve-able {@link ParseMethod} which
   *     takes this parser's context, a superclass does, and the superclass doesn't return the
   *     correct type. Or if no classes have a resolve-able method which takes this context, only a
   *     superclass has a method which takes no context, and it doesn't return the correct type.
   *     (The alternative in these cases would be to just throw {@link
   *     UnsupportedOperationException} so it's better than not trying superclasses.)
   * @throws InvalidAnnotationError if a resolved {@link ParseMethod} doesn't use the annotation
   *     properly, or there's more than one which takes the same context in the same class with
   *     equal precedence.
   */
  public <T> T parse(Class<T> clazz) {
    // `lookup` will return the boxed version of a primitive class
    clazz = clazz.isPrimitive() ? Classes.boxed(clazz) : clazz;

    var m = PARSE_METHODS.lookup(clazz, context == null ? Void.class : context.getClass());
    if (m != null) {
      return m.invoke(this, clazz);
    }

    throw new UnsupportedOperationException(
        "no parse method for "
            + clazz
            + " or any superclasses, and "
            + (context == null ? "no context" : "context " + context.getClass()));
  }

  /**
   * Parse {@code null} or a value.
   *
   * <p>Specifically, this parses the string "null" for {@link Optional#empty()}, otherwise it
   * parses the value and wraps in {@link Optional#of(Object)}.
   */
  public <T> Optional<T> parseOptional(Class<T> clazz) {
    if (scanner.trySkip("null")) {
      return Optional.empty();
    }
    return Optional.of(parse(clazz));
  }

  /**
   * Parse {@code null} or a value (generic).
   *
   * <p>Specifically, this parses the string "null" for {@link Optional#empty()}, otherwise it
   * parses the value and wraps in {@link Optional#of(Object)}.
   *
   * @param skipWhitespaceIfList applied to {@code type} and its generic parameters if any of them
   *     are lists. Otherwise it won't affect anything.
   * @see #parseOptional(Class)
   */
  public Optional<?> parseOptional(Type type, SkipWhitespace skipWhitespaceIfList) {
    if (scanner.trySkip("null")) {
      return Optional.empty();
    }
    return Optional.of(parse(type, skipWhitespaceIfList));
  }

  /**
   * Parse a collection of the form {@code [a,b,...]}.
   *
   * <p>The current {@linkplain Scanner#skipsWhitespace() whitespace policy} will be used to scan
   * delimiters. This means that, if set, whitespace before {@code [}, and before and after each
   * element, will be skipped; however, whitespace after {@code ]} won't be skipped, and within the
   * elements themselves they have their own whitespace policy.
   *
   * @throws UnsupportedOperationException if there's not {@link ParseMethod} registered for {@code
   *     elementClass}.
   * @see #parse(Class)
   * @see #parseList(Supplier, SkipWhitespace)
   */
  public <T> ImmutableList<T> parseList(Class<T> elementClass, SkipWhitespace skipWhitespace) {
    return parseList(() -> parse(elementClass), skipWhitespace);
  }

  /**
   * Parse a collection of the form {@code [a,b,...]}.
   *
   * <p>This is a version of {@link #parseList(Class, SkipWhitespace)} which takes {@link Type}
   * instead, so it can parse nested lists. The current {@linkplain Scanner#skipsWhitespace()
   * whitespace policy} will be used to scan delimiters both in the outer list and in {@code
   * elementType} if it's itself generic.
   *
   * @throws UnsupportedOperationException if the element type can't be parsed.
   * @see #parse(Type, SkipWhitespace)
   * @see #parseList(Supplier, SkipWhitespace)
   */
  public ImmutableList<?> parseList(Type elementType, SkipWhitespace skipWhitespace) {
    return parseList(() -> parse(elementType, skipWhitespace), skipWhitespace);
  }

  /**
   * Parse a collection of the form {@code [a,b,...]}, using the given function to parse elements.
   *
   * <p>The current {@linkplain Scanner#skipsWhitespace() whitespace policy} will be set throughout
   * the parse, including when elements are parsed.
   *
   * @see #parseList(Class, SkipWhitespace)
   * @see #parseList(Type, SkipWhitespace)
   */
  public <T> ImmutableList<T> parseList(Supplier<T> parseElement, SkipWhitespace skipWhitespace) {
    var list = ImmutableList.<T>builder();
    scanner.runWithWhitespacePolicy(
        skipWhitespace,
        () -> {
          scanner.assertAndSkip('[');
          boolean first = true;
          while (!scanner.trySkip(']')) {
            if (first) {
              first = false;
            } else {
              scanner.assertAndSkip(',');
            }
            list.add(parseElement.get());
          }
        });
    return list.build();
  }

  // endregion parse non-terminals

  private record ParseMethod_(
      @Override Class<?> objectClass,
      @Override Class<?> contextClass,
      Executable method,
      SkipWhitespace skipsWhitespace,
      boolean isContextInstanceMethod,
      boolean takesClass)
      implements TypeclassMethod {
    static ParseMethod_ load(ParseMethod annotation, Executable method) {
      // Check method's invariants
      if (method.getParameterCount() == 0 || method.getParameterTypes()[0] != Parser.class) {
        throw new InvalidAnnotationError(
            method, "parse method must take a `Parser` as its first argument.");
      }
      if (Modifier.isStatic(method.getModifiers()) || method instanceof Constructor<?>) {
        if (method.getParameterCount() > 3) {
          throw new InvalidAnnotationError(
              method,
              "static parse method (or constructor) must take at most three arguments: a `Parser`, a context object, and a class.");
        }
        if (method.getParameterCount() == 3 && method.getParameterTypes()[2] != Class.class) {
          throw new InvalidAnnotationError(
              method,
              "static parse method (or constructor) with three arguments, must take a `Class` as its third argument.");
        }
      } else {
        if (method.getParameterCount() > 2) {
          throw new InvalidAnnotationError(
              method,
              "non-static parse method must take at most two arguments: a `Parser` and a class (the context is the instance).");
        }
        if (method.getParameterCount() == 2 && method.getParameterTypes()[1] != Class.class) {
          throw new InvalidAnnotationError(
              method,
              "non-static parse method with two arguments, must take a `Class` as its second argument (the context is the instance).");
        }
      }
      if (method.getExceptionTypes().length > 0) {
        throw new InvalidAnnotationError(method, "parse method must not throw checked exceptions.");
      }
      if (!Modifier.isPrivate(method.getModifiers())
          && !Modifier.isProtected(method.getModifiers())) {
        throw new InvalidAnnotationError(method, "parse method must be protected or private.");
      }

      // Get method metadata
      var objectClass =
          switch (method) {
            case Method javaMethod -> javaMethod.getReturnType();
            case Constructor<?> _ -> method.getDeclaringClass();
          };
      var skipsWhitespace = annotation.value();
      var isContextInstanceMethod =
          !(method instanceof Constructor<?>) && !Modifier.isStatic(method.getModifiers());
      var takesClass =
          method.getParameterCount() == 3
              || (method.getParameterCount() == 2 && method.getParameterTypes()[1] == Class.class);
      var contextClass =
          isContextInstanceMethod
              ? method.getDeclaringClass()
              : switch (method.getParameterCount()) {
                case 1 -> Void.class;
                case 2 -> takesClass ? Void.class : method.getParameterTypes()[1];
                case 3 -> method.getParameterTypes()[2];
                default -> throw new UnreachableError();
              };

      // Configure method
      method.setAccessible(true);

      return new ParseMethod_(
          objectClass, contextClass, method, skipsWhitespace, isContextInstanceMethod, takesClass);
    }

    <T> T invoke(Parser p, Class<T> clazz) {
      // Make sure if the outer type skips whitespace and the inner doesn't, it still works
      p.scanner.skipWhitespaceAccordingToPolicy();

      return p.scanner.runWithWhitespacePolicy(
          skipsWhitespace,
          () -> {
            Object object;
            try {
              if (isContextInstanceMethod && takesClass) {
                object = ((Method) method).invoke(p.context, p, clazz);
              } else if (isContextInstanceMethod) {
                object = ((Method) method).invoke(p.context, p);
              } else if (takesContext() && takesClass) {
                object =
                    switch (method) {
                      case Method m -> m.invoke(null, p, p.context, clazz);
                      case Constructor<?> c -> c.newInstance(p, p.context, clazz);
                    };
              } else if (takesContext()) {
                object =
                    switch (method) {
                      case Method m -> m.invoke(null, p, p.context);
                      case Constructor<?> c -> c.newInstance(p, p.context);
                    };
              } else if (takesClass) {
                object =
                    switch (method) {
                      case Method m -> m.invoke(null, p, clazz);
                      case Constructor<?> c -> c.newInstance(p, clazz);
                    };
              } else {
                object =
                    switch (method) {
                      case Method m -> m.invoke(null, p);
                      case Constructor<?> c -> c.newInstance(p);
                    };
              }

              Objects.requireNonNull(object, () -> "parse method for " + clazz + " returned null");
              try {
                return clazz.cast(object);
              } catch (ClassCastException e) {
                // If it's not a superclass method, then it's just the parse function returned
                // a type it didn't declare it would
                throw clazz == objectClass
                    ? e
                    : new ClassCastException(
                        "no parse method for "
                            + clazz
                            + ", and there was one for a superclass but it returned an instance of class "
                            + object.getClass());
              }
            } catch (InvocationTargetException e) {
              if (e.getCause() instanceof RuntimeException e1) {
                if (!(e1 instanceof ParseException)) {
                  e1 = new ParseException(p.scanner.position(), "uncaught exception", e1);
                }
                throw ((ParseException) e1).whileParsing(clazz.getSimpleName());
              } else if (e.getCause() instanceof Error e1) {
                throw new ParseException(
                    p.scanner.position(),
                    "uncaught error while parsing " + clazz.getSimpleName(),
                    e1);
              }
              throw new AssertionError("checked exception in reflectively called parse method", e);
            } catch (ReflectiveOperationException e) {
              throw new ParseException(
                  p.scanner.position(), "failed to (reflectively) invoke parse method", e);
            }
          });
    }
  }
}
