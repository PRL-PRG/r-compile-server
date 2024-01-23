package org.prlprg.util;

/** A type with no instances, it can't be constructed.
 * <p>
 * Useful in generics and other compound types, e.g. `@Nullable Nothing` is only `null`, and a function which returns
 * `Nothing` is guaranteed not to return
 */
public final class Nothing {
    private Nothing() {
        throw new UnsupportedOperationException("Nothing can't be constructed");
    }
}
