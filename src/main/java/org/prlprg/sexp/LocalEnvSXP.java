package org.prlprg.sexp;

import java.util.SequencedMap;
import javax.annotation.Nullable;

/** Environment which has ENCLOS, FRAME, HASHTAB, ATTR. */
// May permit a locked or empty special environment later.
// If we do that we must remember to keep equals for identity in the new environment,
// and we don't need to change equals in RegEnvSxp.
public sealed interface LocalEnvSXP extends EnvSXP permits RegEnvSXP {
  /** The environment's parent. */
  EnvSXP enclos();

  @Override
  default EnvSXP knownParent() {
    return enclos();
  }

  /** The environment's frame. */
  SequencedMap<String, SEXP> frame();

  /** Whether the environment is locked (immutable). */
  boolean isLocked();

  /**
   * Lookup a binding in the environment or parents.
   *
   * @return {@code null} if not found.
   */
  @Nullable SEXP get(String name);

  /** The environment's attributes. */
  @Override
  Attributes attributes();

  /** Create a copy of this environment with the given attributes. */
  @Override
  LocalEnvSXP withAttributes(Attributes attributes);
}
