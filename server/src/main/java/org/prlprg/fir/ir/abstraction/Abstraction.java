package org.prlprg.fir.ir.abstraction;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.stream.IntStream;
import java.util.stream.Stream;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.FirParseContext;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DisambiguatorMap;
import org.prlprg.util.ImmutableBoolArray;
import org.prlprg.util.Streams;

/// A single version of a function: its parameters, return type, effects, declared named-variable
/// types, and control-flow graph.
public final class Abstraction implements Comparable<Abstraction> {
  // Backlink
  // Don't store `Function owner` because we don't use it and it complicates inlining.
  private final Module module;

  // Data
  private final Comments comments;
  private final FunctionParameter[] parameters;
  private Type returnType;
  private Effects effects;
  /// Declared types of named environment variables. Register types live on the registers
  /// themselves ([Register#type]).
  private final Map<NamedVariable, Type> namedVariableTypes = new LinkedHashMap<>();
  private final @Nullable CFG cfg;

  // Cache
  private final ImmutableMap<String, Integer> nameToParamIndex;
  private final DisambiguatorMap nextLocalDisambiguator = new DisambiguatorMap();

  public Abstraction(Module module, List<FunctionParameter> parameters) {
    this(module, parameters, false);
  }

  public Abstraction(Module module, List<FunctionParameter> parameters, boolean isStub) {
    comments = new Comments();
    this.module = module;
    this.parameters = parameters.toArray(FunctionParameter[]::new);
    for (var parameter : this.parameters) {
      parameter.setOwner(this);
    }

    nameToParamIndex = computeNameToParamIndex(this.parameters);
    returnType = Type.ANY_VALUE_SEXP;
    effects = Effects.REFLECT;
    cfg = isStub ? null : new CFG(this);

    for (var parameter : this.parameters) {
      nextLocalDisambiguator.add(parameter.name());
    }
  }

  private static ImmutableMap<String, Integer> computeNameToParamIndex(FunctionParameter[] params) {
    return IntStream.range(0, params.length)
        .boxed()
        .collect(
            Streams.toImmutableMap(
                i -> params[i].name(),
                i -> i,
                (i1, i2) -> {
                  throw new IllegalArgumentException(
                      "Duplicate parameter variable: " + params[i1] + " and " + params[i2]);
                }));
  }

  public Module module() {
    return module;
  }

  public Comments comments() {
    return comments;
  }

  public @Unmodifiable List<FunctionParameter> parameters() {
    return Arrays.asList(parameters);
  }

  public Type returnType() {
    return returnType;
  }

  public void setReturnType(Type returnType) {
    this.returnType = returnType;
  }

  public Effects effects() {
    return effects;
  }

  public void setEffects(Effects effects) {
    this.effects = effects;
  }

  // --- Named-variable declared types ----------------------------------------------------------

  public @UnmodifiableView Map<NamedVariable, Type> namedVariableTypes() {
    return Collections.unmodifiableMap(namedVariableTypes);
  }

  /// Set the declared type of a named variable. If `type` is ANY, removes the declaration.
  public void setNamedVariableType(NamedVariable variable, Type type) {
    if (type.equals(Type.ANY_SEXP)) {
      namedVariableTypes.remove(variable);
    } else {
      namedVariableTypes.put(variable, type);
    }
  }

  // --- Types ----------------------------------------------------------------------------------

  public Type typeOf(Register register) {
    return register.type();
  }

  public Type typeOf(NamedVariable named) {
    // Absent means an unknown named variable, i.e. has type ANY.
    return namedVariableTypes.getOrDefault(named, Type.ANY_SEXP);
  }

  public @Nullable Type typeOf(Argument argument) {
    return switch (argument) {
      case Constant(var constant) -> constant.type();
      case Read(var register) -> register.type();
      case Consume(var register) -> register.type().withOwnership(Ownership.FRESH);
    };
  }

  // --- Registers ------------------------------------------------------------------------------

  /// A unique register name resembling `prefix` that doesn't already exist in this version.
  public String freshName(String prefix) {
    return nextLocalDisambiguator.disambiguate(Register.resemblance(prefix));
  }

  public String freshName() {
    return freshName(Register.DEFAULT_NAME);
  }

  /// All registers defined in this version: parameters, then each block's phi parameters and each
  /// statement's assignee, across the body and nested promise CFGs.
  public Stream<Register> streamRegisters() {
    return Stream.concat(
        Arrays.stream(parameters),
        streamCfgs()
            .flatMap(c -> c.bbs().stream())
            .flatMap(
                bb ->
                    Stream.concat(
                        bb.phiParameters().stream(),
                        bb.statements().stream()
                            .map(Statement::assignee)
                            .filter(Objects::nonNull))));
  }

  public boolean isParameter(Register register) {
    return register instanceof FunctionParameter fp && fp.owner() == this;
  }

  public boolean contains(Register register) {
    return switch (register) {
      case FunctionParameter fp -> fp.owner() == this;
      case BlockParameter bp -> bp.owner() != null && containsCfg(bp.owner().owner());
      case org.prlprg.fir.ir.variable.AssigneeOf ao -> {
        var bb = ao.statement().parentBB();
        yield bb != null && containsCfg(bb.owner());
      }
    };
  }

  private boolean containsCfg(CFG c) {
    return streamCfgs().anyMatch(x -> x == c);
  }

  // --- Stub / CFG -----------------------------------------------------------------------------

  /// True iff [#cfg()] is `null`, which is iff this version was constructed as a stub.
  public boolean isStub() {
    return cfg == null;
  }

  public @Nullable CFG cfg() {
    return cfg;
  }

  /// Yields the function body's CFG ([#cfg()]) followed by each [Promise]'s CFG, in pre-order.
  public Stream<CFG> streamCfgs() {
    return cfg == null
        ? Stream.of()
        : Streams.worklist(
            cfg,
            (prev, worklist) -> {
              for (var bb : prev.bbs()) {
                for (var statement : bb.statements()) {
                  if (statement.expression() instanceof Promise promise) {
                    worklist.add(promise.code());
                  }
                }
              }
            });
  }

  public Signature signature() {
    return new Signature(
        Arrays.stream(parameters)
            .map(FunctionParameter::type)
            .collect(ImmutableList.toImmutableList()),
        Arrays.stream(parameters)
            .map(FunctionParameter::strict)
            .collect(ImmutableBoolArray.toImmutableBoolArray()),
        returnType,
        effects);
  }

  /// Sort so that "better" versions are strictly less than "worse" ones. A version is "better"
  /// if its parameter types, effects, and return type are narrower.
  @Override
  public int compareTo(Abstraction o) {
    if (this == o) {
      return 0;
    }
    if (module != o.module) {
      throw new IllegalArgumentException("Can't compare versions in different modules.");
    }

    var cmp = Integer.compare(parameters.length, o.parameters.length);
    if (cmp != 0) {
      return cmp;
    }
    for (var i = 0; i < Math.min(parameters.length, o.parameters.length); i++) {
      cmp = parameters[i].type().compareTo(o.parameters[i].type());
      if (cmp != 0) {
        return cmp;
      }
    }
    cmp = effects.compareTo(o.effects);
    if (cmp != 0) {
      return cmp;
    }
    cmp = returnType.compareTo(o.returnType);
    if (cmp != 0) {
      return cmp;
    }

    // Tiebreaker: identity-based, to keep a deterministic-but-arbitrary total order for non-equal
    // versions with the same signature.
    return Integer.compare(System.identityHashCode(this), System.identityHashCode(o));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(comments);

    // Parameters, e.g. `(reg n:*, reg m:I@!)`.
    w.write('(');
    var firstParam = true;
    for (var parameter : parameters) {
      if (!firstParam) {
        w.write(", ");
      }
      firstParam = false;
      w.write("reg ");
      p.print(parameter);
      w.write(':');
      p.print(parameter.type());
      if (parameter.strict()) {
        w.write("@!");
      }
    }
    w.write(')');

    w.write(" -");
    p.print(effects);
    w.write("> ");
    p.print(returnType);

    w.write(" {");

    if (cfg == null) {
      w.write(" ... ");
    } else {
      // Registers declare their type inline at their definition site (see [Statement] and the phi
      // parameters in a block header), so there is no separate declarations line — the body follows
      // the `{` directly.
      w.write('\n');
      p.print(cfg);
      w.write('\n');
    }

    w.write('}');
  }

  // region parsing

  public record ParseContext(Module module, FunctionRef.ParseContext forFunctionRef) {}

  @ParseMethod
  private static Abstraction parse(Parser p, ParseContext ctx) {
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
    var abstraction = new Abstraction(ctx.module(), parameters, isStub);
    abstraction.comments.addAll(comments);
    abstraction.setReturnType(returnType);
    abstraction.setEffects(effects);

    if (isStub) {
      s.assertAndSkip('}');
      return abstraction;
    }

    // Seed the parse context with the parameters (registers resolve by name). Register types are
    // declared inline at their definition sites, so there is no separate declarations line.
    var registers = new HashMap<String, Register>();
    for (var parameter : parameters) {
      registers.put(parameter.name(), parameter);
    }
    var bodyCtx =
        new FirParseContext(
            Objects.requireNonNull(abstraction.cfg()),
            registers,
            new HashMap<>(),
            ctx.forFunctionRef());

    Objects.requireNonNull(abstraction.cfg()).parseInto(p.withContext(bodyCtx), bodyCtx);

    s.assertAndSkip('}');
    return abstraction;
  }

  // endregion parsing
}
