package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.util.Characters;

public record Statement(
    @Override Comments comments, @Nullable Register assignee, Expression expression)
    implements Instruction {
  public static final Statement NOOP = new Statement(Expression.NOOP);

  public Statement(@Nullable Register assignee, Expression expression) {
    this(new Comments(), assignee, expression);
  }

  public Statement(Comments comments, Expression expression) {
    this(comments, null, expression);
  }

  public Statement(Expression expression) {
    this(new Comments(), null, expression);
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return expression.arguments();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(comments);
    if (assignee != null) {
      p.print(assignee);
      p.writer().write(" = ");
    }
    p.print(expression);
  }

  @ParseMethod
  private static Statement parse(Parser p1, ParseContext ctx) {
    var cfg = ctx.cfg();
    var postModule = ctx.postModule();
    var p = p1.withContext(ctx.inner());
    var p2 = p.withContext(new Expression.ParseContext(null, cfg, postModule, ctx.inner()));

    var s = p.scanner();

    var comments = p.parse(Comments.class);

    if (s.nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))) {
      var nameHead = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();

      if (s.trySkip('=')) {
        var assignee = Variable.register(nameHead);
        var expression = p2.parse(Expression.class);
        return new Statement(comments, assignee, expression);
      } else {
        return new Statement(
            comments,
            p.withContext(new Expression.ParseContext(nameHead, cfg, postModule, ctx.inner()))
                .parse(Expression.class));
      }
    } else {
      return new Statement(comments, p2.parse(Expression.class));
    }
  }
}
