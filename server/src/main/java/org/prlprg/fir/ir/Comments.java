package org.prlprg.fir.ir;

import com.google.common.collect.ForwardingList;
import java.util.ArrayList;
import java.util.List;
import javax.annotation.CheckForNull;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

public final class Comments extends ForwardingList<String> {
  private final List<String> lines = new ArrayList<>();

  @Override
  protected List<String> delegate() {
    return lines;
  }

  public Comments copy() {
    var copy = new Comments();
    copy.addAll(this);
    return copy;
  }

  @ParseMethod
  private static Comments parse(Parser p) {
    var s = p.scanner();

    var comments = new Comments();
    while (s.trySkip('#')) {
      s.runWithWhitespacePolicy(SkipWhitespace.NONE, () -> comments.add(s.readPastEndOfLine().stripTrailing()));
    }
    return comments;
  }

  @Override
  public boolean equals(@CheckForNull Object object) {
    return object instanceof Comments;
  }

  @Override
  public int hashCode() {
    return 42;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    for (var comment : lines) {
      p.print('#');
      p.writer().write(comment);
      p.print('\n');
    }
  }
}
