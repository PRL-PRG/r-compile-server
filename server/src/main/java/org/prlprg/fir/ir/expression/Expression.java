package org.prlprg.fir.ir.expression;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.Optional;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.InlineCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.primitive.Names;
import org.prlprg.util.DeferredCallbacks;
import org.prlprg.util.Either;

public sealed interface Expression
    permits Call,
        Cast,
        Closure,
        Dup,
        Aea,
        Force,
        Load,
        MaybeForce,
        MkVector,
        Placeholder,
        Promise,
        ReflectiveLoad,
        ReflectiveStore,
        Store,
        SubscriptLoad,
        SubscriptStore,
        SuperLoad,
        SuperStore,
        Use {
  @UnmodifiableView
  Collection<Argument> arguments();

  /// @param headAsName An ugly workaround because the parser has no dynamic lookahead and we
  ///   must parse `r = e`: if you scan a valid variable name, you can set this to non-null and
  ///   the expression will parse continuing from there.
  record ParseContext(
      @Nullable String headAsName,
      CFG cfg,
      DeferredCallbacks<Module> postModule,
      @Nullable Object inner) {}

  @ParseMethod
  private static Expression parse(Parser p1, ParseContext ctx) {
    var headAsName = ctx.headAsName;
    Argument headAsArg = null;
    NamedVariable headAsNv = null;
    var cfg = ctx.cfg;
    var scope = cfg.scope();
    var module = scope.module();
    var postModule = ctx.postModule;
    var p = p1.withContext(ctx.inner());
    var p2 = p.withContext(new Argument.ParseContext(scope));
    var p3 = p.withContext(new Variable.ParseContext(scope));

    var s = p.scanner();

    // Read `headAsName` or constant `headAsArg` (see [ParseContext#headAsName]).
    if (headAsName == null) {
      if (s.nextCharsAre("NULL")
          || s.nextCharsAre("TRUE")
          || s.nextCharsAre("FALSE")
          || s.nextCharsAre("NA_")
          || s.nextCharsAre("NaN")
          || s.nextCharSatisfies(Character::isDigit)
          || s.nextCharIs('-')
          || s.nextCharIs('\"')
          || s.nextCharIs('<')) {
        headAsArg = p2.parse(Argument.class);
      } else if (s.nextCharSatisfies(c -> c == '`' || Character.isJavaIdentifierStart(c))) {
        headAsName = s.nextCharIs('`') ? Names.read(s, true) : s.readJavaIdentifierOrKeyword();
      }
    }

    // If `headAsName` is set, it's either a register (variable `headAsArg`) or named variable
    // (`headAsNv`).
    if (headAsName != null) {
      if (scope.lookup(headAsName) instanceof Register target) {
        headAsArg = new Read(target);
      } else {
        headAsNv = Variable.named(headAsName);
      }
    }

    if (headAsName == null && headAsArg == null) {
      if (s.trySkip('_')) {
        return new Placeholder();
      }

      if (s.nextCharIs('(')) {
        var inlinee =
            p.withContext(new Abstraction.ParseContext(module, postModule, ctx.inner()))
                .parse(Abstraction.class);
        s.assertAndSkip("->");
        var arguments = p2.parseList("(", ")", Argument.class);
        return new Call(new InlineCallee(inlinee), arguments);
      }

      if (s.nextCharIs('[')) {
        var elements = p2.parseList("[", "]", Argument.class);
        return new MkVector(elements);
      }

      if (s.trySkip('^')) {
        var variable = p3.parse(NamedVariable.class);
        if (s.trySkip('=')) {
          var value = p2.parse(Argument.class);
          return new SuperStore(variable, value);
        }
        return new SuperLoad(variable);
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
        var code =
            p.withContext(new CFG.ParseContext(scope, postModule, ctx.inner())).parse(CFG.class);
        s.assertAndSkip('}');

        return new Promise(valueType, effects, code);
      }

      if (s.trySkip("dyn<")) {
        var variable = p3.parse(NamedVariable.class);
        var argumentNames =
            s.nextCharIs('[') ? p.parseList("[", "]", String.class) : ImmutableList.<String>of();
        s.assertAndSkip('>');
        var arguments = p2.parseList("(", ")", Argument.class);
        return new Call(new DynamicCallee(variable, argumentNames), arguments);
      }

      if (s.trySkip("force ")) {
        var value = p2.parse(Argument.class);
        return new Force(value);
      }

      if (s.trySkip("force? ")) {
        var value = p2.parse(Argument.class);
        return new MaybeForce(value);
      }

      if (s.trySkip("use ")) {
        var value = p3.parse(Register.class);
        return new Use(value);
      }

      if (s.trySkip("dup ")) {
        var value = p2.parse(Argument.class);
        return new Dup(value);
      }
    } else {
      if (s.nextCharIs('.') || s.nextCharIs('<') || s.nextCharIs('(')) {
        if (headAsName == null) {
          throw s.fail("in 'f...(...)', 'f' must be a valid identifier");
        }

        // Static or dispatch call
        var functionName = headAsName;
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
        var arguments = p1.parseList("(", ")", Argument.class);

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
        if (headAsNv == null) {
          throw s.fail("In 'r = x = ...', 'x' must be a named variable (not a register)");
        }

        var value = p2.parse(Argument.class);
        return new Store(headAsNv, value);
      } else if (s.trySkip('$')) {
        if (headAsArg == null) {
          throw s.fail("In 'e$...', 'e' must be a register (or constant)");
        }

        var variable = p3.parse(NamedVariable.class);
        if (s.trySkip('=')) {
          var value = p2.parse(Argument.class);
          return new ReflectiveStore(headAsArg, variable, value);
        } else {
          return new ReflectiveLoad(headAsArg, variable);
        }
      } else if (s.trySkip('[')) {
        if (headAsArg == null) {
          throw s.fail("In 'e[...]', 'e' must be a register (or constant)");
        }

        var subscript = p2.parse(Argument.class);
        s.assertAndSkip(']');
        if (s.trySkip('=')) {
          var value = p2.parse(Argument.class);
          return new SubscriptStore(headAsArg, subscript, value);
        } else {
          return new SubscriptLoad(headAsArg, subscript);
        }
      }
      if (headAsArg != null) {
        return new Aea(headAsArg);
      } else {
        // `headAsNv` is guaranteed to be non-null here (see the above
        // `if (headAsName != null) ...`). IntelliJ suppresses the null warning.
        return new Load(headAsNv);
      }
    }

    throw s.fail("unknown expression");
  }
}
