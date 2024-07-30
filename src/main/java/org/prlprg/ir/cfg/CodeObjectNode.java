package org.prlprg.ir.cfg;

import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.closure.CodeObject;

abstract class CodeObjectNode<T, C extends CodeObject> extends PureExpressionNodeImpl<T> {
  private final C codeObject;

  public CodeObjectNode(C codeObject) {
    this.codeObject = codeObject;
  }

  public C codeObject() {
    return codeObject;
  }

  @Override
  public @UnmodifiableView List<? extends Node<?>> children() {
    return codeObject.outerCfgNodes();
  }

  @Override
  protected void unsafeReplaceInChildren(Node<?> old, Node<?> replacement, boolean[] replaced) {
    codeObject.unsafeReplaceInOuterCfgNodes(old, replacement, replaced);
  }
}
