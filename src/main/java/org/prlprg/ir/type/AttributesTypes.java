package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.Attributes;
import org.prlprg.util.NotImplementedError;

/**
 * All global {@link AttributesType}s and methods to create {@link AttributesType}s are here so
 * they're easy to find.
 */
public class AttributesTypes {
  /** Known to have no attributes. */
  public static final AttributesType NONE = null;

  /** Completely unknown attributes. */
  public static final AttributesType UNKNOWN = null;

  /** The type of exactly these attributes ({@code NONE} if they are {@code null}). */
  static AttributesType exact(@Nullable Attributes attributes) {
    if (attributes == null) {
      return NONE;
    }
    throw new NotImplementedError();
  }

  private AttributesTypes() {}
}
