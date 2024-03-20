package org.prlprg.ir.type;

/** Effect which may be performed when evaluating an instruction or calling a function. */
public enum REffect {
  /** Changes R_Visible. */
  Visibility("v"),
  /**
   * Logs a warning. Example: {@code CheckTrueFalse} warns if the vector used in an if condition has
   * length > 1.
   */
  Warn("w"),
  /**
   * Raises an error. Example: {@code ForSeqSize} raises an error if the collection to loop over is
   * not indexable.
   */
  Error("e"),
  /** Performs arbitrary reflection. */
  Reflection("r"),
  /**
   * "Leaks" a non-environment argument: makes it so that the runtime value is no longer tracked by
   * SSA (e.g. stores in an environment).
   */
  LeaksNonEnvArg("l"),
  /** Reads from its environment argument. */
  ReadsEnvArg("R"),
  /** Mutates its environment argument. */
  WritesEnvArg("W"),
  /**
   * Leaks its environment argument: makes it so that the runtime value is no longer tracked by SSA
   * (e.g. adds it to an {@code RCNTXT}).
   */
  LeaksEnvArg("L"),
  /**
   * May push, pop, or mutate the top {@code RCNTXT}. Contexts are for calls, unoptimized for loops,
   * and unoptimized subassign, and some other operations.
   *
   * <p>If code changes contexts internally but always leaves them the same after it exits, it
   * doesn't have this effect.
   */
  ChangesContext("c"),
  /** Triggers deoptimization. */
  TriggerDeopt("D"),
  /** Runs arbitrary code, e.g. forces an unknown promise. This implies all other effects. */
  Arbitrary("X");

  // Force doesn't imply anything on its own, only if combined with other flags.
  // DependsOnAssume specialized so instructions can depend on specific assumptions.

  private final String shorthand;

  REffect(String shorthand) {
    this.shorthand = shorthand;
  }

  @Override
  public String toString() {
    return shorthand;
  }
}
