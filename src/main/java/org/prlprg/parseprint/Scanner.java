package org.prlprg.parseprint;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PushbackReader;
import java.io.Reader;
import java.io.StringReader;
import java.util.function.IntPredicate;
import java.util.function.Supplier;
import javax.annotation.Nullable;
import org.prlprg.util.IOThrowingSupplier;
import org.prlprg.util.Strings;

/**
 * Read specific structure (e.g. identifiers, numbers, specific punctuation) from a stream of text.
 *
 * <p>Also keeps track of the {@linkplain Scanner#position offset, line, and column} from since when
 * it started scanning.
 *
 * <p>This is essentially a version of {@link java.util.Scanner} with slightly different use case.
 *
 * <p>This isn't a lexer, because there's no fixed set of tokens. Instead, you call a method to
 * parse exactly what you expect. If a lexer is needed (if we must lookahead structured "tokens"
 * instead of unstructured characters), it could be added {@link Parser} and {@link Scanner}.
 */
public class Scanner {
  private PushbackReader input;
  private final StringBuilder stringBuffer = new StringBuilder(128);
  private char[] charBuffer = new char[1024];
  private boolean isReading;
  private SkipWhitespace skipsWhitespace = SkipWhitespace.NONE;
  private boolean isAtEof = false;
  private long offset = 0;
  private long line = 1;
  private long column = 1;

  // region constructors
  /** Adapt the {@link Reader} for scanning. */
  public Scanner(Reader input) {
    this.input = new PushbackReader(input, 128);
  }

  /** Scan the given string. */
  public Scanner(String input) {
    this(new StringReader(input));
  }

  /** Open the file and scan its contents. */
  public Scanner(File input) throws FileNotFoundException {
    this(new BufferedReader(new FileReader(input)));
  }

  /** Scan the given stream. */
  public Scanner(InputStream input) {
    this(new BufferedReader(new InputStreamReader(input)));
  }

  // endregion

  // region getters and setters
  /** The current offset, line, and column in the input. */
  public Position position() {
    return new Position(offset, line, column);
  }

  /**
   * Did the scanner reach the end of the input?
   *
   * <p>If the {@linkplain #skipsWhitespace() whitespace policy} is set and whitespace is all that
   * remains in the input, this will skip all of it and return {@code true}.
   */
  public boolean isAtEof() {
    skipWhitespaceAccordingToPolicy();
    return isAtEof;
  }

  /**
   * The <b>whitespace policy</b>: if set, whitespace will be implicitly skipped before any read
   * operation, including peeks.
   *
   * <p>Set to {@link SkipWhitespace#NONE} by default. Use {@link
   * #runWithWhitespacePolicy(SkipWhitespace, Runnable)} or {@link
   * #runWithWhitespacePolicy(SkipWhitespace, Supplier)} to temporarily override.
   */
  public SkipWhitespace skipsWhitespace() {
    return skipsWhitespace;
  }

  /**
   * Temporarily set the {@linkplain #skipsWhitespace() policy for implicitly skipping whitespace}.
   */
  public void runWithWhitespacePolicy(SkipWhitespace policy, Runnable r) {
    var old = skipsWhitespace;
    skipsWhitespace = policy;
    try {
      r.run();
    } finally {
      skipsWhitespace = old;
    }
  }

  /**
   * Temporarily set the {@linkplain #skipsWhitespace() policy for implicitly skipping whitespace}.
   */
  public <T> T runWithWhitespacePolicy(SkipWhitespace policy, Supplier<T> r) {
    var old = skipsWhitespace;
    skipsWhitespace = policy;
    try {
      return r.get();
    } finally {
      skipsWhitespace = old;
    }
  }

  // endregion getters and setters

  // region read
  /**
   * Read some digits and return an unsigned integer.
   *
   * @throws ParseException if the next character isn't a digit.
   */
  public int readUInt() {
    if (!nextCharSatisfies(Character::isDigit)) {
      throw fail("digit(s)", Strings.quote(peekChar()));
    }

    try {
      return Integer.parseUnsignedInt(readWhile(Character::isDigit), 10);
    } catch (NumberFormatException e) {
      throw fail("integer is too large to parse");
    }
  }

  /**
   * Read some digits and return an unsigned long.
   *
   * @throws ParseException if the next character isn't a digit.
   */
  public long readULong() {
    if (!nextCharSatisfies(Character::isDigit)) {
      throw fail("digit(s)", Strings.quote(peekChar()));
    }

    try {
      return Long.parseUnsignedLong(readWhile(Character::isDigit), 10);
    } catch (NumberFormatException e) {
      throw fail("integer is too large to parse");
    }
  }

  /**
   * Read some digits and return a signed integer.
   *
   * @throws ParseException if the next character isn't a digit.
   */
  public int readInt() {
    return runWithWhitespacePolicy(
        SkipWhitespace.NONE, () -> trySkip('-') ? -readUInt() : readUInt());
  }

  /**
   * Read some digits and return a signed long.
   *
   * @throws ParseException if the next character isn't a digit.
   */
  public long readLong() {
    return runWithWhitespacePolicy(
        SkipWhitespace.NONE, () -> trySkip('-') ? -readULong() : readULong());
  }

  /**
   * Read and return a float.
   *
   * <p>Can parse '-', '.', 'e' or 'E', and '-' after the exponent. Can also parse 'inf", "-inf",
   * and "NaN" (case-sensitive).
   *
   * @throws ParseException if the next character isn't a digit, '.', or '-'.
   */
  public float readFloat() {
    var string = readDecimalString();
    try {
      return Float.parseFloat(string);
    } catch (NumberFormatException e) {
      throw new AssertionError(
          "unexpected \"decimal string\" couldn't actually be parsed as a float: " + string, e);
    }
  }

  /**
   * Read and return a double.
   *
   * <p>Can parse '-', '.', 'e' or 'E', and '-' after the exponent. Can also parse 'inf", "-inf",
   * and "NaN" (case-sensitive).
   *
   * @throws ParseException if the next character isn't a digit, '.', or '-'.
   */
  public double readDouble() {
    var string = readDecimalString();
    try {
      return Double.parseDouble(string);
    } catch (NumberFormatException e) {
      throw new AssertionError(
          "unexpected \"decimal string\" couldn't actually be parsed as a double: " + string, e);
    }
  }

  /**
   * Read and return a string containing an arbitrary-precision decimal.
   *
   * <p>Can parse '-', '.', 'e' or 'E', and '-' after the exponent. Can also parse "Infinity",
   * "-Infinity", "NaN", and "-NaN" (case-sensitive, same as Java).
   *
   * @throws ParseException if the next character isn't a digit, '.', '-', and the next string isn't
   *     "Infinity", "-Infinity", "NaN", or "-NaN".
   */
  public String readDecimalString() {
    skipWhitespaceAccordingToPolicy();

    // This part can't have whitespace in between.
    return runWithWhitespacePolicy(
        SkipWhitespace.NONE,
        () -> {
          if (trySkip("Infinity")) {
            return "Infinity";
          } else if (trySkip("-Infinity")) {
            return "-Infinity";
          } else if (trySkip("NaN")) {
            return "NaN";
          } else if (trySkip("-NaN")) {
            return "-NaN";
          }

          if (!nextCharSatisfies(c -> Character.isDigit(c) || c == '.' || c == '-')) {
            throw fail(
                "decimal number (digit(s), '.', '-', \"Infinity\", \"-Infinity\", \"NaN\", or \"-NaN\")",
                Strings.quote(peekChar()));
          }

          var string = new StringBuilder();
          if (trySkip('-')) {
            string.append('-');
          }
          string.append(readWhile(Character::isDigit));
          if (trySkip('.')) {
            string.append('.').append(readWhile(Character::isDigit));
          }
          if (trySkip('e') || trySkip('E')) {
            string.append('e');
            if (trySkip('+')) {
              string.append('+');
            } else if (trySkip('-')) {
              string.append('-');
            }
            string.append(readWhile(Character::isDigit));
          }

          return string.toString();
        });
  }

  /**
   * Read a valid Java identifier (or reserved keyword, but no underscore).
   *
   * @throws ParseException if the next character isn't a letter or underscore (the beginning of an
   *     identifier) or the entire identifier is only an underscore.
   */
  public String readJavaIdentifierOrKeyword() {
    if (!nextCharSatisfies(Character::isJavaIdentifierStart)) {
      throw fail("start of Java identifier (letter, '_', or '$')", Strings.quote(peekChar()));
    }

    var result = readWhile(Character::isJavaIdentifierPart);
    if (result.equals("_")) {
      throw fail("\"_\" isn't a valid Java identifier");
    }
    return result;
  }

  /**
   * Read a string surrounded with the given quotes and return the unquoted (unescaped) content.
   *
   * @throws IllegalArgumentException if the quote isn't '"', '\'', or '`'.
   * @throws ParseException if the next character isn't the beginning quote, or if there's no end
   *     quote before EOF.
   */
  public String readQuoted(char quote) {
    if (quote != '"' && quote != '\'' && quote != '`') {
      throw new IllegalArgumentException("quote must be '\"', '\\'', or '`'");
    }
    var sb = new StringBuilder();

    assertAndSkip(quote);
    return runWithWhitespacePolicy(
        SkipWhitespace.NONE,
        () -> {
          while (true) {
            var c = readChar();
            if (c == quote) {
              return sb.toString();
            } else if (c == '\\') {
              switch (readChar()) {
                case 'n' -> sb.append('\n');
                case 'r' -> sb.append('\r');
                case 't' -> sb.append('\t');
                case '"' -> sb.append('"');
                case '\\' -> sb.append('\\');
                case '\'' -> sb.append('\'');
                case '`' -> sb.append('`');
                case 'x' -> {
                  var hex = readFixedLength(2);
                  try {
                    sb.appendCodePoint(Integer.parseInt(hex, 16));
                  } catch (NumberFormatException e) {
                    throw fail("invalid hex escape sequence");
                  }
                }
                case 'u' -> {
                  var hex = readFixedLength(4);
                  try {
                    sb.appendCodePoint(Integer.parseInt(hex, 16));
                  } catch (NumberFormatException e) {
                    throw fail("invalid 4-byte unicode escape sequence");
                  }
                }
                default -> throw fail("unhandled escape sequence");
              }
            } else if (c == -1) {
              throw fail("unclosed string (needs " + Strings.quote(quote) + ")");
            } else {
              sb.appendCodePoint(c);
            }
          }
        });
  }

  /**
   * Read a string surrounded with the given quotes and return as-is, including quotes and escapes.
   *
   * @throws ParseException if the next character isn't the beginning quote, or if there's no end
   *     quote before EOF.
   */
  public String readQuotedLiterally(char quote) {
    if (quote != '"' && quote != '\'' && quote != '`') {
      throw new IllegalArgumentException("quote must be '\"', '\\'', or '`'");
    }
    var sb = new StringBuilder().appendCodePoint(quote);

    assertAndSkip(quote);
    return runWithWhitespacePolicy(
        SkipWhitespace.NONE,
        () -> {
          while (true) {
            var c = readChar();
            sb.appendCodePoint(c);
            if (c == quote) {
              return sb.toString();
            } else if (c == '\\') {
              switch (readChar()) {
                case 'n', 'r', 't', '"', '\\', '\'', '`' -> {}
                case 'x' -> {
                  var hex = readFixedLength(2);
                  try {
                    Integer.parseInt(hex, 16);
                  } catch (NumberFormatException e) {
                    throw fail("Invalid hex escape sequence");
                  }
                  // Instead of re-escaping the unicode we un-escaped, we re-print the literal hex.
                  sb.append(hex);
                }
                case 'u' -> {
                  var hex = readFixedLength(4);
                  try {
                    Integer.parseInt(hex, 16);
                  } catch (NumberFormatException e) {
                    throw fail("Invalid 4-byte unicode escape sequence");
                  }
                  // Instead of re-escaping the unicode we un-escaped, we re-print the literal hex.
                  sb.append(hex);
                }
                default -> throw fail("Unhandled escape sequence");
              }
            }
          }
        });
  }

  /**
   * Read characters until, but not including, the first whitespace.
   *
   * <p>If EOF is reached, this <i>doesn't</i> throw {@link ParseException}.
   *
   * @see #readUntil(IntPredicate)
   */
  public String readUntilWhitespace() {
    return readUntil(c -> Character.isWhitespace(c) || c == -1);
  }

  /**
   * Read characters up to <b>and including</b> the end of the current line or EOF.
   *
   * <p>This temporarily modifies the whitespace policy to not skip newlines if it is currently set
   * to. Otherwise we'd start reading the next line if it the current line only contains trailing
   * whitespace.
   *
   * @see #readUntil(String)
   * @see #readUntil(IntPredicate)
   */
  public String readPastEndOfLine() {
    var result = readUntilEndOfLine();
    if (runWithWhitespacePolicy(skipsWhitespace.notSkippingNewlines(), () -> trySkip('\n'))) {
      result += '\n';
    }
    return result;
  }

  /**
   * Read characters up to, <b>but not including</b>, the end of the current line or EOF.
   *
   * <p>This temporarily modifies the whitespace policy to not skip newlines if it is currently set
   * to. Otherwise we'd read past the current line if it only contains trailing whitespace.
   *
   * @see #readUntil(String)
   * @see #readUntil(IntPredicate)
   */
  public String readUntilEndOfLine() {
    return runWithWhitespacePolicy(
        skipsWhitespace.notSkippingNewlines(), () -> readUntil('\n', true));
  }

  /**
   * Read characters until, but not including, {@code s}.
   *
   * @throws ParseException on EOF iff {@code acceptEof} is false.
   * @see #readUntil(String, boolean)
   * @see #readUntil(int)
   */
  public String readUntil(String s) {
    return readUntil(s, false);
  }

  /**
   * Read characters until, but not including, {@code s}.
   *
   * @throws ParseException on EOF iff {@code acceptEof} is false.
   * @see #readUntil(int)
   */
  public String readUntil(String s, boolean acceptEof) {
    if (s.length() == 1) {
      return readUntil(s.codePointAt(0), acceptEof);
    }
    if (nextCharsAre(s)) {
      return "";
    }

    var result = new StringBuilder();
    var firstChar = s.codePointAt(0);

    while (true) {
      // `acceptEof` of `readUntil(char, boolean)` is true because if `acceptEof` of
      // `readUntil(String, boolean)` is false, we throw a better exception.
      result.append(readUntil(firstChar, true));

      if (!acceptEof && isAtEof) {
        throw fail(Strings.quote(s) + "...", "eof");
      }
      if (isAtEof || nextCharsAre(s)) {
        return result.toString();
      }

      result.appendCodePoint(readChar());
    }
  }

  /**
   * Read characters until, but not including, {@code c}.
   *
   * @throws ParseException on EOF.
   * @see #readUntil(int, boolean)
   * @see #readUntil(IntPredicate)
   */
  public String readUntil(int c) {
    return readUntil(c, false);
  }

  /**
   * Read characters until, but not including, {@code c}.
   *
   * @throws ParseException on EOF iff {@code acceptEof} is false.
   * @see #readUntil(IntPredicate)
   */
  public String readUntil(int c, boolean acceptEof) {
    return readUntil(next -> next == c || (acceptEof && next == -1));
  }

  /**
   * Read characters until, but not including, the first character which <i>fails</i> the predicate.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is true.
   * @see #readUntil(IntPredicate)
   */
  public String readWhile(IntPredicate charPredicate) {
    return readUntil(c -> !charPredicate.test(c));
  }

  /**
   * Peek characters until, but not including, the first character which <i>fails</i> the predicate.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is true.
   * @see #peekWhile(IntPredicate)
   */
  public String peekWhile(IntPredicate charPredicate) {
    return peekUntil(c -> !charPredicate.test(c));
  }

  /**
   * Read characters until, but not including, the first character which <i>satisfies</i> the
   * predicate.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is false.
   * @see #readWhile(IntPredicate)
   */
  public String readUntil(IntPredicate charPredicate) {
    var result = doReadUntil(charPredicate, true);
    advancePosition(result);
    return result;
  }

  /**
   * Peek characters until, but not including, the first character which <i>satisfies</i> the
   * predicate.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is false.
   * @see #readUntil(IntPredicate)
   * @see #peekWhile(IntPredicate)
   */
  public String peekUntil(IntPredicate charPredicate) {
    var result = doReadUntil(charPredicate, false);
    doUnread(result);
    return result;
  }

  /**
   * If the next characters are {@code s}, consume and return {@code true}. Otherwise return {@code
   * false}.
   */
  public boolean trySkip(String s) {
    if (matchAlwaysFailsBecauseOfWhitespace(s)) {
      throw new IllegalArgumentException(
          "`trySkip` will always return `false` because the string starts with whitespace, and the current whitespace policy (see `#skipsWhitespace()` documentation) is to implicitly skip whitespace before matching.\nMaybe you should call `trySkipWhitespace` first, and then this method without the leading whitespace (although semantics will be slightly different because `trySkipWhitespace` matches any whitespace).");
    }

    if (s.length() == 1) {
      return trySkip(s.codePointAt(0));
    }

    var actual = doReadUpToLength(s.length());
    if (!actual.equals(s)) {
      doUnread(actual);
      return false;
    }
    advancePosition(s);
    return true;
  }

  /**
   * If the next character is {@code c}, consume and return {@code true}. Otherwise return {@code
   * false}.
   */
  public boolean trySkip(int c) {
    if (matchAlwaysFailsBecauseOfWhitespace(c)) {
      throw new IllegalArgumentException(
          "`trySkip` will always return `false` because the character is whitespace, and the current whitespace policy (see `#skipsWhitespace()` documentation) is to implicitly skip whitespace before matching.\nMaybe you should call `trySkipWhitespace` instead (although semantics will be slightly different because `trySkipWhitespace` matches any whitespace).");
    }

    var actual = doReadChar();
    if (actual != c) {
      doUnread(actual);
      return false;
    }
    advancePosition(c);
    return true;
  }

  /**
   * Iff is at least one whitespace character, return {@code true} and skip all of the whitespace.
   *
   * @param includeNewlines if {@code false}, this method won't consider newlines: it will return
   *     {@code false} if the first character is a newline, and won't skip newlines.
   */
  public boolean trySkipWhitespace(boolean includeNewlines) {
    if (!nextCharIsWhitespace(includeNewlines)) {
      return false;
    }
    skipWhitespace(includeNewlines);
    return true;
  }

  /** Assert the next characters are {@code s}, otherwise throw {@link ParseException}. */
  public void assertAndSkip(String s) {
    if (matchAlwaysFailsBecauseOfWhitespace(s)) {
      throw new IllegalArgumentException(
          "`assertAndSkip` will always throw because the string starts with whitespace, and the current whitespace policy (see `#skipsWhitespace()` documentation) is to implicitly skip whitespace before matching.\nMaybe you should call `assertAndSkipWhitespace` first, and then this method without the leading whitespace (although semantics will be slightly different because `assertAndSkipWhitespace` matches any whitespace).");
    }

    if (s.length() == 1) {
      assertAndSkip(s.codePointAt(0));
      return;
    }

    var actual = doReadUpToLength(s.length());
    if (!actual.equals(s)) {
      doUnread(actual);
      throw fail(
          Strings.quote(s) + "...",
          actual.isEmpty()
              ? "eof"
              : Strings.quote(actual) + (actual.length() == s.length() ? "..." : " then EOF"));
    }
    advancePosition(s);
  }

  /** Assert the next character is {@code c} and skip, otherwise throw {@link ParseException}. */
  public void assertAndSkip(int c) {
    if (matchAlwaysFailsBecauseOfWhitespace(c)) {
      throw new IllegalArgumentException(
          "`assertAndSkip` will always throw because the character is whitespace, and the current whitespace policy (see `#skipsWhitespace()` documentation) is to implicitly skip whitespace before matching.\nMaybe you should call `assertAndSkipWhitespace` instead (although semantics will be slightly different because `assertAndSkipWhitespace` matches any whitespace).");
    }

    var actual = doReadChar();
    if (actual != c) {
      doUnread(actual);
      throw fail(Strings.quote(c) + "...", actual == -1 ? "eof" : Strings.quote(actual) + "...");
    }
    advancePosition(actual);
  }

  /**
   * Assert the next character satisfies {@code predicate} and skip, otherwise throw {@link
   * ParseException}.
   *
   * @param predicateDesc Description of what the predicate matches to display in the error, e.g.
   *     "whitespace" if it's {@link Character#isWhitespace(int)}.
   */
  public void assertAndSkip(String predicateDesc, IntPredicate predicate) {
    var actual = doReadChar();
    if (!predicate.test(actual)) {
      doUnread(actual);
      throw fail(predicateDesc + "...", actual == -1 ? "eof" : Strings.quote(actual) + "...");
    }
    advancePosition(actual);
  }

  /**
   * Assert that there is at least one whitespace character, and skip all of the whitespace.
   *
   * @param includeNewlines if {@code false}, this method won't consider newlines: it will fail if
   *     the first character is a newline, and won't skip newlines.
   */
  public void assertAndSkipWhitespace(boolean includeNewlines) {
    if (!nextCharIsWhitespace(includeNewlines)) {
      var expected = includeNewlines ? "whitespace..." : "whitespace but not '\n'...";
      throw fail(expected, Strings.quote(peekChar()) + "...");
    }
    skipWhitespace(includeNewlines);
  }

  /** Peek and return whether the next characters are {@code s}. */
  public boolean nextCharsAre(String s) {
    if (matchAlwaysFailsBecauseOfWhitespace(s)) {
      throw new IllegalArgumentException(
          "`nextCharsAre` will always return `false` because the string starts with whitespace, and the current whitespace policy (see `#skipsWhitespace()` documentation) is to implicitly skip whitespace before matching.\nMaybe you should call `nextCharsAreWhitespaceAndThen` instead (although semantics will be slightly different because `nextCharsAreWhitespaceAndThen` matches any leading whitespace).");
    }

    if (s.length() == 1) {
      return nextCharIs(s.codePointAt(0));
    }

    var actual = doReadUpToLength(s.length());
    doUnread(actual);
    return actual.equals(s);
  }

  /** Peek and return whether the next character is {@code c}. */
  public boolean nextCharIs(int c) {
    if (matchAlwaysFailsBecauseOfWhitespace(c)) {
      throw new IllegalArgumentException(
          "`nextCharIs` will always return `false` because the character is whitespace, and the current whitespace policy (see `#skipsWhitespace()` documentation) is to implicitly skip whitespace before matching.\nMaybe you should call `nextCharIsWhitespace` instead (although semantics will be slightly different because `nextCharIsWhitespace` matches any whitespace).");
    }

    return c == peekChar();
  }

  /**
   * Return {@code true} iff there is at least one whitespace character, and then after the
   * whitespace, the given string.
   *
   * <p>Note that if the first whitespace is matched, this implicitly skips whitespace, so a
   * subsequent call will return {@code false} and others whitespace-sensitive methods will also be
   * affected.
   *
   * @param includeNewlines if {@code false}, this method won't consider newlines: it will return
   *     {@code false} if the first character is a newline, and won't skip newlines.
   */
  public boolean nextCharsAreWhitespaceAndThen(boolean includeNewlines, String s) {
    return nextCharIsWhitespace(includeNewlines) && nextCharsAre(s);
  }

  /**
   * Return {@code true} iff there is at least one whitespace character, and then after the
   * whitespace, the given character.
   *
   * <p>Note that if the first whitespace is matched, this implicitly skips whitespace, so a
   * subsequent call will return {@code false} and others whitespace-sensitive methods will also be
   * affected.
   *
   * @param includeNewlines if {@code false}, this method won't consider newlines: it will return
   *     {@code false} if the first character is a newline, and won't skip newlines.
   */
  public boolean nextCharsAreWhitespaceAndThen(boolean includeNewlines, int c) {
    return nextCharIsWhitespace(includeNewlines) && nextCharIs(c);
  }

  /**
   * Return {@code true} iff the next character is whitespace, not implicitly skipping any
   * whitespace regardless of the {@linkplain #skipsWhitespace() whitespace policy}.
   *
   * <p>The other methods {@link #nextCharsAre(String)}, {@link #nextCharIs(int)}, and {@link
   * #nextCharSatisfies(IntPredicate)}, as well as methods like {@link #assertAndSkip(String)} and
   * {@link #readFixedLength(int)}, will implicitly skip whitespace before matching if {@link
   * #skipsWhitespace()} is set to anything other than {@link SkipWhitespace#NONE}. The only methods
   * that will treat whitespace differently are those that explicitly say so in their documentation.
   *
   * @param includeNewlines if {@code false}, this method will return {@code false} if the next
   *     character is a newline.
   */
  public boolean nextCharIsWhitespace(boolean includeNewlines) {
    return runWithWhitespacePolicy(
        SkipWhitespace.NONE,
        () -> nextCharSatisfies(Character::isWhitespace) && (includeNewlines || !nextCharIs('\n')));
  }

  /** Peek and return whether the next character satisfies the given predicate. */
  public boolean nextCharSatisfies(IntPredicate charPredicate) {
    return charPredicate.test(peekChar());
  }

  /** Consume and return the next character. */
  public int readChar() {
    var c = doReadChar();
    advancePosition(c);
    return c;
  }

  /** Peek and return the next character. */
  public int peekChar() {
    var c = doReadChar();
    doUnread(c);
    return c;
  }

  /**
   * Read until the given <b>1-based</b> column is reached.
   *
   * @throws ParseException if the column is already passed.
   * @throws ParseException if a newline is encountered before the column.
   */
  public String readUntilColumn(long column) {
    return readUntilColumn(column, false);
  }

  /**
   * Read until the given <b>1-based</b> column is reached.
   *
   * @throws ParseException if the column is already passed and {@code okToBeAfter} is false.
   * @throws ParseException if a newline is encountered before the column.
   */
  public String readUntilColumn(long column, boolean okToBeAfter) {
    if (column < 1) {
      throw new IllegalArgumentException("column must be positive (1-based)");
    }

    if (this.column == column) {
      return "";
    }

    if (this.column > column) {
      if (!okToBeAfter) {
        throw fail("column " + column, "column " + this.column);
      }
      return "";
    }

    var length = (int) (column - this.column);
    var string = doReadUpToLength(length);
    if (string.length() < length || string.contains("\n")) {
      doUnread(string);
      throw fail("at least " + length + " non-newline characters", Strings.quote(string));
    }
    advancePosition(string);
    assert column == this.column;
    return string;
  }

  /** Read exactly {@code length} characters. Otherwise throws {@link ParseException}. */
  public String readFixedLength(int length) {
    var string = doReadUpToLength(length);
    if (string.length() < length) {
      doUnread(string);
      throw fail("at least " + length + " characters", string.length() + " characters then EOF");
    }
    advancePosition(string);
    return string;
  }

  /** Peek up to {@code length} characters. */
  public String peekUpToLength(int length) {
    var string = doReadUpToLength(length);
    doUnread(string);
    return string;
  }

  /** Skips the whitespace that the policy dictates to skip. */
  public void skipWhitespaceAccordingToPolicy() {
    switch (skipsWhitespace) {
      case NONE -> {}
      case ALL_EXCEPT_NEWLINES -> skipWhitespace(false);
      case ALL -> skipWhitespace(true);
    }
  }

  /**
   * Consume characters until, but not including, the first non-whitespace.
   *
   * <p>If {@code includeNewlines} is false this also stops before a newline.
   *
   * <p><i>Doesn't</i> throw {@link ParseException} on EOF.
   *
   * @see #readWhile(IntPredicate)
   */
  public void skipWhitespace(boolean includeNewlines) {
    // Can't use `doRead` because `doRead` uses this method.
    try {
      while (true) {
        var next = input.read();
        if (next == -1) {
          // If EOF isn't expected, will fail and report so later.
          handleEof(true);
          break;
        } else if ((!includeNewlines && next == '\n') || !Character.isWhitespace(next)) {
          input.unread(next);
          break;
        }

        advancePosition(next);
      }
    } catch (IOException e) {
      throw new RuntimeException("failed to read from input", e);
    }
  }

  // endregion read

  // region read helpers

  /**
   * If {@code true}, the string will never be matched, because it starts with whitespace and the
   * current {@linkplain #skipsWhitespace() whitespace policy} is to implicitly skip whitespace
   * before matching.
   */
  private boolean matchAlwaysFailsBecauseOfWhitespace(String s) {
    return switch (skipsWhitespace) {
      case NONE -> false;
      case ALL_EXCEPT_NEWLINES ->
          !s.isEmpty() && Character.isWhitespace(s.codePointAt(0)) && s.codePointAt(0) != '\n';
      case ALL -> !s.isEmpty() && Character.isWhitespace(s.codePointAt(0));
    };
  }

  /**
   * If {@code true}, the character will never be matched, because it's whitespace and the current
   * {@linkplain #skipsWhitespace() whitespace policy} is to implicitly skip whitespace before
   * matching.
   */
  private boolean matchAlwaysFailsBecauseOfWhitespace(int c) {
    return switch (skipsWhitespace) {
      case NONE -> false;
      case ALL_EXCEPT_NEWLINES -> Character.isWhitespace(c) && c != '\n';
      case ALL -> Character.isWhitespace(c);
    };
  }

  /**
   * Read characters until the first character which <i>satisfies</i> the predicate, without
   * advancing {@link #position()}.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is false.
   */
  private String doReadUntil(IntPredicate charPredicate, boolean commit) {
    if (isAtEof) {
      handleEof(charPredicate.test(-1));
      return "";
    }

    try {
      return doRead(
          () -> {
            while (true) {
              var next = input.read();
              if (next == -1) {
                handleEof(charPredicate.test(-1));
                break;
              } else if (charPredicate.test(next)) {
                input.unread(next);
                break;
              }

              stringBuffer.appendCodePoint(next);
            }

            return stringBuffer.toString();
          });
    } catch (ParseException e) {
      if (commit) {
        advancePosition(stringBuffer.toString());
      } else {
        doUnread(stringBuffer.toString());
      }
      throw e;
    } finally {
      stringBuffer.setLength(0);
    }
  }

  /** Read up to {@code length}, consuming from buffer but not advancing {@link #position()}. */
  private String doReadUpToLength(int length) {
    if (length < 0) {
      throw new IllegalArgumentException("length must be non-negative");
    }

    if (length == 0 || isAtEof) {
      return "";
    }

    if (charBuffer.length < length) {
      charBuffer = new char[length];
    }

    return doRead(
        () -> {
          var read = input.read(charBuffer, 0, length);
          if (read < length) {
            // If EOF isn't accepted (e.g. in `readFixedLen`), we get a different error that says
            // EOF
            handleEof(true);
          }

          return read == -1 ? "" : new String(charBuffer, 0, read);
        });
  }

  /**
   * Read a character, consuming from buffer but not advancing {@link #position()}.
   *
   * <p>Returns -1 on EOF.
   */
  private int doReadChar() {
    if (isAtEof) {
      return -1;
    }

    return doRead(input::read);
  }

  /** Skip whitespace if necessary, prevent nested read and rethrow {@link IOException}. */
  private <T> T doRead(IOThrowingSupplier<T> r) {
    if (isReading) {
      throw new IllegalStateException("attempted nested read");
    }
    isReading = true;

    try {
      skipWhitespaceAccordingToPolicy();

      return r.get();
    } catch (IOException e) {
      throw new RuntimeException("failed to read from input", e);
    } finally {
      isReading = false;
    }
  }

  /** Unread character and rethrow {@link IOException}. */
  private void doUnread(int c) {
    if (c == -1) {
      return;
    }

    try {
      if (isAtEof) {
        isAtEof = false;
        // PushbackReader can't unread when it encounters EOF,
        // so we just create an entirely new reader.
        input = new PushbackReader(new StringReader(String.valueOf((char) c)), 1);
      } else {
        input.unread(c);
      }
    } catch (IOException e) {
      throw new RuntimeException("failed to unread character", e);
    }
  }

  /** Unread characters and rethrow {@link IOException}. */
  private void doUnread(String s) {
    if (s.isEmpty()) {
      return;
    }

    try {
      if (isAtEof) {
        isAtEof = false;
        // PushbackReader can't unread when it encounters EOF,
        // so we just create an entirely new reader.
        input = new PushbackReader(new StringReader(s), s.length());
      } else {
        input.unread(s.toCharArray());
      }
    } catch (IOException e) {
      throw new RuntimeException("failed to unread characters", e);
    }
  }

  /**
   * Set EOF to true and throw if {@code acceptEof} is false.
   *
   * <p>Works if EOF is already set.
   */
  private void handleEof(boolean acceptEof) {
    isAtEof = true;
    if (!acceptEof) {
      throw fail("unexpected end of input");
    }
  }

  /** Move {@link #position()} after the given characters. */
  private void advancePosition(String s) {
    setPosition(position().advanced(s));
  }

  /** Move {@link #position()} after the given character. */
  private void advancePosition(int c) {
    setPosition(position().advanced(c));
  }

  // TODO: Remove `tempBuffer` and the logic around `setPosition` after we resolve any encountered
  //  issues with the offset being wrong, and tested enough that there probably aren't any more.
  char[] tempBuffer = new char[64];
  int tempBufferSize = 0;

  private void setPosition(Position p) {
    var delta = (int) (p.offset() - offset);
    if (delta < tempBufferSize - 1) {
      var prevTempBuffer = new char[64];
      var prevTempBufferSize = tempBufferSize;
      System.arraycopy(tempBuffer, 0, prevTempBuffer, 0, tempBufferSize);
      try {
        tempBufferSize = input.read(tempBuffer);
        input.unread(tempBuffer, 0, tempBufferSize);
      } catch (IOException e) {
        // skip
      }
      var realDelta = 0;
      var areEqual = false;
      while (!areEqual && realDelta < tempBufferSize) {
        areEqual = true;
        for (var i = realDelta; i < prevTempBufferSize; i++) {
          if (tempBuffer[i - realDelta] != prevTempBuffer[i]) {
            areEqual = false;
            break;
          }
        }
        realDelta++;
      }

      assert areEqual
          : "no equality: "
              + Strings.quote(String.valueOf(tempBuffer, 0, tempBufferSize))
              + " vs "
              + Strings.quote(String.valueOf(prevTempBuffer, 0, prevTempBufferSize));
      if (delta != realDelta) {
        throw fail("delta mismatch: " + delta + " != " + realDelta);
      }
    }

    offset = p.offset();
    line = p.line();
    column = p.column();
  }

  // endregion read helpers

  // region throw
  /** Return a {@link ParseException} at the current position. */
  public ParseException fail(String expected, String found) {
    return fail("expected " + expected + ", but found " + found);
  }

  /** Return a {@link ParseException} at the current position. */
  public ParseException fail(String message) {
    return fail(message, (Throwable) null);
  }

  /** Return a {@link ParseException} at the current position. */
  public ParseException fail(String message, @Nullable Throwable cause) {
    return new ParseException(position(), message, cause);
  }
  // endregion throw
}
