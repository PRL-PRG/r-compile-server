package org.prlprg.sexp;

import java.util.Optional;

/** Simple scalar string = vector of size 1 with no ALTERP, ATTRIB, or OBJECT. */
public final class SimpleStrSXP extends SimpleScalarSXPImpl<String> implements StrSXP {
  SimpleStrSXP(String data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
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

  @Override
  public Optional<String> reifyString() {
    return Optional.of(data);
  }
}
