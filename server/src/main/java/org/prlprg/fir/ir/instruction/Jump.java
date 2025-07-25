package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;

public sealed interface Jump extends Instruction permits If, Goto, Return, Unreachable {
  @UnmodifiableView
  Collection<Target> targets();

  @ParseMethod
  private static Jump parse(Parser p1, Instruction.ParseContext ctx) {
    var postCfg = ctx.postCfg();
    var p = p1.withContext(ctx.inner());
    var p2 = p.withContext(new Target.ParseContext(postCfg, ctx));

    var s = p.scanner();

    if (s.trySkip("...")) {
      return new Unreachable();
    }

    var k = s.readJavaIdentifierOrKeyword();
    return switch (k) {
      case "if" -> {
        var cond = p1.parse(Expression.class);
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
        var ret = p1.parse(Expression.class);
        yield new Return(ret);
      }
      default -> throw s.fail("'if', 'goto', 'return' or '...'", k);
    };
  }
}
