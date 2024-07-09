package org.prlprg.parseprint;

import java.lang.annotation.Annotation;
import java.lang.reflect.Executable;
import org.prlprg.util.InvalidAnnotationError;

/**
 * Check invariants and then compute cached values for a "typeclass method".
 *
 * <p>Throw {@link InvalidAnnotationError} if invariants aren't met.
 *
 * @see TypeclassMap
 */
@FunctionalInterface
interface TypeclassMethodLoader<A extends Annotation, M extends TypeclassMethod> {

  M load(A annotation, Executable method);
}
