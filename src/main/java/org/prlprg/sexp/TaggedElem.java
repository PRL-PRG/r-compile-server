package org.prlprg.sexp;

import javax.annotation.Nullable;

public record TaggedElem(@Nullable String tag, SEXP value) {
}
