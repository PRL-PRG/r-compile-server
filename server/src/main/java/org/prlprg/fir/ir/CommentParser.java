package org.prlprg.fir.ir;

import org.prlprg.parseprint.Scanner;

public final class CommentParser {
  private CommentParser() {}

  public static void skipComments(Scanner s) {
    while (s.trySkip('#')) {
      s.readUntilEndOfLine();
    }
  }
}
