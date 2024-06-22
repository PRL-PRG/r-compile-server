package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.Arrays;
import javax.annotation.Nullable;
import org.prlprg.util.Reflection;

/** IR instruction which is the final instruction and outgoing edge of a basic block. */
public non-sealed interface Jump extends Instr {
  /**
   * (A shallow copy of) {@link BB}s that this jump can go to.
   *
   * <p>These are in the same order as they are defined in {@link #data()} (the {@link JumpData}
   * record).
   */
  ImmutableList<BB> targets();

  /**
   * Replace the target block in {@link #targets()} and {@link #data()}.
   *
   * @throws IllegalArgumentException If the old target block wasn't in {@link #targets()}.
   */
  void replaceInTargets(BB old, BB replacement);

  @Override
  JumpData<?> data();

  @Override
  NodeId<? extends Jump> id();

  /** Serialized form where everything is replaced by IDs. */
  record Serial(NodeId<? extends Jump> id, MapToIdIn<? extends JumpData<?>> data) {
    Serial(Jump node) {
      this(NodeId.of(node), MapToIdIn.of((JumpData<? extends Jump>) node.data()));
    }
  }
}

abstract non-sealed class JumpImpl<D extends JumpData<?>> extends InstrImpl<D> implements Jump {
  /**
   * This is only {@code null} to keep {@link InstrData#make(CFG, NodeId)} not require {@link BB}.
   * It gets set immediately after creation.
   */
  private @Nullable BB bb;

  // Set after creation in `computeTargets`
  @SuppressWarnings("NotNullFieldNotInitialized")
  @SuppressFBWarnings("NP_NONNULL_FIELD_NOT_INITIALIZED_IN_CONSTRUCTOR")
  private ImmutableList<BB> targets;

  JumpImpl(Class<D> dataClass, CFG cfg, NodeId<? extends Instr> id, D data) {
    super(dataClass, cfg, id, data);
  }

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

  @Override
  public ImmutableList<BB> targets() {
    return targets;
  }

  private void computeTargets() {
    // Reflectively get all BB record components
    if (!(data() instanceof Record r)) {
      throw new IllegalArgumentException("data is not a record");
    }

    targets =
        Arrays.stream(data().getClass().getRecordComponents())
            .filter(cmp -> cmp.getType() == BB.class)
            .map(cmp -> (BB) Reflection.getComponent(r, cmp))
            .collect(ImmutableList.toImmutableList());
  }

  /**
   * Replace the target block in {@link #targets()} and {@link #data()}.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded. It should only be used
   * internally by {@link BB}.
   *
   * @throws IllegalArgumentException If the old target block wasn't in {@link #targets()}.
   */
  void unsafeReplaceInTargets(BB old, BB replacement) {
    unsafeReplaceInData("BB", old, replacement);
  }

  @SuppressWarnings("unchecked")
  @Override
  public void replaceInTargets(BB old, BB replacement) {
    var oldData = data();
    unsafeReplaceInTargets(old, replacement);

    cfg()
        .record(
            new CFGEdit.MutateInstrArgs<>(this, (JumpData<Jump>) data()),
            new CFGEdit.MutateInstrArgs<>(this, (JumpData<Jump>) oldData));
  }

  @Override
  protected void verify(boolean isInsert) throws InstrVerifyException {
    super.verify(isInsert);
    computeTargets();
  }

  @Override
  public NodeId<? extends Jump> id() {
    return uncheckedCastId();
  }
}

/** {@link Jump} which doesn't return anything. */
final class VoidJumpImpl extends JumpImpl<JumpData.Void> {
  VoidJumpImpl(CFG cfg, NodeId<? extends Instr> id, JumpData.Void data) {
    super(JumpData.Void.class, cfg, id, data);
  }

  @Override
  public ImmutableList<Node> returns() {
    return ImmutableList.of();
  }
}
