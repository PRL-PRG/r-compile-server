package org.prlprg.parseprint;

/**
 * Offset, line, and column.
 *
 * <p>The offset is 0-indexed, the line and column are 1-indexed.
 */
public record Position(long offset, long line, long column) {
  /** Return a position moved from this to after the given characters. */
  public Position advanced(String s) {
    var of = offset;
    var ln = line;
    var cl = column;

    of += s.length();
    var lineIdx = 0;
    while (true) {
      var nextLineIdx = s.indexOf('\n', lineIdx);
      if (nextLineIdx == -1) {
        break;
      }
      ln++;
      cl = 1;
      lineIdx = nextLineIdx + 1;
    }
    cl += s.length() - lineIdx;

    return new Position(of, ln, cl);
  }

  /** Return a position moved from this to after the given character. */
  public Position advanced(int c) {
    var of = offset;
    var ln = line;
    var cl = column;

    of++;
    if (c == '\n') {
      ln++;
      cl = 1;
    } else {
      cl++;
    }

    return new Position(of, ln, cl);
  }

  @Override
  public String toString() {
    return line + ":" + column + " (" + offset + ")";
  }
}
