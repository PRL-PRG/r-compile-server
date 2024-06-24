package org.prlprg.parseprint;

import java.util.Arrays;
import java.util.Optional;
import javax.annotation.Nullable;
import org.prlprg.util.Reflection;
import org.prlprg.util.StringCase;
import org.prlprg.util.Strings;

/**
 * Provides {@link ParseMethod}s for types outside of {@link org.prlprg}. Types inside, we put the
 * {@link ParseMethod} in the type directly.
 */
public final class BuiltinParseMethods {
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
  private static Byte parseByte(Parser p) {
    return Byte.valueOf(p.scanner().readFixedLength(2), 16);
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
  private static Record parseRecord(Parser p) {
    if (!(p.context() instanceof ClassProvidingContext ctx)) {
      throw new IllegalStateException(
          "Can't parse record the builtin way without a context inheriting ClassProvidingContext");
    }
    var s = p.scanner();

    var className = s.readJavaIdentifierOrKeyword();
    @SuppressWarnings("unchecked")
    var clazz = (Class<? extends Record>) ctx.getClass(className);
    if (clazz == null) {
      throw s.fail("Unknown record class: " + className);
    }
    if (!clazz.isRecord()) {
      throw s.fail("Class isn't a record: " + className);
    }

    var arguments = parseRecordComponents(clazz, p);

    return Reflection.construct(clazz, arguments);
  }

  /**
   * Parse and return the components of a record like the built-in parser does.
   *
   * <p>Specifically, parse the components with their names, surrounded by parenthesis and delimited
   * by commas, except if the record class has zero components, don't parse anything.
   */
  public static Object[] parseRecordComponents(Class<? extends Record> clazz, Parser p) {
    var s = p.scanner();

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
        var isOptional = components[i].getType() == Optional.class;
        var isNullable = components[i].isAnnotationPresent(Nullable.class);
        assert isNullable
                || Arrays.stream(components[i].getAnnotations())
                    .noneMatch(a -> a.getClass().getSimpleName().equals("Nullable"))
            : "record has `@Nullable` annotation that isn't `javax.annotations.Nullable`";
        if (isOptional && isNullable) {
          throw new UnsupportedOperationException("Can't parse `@Nullable Optional<...>`");
        }
        arguments[i] =
            isNullable
                ? p.parseOptional(components[i].getGenericType(), SkipWhitespace.ALL).orElse(null)
                : p.parse(components[i].getGenericType(), SkipWhitespace.ALL);
      }
      s.assertAndSkip(')');
    }

    return arguments;
  }

  private BuiltinParseMethods() {}
}
