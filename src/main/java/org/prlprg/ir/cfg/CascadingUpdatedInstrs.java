package org.prlprg.ir.cfg;

import java.util.HashSet;
import java.util.Set;
import org.prlprg.util.Strings;

public class CascadingUpdatedInstrs {

  private final Set<Instr> instrDatasWhoseOutputsHaveChanged = new HashSet<>();

  public CascadingUpdatedInstrs() {}

  void handleUpdatedInstrData(Instr data, CascadingInstrUpdate update) {
    if (update.updatedOutputTypes()) {
      if (!instrDatasWhoseOutputsHaveChanged.add(data)) {
        throw new InfiniteCascadingUpdateException(this);
      }
    }
  }

  @Override
  public String toString() {
    return "- " + Strings.join("\n- ", instrDatasWhoseOutputsHaveChanged);
  }
}
