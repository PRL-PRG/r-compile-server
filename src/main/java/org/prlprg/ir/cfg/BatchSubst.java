package org.prlprg.ir.cfg;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
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
  private final Map<Node, List<Node>> reverseSubsts;

  /** Create a new set of substitutions. */
  public BatchSubst() {
    substs = new HashMap<>();
    reverseSubsts = new HashMap<>();
  }

  /**
   * Create a new set of substitutions, pre-allocating for the given expected number.
   *
   * <p>This is equivalent to {@link BatchSubst} except may be faster if the approximate number of
   * substitutions is known in advance.
   */
  public BatchSubst(int initialCapacity) {
    substs = new HashMap<>(initialCapacity);
    reverseSubsts = new HashMap<>(initialCapacity);
  }

  /**
   * Add a substitution to be performed when this is {@linkplain #commit(CFG) committed}.
   *
   * <p>Note that {@code from} won't be removed, only its occurrences will be substituted. You must
   * also call {@link BB#remove(InstrOrPhi) bb.remove(from)} to remove {@code from}.
   *
   * @throws IllegalArgumentException if {@code from} was already staged to be substituted with a
   *     different {@code to}.
   */
  public void stage(Node from, Node to) {
    if (from == to || substs.get(from) == to) {
      return;
    } else if (substs.containsKey(from)) {
      throw new IllegalArgumentException(
          "node already substituted: " + from + " old-> " + substs.get(from) + ", new-> " + to);
    }

    // Apply transitive substitutions. If we have:
    // - `from` -> `to`
    // - `to` -> `to2`
    // it becomes
    // - `from` -> `to2`
    // - `to` -> `to2`
    if (substs.containsKey(to)) {
      to = substs.get(to);
    }

    // Add substitution.
    substs.put(from, to);

    // Track reverse substitutions for transitive substitutions (below).
    var toReverseSubsts = reverseSubsts.computeIfAbsent(to, _ -> new ArrayList<>());
    toReverseSubsts.add(from);

    // Apply transitive substitutions. If we have:
    // - `from` -> `mid`
    // - `mid` -> `to`
    // it becomes
    // - `from` -> `to`
    // - `mid` -> `to`
    var fromReverseSubsts = reverseSubsts.remove(from);
    if (fromReverseSubsts != null) {
      for (var transitiveFrom : fromReverseSubsts) {
        substs.put(transitiveFrom, to);
      }
      toReverseSubsts.addAll(fromReverseSubsts);
    }
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
