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

class RDSOutputStreamVerbose extends RDSOutputStream {
  RDSOutputStreamVerbose(OutputStream out) {
    super(out);
    System.out.println("\n=====================  WRITING STREAM  ====================\n");
    StackTraceElement caller = Thread.currentThread().getStackTrace()[4];
    System.out.println("Testing: " + caller + "\n");
  }

  @Override
  public void writeByte(byte v) throws IOException {
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf(
        "%-20s |  writing byte: %d (%s)%n", caller.getMethodName(), v, Integer.toBinaryString(v));
    super.writeByte(v);
  }

  @Override
  public void writeInt(int v) throws IOException {
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf(
        "%-20s |  writing int: %d (%s)%n", caller.getMethodName(), v, Integer.toBinaryString(v));
    super.writeInt(v);
  }

  @Override
  public void writeDouble(double v) throws IOException {
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  writing double: %f%n", caller.getMethodName(), v);
    super.writeDouble(v);
  }

  @Override
  public void writeString(String s) throws IOException {
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  writing String: %s%n", caller.getMethodName(), s);
    // one byte per character.
    // Fixme: supports the charset (when a character is more than [2] byte!)
    super.writeString(s);
  }

  @Override
  public void writeInts(int[] v) throws IOException {
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  writing %d ints...%n", caller.getMethodName(), v.length);
    super.writeInts(v);
    System.out.printf("%-20s |  done writing ints%n", caller.getMethodName());
  }

  @Override
  public void writeDoubles(double[] v) throws IOException {
    StackTraceElement caller = Thread.currentThread().getStackTrace()[2];
    System.out.printf("%-20s |  writing %d doubles...%n", caller.getMethodName(), v.length);
    super.writeDoubles(v);
    System.out.printf("%-20s |  done writing doubles%n", caller.getMethodName());
  }
}
