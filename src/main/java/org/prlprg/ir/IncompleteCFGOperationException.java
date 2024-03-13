package org.prlprg.ir;

import java.util.Optional;
import java.util.function.Supplier;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.Config;

/**
 * An exception caused by an operation on a {@link CFG} which caused it to be put into an invalid
 * state, and it wasn't put back into a valid state before {@link CFG#verify()}.
 *
 * <p>In debug mode, {@link IncompleteCFGOperationException}s are <i>created</i> when a
 * potentially-invalid CFG operation is performed, and recorded in the CFG. When a broken invariant
 * is found in {@link CFG#verify()}, the CFG attempts to look up the associated exception and, if
 * it's found, it's added to the cause chain.
 */
class IncompleteCFGOperationException extends Exception {
  /**
   * Set's each operation's cause to the next, so they all get reported. Returns the first one, or
   * {@code null} if there are none, so itself can be a cause.
   */
  static @Nullable IncompleteCFGOperationException chain(
      Stream<IncompleteCFGOperationException> exceptions) {
    var iter = exceptions.iterator();
    if (!iter.hasNext()) {
      return null;
    }
    var first = iter.next();
    var current = first;
    while (iter.hasNext()) {
      var next = iter.next();
      current.initCause(next);
      current = next;
    }
    return first;
  }

  /** Creates an exception if we're in debug mode, otherwise returns {@code empty}. */
  static Optional<IncompleteCFGOperationException> make(Supplier<String> description) {
    if (Config.CFG_DEBUG_LEVEL.trackStack()) {
      return Optional.of(new IncompleteCFGOperationException(description.get()));
    } else {
      return Optional.empty();
    }
  }

  IncompleteCFGOperationException(String description) {
    super(description);
  }
}
