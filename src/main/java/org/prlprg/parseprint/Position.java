package org.prlprg.parseprint;

/**
 * Offset, line, and column.
 *
 * <p>The offset is 0-indexed, the line and column are 1-indexed.
 */
public record Position(long offset, long line, long column) {
  @Override
  public String toString() {
    return line + ":" + column + " (" + offset + ")";
  }
}
