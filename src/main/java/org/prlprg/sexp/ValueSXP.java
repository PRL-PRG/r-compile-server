package org.prlprg.sexp;

/** {@link SEXP} that isn't a {@link PromSXP} or {@link MissingSXP}.
 *
 * <p>i.e. reading it at runtime doesn't run arbitrary code or throw an error.
 */
public sealed interface ValueSXP extends ValueOrMissingSXP
    permits AbstractPairListSXP, BCodeSXP, EnvSXP, FunSXP, ListOrVectorSXP, MissingSXP,
    RegSymOrLangSXP, StrOrRegSymSXP {

}
