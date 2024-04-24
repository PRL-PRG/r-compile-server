package org.prlprg.sexp;

import javax.annotation.Nullable;

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

  @Override
  public String toString() {
    return tag == null
        ? value.toString()
        : value == SEXPs.MISSING_ARG ? tag + "=" : tag + "=" + value;
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
}
