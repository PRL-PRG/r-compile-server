package org.prlprg.sexp;

import java.util.Optional;
import javax.annotation.Nullable;
import org.prlprg.util.Streams;

/** Closure SEXP. */
public sealed interface CloSXP extends SEXP {
  /** The argument names and default values. */
  ListSXP formals();

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

  @Nullable IntSXP getSrcRef();
}

record CloSXPImpl(ListSXP formals, SEXP body, EnvSXP env, @Override Attributes attributes)
    implements CloSXP {
  CloSXPImpl {
    if (Streams.hasDuplicates(
        formals.names().stream().filter(Optional::isPresent).map(Optional::get))) {
      throw new IllegalArgumentException("Formal arguments must have unique names");
    }
  }

  @Override
  public String toString() {
    return SEXPs.toString(this, env(), formals(), "\n  → ", body());
  }

  @Override
  public CloSXP withAttributes(Attributes attributes) {
    return SEXPs.closure(formals, body, env, attributes);
  }

  @Override
  public @Nullable IntSXP getSrcRef() {
    return (IntSXP) attributes.get("srcref");
  }
}
