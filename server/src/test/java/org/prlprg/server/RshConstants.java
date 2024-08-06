package org.prlprg.server;

import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

public class RshConstants {
  public static final SEXP NAME_CALL_FUN = SEXPs.symbol("call_fun");
  public static final SEXP POINTER_PLACEHOLDER = SEXPs.symbol(".PLACEHOLDER.");
  public static final SEXP NAME_PACKAGE = SEXPs.string("rsh");
}
