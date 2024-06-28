package org.prlprg.rds;

import java.io.Closeable;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;

class RDSInputStream implements Closeable {
  private final DataInputStream in;

  RDSInputStream(InputStream in) {
    this.in = new DataInputStream(in);
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
  public int readRaw() throws IOException {
    return in.read();
  }

  public byte readByte() throws IOException {
    return in.readByte();
  }

  public int readInt() throws IOException {
    return in.readInt();
  }

  public double readDouble() throws IOException {
    return in.readDouble();
  }

  public String readString(int natEncSize, Charset charset) throws IOException {
    var buf = new byte[natEncSize];
    in.readFully(buf, 0, natEncSize);
    return new String(buf, charset);
  }

  public int[] readInts(int length) throws IOException {
    int[] ints = new int[length];
    for (int i = 0; i < length; i++) {
      var n = readInt();
      ints[i] = n;
    }
    return ints;
  }

  public double[] readDoubles(int length) throws IOException {
    double[] ints = new double[length];
    for (int i = 0; i < length; i++) {
      var n = readDouble();
      ints[i] = n;
    }
    return ints;
  }
}

class RDSInputStreamVerbose extends RDSInputStream {
  RDSInputStreamVerbose(InputStream in) {
    super(in);
    System.out.println("\n=====================  READING STREAM  ====================\n");
    StackTraceElement caller = Thread.currentThread().getStackTrace()[4];
    System.out.println("Testing: " + caller + "\n");
  }

  @Override
  public int readRaw() throws IOException {
    var res = super.readRaw();
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  reading raw: %d%n", caller.getMethodName(), res);
    return res;
  }

  @Override
  public byte readByte() throws IOException {
    var res = super.readByte();
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf(
        "%-20s |  reading byte: %d (%s)%n",
        caller.getMethodName(), res, Integer.toBinaryString(res));
    return res;
  }

  @Override
  public int readInt() throws IOException {
    var res = super.readInt();
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf(
        "%-20s |  reading int: %d (%s)%n",
        caller.getMethodName(), res, Integer.toBinaryString(res));
    return res;
  }

  @Override
  public double readDouble() throws IOException {
    var res = super.readDouble();
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  reading double: %f%n", caller.getMethodName(), res);
    return res;
  }

  @Override
  public String readString(int natEncSize, Charset charset) throws IOException {
    var res = super.readString(natEncSize, charset);
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  reading String: %s%n", caller.getMethodName(), res);
    return res;
  }

  @Override
  public int[] readInts(int length) throws IOException {
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  reading %d ints...%n", caller.getMethodName(), length);
    var res = super.readInts(length);
    System.out.printf("%-20s |  done reading ints%n", caller.getMethodName());
    return res;
  }

  @Override
  public double[] readDoubles(int length) throws IOException {
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  reading %d doubles...%n", caller.getMethodName(), length);
    var res = super.readDoubles(length);
    System.out.printf("%-20s |  done reading doubles%n", caller.getMethodName());
    return res;
  }
}
