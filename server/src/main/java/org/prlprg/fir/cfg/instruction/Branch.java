package org.prlprg.fir.cfg.instruction;

import com.google.common.collect.Streams;
import java.util.Collection;
import java.util.List;
import java.util.stream.Stream;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.UnmodifiableView;

public record Branch(Expression cond, Target ifTrue, Target ifFalse) implements Jump {
  @Override
  public @NotNull String toString() {
    return "if " + cond + "then" + ifTrue + " else " + ifFalse;
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of(ifTrue, ifFalse);
  }

  @Override
  public @UnmodifiableView Collection<Expression> children() {
    return Streams.concat(Stream.of(cond), ifTrue.phiArgs().stream(), ifFalse.phiArgs().stream())
        .toList();
  }
}
