package org.prlprg.bc2c;

import org.prlprg.bc.BcInstr;

public class UnsupportedBcInstrException extends UnsupportedOperationException {
  UnsupportedBcInstrException(BcInstr instr) {
    super("Unsupported instruction: " + instr);
  }
}
