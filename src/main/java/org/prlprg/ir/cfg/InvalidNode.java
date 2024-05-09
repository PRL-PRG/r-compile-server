package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.sexp.SEXP;

/** Node representing missing, invalid, or placeholder data. */
public record InvalidNode(String desc) implements DeoptReason, Env, FrameState {
  public static final InvalidNode TODO_GLOBAL = new InvalidNode("TODO_GLOBAL");

  public InvalidNode {
    if (desc.contains("}")) {
      throw new IllegalArgumentException("Description must not contain '}' (makes parsing harder)");
    }
  }

  @Override
  public @Nullable Env parent() {
    return null;
  }

  @Override
  public @Nullable SEXP sexp() {
    return null;
  }

  @Override
  public RType type() {
    return RTypes.NOTHING;
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
  public GlobalNodeId<InvalidNode> id() {
    return new GlobalNodeIdImpl<>(this);
  }

  @Override
  public String toString() {
    return "{invalid:" + desc + "}";
  }
}
