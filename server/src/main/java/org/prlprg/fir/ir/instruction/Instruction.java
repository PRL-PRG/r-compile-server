package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.DeferredCallbacks;

@Immutable
public sealed interface Instruction permits Statement, Jump {
  @UnmodifiableView
  Collection<Argument> arguments();

  record ParseContext(
      CFG cfg,
      DeferredCallbacks<CFG> postCfg,
      DeferredCallbacks<Module> postModule,
      @Nullable Object inner) {}

  @ParseMethod
  private static Instruction parse(Parser p, ParseContext _ctx) {
    var s = p.scanner();
    if (s.nextCharsAre("check ")
        || s.nextCharsAre("deopt ")
        || s.nextCharsAre("if ")
        || s.nextCharsAre("goto ")
        || s.nextCharsAre("return ")
        || s.nextCharsAre("...")) {
      return p.parse(Jump.class);
    } else {
      return p.parse(Statement.class);
    }
  }
}
