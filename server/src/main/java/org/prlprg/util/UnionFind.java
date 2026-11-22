package org.prlprg.util;

public interface UnionFind<T> {
    public boolean unionInto(T representative, T other);
    public T find(T element);
    public void clear();
}
