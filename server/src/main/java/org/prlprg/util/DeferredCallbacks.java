package org.prlprg.util;

import java.util.ArrayList;
import java.util.List;
import java.util.function.Consumer;

/** Insert callbacks while parsing something that are only run at the end, with the full context. */
public class DeferredCallbacks<Owner> {
  private final List<Consumer<Owner>> callbacks = new ArrayList<>();

  public void add(Consumer<Owner> callback) {
    callbacks.add(callback);
  }

  public void run(Owner owner) {
    for (var callback : callbacks) {
      callback.accept(owner);
    }
    callbacks.clear();
  }
}
