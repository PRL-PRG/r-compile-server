package org.prlprg.ir.cfg;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.prlprg.ir.effect.REffects;

/**
 * Specifies that an instruction has arbitrary {@link REffects REffects}.
 *
 * @see Instr#effects()
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface EffectsAreAribtrary {}
