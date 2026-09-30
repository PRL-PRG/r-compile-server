package org.prlprg.gen2c;

import java.io.*;
import org.jspecify.annotations.Nullable;

/// Embeds a static array of bytes into a C translation unit.
record CGlobalVariable(String type, String name, @Nullable String initializer) {
  public void writeTo(PrintWriter pw) {
    if (initializer == null) {
      pw.format("%s %s;\n", type, name);
    } else {
      pw.format("%s %s = %s;\n", type, name, initializer);
    }
  }
}
