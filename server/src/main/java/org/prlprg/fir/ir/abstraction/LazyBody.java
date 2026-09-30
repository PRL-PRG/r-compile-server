package org.prlprg.fir.ir.abstraction;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Instruction;

/// The body of a [version][Abstraction]: a [CFG] that may only be computed when it's first
/// accessed ([#get()]).
///
/// Until then, the version is *unevaluated*. Code that must run it anyway can run its
/// [fallback][#fallback()] instead, if it has one (see `server/doc/lazy-versions.md`).
public final class LazyBody {
  /// Computes a version's body.
  @FunctionalInterface
  public interface Initializer {
    /// Fill `body`, which is empty and whose [scope][CFG#scope()] is the version.
    ///
    /// Accessing the version's body in here (recursive evaluation) throws.
    void evaluate(CFG body);

    /// Called after the body is evaluated, so accessing the version's body in here returns it.
    default void afterEvaluated(Abstraction version) {}

    /// The versions whose bodies [#evaluate(CFG)] reads, e.g. the one it copies.
    ///
    /// Until the body is evaluated, anything such a version's body needs (e.g. the versions it
    /// calls), this one still needs too.
    default List<Abstraction> sources() {
      return List.of();
    }
  }

  private enum State {
    UNEVALUATED,
    EVALUATING,
    EVALUATED,
    FAILED
  }

  private final Abstraction scope;
  private State state;
  private @Nullable Initializer initializer;
  /// Assigned when evaluation starts, so [#isRoot(CFG)] can recognize the body while it's being
  /// computed.
  private @Nullable CFG body;
  private @Nullable CFG fallback;
  private @Nullable RuntimeException failure;

  /// An already-evaluated body that's empty.
  LazyBody(Abstraction scope) {
    this.scope = scope;
    state = State.EVALUATED;
    body = new CFG(scope);
  }

  /// A body that's evaluated when first accessed.
  LazyBody(Abstraction scope, Initializer initializer) {
    this.scope = scope;
    this.initializer = initializer;
    state = State.UNEVALUATED;
  }

  public boolean isEvaluated() {
    return state == State.EVALUATED;
  }

  /// The body, evaluating it if it isn't already.
  ///
  /// @throws IllegalStateException If called while the body is being evaluated.
  public CFG get() {
    return switch (state) {
      case EVALUATED -> {
        assert body != null;
        yield body;
      }
      case EVALUATING ->
          throw new IllegalStateException(
              "Recursive evaluation: the body of a lazy version was accessed while it's being evaluated");
      case FAILED -> {
        assert failure != null;
        throw failure;
      }
      case UNEVALUATED -> {
        evaluate();
        assert body != null;
        yield body;
      }
    };
  }

  private void evaluate() {
    var initializer = this.initializer;
    assert initializer != null;

    scope
        .module()
        .record(
            "LazyBody#evaluate",
            List.of(scope),
            () -> {
              state = State.EVALUATING;
              // Drop the fallback first, because its instructions use the version's parameters,
              // and the initializer may substitute every use of one (e.g. to re-box it).
              discardFallback();
              body = new CFG(scope);
              try {
                initializer.evaluate(body);
              } catch (RuntimeException e) {
                state = State.FAILED;
                failure = e;
                body = null;
                throw e;
              }
              state = State.EVALUATED;
              this.initializer = null;
            });

    initializer.afterEvaluated(scope);
  }

  /// The versions whose bodies evaluating this one reads (see [Initializer#sources()]). Empty if
  /// it's evaluated.
  public List<Abstraction> sources() {
    return initializer == null ? List.of() : initializer.sources();
  }

  /// The body if it's evaluated or being evaluated, otherwise `null`. Never evaluates.
  public @Nullable CFG peek() {
    return body;
  }

  /// A [CFG] that behaves like the body and can be run while the body is unevaluated: a single
  /// block that adapts the version's parameters, [calls another version][
  /// org.prlprg.fir.ir.callee.FallbackCallee], adapts the result, and returns it.
  ///
  /// `null` if there is none, which includes after the body is evaluated.
  public @Nullable CFG fallback() {
    return fallback;
  }

  /// Set the fallback to a new [CFG], and return it to be filled.
  ///
  /// @throws IllegalStateException If the body is evaluated, or there's already a fallback.
  public CFG initFallback() {
    if (state != State.UNEVALUATED) {
      throw new IllegalStateException("Can't add a fallback after evaluation started");
    }
    if (fallback != null) {
      throw new IllegalStateException("Already has a fallback");
    }
    fallback = new CFG(scope);
    return fallback;
  }

  /// Whether `cfg` is the body (even while it's being evaluated) or the fallback, as opposed to
  /// the code of a promise in one of them. Doesn't evaluate.
  public boolean isRoot(CFG cfg) {
    return cfg == body || cfg == fallback;
  }

  /// Forget the fallback, and drop its uses of the version's parameters (so the body's are the
  /// only ones). It's left intact, because it may be running (see [Instruction#dropUsesIn(CFG)]).
  private void discardFallback() {
    if (fallback == null) {
      return;
    }
    Instruction.dropUsesIn(fallback);
    fallback = null;
  }
}
