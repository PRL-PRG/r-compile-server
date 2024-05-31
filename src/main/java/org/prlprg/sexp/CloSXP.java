package org.prlprg.sexp;

import java.util.Optional;

/** Closure SEXP. */
public sealed interface CloSXP extends SEXP {
  /** The argument names and default values. */
  ListSXP formals();

  /** If the body is a BCodeSXP, returns the AST which is stored in the first constant pool slot. */
  SEXP bodyAST();

  /** The closure body. */
  SEXP body();

  /** The environment where the closure was created. */
  EnvSXP env();

  @Override
  default SEXPType type() {
    return SEXPType.CLO;
  }

  @Override
  Attributes attributes();

  @Override
  CloSXP withAttributes(Attributes attributes);

  Optional<IntSXP> getSrcRef();

  @Override
  default Class<? extends SEXP> getCanonicalType() {
    return CloSXP.class;
  }
}

record CloSXPImpl(ListSXP formals, SEXP body, EnvSXP env, @Override Attributes attributes)
    implements CloSXP {
  @Override
  public String toString() {
    return SEXPs.toString(this, env(), formals(), "\n  → ", body);
  }

  @Override
  public SEXP bodyAST() {
    if (body instanceof BCodeSXP bc) {
      return bc.bc().consts().getFirst();
    } else {
      return body;
    }
  }

  @Override
  public CloSXP withAttributes(Attributes attributes) {
    return SEXPs.closure(formals, body, env, attributes);
  }

  @Override
  public Optional<IntSXP> getSrcRef() {
    return Optional.ofNullable((IntSXP) attributes.get("srcref"));
  }
}
