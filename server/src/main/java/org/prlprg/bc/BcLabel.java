package org.prlprg.bc;

import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;

/** A branch instruction destination. */
public final class BcLabel {
  /** Index of the instruction the branch instruction jumps to. */
  private int target;

  public BcLabel(int target) {
    this.target = target;
  }

  public int target() {
    return target;
  }

  void setTarget(int target) {
    this.target = target;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof BcLabel bcLabel)) return false;
    return target == bcLabel.target;
  }

  @Override
  public int hashCode() {
    return Objects.hash(target);
  }

  // region serialization and deserialization
  @ParseMethod(SkipWhitespace.NONE)
  private static BcLabel parseBcLabel(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('@');
    return new BcLabel(s.readUInt());
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write('@');
    p.print(target);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
