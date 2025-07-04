package org.prlprg.bc;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.Target;

@Target(value = ElementType.RECORD_COMPONENT)
@Retention(value = java.lang.annotation.RetentionPolicy.RUNTIME)
public @interface BindingCell {
}
