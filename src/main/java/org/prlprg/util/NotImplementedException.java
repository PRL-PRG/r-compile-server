package org.prlprg.util;

public class NotImplementedException extends UnsupportedOperationException {
    public NotImplementedException(Object switchCase) {
        super("Sorry, this case is not yet implemented: " + switchCase);
    }

    public NotImplementedException() {
        super("Sorry, this code is not yet implemented");
    }
}
