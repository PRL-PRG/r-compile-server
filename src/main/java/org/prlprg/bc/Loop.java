package org.prlprg.bc;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;

@SuppressFBWarnings({"EI_EXPOSE_REP2", "EI_EXPOSE_REP"})
public sealed interface Loop {
  record InLoop(BcLabel start, BcLabel end, boolean gotoOK) implements Loop {
    @Override
    public Loop gotoNotOK() {
      return new InLoop(start, end, false);
    }
  }

  record NotInLoop() implements Loop {
    @Override
    public Loop gotoNotOK() {
      return this;
    }
  }

  Loop gotoNotOK();
}
