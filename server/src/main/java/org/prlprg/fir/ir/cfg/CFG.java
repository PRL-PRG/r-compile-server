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
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.parseprint.IrPrintContext;
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

  /// @throws IllegalArgumentException if a block with the given label already exists.
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

  /// The block labeled `label`, creating an empty one if it doesn't exist yet.
  ///
  /// Used while parsing to resolve a jump target that may be defined later in the text.
  public BB getOrAddBB(String label) {
    var existing = bbs.get(label);
    return existing != null ? existing : addBB(label);
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
              bb.setJump(new Jump(new Unreachable()));
              exits.remove(bb);
            });
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  /// A CFG can be printed without any surrounding information, so this forwards to
  /// [IrPrintContext] and callers can just `p.print(cfg)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(new IrPrintContext()).print(this);
  }

  /// The blocks in the order they are printed: non-deopts before deopts, then BB dominators before
  /// dominees, then exits before non-exits, then [naturally](Strings#naturalComparator())
  /// (lexicographically with explicit support for numbers) by label.
  ///
  /// This is a pure function of the CFG's structure (independent of block insertion/creation
  /// order), so the printout is stable. [Abstraction] also uses this order for its register
  /// declarations, so the declarations round-trip (the parser recreates blocks in this same
  /// textual order).
  public List<BB> bbsInPrintOrder() {
    var sorted = new ArrayList<>(bbs.values());
    sorted.sort(
        Comparator.<BB>comparingInt(bb -> bb.label().startsWith("D") ? 1 : 0)
            .thenComparing(new CfgDominatorTree(this).comparator())
            .thenComparing(BB::isExit, Comparator.reverseOrder())
            .thenComparing(BB::label, Strings.naturalComparator()));
    return sorted;
  }
}
