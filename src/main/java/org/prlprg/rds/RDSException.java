package org.prlprg.rds;

public class RDSException extends RuntimeException {
    public RDSException(String message) {
        super(message);
    }

    public RDSException(String message, Throwable cause) {
        super(message, cause);
    }
}
