package org.prlprg.snapshot.fir.ir;

import org.prlprg.examples.Example;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.snapshot.SnapshotStore;

/// The module `inner` computes, but with every version evaluated.
///
/// For tests of what a module is compiled into that aren't about unevaluated versions. Unlike
/// `inner`'s, this module is what its snapshot says, so it's cached like any other.
public record ForcedFirQuery(GenFirQuery inner) implements GenFirQuery {
  @Override
  public String name() {
    return "forced." + inner.name();
  }

  @Override
  public Module compute(Example example, SnapshotStore store) {
    // `inner` is transient, so this is ours to evaluate.
    var module = store.load(example, inner);
    inner.evaluateAll(module);
    return module;
  }
}
