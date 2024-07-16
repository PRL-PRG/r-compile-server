package org.prlprg.ir.cfg;

import java.util.List;
import java.util.SequencedCollection;
import org.jetbrains.annotations.UnmodifiableView;

public sealed interface Param extends InstrOrPhi {}

abstract sealed class ParamImpl extends InstrOrPhiImpl implements Param permits ISexpParam {
  protected ParamImpl(CFG cfg, NodeId<? extends InstrOrPhi> id) {
    super(cfg, id);
  }

  @Override
  public @UnmodifiableView SequencedCollection<Node> args() {
    return List.of();
  }

  @Override
  public @UnmodifiableView List<Node> returns() {
    return List.of(this);
  }

  @Override
  public boolean isPure() {
    return true;
  }

  @Override
  public void replaceInArgs(Node old, Node replacement) {}

  @Override
  public Param origin() {
    return this;
  }

  @Override
  public NodeId<? extends Param> id() {
    return uncheckedCastId();
  }
}
