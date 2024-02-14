package org.prlprg.sexp;

import java.util.Optional;
import javax.annotation.concurrent.Immutable;

/**
 * Literally either a string vector or symbol with a name. Be aware the string may be empty or have
 * multiple entries.
 *
 * <p>The reason this exists is simply that there's a case in GNU-R where an SEXP can only be one of
 * these two possible types ({@link org.prlprg.bc.BcInstr.SetTag}`). Maybe we should use {@link
 * org.prlprg.util.Either} instead...
 */
@Immutable
public sealed interface StrOrRegSymSXP extends SEXP permits StrSXP, RegSymSXP {
  // FIXME: this is not great, but far the most often used pattern matching is
  //  on either symbol or a scalar string
  Optional<String> reifyString();
}
