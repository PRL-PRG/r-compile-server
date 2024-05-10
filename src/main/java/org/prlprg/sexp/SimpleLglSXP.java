package org.prlprg.sexp;

import org.prlprg.primitive.Logical;

// TODO: move to LglSXP.java?
/** Simple scalar logical = logical vector of size 1 with no ALTREP, ATTRIB, or OBJECT. */
public final class SimpleLglSXP extends SimpleScalarSXPImpl<Logical> implements LglSXP {
  static final SimpleLglSXP TRUE = new SimpleLglSXP(Logical.TRUE);
  static final SimpleLglSXP FALSE = new SimpleLglSXP(Logical.FALSE);
  static final SimpleLglSXP NA = new SimpleLglSXP(Logical.NA);

  private SimpleLglSXP(Logical data) {
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
