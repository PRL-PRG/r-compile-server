package org.prlprg.fir.analyze;

import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import java.util.Stack;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;

/// Tracks loops in the control-flow graph.
public final class Loops {
  private final CFG cfg;
  private final DominatorTree dominatorTree;
  private final Set<Loop> loops;
  private final Map<BB, Set<Loop>> blockToLoops;

  public Loops(CFG cfg) {
    this.cfg = cfg;
    this.dominatorTree = new DominatorTree(cfg);
    this.loops = new LinkedHashSet<>();
    this.blockToLoops = new HashMap<>();
    findLoops();
  }

  /// Represents a natural loop in the CFG.
  public static class Loop {
    private final BB header;
    private final Set<BB> blocks;
    private final Set<BB> backEdges;

    public Loop(BB header) {
      this.header = header;
      this.blocks = new LinkedHashSet<>();
      this.backEdges = new HashSet<>();
      this.blocks.add(header);
    }

    public BB getHeader() {
      return header;
    }

    public Set<BB> getBlocks() {
      return blocks;
    }

    public Set<BB> getBackEdges() {
      return backEdges;
    }

    public boolean contains(BB bb) {
      return blocks.contains(bb);
    }

    void addBlock(BB bb) {
      blocks.add(bb);
    }

    void addBackEdge(BB bb) {
      backEdges.add(bb);
    }

    @Override
    public String toString() {
      return "Loop{header=" + header.label() + ", blocks=" + blocks.size() + "}";
    }
  }

  /// Get all loops in the CFG.
  public Set<Loop> getLoops() {
    return loops;
  }

  /// Get all loops that contain the given basic block.
  public Set<Loop> getLoopsContaining(BB bb) {
    return blockToLoops.getOrDefault(bb, Set.of());
  }

  /// Check if a basic block is a loop header.
  public boolean isLoopHeader(BB bb) {
    return loops.stream().anyMatch(loop -> loop.getHeader() == bb);
  }

  /// Get the innermost loop containing the given basic block.
  public Loop getInnermostLoop(BB bb) {
    var containingLoops = getLoopsContaining(bb);
    Loop innermost = null;
    var minSize = Integer.MAX_VALUE;

    for (var loop : containingLoops) {
      if (loop.getBlocks().size() < minSize) {
        minSize = loop.getBlocks().size();
        innermost = loop;
      }
    }

    return innermost;
  }

  private void findLoops() {
    // Find back edges using DFS and dominator information
    var visited = new HashSet<BB>();
    var recursionStack = new HashSet<BB>();
    var backEdges = new HashSet<BackEdge>();

    dfsBackEdges(cfg.entry(), visited, recursionStack, backEdges);

    // For each back edge, construct the natural loop
    for (var backEdge : backEdges) {
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

      loop.addBackEdge(tail);

      // Find all blocks in the natural loop
      findLoopBlocks(loop, header, tail);
    }

    // Update block-to-loops mapping
    for (var loop : loops) {
      for (var bb : loop.getBlocks()) {
        blockToLoops.computeIfAbsent(bb, k -> new LinkedHashSet<>()).add(loop);
      }
    }
  }

  private record BackEdge(BB source, BB target) {}

  private void dfsBackEdges(
      BB current, Set<BB> visited, Set<BB> recursionStack, Set<BackEdge> backEdges) {
    visited.add(current);
    recursionStack.add(current);

    for (var successor : current.successors()) {
      if (recursionStack.contains(successor)) {
        // This is a back edge if successor dominates current
        if (dominatorTree.dominates(successor, current)) {
          backEdges.add(new BackEdge(current, successor));
        }
      } else if (!visited.contains(successor)) {
        dfsBackEdges(successor, visited, recursionStack, backEdges);
      }
    }

    recursionStack.remove(current);
  }

  private void findLoopBlocks(Loop loop, BB header, BB tail) {
    var worklist = new Stack<BB>();
    var inLoop = new HashSet<BB>();

    // Start with header and tail
    inLoop.add(header);
    inLoop.add(tail);
    loop.addBlock(header);
    loop.addBlock(tail);

    // Add tail to worklist if it's not the header
    if (tail != header) {
      worklist.push(tail);
    }

    // Work backwards from tail to find all blocks in the loop
    while (!worklist.isEmpty()) {
      var current = worklist.pop();

      for (var pred : current.predecessors()) {
        if (!inLoop.contains(pred)) {
          inLoop.add(pred);
          loop.addBlock(pred);
          worklist.push(pred);
        }
      }
    }
  }
}
