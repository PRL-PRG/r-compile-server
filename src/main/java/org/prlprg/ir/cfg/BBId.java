package org.prlprg.ir.cfg;

import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.SkipWhitespace;

/**
 * Identifies a {@linkplain BB basic block} within a {@linkplain CFG control-flow graph}, as well as
 * within {@linkplain CFGEdit edits} that can be replayed across different graphs.
 *
 * <p>Every basic block has an ID unique within its CFG, but not other CFGs.
 */
public interface BBId {
  /**
   * Descriptive name to make the logic in the CFG clearer, or empty string if there is none.
   *
   * <p>e.g. "entry", "deopt", "for_loop_start".
   *
   * <p>This is not guaranteed to be unique within a CFG.
   */
  String name();

  @ParseMethod(SkipWhitespace.NONE)
  private static BBId parseBBId(Parser p) {
    return p.parse(BBIdImpl.class);
  }
}

final class BBIdImpl implements BBId {
  private final int disambiguator;
  private final String name;
  private final String toString;

  public BBIdImpl(CFG cfg, String name) {
    this(cfg.nextBBDisambiguator(), name);
  }

  private BBIdImpl(int disambiguator, String name) {
    this.disambiguator = disambiguator;
    this.name = NodeAndBBIds.quoteNameIfNecessary(name);
    this.toString = "^" + disambiguator + name;
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof BBIdImpl bbId)) return false;
    return disambiguator == bbId.disambiguator;
  }

  @Override
  public int hashCode() {
    return Objects.hash(disambiguator);
  }

  @Override
  public String toString() {
    return toString;
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static BBId parse(Parser p) {
    var s = p.scanner();

    var disambiguator = s.readUInt();
    var name = NodeAndBBIds.readName(s);
    return new BBIdImpl(disambiguator, name);
  }
}
