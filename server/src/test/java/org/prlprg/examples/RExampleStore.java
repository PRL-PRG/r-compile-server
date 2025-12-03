package org.prlprg.examples;

final class RExampleStore extends ExampleStore {
  private RExampleStore() {
    super(ExampleStore.listDir("R"));
  }
}
