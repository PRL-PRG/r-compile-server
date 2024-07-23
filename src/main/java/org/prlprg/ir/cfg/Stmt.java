package org.prlprg.ir.cfg;

/**
 * IR instruction which isn't the final instruction of a basic block and doesn't affect control
 * flow.
 *
 * @see Instr
 */
public final class Stmt extends Instr {
  Stmt(CFG cfg, StmtData data) {
    super(cfg, data);
  }

  /**
   * Constructor arguments that can be stored in a collection (since there are multiple;
   * alternatively could use {@link org.prlprg.util.Pair} but this is clearer).
   */
  record Args(String name, StmtData data) {
    public Args(StmtData data) {
      this("", data);
    }
  }

  /** Serialized form where everything is replaced by IDs. */
  record Serial(MapToIdIn<? extends StmtData> data) {
    Serial(Stmt node) {
      this(MapToIdIn.of((StmtData) node.data));
    }
  }
}