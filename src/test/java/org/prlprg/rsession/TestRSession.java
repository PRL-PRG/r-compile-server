package org.prlprg.rsession;

import org.prlprg.RSession;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.*;
import org.prlprg.util.IO;

import javax.annotation.Nullable;
import java.io.IOException;
import java.util.HashMap;
import java.util.Objects;

public class TestRSession implements RSession {
  private @Nullable BaseEnvSXP baseEnv = null;
  private @Nullable GlobalEnvSXP globalEnv = null;

  private BaseEnvSXP loadBaseEnv() {
    try {
      // this will work as long as the base.RDS does not need
      // to load base or global environment itself
      var names =
          (StrSXP)
              RDSReader.readStream(
                  this,
                  IO.maybeDecompress(
                      Objects.requireNonNull(TestRSession.class.getResourceAsStream("base.RDS"))));

      var frame = new HashMap<String, SEXP>(names.size());
      names.forEach(x -> frame.put(x, SEXPs.UNBOUND_VALUE));

      return new BaseEnvSXP(frame);
    } catch (IOException e) {
      throw new RuntimeException("Failed to load the base environment", e);
    }
  }

  public synchronized BaseEnvSXP baseEnv() {
    if (baseEnv == null) {
      baseEnv = loadBaseEnv();
    }
    return baseEnv;
  }

  public synchronized GlobalEnvSXP globalEnv() {
    if (globalEnv == null) {
      globalEnv = new GlobalEnvSXP(baseEnv());
    }
    return globalEnv;
  }
}
