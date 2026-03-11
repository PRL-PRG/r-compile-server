package org.prlprg.fir.ir.expression;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.Optional;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Noop;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.Names;
import org.prlprg.util.Characters;
import org.prlprg.util.Either;
import org.prlprg.util.NotImplementedError;

@Immutable
public sealed interface Expression
    permits Aea,
        Assume,
        Call,
        Cast,
        Closure,
        Dup,
        Force,
        Load,
        MkEnv,
        MkVector,
        PopEnv,
        Promise,
        ReflectiveLoad,
        ReflectiveStore,
        Store,
        SubscriptRead,
        SubscriptWrite {
  Expression NOOP = new Aea(new Noop());

  @UnmodifiableView
  Collection<Argument> arguments();

  /// @param headAsName An ugly workaround because the parser has no dynamic lookahead and we
  ///   must parse `r = e`: if you scan a valid variable name, you can set this to non-null and
  ///   the expression will parse continuing from there.
  record ParseContext(
      @Nullable String headAsName,
      CFG cfg,
      FunctionRef.ParseContext forFunctionRef,
      @Nullable Object inner) {}

  @ParseMethod
  private static Expression parse(Parser p1, ParseContext ctx) {
    var headAsName = ctx.headAsName;
    Argument headAsArg = null;
    var cfg = ctx.cfg;
    var scope = cfg.scope();
    var module = scope.module();
    var p = p1.withContext(ctx.inner);
    var p2 = p.withContext(ctx.forFunctionRef);

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
        case "noop" -> new Noop();
        case "clos" -> new Closure(p2.parse(FunctionRef.class));
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
          return new Force(isMaybe, value);
        }
        case "ldf" -> {
          var type = LoadType.LOCAL_FUN;
          if (s.trySkip("-glob")) {
            type = LoadType.GLOBAL_FUN;
          } else if (s.trySkip("-base")) {
            type = LoadType.BASE_FUN;
          }

          var variable = p.parse(NamedVariable.class);

          // Check for AssumeLoadFun syntax: `ldf <variable> ?- <functionName>`
          if (type == LoadType.LOCAL_FUN
              && s.runWithWhitespacePolicy(
                  SkipWhitespace.ALL_EXCEPT_NEWLINES, () -> s.trySkip("?- "))) {
            return new Assume(new AssumeLoadFun(variable, p2.parse(FunctionRef.class)));
          }

          return new Load(type, variable);
        }
        case "ld" -> {
          var type = LoadType.LOCAL_VAR;
          if (s.trySkip("-super")) {
            type = LoadType.SUPER_VAR;
          }

          var variable = p.parse(NamedVariable.class);
          return new Load(type, variable);
        }
        case "mkenv" -> new MkEnv();
        case "popenv" -> new PopEnv();
        case "prom" -> {
          s.assertAndSkip('<');
          var valueType = p.parse(Type.class);
          var effects = p.parse(Effects.class);
          s.assertAndSkip('>');

          s.assertAndSkip('{');
          var code =
              p.withContext(new CFG.ParseContext(scope, ctx.forFunctionRef, ctx.inner()))
                  .parse(CFG.class);
          s.assertAndSkip('}');

          return new Promise(valueType, effects, code);
        }
        case "st" -> {
          var type = StoreType.LOCAL_VAR;
          if (s.trySkip("-super")) {
            type = StoreType.SUPER_VAR;
          }

          var variable = p.parse(NamedVariable.class);
          s.assertAndSkip('=');
          var value = p.parse(Argument.class);
          return new Store(type, variable, value);
        }
        case "consume" -> {
          var variable = p.parse(Register.class);
          headAsArg = new Consume(variable);
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
            headAsArg = new Constant(Parser.fromString(headAsName, Value.class));
        // Variable
        default -> {
          if (!headAsName.startsWith("`")
              && Register.isValid(headAsName)
              && scope.contains(Variable.register(headAsName))) {
            headAsArg = new Read(Variable.register(headAsName));
          }
        }
      }
    }

    if (headAsName != null || headAsArg != null) {
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
        // TODO: maybe refactor versions
        throw new NotImplementedError();

        /* var arguments = p.parseList("(", ")", Argument.class);

        var result = new Call(callee, arguments);

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

        return result; */
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
        return new Assume(new AssumeType(headAsArg, type));
      } else if (s.trySkip("?- ")) {
        if (headAsArg == null) {
          throw s.fail("In 'a ?- t', 'a' must be a register or constant");
        }

        return new Assume(new AssumeFunction(headAsArg, p2.parse(FunctionRef.class)));
      } else if (s.trySkip("?= ")) {
        if (headAsArg == null) {
          throw s.fail("In 'a ?= t', 'a' must be a register or constant");
        }

        var constant = p.parse(Value.class);
        return new Assume(new AssumeConstant(headAsArg, constant));
      } else if (headAsArg != null) {
        return new Aea(headAsArg);
      } else {
        throw s.fail("Not a keyword or in-scope register: '" + headAsName + "'");
      }
    }

    throw s.fail("unknown expression");
  }
}
