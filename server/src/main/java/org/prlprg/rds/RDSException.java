package org.prlprg.rds;

/** Thrown when deserializing R objects from malformed RDS. */
public class RDSException extends RuntimeException {
  RDSException(String message) {
    super(message);
  }

  RDSException(String message, Throwable cause) {
    super(message, cause);
  }
}
