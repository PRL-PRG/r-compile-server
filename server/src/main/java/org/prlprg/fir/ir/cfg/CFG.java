package org.prlprg.fir.ir.cfg;

import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DeferredCallbacks;

/// FIŘ [control-flow-graph](https://en.wikipedia.org/wiki/Control-flow_graph).
public final class CFG {
  // Backlink
  private final Abstraction scope;

  // Data
  private final Map<String, BB> bbs = new LinkedHashMap<>();

  // Cache
  private final BB entry;
  final Set<BB> exits = new LinkedHashSet<>();
  private int nextLabelDisambiguator = 0;

  public CFG(Abstraction scope) {
    this.scope = scope;

    // Create an empty entry block
    entry = new BB(this, "ENTRY");
    bbs.put(entry.label(), entry);
    exits.add(entry);
  }

  public Abstraction scope() {
    return scope;
  }

  public boolean isPromise() {
    return scope.cfg() != this;
  }

  public Module module() {
    return scope.module();
  }

  public BB entry() {
    return entry;
  }

  public @UnmodifiableView Collection<BB> exits() {
    return Collections.unmodifiableCollection(exits);
  }

  public @UnmodifiableView Collection<BB> bbs() {
    return Collections.unmodifiableCollection(bbs.values());
  }

  public @Nullable BB bb(String label) {
    return bbs.get(label);
  }

  public String nextLabel() {
    return BB.DEFAULT_LABEL_PREFIX + nextLabelDisambiguator;
  }

  public BB addBB() {
    return this.addBB(this.nextLabel());
  }

  public BB addBB(String label) {
    return module()
        .record(
            "CFG#addBB(String)",
            List.of(this, label),
            () -> {
              if (bbs.containsKey(label)) {
                throw new IllegalArgumentException(
                    "Basic block with label '" + label + "' already exists.");
              }
              var bb = new BB(this, label);
              bbs.put(bb.label(), bb);
              while (bbs.containsKey(nextLabel())) {
                nextLabelDisambiguator++;
              }
              return bb;
            });
  }

  public void removeBB(BB bb) {
    module()
        .record(
            "CFG#removeBB(BB)",
            List.of(this, bb),
            () -> {
              if (!bbs.remove(bb.label(), bb)) {
                throw new IllegalArgumentException("Basic block '" + bb + "' does not exist.");
              }
              return null;
            });
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.printSeparated("\n", bbs.values());
  }

  public record ParseContext(
      Abstraction scope, DeferredCallbacks<Module> postModule, @Nullable Object inner) {}

  @ParseMethod
  private CFG(Parser p1, ParseContext ctx) {
    scope = ctx.scope;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    var postCfg = new DeferredCallbacks<CFG>();

    BB entry = null;
    while (!s.isAtEof() && !s.nextCharIs('}')) {
      var p2 =
          p.withContext(
              new BB.ParseContext(entry == null, this, postCfg, ctx.postModule, p.context()));
      var bb = p2.parse(BB.class);
      if (entry == null) {
        assert bb.isEntry();
        entry = bb;
      }
      if (bbs.put(bb.label(), bb) != null) {
        throw new IllegalArgumentException(
            "Basic block with label '" + bb.label() + "' already exists.");
      }
      while (bbs.containsKey(nextLabel())) {
        nextLabelDisambiguator++;
      }
    }
    if (entry == null) {
      throw new IllegalArgumentException("CFG must have at least one basic block.");
    }
    this.entry = entry;

    postCfg.run(this);
  }
}
