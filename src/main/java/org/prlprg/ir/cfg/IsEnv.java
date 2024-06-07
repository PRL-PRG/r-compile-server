package org.prlprg.ir.cfg;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.prlprg.ir.closure.Closure;

/**
 * Annotation for {@link RValue} in an {@link InstrData} which is always an environment.
 *
 * <p>This is essentially {@link TypeIs TypeIs("ENV")}, but shorter because it's extremely common.
 * It's also applied to more Java elements (e.g. {@link Closure#env()}, although some of those
 * aren't checked, just for documentation purposes.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target({
  ElementType.TYPE,
  ElementType.METHOD,
  ElementType.PARAMETER,
  ElementType.FIELD,
  ElementType.RECORD_COMPONENT
})
public @interface IsEnv {}
