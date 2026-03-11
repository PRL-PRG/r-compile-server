package org.prlprg.fir.ir.cfg;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Strings;

/// FIŘ [control-flow-graph](https://en.wikipedia.org/wiki/Control-flow_graph).
public final class CFG {
  // Backlink
  private final Abstraction scope;

  // Data
  private final Map<String, BB> bbs = new LinkedHashMap<>();

  // Cache
  private final BB entry;
  final Set<BB> exits = new TreeSet<>(Comparator.comparing(BB::label));
  private int nextLabelDisambiguator = 0;

  public CFG(Abstraction scope) {
    this.scope = scope;

    // Create an empty entry block
    entry = new BB(this, BB.ENTRY_LABEL);
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

  /// A label that doesn't belong to any blocks in this [CFG].
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
              if (bb.isEntry()) {
                throw new IllegalArgumentException("Cannot remove the entry block.");
              }
              if (!bbs.remove(bb.label(), bb)) {
                throw new IllegalArgumentException("Basic block '" + bb + "' does not exist.");
              }

              // Ensure block isn't in exits or predecessors
              bb.setJump(new Unreachable());
              exits.remove(bb);
            });
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    // Sort BBs dominators before dominees, then [naturally](Strings#naturalComparator())
    // (lexicographically with explicit support for numbers) by label.
    var sortedBbs = new ArrayList<>(bbs.values());
    sortedBbs.sort(
        new CfgDominatorTree(this)
            .comparator()
            .thenComparing(BB::label, Strings.naturalComparator()));

    p.printSeparated("\n", sortedBbs);
  }

  public record ParseContext(
      Abstraction scope, FunctionRef.ParseContext forFunctionRef, @Nullable Object inner) {}

  @ParseMethod
  private CFG(Parser p1, ParseContext ctx) {
    scope = ctx.scope;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    var deferredBbs = new LinkedHashMap<String, BBRef>();
    var fixBbPreds = new ArrayList<Runnable>();
    var bbRefCtx = new BBRef.ParseContext(deferredBbs, fixBbPreds);

    BB entry = null;
    while (!s.isAtEof() && !s.nextCharIs('}')) {
      var p2 =
          p.withContext(
              new BB.ParseContext(entry == null, this, bbRefCtx, ctx.forFunctionRef, p.context()));
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

    deferredBbs.forEach(
        (label, bbRef) -> {
          if (!bbs.containsKey(label)) {
            throw new IllegalArgumentException(
                "Basic block with label '" + label + "' does not exist.");
          }
          bbRef.set(bbs.get(label));
        });
    fixBbPreds.forEach(Runnable::run);
  }
}
