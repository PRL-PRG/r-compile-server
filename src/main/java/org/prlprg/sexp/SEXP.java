package org.prlprg.sexp;

import javax.annotation.concurrent.Immutable;

@Immutable
public interface SEXP {
    SEXPType type();

    default Attributes attributes() {
        return Attributes.NONE;
    }
}
