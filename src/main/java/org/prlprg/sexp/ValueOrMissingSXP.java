package org.prlprg.sexp;

/** {@link SEXP} that isn't a {@link PromSXP}.
 *
 * <p>i.e. reading it at runtime doesn't run arbitrary code.
 */
public sealed interface ValueOrMissingSXP extends SEXP
    permits DotsListOrMissingSXP, SymSXP, ValueSXP {

}
