package org.prlprg.ir.cfg;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;
import org.prlprg.sexp.SEXPType;

/** {@link Stmt} (IR instruction) which produces an {@link RValue}. */
public interface RValueStmt extends Stmt, RValue {
  @Override
  NodeId<? extends RValueStmt> id();

  @Override
  // Transitively overridden so IntelliJ can't detect that this doesn't apply.
  @SuppressWarnings("EmptyMethod")
  StmtData.RValue_ data();
}

/**
 * Needed because, besides {@link RValueStmtImpl}, there is also {@link CallImpl}, and both share
 * this code.
 */
abstract class AbstractRValueStmtImpl<D extends StmtData.RValue_> extends SelfReturningStmtImpl<D>
    implements RValueStmt {
  // It gets initialized in `verify` which is called from the constructor
  @SuppressWarnings("NotNullFieldNotInitialized")
  @SuppressFBWarnings("NP_NONNULL_FIELD_NOT_INITIALIZED_IN_CONSTRUCTOR")
  private RType type;

  private @Nullable EnvAux envAux;

  AbstractRValueStmtImpl(Class<D> clazz, CFG cfg, NodeId<? extends Instr> id, D data) {
    super(clazz, cfg, id, data);
  }

  @Override
  protected void verify(boolean isInsert) {
    super.verify(isInsert);
    type =
        mergeComputed(
            "type",
            data().computeType(),
            computeTypeFromAnnotations(
                data().getClass().getAnnotation(TypeIs.class),
                data().getClass().getAnnotation(IsEnv.class)));
    envAux = data().computeEnvAux();
    assert envAux != null || !data().getClass().isAnnotationPresent(IsEnv.class)
        : "values which are guaranteed to be environments (have the `@IsEnv` annotation) must return an `EnvAux`";
    // TODO: perhaps trigger verify of all instructions containing this one if `type` is now
    //  different? or we will reconfigure all instructions during verification.
  }

  private static @Nullable RType computeTypeFromAnnotations(
      @Nullable TypeIs typeIsAnnotation, @Nullable IsEnv isEnvAnnotation) {
    if (typeIsAnnotation != null && isEnvAnnotation != null) {
      throw new AssertionError("cannot have both @TypeIs and @IsEnv annotations");
    }
    if (typeIsAnnotation == null && isEnvAnnotation == null) {
      return null;
    }
    return typeIsAnnotation != null
        ? TypeIsUtil.parse(typeIsAnnotation)
        : RTypes.simple(SEXPType.ENV);
  }

  @Override
  public RType type() {
    return type;
  }

  @Override
  public @Nullable EnvAux envAux() {
    return envAux;
  }

  @Override
  public NodeId<? extends RValueStmt> id() {
    return uncheckedCastId();
  }
}

final class RValueStmtImpl extends AbstractRValueStmtImpl<StmtData.RValue_> {
  RValueStmtImpl(CFG cfg, NodeId<? extends Instr> id, StmtData.RValue_ data) {
    super(StmtData.RValue_.class, cfg, id, data);
  }
}
