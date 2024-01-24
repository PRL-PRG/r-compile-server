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

    public boolean isAtEnd() throws IOException {
        return in.available() == 0;
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
