package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.sexp.RegSymSXP;

public record ParameterRType(@Nullable String name, NoOrMaybe isRequired, RType type) {
  public ParameterRType {
    if (name != null && name.isEmpty()) {
      throw new IllegalArgumentException("Parameter name cannot be empty (use null instead)");
    }
  }

  public boolean isNamed() {
    return name != null;
  }

  public boolean isDots() {
    return name != null && name.equals("...");
  }

  public boolean isSubsetOf(NoOrMaybe otherIsRequired, RType otherType) {
    return type.isSubsetOf(otherType) && isRequired.isSubsetOf(otherIsRequired);
  }

  public boolean isSupersetOf(NoOrMaybe otherIsRequired, RType otherType) {
    return type.isSupersetOf(otherType) && isRequired.isSupersetOf(otherIsRequired);
  }

  public ParameterRType union(NoOrMaybe otherIsRequired, RType otherType) {
    return new ParameterRType(name, isRequired.union(otherIsRequired), type.union(otherType));
  }

  public ParameterRType intersection(NoOrMaybe otherIsRequired, RType otherType) {
    return new ParameterRType(
        name, isRequired.intersection(otherIsRequired), type.intersection(otherType));
  }

  @Override
  public String toString() {
    return (name == null ? "" : RegSymSXP.escape(name))
        + (isRequired == NoOrMaybe.NO ? "" : "?")
        + ":"
        + type;
  }
}
