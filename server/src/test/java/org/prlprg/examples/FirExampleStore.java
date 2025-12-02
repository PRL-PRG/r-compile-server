package org.prlprg.examples;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.stream.Stream;
import org.prlprg.util.Streams;
import org.prlprg.session.gnur.GNUR;

/// Lazy static store of [FirExample]s.
class FirExampleStore {
  private final ImmutableList<FirExample> examples;

  FirExampleStore(GNUR R, RExampleStore fromR) {
    this.examples = Stream.concat(
          new ExampleStore("fir").examples().stream()
            .map(example -> FirExample.fromFir(R, example)),
          fromR.examples().stream()
            .map(example -> FirExample.fromR(R, example))
        )
        .collect(ImmutableList.toImmutableList());
  }

  public ImmutableList<FirExample> examples() {
    return examples;
  }
}