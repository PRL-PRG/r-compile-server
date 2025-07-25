package org.prlprg.fir.ir.abstraction;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DeferredCallbacks;

public final class Abstraction {
  static final String DEFAULT_LOCAL_PREFIX = "r";

  // Backlink
  // Don't store `Function owner` because we don't use it and it complicates inlining.
  private final Module module;

  // Data
  private final ImmutableList<Parameter> params;
  private Type returnType;
  private Effects returnEffects;
  private final Map<String, Local> locals = new LinkedHashMap<>();
  private final CFG cfg;

  // Cached
  private final ImmutableMap<String, Parameter> nameToParam;
  private int nextLocalDisambiguator = 0;

  public Abstraction(Module module, List<Parameter> params) {
    this.module = module;
    this.params = ImmutableList.copyOf(params);

    nameToParam = computeNameToParam(params);
    returnType = Type.ANY;
    returnEffects = Effects.ANY;
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

  public @Unmodifiable List<Parameter> params() {
    return params;
  }

  public Type returnType() {
    return returnType;
  }

  public void setReturnType(Type returnType) {
    module.record(
        "Abstraction#setReturnType",
        List.of(this, returnType),
        () -> {
          this.returnType = returnType;
          return null;
        });
  }

  public Effects returnEffects() {
    return returnEffects;
  }

  public void setReturnEffects(Effects returnEffects) {
    module.record(
        "Abstraction#setReturnEffects",
        List.of(this, returnEffects),
        () -> {
          this.returnEffects = returnEffects;
          return null;
        });
  }

  public @UnmodifiableView Collection<Local> locals() {
    return Collections.unmodifiableCollection(locals.values());
  }

  public Register addLocal() {
    var variable = nextLocalRegister();
    this.addLocal(new Local(variable, Type.ANY));
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
          return null;
        });
  }

  public void removeLocal(Local local) {
    module.record(
        "Abstraction#removeLocal",
        List.of(this, local),
        () -> {
          if (!locals.remove(local.variable().name(), local)) {
            throw new IllegalArgumentException(
                "Local " + local + " does not exist in the abstraction.");
          }
          return null;
        });
  }

  public CFG cfg() {
    return cfg;
  }

  public boolean contains(Variable variable) {
    return contains(variable.name());
  }

  public boolean contains(String variableName) {
    return nameToParam.containsKey(variableName) || locals.containsKey(variableName);
  }

  /// Get the variable with this name in the scope, if present.
  ///
  /// This method's main purpose is to distinguish between [Register] and
  /// [org.prlprg.fir.ir.variable.NamedVariable NamedVariable]. If you just want to check whether
  // a
  /// variable with the name exists, use [#contains(String)].
  public @Nullable Variable lookup(String variableName) {
    var param = nameToParam.get(variableName);
    if (param != null) {
      return param.variable();
    }
    var local = locals.get(variableName);
    if (local != null) {
      return local.variable();
    }
    return null;
  }

  public Register nextLocalRegister() {
    return Variable.register(DEFAULT_LOCAL_PREFIX + nextLocalDisambiguator);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write('(');
    p.printSeparated(", ", params);
    w.write(')');

    w.write(" -");
    p.print(returnEffects);
    w.write("> ");
    p.print(returnType);

    w.write("{ ");
    p.printSeparated(", ", locals.values());
    w.write(" |\n");
    p.print(cfg);
    w.write("}");
  }

  public record ParseContext(
      Module module, DeferredCallbacks<Module> postModule, @Nullable Object inner) {}

  @ParseMethod
  private Abstraction(Parser p1, ParseContext ctx) {
    module = ctx.module;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    params = p.parseList("(", ")", Parameter.class);
    nameToParam = computeNameToParam(params);

    s.assertAndSkip('-');
    returnEffects = p.parse(Effects.class);
    s.assertAndSkip('>');
    returnType = p.parse(Type.class);

    s.assertAndSkip('{');
    if (!s.nextCharIs('|')) {
      do {
        var local = p.parse(Local.class);
        if (locals.put(local.variable().name(), local) != null) {
          throw new IllegalArgumentException(
              "Local " + local + " already exists in the abstraction.");
        }
      } while (s.trySkip(','));
    }
    s.assertAndSkip('|');

    var p2 = p.withContext(new CFG.ParseContext(this, ctx.postModule, p.context()));
    cfg = p2.parse(CFG.class);

    s.assertAndSkip('}');
  }
}
