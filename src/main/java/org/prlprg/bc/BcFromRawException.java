package org.prlprg.bc;

public class BcFromRawException extends RuntimeException {
    public BcFromRawException(String message) {
        super(message);
    }

    public BcFromRawException(String message, Throwable cause) {
        super(message, cause);
    }
}
