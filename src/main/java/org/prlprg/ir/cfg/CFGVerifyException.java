package org.prlprg.ir.cfg;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.Collection;

/** Thrown by {@link CFG#verify()} when one of the CFG's invariants is broken. */
public class CFGVerifyException extends IllegalStateException {
  private static String message(CFG cfg, Collection<BrokenInvariant> brokenInvariants) {
    var sb = new StringBuilder().append("broken invariants:");
    for (var invariant : brokenInvariants) {
      sb.append("\n- ").append(invariant);
    }

    sb.append("\n\nCFG:").append(cfg);

    return sb.toString();
  }

  @SuppressFBWarnings("CT_CONSTRUCTOR_THROW")
  CFGVerifyException(CFG cfg, Collection<BrokenInvariant> brokenInvariants) {
    super(message(cfg, brokenInvariants));
    if (brokenInvariants.isEmpty()) {
      throw new IllegalArgumentException(
          "Tried to create a CFGVerifyInstruction with no broken invariants");
    }
  }

  sealed interface BrokenInvariant {
    String message();
  }

  public record MissingJump(BBId bbId) implements BrokenInvariant {
    @Override
    public String message() {
      return "BB has no jump: " + bbId;
    }
  }

  public record PhisInSinglePredecessorBB(BBId bbId) implements BrokenInvariant {
    @Override
    public String message() {
      return "Phi nodes in single-predecessor BB: " + bbId;
    }
  }

  public record ExtraInputInPhi(BBId bbId, NodeId<? extends Phi<?>> phiId, BBId inputId)
      implements BrokenInvariant {
    @Override
    public String message() {
      return "Extra input in phi: " + phiId + " in " + bbId;
    }
  }

  public record UntrackedArg(BBId bbId, NodeId<? extends InstrOrPhi> userId, NodeId<?> argId)
      implements BrokenInvariant {
    @Override
    public String message() {
      return "Untracked arg: " + argId + " in " + userId;
    }
  }

  public record ArgNotDefinedBeforeUse(BBId bbId, NodeId<? extends Instr> userId, NodeId<?> argId)
      implements BrokenInvariant {
    @Override
    public String message() {
      return "Arg not defined before use: " + argId + " in " + userId;
    }
  }

  public record MissingInputInPhi(BBId bbId, NodeId<? extends Phi<?>> phiId, BBId inputId)
      implements BrokenInvariant {
    @Override
    public String message() {
      return "Missing input in phi: " + phiId + " in " + bbId;
    }
  }

  public record NotReachable(BBId bbId) implements BrokenInvariant {
    @Override
    public String message() {
      return "BB not reachable: " + bbId;
    }
  }
}
