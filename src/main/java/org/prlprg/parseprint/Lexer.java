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
import java.util.function.Predicate;
import java.util.function.Supplier;
import org.prlprg.util.IOThrowingSupplier;

/**
 * Parse terminals (e.g. identifiers, numbers, specific punctuation) from a stream of text.
 *
 * <p>Unlike a traditional lexer there's no fixed set of tokens. Instead, you call a method to parse
 * exactly the terminal you expect.
 */
public class Lexer {
  private final PushbackReader input;
  private final StringBuilder stringBuffer = new StringBuilder(128);
  private char[] charBuffer = new char[1024];
  private boolean isReading;
  private SkipWhitespace skipsWhitespace = SkipWhitespace.NONE;
  private boolean isAtEof = false;
  private long offset = 0;
  private long line = 1;
  private long column = 1;

  // region constructors
  /** Adapt the {@link Reader} for lexing. */
  public Lexer(Reader input) {
    this.input = new PushbackReader(input, 128);
  }

  /** Lex the given string. */
  public Lexer(String input) {
    this(new StringReader(input));
  }

  /** Open the file and lex its contents. */
  public Lexer(File input) throws FileNotFoundException {
    this(new BufferedReader(new FileReader(input)));
  }

  /** Lex the given stream. */
  public Lexer(InputStream input) {
    this(new BufferedReader(new InputStreamReader(input)));
  }

  // endregion

  // region getters and setters
  public Position position() {
    return new Position(offset, line, column);
  }

  public boolean isAtEof() {
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
      throw fail("digit(s)", Character.toString(peekChar()));
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
      throw fail("digit(s)", Character.toString(peekChar()));
    }

    try {
      return Long.parseUnsignedLong(readWhile(Character::isDigit), 10);
    } catch (NumberFormatException e) {
      throw fail("integer is too large to parse");
    }
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
                Character.toString(peekChar()));
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
            if (trySkip('-')) {
              string.append('-');
            }
            string.append(readWhile(Character::isDigit));
          }

          return string.toString();
        });
  }

  /**
   * Read characters until, but not including, the first whitespace.
   *
   * <p>If EOF is reached, this <i>doesn't</i> throw {@link ParseException}.
   *
   * @see #readUntil(Predicate)
   */
  public String readUntilWhitespace() {
    return readUntil(c -> Character.isWhitespace(c) || c == -1);
  }

  /**
   * Read characters until, but not including, {@code c}.
   *
   * @throws ParseException on EOF.
   * @see #readUntil(int, boolean)
   * @see #readUntil(Predicate)
   */
  public String readUntil(int c) {
    return readUntil(c, false);
  }

  /**
   * Read characters until, but not including, {@code c}.
   *
   * @throws ParseException on EOF iff {@code acceptEof} is false.
   * @see #readUntil(Predicate)
   */
  public String readUntil(int c, boolean acceptEof) {
    return readUntil(next -> next == c || (acceptEof && next == -1));
  }

  /**
   * Read characters until, but not including, the first character which <i>fails</i> the predicate.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is true.
   * @see #readUntil(Predicate)
   */
  public String readWhile(Predicate<Integer> charPredicate) {
    return readUntil(c -> !charPredicate.test(c));
  }

  /**
   * Peek characters until, but not including, the first character which <i>fails</i> the predicate.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is true.
   * @see #peekWhile(Predicate)
   */
  public String peekWhile(Predicate<Integer> charPredicate) {
    return peekUntil(c -> !charPredicate.test(c));
  }

  /**
   * Read characters until, but not including, the first character which <i>satisfies</i> the
   * predicate.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is false.
   * @see #readWhile(Predicate)
   */
  public String readUntil(Predicate<Integer> charPredicate) {
    var result = doReadUntil(charPredicate);
    advancePosition(result);
    return result;
  }

  /**
   * Peek characters until, but not including, the first character which <i>satisfies</i> the
   * predicate.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is false.
   * @see #readUntil(Predicate)
   * @see #peekWhile(Predicate)
   */
  public String peekUntil(Predicate<Integer> charPredicate) {
    var result = doReadUntil(charPredicate);
    doUnread(result);
    return result;
  }

  /**
   * If the next characters are {@code s}, consume and return {@code true}. Otherwise return {@code
   * false}.
   */
  public boolean trySkip(String s) {
    if (s.length() == 1) {
      return trySkip(s.codePointAt(0));
    }

    var actual = doReadUpToLength(s.length());
    if (!actual.equals(s)) {
      doUnread(actual);
      return false;
    }
    advancePosition(s);
    return false;
  }

  /**
   * If the next character is {@code c}, consume and return {@code true}. Otherwise return {@code
   * false}.
   */
  public boolean trySkip(int c) {
    var actual = doReadChar();
    if (actual != c) {
      doUnread(actual);
      return false;
    }
    advancePosition(c);
    return true;
  }

  /** Assert the next characters are {@code s}, otherwise throw {@link ParseException}. */
  public void assertAndSkip(String s) {
    if (s.length() == 1) {
      assertAndSkip(s.codePointAt(0));
      return;
    }

    var actual = doReadUpToLength(s.length());
    if (!actual.equals(s)) {
      doUnread(actual);
      throw fail(
          '"' + s + "\"...",
          actual.isEmpty()
              ? "eof"
              : '"' + actual + '"' + (actual.length() == s.length() ? "..." : " then EOF"));
    }
    advancePosition(s);
  }

  /** Assert the next character is {@code c} and skip, otherwise throw {@link ParseException}. */
  public void assertAndSkip(int c) {
    var actual = doReadChar();
    if (actual != c) {
      doUnread(actual);
      throw fail(
          "'" + Character.toString(c) + "'...",
          actual == -1 ? "eof" : "'" + Character.toString(actual) + "'...");
    }
    advancePosition(actual);
  }

  /** Peek and return whether the next characters are {@code s}. */
  public boolean nextCharsAre(String s) {
    if (s.length() == 1) {
      return nextCharIs(s.codePointAt(0));
    }

    var actual = doReadUpToLength(s.length());
    doUnread(actual);
    return actual.equals(s);
  }

  /** Peek and return whether the next character is {@code c}. */
  public boolean nextCharIs(int c) {
    return c == peekChar();
  }

  /** Peek and return whether the next character satisfies the given predicate. */
  public boolean nextCharSatisfies(Predicate<Integer> charPredicate) {
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
   * @see #readWhile(Predicate)
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
        }

        if (!includeNewlines && next == '\n' || !Character.isWhitespace(next)) {
          doUnread(next);
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
   * Read characters until the first character which <i>satisfies</i> the predicate, without
   * advancing {@link #position()}.
   *
   * @throws ParseException on EOF <i>iff</i> {@code charPredicate(-1)} is false.
   */
  public String doReadUntil(Predicate<Integer> charPredicate) {
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

              stringBuffer.append(next);
            }

            return stringBuffer.toString();
          });
    } catch (ParseException e) {
      doUnread(stringBuffer.toString());
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

          return new String(charBuffer, 0, read);
        });
  }

  /**
   * Read a character, consuming from buffer but not advancing {@link #position()}.
   *
   * <p>Returns -1 on EOF.
   */
  public int doReadChar() {
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

  /** Unread characters and rethrow {@link IOException}. */
  private void doUnread(int c) {
    try {
      input.unread(c);
    } catch (IOException e) {
      throw new RuntimeException("failed to unread characters", e);
    }
  }

  /** Unread characters and rethrow {@link IOException}. */
  private void doUnread(String s) {
    try {
      input.unread(s.toCharArray());
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

  /** Move {@link #position()} for the given characters. */
  private void advancePosition(String s) {
    offset += s.length();
    var lineIdx = 0;
    while (true) {
      var nextLineIdx = s.indexOf('\n', lineIdx);
      if (nextLineIdx == -1) {
        break;
      }
      line++;
      lineIdx = nextLineIdx + 1;
    }
    column = s.length() - lineIdx + 1;
  }

  /** Move {@link #position()} for the given character. */
  private void advancePosition(int c) {
    offset++;
    if (c == '\n') {
      line++;
      column = 1;
    } else {
      column++;
    }
  }

  // endregion read helpers

  // region throw
  /** Return a {@link ParseException} at the current position. */
  public ParseException fail(String expected, String found) {
    return fail("expected " + expected + ", but found " + found);
  }

  /** Return a {@link ParseException} at the current position. */
  public ParseException fail(String message) {
    throw new ParseException(position(), message);
  }
  // endregion throw
}
