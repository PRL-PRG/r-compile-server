package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableMap;
import java.util.Arrays;
import java.util.function.Function;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.ir.type.REffects;

/**
 * Every type of instruction as an immutable, pattern-matchable record.
 *
 * @see Instr for why we have this separate from instructions.
 */
public sealed interface InstrData<I extends Instr> permits JumpData, StmtData {
  @SuppressWarnings("unchecked")
  ImmutableMap<String, Class<? extends InstrData<?>>> CLASSES =
      Stream.concat(
              Arrays.stream(StmtData.class.getNestMembers()),
              Arrays.stream(JumpData.class.getNestMembers()))
          .filter(c -> c.isRecord() && InstrData.class.isAssignableFrom(c))
          .map(c -> (Class<? extends InstrData<?>>) c)
          .collect(ImmutableMap.toImmutableMap(Class::getSimpleName, Function.identity()));

  /** Create an instruction containing this data and a small descriptive name (or empty string). */
  I make(CFG cfg, String name);

  /**
   * Compute the effects for this instruction, or for trivial cases, <b>this will return {@code
   * null} </b>and an annotation on this class will compute the effects instead.
   */
  default @Nullable REffects computeEffects() {
    return null;
  }

  /**
   * Perform non-trivial assertions on the arguments.
   *
   * <p>e.g. check that arguments are of the correct types that are too dynamic or otherwise
   * inexpressible in Java's type system, in a way that annotating the arguments with {@link TypeIs}
   * and {@link IsEnv} won't do on its own.
   *
   * @throws InstrVerifyException If there are issues with the instruction data.
   */
  default void verify() throws InstrVerifyException {}
}