package org.prlprg.ir.type;

public record ParameterRType(RType type, NoOrMaybe isRequired)
    implements BoundedLattice<ParameterRType> {
  @Override
  public boolean isSubsetOf(ParameterRType other) {
    return type.isSubsetOf(other.type)
        && (isRequired == NoOrMaybe.NO || other.isRequired != NoOrMaybe.NO);
  }

  @Override
  public ParameterRType union(ParameterRType other) {
    return new ParameterRType(type.union(other.type), isRequired.union(other.isRequired));
  }

  @Override
  public ParameterRType intersection(ParameterRType other) {
    return new ParameterRType(
        type.intersection(other.type), isRequired.intersection(other.isRequired));
  }

  @Override
  public String toString() {
    return (isRequired == NoOrMaybe.NO ? "" : "?") + type;
  }
}
