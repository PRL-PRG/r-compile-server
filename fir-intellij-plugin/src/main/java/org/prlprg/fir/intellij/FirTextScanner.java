package org.prlprg.fir.intellij;

import java.util.Arrays;

/**
 * Utility for scanning FIR text while correctly skipping comments, string literals, and backtick
 * identifiers.
 */
final class FirTextScanner {

  /**
   * Iterates through {@code text[start..end)}, calling {@code handler} for each character that is
   * outside of comments ({@code #...}), strings ({@code "..."}), and backtick identifiers ({@code
   * `...`}).
   */
  static void scan(String text, int start, int end, NormalCharHandler handler) {
    var state = State.NORMAL;
    var escaped = false;
    for (var i = start; i < end; i++) {
      var c = text.charAt(i);
      switch (state) {
        case NORMAL -> {
          if (c == '#') {
            state = State.COMMENT;
            continue;
          }
          if (c == '"') {
            state = State.STRING;
            escaped = false;
            continue;
          }
          if (c == '`') {
            state = State.BACKTICK;
            escaped = false;
            continue;
          }
          if (!handler.onChar(i, c)) return;
        }
        case COMMENT -> {
          if (c == '\n') state = State.NORMAL;
        }
        case STRING -> {
          if (escaped) {
            escaped = false;
            continue;
          }
          if (c == '\\') {
            escaped = true;
            continue;
          }
          if (c == '"') state = State.NORMAL;
        }
        case BACKTICK -> {
          if (escaped) {
            escaped = false;
            continue;
          }
          if (c == '\\') {
            escaped = true;
            continue;
          }
          if (c == '`') state = State.NORMAL;
        }
      }
    }
  }

  /**
   * Returns a copy of {@code text} where all characters inside comments, strings, and backtick
   * identifiers are replaced with spaces. Offsets in the result correspond 1:1 to offsets in the
   * original.
   */
  static String stripCommentsAndStrings(String text) {
    var result = new char[text.length()];
    Arrays.fill(result, ' ');
    scan(text, 0, text.length(), (i, c) -> {
      result[i] = c;
      return true;
    });
    return new String(result);
  }

  /**
   * Finds the position of the first {@code #} that starts a line comment (outside of strings and
   * backtick identifiers) within {@code text[start..end)}.
   *
   * @return the index of the comment-starting {@code #}, or {@code -1} if none found
   */
  static int findCommentStart(String text, int start, int end) {
    var inString = false;
    var inBacktick = false;
    var escaped = false;
    for (var i = start; i < end; i++) {
      var c = text.charAt(i);
      if (escaped) {
        escaped = false;
        continue;
      }
      if ((inString || inBacktick) && c == '\\') {
        escaped = true;
        continue;
      }
      if (inString) {
        if (c == '"') inString = false;
        continue;
      }
      if (inBacktick) {
        if (c == '`') inBacktick = false;
        continue;
      }
      if (c == '"') {
        inString = true;
        continue;
      }
      if (c == '`') {
        inBacktick = true;
        continue;
      }
      if (c == '#') return i;
    }
    return -1;
  }

  @FunctionalInterface
  interface NormalCharHandler {
    /**
     * Called for each character in normal (non-comment, non-string, non-backtick) context.
     *
     * @return {@code false} to stop scanning
     */
    boolean onChar(int index, char c);
  }

  private enum State {
    NORMAL,
    COMMENT,
    STRING,
    BACKTICK
  }

  private FirTextScanner() {}
}
