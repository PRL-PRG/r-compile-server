package org.prlprg.examples;

import com.google.common.collect.ImmutableMap;
import java.util.stream.Stream;
import org.prlprg.util.Streams;
import org.prlprg.util.gnur.GNUR;

/// Lazy static store of [FirExample]s.
public class FirExampleStore {
  private final ImmutableMap<String, FirExample> examples;

  public FirExampleStore(GNUR R, RExampleStore fromR, ExampleStore fromFir) {
    this.examples = Stream.concat(
          fromR.examples().values().stream()
            .map(example -> FirExample.fromR(R, example)),
          fromFir.examples().values().stream()
            .map(example -> FirExample.fromFir(R, example))
        )
        .collect(Streams.toImmutableMap(FirExample::name, e -> e));
  }

  public ImmutableMap<String, FirExample> examples() {
    return examples;
  }
}