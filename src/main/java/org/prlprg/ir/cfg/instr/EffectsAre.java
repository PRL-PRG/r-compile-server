package org.prlprg.ir.cfg.instr;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;

/**
 * Specifies the {@link REffects REffects} of an instruction.
 *
 * @see Instr#effects()
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
public @interface EffectsAre {
  REffect[] value();
}

class EffectsAreUtil {
  static REffects parse(EffectsAre annotation) {
    return new REffects(annotation.value());
  }

  private EffectsAreUtil() {}
}
