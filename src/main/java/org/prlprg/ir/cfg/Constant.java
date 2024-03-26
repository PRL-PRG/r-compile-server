package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;

/**
 * A constant {@link RValue}: an IR node of a {@link SEXP} constant.
 *
 * <p>Global environments aren't constants. Use {@link Envs Envs.SOMETHING} instead.
 */
public record Constant(SEXP constant) implements Node {
  public Constant {
    if (constant instanceof EnvSXP) {
      throw new IllegalArgumentException(
          "Global environments aren't constants. Use Envs.SOMETHING instead.");
    }
  }

  @Override
  public @Nullable CFG cfg() {
    return null;
  }

  @Override
  public @Nullable InstrOrPhi origin() {
    return null;
  }

  @Override
  public NodeId<Constant> id() {
    return new GlobalNodeId<>(this, "{" + constant + "}");
  }
}
