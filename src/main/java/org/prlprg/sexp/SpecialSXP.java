package org.prlprg.sexp;

import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.BuiltinId;

public record SpecialSXP(@Override BuiltinId id) implements BuiltinOrSpecialSXP {
  public SpecialSXP {
    if (!id.isSpecial()) {
      throw new IllegalArgumentException("Not a special builtin: " + id);
    }
  }

  @Override
  public SEXPType type() {
    return SEXPType.SPECIAL;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return SpecialSXP.class;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
