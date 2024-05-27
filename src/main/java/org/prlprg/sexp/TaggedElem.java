package org.prlprg.sexp;

import javax.annotation.Nullable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;

/** An R "list" element which consists of an optional string tag (name) and SEXP value. */
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

  @Override
  public String toString() {
    return tag == null
        ? value.toString()
        : Names.quoteIfNecessary(tag) + "=" + (value == SEXPs.MISSING_ARG ? "" : value);
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

  @ParseMethod
  private static TaggedElem parse(Parser p) {
    var s = p.scanner();

    var tag = s.nextCharIs('=') ? null : Names.read(s, true);
    var value = s.trySkip('=') ? p.parse(SEXP.class) : SEXPs.MISSING_ARG;
    return new TaggedElem(tag, value);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (tag != null) {
      w.write(Names.quoteIfNecessary(tag));
    }
    if (value != SEXPs.MISSING_ARG) {
      w.write('=');
      p.print(value);
    }
  }
}
