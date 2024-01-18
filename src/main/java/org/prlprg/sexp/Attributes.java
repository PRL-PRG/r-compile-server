package org.prlprg.sexp;

import com.google.common.base.Objects;
import com.google.common.collect.ForwardingMap;
import com.google.common.collect.ImmutableMap;
import com.google.errorprone.annotations.CanIgnoreReturnValue;

import javax.annotation.concurrent.Immutable;
import java.util.Map;

/** Attributes on an {@link SEXP}. */
@Immutable
public sealed class Attributes extends ForwardingMap<String, SEXP> {
    private final ImmutableMap<String, SEXP> attrs;

    public static final Attributes EMPTY = new Empty();
    public static final Attributes NONE = new Attributes();

    private Attributes() {
        attrs = ImmutableMap.of();
    }

    private Attributes(ImmutableMap<String, SEXP> attrs) {
        this.attrs = attrs;
    }

    @Override
    protected Map<String, SEXP> delegate() {
        return attrs;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof Attributes that)) return false;
        // ??? Should NONE equal EMPTY?
        if (getClass() != o.getClass()) return false;
        return Objects.equal(attrs, that.attrs);
    }

    @Override
    public int hashCode() {
        return Objects.hashCode(super.hashCode(), attrs);
    }

    private static final class Empty extends Attributes {
        @Override
        public String toString() {
            return "EMPTY_ATTR";
        }
    }

    /** Build an {@link Attributes} instance. */
    public static class Builder {
        private final ImmutableMap.Builder<String, SEXP> attrs = ImmutableMap.builder();

        /** Add an attribute. */
        @CanIgnoreReturnValue
        public Builder put(String key, SEXP value) {
            attrs.put(key, value);
            return this;
        }

        /** Finish building the {@link Attributes} instance. */
        public Attributes build() {
            return new Attributes(attrs.build());
        }
    }
}
