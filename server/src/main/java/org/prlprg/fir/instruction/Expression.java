package org.prlprg.fir.instruction;

import org.prlprg.fir.cfg.expression.Dup;
import org.prlprg.fir.cfg.expression.Force;
import org.prlprg.fir.cfg.expression.MaybeForce;
import org.prlprg.fir.cfg.expression.MkVector;
import org.prlprg.fir.cfg.expression.SubscriptRead;
import org.prlprg.fir.cfg.expression.SubscriptWrite;
import org.prlprg.fir.cfg.expression.SuperRead;
import org.prlprg.fir.cfg.expression.SuperWrite;
import org.prlprg.fir.cfg.expression.Use;
import org.prlprg.fir.cfg.expression.Write;
import org.prlprg.fir.cfg.variable.NamedVariable;
import org.prlprg.fir.cfg.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.primitive.Names;

public non-sealed interface Expression extends Instruction {
  @ParseMethod
  private static Expression parse(Parser p) {
    var s = p.scanner();

    var result = parseHead(p);
    while (true) {
      if (s.trySkip('$')) {
        var variable = p.parse(NamedVariable.class);
        if (s.trySkip('=')) {
          var value = p.parse(Expression.class);
          result = new SuperWrite(variable, value);
        } else {
          result = new SuperRead(variable);
        }
      } else if (s.trySkip('[')) {
        var subscript = p.parse(Expression.class);
        s.assertAndSkip(']');
        if (s.trySkip('=')) {
          var value = p.parse(Expression.class);
          result = new SubscriptWrite(result, subscript, value);
        } else {
          result = new SubscriptRead(result, subscript);
        }
      } else {
        break;
      }
    }

    return result;
  }

  private static Expression parseHead(Parser p) {
    var s = p.scanner();

    if (s.nextCharIs('[')) {
      var elements = p.parseList("[", "]", Expression.class);
      return new MkVector(elements);
    }

    if (s.trySkip('^')) {
      var variable = p.parse(NamedVariable.class);
      if (s.trySkip('=')) {
        var value = p.parse(Expression.class);
        return new SuperWrite(variable, value);
      }
      return new SuperRead(variable);
    }

    if (s.trySkip("force ")) {
      var value = p.parse(Expression.class);
      return new Force(value);
    }

    if (s.trySkip("force? ")) {
      var value = p.parse(Expression.class);
      return new MaybeForce(value);
    }

    if (s.trySkip("use ")) {
      var value = p.parse(Register.class);
      return new Use(value);
    }

    if (s.trySkip("dup ")) {
      var value = p.parse(Dup.class);
      return new Dup(value);
    }

    if (Names.isValidStartChar(s.peekChar())) {
      var ident = Names.read(s, false);
      var variable = ident.startsWith("r") ? new Register(ident) : new NamedVariable(ident);
      if (s.trySkip('=')) {
        var value = p.parse(Expression.class);
        return new Write(variable, value);
      } else {
        return variable;
      }
    }

    throw s.fail("unknown start to expression");
  }
}
