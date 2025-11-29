package org.prlprg.gen2c;

import java.io.PrintWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.List;
import org.intellij.lang.annotations.PrintFormat;

public class CCode {
  private final List<String> body = new ArrayList<>();

  public void label(@PrintFormat String format, Object... args) {
    body.add(format.formatted(args));
  }

  public void stmt(int indent, @PrintFormat String format, Object... args) {
    body.add(("  ".repeat(indent) + format).formatted(args));
  }

  public void stmt(@PrintFormat String format, Object... args) {
    stmt(1, format, args);
  }

  public void comment(@PrintFormat String format, Object... args) {
    body.add(("  // " + format).formatted(args));
  }

  public void writeTo(Writer w) {
    var pw = new PrintWriter(w);
    body.forEach(pw::println);
  }
}
