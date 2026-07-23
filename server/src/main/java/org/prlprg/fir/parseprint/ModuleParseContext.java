package org.prlprg.fir.parseprint;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
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
import org.prlprg.fir.ir.expression.MkEnv.MkEnvType;
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
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Raise;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Scanner;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.primitive.Names;
import org.prlprg.util.Characters;

/// Parses [Module]s: the outermost FIŘ parse context.
///
/// A module needs nothing from its surroundings, so this context has no fields. [Module] itself
/// only declares a context-free parse method that forwards here, so `p.parse(Module.class)` works
/// without the caller having to name this class.
///
/// Everything inside a module is parsed by a nested context, each of which adds exactly what the
/// level below it needs:
///
///   - [FunctionParseContext] — a module's [Function]s (and the [FunctionRef]s they contain);
///   - [FunctionParseContext.AbstractionParseContext] — a function's versions ([Abstraction]s);
///   - [FunctionParseContext.AbstractionParseContext.BodyParseContext] — a version's body: its
///     [CFG]'s blocks, instructions, and arguments.
public final class ModuleParseContext {
  @ParseMethod
  private Module parseModule(Parser p) {
    var s = p.scanner();
    var module = new Module();
    var forFunctions = new FunctionParseContext(module);
    var p2 = p.withContext(forFunctions);

    while (!s.isAtEof() && !s.nextCharIs('}')) {
      module.addFunction(p2.parse(Function.class));
    }

    forFunctions.resolveDeferredFunctions(s);

    return module;
  }

  /// Parses the [Function]s of a specific [Module], and the [FunctionRef]s within them.
  ///
  /// A function reference may point forward (to a recursive, mutually-recursive, or simply
  /// later-defined function), so references are resolved lazily: [#deferredLookup] hands out one
  /// unset [FunctionRef] per name, and [#resolveDeferredFunctions] binds them all once every
  /// function is parsed. Because of this, one instance must be shared by every function in the
  /// module.
  public static final class FunctionParseContext {
    private final Module module;
    private final Map<NamedVariable, FunctionRef> deferredFunctions = new LinkedHashMap<>();

    public FunctionParseContext(Module module) {
      this.module = module;
    }

    /// The (possibly not-yet-resolved) reference to the function named `name`, creating it if this
    /// is the first reference.
    public FunctionRef deferredLookup(NamedVariable name) {
      return deferredFunctions.computeIfAbsent(name, _ -> new FunctionRef());
    }

    /// Every function referenced so far, and the reference handed out for it.
    public @UnmodifiableView Map<NamedVariable, FunctionRef> deferredFunctions() {
      return Collections.unmodifiableMap(deferredFunctions);
    }

    /// Bind every reference handed out by [#deferredLookup] to the function it names.
    ///
    /// @throws org.prlprg.parseprint.ParseException If a referenced function isn't in the module
    ///   or an enclosing one (the builtin and intrinsic modules).
    public void resolveDeferredFunctions(Scanner s) {
      for (var entry : deferredFunctions.entrySet()) {
        var function = module.lookupFunction(entry.getKey());
        if (function == null) {
          throw s.fail("function not found: " + entry.getKey());
        }
        entry.getValue().set(function);
      }
    }

    /// A context for one of this module's versions, with a fresh register namespace.
    public AbstractionParseContext forAbstraction() {
      return new AbstractionParseContext();
    }

    @ParseMethod
    private Function parseFunction(Parser p) {
      var s = p.scanner();

      var comments = p.parse(Comments.class);

      var strict = false;
      if (s.trySkip('@')) {
        switch (s.readIdentifierOrKeyword()) {
          case "strict" -> strict = true;
          case String unknown -> throw s.fail("unknown user property: @" + unknown);
        }
      }

      s.assertAndSkip("fun ");
      var name = p.parse(NamedVariable.class);
      var parameterNames = List.copyOf(p.parseList("(", ")", NamedVariable.class));

      // Versions are stored by index, and a removed version leaves a gap (so the versions after it
      // keep their indices, which serialized calls may refer to).
      var versions = new LinkedHashMap<Integer, Abstraction>();
      var nextVersionIndex = 0;
      s.assertAndSkip('{');
      for (; !s.nextCharIs('}'); nextVersionIndex++) {
        // A removed version: skip it but still advance the index (hence the unusual `for`).
        if (s.trySkip("<removed>")) {
          if (versions.isEmpty()) {
            throw s.fail("function's baseline can't be removed");
          }
          continue;
        }

        versions.put(nextVersionIndex, p.withContext(forAbstraction()).parse(Abstraction.class));
      }
      if (versions.isEmpty()) {
        throw s.fail("function must have at least one version (the baseline)");
      }
      s.assertAndSkip('}');

      var function = new Function(module, name, parameterNames, versions, nextVersionIndex);
      function.comments().addAll(comments);
      function.userProperties().setStrict(strict);
      return function;
    }

    /// Parses one version ([Abstraction]) of a [Function], including its body.
    ///
    /// Registers are identity objects, so the textual form refers to them by name and the parser
    /// must resolve those names back to the (single) [Register] each one defines. This context
    /// carries that namespace:
    ///
    ///   - [#registers] the name → [Register] map, populated as definitions (parameters, phi
    ///     parameters, assignees) are parsed and consulted when a use is parsed. Because the
    ///     printed form is dominator-ordered and a definition dominates its uses, every definition
    ///     is parsed before any use, so no forward references are needed here;
    ///   - [#aliases] name → [Argument] bindings for the legacy forwarding form `r = <arg>` (the
    ///     old `Aea` expression). The new IR has no forwarding node, so such a binding emits no
    ///     statement; instead every use of `r` is replaced by (a fresh copy of) the bound argument.
    ///     This keeps the parser accepting the same textual form even though the IR no longer
    ///     represents it.
    ///
    /// The namespace spans the whole version, so it's shared by the [BodyParseContext] of the
    /// version's body *and* of every nested promise.
    public final class AbstractionParseContext {
      private final Map<String, Register> registers = new HashMap<>();
      private final Map<String, Argument> aliases = new HashMap<>();

      private AbstractionParseContext() {}

      /// Record a register definition under its name (overriding any prior definition or alias).
      private void define(String name, Register register) {
        registers.put(name, register);
        aliases.remove(name);
      }

      /// Record a legacy forwarding binding `name = argument` (overriding any prior
      /// definition/alias).
      private void bindAlias(String name, Argument argument) {
        aliases.put(name, argument);
        registers.remove(name);
      }

      private boolean isInScope(String name) {
        return registers.containsKey(name) || aliases.containsKey(name);
      }

      /// Resolve a register *use* to an argument: a fresh [Read] of its definition, or (a fresh
      /// copy of) the argument it was forward-bound to.
      ///
      /// @throws org.prlprg.parseprint.ParseException If the name is not in scope.
      private Argument resolveUse(String name, Scanner s) {
        var alias = aliases.get(name);
        if (alias != null) {
          return freshUse(alias);
        }
        var register = registers.get(name);
        if (register != null) {
          return new Read(register);
        }
        throw s.fail("register not in scope: " + name);
      }

      /// Resolve a name that must denote a [Register] (e.g. the operand of `consume`).
      ///
      /// @throws org.prlprg.parseprint.ParseException If the name is not (or is not bound to) a
      ///   register.
      private Register resolveRegister(String name, Scanner s) {
        var register = registers.get(name);
        if (register != null) {
          return register;
        }
        if (aliases.get(name) instanceof Read(var r)) {
          return r;
        }
        throw s.fail("not a register in scope: " + name);
      }

      /// A fresh occurrence of `argument`, so each use is tracked independently. Constants are
      /// immutable and carry no per-use state, so they can be shared.
      private static Argument freshUse(Argument argument) {
        return switch (argument) {
          case Constant c -> c;
          case Read(var r) -> new Read(r);
          case Consume(var r) -> new Read(r);
        };
      }

      @ParseMethod
      private Abstraction parseAbstraction(Parser p) {
        var s = p.scanner();

        var comments = p.parse(Comments.class);

        // Parameters, e.g. `(reg n:*, reg m:I@!)`.
        var parameters = new ArrayList<FunctionParameter>();
        s.assertAndSkip('(');
        if (!s.nextCharIs(')')) {
          do {
            s.assertAndSkip("reg");
            var name = s.readIdentifierOrKeyword();
            s.assertAndSkip(':');
            var type = p.parse(Type.class);
            var strict = s.trySkip("@!");
            parameters.add(new FunctionParameter(name, type, strict));
          } while (s.trySkip(','));
        }
        s.assertAndSkip(')');

        s.assertAndSkip('-');
        var effects = p.parse(Effects.class);
        s.assertAndSkip('>');
        var returnType = p.parse(Type.class);

        s.assertAndSkip('{');

        var isStub = s.trySkip("...");
        var abstraction = new Abstraction(module, parameters, isStub);
        abstraction.comments().addAll(comments);
        abstraction.setReturnType(returnType);
        abstraction.setEffects(effects);

        if (isStub) {
          s.assertAndSkip('}');
          return abstraction;
        }

        // Seed the namespace with the parameters (registers resolve by name). Register types are
        // declared inline at their definition sites, so there is no separate declarations line.
        for (var parameter : parameters) {
          define(parameter.name(), parameter);
        }

        var body = new BodyParseContext(Objects.requireNonNull(abstraction.cfg()));
        body.parseInto(p.withContext(body));

        s.assertAndSkip('}');
        return abstraction;
      }

      /// Parses the contents of a single [CFG]: either the enclosing version's body, or a nested
      /// promise's.
      ///
      /// This is where the FIŘ instruction grammar lives: blocks, statements, jumps, and the
      /// arguments they refer to. Names are resolved through the enclosing
      /// [AbstractionParseContext], because a promise's body lives in the enclosing version's
      /// register namespace.
      public final class BodyParseContext {
        private final CFG cfg;

        private BodyParseContext(CFG cfg) {
          this.cfg = cfg;
        }

        /// A context for a nested promise's CFG, sharing this one's register namespace.
        private BodyParseContext withCfg(CFG newCfg) {
          return new BodyParseContext(newCfg);
        }

        // region blocks

        /// Parse this (freshly constructed, empty) CFG's body: the entry block followed by the
        /// labeled blocks, up to but not including the closing `}`.
        ///
        /// `p`'s context must be this context.
        private void parseInto(Parser p) {
          var s = p.scanner();

          // The entry block has no header, so any leading comments are indistinguishable from the
          // first instruction's comments (only indentation differs, which the scanner skips).
          // Attach them to the first instruction (not the entry block) — that's where the printer
          // puts statement/jump comments, so this round-trips. (A genuine entry-block comment would
          // re-home to the first instruction, but the printer never emits one distinctly.)
          parseInstructionsInto(p, cfg.entry());

          var defined = new HashSet<String>();
          while (!s.isAtEof() && !s.nextCharIs('}')) {
            var comments = p.parse(Comments.class);
            var label = s.readIdentifierOrKeyword();
            if (!defined.add(label)) {
              throw s.fail("basic block with label '" + label + "' already exists");
            }
            var bb = cfg.getOrAddBB(label);
            bb.comments().addAll(comments);

            if (s.nextCharIs('(')) {
              s.assertAndSkip('(');
              if (!s.nextCharIs(')')) {
                do {
                  var name = s.readIdentifierOrKeyword();
                  s.assertAndSkip(':');
                  var parameter = new BlockParameter(name, p.parse(Type.class));
                  bb.appendPhiParameter(parameter);
                  define(name, parameter);
                } while (s.trySkip(','));
              }
              s.assertAndSkip(')');
            }
            s.assertAndSkip(':');

            parseInstructionsInto(p, bb);
          }

          for (var bb : cfg.bbs()) {
            if (!bb.isEntry() && !defined.contains(bb.label())) {
              throw s.fail("basic block '" + bb.label() + "' is referenced but never defined");
            }
          }
        }

        private void parseInstructionsInto(Parser p, BB bb) {
          var s = p.scanner();
          Instruction instruction;
          do {
            instruction = parseInstruction(p);
            // `null` is a legacy forwarding binding (`r = <arg>`): it emits no instruction (the
            // binding was recorded in the context), but still terminates with `;`.
            if (instruction instanceof Jump jump) {
              bb.setJump(jump);
            } else if (instruction != null) {
              bb.appendStatement((Statement) instruction);
            }
            s.assertAndSkip(';');
          } while (!(instruction instanceof Jump));
        }

        // endregion blocks

        // region instructions

        /// Parse a single instruction (statement or jump), including any leading comments. Returns
        /// `null` when the statement was a legacy forwarding binding (`r = <arg>`), which emits no
        /// instruction.
        private @Nullable Instruction parseInstruction(Parser p) {
          var s = p.scanner();
          var comments = p.parse(Comments.class);
          return startsJump(s) ? parseJump(p, comments) : parseStatement(p, comments);
        }

        /// Whether the upcoming keyword begins a [Jump] rather than a [Statement]. Mirrors the
        /// textual terminators, excluding the case where the keyword is actually an assignee
        /// (`goto = ...`).
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

        private @Nullable Statement parseStatement(Parser p, Comments comments) {
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

          var parsed = parseExpr(p, headName);

          // Legacy bare-argument statement (old `Aea`): no expression, just a single argument. The
          // new IR has no forwarding node, so it emits no statement. With an assignee (`r = <arg>`)
          // the name is bound and its uses resolve to (copies of) the argument; without one (a
          // discarded result, e.g. `40;`) it is simply dropped. A bare argument cannot be a real
          // register (there is no expression for it to inhabit), so a type annotation here is
          // meaningless.
          if (parsed.expression() == null) {
            if (assigneeType != null) {
              throw s.fail(
                  "a bare argument cannot be a typed register definition: " + assigneeName);
            }
            if (assigneeName != null) {
              bindAlias(assigneeName, parsed.args().getFirst());
            }
            return null;
          }

          var statement = new Statement(comments, parsed.expression(), parsed.args());
          if (assigneeName != null) {
            if (assigneeType == null) {
              throw s.fail(
                  "register definition needs an inline type (`" + assigneeName + ": T = ...`)");
            }
            var assignee = statement.setAssignee(assigneeName, assigneeType);
            define(assigneeName, assignee);
          }
          return statement;
        }

        private Jump parseJump(Parser p, Comments comments) {
          var s = p.scanner();
          var k = s.readIdentifierOrKeyword();
          return switch (k) {
            case "check" -> {
              var success = p.parse(Target.class);
              s.assertAndSkip("else");
              var failure = p.parse(Target.class);
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
              var ifTrue = p.parse(Target.class);
              s.assertAndSkip("else");
              var ifFalse = p.parse(Target.class);
              var args = new ArrayList<Argument>();
              args.add(cond);
              args.addAll(ifTrue.phiArgs());
              args.addAll(ifFalse.phiArgs());
              yield new Jump(
                  comments, new If(ifTrue.bbRef(), ifFalse.bbRef(), ifTrue.phiArgs().size()), args);
            }
            case "goto" -> {
              var target = p.parse(Target.class);
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
                throw s.fail(
                    "'check', 'deopt', 'if', 'goto', 'raise', 'return' or 'unreachable'", k);
          };
        }

        /// Parse a jump target: a (possibly forward-referenced) block label and its phi arguments.
        @ParseMethod
        private Target parseTarget(Parser p) {
          var s = p.scanner();
          var label = s.readIdentifierOrKeyword();
          var bb = cfg.getOrAddBB(label);
          var phiArgs = p.parseList("(", ")", Argument.class);
          return new Target(bb, ImmutableList.copyOf(phiArgs));
        }

        // endregion instructions

        // region expressions

        /// An expression together with the flat argument list that lives on its owning instruction.
        /// A `null` [#expression] signals the legacy forwarding form `r = <arg>` (old `Aea`): there
        /// is no expression, just the single bare argument in [#args], which the caller inlines as
        /// an alias.
        private record ParsedExpr(@Nullable Expression expression, List<Argument> args) {}

        /// Parse an expression and its arguments. `headName`, if non-null, is an identifier already
        /// read from the input that begins the expression (an ugly necessity because the grammar
        /// has no lookahead and we must commit to reading `r =` before knowing whether `r` is an
        /// assignee).
        private ParsedExpr parseExpr(Parser p, @Nullable String headName) {
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
                  var codeRef = p.parse(FunctionRef.class);
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
                        new Assume(new AssumeLoadFun(variable, p.parse(FunctionRef.class))),
                        List.of());
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
                {
                  var type =
                      s.trySkip('-')
                          ? MkEnvType.ELIDED
                          : s.trySkip('~') ? MkEnvType.NON_REFLECTIVE : MkEnvType.REGULAR;
                  return new ParsedExpr(new MkEnv(type), List.of());
                }
              case "popenv":
                return new ParsedExpr(new PopEnv(), List.of());
              case "prom":
                {
                  var local = s.trySkip('-');
                  s.assertAndSkip('<');
                  var valueType = p.parse(Type.class);
                  var effects = p.parse(Effects.class);
                  s.assertAndSkip('>');
                  s.assertAndSkip('{');
                  var promiseCfg = new CFG(cfg.scope());
                  var promiseCtx = withCfg(promiseCfg);
                  promiseCtx.parseInto(p.withContext(promiseCtx));
                  s.assertAndSkip('}');
                  return new ParsedExpr(
                      new Promise(valueType, effects, promiseCfg, local), List.of());
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
                  var register = resolveRegister(readRegisterName(s), s);
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
                } else if (isInScope(headName)) {
                  headArg = resolveUse(headName, s);
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
                  new Assume(new AssumeFunction(p.parse(FunctionRef.class))), List.of(headArg1));
            } else if (s.trySkip("?= ")) {
              var headArg1 = requireHead(headArg, s, "a ?= c");
              var constant = p.parse(Value.class);
              return new ParsedExpr(new Assume(new AssumeConstant(constant)), List.of(headArg1));
            } else if (s.nextCharIs('%')
                || s.nextCharIs('@')
                || s.nextCharIs('<')
                || s.nextCharIs('(')) {
              if (headName == null) {
                throw s.fail("in 'f...(...)', 'f' must be a valid function name");
              }
              var functionRef = deferredLookup(Variable.named(headName));
              var isDispatch = s.trySkip('%');
              var closureWithEnv =
                  s.trySkip('@') ? p.parse(Argument.class) : Constant.ELIDED_CLOSURE;
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

            // No operator/call followed a bare register or constant head: this is the legacy
            // forwarding form `r = <arg>` (old `Aea`). Signal it with a null expression; the caller
            // inlines it.
            if (headArg != null) {
              return new ParsedExpr(null, List.of(headArg));
            }
          }

          throw s.fail("expected an expression");
        }

        private ParsedExpr mkVector(Parser p, Kind kind) {
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

        // endregion expressions

        // region arguments

        @ParseMethod
        private Argument parseArgument(Parser p) {
          var s = p.scanner();

          if (Value.peek(p)) {
            var value = p.parse(Value.class);
            return new Constant(value);
          } else if (s.trySkip("consume ")) {
            var register = p.parse(Register.class);
            return new Consume(register);
          } else if (s.nextCharSatisfies(c -> c == '`' || Characters.isIdentifierStart(c))) {
            // A register use: resolve by name through the context, so a legacy `r = <arg>`
            // forwarding binding inlines to (a copy of) its argument rather than a register read.
            return resolveUse(readRegisterName(s), s);
          }

          throw s.fail("expected value, register, or `consume`");
        }

        @ParseMethod
        private NamedArgument parseNamedArgument(Parser p) {
          var s = p.scanner();

          if (s.nextCharSatisfies(Characters::isIdentifierStart)) {
            // We don't have lookahead, so we must handle this case where we could parse a name or
            // part of an argument, both of which are identifiers
            var nameOrArgumentPart = s.readIdentifierOrKeyword();

            if (s.trySkip('=')) {
              // Definitely named
              var value = p.parse(Argument.class);
              return new NamedArgument(Variable.named(nameOrArgumentPart), value);
            }
            // Definitely unnamed
            // Since we read some input, we must finish parsing the argument manually

            // Constant that is also an identifier
            switch (nameOrArgumentPart) {
              case "TRUE":
                return new NamedArgument(new Constant(new Value.Bool(true)));
              case "FALSE":
                return new NamedArgument(new Constant(new Value.Bool(false)));
              case "TRUE_LGL":
                return new NamedArgument(new Constant(new Value.Lgl(Logical.TRUE)));
              case "FALSE_LGL":
                return new NamedArgument(new Constant(new Value.Lgl(Logical.FALSE)));
              case "NA_LGL":
                return new NamedArgument(new Constant(new Value.Lgl(Logical.NA)));
              case "NA_INT":
                return new NamedArgument(new Constant(new Value.Int(Constants.NA_INT)));
              case "NA_REAL":
                return new NamedArgument(new Constant(new Value.Real(Constants.NA_REAL)));
              case "NA_STR":
                return new NamedArgument(new Constant(new Value.Str(Constants.NA_STRING)));
              case "NULL", "NA_CPLX":
                throw s.fail("Constant '" + nameOrArgumentPart + "' not implemented");
            }

            // `consume`
            if (nameOrArgumentPart.equals("consume")) {
              var register = p.parse(Register.class);
              return new NamedArgument(new Consume(register));
            }

            // read: resolve the already-consumed name to its argument via the parse context (a
            // register read, or a legacy `r = <arg>` forwarding binding inlined to its argument).
            return new NamedArgument(resolveUse(nameOrArgumentPart, s));
          } else if (s.nextCharIs('`')) {
            // Definitely named
            var name = p.parse(NamedVariable.class);
            s.assertAndSkip('=');
            var value = p.parse(Argument.class);
            return new NamedArgument(name, value);
          } else {
            // Definitely unnamed
            var value = p.parse(Argument.class);
            return new NamedArgument(value);
          }
        }

        /// Parse a reference to a function by name, which may not be defined yet (see
        /// [FunctionParseContext#deferredLookup]).
        @ParseMethod
        private FunctionRef parseFunctionRef(Parser p) {
          return deferredLookup(p.parse(NamedVariable.class));
        }

        /// Parse a name that must denote a register (e.g. the operand of `consume`). Definitions
        /// (parameters, phi parameters, assignees) are created at their definition sites, not here.
        @ParseMethod
        private Register parseRegister(Parser p) {
          var s = p.scanner();
          return resolveRegister(readRegisterName(s), s);
        }

        private static String readRegisterName(Scanner s) {
          return s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
        }

        // endregion arguments
      }
    }
  }
}
