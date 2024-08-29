package org.prlprg.sexp;

/** Simple scalar byte = raw (byte) vector of size 1 with no ALTREP, ATTRIB, or OBJECT. */
public final class ScalarRawSXP extends ScalarSXPImpl<Byte> implements RawSXP {
  ScalarRawSXP(byte data) {
    super(data);
  }

  @SuppressWarnings("MissingJavadoc")
  public Byte value() {
    return data;
  }

  @Override
  public RawSXP withAttributes(Attributes attributes) {
    return SEXPs.raw(data, attributes);
  }
}
