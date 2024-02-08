package org.prlprg;

import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;

public interface RSession {
  BaseEnvSXP baseEnv();

  GlobalEnvSXP globalEnv();
}
