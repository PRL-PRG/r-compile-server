package org.prlprg.parseprint;

import java.util.Optional;
import org.prlprg.util.Reflection;
import org.prlprg.util.StringCase;

class BuiltinPrintMethods {
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

    var clazz = data.getClass();
    w.write(clazz.getSimpleName());

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