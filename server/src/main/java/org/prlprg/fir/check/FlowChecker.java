package org.prlprg.fir.check;

import org.prlprg.fir.analyze.type.Flow;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.util.Strings;

/// Checks flow soundness (`use` invariants).
public final class FlowChecker extends Checker {
  @Override
  public void doRun(Abstraction version) {
    version
        .streamScopes()
        .forEach(
            abstraction ->
                new Flow(
                    abstraction,
                    (bb, instructionIndex, message) ->
                        report(bb, instructionIndex, Strings.join(message))));
  }
}
