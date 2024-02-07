package org.prlprg;

import java.io.IOException;
import java.util.HashMap;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.*;
import org.prlprg.util.IO;

public class RSession {
  private @Nullable BaseEnvSXP baseEnv = null;
  private @Nullable GlobalEnvSXP globalEnv = null;

  private static BaseEnvSXP loadBaseEnv() {
    try {
      var names =
          RDSReader.readStream(
                  IO.maybeDecompress(
                      Objects.requireNonNull(RSession.class.getResourceAsStream("/R/base.RDS"))))
              .cast(StrSXP.class);

      var frame = new HashMap<String, SEXP>(names.size());
      names.forEach(x -> frame.put(x, SEXPs.UNBOUND_VALUE));

      return new BaseEnvSXP(frame);
    } catch (IOException e) {
      throw new RuntimeException("Failed to load the base environment", e);
    }
  }

  public BaseEnvSXP baseEnv() {
    if (baseEnv == null) {
      baseEnv = loadBaseEnv();
    }
    return baseEnv;
  }

  public GlobalEnvSXP globalEnv() {
    if (globalEnv == null) {
      globalEnv = new GlobalEnvSXP(baseEnv());
    }
    return globalEnv;
  }
}
