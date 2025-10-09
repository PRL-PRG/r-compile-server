package org.prlprg.fir.ir.observer;

import java.util.List;
import javax.annotation.Nullable;

public interface Observer {
  /** Records an atomic mutation before it occurs. */
  @SuppressWarnings("unused")
  default void before(String func, List<Object> args) {}

  /** Records the end of the most recent un-ended mutation from {@link #before(String, List)}. */
  void after(String func, List<Object> args, @Nullable Object returnValue);
}
