package org.prlprg.fir.ir;

import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;

public class ParseUtil {
  public static Module parseModule(String firText) {
    try {
      return Parser.fromString(firText, Module.class);
    } catch (ParseException e) {
      // Can't use `fail` because then Java expects a `return` after.
      throw new AssertionError(
          "Failed to parse FIŘ file: " + e.getMessage() + "\nContent:\n" + firText, e.getCause());
    }
  }

  public static SEXP parseSexp(String sexpText) {
    try {
      return Parser.fromString(sexpText, SEXP.class);
    } catch (ParseException e) {
      // Can't use `fail` because then Java expects a `return` after.
      throw new AssertionError(
          "Failed to parse SEXP in FIŘ file: " + e.getMessage() + "\nContent:\n" + sexpText,
          e.getCause());
    }
  }

  private ParseUtil() {}
}
