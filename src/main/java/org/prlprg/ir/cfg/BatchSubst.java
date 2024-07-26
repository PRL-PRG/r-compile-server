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
  private final Map<Node<?>, Node<?>> substs;
  private final Map<Node<?>, List<Node<?>>> reverseSubsts;

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
   * also call {@link BB#remove(InstrOrPhi)} on the phi or instruction containing {@code from} to
   * remove it.
   *
   * @throws IllegalArgumentException if {@code from} was already staged to be substituted with a
   *     different {@code to}.
   */
  public void stage(Node<?> from, Node<?> to) {
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

  /** Run the given substitutions on all instructions and phis in the {@link CFG}. */
  public void commit(CFG cfg) {
    if (isEmpty()) {
      return;
    }

    commit(cfg.iter());
  }

  /** Run the given substitutions on all instructions and phis in the given {@link BB}s.
   *
   * <p>Note that cascading changes may affect {@link Instr#effects()} and {@link Node#type()}s of
   * {@link Instr}s and their output {@link Node}s outside the given BBs.
   */
  public void commit(Iterable<BB> bbs) {
    if (isEmpty()) {
      return;
    }

    for (var bb : bbs) {
      commit(bb);
    }
  }

  /** Run the given substitutions on the given instructions and phis in the given {@link BB}.
   *
   * <p>Note that cascading changes may affect {@link Instr#effects()} and {@link Node#type()}s of
   * {@link Instr}s and their output {@link Node}s outside the given BB.
   */
  public void commit(BB bb) {
    if (isEmpty()) {
      return;
    }

    var duAnalysis = bb.cfg().defUses();

    var seen = new CascadingUpdatedInstrs();
    var update = CascadingInstrUpdate.NONE;
    var updatedOutputs = new ArrayList<LocalNode<?>>();

    for (var instrOrPhi : bb) {
      for (var arg : instrOrPhi.inputNodes()) {
        var replacement = substs.get(arg);
        if (replacement != null) {
          var newUpdate = InstrOrPhiImpl.cast(instrOrPhi).unsafeReplaceInInputs(seen, arg, replacement);

          if (newUpdate.updatedOutputTypes()) {
            updatedOutputs.addAll(instrOrPhi.outputs());
          }
          update = update.merge(newUpdate);
        }
      }
    }

    var prevUpdatedOutputs = new ArrayList<LocalNode<?>>();
    while (update.updatedOutputTypes()) {
      update = CascadingInstrUpdate.NONE;
      prevUpdatedOutputs.addAll(updatedOutputs);
      updatedOutputs.clear();

      for (var output : prevUpdatedOutputs) {
        for (var instrOrPhi : duAnalysis.uses(output)) {
          if (!(instrOrPhi instanceof Instr instr)) {
            continue;
          }

          var newUpdate = instr.unsafeCascadeUpdate(seen);

          if (newUpdate.updatedOutputTypes()) {
            updatedOutputs.addAll(instrOrPhi.outputs());
          }
          update = update.merge(newUpdate);
        }
      }
    }
  }

  /**
   * Returns {@code true} iff no substitutions have been staged.
   *
   * <p>If true, we make commit a no-op.
   */
  private boolean isEmpty() {
    return substs.isEmpty();
  }
}
