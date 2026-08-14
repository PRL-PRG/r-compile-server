package org.prlprg.fir.ir.abstraction;

import com.google.common.collect.ImmutableList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
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
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.parseprint.IrPrintContext;
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

    // Cache
    returnType = Type.ANY_VALUE_SEXP;
    effects = Effects.REFLECT;
    cfg = isStub ? null : new CFG(this);

    for (var parameter : this.parameters) {
      reserveName(parameter.name());
    }
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

  public Type typeOf(Argument argument) {
    return switch (argument) {
      case Constant(var constant) -> constant.type();
      case Read(var register) -> register.type();
      case Consume(var register) -> register.type().withOwnership(Ownership.FRESH);
    };
  }

  // --- Registers ------------------------------------------------------------------------------

  /// A unique register name resembling `prefix` that doesn't already exist in this version.
  ///
  /// Registers are identified by object, but their names must still be unique within the version:
  /// they're how the textual IR and the generated C name them.
  public String freshName(String prefix) {
    var name = nextLocalDisambiguator.disambiguate(Register.resemblance(prefix));
    // Reserve it, otherwise the next call with the same prefix would hand out the same name.
    reserveName(name);
    return name;
  }

  /// Record that a register named `name` exists in this version, so [#freshName(String)] never
  /// hands `name` out.
  ///
  /// Names that didn't come from [#freshName(String)] must be reserved as soon as their register
  /// enters this version; that's what makes [#freshName(String)] always return an unused name. All
  /// three ways a register can enter do so: [FunctionParameter]s in the constructor,
  /// [BlockParameter]s when appended to one of this version's blocks, and [Statement] assignees
  /// when the statement is spliced into one of this version's [CFG]s.
  public void reserveName(String name) {
    nextLocalDisambiguator.add(name);
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

  /// Every [CFG] -- this abstraction's body and each of its promises' -- is constructed with its
  /// owning abstraction, so the backlink answers this directly. Walking [#streamCfgs()] instead
  /// costs a traversal of every block and statement, and [#contains(Register)] sits on the hot
  /// path of [org.prlprg.fir.analyze.resolve.OriginAnalysis].
  private boolean containsCfg(CFG c) {
    return c.scope() == this;
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

  /// A version can be printed without any surrounding information, so this forwards to
  /// [IrPrintContext] and callers can just `p.print(abstraction)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(new IrPrintContext()).print(this);
  }
}
