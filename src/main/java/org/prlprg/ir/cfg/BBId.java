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
public final class BBId {
  private final int disambiguator;
  private final String name;
  private final String toString;

  BBId(int disambiguator, String name) {
    this.disambiguator = disambiguator;
    this.name = name;
    this.toString =
        "^" + (disambiguator == 0 ? "" : disambiguator) + NodeAndBBIds.quoteNameIfNecessary(name);
  }

  int disambiguator() {
    return disambiguator;
  }

  String name() {
    return name;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof BBId that)) return false;
    return disambiguator == that.disambiguator && name.equals(that.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(disambiguator == 0 ? name : disambiguator);
  }

  // region serialization and deserialization
  @ParseMethod(SkipWhitespace.NONE)
  private static BBId parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('^');
    var disambiguator = s.nextCharSatisfies(Character::isDigit) ? s.readUInt() : 0;
    var name = NodeAndBBIds.readName(s);
    return new BBId(disambiguator, name);
  }

  @Override
  public String toString() {
    return toString;
  }
  // endregion serialization and deserialization
}
