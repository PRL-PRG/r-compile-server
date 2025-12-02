package org.prlprg.examples;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import org.prlprg.util.Streams;
import org.prlprg.session.gnur.GNUR;

/// Lazy static store of [RExample]s.
class RExampleStore {
  private final ImmutableList<RExample> examples;

  RExampleStore(GNUR R) {
    this.examples = new ExampleStore("R").examples().stream()
        .map(example -> new RExample(R, example))
        .collect(ImmutableList.toImmutableList());
  }

  public ImmutableList<RExample> examples() {
    return examples;
  }
}
