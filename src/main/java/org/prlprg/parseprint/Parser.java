package org.prlprg.parseprint;

import com.google.common.collect.ImmutableList;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.io.Reader;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.util.InvalidAnnotationError;
import org.prlprg.util.UnreachableError;

/**
 * Parse objects from a stream of text whose classes have a registered static {@link ParseMethod}.
 *
 * <p>In addition to parsing any object with a registered {@link ParseMethod}, this provides access
 * to the {@link Lexer} to peek and consume specific chunks of text (e.g. whitespace and commas,
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

  private final Lexer lexer;
  private final @Nullable Object context;

  static {
    PARSE_METHODS.registerBuiltins(BuiltinParseMethods.class);
  }

  // region constructors
  private Parser(Lexer lexer, @Nullable Object context) {
    this.lexer = lexer;
    this.context = context;
  }

  /** Create a parser with the given input. */
  public Parser(Reader input) {
    lexer = new Lexer(input);
    context = null;
  }

  /** Create a parser with the given input. */
  public Parser(String input) {
    lexer = new Lexer(input);
    context = null;
  }

  /** Create a parser with the given input. */
  public Parser(File input) throws FileNotFoundException {
    lexer = new Lexer(input);
    context = null;
  }

  /** Create a parser with the given input. */
  public Parser(InputStream input) {
    lexer = new Lexer(input);
    context = null;
  }

  /**
   * Create a parser which reads from the same input stream, but has a different context.
   *
   * <p>This doesn't invalidate this parser, you can even use both parsers simultaneously. They
   * share the same stream, so anything parsed by one is also consumed in the other.
   */
  public Parser withContext(Object context) {
    return new Parser(lexer, context);
  }

  // endregion constructors

  /** The underlying lexer which can be used to parse primitive tokens. */
  public Lexer lexer() {
    return lexer;
  }

  // region parse non-terminals
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
    var m = PARSE_METHODS.lookup(clazz, context == null ? Void.class : context.getClass());
    if (m != null) {
      return m.invoke(this, clazz);
    }

    throw new UnsupportedOperationException(
        "no parse method for " + clazz + " or any superclasses");
  }

  /**
   * Parse a collection of the form {@code [a,b,...]}.
   *
   * <p>The current {@linkplain Lexer#skipsWhitespace() whitespace policy} will be used to lex
   * delimiters and elements. This means that, if set, whitespace before {@code [}, and before and
   * after each element, will be skipped; however, whitespace after {@code ]} won't be skipped, and
   * within the elements themselves they have their own whitespace policy.
   *
   * @throws UnsupportedOperationException if there's not {@link ParseMethod} registered for the
   *     class.
   * @see #parse(Class)
   */
  public <T> ImmutableList<T> parseList(Class<T> clazz, SkipWhitespace skipWhitespace) {
    var list = ImmutableList.<T>builder();
    lexer.runWithWhitespacePolicy(
        skipWhitespace,
        () -> {
          lexer.assertAndSkip('[');
          boolean first = true;
          while (!lexer.trySkip(']')) {
            if (first) {
              first = false;
            } else {
              lexer.assertAndSkip(',');
            }
            list.add(parse(clazz));
          }
        });
    return list.build();
  }

  // endregion

  private record ParseMethod_(
      @Override Class<?> objectClass,
      @Override Class<?> contextClass,
      Method method,
      SkipWhitespace skipsWhitespace,
      boolean takesClass)
      implements TypeclassMethod {
    static ParseMethod_ load(ParseMethod annotation, Method method) {
      // Check method's invariants
      if (method.getParameterCount() == 0 || method.getParameterTypes()[0] != Parser.class) {
        throw new InvalidAnnotationError(
            method, "parse method must take a Parser as its first argument");
      }
      if (method.getParameterCount() > 3) {
        throw new InvalidAnnotationError(
            method,
            "parse method must take at most three arguments: a Parser, a context object, and a class");
      }
      if (method.getParameterCount() == 3 && method.getParameterTypes()[2] != Class.class) {
        throw new InvalidAnnotationError(
            method, "parse method with three arguments, must take a Class as its third argument");
      }
      if (method.getExceptionTypes().length > 0) {
        throw new InvalidAnnotationError(method, "parse method must not throw checked exceptions");
      }
      if (!Modifier.isStatic(method.getModifiers())) {
        throw new InvalidAnnotationError(method, "parse method must be static");
      }
      if (!Modifier.isPrivate(method.getModifiers())) {
        throw new InvalidAnnotationError(method, "parse method must be private");
      }

      // Get method metadata
      var objectClass = method.getReturnType();
      var skipsWhitespace = annotation.value();
      var takesClass =
          method.getParameterCount() == 3
              || (method.getParameterCount() == 2 && method.getParameterTypes()[1] == Class.class);
      var contextClass =
          switch (method.getParameterCount()) {
            case 1 -> Void.class;
            case 2 -> takesClass ? Void.class : method.getParameterTypes()[1];
            case 3 -> method.getParameterTypes()[2];
            default -> throw new UnreachableError();
          };

      // Configure method
      method.setAccessible(true);

      return new ParseMethod_(objectClass, contextClass, method, skipsWhitespace, takesClass);
    }

    <T> T invoke(Parser p, Class<T> clazz) {
      // Make sure if the outer type skips whitespace and the inner doesn't, it still works
      p.lexer.skipWhitespaceAccordingToPolicy();

      return p.lexer.runWithWhitespacePolicy(
          skipsWhitespace,
          () -> {
            try {
              Object object;
              if (takesContext() && takesClass) {
                object = method.invoke(null, p, p.context, clazz);
              } else if (takesContext()) {
                object = method.invoke(null, p, p.context);
              } else if (takesClass) {
                object = method.invoke(null, p, clazz);
              } else {
                object = method.invoke(null, p);
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
            } catch (ParseException e) {
              throw e.whileParsing(clazz.getSimpleName());
            } catch (ReflectiveOperationException e) {
              throw new RuntimeException("failed to invoke parse method", e);
            }
          });
    }
  }
}
