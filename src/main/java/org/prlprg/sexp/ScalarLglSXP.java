package org.prlprg.sexp;

import org.prlprg.primitive.Logical; /** Simple scalar logical = {@code TRUE}, {@code FALSE}, or {@code NA}.
 * 
 * <p>Logical vector of size 1 with no ALTREP, ATTRIB, or OBJECT. */
public sealed class ScalarLglSXP extends ScalarSXPImpl<Logical> implements LglSXP permits BoolSXP {
  static final ScalarLglSXP NA = new ScalarLglSXP(Logical.NA);

  protected ScalarLglSXP(Logical data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public Logical value() {
    return data;
  }

  @Override
  public LglSXP withAttributes(Attributes attributes) {
    return SEXPs.logical(data, attributes);
  }
}
