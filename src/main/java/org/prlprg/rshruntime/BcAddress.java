package org.prlprg.rshruntime;

import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * TODO: Change address to point to actual bytecode, not some address in the PIR client that
 * certainly doesn't exist here.
 */
public class BcAddress {
  private final long address;

  public BcAddress(long address) {
    this.address = address;
  }

  @ParseMethod
  private static BcAddress parse(Parser p) {
    var s = p.scanner();
    s.assertAndSkip("0x");
    var hex = s.readWhile(Character::isLetterOrDigit);
    try {
      return new BcAddress(Long.parseLong(hex, 16));
    } catch (NumberFormatException e) {
      throw s.fail("Invalid hex address: 0x" + hex);
    }
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    w.write("0x");
    w.write(Long.toHexString(address));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
