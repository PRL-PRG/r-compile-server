package org.prlprg.parseprint;

import java.util.ArrayDeque;
import java.util.Deque;
import javax.annotation.Nullable;

/**
 * Thrown when the {@link Parser} or {@link Scanner} expects something different than what it finds.
 */
public class ParseException extends RuntimeException {
  private static final int MAX_CONTEXTS = 5;

  private final Position position;
  private final String message;
  private final Deque<String> contexts = new ArrayDeque<>();

  ParseException(Position position, String message) {
    this(position, message, null);
  }

  ParseException(Position position, String message, @Nullable Throwable cause) {
    super("At " + position + ", " + message, cause);
    this.position = position;
    this.message = message;
  }

  /** Get the position in the input which is blamed for the parse failure. */
  public Position position() {
    return position;
  }

  /**
   * Add context that the exception was thrown while parsing an element of part of an element that
   * can be described by the given string.
   *
   * <p>Returns the exception itself, since this is typically called in {@code catch} blocks, so the
   * original stack trace is the important one.
   */
  public ParseException whileParsing(String context) {
    // Don't have redundant contexts, removes if already somewhere in the list.
    contexts.remove(context);

    // Don't have more than MAX_CONTEXTS.
    if (contexts.size() == MAX_CONTEXTS) {
      contexts.removeFirst();
    }

    contexts.addLast(context);

    return this;
  }

  @Override
  public String getMessage() {
    var sb = new StringBuilder().append("At ").append(position).append(", ").append(message);
    if (!contexts.isEmpty()) {
      sb.append("\n\twhile parsing ");
      var it = contexts.iterator();
      sb.append(it.next());
      while (it.hasNext()) {
        sb.append(" in ").append(it.next());
      }
    }
    return sb.toString();
  }
}
