package org.prlprg.ir.analysis;

import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.SequencedSet;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.GlobalNode;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InstrOrPhi;
import org.prlprg.ir.cfg.LocalNode;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.Phi;

/**
 * Analysis to connect a value's definition and references.
 *
 * <p><a href="https://en.wikipedia.org/wiki/Use-define_chain">Wikipedia on use-define chains</a>.
 * This is simple because the graph is already in SSA form.
 */
public class DefUses {
  // region fields
  private final CFG cfg;
  private final HashMap<LocalNode<?>, DuChain> duChains = new HashMap<>();
  private final HashMap<GlobalNode<?>, SequencedSet<InstrOrPhi>> globalUses = new HashMap<>();

  private record DuChain(BB originBB, SequencedSet<InstrOrPhi> uses) {
    DuChain(BB originBb) {
      this(originBb, new LinkedHashSet<>());
    }
  }

  // endregion fields

  // region construct
  /**
   * Computes uses of local nodes in the given CFG.
   *
   * @see CFG#defUses()
   */
  DefUses(CFG cfg) {
    this.cfg = cfg;

    // Populate du-chains
    for (var bb : cfg.iter()) {
      for (var instrOrPhi : bb) {
        for (var output : instrOrPhi.outputs()) {
          duChains.put(output, new DuChain(bb));
        }
      }
    }
    for (var bb : cfg.iter()) {
      for (var instrOrPhi : bb) {
        for (var arg : instrOrPhi.inputNodes()) {
          switch (arg) {
            case LocalNode<?> localArg -> {
              assert localArg.cfg() == cfg;

              var duChain = duChains.get(arg);
              if (duChain == null) {
                throw new IllegalStateException(
                    "node used that isn't defined anywhere in the CFG: " + arg + " in " + cfg);
              }
              duChain.uses.add(instrOrPhi);
            }
            case GlobalNode<?> globalArg ->
                globalUses.computeIfAbsent(globalArg, _ -> new LinkedHashSet<>()).add(instrOrPhi);
          }
        }
      }
    }
  }

  // endregion construct

  // region get uses
  /** (A view of) the uses of the given node. */
  public @UnmodifiableView Collection<InstrOrPhi> uses(Node<?> node) {
    return switch (node) {
      case LocalNode<?> localNode -> uses(localNode);
      case GlobalNode<?> globalNode -> uses(globalNode);
    };
  }

  /**
   * (A view of) the uses of all outputs of the given instruction of phi.
   *
   * <p>If a phi, the "output" is itself.
   */
  public @UnmodifiableView Collection<InstrOrPhi> uses(InstrOrPhi instrOrPhi) {
    return switch (instrOrPhi) {
      case Phi<?> phi -> uses((LocalNode<?>) phi);
      case Instr instr -> uses(instr);
    };
  }

  /** (A view of) the uses of the given node. */
  public @UnmodifiableView Collection<InstrOrPhi> uses(LocalNode<?> node) {
    requireDuChainFor(node);
    return Collections.unmodifiableCollection(duChains.get(node).uses);
  }

  /** (A view of) the uses of the given node. */
  public @UnmodifiableView Collection<InstrOrPhi> uses(GlobalNode<?> node) {
    return Collections.unmodifiableCollection(
        globalUses.getOrDefault(node, Collections.emptySortedSet()));
  }

  /** (A view of) the uses of all outputs of the given instruction. */
  public @UnmodifiableView Collection<InstrOrPhi> uses(Instr instr) {
    return instr.outputs().stream().flatMap(output -> uses(output).stream()).toList();
  }

  /** Does the given node have any uses? */
  public boolean isUsed(Node<?> node) {
    return switch (node) {
      case LocalNode<?> localNode -> isUsed(localNode);
      case GlobalNode<?> globalNode -> isUsed(globalNode);
    };
  }

  /**
   * Do any of the given instruction or phi's outputs have any uses?
   *
   * <p>If a phi, the "output" is itself.
   */
  public boolean isUsed(InstrOrPhi instrOrPhi) {
    return switch (instrOrPhi) {
      case Phi<?> phi -> isUsed((LocalNode<?>) phi);
      case Instr instr -> isUsed(instr);
    };
  }

  /** Does the given node have any uses? */
  public boolean isUsed(LocalNode<?> node) {
    requireDuChainFor(node);
    return !duChains.get(node).uses.isEmpty();
  }

  /** Does the given node have any uses? */
  public boolean isUsed(GlobalNode<?> node) {
    return globalUses.containsKey(node);
  }

  /** Do any of the given instruction's outputs have any uses? */
  public boolean isUsed(Instr instr) {
    return instr.outputs().stream().anyMatch(this::isUsed);
  }

  /** Does the given node have no uses? */
  public boolean isUnused(Node<?> node) {
    return !isUsed(node);
  }

  /**
   * Do none of the given instruction or phi's outputs have any uses?
   *
   * <p>If a phi, the "output" is itself.
   */
  public boolean isUnused(InstrOrPhi instrOrPhi) {
    return !isUsed(instrOrPhi);
  }

  /** Does the given node have no uses? */
  public boolean isUnused(LocalNode<?> node) {
    return !isUsed(node);
  }

  /** Does the given node have no uses? */
  public boolean isUnused(GlobalNode<?> node) {
    return !isUsed(node);
  }

  /** Do none of the given instruction's outputs have any uses? */
  public boolean isUnused(Instr instr) {
    return !isUsed(instr);
  }

  // endregion get uses

  // region get origin BB
  /** The basic block containing the definition of the given local node. */
  public @UnmodifiableView BB originBB(LocalNode<?> node) {
    requireDuChainFor(node);
    return duChains.get(node).originBB;
  }

  // endregion get origin BB

  /** Throw an exception if the DU-chain isn't computed for the given node. */
  private void requireDuChainFor(LocalNode<?> node) {
    if (!duChains.containsKey(node)) {
      throw node.cfg() != cfg
          ? new IllegalArgumentException("node not in CFG: " + node)
          : new IllegalStateException("node created after DefUseAnalysis was run: " + node);
    }
  }
}
