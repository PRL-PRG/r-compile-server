package org.prlprg.parseprint;

/**
 * Provides {@link ParseMethod}s for types outside of {@link org.prlprg}. Types inside, we put the
 * {@link ParseMethod} in the type directly.
 */
class BuiltinParseMethods {
  private BuiltinParseMethods() {}

  @ParseMethod(SkipWhitespace.NONE)
  static String parseString(Parser p) {
    var l = p.lexer();
    var sb = new StringBuilder();

    l.assertAndSkip('"');
    while (true) {
      var c = l.readChar();
      switch (c) {
        case '"' -> {
          return sb.toString();
        }
        case '\\' -> {
          switch (l.readChar()) {
            case 'n' -> sb.append('\n');
            case 'r' -> sb.append('\r');
            case 't' -> sb.append('\t');
            case '"' -> sb.append('"');
            case '\\' -> sb.append('\\');
            case '\'' -> sb.append('\'');
            case 'x' -> {
              var hex = l.readFixedLength(2);
              try {
                sb.append(Integer.parseInt(hex, 16));
              } catch (NumberFormatException e) {
                throw l.fail("Invalid hex escape sequence");
              }
            }
            case 'u' -> {
              var hex = l.readFixedLength(4);
              try {
                sb.append((char) Integer.parseInt(hex, 16));
              } catch (NumberFormatException e) {
                throw l.fail("Invalid unicode escape sequence");
              }
            }
            default -> throw l.fail("Unhandled escape sequence");
          }
        }
        default -> sb.append(c);
      }
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  static int parseInt(Parser p) {
    return p.lexer().trySkip('-') ? -p.lexer().readUInt() : p.lexer().readUInt();
  }

  @ParseMethod(SkipWhitespace.NONE)
  static long parseLong(Parser p) {
    return p.lexer().trySkip('-') ? -p.lexer().readULong() : p.lexer().readULong();
  }

  @ParseMethod(SkipWhitespace.NONE)
  static float parseFloat(Parser p) {
    return p.lexer().readFloat();
  }

  @ParseMethod(SkipWhitespace.NONE)
  static double parseDouble(Parser p) {
    return p.lexer().readDouble();
  }

  @ParseMethod(SkipWhitespace.NONE)
  static boolean parseBoolean(Parser p) {
    var l = p.lexer();
    if (l.trySkip("true")) {
      return true;
    } else if (l.trySkip("false")) {
      return false;
    } else {
      throw l.fail("Expected boolean");
    }
  }
}
