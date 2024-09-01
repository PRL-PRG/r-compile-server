package org.prlprg.sexp;

import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.BuiltinId;

public record BuiltinSXP(@Override BuiltinId id) implements BuiltinOrSpecialSXP {
  // FIXME: don't understand this one
  //  public BuiltinSXP {
  //    if (id.isSpecial()) {
  //      throw new IllegalArgumentException("Not a non-special builtin: " + id);
  //    }
  //  }

  @Override
  public SEXPType type() {
    return SEXPType.BUILTIN;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return BuiltinSXP.class;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
