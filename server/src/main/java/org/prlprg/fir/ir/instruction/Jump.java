package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

public sealed interface Jump extends Instruction
    permits Checkpoint, Deopt, Goto, If, Return, Unreachable {
  @UnmodifiableView
  Collection<Target> targets();

  @ParseMethod
  private static Jump parse(Parser p1, Instruction.ParseContext ctx) {
    var postCfg = ctx.postCfg();
    var p = p1.withContext(ctx.inner());
    var p2 = p.withContext(new Target.ParseContext(postCfg, ctx));

    var s = p.scanner();

    var k = s.readIdentifierOrKeyword();
    return switch (k) {
      case "check" -> {
        var success = p2.parse(Target.class);
        s.assertAndSkip("else");
        var failure = p2.parse(Target.class);
        yield new Checkpoint(success, failure);
      }
      case "deopt" -> {
        var pc = s.readInt();
        var stack = p.parseList("[", "]", Argument.class);
        yield new Deopt(pc, stack);
      }
      case "if" -> {
        var cond = p.parse(Argument.class);
        s.assertAndSkip("then");
        var ifTrue = p2.parse(Target.class);
        s.assertAndSkip("else");
        var ifFalse = p2.parse(Target.class);
        yield new If(cond, ifTrue, ifFalse);
      }
      case "goto" -> {
        var target = p2.parse(Target.class);
        yield new Goto(target);
      }
      case "return" -> {
        var ret = p.parse(Argument.class);
        yield new Return(ret);
      }
      case "unreachable" -> new Unreachable();
      default -> throw s.fail("'check', 'deopt', 'if', 'goto', 'return' or 'unreachable'", k);
    };
  }
}
