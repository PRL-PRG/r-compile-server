package org.prlprg.fir.observer;

import java.util.List;
import javax.annotation.Nullable;

public interface Observer {
  /** Records an atomic mutation before it occurs. */
  void before(String func, List<Object> args);

  /** Records the end of the most recent un-ended mutation from {@link #before(String, List)}. */
  default void after(@Nullable Object returnValue) {}
}
