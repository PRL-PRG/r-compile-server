package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.DeferredCallbacks;

@Immutable
public sealed interface Instruction permits Statement, Jump {
  Comments comments();

  @UnmodifiableView
  Collection<Argument> arguments();

  record ParseContext(
      CFG cfg,
      DeferredCallbacks<CFG> postCfg,
      DeferredCallbacks<Module> postModule,
      @Nullable Object inner,
      @Nullable Comments comments) {
    public ParseContext(
        CFG cfg,
        DeferredCallbacks<CFG> postCfg,
        DeferredCallbacks<Module> postModule,
        @Nullable Object inner) {
      this(cfg, postCfg, postModule, inner, null);
    }

    private ParseContext withComments(Comments comments) {
      return new ParseContext(cfg, postCfg, postModule, inner, comments);
    }
  }

  @ParseMethod
  private static Instruction parse(Parser p, ParseContext ctx) {
    var s = p.scanner();

    var comments = ctx.comments != null ? ctx.comments : p.parse(Comments.class);
    var p2 = p.withContext(ctx.withComments(comments));

    if ((s.nextCharsAre("check ") && !s.nextCharsAre("check ="))
        || (s.nextCharsAre("deopt ") && !s.nextCharsAre("deopt ="))
        || (s.nextCharsAre("if ") && !s.nextCharsAre("if ="))
        || (s.nextCharsAre("goto ") && !s.nextCharsAre("goto ="))
        || (s.nextCharsAre("return ") && !s.nextCharsAre("return ="))
        || (s.nextCharsAre("unreachable ") && !s.nextCharsAre("unreachable ="))
        || s.nextCharsAre("unreachable;")) {
      return p2.parse(Jump.class);
    } else {
      return p2.parse(Statement.class);
    }
  }
}
