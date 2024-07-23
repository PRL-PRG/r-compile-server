package org.prlprg.ir.cfg;

import java.util.Collections;
import java.util.SequencedSet;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.JumpData.Branch;
import org.prlprg.util.SmallListSet;

/** IR instruction which is the final instruction and outgoing edge of a basic block.
 *
 * @see Instr
 */
public final class Jump extends Instr {
  /**
   * This is only {@code null} to keep {@link InstrData#make(CFG, NodeId)} not require {@link BB}.
   * It gets set immediately after creation.
   */
  private @Nullable BB bb;

  private final SequencedSet<BB> cachedTargets = new SmallListSet<>();

  // region construct
  Jump(CFG cfg, JumpData data) {
    super(cfg, data);
    updateCachedTargets();
  }

  /**
   * Constructor arguments that can be stored in a collection (since there are multiple;
   * alternatively could use {@link org.prlprg.util.Pair} but this is clearer).
   */
  record Args(String name, JumpData data) {
    public Args(JumpData data) {
      this("", data);
    }
  }

  /** Serialized form where everything is replaced by IDs. */
  record Serial(MapToIdIn<? extends JumpData> data) {
    Serial(Jump node) {
      this(MapToIdIn.of((JumpData) node.data));
    }
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
   * <p>These are in the same order as they are defined in {@link #data()} (the {@link JumpData}
   * record). Duplicates (e.g. in redundant {@link Branch}es) are removed.
   */
  public @UnmodifiableView SequencedSet<BB> targets() {
    return Collections.unmodifiableSequencedSet(cachedTargets);
  }

  /**
   * Replace the target block in {@link #targets()} and {@link #data()}.
   *
   * @throws IllegalArgumentException If the old target block wasn't in {@link #targets()}.
   */
  void replaceInTargets(BB old, BB replacement) {
    var oldData = data;

    for (var i = 0; i < inputs.length; i++) {
      if (inputs[i] == old) {
        inputs[i] = replacement;
      }
    }

    data = data.setInputs(inputs);

    // Don't need to update `fun()`, `effects()`, or `outputTypes()` because they're guaranteed to
    // be the same.

    updateCachedTargets();

    cfg().record(new ReplaceInTargets(this, data), new ReplaceInTargets(this, oldData));
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
}