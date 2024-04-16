package org.prlprg.parseprint;

import javax.annotation.Nullable;

/**
 * Thrown when the {@link Parser} or {@link Lexer} expects something different than what it finds.
 */
public class ParseException extends RuntimeException {
  private final Position position;

  ParseException(Position position, String message) {
    this(position, message, null);
  }

  ParseException(Position position, String message, @Nullable ParseException cause) {
    super("At " + position + ", " + message, cause);
    this.position = position;
  }

  ParseException whileParsing(String context) {
    return new ParseException(position, "while parsing " + context);
  }

  public Position position() {
    return position;
  }
}
