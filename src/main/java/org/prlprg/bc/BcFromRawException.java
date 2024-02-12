package org.prlprg.bc;

/**
 * Exception thrown when a raw byte-array and constant list can't be converted to typed bytecode
 * ({@link Bc}).
 */
public class BcFromRawException extends RuntimeException {
  BcFromRawException(String message) {
    super(message);
  }

  BcFromRawException(String message, Throwable cause) {
    super(message, cause);
  }
}
