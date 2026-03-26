package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

public sealed interface Jump extends Instruction
    permits Checkpoint, Deopt, Goto, If, Return, Unreachable {
  @UnmodifiableView
  Collection<Target> targets();

  @UnmodifiableView
  Collection<BB> targetBBs();

  @Override
  Jump mapArguments(Function<Argument, Argument> transformer);

  @ParseMethod
  private static Jump parse(Parser p1, Instruction.ParseContext ctx) {
    var p = p1.withContext(ctx.inner());
    var p2 = p.withContext(new Target.ParseContext(ctx.forBbRef(), ctx));

    var s = p.scanner();

    var comments = ctx.comments() != null ? ctx.comments() : p.parse(Comments.class);

    var k = s.readIdentifierOrKeyword();
    return switch (k) {
      case "check" -> {
        var success = p2.parse(Target.class);
        s.assertAndSkip("else");
        var failure = p2.parse(Target.class);
        yield new Checkpoint(comments, success, failure);
      }
      case "deopt" -> {
        var pc = s.readInt();
        var stack = p.parseList("[", "]", Argument.class);
        yield new Deopt(comments, pc, stack);
      }
      case "if" -> {
        var cond = p.parse(Argument.class);
        s.assertAndSkip("then");
        var ifTrue = p2.parse(Target.class);
        s.assertAndSkip("else");
        var ifFalse = p2.parse(Target.class);
        yield new If(comments, cond, ifTrue, ifFalse);
      }
      case "goto" -> {
        var target = p2.parse(Target.class);
        yield new Goto(comments, target);
      }
      case "return" -> {
        var ret = p.parse(Argument.class);
        yield new Return(comments, ret);
      }
      case "unreachable" -> new Unreachable(comments);
      default -> throw s.fail("'check', 'deopt', 'if', 'goto', 'return' or 'unreachable'", k);
    };
  }
}
