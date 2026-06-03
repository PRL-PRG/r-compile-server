package org.prlprg.examples;

import java.util.stream.Stream;

final class FirExampleStore extends ExampleStore {
  private FirExampleStore(RExampleStore rExamples) {
    super(Stream.concat(rExamples.examples().stream(), ExampleStore.listDir("fir")));
  }
}
