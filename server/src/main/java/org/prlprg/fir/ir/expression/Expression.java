package org.prlprg.fir.ir.expression;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.Optional;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Characters;
import org.prlprg.util.DeferredCallbacks;
import org.prlprg.util.Either;

public sealed interface Expression
    permits Aea,
        Assume,
        Call,
        Cast,
        Closure,
        Dup,
        Force,
        Load,
        LoadFun,
        MaybeForce,
        MkEnv,
        MkVector,
        Placeholder,
        PopEnv,
        Promise,
        ReflectiveLoad,
        ReflectiveStore,
        Store,
        SubscriptRead,
        SubscriptWrite,
        SuperLoad,
        SuperStore {
  Expression NOOP = new Aea(new Constant(SEXPs.NULL));

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
    var cfg = ctx.cfg;
    var scope = cfg.scope();
    var module = scope.module();
    var postModule = ctx.postModule;
    var p = p1.withContext(ctx.inner());

    var s = p.scanner();

    // Read `headAsName` or constant non-identifier `headAsArg` (see [ParseContext#headAsName]).
    if (headAsName == null) {
      if (s.nextCharSatisfies(Character::isDigit)
          || s.nextCharIs('-')
          || s.nextCharIs('\"')
          || s.nextCharIs('<')) {
        headAsArg = p.parse(Argument.class);
      } else if (s.nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))) {
        headAsName = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
      }
    }

    if (headAsName != null) {
      switch (headAsName) {
        case "clos" -> {
          var functionName = p.parse(NamedVariable.class);

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
        case "dup" -> {
          var value = p.parse(Argument.class);
          return new Dup(value);
        }
        case "dyn" -> {
          var actualCallee = p.parse(Argument.class);
          var argumentNames =
              s.nextCharIs('[')
                  ? p.parseList("[", "]", OptionalNamedVariable.class)
                  : ImmutableList.<OptionalNamedVariable>of();
          var arguments = p.parseList("(", ")", Argument.class);
          return new Call(new DynamicCallee(actualCallee, argumentNames), arguments);
        }
        case "force" -> {
          var isMaybe = s.trySkip('?');
          var value = p.parse(Argument.class);
          return isMaybe ? new MaybeForce(value) : new Force(value);
        }
        case "ldf" -> {
          var variable = p.parse(NamedVariable.class);
          var env =
              s.runWithWhitespacePolicy(
                  SkipWhitespace.ALL_EXCEPT_NEWLINES,
                  () -> s.trySkip("in ") ? p.parse(Env.class) : Env.LOCAL);
          return new LoadFun(variable, env);
        }
        case "ld" -> {
          var variable = p.parse(NamedVariable.class);
          return new Load(variable);
        }
        case "mkenv" -> {
          return new MkEnv();
        }
        case "popenv" -> {
          return new PopEnv();
        }
        case "prom" -> {
          s.assertAndSkip('<');
          var valueType = p.parse(Type.class);
          var effects = p.parse(Effects.class);
          s.assertAndSkip('>');

          s.assertAndSkip('{');
          var code =
              p.withContext(new CFG.ParseContext(scope, postModule, ctx.inner())).parse(CFG.class);
          s.assertAndSkip('}');

          return new Promise(valueType, effects, code);
        }
        case "sld" -> {
          var variable = p.parse(NamedVariable.class);
          return new SuperLoad(variable);
        }
        case "st" -> {
          var variable = p.parse(NamedVariable.class);
          s.assertAndSkip('=');
          var value = p.parse(Argument.class);
          return new Store(variable, value);
        }
        case "sst" -> {
          var variable = p.parse(NamedVariable.class);
          s.assertAndSkip('=');
          var value = p.parse(Argument.class);
          return new SuperStore(variable, value);
        }
        case "use" -> {
          var variable = p.parse(Register.class);
          headAsArg = new Use(variable);
        }
        case "v" -> {
          s.assertAndSkip('(');
          var primitiveKind = p.parse(PrimitiveKind.class);
          s.assertAndSkip(')');
          var elements = p.parseList("[", "]", NamedArgument.class);
          return new MkVector(new Kind.PrimitiveVector(primitiveKind), elements);
        }
        case "dots" -> {
          var elements = p.parseList("[", "]", NamedArgument.class);
          return new MkVector(new Kind.Dots(), elements);
        }
        // Constant
        case String headAsName1 when Names.isReserved(headAsName1) ->
            headAsArg = new Constant(Parser.fromString(headAsName, SEXP.class));
        // Variable
        default -> {
          if (!headAsName.startsWith("`") && scope.contains(Variable.register(headAsName))) {
            headAsArg = new Read(Variable.register(headAsName));
          }
        }
      }
    }

    if (headAsName == null && headAsArg == null) {
      // Parse what doesn't start with a constant or identifier

      if (s.trySkip('_')) {
        return new Placeholder();
      }

    } else {
      // Parse what starts with a constant or identifier.
      // `headAsName != null` iff it starts with an identifier.
      // `headAsArg != null` iff it starts with an argument, which may be a constant or
      // identifier which happens to be a register.

      if (s.nextCharIs('.') || s.nextCharIs('<') || s.nextCharIs('(')) {
        if (headAsName == null) {
          throw s.fail("in 'f...(...)', 'f' must be a valid variable name");
        }

        // Static or dispatch call
        var functionName = Variable.named(headAsName);
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
        var arguments = p.parseList("(", ")", Argument.class);

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
      } else if (s.trySkip('$')) {
        if (headAsArg == null) {
          throw s.fail("In 'a$...', 'a' must be a register (or constant)");
        }

        var variable = p.parse(NamedVariable.class);
        if (s.trySkip('=')) {
          var value = p.parse(Argument.class);
          return new ReflectiveStore(headAsArg, variable, value);
        } else {
          return new ReflectiveLoad(headAsArg, variable);
        }
      } else if (s.trySkip('[')) {
        if (headAsArg == null) {
          throw s.fail("In 'a[...]', 'a' must be a register (or constant)");
        }

        var subscript = p.parse(Argument.class);
        s.assertAndSkip(']');
        if (s.trySkip('=')) {
          var value = p.parse(Argument.class);
          return new SubscriptWrite(headAsArg, subscript, value);
        } else {
          return new SubscriptRead(headAsArg, subscript);
        }
      } else if (s.trySkip("as ")) {
        if (headAsArg == null) {
          throw s.fail("In 'a as t', 'a' must be a register or constant");
        }

        var type = p.parse(Type.class);
        return new Cast(headAsArg, type);
      } else if (s.trySkip("?:")) {
        if (headAsArg == null) {
          throw s.fail("In 'a ?: t', 'a' must be a register or constant");
        }

        var type = p.parse(Type.class);
        return new AssumeType(headAsArg, type);
      } else if (s.trySkip("?- ")) {
        if (headAsArg == null) {
          throw s.fail("In 'a ?- t', 'a' must be a register or constant");
        }

        var functionName = p.parse(NamedVariable.class);

        // We must defer setting the function in case it's a forward reference.
        @SuppressWarnings("DataFlowIssue")
        var assume = new AssumeFunction(headAsArg, null);
        postModule.add(
            m -> {
              assert m == module;

              var function = m.lookupFunction(functionName);
              if (function == null) {
                throw s.fail(
                    "Assumption references a function that wasn't defined: " + functionName);
              }
              assume.unsafeSetFunction(function);
            });

        return assume;
      } else if (s.trySkip("?= ")) {
        if (headAsArg == null) {
          throw s.fail("In 'a ?= t', 'a' must be a register or constant");
        }

        var constant = p.parse(Constant.class);
        return new AssumeConstant(headAsArg, constant);
      } else if (headAsArg != null) {
        return new Aea(headAsArg);
      } else {
        throw s.fail("Not a keyword or in-scope register: '" + headAsName + "'");
      }
    }

    throw s.fail("unknown expression");
  }
}
