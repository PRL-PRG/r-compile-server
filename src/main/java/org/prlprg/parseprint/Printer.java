package org.prlprg.parseprint;

import java.io.File;
import java.io.IOException;
import java.io.OutputStream;
import java.io.Writer;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Collection;
import java.util.function.Consumer;
import javax.annotation.Nullable;

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

  private final PrettyPrintWriter writer;
  private final @Nullable Object context;

  // region constructors
  private Printer(PrettyPrintWriter writer, @Nullable Object context) {
    this.writer = writer;
    this.context = context;
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
   */
  public Printer withContext(Object context) {
    return new Printer(writer, context);
  }

  // endregion constructors

  /** The underlying writer which can be used to write text directly, indent, and dedent. */
  public PrettyPrintWriter writer() {
    return writer;
  }

  // region print non-terminals
  /**
   * Print an object of the given class type.
   *
   * <p>If a {@link PrintMethod} is resolved for the class or a superclass according to {@link
   * TypeclassMap#lookup(Class, Class)}, it will be used. Otherwise {@link Object#toString()} will
   * be used.
   */
  public void print(Object object) {
    var m =
        PRINT_METHODS.lookup(object.getClass(), context == null ? Void.class : context.getClass());
    if (m != null) {
      m.invoke(this, object);
      return;
    }

    writer.write(object.toString());
  }

  /**
   * Print a collection as a list of the form {@code [a,b,...]}.
   *
   * @param whitespaceAfterComma whether to print a space after each comma.
   * @see #print(Object)
   */
  public void printAsList(Collection<?> list, boolean whitespaceAfterComma) {
    writer.write('[');
    var first = true;
    for (var item : list) {
      if (first) {
        first = false;
      } else {
        writer.write(',');
        if (whitespaceAfterComma) {
          writer.write(' ');
        }
      }
      print(item);
    }
    writer.write(']');
  }

  // endregion

  private record PrintMethod_(
      @Override Class<?> objectClass,
      @Override Class<?> contextClass,
      Method method,
      boolean isStatic)
      implements TypeclassMethod {
    static PrintMethod_ load(PrintMethod annotation, Method method) {
      var isStatic = Modifier.isStatic(method.getModifiers());

      // Check invariants
      var ARITY_MESSAGE =
          "If static, the print method must take the object to be printed as its first argument. The next argument must be the printer, and optionally, there may be an additional context argument..";
      if (isStatic) {
        if (method.getParameterCount() != 2 && method.getParameterCount() != 3) {
          throw new IllegalArgumentException(
              "static print method must take 2 or 3 arguments.\n" + ARITY_MESSAGE);
        }
        if (method.getParameterTypes()[1] != Printer.class) {
          throw new IllegalArgumentException(
              "static print method must take a Printer as its second argument.\n" + ARITY_MESSAGE);
        }
      } else {
        if (method.getParameterCount() != 1 && method.getParameterCount() != 2) {
          throw new IllegalArgumentException(
              "non-static print method must take 1 or 2 arguments.\n" + ARITY_MESSAGE);
        }
        if (method.getParameterTypes()[0] != Printer.class) {
          throw new IllegalArgumentException(
              "non-static print method must take a Printer as its first argument.\n"
                  + ARITY_MESSAGE);
        }
      }
      if (method.getExceptionTypes().length != 0) {
        throw new IllegalArgumentException("print method must not throw checked exceptions");
      }
      if (!Modifier.isPrivate(method.getModifiers())) {
        throw new IllegalArgumentException("print method must be private.");
      }

      // Get remaining method metadata
      var objectClass = isStatic ? method.getParameterTypes()[0] : method.getDeclaringClass();
      var contextClass =
          isStatic
              ? (method.getParameterCount() == 3 ? method.getParameterTypes()[2] : Void.class)
              : (method.getParameterCount() == 2 ? method.getParameterTypes()[1] : Void.class);

      // Configure method
      method.setAccessible(true);

      return new PrintMethod_(objectClass, contextClass, method, isStatic);
    }

    void invoke(Printer p, Object object) {
      try {
        if (isStatic && takesContext()) {
          method.invoke(null, object, p, p.context);
        } else if (isStatic) {
          method.invoke(null, object, p);
        } else if (takesContext()) {
          method.invoke(object, p, p.context);
        } else {
          method.invoke(object, p);
        }
      } catch (ReflectiveOperationException e) {
        throw new RuntimeException("failed to invoke print method", e);
      }
    }
  }
}
