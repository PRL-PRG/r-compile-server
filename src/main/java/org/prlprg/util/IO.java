package org.prlprg.util;

import java.io.IOException;
import java.io.InputStream;
import java.io.PushbackInputStream;
import java.util.zip.GZIPInputStream;

public final class IO {
  private IO() {}

  public static InputStream maybeDecompress(InputStream input) throws IOException {
    final PushbackInputStream pb = new PushbackInputStream(input, 2);
    byte[] buff = pb.readNBytes(2);
    pb.unread(buff);
    if (buff.length != 2) {
      return pb;
    }

    int magick = (buff[0] & 0xFF) | ((buff[1] & 0xFF) << 8);

    if (magick == GZIPInputStream.GZIP_MAGIC) {
      return new GZIPInputStream(pb);
    } else {
      return pb;
    }
  }
}
