package org.prlprg.ir.cfg;

import org.prlprg.ir.closure.Promise;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;

// Java doesn't like raw classes, I don't think nested class generics matter due to erasure...
// but I'm not sure we should do `PromSXP<T>` and not `PromSXP<?>` or just `PromSXP`.
public class PromiseNode<T extends SEXP> extends CodeObjectNode<PromSXP<T>, Promise> {
  public PromiseNode(Promise promise) {
    super(promise);
  }

  @SuppressWarnings("unchecked")
  @Override
  public Class<? extends PromSXP<T>> type() {
    return (Class<PromSXP<T>>) (Object) PromSXP.class;
  }

  // region serialization and deserialization
  @ParseMethod
  private static PromiseNode<?> parse(Parser p) {
    return new PromiseNode<>(p.parse(Promise.class));
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(codeObject());
  }
  // endregion serialization and deserialization
}
