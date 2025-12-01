package org.prlprg.examples;

import com.google.common.collect.ImmutableMap;
import org.prlprg.util.Streams;
import org.prlprg.util.gnur.GNUR;

/// Lazy static store of [RExample]s.
public class RExampleStore {
  private final ImmutableMap<String, RExample> examples;

  public RExampleStore(GNUR R, ExampleStore inner) {
    this.examples = inner.examples().values().stream()
        .map(example -> new RExample(R, example))
        .collect(Streams.toImmutableMap(RExample::name, e -> e));
  }

  public ImmutableMap<String, RExample> examples() {
    return examples;
  }
}
