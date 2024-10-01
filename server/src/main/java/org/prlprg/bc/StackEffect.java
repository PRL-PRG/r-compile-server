package org.prlprg.bc;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.Target;

@Target(value = {ElementType.TYPE})
@Retention(value = java.lang.annotation.RetentionPolicy.RUNTIME)
public @interface StackEffect {
  int pop() default 0;

  int push() default 0;
}
