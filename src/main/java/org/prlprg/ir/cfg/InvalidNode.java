package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;

/** Node representing missing, invalid, or placeholder data. */
public record InvalidNode(String desc) implements DeoptReason, RValue, FrameState {
  public static final InvalidNode TODO_GLOBAL = new InvalidNode("TODO_GLOBAL");
  static final InvalidNode UNSET_PHI_INPUT = new InvalidNode("unsetPhiInput");

  public InvalidNode {
    if (desc.contains("}")) {
      throw new IllegalArgumentException("Description must not contain '}' (makes parsing harder)");
    }
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
