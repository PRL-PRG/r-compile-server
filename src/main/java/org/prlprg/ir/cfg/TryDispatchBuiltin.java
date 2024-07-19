package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.StmtData.TryDispatchBuiltin_;
import org.prlprg.ir.type.RType;

/**
 * {@link Stmt} (IR instruction) which produces a boolean {@link ISexp} (whether it dispatched) and
 * second {@link ISexp} (the result if it dispatched, otherwise undefined).
 *
 * <p>IR node which corresponds to a runtime context. But there is only one, which is this
 * instruction type. If more need to be added (or there can be {@link Phi}s), we'll need to extract
 * a {@link Node} interface and rename this to {@code TryDispatchBuiltinStmt}.
 */
public interface TryDispatchBuiltin extends Stmt {
  @Override
  NodeId<? extends TryDispatchBuiltin> id();

  @Override
  TryDispatchBuiltin_ data();

  /** A boolean {@link ISexp} that is true iff the builtin was dispatched. */
  ISexp dispatched();

  /**
   * An {@link ISexp} that is the dispatch result in the same trace {@link #dispatched()} is true.
   *
   * <p>If {@code dispatched} is false this value is undefined.
   */
  ISexp value();
}

final class TryDispatchBuiltinImpl extends StmtImpl<TryDispatchBuiltin_>
    implements TryDispatchBuiltin {
  private final ISexp dispatched =
      new AuxiliaryISexp(this, 0) {
        @Override
        public RType type() {
          return RType.BOOL;
        }
      };

  private final ISexp value =
      new AuxiliaryISexp(this, 1) {
        @Override
        public RType type() {
          return RType.ANY;
        }
      };

  private final ImmutableList<Node> returns = ImmutableList.of(dispatched, value);

  TryDispatchBuiltinImpl(CFG cfg, NodeId<? extends Instr> id, TryDispatchBuiltin_ data) {
    super(TryDispatchBuiltin_.class, cfg, id, data);
  }

  @Override
  public ISexp dispatched() {
    return dispatched;
  }

  @Override
  public ISexp value() {
    return value;
  }

  @Override
  public @UnmodifiableView List<Node> outputs() {
    return returns;
  }

  @Override
  public NodeId<? extends TryDispatchBuiltin> id() {
    return uncheckedCastId();
  }
}
