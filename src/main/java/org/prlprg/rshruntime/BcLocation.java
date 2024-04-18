package org.prlprg.rshruntime;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record BcLocation(BcAddress address, int offset) {
  @ParseMethod
  private static BcLocation parse(Parser p) {
    var s = p.scanner();
    var address = p.parse(BcAddress.class);
    s.assertAndSkip('+');
    var offset = s.readUInt();
    return new BcLocation(address, offset);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    p.print(address);
    w.write("+");
    w.write(Integer.toString(offset));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
