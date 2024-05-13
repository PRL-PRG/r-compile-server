package org.prlprg.ir.cfg;

import com.google.common.base.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.util.InterfaceHiddenMembers;

/**
 * CFG-unique {@link BB} identifier which can refer to a future basic block in {@link CFGEdit}s.
 * Every basic block has an id unique within its CFG.
 */
@InterfaceHiddenMembers(BBIdImpl.class)
public interface BBId {
  /** {@link Object#toString()} representation of this without the common BB prefix ("^"). */
  String name();
}

sealed class BBIdImpl implements BBId {
  private final String name;

  public BBIdImpl(CFG cfg, String name) {
    this.name = cfg.nextBBId(name);
  }

  private BBIdImpl(String name) {
    this.name = name;
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof BBIdImpl bbId)) return false;
    return Objects.equal(name, bbId.name);
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(name);
  }

  @Override
  public String toString() {
    return "^" + name;
  }

  /**
   * BB ID parsed from a string.
   *
   * <p>This means that, unlike other constructed ids constructed directly from strings, it may be
   * equal to an existing ID in the CFG.
   */
  private static final class Parsed extends BBIdImpl {
    public Parsed(String id) {
      super(id);
    }
  }

  @ParseMethod(SkipWhitespace.NONE)
  private BBId parseBBId(Parser p) {
    var s = p.scanner();
    s.assertAndSkip('^');
    return new Parsed(InstrPhiAndBBIds.readIdNameLiterally(s));
  }

  @PrintMethod
  private void printBBId(BBId id, Printer p) {
    var w = p.writer();
    w.write('^');
    w.write(id.name());
  }
}
