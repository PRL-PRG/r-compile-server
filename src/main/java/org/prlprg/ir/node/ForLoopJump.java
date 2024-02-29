package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import com.pushtorefresh.javac_warning_annotation.Warning;
import java.util.Objects;
import org.prlprg.ir.CFG;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.ir.type.Troolean;
import org.prlprg.sexp.SEXPs;

/**
 * {@code StartFor} or {@code StepFor} instruction, which is a {@link Jump} that returns 2 values.
 */
public interface ForLoopJump extends Jump {
  /**
   * A special SEXP encoding an `R_loopinfo_t` struct which is only used by other loop instructions.
   */
  ForLoopInfo loopInfo();

  /** The current index or element of the loop. */
  RValue loopVar();

  @Override
  Data data();

  sealed interface Data extends Jump.Data<ForLoopJump> permits Jumps.ForLoop {
    RValue seq();

    @Override
    default ForLoopJump make(CFG cfg) {
      return new ForLoopJumpImpl(cfg, this);
    }
  }
}

@Warning("Only exposed for BB.setJump, use that instead.")
final class ForLoopJumpImpl extends JumpImpl<ForLoopJump.Data> implements ForLoopJump {
  private final ForLoopInfo forLoopInfo;
  private final RValue forLoopVar;
  private final ImmutableList<Node> returns;

  ForLoopJumpImpl(CFG cfg, ForLoopJump.Data data) {
    super(cfg, data);
    forLoopInfo = new ForLoopInfoImpl(cfg, this);
    forLoopVar = new ForLoopVarImpl(cfg, this);
    returns = ImmutableList.of(forLoopInfo, forLoopVar);
  }

  @Override
  public ForLoopInfo loopInfo() {
    return forLoopInfo;
  }

  @Override
  public RValue loopVar() {
    return forLoopVar;
  }

  @Override
  public ImmutableList<Node> returns() {
    return returns;
  }
}

record ForLoopInfoImpl(@Override CFG cfg, @Override ForLoopJump origin) implements ForLoopInfo {}

record ForLoopVarImpl(@Override CFG cfg, @Override ForLoopJump origin) implements RValue {
  @Override
  public RType type() {
    var seqType = origin().data().seq().type().base();
    if (seqType == null) {
      return RTypes.NOTHING;
    }
    return switch (seqType.isPrimitiveVector()) {
      case Troolean.NO -> RTypes.of(SEXPs.NULL);
      case Troolean.YES -> RTypes.simple(Objects.requireNonNull(seqType.sexpType()));
      case Troolean.MAYBE -> RTypes.SIMPLE_ANY;
    };
  }
}
