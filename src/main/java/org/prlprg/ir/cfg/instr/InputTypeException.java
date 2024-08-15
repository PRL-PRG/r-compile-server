package org.prlprg.ir.cfg.instr;

import javax.annotation.Nullable;
import org.prlprg.ir.cfg.CascadingUpdatedInstrs;
import org.prlprg.ir.cfg.InstrOutput;
import org.prlprg.ir.cfg.Phi;
import org.prlprg.ir.type.RType;

/**
 * Thrown when an instruction input doesn't conform to its required type.
 *
 * <p>Java checks that the input conforms to the required class, but {@link RType} is more fine-
 * grained than classes. We explicitly check a) that generic type arguments are correct, and b)
 * types that can't be expressed by Java classes (e.g. vectors of specific length).
 *
 * <p>Notably, certain operations can change the type of {@link Phi}s and {@link InstrOutput}s, so
 * an instruction that used to have inputs of correct types may no longer due to a modification in
 * another far-away instruction. To alleviate this shortfall, the exception optionally takes a
 * {@link CascadingUpdatedInstrs}, which would contain any far-away modifications that could
 * potentially break the type, so they can be displayed.
 */
public class InputTypeException extends RuntimeException {
  InputTypeException(
      @Nullable CascadingUpdatedInstrs cascade, Object input, RType requiredInputType) {
    super(
        "Expected input "
            + input
            + " to be `"
            + requiredInputType
            + "`, but got `"
            + RType.exact(input)
            + "`"
            + (cascade == null ? "" : "\n\nCascade:\n" + cascade));
  }
}
