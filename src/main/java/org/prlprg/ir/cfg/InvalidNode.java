package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.sexp.SEXP;

/** Node representing missing, invalid, or placeholder data. */
public record InvalidNode(String desc) implements DeoptReason, Env, FrameState {
  public static final InvalidNode TODO_GLOBAL = new InvalidNode("TODO_GLOBAL");

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
  public NodeId<InvalidNode> id() {
    return new GlobalNodeId<>(this, "<" + desc + ">");
  }
}
