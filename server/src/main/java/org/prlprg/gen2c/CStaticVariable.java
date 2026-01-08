package org.prlprg.gen2c;

import java.io.*;

/// Embeds a static array of bytes into a C translation unit.
record CStaticVariable(String type, String name) {
  public void writeTo(PrintWriter pw) {
    pw.format("%s %s;\n", type, name);
  }
}
