package org.prlprg.server;

/** The client sent a malformed message. */
public final class ClientParseViolationException extends IllegalStateException {
  @SuppressWarnings("unused")
  ClientParseViolationException(String message) {
    super(message);
  }

  ClientParseViolationException(Throwable cause) {
    super(cause);
  }

  @SuppressWarnings("unused")
  ClientParseViolationException(String message, Throwable cause) {
    super(message, cause);
  }
}
