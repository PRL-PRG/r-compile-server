package org.prlprg.ir.cfg.instr;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
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