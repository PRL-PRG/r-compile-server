package org.prlprg.sexp;

import javax.annotation.Nullable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.HasSEXPParseContext;
import org.prlprg.sexp.parseprint.HasSEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;

/** An R "list" element which consists of an optional string tag (name) and SEXP value. */
// TODO: Replace `String` with `RegSymSXP`, or replace all `@Nullable RegSymSXP` with `String` and
//  permit the empty string.
public record TaggedElem(@Nullable String tag, SEXP value) {
  /** Create a {@link TaggedElem} with an optional (if non-null) tag and value. */
  public TaggedElem {
    if (tag != null && tag.isEmpty()) {
      throw new IllegalArgumentException("Tag cannot be empty, should be null instead");
    }
  }

  /** Create a {@link TaggedElem} with no tag and a value. */
  public TaggedElem(SEXP value) {
    this(null, value);
  }

  /** Whether the tag is non-null. */
  public boolean hasTag() {
    return tag != null;
  }

  public SEXP namedValue() {
    if (tag == null) {
      return value;
    } else {
      return value.withNames(tag);
    }
  }

  /**
   * Returns the tag or an empty string if the tag is null. This is to follow what GNU-R does when
   * printing names.
   *
   * @return the tag or an empty string if the tag is null
   */
  public String tagOrEmpty() {
    return tag == null ? "" : tag;
  }

  /**
   * Returns the tag as a {@link RegSymSXP}.
   *
   * <p>TODO: Refactor so that all tags are {@code @Nullable RegSymSXP} or {@code String} and allow
   * blank.
   */
  public @Nullable RegSymSXP tagAsSymbol() {
    return tag == null ? null : SEXPs.symbol(tag);
  }

  // region serialization and deserialization
  @ParseMethod
  private static TaggedElem parse(Parser p, HasSEXPParseContext h) {
    return p.withContext(h.sexpParseContext()).parse(TaggedElem.class);
  }

  @ParseMethod
  private static TaggedElem parse(Parser p) {
    return p.withContext(new SEXPParseContext()).parse(TaggedElem.class);
  }

  @PrintMethod
  private void print(Printer p, HasSEXPPrintContext h) {
    p.withContext(h.sexpPrintContext()).print(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new SEXPPrintContext()).print(this);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
