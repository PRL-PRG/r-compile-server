package org.prlprg.ir.cfg;

import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.SkipWhitespace;

/** {@link NodeId} of a {@link LocalNode}. */
public sealed class LocalNodeId<T> implements NodeId<T> permits PhiId {
  private @Nullable RType type;
  private final int disambiguator;
  private final String name;
  private final String toString;

  LocalNodeId(int disambiguator, String name) {
    this.disambiguator = disambiguator;
    this.name = name;
    toString =
        "%" + (disambiguator == 0 ? "" : disambiguator) + NodeAndBBIds.quoteNameIfNecessary(name);
  }

  int disambiguator() {
    return disambiguator;
  }

  String name() {
    return name;
  }

  @Override
  public @Nullable RType type() {
    return type;
  }

  /**
   * Assign a class to an ID which may have been parsed, or if not, just check that the class is the
   * same as the one that would've been assigned.
   */
  void lateAssignType(RType type) {
    // `assert` because this is only used within the package.
    assert this.type == null || this.type == type
        : "node ID is for a different type: expected " + this.type + ", got " + type;
    this.type = type;
  }

  /**
   * Change this ID's {@link #type()}.
   *
   * <p>It's "unsafe" because you need to maintain that the ID's runtime values are guaranteed to be
   * subtypes of its type.
   */
  void unsafeReassignType(RType type) {
    this.type = type;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof LocalNodeId<?> that)) return false;
    return disambiguator == that.disambiguator && name.equals(that.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(disambiguator == 0 ? name : disambiguator);
  }

  @Override
  public String toString() {
    return toString;
  }

  @ParseMethod(SkipWhitespace.NONE)
  private static LocalNodeId<?> parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('%');
    var disambiguator = s.nextCharSatisfies(Character::isDigit) ? s.readUInt() : 0;
    var name = NodeAndBBIds.readName(s);
    return new LocalNodeId<>(disambiguator, name);
  }
}
