package org.prlprg.parseprint;

import java.io.File;
import java.io.IOException;
import java.io.OutputStream;
import java.io.Writer;
import java.lang.reflect.Executable;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Map;
import java.util.function.Consumer;
import javax.annotation.Nullable;
import org.prlprg.util.InvalidAnnotationError;

/**
 * Print objects to a stream of text whose classes have a registered {@link PrintMethod}, and uses
 * {@link Object#toString()} as a fallback for objects whose classes don't.
 *
 * <p>In addition to printing objects, this provides access to a {@link PrettyPrintWriter} to print
 * text directly (e.g. delimiters) as well as indent and dedent.
 *
 * <p>The printer may be configured via a context object via {@link Printer#withContext(Object)}: if
 * set, the printer will look for a {@link PrintMethod} which takes an additional argument that is
 * the context's class. If no such method is found, it will fallback and looks for a method which
 * takes no context, as usual. See {@link TypeclassMap#lookup(Class, Class)} for the specific way
 * the printer looks for {@link PrintMethod}s.
 *
 * @see Parser
 */
public class Printer {
  private static final TypeclassMap<PrintMethod, PrintMethod_> PRINT_METHODS =
      new TypeclassMap<>(PrintMethod.class, PrintMethod_::load);

  static {
    PRINT_METHODS.registerBuiltins(BuiltinPrintMethods.class);
  }

  private final PrettyPrintWriter writer;
  private final @Nullable Object context;

  // region constructors
  private Printer(PrettyPrintWriter writer, @Nullable Object context) {
    this.writer = writer;
    this.context = context;
  }

  /** Use a printer to print the given object to a string. */
  public static String toString(Object o) {
    return use(p -> p.print(o));
  }

  /** Use a printer and context to print the given object to a string. */
  public static String toString(Object o, Object ctx) {
    return use(p -> p.withContext(ctx).print(o));
  }

  /** Use a printer and return the output as a string. */
  public static String use(Consumer<Printer> usePrinter) {
    return PrettyPrintWriter.use(writer -> usePrinter.accept(new Printer(writer, null)));
  }

  /** Create a printer which prints to the given writer. */
  public Printer(Writer output) {
    writer = new PrettyPrintWriter(output);
    context = null;
  }

  /**
   * Create a printer which prints to the given file.
   *
   * @throws IOException if the file couldn't be opened.
   */
  public Printer(File output) throws IOException {
    writer = new PrettyPrintWriter(output);
    context = null;
  }

  /** Create a parser which prints to the given stream. */
  public Printer(OutputStream output) {
    writer = new PrettyPrintWriter(output);
    context = null;
  }

  /**
   * Create a printer which writes to the same stream, but has a different context.
   *
   * <p>This doesn't invalidate this printer, you can even use both printers simultaneously. They
   * share the same stream.
   *
   * @throws IllegalArgumentException If the context itself is a printer, because you probably meant
   *     to use that printer directly.
   */
  public Printer withContext(@Nullable Object context) {
    if (context instanceof Printer) {
      throw new IllegalArgumentException(
          "Can't assign printer as context, did you mean to use that printer directly?");
    }
    return new Printer(writer, context);
  }

  // endregion constructors

  // region getters
  /** The underlying writer which can be used to write text directly, indent, and dedent. */
  public PrettyPrintWriter writer() {
    return writer;
  }

  /**
   * The context associated with the printer.
   *
   * <p>This isn't typed, because the dispatched {@code print} methods will have the correct context
   * type. Those methods should use that context instead. This is for printers which can take no
   * context, but may want to use the context when it's provided (e.g. use a specific context to
   * parse children, but then revert to the original context to parse grandchildren; or special-case
   * on the specific context in part of the method).
   */
  public @Nullable Object context() {
    return context;
  }

  // endregion getters

  // region print non-terminals
  /**
   * Print an object of the given class type.
   *
   * <p>If a {@link PrintMethod} is resolved for the class or a superclass according to {@link
   * TypeclassMap#lookup(Class, Class)}, it will be used. Otherwise {@link Object#toString()} will
   * be used.
   *
   * <p>{@code null} is printed as the string "null".
   */
  public void print(@Nullable Object object) {
    if (object == null) {
      writer.write("null");
      return;
    }

    var m =
        PRINT_METHODS.lookup(object.getClass(), context == null ? Void.class : context.getClass());
    if (m != null) {
      m.invoke(this, object);
      return;
    }

    writer.write(object.toString());
  }

  /**
   * Print an iterable as a list of the form {@code [a,b,...]}.
   *
   * @param printWhitespace whether to print a space after each comma. Additionally, {@linkplain
   *     Map.Entry entries} are special-cased to print spaces iff this isn't set to {@link
   *     PrintWhitespace#NONE}, so printing a map is equivalent to printing a list of map entries.
   * @see #print(Object)
   */
  public void printAsList(Iterable<?> list, PrintWhitespace printWhitespace) {
    writer.write('[');
    var first = true;
    for (var item : list) {
      if (first) {
        first = false;
      } else {
        writer.write(',');
        if (printWhitespace == PrintWhitespace.SPACES) {
          writer.write(' ');
        }
      }
      if (printWhitespace == PrintWhitespace.NEWLINES) {
        writer.write('\n');
      }

      if (item instanceof Map.Entry<?, ?> entry) {
        print(entry.getKey());
        writer.write(printWhitespace == PrintWhitespace.NONE ? "->" : " -> ");
        print(entry.getValue());
      } else {
        print(item);
      }
    }
    writer.write(']');
  }

  /**
   * Print a map as {@code [ka->a,kb->b,...]}.
   *
   * @param printWhitespace whether to print a space after each comma and around each arrow.
   * @see #print(Object)
   */
  public void printAsMap(Map<?, ?> map, PrintWhitespace printWhitespace) {
    // Entries are special-cased in `printAsList` to print correctly.
    printAsList(map.entrySet(), printWhitespace);
  }

  // endregion

  private record PrintMethod_(
      @Override Class<?> objectClass,
      @Override Class<?> contextClass,
      Method method,
      boolean isStatic,
      boolean isContextInstanceMethod)
      implements TypeclassMethod {
    static PrintMethod_ load(PrintMethod annotation, Executable method1) {
      var isStatic = Modifier.isStatic(method1.getModifiers());

      // Check invariants
      if (!(method1 instanceof Method method)) {
        throw new InvalidAnnotationError(
            method1, "print method must be a `Method`, not a constructor.");
      }
      if (isStatic) {
        if (method.getParameterCount() != 2 && method.getParameterCount() != 3) {
          throw new InvalidAnnotationError(
              method,
              "static print method must take 2 or 3 arguments (the object to be printed, printer, and optionally the context).");
        }
        if (method.getParameterTypes()[1] != Printer.class) {
          throw new InvalidAnnotationError(
              method,
              "static print method must take a Printer as its second argument (first is the object to be printed).");
        }
      } else {
        if (method.getParameterCount() != 1 && method.getParameterCount() != 2) {
          throw new InvalidAnnotationError(
              method,
              "non-static print method must take 1 or 2 arguments (the printer, and optionally the object or context).");
        }
        if (method.getParameterTypes()[0] != Printer.class
            && (method.getParameterCount() != 2
                || method.getParameterTypes()[1] != Printer.class)) {
          throw new InvalidAnnotationError(
              method,
              "non-static print method must take a Printer as its first or second argument (if first, the second argument is context and the instance is the object; if second, the first argument is object and the instance is the context).");
        }
      }
      if (method.getExceptionTypes().length != 0) {
        throw new InvalidAnnotationError(method, "print method must not throw checked exceptions.");
      }
      if (!Modifier.isPrivate(method.getModifiers())
          && !Modifier.isProtected(method.getModifiers())) {
        throw new InvalidAnnotationError(method, "print method must be protected or private.");
      }

      // Get remaining method metadata
      var isContextInstanceMethod =
          !isStatic
              && method.getParameterCount() == 2
              && method.getParameterTypes()[1] == Printer.class;
      var objectClass =
          isStatic || isContextInstanceMethod
              ? method.getParameterTypes()[0]
              : method.getDeclaringClass();
      var contextClass =
          isStatic
              ? (method.getParameterCount() == 3 ? method.getParameterTypes()[2] : Void.class)
              : isContextInstanceMethod
                  ? method.getDeclaringClass()
                  : (method.getParameterCount() == 2 ? method.getParameterTypes()[1] : Void.class);

      // Configure method
      method.setAccessible(true);

      return new PrintMethod_(objectClass, contextClass, method, isStatic, isContextInstanceMethod);
    }

    void invoke(Printer p, Object object) {
      try {
        if (isStatic && takesContext()) {
          method.invoke(null, object, p, p.context);
        } else if (isStatic) {
          method.invoke(null, object, p);
        } else if (isContextInstanceMethod && takesContext()) {
          method.invoke(p.context, object, p);
        } else if (isContextInstanceMethod) {
          method.invoke(p.context, p);
        } else if (takesContext()) {
          method.invoke(object, p, p.context);
        } else {
          method.invoke(object, p);
        }
      } catch (InvocationTargetException e) {
        if (e.getCause() instanceof RuntimeException e1) {
          throw e1;
        } else if (e.getCause() instanceof Error e1) {
          throw e1;
        }
        throw new AssertionError("checked exception in reflectively called print method", e);
      } catch (ReflectiveOperationException e) {
        throw new RuntimeException("failed to invoke print method", e);
      }
    }
  }
}
