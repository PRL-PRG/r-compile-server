package org.prlprg.fir.ir.instruction;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.Load.LoadType;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.Store.StoreType;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.Scanner;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.Names;
import org.prlprg.util.Characters;

/// Central printing and parsing for [Statement]s and [Jump]s, interleaving the argument-free
/// [org.prlprg.fir.ir.expression.Expression]/[JumpExpression] metadata with the instruction's
/// flat argument list to reproduce the textual FIŘ form.
public final class IrText {
  private IrText() {}

  /// Print a statement's operation, reading operands from its arguments.
  static void printExpression(Printer p, Statement statement) {
    var w = p.writer();
    var args = statement.args();
    switch (statement.expression()) {
      case Call(var callee) -> {
        switch (callee) {
          case StaticFnCallee(var functionRef, var isDispatch, var signature) -> {
            p.print(functionRef.get().name());
            if (isDispatch) {
              w.write('%');
            }
            var closureWithEnv = args.get(0);
            if (!closureWithEnv.equals(Constant.ELIDED_CLOSURE)) {
              w.write('@');
              p.print(closureWithEnv);
            }
            w.write("< ");
            p.print(signature);
            w.write(" >");
            p.printAsList("(", ")", args.subList(1, args.size()));
          }
          case DynamicCallee(var callArgumentNames) -> {
            w.write("dyn ");
            p.print(args.get(0));
            if (callArgumentNames.stream().anyMatch(OptionalNamedVariable::isPresent)) {
              p.printAsList("[", "]", callArgumentNames);
            }
            p.printAsList("(", ")", args.subList(1, args.size()));
          }
        }
      }
      case Store(var type, var variable) -> {
        w.write(
            switch (type) {
              case LOCAL_VAR -> "st ";
              case SUPER_VAR -> "st-super ";
            });
        p.print(variable);
        w.write(" = ");
        p.print(args.get(0));
      }
      case Load(var type, var variable) -> {
        w.write(
            switch (type) {
              case LOCAL_VAR -> "ld ";
              case SUPER_VAR -> "ld-super ";
              case LOCAL_FUN -> "ldf ";
              case GLOBAL_FUN -> "ldf-glob ";
              case BASE_FUN -> "ldf-base ";
            });
        p.print(variable);
      }
      case Force(var isMaybe) -> {
        w.write(isMaybe ? "force? " : "force ");
        p.print(args.get(0));
      }
      case Cast(var type) -> {
        p.print(args.get(0));
        w.write(" as ");
        p.print(type);
      }
      case Closure(var isStatic, var codeRef) -> {
        w.write("clos");
        if (isStatic) {
          w.write("-static");
        }
        w.write(' ');
        p.print(codeRef.get().name());
      }
      case MkVector(var kind, var elementNames) -> {
        p.print(kind);
        var elements = new ArrayList<NamedArgument>(args.size());
        for (var i = 0; i < args.size(); i++) {
          elements.add(new NamedArgument(elementNames.get(i), args.get(i)));
        }
        p.printAsList("[", "]", elements);
      }
      case MkEnv _ -> w.write("mkenv");
      case PopEnv _ -> w.write("popenv");
      case Noop _ -> w.write("noop");
      case Dup _ -> {
        w.write("dup ");
        p.print(args.get(0));
      }
      case SubscriptRead _ -> {
        p.print(args.get(0));
        w.write("[");
        p.print(args.get(1));
        w.write("]");
      }
      case SubscriptWrite _ -> {
        p.print(args.get(0));
        w.write("[");
        p.print(args.get(1));
        w.write("] = ");
        p.print(args.get(2));
      }
      case ReflectiveLoad(var variable) -> {
        p.print(args.get(0));
        w.write("$");
        p.print(variable);
      }
      case ReflectiveStore(var variable) -> {
        p.print(args.get(0));
        w.write("$");
        p.print(variable);
        w.write(" = ");
        p.print(args.get(1));
      }
      case Assume(var assumption) -> printAssume(p, assumption, args);
      case Promise(var valueType, var effects, var code) -> {
        w.write("prom<");
        p.print(valueType);
        w.write(' ');
        p.print(effects);
        w.write(">{\n");
        p.print(code);
        w.write("\n}");
      }
    }
  }

  private static void printAssume(Printer p, Assumption assumption, List<Argument> args) {
    var w = p.writer();
    switch (assumption) {
      case AssumeType(var type) -> {
        p.print(args.get(0));
        w.write(" ?: ");
        p.print(type);
      }
      case AssumeConstant(var constant) -> {
        p.print(args.get(0));
        w.write(" ?= ");
        p.print(constant);
      }
      case AssumeFunction(var functionRef) -> {
        p.print(args.get(0));
        w.write(" ?- ");
        p.print(functionRef.get().name());
      }
      case AssumeLoadFun(var variable, var functionRef) -> {
        w.write("ldf ");
        p.print(variable);
        w.write(" ?- ");
        p.print(functionRef.get().name());
      }
      case AssumeLoadVar(var variable, var constant) -> {
        w.write("ld ");
        p.print(variable);
        w.write(" ?= ");
        p.print(constant);
      }
    }
  }

  /// Print a jump's operation, reading operands from its arguments and targets.
  static void printJump(Printer p, Jump jump) {
    var w = p.writer();
    var targets = jump.targets();
    switch (jump.expression()) {
      case Goto _ -> {
        w.write("goto ");
        p.print(targets.get(0));
      }
      case If _ -> {
        w.write("if ");
        p.print(jump.arg(0));
        w.write(" then ");
        p.print(targets.get(0));
        w.write(" else ");
        p.print(targets.get(1));
      }
      case Checkpoint _ -> {
        w.write("check ");
        p.print(targets.get(0));
        w.write(" else ");
        p.print(targets.get(1));
      }
      case Deopt(var pc) -> {
        w.write("deopt ");
        w.write(String.valueOf(pc));
        w.write(" ");
        p.printAsList("[", "]", jump.args());
      }
      case Return _ -> {
        w.write("return ");
        p.print(jump.arg(0));
      }
      case Raise _ -> {
        w.write("raise ");
        p.print(jump.arg(0));
      }
      case Unreachable _ -> w.write("unreachable");
    }
  }

  // region parsing

  /// An expression together with the flat argument list that lives on its owning instruction. A
  /// `null` [#expression] signals the legacy forwarding form `r = <arg>` (old `Aea`): there is no
  /// expression, just the single bare argument in [#args], which the caller inlines as an alias.
  private record ParsedExpr(@Nullable Expression expression, List<Argument> args) {}

  /// Parse a single instruction (statement or jump), including any leading comments. Returns `null`
  /// when the statement was a legacy forwarding binding (`r = <arg>`), which emits no instruction.
  ///
  /// `p`'s context must be the [FirParseContext] for the enclosing abstraction body.
  public static @Nullable Instruction parseInstruction(Parser p, FirParseContext ctx) {
    var s = p.scanner();
    var comments = p.parse(Comments.class);
    return startsJump(s) ? parseJump(p, ctx, comments) : parseStatement(p, ctx, comments);
  }

  /// Whether the upcoming keyword begins a [Jump] rather than a [Statement]. Mirrors the textual
  /// terminators, excluding the case where the keyword is actually an assignee (`goto = ...`).
  private static boolean startsJump(Scanner s) {
    return (s.nextCharsAre("check ") && !s.nextCharsAre("check ="))
        || (s.nextCharsAre("deopt ") && !s.nextCharsAre("deopt ="))
        || (s.nextCharsAre("if ") && !s.nextCharsAre("if ="))
        || (s.nextCharsAre("goto ") && !s.nextCharsAre("goto ="))
        || (s.nextCharsAre("raise ") && !s.nextCharsAre("raise ="))
        || (s.nextCharsAre("return ") && !s.nextCharsAre("return ="))
        || (s.nextCharsAre("unreachable ") && !s.nextCharsAre("unreachable ="))
        || s.nextCharsAre("unreachable;");
  }

  private static @Nullable Statement parseStatement(
      Parser p, FirParseContext ctx, Comments comments) {
    var s = p.scanner();

    String assigneeName = null;
    Type assigneeType = null;
    String headName = null;
    if (s.nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))) {
      var nameHead = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
      if (s.trySkip(':')) {
        // A real register definition declares its type inline: `r0: T = <expr>`.
        assigneeName = nameHead;
        assigneeType = p.parse(Type.class);
        s.assertAndSkip('=');
      } else if (s.trySkip('=')) {
        // An untyped assignee: only legal as a legacy alias `r = <arg>` (handled below).
        assigneeName = nameHead;
      } else {
        headName = nameHead;
      }
    }

    var parsed = parseExpr(p, ctx, headName);

    // Legacy bare-argument statement (old `Aea`): no expression, just a single argument. The new IR
    // has no forwarding node, so it emits no statement. With an assignee (`r = <arg>`) the name is
    // bound and its uses resolve to (copies of) the argument; without one (a discarded result, e.g.
    // `40;`) it is simply dropped. A bare argument cannot be a real register (there is no
    // expression
    // for it to inhabit), so a type annotation here is meaningless.
    if (parsed.expression() == null) {
      if (assigneeType != null) {
        throw s.fail("a bare argument cannot be a typed register definition: " + assigneeName);
      }
      if (assigneeName != null) {
        ctx.bindAlias(assigneeName, parsed.args().get(0));
      }
      return null;
    }

    var statement = new Statement(comments, parsed.expression(), parsed.args());
    if (assigneeName != null) {
      if (assigneeType == null) {
        throw s.fail("register definition needs an inline type (`" + assigneeName + ": T = ...`)");
      }
      var assignee = statement.setAssignee(assigneeName, assigneeType);
      ctx.define(assigneeName, assignee);
    }
    return statement;
  }

  private static Jump parseJump(Parser p, FirParseContext ctx, Comments comments) {
    var s = p.scanner();
    var k = s.readIdentifierOrKeyword();
    return switch (k) {
      case "check" -> {
        var success = parseTarget(p, ctx);
        s.assertAndSkip("else");
        var failure = parseTarget(p, ctx);
        var args = new ArrayList<Argument>();
        args.addAll(success.phiArgs());
        args.addAll(failure.phiArgs());
        yield new Jump(
            comments,
            new Checkpoint(success.bbRef(), failure.bbRef(), success.phiArgs().size()),
            args);
      }
      case "deopt" -> {
        var pc = s.readInt();
        var stack = p.parseList("[", "]", Argument.class);
        yield new Jump(comments, new Deopt(pc), new ArrayList<>(stack));
      }
      case "if" -> {
        var cond = p.parse(Argument.class);
        s.assertAndSkip("then");
        var ifTrue = parseTarget(p, ctx);
        s.assertAndSkip("else");
        var ifFalse = parseTarget(p, ctx);
        var args = new ArrayList<Argument>();
        args.add(cond);
        args.addAll(ifTrue.phiArgs());
        args.addAll(ifFalse.phiArgs());
        yield new Jump(
            comments, new If(ifTrue.bbRef(), ifFalse.bbRef(), ifTrue.phiArgs().size()), args);
      }
      case "goto" -> {
        var target = parseTarget(p, ctx);
        yield new Jump(comments, new Goto(target.bbRef()), new ArrayList<>(target.phiArgs()));
      }
      case "raise" -> {
        var arg = p.parse(Argument.class);
        yield new Jump(comments, new Raise(), new ArrayList<>(List.of(arg)));
      }
      case "return" -> {
        var arg = p.parse(Argument.class);
        yield new Jump(comments, new Return(), new ArrayList<>(List.of(arg)));
      }
      case "unreachable" -> new Jump(comments, new Unreachable(), new ArrayList<>());
      default ->
          throw s.fail("'check', 'deopt', 'if', 'goto', 'raise', 'return' or 'unreachable'", k);
    };
  }

  /// Parse a jump target: a (possibly forward-referenced) block label and its phi arguments.
  private static Target parseTarget(Parser p, FirParseContext ctx) {
    var s = p.scanner();
    var label = s.readIdentifierOrKeyword();
    var bb = ctx.cfg().getOrAddBB(label);
    var phiArgs = p.parseList("(", ")", Argument.class);
    return new Target(bb, ImmutableList.copyOf(phiArgs));
  }

  /// Parse an expression and its arguments. `headName`, if non-null, is an identifier already read
  /// from the input that begins the expression (an ugly necessity because the grammar has no
  /// lookahead and we must commit to reading `r =` before knowing whether `r` is an assignee).
  private static ParsedExpr parseExpr(Parser p, FirParseContext ctx, @Nullable String headName) {
    var s = p.scanner();
    Argument headArg = null;

    if (headName == null) {
      if (s.nextCharSatisfies(Character::isDigit)
          || s.nextCharIs('-')
          || s.nextCharIs('"')
          || s.nextCharIs('<')) {
        headArg = p.parse(Argument.class);
      } else if (s.nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))) {
        headName = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
      }
    }

    if (headName != null) {
      switch (headName) {
        case "noop":
          return new ParsedExpr(new Noop(), List.of());
        case "clos":
          {
            var isStatic = s.trySkip("-static");
            var codeRef = parseFunctionRef(p, ctx);
            return new ParsedExpr(new Closure(isStatic, codeRef), List.of());
          }
        case "dup":
          {
            var value = p.parse(Argument.class);
            return new ParsedExpr(new Dup(), List.of(value));
          }
        case "dyn":
          {
            var actualCallee = p.parse(Argument.class);
            var argumentNames =
                s.nextCharIs('[')
                    ? ImmutableList.copyOf(p.parseList("[", "]", OptionalNamedVariable.class))
                    : ImmutableList.<OptionalNamedVariable>of();
            var arguments = p.parseList("(", ")", Argument.class);
            var args = new ArrayList<Argument>();
            args.add(actualCallee);
            args.addAll(arguments);
            return new ParsedExpr(new Call(new DynamicCallee(argumentNames)), args);
          }
        case "force":
          {
            var isMaybe = s.trySkip('?');
            var value = p.parse(Argument.class);
            return new ParsedExpr(new Force(isMaybe), List.of(value));
          }
        case "ldf":
          {
            var type = LoadType.LOCAL_FUN;
            if (s.trySkip("-glob")) {
              type = LoadType.GLOBAL_FUN;
            } else if (s.trySkip("-base")) {
              type = LoadType.BASE_FUN;
            }
            var variable = p.parse(NamedVariable.class);
            if (type == LoadType.LOCAL_FUN
                && s.runWithWhitespacePolicy(
                    SkipWhitespace.ALL_EXCEPT_NEWLINES, () -> s.trySkip("?- "))) {
              return new ParsedExpr(
                  new Assume(new AssumeLoadFun(variable, parseFunctionRef(p, ctx))), List.of());
            }
            return new ParsedExpr(new Load(type, variable), List.of());
          }
        case "ld":
          {
            var type = LoadType.LOCAL_VAR;
            if (s.trySkip("-super")) {
              type = LoadType.SUPER_VAR;
            }
            var variable = p.parse(NamedVariable.class);
            if (type == LoadType.LOCAL_VAR
                && s.runWithWhitespacePolicy(
                    SkipWhitespace.ALL_EXCEPT_NEWLINES, () -> s.trySkip("?= "))) {
              return new ParsedExpr(
                  new Assume(new AssumeLoadVar(variable, p.parse(Value.class))), List.of());
            }
            return new ParsedExpr(new Load(type, variable), List.of());
          }
        case "mkenv":
          return new ParsedExpr(new MkEnv(), List.of());
        case "popenv":
          return new ParsedExpr(new PopEnv(), List.of());
        case "prom":
          {
            s.assertAndSkip('<');
            var valueType = p.parse(Type.class);
            var effects = p.parse(Effects.class);
            s.assertAndSkip('>');
            s.assertAndSkip('{');
            var promiseCfg = new CFG(ctx.cfg().scope());
            var childCtx = ctx.withCfg(promiseCfg);
            promiseCfg.parseInto(p.withContext(childCtx), childCtx);
            s.assertAndSkip('}');
            return new ParsedExpr(new Promise(valueType, effects, promiseCfg), List.of());
          }
        case "st":
          {
            var type = StoreType.LOCAL_VAR;
            if (s.trySkip("-super")) {
              type = StoreType.SUPER_VAR;
            }
            var variable = p.parse(NamedVariable.class);
            s.assertAndSkip('=');
            var value = p.parse(Argument.class);
            return new ParsedExpr(new Store(type, variable), List.of(value));
          }
        case "consume":
          {
            var register = ctx.resolveRegister(readRegisterName(s), s);
            headArg = new Consume(register);
            break;
          }
        case "v":
          {
            s.assertAndSkip('(');
            var primitiveKind = p.parse(PrimitiveKind.class);
            s.assertAndSkip(')');
            return mkVector(p, new Kind.PrimitiveVector(false, primitiveKind));
          }
        case "v1":
          {
            s.assertAndSkip('(');
            var primitiveKind = p.parse(PrimitiveKind.class);
            s.assertAndSkip(')');
            return mkVector(p, new Kind.PrimitiveVector(true, primitiveKind));
          }
        case "dots":
          return mkVector(p, new Kind.Dots());
        default:
          if (Names.isReserved(headName)) {
            headArg = new Constant(Parser.fromString(headName, Value.class));
          } else if (ctx.isInScope(headName)) {
            headArg = ctx.resolveUse(headName, s);
          }
      }
    }

    if (headName != null || headArg != null) {
      if (s.trySkip('$')) {
        var headArg1 = requireHead(headArg, s, "a$...");
        var variable = p.parse(NamedVariable.class);
        if (s.trySkip('=')) {
          var value = p.parse(Argument.class);
          return new ParsedExpr(new ReflectiveStore(variable), List.of(headArg1, value));
        }
        return new ParsedExpr(new ReflectiveLoad(variable), List.of(headArg1));
      } else if (s.trySkip('[')) {
        var headArg1 = requireHead(headArg, s, "a[...]");
        var subscript = p.parse(Argument.class);
        s.assertAndSkip(']');
        if (s.trySkip('=')) {
          var value = p.parse(Argument.class);
          return new ParsedExpr(new SubscriptWrite(), List.of(headArg1, subscript, value));
        }
        return new ParsedExpr(new SubscriptRead(), List.of(headArg1, subscript));
      } else if (s.trySkip("as ")) {
        var headArg1 = requireHead(headArg, s, "a as t");
        var type = p.parse(Type.class);
        return new ParsedExpr(new Cast(type), List.of(headArg1));
      } else if (s.trySkip("?:")) {
        var headArg1 = requireHead(headArg, s, "a ?: t");
        var type = p.parse(Type.class);
        return new ParsedExpr(new Assume(new AssumeType(type)), List.of(headArg1));
      } else if (s.trySkip("?- ")) {
        var headArg1 = requireHead(headArg, s, "a ?- f");
        return new ParsedExpr(
            new Assume(new AssumeFunction(parseFunctionRef(p, ctx))), List.of(headArg1));
      } else if (s.trySkip("?= ")) {
        var headArg1 = requireHead(headArg, s, "a ?= c");
        var constant = p.parse(Value.class);
        return new ParsedExpr(new Assume(new AssumeConstant(constant)), List.of(headArg1));
      } else if (s.nextCharIs('%') || s.nextCharIs('@') || s.nextCharIs('<') || s.nextCharIs('(')) {
        if (headName == null) {
          throw s.fail("in 'f...(...)', 'f' must be a valid function name");
        }
        var functionRef = ctx.forFunctionRef().deferredLookup(Variable.named(headName));
        var isDispatch = s.trySkip('%');
        var closureWithEnv = s.trySkip('@') ? p.parse(Argument.class) : Constant.ELIDED_CLOSURE;
        if (s.nextCharIs('(')) {
          throw s.fail("can't call a function without a signature");
        }
        s.assertAndSkip('<');
        var signature = p.parse(Signature.class);
        s.assertAndSkip('>');
        var arguments = p.parseList("(", ")", Argument.class);
        var args = new ArrayList<Argument>();
        args.add(closureWithEnv);
        args.addAll(arguments);
        return new ParsedExpr(
            new Call(new StaticFnCallee(functionRef, isDispatch, signature)), args);
      }

      // No operator/call followed a bare register or constant head: this is the legacy forwarding
      // form `r = <arg>` (old `Aea`). Signal it with a null expression; the caller inlines it.
      if (headArg != null) {
        return new ParsedExpr(null, List.of(headArg));
      }
    }

    throw s.fail("expected an expression");
  }

  private static ParsedExpr mkVector(Parser p, Kind kind) {
    var elements = p.parseList("[", "]", NamedArgument.class);
    var elementNames = new ArrayList<@Nullable NamedVariable>(elements.size());
    var args = new ArrayList<Argument>(elements.size());
    for (var element : elements) {
      elementNames.add(element.name());
      args.add(element.argument());
    }
    return new ParsedExpr(new MkVector(kind, elementNames), args);
  }

  private static Argument requireHead(@Nullable Argument headArg, Scanner s, String form) {
    if (headArg == null) {
      throw s.fail("in '" + form + "', the head must be a register or constant");
    }
    return headArg;
  }

  private static FunctionRef parseFunctionRef(Parser p, FirParseContext ctx) {
    return p.withContext(ctx.forFunctionRef()).parse(FunctionRef.class);
  }

  private static String readRegisterName(Scanner s) {
    return s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
  }

  // endregion parsing
}
