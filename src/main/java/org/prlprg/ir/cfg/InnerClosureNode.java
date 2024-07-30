package org.prlprg.ir.cfg;

import org.prlprg.ir.closure.Closure;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

// Java doesn't like raw classes, I don't think nested class generics matter due to erasure...
// but I'm not sure we should do `PromSXP<T>` and not `PromSXP<?>` or just `PromSXP`.
public class InnerClosureNode extends CodeObjectNode<CompiledFunSXP, Closure> {
  public InnerClosureNode(Closure closure) {
    super(closure);
  }

  @Override
  public Class<? extends CompiledFunSXP> type() {
    return CompiledFunSXP.class;
  }

  // region serialization and deserialization
  @ParseMethod
  private static InnerClosureNode parse(Parser p) {
    return new InnerClosureNode(p.parse(Closure.class));
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(codeObject());
  }
  // endregion serialization and deserialization
}
