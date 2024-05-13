package org.prlprg.ir.cfg;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.Collection;
import org.prlprg.util.Strings;

/** Thrown by {@link CFG#verify()} when one of the CFG's invariants is broken. */
public class CFGVerifyException extends IllegalStateException {
  private static String message(CFG cfg, BrokenInvariant brokenInvariant) {
    return "broken invariant: " + brokenInvariant + "\n\nCFG:" + cfg;
  }

  private static String message(CFG cfg, Collection<BrokenInvariant> brokenInvariants) {
    if (brokenInvariants.isEmpty()) {
      throw new IllegalArgumentException(
          "Tried to create a CFGVerifyInstruction with no broken invariants");
    } else if (brokenInvariants.size() == 1) {
      return message(cfg, brokenInvariants.iterator().next());
    }

    var sb = new StringBuilder().append("broken invariants:");
    for (var invariant : brokenInvariants) {
      sb.append("\n- ").append(invariant);
    }

    sb.append("\n\nCFG:").append(cfg);

    return sb.toString();
  }

  CFGVerifyException(CFG cfg, BrokenInvariant brokenInvariant) {
    super(message(cfg, brokenInvariant));
  }

  @SuppressFBWarnings("CT_CONSTRUCTOR_THROW")
  CFGVerifyException(CFG cfg, Collection<BrokenInvariant> brokenInvariants) {
    super(message(cfg, brokenInvariants));
  }

  sealed interface BrokenInvariant {}

  public record MissingJump(BBId bbId) implements BrokenInvariant {
    @Override
    public String toString() {
      return "BB has no jump: " + bbId;
    }
  }

  public record PhisInSinglePredecessorBB(BBId bbId) implements BrokenInvariant {
    @Override
    public String toString() {
      return "Phi nodes in single-predecessor BB: " + bbId;
    }
  }

  public record IncorrectIncomingBBInPhi(
      BBId bbId,
      NodeId<? extends Phi<?>> phiId,
      BBId originBBId,
      BBId incomingBBId,
      Collection<BBId> expectedIncomingBBIds)
      implements BrokenInvariant {
    @Override
    public String toString() {
      return "Incoming BB doesn't dominate node's origin BB in phi: "
          + phiId
          + " in "
          + bbId
          + "\nOrigin BB: "
          + originBBId
          + "\nIncoming BB:"
          + incomingBBId
          + (expectedIncomingBBIds.isEmpty()
              ? "\nThe phi has no dominating incoming BB, so the node would never be chosen"
              : "\nValid possible incoming BBs: " + Strings.join(", ", expectedIncomingBBIds));
    }
  }

  public record UntrackedArg(BBId bbId, NodeId<? extends InstrOrPhi> userId, NodeId<?> argId)
      implements BrokenInvariant {
    @Override
    public String toString() {
      return "Untracked arg: " + argId + " in " + userId;
    }
  }

  public record ArgNotDefinedBeforeUse(
      BBId bbId, NodeId<? extends InstrOrPhi> userId, NodeId<?> argId) implements BrokenInvariant {
    @Override
    public String toString() {
      return "Arg not guaranteed to be defined before use: " + argId + " in " + userId;
    }
  }

  public record NotReachable(BBId bbId) implements BrokenInvariant {
    @Override
    public String toString() {
      return "BB not reachable: " + bbId;
    }
  }
}
