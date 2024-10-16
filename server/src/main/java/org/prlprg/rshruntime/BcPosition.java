package org.prlprg.rshruntime;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * Bytecode and offset for {@linkplain org.prlprg.ir.cfg.CFG IR code} to remember feedback and
 * deoptimize.
 *
 * <p>TODO: Currently can't think of deopts outside the enclosing function or promise, so why we'd
 * need that info, so currently it's only the offset.
 */
public record BcPosition(int offset) {
  @ParseMethod
  private static BcPosition parse(Parser p) {
    var s = p.scanner();
    s.assertAndSkip('+');
    var offset = s.readUInt();
    return new BcPosition(offset);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    w.write("+");
    w.write(Integer.toString(offset));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
