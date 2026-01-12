package org.prlprg.gen2c;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import org.intellij.lang.annotations.PrintFormat;

public final class CCode {
  private final List<String> body = new ArrayList<>();

  public void label(@PrintFormat String format, Object... args) {
    body.add(format.formatted(args));
  }

  public void stmt(int indent, @PrintFormat String format, Object... args) {
    var lineStart = "  ".repeat(indent);
    body.add((lineStart + format).formatted(args).replace("\n", "\n" + lineStart));
  }

  public void stmt(@PrintFormat String format, Object... args) {
    stmt(1, format, args);
  }

  public void comment(int indent, @PrintFormat String format, Object... args) {
    var lineStart = "  ".repeat(indent) + "// ";
    body.add((lineStart + format).formatted(args).replace("\n", "\n" + lineStart));
  }

  public void comment(@PrintFormat String format, Object... args) {
    comment(1, format, args);
  }

  public void writeTo(Writer w) {
    var pw = new PrintWriter(w);
    body.forEach(pw::println);
  }

  @Override
  public String toString() {
    var w = new StringWriter();
    writeTo(new PrintWriter(w));
    return w.toString();
  }
}
