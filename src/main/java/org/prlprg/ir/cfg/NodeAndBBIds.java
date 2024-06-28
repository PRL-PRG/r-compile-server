package org.prlprg.ir.cfg;

import org.prlprg.parseprint.Scanner;
import org.prlprg.primitive.Names;

/** Utility functions for node and basic block IDs. */
class NodeAndBBIds {
  /**
   * Read a valid node or BB identifier name, unquoting.
   *
   * <p>Specifically, if the next character begins a valid R symbol string, it will try to read one.
   * Otherwise, it will read nothing and return the empty string (no name).
   */
  static String readName(Scanner scanner) {
    if (Names.isValidStartChar(scanner.peekChar())) {
      return Names.read(scanner, false);
    }
    return "";
  }

  /**
   * Quote a node or BB identifier name if it needs to be quoted.
   *
   * <p>Specifically, quoted if it's not empty, and not a valid R symbol.
   */
  static String quoteNameIfNecessary(String name) {
    return name.isEmpty() ? name : Names.quoteIfNecessary(name);
  }

  private NodeAndBBIds() {}
}
