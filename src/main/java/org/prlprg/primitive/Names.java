package org.prlprg.primitive;

import com.google.common.collect.ImmutableList;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.PrettyPrintWriter;
import org.prlprg.parseprint.Scanner;
import org.prlprg.util.Strings;

/** Special symbols, and utilities for symbol string quoting and validating. */
public final class Names {
  /** The symbols which are treated as binary-operators in R (when parsing or printing). */
  public static final ImmutableList<String> BINOPS =
      ImmutableList.of(
          "+", "-", "*", "/", "^", "%%", "%/%", "==", "!=", "<", "<=", ">", ">=", "&", "|", "&&",
          "||", ":", "::", ":::", "$", "@", "~", "%%%", "%%", "%*%", "%o%", "%x%", "%in%", "%*%",
          "%/%", "%+%", "%-%", "%&%", "%/%", "%|%", "%?%", "%$%", "%::%", "%:::%", "%>%", "%<>%",
          "%<>%");

  /**
   * Return the string quoted if it can't be a valid symbol string without being quoted.
   *
   * @throws IllegalArgumentException if given the empty string, since that is reserved for special
   *     symbols and can't be a "symbol" as is usually referred to (e.g. can't be exposed to the
   *     user).
   */
  public static String quoteIfNecessary(String s) {
    if (s.isEmpty()) {
      throw new IllegalArgumentException("empty string is reserved for special symbols");
    }
    return isValidUnquoted(s) ? s : PrettyPrintWriter.use(w -> w.writeQuoted('`', s));
  }

  /**
   * Return the string, assumed to be a valid symbol, unquoted if it is quoted.
   *
   * <p>If the string isn't a valid symbol, this will have unspecified behavior.
   */
  public static String unquoteIfNecessary(String s) {
    return s.charAt(0) == '`' && s.charAt(s.length() - 1) == '`'
        ? new Scanner(s).readQuoted('`')
        : s;
  }

  /**
   * Whether the string {@linkplain #isValidUnquoted(String) is valid unquoted}, or is in quotes and
   * not empty.
   */
  public static boolean isValid(String s) {
    return isValidUnquoted(s)
        || (s.startsWith("`")
            && s.endsWith("`")
            && s.length() > 2
            && !s.substring(1, s.length() - 1).replaceAll("\\`", "").contains("`"));
  }

  /**
   * Whether the string can be a valid R symbol string not quoted (not between "`"s).
   *
   * <p>Returns true for R literals such as "TRUE" and "NULL".
   */
  public static boolean isValidUnquoted(String s) {
    return !s.isEmpty()
        && !s.equals("_")
        && isValidStartChar(s.chars().findFirst().orElseThrow())
        && s.chars().allMatch(Names::isValidMiddleCharOfUnquoted);
  }

  /** Whether the character can be the first in an R symbol. */
  public static boolean isValidStartChar(int c) {
    return isValidStartCharToUnquoted(c) || c == '`';
  }

  /** Whether the character can be the first in an R symbol string which isn't quoted. */
  public static boolean isValidStartCharToUnquoted(int c) {
    return Character.isLetter(c) || c == '_' || c == '.' || c == '`';
  }

  /** Whether the character can be in the middle of an R symbol string which isn't quoted. */
  private static boolean isValidMiddleCharOfUnquoted(int c) {
    return isValidStartCharToUnquoted(c) || Character.isDigit(c);
  }

  /**
   * Reads a valid R symbol string.
   *
   * <p>If {@code unquote} is false and the symbol is quoted (between "`"s), returns it still
   * quoted. Otherwise, returns it unquoted; however, the unquoted value may no longer be a valid
   * symbol string and must be quoted again (via {@link #quoteIfNecessary(String)} or {@link
   * #write(PrettyPrintWriter, String)}) to make it such.
   *
   * @throws ParseException if the next character isn't a letter, underscore, or "`" (the beginning
   *     of a symbol), the entire symbol is only an underscore, or the symbol is "``".
   */
  public static String read(Scanner scanner, boolean unquote) {
    if (scanner.nextCharIs('`')) {
      var result = unquote ? scanner.readQuoted('`') : scanner.readQuotedLiterally('`');
      if (unquote ? result.isEmpty() : result.equals("``")) {
        throw scanner.fail(
            "\"``\" (empty) isn't a valid R symbol string (reserved for internal symbols)");
      }
      return result;
    }

    if (!scanner.nextCharSatisfies(c -> Character.isLetter(c) || c == '_' || c == '.')) {
      throw scanner.fail(
          "start of an R symbol string (letter, '_', or '.')", Strings.quote(scanner.peekChar()));
    }

    var result = scanner.readWhile(c -> Character.isLetterOrDigit(c) || c == '_' || c == '.');
    if (result.equals("_")) {
      throw scanner.fail("\"_\" isn't a valid R symbol string (reserved for pipe operator)");
    }
    return result;
  }

  /**
   * Writes a valid R symbol string.
   *
   * <p>This is semantically equivalent to {@code w.write(}{@link Names#quoteIfNecessary(String)
   * Names.quoteIfNecessary}{@code (s))}, but faster.
   */
  public static void write(PrettyPrintWriter w, String s) {
    if (isValidUnquoted(s)) {
      w.write(s);
    } else {
      w.writeQuoted('`', s);
    }
  }

  private Names() {}
}
