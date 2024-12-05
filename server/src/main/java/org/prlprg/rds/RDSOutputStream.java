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

  public void writeByte(byte v) throws IOException {
    out.writeByte(v);
  }

  public void writeInt(int v) throws IOException {
    out.writeInt(v);
  }

  public void writeDouble(double v) throws IOException {
    out.writeDouble(v);
  }

  /**
   * Writes a series of bytes to the output stream.
   *
   * <p>Note: This replaces the writeString method. This is done since the representation of
   * "length" when reading a String is <b>not</b> the actual length of the string in characters, but
   * the length of the String in bytes.
   */
  public void writeBytes(byte[] v) throws IOException {
    out.write(v);
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
