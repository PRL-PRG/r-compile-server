package org.prlprg.fir.instruction;

import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

public sealed interface Instruction permits Expression, Jump {
  /// "Immediate" here means "not recursive".
  @UnmodifiableView
  Collection<Expression> immediateChildren();

  @ParseMethod
  private static Instruction parse(Parser p) {
    var s = p.scanner();
    if (s.nextCharsAre("if ")
        || s.nextCharsAre("goto ")
        || s.nextCharsAre("return ")
        || s.nextCharsAre("unreachable;")) {
      return p.parse(Jump.class);
    } else {
      return p.parse(Expression.class);
    }
  }
}
