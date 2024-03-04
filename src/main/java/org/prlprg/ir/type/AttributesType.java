package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.Attributes;

/**
 * The information we know about a value's attributes: whether it may or does have particular
 * attributes and if they are known, and whether it may have other unknown attributes.
 */
public interface AttributesType extends Lattice<AttributesType> {
  /** If we know the exact attributes, otherwise {@code null}. */
  @Nullable Attributes exact();
}
