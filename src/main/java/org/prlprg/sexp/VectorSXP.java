package org.prlprg.sexp;

public interface VectorSXP<T> extends ListOrVectorSXP<T> {
    @Override
    VectorSXP<T> withAttributes(Attributes attributes);
}
