package org.prlprg.sexp;

/** Simple scalar string = vector of size 1 with no ALTERP, ATTRIB, or OBJECT. */
public final class SimpleStrSXP extends SimpleScalarSXPImpl<String> implements StrSXP {
  SimpleStrSXP(String data) {
    super(data);
  }

  public String value() {
    return data;
  }

  @Override
  public String toString() {
    return StrSXPs.quoteString(data);
  }

  @Override
  public StrSXP withAttributes(Attributes attributes) {
    return SEXPs.string(data, attributes);
  }
}
