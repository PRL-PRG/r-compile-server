package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Collections;
import java.util.SequencedSet;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.CFGEdit.ReplaceInJumpTargets;
import org.prlprg.ir.cfg.instr.JumpData;
import org.prlprg.ir.cfg.instr.JumpData.Branch;
import org.prlprg.util.SmallListSet;

/** IR instruction which is the final instruction and outgoing edge of a basic block.
 *
 * @see Instr
 */
public final class Jump extends Instr {
  /** This is {@code null} when the jump isn't in a {@link BB}, i.e. removed or not yet added. */
  private @Nullable BB bb;

  private final SequencedSet<BB> cachedTargets = new SmallListSet<>();

  // region construct
  /** Serialized form where everything is replaced by IDs. */
  public record Serial(
      @Override MapToIdIn<JumpData> data,
      @Override ImmutableList<LocalNodeId<?>> outputIds) implements Instr.Serial {
    Serial(Jump node) {
      this(
          MapToIdIn.of((JumpData) node.data),
          node.outputs().stream().map(LocalNode::id).collect(ImmutableList.toImmutableList())
      );
    }
  }

  /** Creates a jump.
   *
   * <p>Doesn't {@link CFG#track(InstrOrPhi)} it in the {@link CFG}, so this should be called in
   * {@link BB}. */
  Jump(CFG cfg, JumpData data) {
    super(cfg, data);

    updateCachedTargets();
  }
  // endregion construct

  // region BB
  /**
   * Basic block containing this jump.
   *
   * <p>Allows {@link Jump} to change other {@link BB}'s predecessors when it gets mutated. Only
   * jumps store their block for better time complexity when splitting and merging.
   */
  BB bb() {
    assert bb != null
        : "Jump has no BB (the jump is either misconfigured or isn't currently in a block)";
    assert bb.jump() == this : "Jump BB's jump isn't itself";
    return bb;
  }

  /**
   * Denote the basic block as containing this jump from within the jump.
   *
   * <p>Called by {@link BB} when adding/removing/replacing its jump and during splitting and
   * merging. Shouldn't be called in other places.
   */
  void unsafeSetBB(@Nullable BB bb) {
    this.bb = bb;
  }
  // endregion BB

  // region targets
  /**
   * (A shallow copy of) {@link BB}s that this jump can go to.
   *
   * <p>These are in the same order as they are defined in {@link #inputs()} and the
   * {@link JumpData} this was constructed with. Duplicates (e.g. in {@link Branch}es) that are
   * redundant and will be cleaned up later) are removed.
   */
  public @UnmodifiableView SequencedSet<BB> targets() {
    return Collections.unmodifiableSequencedSet(cachedTargets);
  }

  /** Whether this is a return (0 targets), goto (1 target), or branch (2 targets).
   *
   * <p>This is entirely dependent on the number of targets.
   */
  public ControlFlow controlFlow() {
    var targetsIter = targets().iterator();
    return switch (targets().size()) {
      case 0 -> new ControlFlow.Return();
      case 1 -> new ControlFlow.Goto(targetsIter.next());
      case 2 -> new ControlFlow.Branch(targetsIter.next(), targetsIter.next());
      default -> throw new IllegalStateException(
          "Jump has " + targets().size() + " targets, we haven't handled that");
    };
  }

  /** Replace any occurrences of the target block in {@link #targets()}.
   *
   * <p>This records a {@link CFGEdit}.
   */
  public void replaceInTargets(BB old, BB replacement) {
    unsafeReplaceInTargets(old, replacement);

    cfg().record(new ReplaceInJumpTargets(this, old, replacement), new ReplaceInJumpTargets(this, replacement, old));
  }

  /** Replace any occurrences of the target block in {@link #targets()}.
   *
   * <p>This doesn't record a {@link CFGEdit}, so it should only be used internally by another
   * function that returns its on intrinsic edit (hence "unsafe").
   */
  void unsafeReplaceInTargets(BB old, BB replacement) {
    var didReplace = false;
    for (var i = 0; i < inputs.length; i++) {
      if (inputs[i] == old) {
        didReplace = true;
        inputs[i] = replacement;
      }
    }

    if (!didReplace) {
      return;
    }

    // Update precessors
    old.unsafeRemovePredecessor(bb());
    replacement.unsafeAddPredecessor(bb());

    data = data.setInputs(inputs);

    // Don't need to update `fun()`, `effects()`, or `outputTypes()` because they're guaranteed to
    // be the same.

    updateCachedTargets();
  }

  private void updateCachedTargets() {
    cachedTargets.clear();
    for (var input : inputs()) {
      if (input instanceof BB target) {
        cachedTargets.add(target);
      }
    }
  }
  // endregion targets

  // region inherited
  @Override
  public boolean isPure() {
    return false;
  }
  // endregion inherited
}