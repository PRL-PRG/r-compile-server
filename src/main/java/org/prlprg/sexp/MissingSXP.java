package org.prlprg.sexp;

/** The missing value. */
public final class MissingSXP implements ValueSXP, SymSXP, DotsListOrMissingSXP {
  static final MissingSXP INSTANCE = new MissingSXP();

  private MissingSXP() {
    // This is a singleton.
  }

  // This can't call `Printer.toString`, because it calls this.
  @Override
  public String toString() {
    return "<missing>";
  }
}
