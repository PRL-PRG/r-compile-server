package org.prlprg.ir.cfg;

import org.prlprg.ir.cfg.CFGEdit.MutateInstrOrPhiId;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/**
 * Common package-private logic between {@linkplain Instr instructions} and {@linkplain Phi phis}.
 */
abstract sealed class InstrOrPhiImpl implements LocalNode permits PhiImpl, InstrImpl {
  private final CFG cfg;
  private InstrOrPhiIdImpl<?> id;

  /**
   * Return the given instruction or phi casted.
   *
   * <p>Any {@link InstrOrPhi} is guaranteed to be an {@link InstrOrPhiImpl}, so this method is
   * provided to reduce the number of casts in the code text.
   */
  static InstrOrPhiImpl cast(InstrOrPhi instrOrPhi) {
    return (InstrOrPhiImpl) instrOrPhi;
  }

  protected InstrOrPhiImpl(CFG cfg, NodeId<? extends InstrOrPhi> id) {
    this.cfg = cfg;
    this.id = InstrOrPhiIdImpl.cast(id);
    this.id.lateAssignClass(getClass());
  }

  // @Override
  public final void rename(String newName) {
    setId(cfg().uniqueInstrOrPhiId(newName));
  }

  @Override
  public NodeId<? extends InstrOrPhi> id() {
    return uncheckedCastId();
  }

  @Override
  public CFG cfg() {
    return cfg;
  }

  @SuppressWarnings("unchecked")
  protected <T extends InstrOrPhi> NodeId<T> uncheckedCastId() {
    return (NodeId<T>) id;
  }

  /**
   * Change the instruction or phi's id.
   *
   * <p>This is called internally and only when a specific ID is needed (e.g. for {@link CFGEdit}
   * undo/replay or {@link CFGCleanup} re-numbering), otherwise call {@link #rename(String)}.
   *
   * @throws IllegalArgumentException If the ID class isn't delayed or the instruction or phi class.
   *     <p><b>OR</b> if the ID is taken by another instruction or phi in the CFG.
   */
  final void setId(NodeId<? extends InstrOrPhi> newId) {
    var oldId = id();

    var newId1 = InstrOrPhiIdImpl.cast(newId);
    newId1.lateAssignClass(getClass());

    cfg().untrack((InstrOrPhi) this);
    id = newId1;
    cfg().track((InstrOrPhi) this);

    cfg().record(new MutateInstrOrPhiId(oldId, newId), new MutateInstrOrPhiId(newId, oldId));
  }

  // region serialization and deserialization
  @ParseMethod
  private Phi<?> parse(Parser p) {
    throw new UnsupportedOperationException("can't parse an instruction or phi outside of a BB");
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new CFGParseOrPrintContext(p.context(), cfg()).new BBContext(null)).print(this);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
