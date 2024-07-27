package org.prlprg.sexp;

import java.util.Optional;

public final class ScalarStrSXP extends ScalarSXPImpl<String> implements StrSXP {
  ScalarStrSXP(String data) {
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
