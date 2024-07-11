package org.prlprg.rds;

import java.io.Closeable;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.OutputStream;

public class RDSOutputStream implements Closeable {
  private final DataOutputStream out;
  private final RDSLogger logger;

  RDSOutputStream(OutputStream out, RDSLogger logger) {
    this.out = new DataOutputStream(out);
    this.logger = logger;
  }

  @Override
  public void close() throws IOException {
    out.close();
  }

  public void writeByte(byte v, String desc) throws IOException {
    out.writeByte(v);
    logger.log(v, desc);
  }

  public void writeInt(int v, String desc) throws IOException {
    out.writeInt(v);
    logger.log(v, desc);
  }

  public void writeDouble(double v, String desc) throws IOException {
    out.writeDouble(v);
    logger.log(v, desc);
  }

  public void writeString(String s, String desc) throws IOException {
    // one byte per character.
    // Fixme: supports the charset (when a character is more than 1 byte!)
    out.writeBytes(s);
    logger.log(s, desc);
  }

  public void writeInts(int[] v, String desc) throws IOException {
    for (int e : v) {
      out.writeInt(e);
    }
    logger.logAll(v, desc);
  }

  public void writeDoubles(double[] v, String desc) throws IOException {
    for (double e : v) {
      out.writeDouble(e);
    }
    logger.logAll(v, desc);
  }
}
