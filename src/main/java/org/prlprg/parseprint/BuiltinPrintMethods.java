package org.prlprg.parseprint;

import java.lang.reflect.RecordComponent;
import java.util.List;
import java.util.Optional;
import org.prlprg.util.Classes;
import org.prlprg.util.Reflection;
import org.prlprg.util.StringCase;

public final class BuiltinPrintMethods {
  @PrintMethod
  private static void printByte(Byte b, Printer p) {
    p.writer().write(String.format("0x%02x", b));
  }

  @PrintMethod
  private static void printString(String s, Printer p) {
    var w = p.writer();
    w.write('"');
    s.codePoints()
        .forEachOrdered(
            c -> {
              switch (c) {
                case '\n' -> w.write("\\n");
                case '\r' -> w.write("\\r");
                case '\t' -> w.write("\\t");
                case '"' -> w.write("\\\"");
                case '\\' -> w.write("\\\\");
                default -> {
                  if (c < 32 || c >= 127) {
                    w.write("\\u");
                    w.write(String.format("%04x", c));
                  } else {
                    w.write((char) c);
                  }
                }
              }
            });
    w.write('"');
  }

  @PrintMethod
  private static void printEnum(Enum<?> e, Printer p) {
    var ctx = p.context();
    var name = e.name();

    var stringCase =
        ctx != null && ctx.getClass().isAnnotationPresent(EnumSerialCaseIs.class)
            ? ctx.getClass().getAnnotation(EnumSerialCaseIs.class).value()
            : e.getDeclaringClass().isAnnotationPresent(EnumSerialCaseIs.class)
                ? e.getDeclaringClass().getAnnotation(EnumSerialCaseIs.class).value()
                : StringCase.SCREAMING_SNAKE;
    name = StringCase.convert(name, StringCase.SCREAMING_SNAKE, stringCase);

    p.writer().write(name);
  }

  @PrintMethod
  private static void printRecord(Record data, Printer p) {
    var w = p.writer();
    var clazz = Classes.classOf(data);

    w.write(clazz.getSimpleName());
    printRecordComponents(data, p);
  }

  /**
   * Print the components of a record like the built-in printer does.
   *
   * <p>Specifically, print the components with their names, surrounded by parenthesis and delimited
   * by commas, except if the record has zero components, don't print anything.
   */
  public static void printRecordComponents(Record data, Printer p) {
    var w = p.writer();
    var clazz = Classes.classOf(data);

    var components = clazz.getRecordComponents();
    if (components.length > 0) {
      w.write('(');
      var first = true;
      for (var component : components) {
        if (first) {
          first = false;
        } else {
          w.write(", ");
        }
        w.write(component.getName());
        w.write('=');
        p.print(Reflection.getComponent(data, component));
      }
      w.write(')');
    }
  }

  /**
   * Print the given components like {@link #printRecordComponents(Record, Printer)} and the
   * built-in printer does.
   *
   * <p>{@code componentDescriptors} and {@code components} must have the same size, and the
   * descriptor at each index corresponds to the component at the same index. The descriptors are
   * only used for their name.
   */
  public static void printRecordComponents(
      List<RecordComponent> componentDescriptors, List<Object> components, Printer p) {
    var w = p.writer();

    if (componentDescriptors.size() != components.size()) {
      throw new IllegalArgumentException(
          "`componentDescriptors` and `components` must have the same size");
    }

    if (!componentDescriptors.isEmpty()) {
      w.write('(');
      var first = true;
      for (int i = 0; i < componentDescriptors.size(); i++) {
        var componentDescriptor = componentDescriptors.get(i);
        var component = components.get(i);
        if (first) {
          first = false;
        } else {
          w.write(", ");
        }
        w.write(componentDescriptor.getName());
        w.write('=');
        p.print(component);
      }
      w.write(')');
    }
  }

  @PrintMethod
  private static void printOptional(Optional<?> data, Printer p) {
    if (data.isPresent()) {
      p.print(data.get());
    } else {
      p.writer().write("null");
    }
  }

  @PrintMethod
  private static void printCollection(Iterable<?> data, Printer p) {
    p.printAsList(data, true);
  }

  private BuiltinPrintMethods() {}
}
