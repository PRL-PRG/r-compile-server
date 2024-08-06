package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.primitive.Names;

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

  // Important to note that isRequired is contravariant here:
  // If lhs is optional and rhs is required, lhs.isRequired is NO and rhs.isRequired is MAYBE,
  // but we don't want lhs to be a subtype of rhs even though NO is a subtype of MAYBE (because lhs
  // permits a missing value and rhs doesn't).

  public boolean isSubsetOf(NoOrMaybe otherIsRequired, RType otherType) {
    return type.isSubsetOf(otherType) && isRequired.isSupersetOf(otherIsRequired);
  }

  public boolean isSupersetOf(NoOrMaybe otherIsRequired, RType otherType) {
    return type.isSupersetOf(otherType) && isRequired.isSubsetOf(otherIsRequired);
  }

  public ParameterRType union(NoOrMaybe otherIsRequired, RType otherType) {
    return new ParameterRType(
        name, isRequired.intersection(otherIsRequired), type.union(otherType));
  }

  public ParameterRType intersection(NoOrMaybe otherIsRequired, RType otherType) {
    return new ParameterRType(
        name, isRequired.union(otherIsRequired), type.intersection(otherType));
  }

  @Override
  public String toString() {
    return (name == null ? "" : Names.quoteIfNecessary(name))
        + (isRequired == NoOrMaybe.NO ? "?" : "")
        + ":"
        + type;
  }
}
