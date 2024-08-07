package org.prlprg.bc2c;

import java.io.PrintWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.List;

public class CCode {
  private final List<String> body = new ArrayList<>();

  public void line(String line) {
    // note, the reason why it is not String fmt, String ... args is that
    // with requiring explicit .formatted call, it is easier to spot problems (the IDE assists)
    body.add(line);
  }

  public void writeTo(Writer w) {
    var pw = new PrintWriter(w);
    body.forEach(pw::println);
  }

  public void comment(String comment) {
    body.add("// " + comment);
  }

  public void nl() {
    body.add("");
  }
}
