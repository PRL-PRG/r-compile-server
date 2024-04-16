package org.prlprg.rshruntime;

public record DeoptReason(Type type, BcLocation origin) {
  enum Type {
    Unknown,
    Typecheck,
    DeadCall,
    CallTarget,
    ForceAndCall,
    EnvStubMaterialized,
    DeadBranchReached
  }

  @Override
  public String toString() {
    return type + "@" + origin;
  }
}
