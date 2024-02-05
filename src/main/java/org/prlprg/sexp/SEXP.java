package org.prlprg.sexp;

import javax.annotation.Nullable;

// FIXME: can we simplify the attributes?
public sealed interface SEXP permits StrOrRegSymSXP, SymOrLangSXP, ListOrVectorSXP, CloSXP, EnvSXP, BCodeSXP {
    SEXPType type();

    /**
     * @return {@code null} if the SEXP doesn't support attributes ({@link #withAttributes} throws an exception)
     * and {@code Attributes.NONE} if it does but there are none.
     */
    default @Nullable Attributes attributes() {
        return null;
    }

    /**
     * @throws UnsupportedOperationException if the SEXP doesn't support attributes.
     */
    default SEXP withAttributes(Attributes attributes) {
        throw new UnsupportedOperationException("Cannot set attributes on " + type());
    }

    @SuppressWarnings("unchecked")
    default <T extends SEXP> T cast(T... reified) {
        var clazz = (Class<? extends T>) reified.getClass().getComponentType();
        return cast(clazz);
    }

    default <T extends SEXP> T cast(Class<T> clazz) {
        if (clazz.isAssignableFrom(this.getClass())) {
            return clazz.cast(this);
        } else {
            throw new ClassCastException("Unable to cast " + this.getClass() + " to " + clazz);
        }
    }
}
