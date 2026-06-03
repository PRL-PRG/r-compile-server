package org.prlprg.gen2c;

import java.io.PrintWriter;

/// Embeds a static array of bytes into a C translation unit.
record CExternGlobalVariable(String type, String name) {
  public void writeTo(PrintWriter pw) {
    pw.format("extern %s %s;\n", type, name);
  }
}
