package org.prlprg.fir.ir.abstraction;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.argument.Use;
import org.prlprg.fir.ir.binding.Binding;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Ownership;
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
import org.prlprg.util.DisambiguatorMap;
import org.prlprg.util.Streams;

public final class Abstraction implements Comparable<Abstraction> {
  // Backlink
  // Don't store `Function owner` because we don't use it and it complicates inlining.
  private final Module module;

  // Data
  private final ImmutableList<Parameter> parameters;
  private Type returnType;
  private Effects effects;
  private final Map<Variable, Local> locals = new LinkedHashMap<>();
  private final @Nullable CFG cfg;

  // Cached
  private final ImmutableMap<String, Parameter> nameToParam;
  private final DisambiguatorMap nextLocalDisambiguator = new DisambiguatorMap();

  public Abstraction(Module module, List<Parameter> parameters) {
    this(module, parameters, false);
  }

  public Abstraction(Module module, List<Parameter> parameters, boolean isStub) {
    this.module = module;
    this.parameters = ImmutableList.copyOf(parameters);

    nameToParam = computeNameToParam(parameters);
    returnType = Type.ANY_VALUE;
    effects = Effects.ANY;
    cfg = isStub ? null : new CFG(this);

    parameters.stream().map(p -> p.variable().name()).forEach(nextLocalDisambiguator::add);
  }

  private static ImmutableMap<String, Parameter> computeNameToParam(List<Parameter> params) {
    return params.stream()
        .collect(
            Streams.toImmutableMap(
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

  /// Like [#locals()], but you can remove elements (equivalent to [#removeLocal(Register)]).
  public Iterator<Local> mutablyIterateLocals() {
    return new Iterator<>() {
      private @Nullable Local last = null;
      private final Iterator<Local> inner = locals.values().iterator();

      @Override
      public boolean hasNext() {
        return inner.hasNext();
      }

      @Override
      public Local next() {
        last = inner.next();
        return last;
      }

      @Override
      public void remove() {
        if (last == null) {
          throw new IllegalStateException("`next()` has not been called yet");
        }

        module.record("Abstraction#removeLocal", List.of(Abstraction.this, last), inner::remove);
      }
    };
  }

  public Register addLocal(Type type) {
    return addLocal(Register.DEFAULT_PREFIX, type);
  }

  public Register addLocal(String name, Type type) {
    var variable = resemblance(name);
    addLocal(new Local(variable, type));
    return variable;
  }

  public void addLocal(Local local) {
    module.record(
        "Abstraction#addLocal",
        List.of(this, local),
        () -> {
          if (cfg == null) {
            throw new IllegalArgumentException("can't add local to stub");
          }
          if (locals.put(local.variable(), local) != null) {
            throw new IllegalArgumentException(
                "Local " + local + " already exists in the abstraction.");
          }
          nextLocalDisambiguator.add(local.variable().name());
        });
  }

  public void addLocals(Collection<Local> locals) {
    module.record(
        "Abstraction#addLocals",
        List.of(this, locals),
        () -> {
          if (cfg == null) {
            throw new IllegalArgumentException("can't add locals to stub");
          }
          for (var local : locals) {
            if (this.locals.put(local.variable(), local) != null) {
              throw new IllegalArgumentException(
                  "Local " + local + " already exists in the abstraction.");
            }
          }
          locals.stream().map(l -> l.variable().name()).forEach(nextLocalDisambiguator::add);
        });
  }

  /// Remove the binding.
  ///
  /// @throws IllegalArgumentException If `variable` isn't declared.
  public Local removeLocal(Register variable) {
    return module.record(
        "Abstraction#removeLocal",
        List.of(this, variable),
        () -> {
          if (!locals.containsKey(variable)) {
            throw new IllegalArgumentException(
                "Local " + variable.name() + " does not exist in the abstraction.");
          }
          return locals.remove(variable);
        });
  }

  /// Change the local's explicit type.
  ///
  /// @throws IllegalArgumentException If `variable` isn't declared.
  public void setLocalType(Register variable, Type type) {
    module.record(
        "Abstraction#setLocalType",
        List.of(this, variable, type),
        () -> {
          if (!locals.containsKey(variable)) {
            throw new IllegalArgumentException(
                "Local " + variable.name() + " does not exist in the abstraction.");
          }
          locals.put(variable, new Local(variable, type));
        });
  }

  /// Change the local's explicit type.
  ///
  /// This functions differently than [#setLocalType(Register, Type)]. If `type` is ANY, it
  /// removes the binding if it exists. Otherwise, it creates the binding if necessary.
  public void setLocalType(NamedVariable variable, Type type) {
    module.record(
        "Abstraction#setLocalType",
        List.of(this, variable, type),
        () -> {
          if (type.equals(Type.ANY)) {
            locals.remove(variable);
          } else {
            locals.put(variable, new Local(variable, type));
          }
        });
  }

  /// True iff this was constructed via [#stub(Module, Type , Type, Effects)] as opposed to
  /// [Abstraction(Module, List)].
  public boolean isStub() {
    return cfg == null;
  }

  /// This is null iff [#isStub] is `true`, which is iff this was constructed via
  /// [#stub(Module, List, Type, Effects)] as opposed to [Abstraction(Module, List)].
  public @Nullable CFG cfg() {
    return cfg;
  }

  public boolean contains(Register register) {
    return lookup(register) != null;
  }

  /// Whether [#locals()] includes a binding for this named variable.
  ///
  /// Named variables may be loaded and stored without being declared, the purpose of declaring
  /// is to give a specific maybe-type, or for documentation (no semantic meaning) if type ANY.
  public boolean isDeclared(NamedVariable nv) {
    return lookup(nv) != null;
  }

  public boolean isParameter(Register register) {
    return nameToParam.containsKey(register.name());
  }

  public @Nullable Type typeOf(Register register) {
    var lookup = lookup(register);
    return lookup != null ? lookup.type() : null;
  }

  public Type typeOf(NamedVariable named) {
    var lookup = lookup(named);
    // `lookup == null` means it's an unknown named variable, i.e. has type ANY.
    return lookup != null ? lookup.type() : Type.ANY;
  }

  public @Nullable Type typeOf(Argument argument) {
    return switch (argument) {
      case Constant(var constant) -> Type.of(constant);
      case Read(var register) -> typeOf(register);
      case Use(var register) -> {
        var type = typeOf(register);
        yield type == null ? null : type.withOwnership(Ownership.FRESH);
      }
    };
  }

  private @Nullable Binding lookup(Variable variable) {
    var param = variable instanceof Register r ? nameToParam.get(r.name()) : null;
    return param != null ? param : locals.get(variable);
  }

  /// Converts the string into a register name that is valid and doesn't already exist.
  public Register resemblance(String prefix) {
    return Variable.register(
        nextLocalDisambiguator.disambiguate(Register.resemblance(prefix).name()));
  }

  public Signature signature() {
    return new Signature(
        parameters.stream().map(Parameter::type).collect(ImmutableList.toImmutableList()),
        returnType,
        effects);
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

  /// Sort so that "better" versions are strictly less than "worse" ones. A version is "better"
  /// if its parameter types, effects, and return type are narrower.
  @Override
  public int compareTo(Abstraction o) {
    // Parameter size (if different, neither is better).
    var cmp = Integer.compare(parameters.size(), o.parameters.size());
    if (cmp != 0) {
      return cmp;
    }

    // Parameter types
    for (var i = 0; i < Math.min(parameters.size(), o.parameters.size()); i++) {
      cmp = parameters.get(i).type().compareTo(o.parameters.get(i).type());
      if (cmp != 0) {
        return cmp;
      }
    }

    // Effects
    cmp = effects.compareTo(o.effects);
    if (cmp != 0) {
      return cmp;
    }

    // Return type
    cmp = returnType.compareTo(o.returnType);
    if (cmp != 0) {
      return cmp;
    }

    // Tiebreaker
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

    if (cfg == null) {
      w.write("... ");
    } else {
      p.printSeparated(", ", locals.values());
      if (!locals.isEmpty()) {
        w.write(' ');
      }
      w.write("|");

      w.write('\n');
      p.print(cfg);
      w.write('\n');
    }

    w.write('}');
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

    if (s.trySkip("...")) {
      cfg = null;
      s.assertAndSkip('}');
      return;
    }

    if (!s.nextCharIs('|')) {
      do {
        var local = p.parse(Local.class);
        if (locals.put(local.variable(), local) != null) {
          throw s.fail("Local " + local + " already exists in the abstraction.");
        }
      } while (s.trySkip(','));
    }
    s.assertAndSkip('|');

    parameters.stream().map(p2 -> p2.variable().name()).forEach(nextLocalDisambiguator::add);
    locals.values().stream()
        .filter(l -> l.variable() instanceof Register)
        .map(l -> l.variable().name())
        .forEach(nextLocalDisambiguator::add);

    var p2 = p.withContext(new CFG.ParseContext(this, ctx.postModule, p.context()));
    cfg = p2.parse(CFG.class);

    s.assertAndSkip('}');
  }
}
