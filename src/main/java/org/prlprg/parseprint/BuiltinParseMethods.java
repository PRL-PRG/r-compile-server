package org.prlprg.parseprint;

import org.prlprg.util.Reflection;
import org.prlprg.util.StringCase;
import org.prlprg.util.Strings;

/**
 * Provides {@link ParseMethod}s for types outside of {@link org.prlprg}. Types inside, we put the
 * {@link ParseMethod} in the type directly.
 */
class BuiltinParseMethods {
  @ParseMethod(SkipWhitespace.NONE)
  private static String parseString(Parser p) {
    return p.scanner().readQuoted('"');
  }

  // These *must* be the boxed variants.
  @ParseMethod(SkipWhitespace.NONE)
  private static Integer parseInt(Parser p) {
    return p.scanner().trySkip('-') ? -p.scanner().readUInt() : p.scanner().readUInt();
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Long parseLong(Parser p) {
    return p.scanner().trySkip('-') ? -p.scanner().readULong() : p.scanner().readULong();
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Float parseFloat(Parser p) {
    return p.scanner().readFloat();
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Double parseDouble(Parser p) {
    return p.scanner().readDouble();
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static Boolean parseBoolean(Parser p) {
    var s = p.scanner();
    if (s.trySkip("true")) {
      return true;
    } else if (s.trySkip("false")) {
      return false;
    } else {
      throw s.fail("Expected boolean");
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static <E extends Enum<E>> Enum<E> parseEnum(Parser p, Class<E> enumClass) {
    var s = p.scanner();
    var ctx = p.context();
    var name = s.readJavaIdentifierOrKeyword();

    var stringCase =
        ctx != null && ctx.getClass().isAnnotationPresent(EnumSerialCaseIs.class)
            ? ctx.getClass().getAnnotation(EnumSerialCaseIs.class).value()
            : enumClass.isAnnotationPresent(EnumSerialCaseIs.class)
                ? enumClass.getAnnotation(EnumSerialCaseIs.class).value()
                : StringCase.SCREAMING_SNAKE;
    name = StringCase.convert(name, stringCase, StringCase.SCREAMING_SNAKE);

    try {
      return Enum.valueOf(enumClass, name);
    } catch (IllegalArgumentException e) {
      throw s.fail(
          "one of (" + Strings.join(", ", Enum::name, enumClass.getEnumConstants()) + ")", name);
    }
  }

  @ParseMethod
  private Record parseRecord(Parser p) {
    if (!(p.context() instanceof ClassProvidingContext ctx)) {
      throw new IllegalStateException(
          "Can't parse record the builtin way without a context inheriting ClassProvidingContext");
    }
    var s = p.scanner();

    var className = s.readJavaIdentifierOrKeyword();
    var clazz = ctx.getClass(className);
    if (clazz == null) {
      throw s.fail("Unknown record class: " + className);
    }
    if (!clazz.isRecord()) {
      throw s.fail("Class isn't a record: " + className);
    }

    var components = clazz.getRecordComponents();
    var arguments = new Object[components.length];
    if (arguments.length > 0) {
      s.assertAndSkip('(');
      for (var i = 0; i < components.length; i++) {
        if (i > 0) {
          s.assertAndSkip(',');
        }
        s.assertAndSkip(components[i].getName());
        s.assertAndSkip('=');
        arguments[i] = p.parse(components[i].getGenericType(), SkipWhitespace.ALL);
      }
      s.assertAndSkip(')');
    }

    return (Record) Reflection.construct(clazz, arguments);
  }

  private BuiltinParseMethods() {}
}
