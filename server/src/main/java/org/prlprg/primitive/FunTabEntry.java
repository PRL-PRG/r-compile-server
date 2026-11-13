package org.prlprg.primitive;

/// An entry of GNU-R's `R_FunTab`. `isInternal`: R code calls it via `.Internal`, not as a
/// primitive. `visibility` is GNU-R's `PRIMPRINT`: after a call, 0 sets `R_Visible` on, 1 sets it
/// off, and 2 leaves what the call set.
public record FunTabEntry(
    int index, int arity, boolean isSpecial, boolean isInternal, int visibility) {}
