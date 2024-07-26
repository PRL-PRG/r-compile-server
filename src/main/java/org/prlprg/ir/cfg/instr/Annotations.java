package org.prlprg.ir.cfg.instr;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Repeatable;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.prlprg.ir.cfg.IFun;
import org.prlprg.ir.cfg.Instr;

/** Applied to the first component in an {@link InstrData}, specifies that the component value is
 * the {@link Instr#fun()} of an instruction with this data.
 *
 * <p>If not present, then {@link Intrinsic} must be present on the {@link InstrData}, and the
 * {@link Instr#fun()} is {@link IFun.Static.Intrinsic} with the given name.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.RECORD_COMPONENT)
@interface Fun {}

/** Specifies that the {@link Instr#fun()} of an instruction with this data is
 * {@link IFun.Static.Intrinsic} with the given name.
 *
 * <p>If not present, then {@link Fun} must be present on the first component.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface Intrinsic {
  String value();
}

/** Applied to the last component in an {@link InstrData} which is an array, specifies that the
 * {@link Instr#inputs()} of an instruction with this data is variable length, and the array
 * contains the remaining inputs (after those from previous components).
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.RECORD_COMPONENT)
@interface VarInputs {}

/** Applied to a component in an {@link InstrData}, specifies that the corresponding input is
 * "consumed", so the value must be implicitly copied before the instruction unless it's owned and
 * the input is its last use.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.RECORD_COMPONENT)
@interface Consume {}

/** Applied to an {@link InstrData}, specifies that the instruction has the effect with the given
 * class and inputs.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@Repeatable(Effects.class)
@interface Effect {
  Class<?> value();

  int[] inputs() default {};
}

/** Multiple {@link Effect} annotations.
 *
 * <p>This annotation shouldn't be written explicitly, instead add multiple {@link Effect}
 * annotations and it gets added implicitly.
 * <a href="https://docs.oracle.com/javase/tutorial/java/annotations/repeating.html">Java repeatable
 * annotations.</a>
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface Effects {
  Effect[] value();
}

/** Applied to an {@link InstrData}, specifies that the instruction has the given number of outputs
 * of the given types.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface Outputs {
  Class<?>[] value();
}