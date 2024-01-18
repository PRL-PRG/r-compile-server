package org.prlprg.util;

public class NotImplementedException extends UnsupportedOperationException {
    public NotImplementedException() {
        super("Sorry, this code is not yet implemented");
    }
}
