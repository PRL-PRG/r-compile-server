package org.prlprg.rds;

import java.io.ByteArrayOutputStream;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.nio.charset.Charset;
import java.nio.charset.CodingErrorAction;

/// Converts between a `CHARSXP`'s bytes and encoding flags and a Java [String], losslessly.
///
/// R compares strings by their bytes (after translation to UTF-8), and never compares a "bytes"
/// string equal to a string that isn't, so bytes that don't decode must stay distinct. They become
/// lone low surrogates, which no decoded string contains (like Python's `surrogateescape`):
/// - a native or UTF-8 string's undecodable byte `b` becomes `U+DC00 + b` (`U+DC80..U+DCFF`);
/// - a "bytes" string's non-ASCII byte `b` becomes `U+DC00 + b - 0x80` (`U+DC00..U+DC7F`).
final class CharsxpCodec {
  private static final char ESCAPE_BASE = '\uDC00';
  private static final char NATIVE_ESCAPE_START = '\uDC80';
  private static final char ESCAPE_END = '\uDCFF';

  record Encoded(byte[] bytes, GPFlags levels) {}

  static String decode(byte[] bytes, GPFlags levels, Charset nativeEncoding) {
    if (levels.isBytes()) {
      var out = new StringBuilder(bytes.length);
      for (var b : bytes) {
        out.append(b >= 0 ? (char) b : (char) (ESCAPE_BASE + (b & 0xFF) - 0x80));
      }
      return out.toString();
    }

    var charset = levels.encoding();
    var decoder =
        (charset == null ? nativeEncoding : charset)
            .newDecoder()
            .onMalformedInput(CodingErrorAction.REPORT)
            .onUnmappableCharacter(CodingErrorAction.REPORT);
    var in = ByteBuffer.wrap(bytes);
    var out = CharBuffer.allocate((int) Math.ceil(bytes.length * decoder.maxCharsPerByte()));
    while (true) {
      var result = decoder.decode(in, out, true);
      if (result.isUnderflow()) {
        decoder.flush(out);
        return out.flip().toString();
      } else if (result.isError()) {
        for (var i = 0; i < result.length(); i++) {
          var b = in.get() & 0xFF;
          if (b < 0x80) {
            throw new RDSException("Undecodable ASCII byte in string: " + b);
          }
          out.put((char) (ESCAPE_BASE + b));
        }
      } else {
        throw new RDSException("Unexpected string decoding result: " + result);
      }
    }
  }

  static Encoded encode(String s) {
    if (s.chars().anyMatch(c -> ESCAPE_BASE <= c && c < NATIVE_ESCAPE_START)) {
      var out = new byte[s.length()];
      for (var i = 0; i < s.length(); i++) {
        var c = s.charAt(i);
        if (ESCAPE_BASE <= c && c < NATIVE_ESCAPE_START) {
          out[i] = (byte) (c - ESCAPE_BASE + 0x80);
        } else if (c < 0x80) {
          out[i] = (byte) c;
        } else {
          throw new IllegalArgumentException("\"bytes\" string has a non-ASCII character: " + s);
        }
      }
      return new Encoded(out, GPFlags.bytes());
    }

    var charset = Charset.defaultCharset();
    if (s.chars().noneMatch(CharsxpCodec::isNativeEscape)) {
      return new Encoded(s.getBytes(charset), new GPFlags(charset, false));
    }

    // Escapes are only valid in a native string.
    var out = new ByteArrayOutputStream(s.length());
    var start = 0;
    for (var i = 0; i <= s.length(); i++) {
      if (i == s.length() || isNativeEscape(s.charAt(i))) {
        out.writeBytes(s.substring(start, i).getBytes(charset));
        if (i < s.length()) {
          out.write(s.charAt(i) - ESCAPE_BASE);
        }
        start = i + 1;
      }
    }
    return new Encoded(out.toByteArray(), new GPFlags());
  }

  private static boolean isNativeEscape(int c) {
    return NATIVE_ESCAPE_START <= c && c <= ESCAPE_END;
  }

  private CharsxpCodec() {}
}
