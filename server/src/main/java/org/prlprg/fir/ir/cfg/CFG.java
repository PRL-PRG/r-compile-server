package org.prlprg.fir.ir.cfg;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.instruction.FirParseContext;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.IrText;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.BlockParameter;
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

  // --- Parsing --------------------------------------------------------------------------------

  /// Parse this (freshly constructed, empty) CFG's body: the entry block followed by the labeled
  /// blocks, up to but not including the closing `}`.
  ///
  /// `p`'s context must be `ctx`, the [FirParseContext] whose 'cfg' is this CFG.
  public void parseInto(Parser p, FirParseContext ctx) {
    var s = p.scanner();

    // The entry block has no header, so any leading comments are indistinguishable from the first
    // instruction's comments (only indentation differs, which the scanner skips). Attach them to
    // the first instruction (not the entry block) — that's where the printer puts statement/jump
    // comments, so this round-trips. (A genuine entry-block comment would re-home to the first
    // instruction, but the printer never emits one distinctly.)
    parseInstructionsInto(p, ctx, entry);

    var defined = new HashSet<String>();
    while (!s.isAtEof() && !s.nextCharIs('}')) {
      var comments = p.parse(Comments.class);
      var label = s.readIdentifierOrKeyword();
      if (!defined.add(label)) {
        throw s.fail("basic block with label '" + label + "' already exists");
      }
      var bb = getOrAddBB(label);
      bb.comments().addAll(comments);

      if (s.nextCharIs('(')) {
        s.assertAndSkip('(');
        if (!s.nextCharIs(')')) {
          do {
            var name = s.readIdentifierOrKeyword();
            s.assertAndSkip(':');
            var parameter = new BlockParameter(name, p.parse(Type.class));
            bb.appendPhiParameter(parameter);
            ctx.define(name, parameter);
          } while (s.trySkip(','));
        }
        s.assertAndSkip(')');
      }
      s.assertAndSkip(':');

      parseInstructionsInto(p, ctx, bb);
    }

    for (var bb : bbs.values()) {
      if (!bb.isEntry() && !defined.contains(bb.label())) {
        throw s.fail("basic block '" + bb.label() + "' is referenced but never defined");
      }
    }
  }

  private void parseInstructionsInto(Parser p, FirParseContext ctx, BB bb) {
    var s = p.scanner();
    Instruction instruction;
    do {
      instruction = IrText.parseInstruction(p, ctx);
      // `null` is a legacy forwarding binding (`r = <arg>`): it emits no instruction (the binding
      // was recorded in the context), but still terminates with `;`.
      if (instruction instanceof Jump jump) {
        bb.setJump(jump);
      } else if (instruction != null) {
        bb.appendStatement((Statement) instruction);
      }
      s.assertAndSkip(';');
    } while (!(instruction instanceof Jump));
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

  @PrintMethod
  private void print(Printer p) {
    p.printSeparated("\n", bbsInPrintOrder());
  }
}
