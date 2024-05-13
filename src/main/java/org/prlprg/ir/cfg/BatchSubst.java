package org.prlprg.ir.cfg;

import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;

/**
 * Records a set of {@link Node} substitutions to be performed all at once for efficiency.
 *
 * <p>Typically to substitute all nodes in a {@link CFG}, call {@link CFG#batchSubst(Consumer)}.
 * However, this class can also be instantiated directly and substitute nodes in any collection of
 * instructions and phis (e.g. if you know only a subset of them need substitutions).
 *
 * @see CFG#batchSubst(Consumer)
 */
public class BatchSubst {
  private final Map<Node, Node> substs;

  /** Create a new set of substitutions. */
  public BatchSubst() {
    substs = new HashMap<>();
  }

  /**
   * Create a new set of substitutions, pre-allocating for the given expected number.
   *
   * <p>This is equivalent to {@link BatchSubst} except may be faster if the approximate number of
   * substitutions is known in advance.
   */
  public BatchSubst(int initialCapacity) {
    substs = new HashMap<>(initialCapacity);
  }

  /**
   * Add a substitution to be performed.
   *
   * @throws IllegalArgumentException if {@code from} was already staged to be substituted with a
   *     different {@code to}.
   */
  public void stage(Node from, Node to) {
    if (substs.get(from) == to) {
      return;
    } else if (substs.containsKey(from)) {
      throw new IllegalArgumentException(
          "node already substituted: " + from + " old-> " + substs.get(from) + ", new-> " + to);
    }
    substs.put(from, to);
  }

  /** Run the given substitutions on the given instructions and phis. */
  public void commit(Iterable<InstrOrPhi> instrsAndPhis) {
    for (var instrOrPhi : instrsAndPhis) {
      for (var arg : instrOrPhi.args()) {
        var replacement = substs.get(arg);
        if (replacement != null) {
          instrOrPhi.replaceInArgs(arg, replacement);
        }
      }
    }
  }

  /** Run the given substitutions on all instructions and phis in the {@link CFG}. */
  public void commit(CFG cfg) {
    commit1(cfg.iter());
  }

  /** Run the given substitutions on all instructions and phis in the given {@link BB}s. */
  public void commit1(Iterable<BB> bbs) {
    for (var bb : bbs) {
      commit(bb);
    }
  }
}
