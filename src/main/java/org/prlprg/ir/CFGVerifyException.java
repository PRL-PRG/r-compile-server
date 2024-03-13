package org.prlprg.ir;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import java.util.stream.Collectors;
import javax.annotation.Nullable;

/** Thrown by {@link CFG#verify()}. */
public class CFGVerifyException extends IllegalStateException {
  CFGVerifyException(ImmutableList<Cause> causes) {
    super(
        "CFG errors:"
            + causes.stream()
                .map(Cause::message)
                .map(m -> "\n- " + m)
                .collect(Collectors.joining()),
        IncompleteCFGOperationException.chain(
            causes.stream().map(Cause::origin).filter(Objects::nonNull)));
    if (causes.isEmpty()) {
      throw new IllegalArgumentException("Tried to create a CFGVerifyInstruction with no causes");
    }
  }

  record Cause(String message, @Nullable IncompleteCFGOperationException origin) {}
}
