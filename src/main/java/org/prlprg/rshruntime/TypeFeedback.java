package org.prlprg.rshruntime;

import java.util.EnumSet;
import org.prlprg.sexp.SEXPType;

/** Type feedback recorded at runtime to be used in optimizations. */
public record TypeFeedback(
    SeenTypes types,
    StateBeforeLastForce stateBeforeLastForce,
    boolean notScalar,
    boolean hasAttribs,
    boolean isObject,
    boolean isNotFastVecElt) {
  public enum StateBeforeLastForce {
    UNKNOWN,
    VALUE,
    EVALUATED_PROMISE,
    LAZY_PROMISE,
  }

  public sealed interface SeenTypes {
    record Some(EnumSet<SEXPType> t) implements SeenTypes {}

    record Many() implements SeenTypes {}
  }
}
