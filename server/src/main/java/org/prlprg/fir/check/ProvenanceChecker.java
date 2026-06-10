package org.prlprg.fir.check;

import org.prlprg.fir.analyze.type.Provenance;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.util.Strings;

/// Checks flow-sensitive provenance invariants (i.e. no possible read after `use`).
public final class ProvenanceChecker extends Checker {
  @Override
  public void doRun(Abstraction version) {
    new Provenance(
        version,
        (bb, instructionIndex, message) -> report(bb, instructionIndex, Strings.join(message)));
  }
}
