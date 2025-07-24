package org.prlprg.fir.instruction;

import java.util.Collection;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.CFG;
import org.prlprg.fir.module.Module;
import org.prlprg.fir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.DeferredCallbacks;

public sealed interface Instruction permits Expression, Jump {
  /// "Immediate" here means "not recursive".
  @UnmodifiableView
  Collection<Expression> immediateChildren();

  /// "Immediate" here means "not in children".
  @UnmodifiableView
  Collection<Variable> immediateVariables();

  record ParseContext(
      CFG cfg,
      DeferredCallbacks<CFG> postCfg,
      DeferredCallbacks<Module> postModule,
      @Nullable Object inner) {}

  @ParseMethod
  private static Instruction parse(Parser p) {
    var s = p.scanner();
    if (s.nextCharsAre("if ")
        || s.nextCharsAre("goto ")
        || s.nextCharsAre("return ")
        || s.nextCharsAre("...")) {
      return p.parse(Jump.class);
    } else {
      return p.parse(Expression.class);
    }
  }
}
