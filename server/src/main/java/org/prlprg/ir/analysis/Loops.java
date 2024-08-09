package org.prlprg.ir.analysis;

import com.google.common.collect.ForwardingCollection;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.SequencedSet;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.ir.analysis.Loops.Loop;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.util.SmallBinarySet;

/**
 * Analysis to find (reducible) loops in the control-flow graph.
 *
 * <p><a href="https://www.cs.purdue.edu/homes/hosking/502/notes/13-loop.pdf">Slides from Purdue
 * (CS502, Tony Hosking)</a>.
 *
 * <p>This is essentially the PIR algorithm re-written in Java. (From PIR) we use the algorithm in
 * the <a href="https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools">Dragon
 * Book</a> to identify loops. We assume no irreducible CFGs (they're almost certainly never
 * compiled, because R doesn't have arbitrary `goto` except in a function that would register as
 * side effecting, and there haven't been issues with PIR). Then we find which loops contain others
 * by checking if the header of the inner loop is in the body of the outer loop (sorting by size for
 * efficiency).
 */
@Immutable
public class Loops extends ForwardingCollection<Loop> {
  /**
   * A set of basic blocks that form a loop.
   *
   * <p>(From PIR) a natural loop is defined by a header <i>h</i>, and a back edge <i>n->h</i> where
   * <i>h</i> dominates <i>n</i>. If there are multiple back edges to the same header, the body is
   * the union of all the nodes computed for each back edge.
   */
  @Unmodifiable
  public static class Loop {
    private BB header;
    private final SequencedSet<BB> body;
    private @Nullable Loop outer = null;
    private boolean isInnermost = true;
    private @Nullable BB preheader = null;

    private Loop(BB header, SequencedSet<BB> body) {
      this.header = header;
      this.body = body;
    }

    private void setOuter(Loop outer) {
      assert this.outer == null;
      this.outer = outer;
      outer.isInnermost = false;
    }

    /** (From PIR) target of loop entry edge(s) and back edge(s). */
    public BB header() {
      return header;
    }

    /** (From PIR) set of all nodes in the loop, including the header and tails. */
    public SequencedSet<BB> body() {
      return body;
    }

    /**
     * (From PIR) the nearest outer loop containing this loop, or {@code null} if this is outermost.
     */
    public @Nullable Loop outer() {
      return outer;
    }

    /** (From PIR) {@code true} iff this loop does not contain another loop. */
    public boolean isInnermost() {
      return isInnermost;
    }

    /**
     * The single predecessor before the {@linkplain #header() header}. Creates one if there are
     * none or multiple.
     */
    public BB ensurePreheader() {
      if (preheader == null) {
        var preds = header.predecessors();
        if (preds.size() == 1) {
          preheader = preds.getFirst();
        } else {
          var newHeader = header.splitNewSuccessor("preheader", 0);
          preheader = header;
          header = newHeader;
        }
      }

      return preheader;
    }

    private int size() {
      return body.size();
    }
  }

  private final Collection<Loop> loops;

  /** Computes loops in the given CFG. */
  public Loops(CFG cfg) {
    // Compute the loops.
    var domTree = cfg.domTree();
    var headsToTails = new HashMap<BB, ArrayList<BB>>();

    // 1. Find back edges = loops
    for (var bb : cfg.dfs()) {
      for (var pred : bb.predecessors()) {
        if (domTree.dominates(bb, pred)) {
          // BB dominates predecessor = back edge.
          // It may dominate multiple predecessors if there's a `next`.
          headsToTails.computeIfAbsent(bb, _ -> new ArrayList<>()).add(pred);
          break;
        }
      }
    }

    // 2. Find the nodes in each loop
    var loops = new SmallBinarySet<>(Comparator.comparingInt(Loop::size));
    for (var entry : headsToTails.entrySet()) {
      var head = entry.getKey();
      var tails = entry.getValue();
      var body = new LinkedHashSet<BB>();
      body.add(head);
      // Reuse `tails` as the worklist to iterate all nodes within the loop.
      while (!tails.isEmpty()) {
        var current = tails.removeLast();
        if (body.add(current)) {
          tails.addAll(current.predecessors());
        }
      }
      loops.add(new Loop(head, body));
    }

    // 3. Find the nesting relationships
    for (var i = 0; i < loops.size(); i++) {
      var inner = loops.get(i);
      for (var j = i + 1; j < loops.size(); j++) {
        var outer = loops.get(j);
        if (outer.body.contains(inner.header)) {
          inner.setOuter(outer);
          break;
        }
      }
    }

    this.loops = Collections.unmodifiableCollection(loops);
  }

  @Override
  protected Collection<Loop> delegate() {
    return loops;
  }
}
