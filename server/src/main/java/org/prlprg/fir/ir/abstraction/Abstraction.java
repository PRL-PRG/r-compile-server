package org.prlprg.fir.ir.abstraction;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.binding.Binding;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DeferredCallbacks;
import org.prlprg.util.Streams;

public final class Abstraction implements Comparable<Abstraction> {
  static final String DEFAULT_LOCAL_PREFIX = "r";

  // Backlink
  // Don't store `Function owner` because we don't use it and it complicates inlining.
  private final Module module;

  // Data
  private final ImmutableList<Parameter> parameters;
  private Type returnType;
  private Effects effects;
  private final Map<String, Local> locals = new LinkedHashMap<>();
  private final CFG cfg;

  // Cached
  private final ImmutableMap<String, Parameter> nameToParam;
  private int nextLocalDisambiguator = 0;

  public Abstraction(Module module, List<Parameter> parameters) {
    this.module = module;
    this.parameters = ImmutableList.copyOf(parameters);

    nameToParam = computeNameToParam(parameters);
    returnType = Type.ANY_VALUE;
    effects = Effects.ANY;
    cfg = new CFG(this);

    while (contains(nextLocalRegister())) {
      nextLocalDisambiguator++;
    }
  }

  private static ImmutableMap<String, Parameter> computeNameToParam(List<Parameter> params) {
    return params.stream()
        .collect(
            ImmutableMap.toImmutableMap(
                p -> p.variable().name(),
                p -> p,
                (p1, p2) -> {
                  throw new IllegalArgumentException(
                      "Duplicate parameter variable: " + p1.variable() + " and " + p2.variable());
                }));
  }

  public Module module() {
    return module;
  }

  public @Unmodifiable List<Parameter> parameters() {
    return parameters;
  }

  public Type returnType() {
    return returnType;
  }

  public void setReturnType(Type returnType) {
    module.record(
        "Abstraction#setReturnType", List.of(this, returnType), () -> this.returnType = returnType);
  }

  public Effects effects() {
    return effects;
  }

  public void setEffects(Effects effects) {
    module.record("Abstraction#setEffects", List.of(this, effects), () -> this.effects = effects);
  }

  public @UnmodifiableView Collection<Local> locals() {
    return Collections.unmodifiableCollection(locals.values());
  }

  public Register addLocal(Type type) {
    var variable = nextLocalRegister();
    addLocal(new Local(variable, type));
    return variable;
  }

  public void addLocal(Local local) {
    module.record(
        "Abstraction#addLocal",
        List.of(this, local),
        () -> {
          if (locals.put(local.variable().name(), local) != null) {
            throw new IllegalArgumentException(
                "Local " + local + " already exists in the abstraction.");
          }
          while (contains(nextLocalRegister())) {
            nextLocalDisambiguator++;
          }
        });
  }

  public Local removeLocal(Variable variable) {
    return module.record(
        "Abstraction#removeLocal",
        List.of(this, variable),
        () -> {
          var local = locals.get(variable.name());
          if (local == null) {
            throw new IllegalArgumentException(
                "Local " + variable.name() + " does not exist in the abstraction.");
          }
          switch (variable) {
            case Register _ when !(local.variable() instanceof Register) ->
                throw new IllegalArgumentException(
                    "Local " + variable.name() + " is not a register");
            case NamedVariable _ when !(local.variable() instanceof NamedVariable) ->
                throw new IllegalArgumentException(
                    "Local " + variable.name() + " is not a named variable");
            default -> {}
          }

          return locals.remove(variable.name());
        });
  }

  public CFG cfg() {
    return cfg;
  }

  /// Yields the function body's CFG ([#cfg()]) followed by each [Promise]'s CFG, in pre-order.
  public Stream<CFG> streamCfgs() {
    return Streams.worklist(
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

  public boolean contains(Register register) {
    var lookup = lookup(register.name());
    return lookup != null && lookup.variable() instanceof Register;
  }

  public boolean isParameter(Register register) {
    return nameToParam.containsKey(register.name());
  }

  public boolean isRegister(String variableName) {
    var lookup = lookup(variableName);
    return lookup != null && lookup.variable() instanceof Register;
  }

  public @Nullable Type typeOf(Register register) {
    var lookup = lookup(register.name());
    return lookup != null && lookup.variable() instanceof Register ? lookup.type() : null;
  }

  public Type typeOf(NamedVariable named) {
    var lookup = lookup(named.name());
    // `lookup == null` means it's an unknown named variable, i.e. has type ANY.
    return lookup != null && lookup.variable() instanceof NamedVariable ? lookup.type() : Type.ANY;
  }

  private @Nullable Binding lookup(String variableName) {
    var param = nameToParam.get(variableName);
    return param != null ? param : locals.get(variableName);
  }

  public Register nextLocalRegister() {
    return Variable.register(DEFAULT_LOCAL_PREFIX + nextLocalDisambiguator);
  }

  public Signature signature() {
    return new Signature(
        parameters.stream().map(Parameter::type).collect(ImmutableList.toImmutableList()),
        returnType,
        effects);
  }

  /// Sort by parameter types (smallest type first), then by number of parameters, then by hash.
  ///
  /// This means strictly better versions are before strictly worse ones.
  @Override
  public int compareTo(Abstraction o) {
    for (var i = 0; i < Math.min(parameters().size(), o.parameters().size()); i++) {
      var cmp = parameters().get(i).type().compareTo(o.parameters().get(i).type());
      if (cmp != 0) {
        return cmp;
      }
    }
    var cmp = Integer.compare(parameters().size(), o.parameters().size());
    if (cmp != 0) {
      return cmp;
    }
    return Integer.compare(hashCode(), o.hashCode());
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write('(');
    p.printSeparated(", ", parameters);
    w.write(')');

    w.write(" -");
    p.print(effects);
    w.write("> ");
    p.print(returnType);

    w.write(" { ");

    p.printSeparated(", ", locals.values());
    if (!locals.isEmpty()) {
      w.write(' ');
    }
    w.write("|\n");

    p.print(cfg);

    w.write("\n}");
  }

  public record ParseContext(
      Module module, DeferredCallbacks<Module> postModule, @Nullable Object inner) {}

  @ParseMethod
  private Abstraction(Parser p1, ParseContext ctx) {
    module = ctx.module;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    parameters = p.parseList("(", ")", Parameter.class);
    nameToParam = computeNameToParam(parameters);

    s.assertAndSkip('-');
    effects = p.parse(Effects.class);
    s.assertAndSkip('>');
    returnType = p.parse(Type.class);

    s.assertAndSkip('{');
    if (!s.nextCharIs('|')) {
      do {
        var local = p.parse(Local.class);
        if (locals.put(local.variable().name(), local) != null) {
          throw s.fail("Local " + local + " already exists in the abstraction.");
        }
      } while (s.trySkip(','));
    }
    s.assertAndSkip('|');

    var p2 = p.withContext(new CFG.ParseContext(this, ctx.postModule, p.context()));
    cfg = p2.parse(CFG.class);

    s.assertAndSkip('}');
  }
}
