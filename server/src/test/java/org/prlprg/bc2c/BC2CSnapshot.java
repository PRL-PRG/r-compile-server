package org.prlprg.bc2c;

import java.util.List;

interface BC2CSnapshot {
  void setName(String snapshotName);

  void verify(String code, boolean compilePromises, boolean saveSnapshot,
      List<BC2CExampleExtraCheck> extraChecks);
}
