package org.prlprg.rds;

import java.io.Closeable;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.OutputStream;

public class RDSOutputStream implements Closeable {
  private final DataOutputStream out;

  RDSOutputStream(OutputStream out) {
    this.out = new DataOutputStream(out);
  }

  @Override
  public void close() throws IOException {
    out.close();
  }

  public void writeByte(int v) throws IOException {
    out.writeByte(v);
  }

  public void writeInt(int v) throws IOException {
    out.writeInt(v);
  }

  public void writeDouble(double v) throws IOException {
    out.writeDouble(v);
  }

  public void writeString(String s) throws IOException {
    // one byte per character.
    // Fixme: supports the charset (when a character is more than 1 byte!)
    out.writeBytes(s);
  }

  public void writeInts(int[] v) throws IOException {
    for (int e : v) {
      out.writeInt(e);
    }
  }

  public void writeDoubles(double[] v) throws IOException {
    for (double e : v) {
      out.writeDouble(e);
    }
  }
}
