package org.prlprg.fir.ir.instruction;

import com.google.common.collect.ImmutableList;
import java.util.Optional;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.InlineCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Either;

public sealed interface Expression extends Instruction
    permits Call,
        Cast,
        Closure,
        Dup,
        Force,
        Literal,
        MaybeForce,
        MkVector,
        Placeholder,
        Promise,
        Read,
        ReflectiveRead,
        ReflectiveWrite,
        SubscriptRead,
        SubscriptWrite,
        SuperRead,
        SuperWrite,
        Use,
        Write {
  @ParseMethod
  private static Expression parse(Parser p1, ParseContext ctx) {
    var p = p1.withContext(ctx.inner());
    var s = p1.scanner();

    var result = parseHead(p1, ctx);
    while (true) {
      if (s.trySkip('$')) {
        var variable = p.parse(NamedVariable.class);
        if (s.trySkip('=')) {
          var value = p1.parse(Expression.class);
          result = new SuperWrite(variable, value);
        } else {
          result = new SuperRead(variable);
        }
      } else if (s.trySkip('[')) {
        var subscript = p1.parse(Expression.class);
        s.assertAndSkip(']');
        if (s.trySkip('=')) {
          var value = p1.parse(Expression.class);
          result = new SubscriptWrite(result, subscript, value);
        } else {
          result = new SubscriptRead(result, subscript);
        }
      } else if (s.trySkip("as ")) {
        var type = p.parse(Type.class);
        result = new Cast(result, type);
      } else {
        break;
      }
    }

    return result;
  }

  private static Expression parseHead(Parser p1, ParseContext ctx) {
    var cfg = ctx.cfg();
    var scope = cfg.scope();
    var module = scope.module();
    var postModule = ctx.postModule();
    var p = p1.withContext(ctx.inner());

    var s = p.scanner();

    if (s.trySkip('_')) {
      return new Placeholder();
    }

    if (s.nextCharIs('(')) {
      var p2 = p.withContext(new Abstraction.ParseContext(module, postModule, ctx.inner()));
      var inlinee = p2.parse(Abstraction.class);
      s.assertAndSkip("->");
      var arguments = p1.parseList("(", ")", Expression.class);
      return new Call(new InlineCallee(inlinee), arguments);
    }

    if (s.nextCharIs('[')) {
      var elements = p1.parseList("[", "]", Expression.class);
      return new MkVector(elements);
    }

    if (s.trySkip('^')) {
      var variable = p.parse(NamedVariable.class);
      if (s.trySkip('=')) {
        var value = p1.parse(Expression.class);
        return new SuperWrite(variable, value);
      }
      return new SuperRead(variable);
    }

    if (s.trySkip("clos(")) {
      var functionName = p.parse(String.class);
      s.assertAndSkip(')');

      // We must defer setting the function in case it's a forward reference.
      @SuppressWarnings("DataFlowIssue")
      var result = new Closure(null);

      postModule.add(
          m -> {
            assert m == module;

            var function = m.lookupFunction(functionName);
            if (function == null) {
              throw s.fail("Callee references a function that wasn't defined: " + functionName);
            }

            result.unsafeSetCode(function);
          });

      return result;
    }

    if (s.trySkip("prom<")) {
      var valueType = p.parse(Type.class);
      var effects = p.parse(Effects.class);
      s.assertAndSkip('>');

      s.assertAndSkip('{');
      var p2 = p.withContext(new CFG.ParseContext(scope, postModule, ctx.inner()));
      var code = p2.parse(CFG.class);
      s.assertAndSkip('}');

      return new Promise(valueType, effects, code);
    }

    if (s.trySkip("dyn<")) {
      var variable = p.parse(NamedVariable.class);
      var argumentNames =
          s.nextCharIs('[') ? p.parseList("[", "]", String.class) : ImmutableList.<String>of();
      s.assertAndSkip('>');
      var arguments = p1.parseList("(", ")", Expression.class);
      return new Call(new DynamicCallee(variable, argumentNames), arguments);
    }

    if (s.trySkip("force ")) {
      var value = p1.parse(Expression.class);
      return new Force(value);
    }

    if (s.trySkip("force? ")) {
      var value = p1.parse(Expression.class);
      return new MaybeForce(value);
    }

    if (s.trySkip("use ")) {
      var value = p.parse(Register.class);
      return new Use(value);
    }

    if (s.trySkip("dup ")) {
      var value = p1.parse(Expression.class);
      return new Dup(value);
    }

    if (s.nextCharsAre("NULL")
        || s.nextCharsAre("TRUE")
        || s.nextCharsAre("FALSE")
        || s.nextCharsAre("NA_")
        || s.nextCharsAre("NaN")
        || s.nextCharSatisfies(Character::isDigit)
        || s.nextCharIs('-')
        || s.nextCharIs('\"')) {
      var value = p.parse(SEXP.class);
      return new Literal(value);
    }

    if (s.nextCharSatisfies(c -> c == '`' || Character.isJavaIdentifierStart(c))) {
      var variable = p.withContext(new Variable.ParseContext(scope)).parse(Variable.class);

      if (s.nextCharIs('.') || s.nextCharIs('<') || s.nextCharIs('(')) {
        // Static or dispatch call
        var functionName = variable.name();
        Either<Optional<Signature>, Integer> version;
        if (s.trySkip('.')) {
          version = Either.right(s.readUInt());
        } else if (s.trySkip('<')) {
          var signature = p.parse(Signature.class);
          s.assertAndSkip('>');
          version = Either.left(Optional.of(signature));
        } else {
          version = Either.left(Optional.empty());
        }
        var arguments = p1.parseList("(", ")", Expression.class);

        // We must defer setting the function in case it's a forward reference.
        @SuppressWarnings("DataFlowIssue")
        var result = new Call(null, arguments);

        postModule.add(
            m -> {
              assert m == module;

              var function = m.lookupFunction(functionName);
              if (function == null) {
                throw s.fail("Callee references a function that wasn't defined: " + functionName);
              }
              var callee =
                  version.destruct(
                      signature -> new DispatchCallee(function, signature.orElse(null)),
                      index -> new StaticCallee(function, function.version(index)));

              result.unsafeSetCallee(callee);
            });

        return result;
      } else if (s.trySkip('=')) {
        var value = p1.parse(Expression.class);
        return new Write(variable, value);
      } else {
        return new Read(variable);
      }
    }

    throw s.fail("unknown start to expression");
  }
}
