package org.prlprg.fir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.binding.Local;
import org.prlprg.fir.binding.Parameter;
import org.prlprg.fir.module.Module;
import org.prlprg.fir.type.Effects;
import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Variable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public class Abstraction {
  // Backlink
  private final Module module;

  // Data
  private final ImmutableList<Parameter> params;
  private Type returnType;
  private Effects returnEffects;
  private final Map<Variable, Local> locals = new LinkedHashMap<>();
  private final CFG cfg;

  public Abstraction(Module module, ImmutableList<Parameter> params) {
    if (params.stream()
        .anyMatch(
            p -> params.stream().filter(p1 -> p.variable().equals(p1.variable())).count() > 1)) {
      throw new IllegalArgumentException("Parameters have duplicates: " + params);
    }
    this.module = module;
    this.params = params;
    returnType = Type.ANY;
    returnEffects = Effects.ANY;
    cfg = new CFG(this);
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

  public void addLocal(Local local) {
    module.record(
        "Abstraction#addLocal",
        List.of(this, local),
        () -> {
          if (locals.put(local.variable(), local) != null) {
            throw new IllegalArgumentException(
                "Local " + local + " already exists in the abstraction.");
          }
          return null;
        });
  }

  public void removeLocal(Local local) {
    module.record(
        "Abstraction#removeLocal",
        List.of(this, local),
        () -> {
          if (!locals.remove(local.variable(), local)) {
            throw new IllegalArgumentException(
                "Local " + local + " does not exist in the abstraction.");
          }
          return null;
        });
  }

  public CFG cfg() {
    return cfg;
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

    w.write(':');
    p.print(returnType);
    p.print(returnEffects);

    w.write("{ ");
    p.printSeparated(", ", locals.values());
    w.write(" |\n");
    p.print(cfg);
    w.write("}");
  }

  public record ParseContext(Module module, @Nullable Object inner) {}

  @ParseMethod
  private Abstraction(Parser p1, ParseContext ctx) {
    module = ctx.module;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    params = p.parseList("(", ")", Parameter.class);
    if (params.stream()
        .anyMatch(
            p2 -> params.stream().filter(p3 -> p2.variable().equals(p3.variable())).count() > 1)) {
      throw new IllegalArgumentException("Parameters have duplicates: " + params);
    }

    s.assertAndSkip(':');
    returnType = p.parse(Type.class);
    returnEffects = p.parse(Effects.class);

    s.assertAndSkip('{');
    if (!s.nextCharIs('|')) {
      do {
        var local = p.parse(Local.class);
        if (locals.put(local.variable(), local) != null) {
          throw new IllegalArgumentException(
              "Local " + local + " already exists in the abstraction.");
        }
      } while (s.trySkip(','));
    }
    s.assertAndSkip('|');

    var p2 = p.withContext(new CFG.ParseContext(this, p.context()));
    cfg = p2.parse(CFG.class);

    s.assertAndSkip('}');
  }
}
