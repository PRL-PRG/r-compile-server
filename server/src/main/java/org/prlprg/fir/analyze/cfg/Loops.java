package org.prlprg.fir.analyze.cfg;

import java.util.ArrayDeque;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.analyze.CfgAnalysis;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Tracks loops in the control-flow graph.
///
/// Finds *natural* loops: for each back edge (an edge whose target dominates its source), the loop
/// is its target (the header) plus every block that reaches the source without passing through the
/// header. Back edges that share a header form a single loop. Loops in an irreducible CFG, whose
/// entry points are not dominated by any single block, have no back edge and are not reported.
///
/// Nested loops are reported as separate, overlapping [Loop]s: the outer one contains all of the
/// inner one's blocks, so [#getInnermostLoop] is the smallest loop containing a block.
public final class Loops implements CfgAnalysis {
  private final CFG cfg;
  private final CfgDominatorTree dominatorTree;
  private final Set<Loop> loops;
  private final Map<BB, Set<Loop>> blockToLoops;

  @AnalysisConstructor
  public Loops(CFG cfg, CfgDominatorTree dominatorTree) {
    this.cfg = cfg;
    this.dominatorTree = dominatorTree;
    this.loops = new LinkedHashSet<>();
    this.blockToLoops = new HashMap<>();
    findLoops();
  }

  /// Represents a natural loop in the CFG.
  public static class Loop {
    private final BB header;
    private final Set<BB> blocks;
    private final Set<BB> latches;

    public Loop(BB header) {
      this.header = header;
      this.blocks = new LinkedHashSet<>();
      this.latches = new LinkedHashSet<>();
      this.blocks.add(header);
    }

    /// The loop's entry block, which dominates every other block in it.
    public BB getHeader() {
      return header;
    }

    /// Every block in the loop, including the header and the latches.
    public @Unmodifiable Set<BB> getBlocks() {
      return Collections.unmodifiableSet(blocks);
    }

    /// The loop's latches: the blocks with a back edge to [#getHeader]. There is at least one, and
    /// a loop whose header branches straight back to itself has the header as its own latch.
    public @Unmodifiable Set<BB> getBackEdges() {
      return Collections.unmodifiableSet(latches);
    }

    public boolean contains(BB bb) {
      return blocks.contains(bb);
    }

    /// Returns whether the block wasn't already in the loop.
    boolean addBlock(BB bb) {
      return blocks.add(bb);
    }

    void addLatch(BB bb) {
      latches.add(bb);
    }

    @Override
    public String toString() {
      return "Loop{header=" + header.label() + ", blocks=" + blocks.size() + "}";
    }
  }

  /// Get all loops in the CFG.
  public @Unmodifiable Set<Loop> getLoops() {
    return Collections.unmodifiableSet(loops);
  }

  /// Get all loops that contain the given basic block.
  public @Unmodifiable Set<Loop> getLoopsContaining(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return Collections.unmodifiableSet(blockToLoops.getOrDefault(bb, Set.of()));
  }

  /// Check if a basic block is a loop header.
  public boolean isLoopHeader(BB bb) {
    if (bb.owner() != cfg) {
      throw new IllegalArgumentException("BB not in CFG");
    }
    return loops.stream().anyMatch(loop -> loop.getHeader() == bb);
  }

  /// Get the innermost loop containing the given basic block, or `null` if it's in no loop.
  public @Nullable Loop getInnermostLoop(BB bb) {
    Loop innermost = null;
    var minSize = Integer.MAX_VALUE;

    for (var loop : getLoopsContaining(bb)) {
      if (loop.getBlocks().size() < minSize) {
        minSize = loop.getBlocks().size();
        innermost = loop;
      }
    }

    return innermost;
  }

  private void findLoops() {
    // For each back edge, construct the natural loop
    for (var backEdge : findBackEdges()) {
      var header = backEdge.target;
      var tail = backEdge.source;

      // Find existing loop with this header or create new one
      var loop =
          loops.stream()
              .filter(l -> l.getHeader() == header)
              .findFirst()
              .orElseGet(
                  () -> {
                    var newLoop = new Loop(header);
                    loops.add(newLoop);
                    return newLoop;
                  });

      loop.addLatch(tail);

      // Find all blocks in the natural loop
      findLoopBlocks(loop, header, tail);
    }

    // Update block-to-loops mapping
    for (var loop : loops) {
      for (var bb : loop.getBlocks()) {
        blockToLoops.computeIfAbsent(bb, _ -> new LinkedHashSet<>()).add(loop);
      }
    }
  }

  private record BackEdge(BB source, BB target) {}

  /// The edges whose target dominates their source, found by a depth-first search from the entry.
  ///
  /// Iterative rather than recursive, so a CFG deeper than the JVM stack doesn't overflow it.
  private Set<BackEdge> findBackEdges() {
    var backEdges = new LinkedHashSet<BackEdge>();
    var visited = new HashSet<BB>();
    // The blocks on the current DFS path. An edge back into one of these is a retreating edge.
    var onPath = new HashSet<BB>();
    var stack = new ArrayDeque<Frame>();

    var entry = cfg.entry();
    visited.add(entry);
    onPath.add(entry);
    stack.push(new Frame(entry, entry.successors().iterator()));

    while (!stack.isEmpty()) {
      var frame = stack.peek();

      if (!frame.successors.hasNext()) {
        onPath.remove(frame.bb);
        stack.pop();
        continue;
      }

      var successor = frame.successors.next();
      if (onPath.contains(successor)) {
        // A retreating edge, which is a back edge iff its target dominates its source. (For a
        // reducible CFG that's always true; for an irreducible one it isn't, and there is no
        // natural loop to report.)
        if (dominatorTree.dominates(successor, frame.bb)) {
          backEdges.add(new BackEdge(frame.bb, successor));
        }
      } else if (visited.add(successor)) {
        onPath.add(successor);
        stack.push(new Frame(successor, successor.successors().iterator()));
      }
    }

    return backEdges;
  }

  private record Frame(BB bb, Iterator<BB> successors) {}

  private void findLoopBlocks(Loop loop, BB header, BB tail) {
    var worklist = new ArrayDeque<BB>();

    // The loop's blocks double as the visited set: a block already known to be in the loop had its
    // predecessors walked when it was added, so it never needs to be walked again.
    loop.addBlock(header);
    if (loop.addBlock(tail)) {
      worklist.push(tail);
    }

    // Work backwards from the tail. The header is already in the loop, so the walk stops there:
    // every path from the entry to the tail goes through the header, since the header dominates it.
    while (!worklist.isEmpty()) {
      var current = worklist.pop();

      for (var pred : current.predecessors()) {
        if (loop.addBlock(pred)) {
          worklist.push(pred);
        }
      }
    }
  }
}
