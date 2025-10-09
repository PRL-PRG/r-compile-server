package org.prlprg.bc;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * Annotation for labels in {@link BcInstr}s which is used by the {@linkplain
 * org.prlprg.bc2fir.CFGCompiler bytecode to FIŘ compiler} to add more descriptive names to the
 * basic blocks that they delimit.
 */
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.RECORD_COMPONENT)
@Documented
public @interface LabelName {
  String value();
}
