package org.prlprg.ir;

import java.util.Collection;
import java.util.Formatter;

/** Thrown by {@link CFG#verify()} when one of the CFG's invariants is broken. */
public class CFGVerifyException extends IllegalStateException {
  private static String message(CFG cfg, Collection<BrokenInvariant> brokenInvariants) {
    var sb = new StringBuilder().append("broken invariants:");
    for (var invariant : brokenInvariants) {
      sb.append("\n- ").append(invariant);
    }

    var history = cfg.history();
    if (!history.isEmpty()) {
      sb.append("\n\nhistory:");
      var fmt = new Formatter(sb);
      for (var i = 0; i < history.size(); i++) {
        fmt.format("\n%03d: %s", i, history.get(i));
      }
    }

    sb.append("\n\nCFG:").append(cfg);

    return sb.toString();
  }

  CFGVerifyException(CFG cfg, Collection<BrokenInvariant> brokenInvariants) {
    super(message(cfg, brokenInvariants));
    if (brokenInvariants.isEmpty()) {
      throw new IllegalArgumentException(
          "Tried to create a CFGVerifyInstruction with no broken invariants");
    }
  }

  record BrokenInvariant(String desc, int actionIdx) {
    BrokenInvariant(String desc) {
      this(desc, -1);
    }

    @Override
    public String toString() {
      return desc + (actionIdx == -1 ? "" : " (" + actionIdx + ":)");
    }
  }
}
