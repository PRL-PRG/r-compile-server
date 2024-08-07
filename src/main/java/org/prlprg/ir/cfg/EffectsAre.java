package org.prlprg.ir.cfg;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.prlprg.ir.type.REffect;
import org.prlprg.ir.type.REffects;

/**
 * Specifies the {@link org.prlprg.ir.type.REffects REffects} of an instruction.
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
