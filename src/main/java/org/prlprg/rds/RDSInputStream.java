package org.prlprg.rds;

import java.io.Closeable;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;

class RDSInputStream implements Closeable {
  private final DataInputStream in;
  private final RDSLogger logger;

  RDSInputStream(InputStream in, RDSLogger logger) {
    this.in = new DataInputStream(in);
    this.logger = logger;
  }

  @Override
  public void close() throws IOException {
    in.close();
  }

  /**
   * Reads the next byte of data from the input stream.
   *
   * @return the next byte of data, or -1 if the end of the stream is reached.
   * @throws IOException if an I/O error occurs.
   */
  public int readRaw(String desc) throws IOException {
    var input = in.read();
    logger.log(input, desc);
    return input;
  }

  public byte readByte(String desc) throws IOException {
    var input = in.readByte();
    logger.log(input, desc);
    return input;
  }

  public int readInt(String desc) throws IOException {
    var input = in.readInt();
    logger.log(input, desc);
    return input;
  }

  public double readDouble(String desc) throws IOException {
    var input = in.readDouble();
    logger.log(input, desc);
    return input;
  }

  public String readString(int natEncSize, Charset charset, String desc) throws IOException {
    var buf = new byte[natEncSize];
    in.readFully(buf, 0, natEncSize);
    var input = new String(buf, charset);
    logger.log(input, desc);
    return input;
  }

  public int[] readInts(int length, String desc) throws IOException {
    int[] ints = new int[length];
    for (int i = 0; i < length; i++) {
      var n = in.readInt();
      ints[i] = n;
    }
    logger.logAll(ints, desc);
    return ints;
  }

  public double[] readDoubles(int length, String desc) throws IOException {
    double[] doubles = new double[length];
    for (int i = 0; i < length; i++) {
      var n = in.readDouble();
      doubles[i] = n;
    }
    logger.logAll(doubles, desc);
    return doubles;
  }
}
