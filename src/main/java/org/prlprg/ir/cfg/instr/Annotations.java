package org.prlprg.ir.cfg.instr;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Repeatable;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.lang.reflect.RecordComponent;
import org.prlprg.ir.cfg.IFun;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.sexp.RSexpType;

/**
 * On {@link InstrData}, specifies that an instruction created with this data's {@linkplain
 * Instr#fun() function} is {@link IFun#of(Object)} called with the first component.
 *
 * <p>An {@link InstrData} annotated with this can't also be annotated with {@link Intrinsic}.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface Fun {}

/**
 * On {@link InstrData}, specifies that an instruction created with this data's {@linkplain
 * Instr#fun() function} is {@link IFun.Static#named(String)} called with the given name.
 *
 * <p>An {@link InstrData} annotated with this can't also be annotated with {@link Fun}.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface Intrinsic {
  /** The name of the intrinsic function ({@link IFun.Static#named(String)} argument). */
  String value();
}

/**
 * On an {@link InstrData} component, specifies that an {@linkplain Instr#inputs() input}
 * corresponding to this component has a type refined further than the component's class.
 *
 * <p>The string value is parsed into an {@link RType}, and inputs corresponding to the record
 * component are checked at runtime to conform to this type.
 *
 * <p>Inputs are already checked at runtime to conform to their corresponding record component's
 * Java class. However, classes aren't as specific as {@link RType}s, e.g. you can have an {@link
 * RType} for a vector of specific length, but there's no const generic in Java, so no corresponding
 * Java class. Hence the reason this annotation exists.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.RECORD_COMPONENT)
@interface Input {
  /** See {@link Input} documentation. */
  String value();
}

/**
 * On an {@link InstrData} component, specifies that an input corresponding to the component is
 * "consumed", so the value must be implicitly copied before the instruction unless it's owned and
 * the input is its last use.
 *
 * <p>May also be applied to a {@link VarInputs} component, in which case every one of the inputs
 * are consumed.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.RECORD_COMPONENT)
@interface Consume {}

/**
 * On an {@link InstrData} component, specifies that the component doesn't correspond to one input
 * per instruction, but zero to many.
 *
 * <p>The component must be the last in the record and an array. It's analogous to a "variardic
 * parameter", e.g. a {@code Foo...} argument in a Java function.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.RECORD_COMPONENT)
@interface VarInputs {
  /**
   * The refined type of each input.
   *
   * <p>This has the same function as {@link Input#value()}, except instead of being applied to the
   * whole component, it's applied to each element (the type of each element is refined).
   */
  String value();
}

/**
 * On an {@link InstrData}, specifies that an instruction created from the data has the effect that
 * is constructed by the given class and inputs.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@Repeatable(Effects.class)
@interface Effect {
  Class<? extends REffect> value();

  String[] inputs() default {};
}

/**
 * Multiple {@link Effect} annotations.
 *
 * <p>This annotation shouldn't be written explicitly, instead add multiple {@link Effect}
 * annotations and it gets added implicitly. See <a
 * href="https://docs.oracle.com/javase/tutorial/java/annotations/repeating.html">Java repeatable
 * annotations.</a>
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface Effects {
  Effect[] value();
}

/**
 * On an {@link InstrData}, specifies that the instruction has the given number of outputs of the
 * given types.
 *
 * <p>Types are represented by strings that are parsed into {@link RType}s.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface Outputs {
  String[] value();
}

/**
 * Applied to an {@link InstrData} with {@link Outputs}, intersects the output type with other
 * inputs and outputs based on the given enum.
 */
@Documented
@Retention(RetentionPolicy.RUNTIME)
@Target(ElementType.TYPE)
@interface OutputsGeneric {
  GenericOutput[] value();
}

enum GenericOutput {
  INTERSECT_VALUE,
  FORCE_MAYBE_PROM,
  COERCE_VALUE_TO_LOGICAL;

  RType apply(RType output, RecordComponent[] components, Object[] values) {
    return switch (this) {
      case INTERSECT_VALUE -> {
        if (components.length != 1 || !components[0].getName().equals("value")) {
          throw new IllegalArgumentException(
              "`INTERSECT_VALUE` can only be used with a single component named `value`");
        }

        yield output.intersectionOf(InstrDataUtil.componentInputType(components[0]));
      }
      case FORCE_MAYBE_PROM -> {
        if (components.length < 1
            || !components[0].getName().equals("maybeProm")
            || !(InstrDataUtil.componentInputType(components[0])
                instanceof RSexpType maybePromType)) {
          throw new IllegalArgumentException(
              "`FORCE_MAYBE_PROM` can only be used with a component that is an `SEXP` named `maybeProm`");
        }

        yield output.intersectionOf(maybePromType.forced());
      }
      case COERCE_VALUE_TO_LOGICAL -> {
        if (components.length != 1
            || !components[0].getName().equals("value")
            || !(InstrDataUtil.componentInputType(components[0]) instanceof RSexpType valueType)) {
          throw new IllegalArgumentException(
              "`COERCE_VALUE_TO_LOGICAL` can only be used with a single component that is an `SEXP` named `value`");
        }

        yield output.intersectionOf(valueType.coerceToLogical());
      }
    };
  }
}
