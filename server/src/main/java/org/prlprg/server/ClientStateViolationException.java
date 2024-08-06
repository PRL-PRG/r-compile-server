package org.prlprg.server;

/**
 * The client sent a message or data the server wasn't expecting in its state. e.g. client
 * initializes itself twice.
 */
public final class ClientStateViolationException extends IllegalStateException {
  ClientStateViolationException(String message) {
    super(message);
  }

  @SuppressWarnings("unused")
  ClientStateViolationException(Throwable cause) {
    super(cause);
  }

  @SuppressWarnings("unused")
  ClientStateViolationException(String message, Throwable cause) {
    super(message, cause);
  }
}
