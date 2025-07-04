package org.prlprg.fir.instruction;

import com.google.common.collect.Streams;
import java.util.Collection;
import java.util.List;
import java.util.stream.Stream;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.UnmodifiableView;

public record If(Expression cond, Target ifTrue, Target ifFalse) implements Jump {
  @Override
  public @NotNull String toString() {
    return "if " + cond + "then" + ifTrue + " else " + ifFalse;
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of(ifTrue, ifFalse);
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return Streams.concat(Stream.of(cond), ifTrue.phiArgs().stream(), ifFalse.phiArgs().stream())
        .toList();
  }
}
