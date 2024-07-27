package org.prlprg.sexp;

/** {@link SEXP} that isn't a {@link PromSXP}.
 *
 * <p>i.e. reading it at runtime doesn't run arbitrary code.
 */
public sealed interface ValueSXP extends SEXP
  permits StrOrRegSymSXP,
      RegSymOrLangSXP,
      SymSXP,
      ListOrVectorSXP,
      LangOrListSXP,
      FunSXP,
      EnvSXP,
      BCodeSXP {

}
