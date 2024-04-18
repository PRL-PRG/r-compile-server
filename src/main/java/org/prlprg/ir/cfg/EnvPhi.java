package org.prlprg.ir.cfg;

import java.util.Collection;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Streams;

/**
 * {@link Phi} (<a
 * href="https://mapping-high-level-constructs-to-llvm-ir.readthedocs.io/en/latest/control-structures/ssa-phi.html">SSA
 * φ-node.</a>) of {@link Env}s.
 */
public interface EnvPhi extends Phi<Env>, Env {
  @Override
  NodeId<EnvPhi> id();
}

final class EnvPhiImpl extends PhiImpl<Env> implements EnvPhi {
  EnvPhiImpl(CFG cfg, @Nullable String name, Collection<?> inputs) {
    super(Env.class, cfg, name, inputs);
  }

  @Override
  public RType type() {
    return RTypes.union(inputNodes().map(RValue::type));
  }

  @Override
  public @Nullable Env parent() {
    return Streams.onlyOrNone(inputNodes().map(Env::parent).distinct()).orElse(null);
  }

  @Override
  public @Nullable SEXP sexp() {
    return Streams.onlyOrNone(inputNodes().map(Env::sexp).distinct()).orElse(null);
  }

  @Override
  public boolean isStatic() {
    return inputNodes().allMatch(Env::isStatic);
  }

  @Override
  public NodeId<EnvPhi> id() {
    return uncheckedCastId();
  }
}
