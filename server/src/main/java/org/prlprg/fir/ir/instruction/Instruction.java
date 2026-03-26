package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.function.Function;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

@Immutable
public sealed interface Instruction permits Statement, Jump {
  Comments comments();

  @UnmodifiableView
  Collection<Argument> arguments();

  /// Apply the function to each argument.
  Instruction mapArguments(Function<Argument, Argument> transformer);

  record ParseContext(
      CFG cfg,
      BBRef.ParseContext forBbRef,
      FunctionRef.ParseContext forFunctionRef,
      @Nullable Object inner,
      @Nullable Comments comments) {
    public ParseContext(
        CFG cfg,
        BBRef.ParseContext forBbRef,
        FunctionRef.ParseContext forFunctionRef,
        @Nullable Object inner) {
      this(cfg, forBbRef, forFunctionRef, inner, null);
    }

    private ParseContext withComments(Comments comments) {
      return new ParseContext(cfg, forBbRef, forFunctionRef, inner, comments);
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
