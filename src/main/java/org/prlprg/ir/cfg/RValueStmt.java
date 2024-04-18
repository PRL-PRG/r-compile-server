package org.prlprg.ir.cfg;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;

/** {@link Stmt} (IR instruction) which produces an {@link RValue}. */
public interface RValueStmt extends Stmt, RValue {
  @Override
  NodeId<? extends RValueStmt> id();

  @Override
  StmtData.RValue_ data();
}

/**
 * Needed because, besides {@link RValueStmtImpl}, there is also {@link CallImpl}, and both share
 * this code.
 *
 * <p>There is <i>also</i> {@link EnvStmtImpl}, but it has a static type, so it doesn't share most
 * of the code.
 */
abstract class AbstractRValueStmtImpl<D extends StmtData.RValue_> extends SelfReturningStmtImpl<D>
    implements RValueStmt {
  // It gets initialized in `verify` which is called from the constructor
  @SuppressWarnings("NotNullFieldNotInitialized")
  private RType type;

  AbstractRValueStmtImpl(Class<D> clazz, CFG cfg, String name, D data) {
    super(clazz, cfg, name, data);
  }

  @Override
  public void verify() {
    super.verify();
    type =
        InstrImpl.mergeComputed(
            "Type",
            data().computeType(),
            computeTypeFromAnnotation(data().getClass().getAnnotation(TypeIs.class)));
    // TODO: perhaps trigger verify of all instructions containing this one if `type` is now
    //  different? or we will reconfigure all instructions during verification.
  }

  private static @Nullable RType computeTypeFromAnnotation(@Nullable TypeIs annotation) {
    if (annotation == null) {
      return null;
    }
    return TypeIsUtil.parse(annotation);
  }

  @Override
  public RType type() {
    return type;
  }

  @Override
  public NodeId<? extends RValueStmt> id() {
    return uncheckedCastId();
  }
}

final class RValueStmtImpl extends AbstractRValueStmtImpl<StmtData.RValue_> {
  RValueStmtImpl(CFG cfg, String name, StmtData.RValue_ data) {
    super(StmtData.RValue_.class, cfg, name, data);
  }
}
