package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableMap;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.function.Function;
import java.util.stream.Stream;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.ir.effect.REffects;
import org.prlprg.util.InvalidAnnotationError;
import org.prlprg.util.NotImplementedError;
import org.prlprg.util.Strings;

/**
 * Every type of instruction as an immutable, pattern-matchable record.
 *
 * @see Instr for why we have this separate from instructions.
 */
public sealed interface InstrData permits JumpData, StmtData {
  // TODO: Refactor this: we need `INTRINSIC_CLASSES`, `CLOSURE_CLASS`, and `DYNAMIC_CALL_CLASSES`.
  @SuppressWarnings("unchecked")
  ImmutableMap<String, Class<? extends InstrData>> CLASSES =
      Stream.concat(
              Arrays.stream(StmtData.class.getNestMembers()),
              Arrays.stream(JumpData.class.getNestMembers()))
          .filter(c -> c.isRecord() && InstrData.class.isAssignableFrom(c))
          .map(c -> (Class<? extends InstrData>) c)
          .collect(ImmutableMap.toImmutableMap(Class::getSimpleName, Function.identity()));

  /** Compute and return the {@link Instr#fun()} of an instruction with this data.
   *
   * <p>By default, this does so via annotations, and throws {@link InvalidAnnotationError} if the
   * instruction has bad or missing annotations.
   */
  default IFun fun() {
    throw new NotImplementedError();
  }

  /** Compute, allocate, and return the {@link Instr#inputs()} of an instruction with this data.
   *
   * <p>By default, this does so via annotations, and throws {@link InvalidAnnotationError} if the
   * instruction has bad or missing annotations.
   *
   * <p>You can modify this array and call {@link #setInputs(Object[])} to return an updated {@link
   * InstrData} which is the same class as this, but with the new inputs (note that {@link #fun()},
   * {@link #effects()}, and {@link #outputTypes()} may be affected if they depend on the inputs).
   */
  default Object[] inputs() {
    throw new NotImplementedError();
  }

  /** Create a new {@link InstrData} with the same class as this one, but new inputs.
   *
   * <p>The {@link #fun()}, {@link #effects()}, and {@link #outputTypes()}} may also change, if they
   * depend on the inputs. For example, an {@link IFun.Static} {@link #fun()} won't change, but a
   * {@link IFun.SemiStatic} or {@link IFun.DynamicNode} may. The number of outputs
   * {@link #outputTypes()}{@code .size()} is guaranteed not to change, because it's guaranteed to
   * be the same for all instances of a given {@link InstrData} class.
   *
   * @throws IllegalArgumentException If the new inputs are incompatible with the instruction's
   *                                  required input types or the count is incorrect. Each
   *                                  instruction is a record: the number of inputs must match the
   *                                  number of components, and each input's class must be a
   *                                  subclass of the corresponding component's; unless the last
   *                                  component is a {@link VarArgs} collection, then there can be
   *                                  any number of trailing inputs at its index (including zero)
   *                                  and they must all be subclasses of its element class.
   */
  default InstrData setInputs(Object[] inputs) {
    throw new NotImplementedError();
  }

  /**
   * Handle changes to {@link Node#type()} in inputs that are outputs to other instructions
   * ({@link InstrOutput}s) whose inputs have changed.
   *
   * <p>Specifically, if the changed input {@link Node#type()}s would cause {@link #effects()} or
   * {@link #outputTypes()} to return differently, this will return a value indicating such, and if
   * an input is the wrong {@link Node#type()}, this will throw {@link InputNodeTypeException}.
   *
   * <p>The {@link InputNodeTypeException} is the same as the one that would be thrown by
   * calling {@link #setInputs(Object[])} given the existing {@link #inputs()} (which were
   * originally valid, but are no longer because the node's type changed).
   *
   * @throws InfiniteCascadingUpdateException if an instruction's updated
   * outputs trigger more updates that eventually update that instruction's inputs so that its
   * outputs update again. This is checked via the {@link CascadingUpdatedInstrs} data-structure,
   * which can be constructed with the initial instruction whose outputs have changed, and passed to
   * each instruction whose inputs change.
   */
  default CascadingInstrUpdate handleUpdatedNodeInputs(CascadingUpdatedInstrs seen) {
    throw new NotImplementedError();
  }

  enum CascadingInstrUpdate {
    NONE(false, false),
    UPDATED_EFFECTS(true, false),
    UPDATED_OUTPUT_TYPES(false, true),
    UPDATED_EFFECTS_AND_OUTPUT_TYPES(true, true);

    private final boolean updatedEffects;
    private final boolean updatedOutputTypes;

    public static CascadingInstrUpdate of(boolean updatedEffects, boolean updatedOutputTypes) {
      if (updatedEffects && updatedOutputTypes) {
        return UPDATED_EFFECTS_AND_OUTPUT_TYPES;
      } else if (updatedEffects) {
        return UPDATED_EFFECTS;
      } else if (updatedOutputTypes) {
        return UPDATED_OUTPUT_TYPES;
      } else {
        return NONE;
      }
    }

    CascadingInstrUpdate(boolean updatedEffects, boolean updatedOutputTypes) {
      this.updatedEffects = updatedEffects;
      this.updatedOutputTypes = updatedOutputTypes;
    }

    public boolean updatedEffects() {
      return updatedEffects;
    }

    public boolean updatedOutputTypes() {
      return updatedOutputTypes;
    }

    /** Return an update is the result of applying both updates, i.e. {@code updated…} is true iff
     *  either {@code this} or {@code other}'s is true.
     */
    public CascadingInstrUpdate merge(CascadingInstrUpdate other) {
      return of(updatedEffects || other.updatedEffects, updatedOutputTypes || other.updatedOutputTypes);
    }
  }

  class CascadingUpdatedInstrs {
    private final Set<Instr> instrDatasWhoseOutputsHaveChanged = new HashSet<>();

    public CascadingUpdatedInstrs() {}

    void handleUpdatedInstrData(Instr data, CascadingInstrUpdate update) {
      if (update.updatedOutputTypes) {
        if (!instrDatasWhoseOutputsHaveChanged.add(data)) {
          throw new InfiniteCascadingUpdateException(this);
        }
      }
    }

    @Override
    public String toString() {
      return "- " + Strings.join("\n- ", instrDatasWhoseOutputsHaveChanged);
    }
  }

  /** Check that the {@link Node} inputs' {@link Node#type()}s are subtypes of their corresponding
   * {@link Node} components' type parameters.
   *
   * <p>This is called by {@link #setInputs(Object[])} and {@link
   * #handleUpdatedNodeInputs(CascadingUpdatedInstrs)}. It's also called by {@link Instr}'s
   * constructor (it "should" be called on the {@link InstrData} constructor, but we can't abstract
   * that and don't want to write the boilerplate, so we just call in {@link Instr}'s constructor
   * because it's guaranteed to run for every {@link InstrData} before it's added to a {@link CFG}).
   *
   * @throws InputNodeTypeException if any input {@link Node#type()}s aren't subtypes.
   */
  default void checkInputNodeTypes() {
    throw new NotImplementedError();
  }

  /** Compute and return the {@link Instr#effects()} of an instruction with this data.
   *
   * <p>By default, this does so via annotations, and throws {@link InvalidAnnotationError} if the
   * instruction has bad or missing annotations.
   */
  default REffects effects() {
    throw new NotImplementedError();
  }

  /** Compute and return the {@link Node#type()}s of the {@link Instr#outputs()} of an instruction
   * with this data.
   *
   * <p>By default, this does so via annotations, and throws {@link InvalidAnnotationError} if the
   * instruction has bad or missing annotations.
   */
  default @Unmodifiable List<Class<?>> outputTypes() {
    throw new NotImplementedError();
  }

  /** Run sanity checks. Either does nothing or throws {@link InstrVerifyException}.
   *
   * <p>Specifically:
   * <ul>
   *   <li>Check that all input nodes' {@link Node#type()}s are correct (since this isn't enforced
   *   by Java, since they are generic).
   *   <li>Any annotation-specific or instruction-specific checks.
   * </ul>
   */
  default void verify() {
    throw new NotImplementedError();
  }
}
