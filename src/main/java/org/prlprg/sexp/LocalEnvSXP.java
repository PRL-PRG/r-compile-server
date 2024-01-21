package org.prlprg.sexp;

import javax.annotation.Nullable;
import java.util.SequencedMap;

/** Environment which has ENCLOS, FRAME, HASHTAB, and ATTR. */
public non-sealed interface LocalEnvSXP extends EnvSXP {
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

    /** Lookup a binding in the environment or parents.
     *
     * @return {@code null} if not found.
     */
    @Nullable
    SEXP get(String name);

    /** The environment's attributes. */
    @Override
    Attributes attributes();

    /** Create a copy of this environment with the given attributes. */
    @Override
    LocalEnvSXP withAttributes(Attributes attributes);
}
