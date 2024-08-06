package org.prlprg.rds;

import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.Objects;
import javax.annotation.Nullable;

/**
 * The bitflags describing a {@code SEXP} in RDS. They are described as follows:
 *
 * <ul>
 *   <li><b>0-7:</b> describe the SEXP's RDSItemType
 *   <li><b>8:</b> enabled if the SEXP is an object
 *   <li><b>9:</b> enabled if the SEXP has attributes
 *   <li><b>10:</b> enabled if the SEXP has a tag (for the pairlist types)
 *   <li><b>11:</b> unused bit
 *   <li><b>12-27:</b> general purpose (gp) bits, as defined in the {@code SXPINFO} struct
 * </ul>
 *
 * There are 16 GP bits, which are traditionally present on each SEXP.
 */
final class Flags {
  private static final int OBJECT_MASK = 1 << 8;
  private static final int ATTR_MASK = 1 << 9;
  private static final int TAG_MASK = 1 << 10;

  private final int flags;

  public Flags(int flags) {
    this.flags = flags;
    try {
      this.getType();
    } catch (IllegalArgumentException e) {
      throw new IllegalArgumentException("Invalid flags", e);
    }
  }

  // Pack the flags of a regular item
  public Flags(
      RDSItemType type, GPFlags levels, boolean isObject, boolean hasAttributes, boolean hasTag) {
    if (type.i() == RDSItemType.Special.REFSXP.i())
      throw new IllegalArgumentException(
          "Cannot write REFSXP with this constructor: ref index " + "needed");
    this.flags =
        type.i()
            | (levels.encode() << 12)
            | (isObject ? OBJECT_MASK : 0)
            | (hasAttributes ? ATTR_MASK : 0)
            | (hasTag ? TAG_MASK : 0);
  }

  // Pack the flags of a reference
  public Flags(RDSItemType type, int refIndex) {
    if (type.i() != RDSItemType.Special.REFSXP.i())
      throw new IllegalArgumentException(
          "Cannot write REFSXP with this constructor: ref index " + "needed");
    this.flags = type.i() | (refIndex << 8);
  }

  public RDSItemType getType() {
    return RDSItemType.valueOf(flags & 255);
  }

  // The levels contained in Flags are general-purpose bits.
  public GPFlags getLevels() {
    return new GPFlags(flags >> 12);
  }

  public boolean isObject() {
    return (flags & OBJECT_MASK) != 0;
  }

  public boolean hasAttributes() {
    return (flags & ATTR_MASK) != 0;
  }

  public boolean hasTag() {
    return (flags & TAG_MASK) != 0;
  }

  public int unpackRefIndex() {
    return flags >> 8;
  }

  /**
   * Returns a new Flags identical to this one, but with the hasAttr bit set according to
   * hasAttributes.
   */
  public Flags withAttributes(boolean hasAttributes) {
    return new Flags(this.flags & ~ATTR_MASK | (hasAttributes ? ATTR_MASK : 0));
  }

  /** Returns a new Flags identical to this one, but with the hasTag bit set according to hasTag. */
  public Flags withTag(boolean hasTag) {
    return new Flags(this.flags & ~TAG_MASK | (hasTag ? TAG_MASK : 0));
  }

  @Override
  public String toString() {
    return "Flags{"
        + "type="
        + getType()
        + ", levels="
        + getLevels().encode()
        + ", isObject="
        + isObject()
        + ", hasAttributes="
        + hasAttributes()
        + ", hasTag="
        + hasTag()
        + ", refIndex="
        + unpackRefIndex()
        + '}';
  }

  public int encode() {
    return flags;
  }
}

/**
 * Flags corresponding with the general-purpose (gp) bits found on a SEXP. See <a
 * href="https://cran.r-project.org/doc/manuals/r-release/R-ints.html">R internals</a>
 *
 * <ul>
 *   <li><b>Bits 14 and 15</b> are used for 'fancy bindings'. Bit 14 is used to lock a binding or
 *       environment, and bit 15 is used to indicate an active binding. Bit 15 is used for an
 *       environment to indicate if it participates in the global cache.
 *   <li><b>Bits 1, 2, 3, 5, and 6</b> are used for a {@code CHARSXP} (we use strings) to indicate
 *       its encoding. Relevant to us are bits 2, 3, and 6, which indicate Latin-1, UTF-8, and ASCII
 *       respectively.
 *   <li><b>Bit 4</b> is turned on to mark S4 objects
 * </ul>
 *
 * Currently, only the character encoding flag is used.
 */
final class GPFlags {
  // HASHASH_MASK: 1;
  // private static final int BYTES_MASK = 1 << 1;
  private static final int LATIN1_MASK = 1 << 2;
  private static final int UTF8_MASK = 1 << 3;
  // S4_OBJECT_MASK: 1 << 4
  // CACHED_MASK = 1 << 5;
  private static final int ASCII_MASK = 1 << 6;
  private static final int LOCKED_MASK = 1 << 14;

  private final int flags;

  GPFlags(@Nullable Charset charset, boolean locked) {
    // NOTE: CACHED_MASK and HASHASH_MASK should be off when packing RDS flags for SEXPType.CHAR,
    //  but since we don't have external input for levels I think they should be off anyways
    this.flags =
        (locked ? LOCKED_MASK : 0)
            | (charset == StandardCharsets.UTF_8 ? UTF8_MASK : 0)
            | (charset == StandardCharsets.US_ASCII ? ASCII_MASK : 0)
            | (charset == StandardCharsets.ISO_8859_1 ? LATIN1_MASK : 0);
  }

  GPFlags(int levels) {
    this.flags = levels;
  }

  GPFlags() {
    this.flags = 0;
  }

  public int encode() {
    return flags;
  }

  public @Nullable Charset encoding() {
    if ((flags & LATIN1_MASK) != 0) {
      return StandardCharsets.ISO_8859_1; // ISO_8859_1 is LATIN1
    } else if ((flags & UTF8_MASK) != 0) {
      return StandardCharsets.UTF_8;
    } else if ((flags & ASCII_MASK) != 0) {
      return StandardCharsets.US_ASCII;
    } else {
      return null;
    }
  }

  public boolean isLocked() {
    return (this.flags & LOCKED_MASK) != 0;
  }

  public String toString() {
    return "GPFlags{"
        + "encoding="
        + (this.encoding() == null ? "null" : Objects.requireNonNull(this.encoding()).name())
        + ", locked="
        + this.isLocked()
        + '}';
  }
}
