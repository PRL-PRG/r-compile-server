package org.prlprg.ir.closure;

import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Node;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;

/**
 * Prefix for ids of {@linkplain CFG} {@linkplain Node nodes} referenced by external {@linkplain CFG
 * CFGs}.
 *
 * <p>Specifically, each case is an IR object that directly contains a CFG (not {@link CodeObject}
 * because {@linkplain Closure closures} contain {@linkplain ClosureVersion versions}, and the
 * versions contain CFGs).
 */
record NodeIdQualifier(String name, int idIndex) {
  @ParseMethod
  private static NodeIdQualifier parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('@');
    var idIndex = s.nextCharSatisfies(Character::isDigit) ? s.readUInt() : 0;
    var name = s.nextCharSatisfies(Names::isValidStartChar) ? Names.read(s, true) : "";
    return new NodeIdQualifier(name, idIndex);
  }

  @PrintMethod
  private static void print(NodeIdQualifier q, Printer p) {
    var w = p.writer();

    w.write('@');
    if (q.idIndex != 0) {
      p.print(q.idIndex);
    }
    if (!q.name.isEmpty()) {
      Names.write(w, q.name);
    }
  }
}
