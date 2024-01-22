package org.prlprg.sexp;

import javax.annotation.Nullable;

public record TaggedElem(@Nullable String tag, SEXP value) {
    public TaggedElem {
        if (tag != null && tag.isBlank()) {
            throw new IllegalArgumentException("Tag cannot be blank, should be null instead");
        }
    }

    public TaggedElem(SEXP value) {
        this(null, value);
    }

    @Override
    public String toString() {
        return tag == null ? value.toString() :
                value == SEXPs.MISSING_ARG ? tag + "=" :
                tag + "=" + value;
    }
}
