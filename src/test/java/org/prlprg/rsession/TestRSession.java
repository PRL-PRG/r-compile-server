package org.prlprg.rsession;

import com.google.common.collect.ImmutableSet;
import java.io.IOException;
import java.util.HashMap;
import java.util.Objects;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.RSession;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.*;
import org.prlprg.util.IO;

public class TestRSession implements RSession {
  private static final String BASE_SYMBOLS_RDS_FILE = "base.RDS";
  private static final String BUILTINS_SYMBOLS_RDS_FILE = "builtins.RDS";
  private static final String SPECIALS_SYMBOLS_RDS_FILE = "specials.RDS";
  private static final String BUILTINS_INTERNAL_SYMBOLS_RDS_FILE = "builtins-internal.RDS";

  private @Nullable BaseEnvSXP baseEnv = null;
  private @Nullable GlobalEnvSXP globalEnv = null;
  private @Nullable Set<String> builtins = null;
  private @Nullable Set<String> specials = null;
  private @Nullable Set<String> builtinsInternal = null;

  private BaseEnvSXP loadBaseEnv() {
    try {
      // this will work as long as the base.RDS does not need
      // to load base or global environment itself
      var names =
          (StrSXP)
              RDSReader.readStream(
                  this,
                  IO.maybeDecompress(
                      Objects.requireNonNull(
                          TestRSession.class.getResourceAsStream(BASE_SYMBOLS_RDS_FILE))));

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

  public synchronized Set<String> builtins() {
    if (builtins == null) {
      try {
        var names =
            (StrSXP)
                RDSReader.readStream(
                    this,
                    IO.maybeDecompress(
                        Objects.requireNonNull(
                            TestRSession.class.getResourceAsStream(BUILTINS_SYMBOLS_RDS_FILE))));
        builtins = ImmutableSet.copyOf(names);
      } catch (Exception e) {
        throw new RuntimeException("Failed to load builtins", e);
      }
    }

    return builtins;
  }

  public synchronized Set<String> specials() {
    if (specials == null) {
      try {
        var names =
            (StrSXP)
                RDSReader.readStream(
                    this,
                    IO.maybeDecompress(
                        Objects.requireNonNull(
                            TestRSession.class.getResourceAsStream(SPECIALS_SYMBOLS_RDS_FILE))));
        specials = ImmutableSet.copyOf(names);
      } catch (Exception e) {
        throw new RuntimeException("Failed to load specials", e);
      }
    }

    return specials;
  }

  public synchronized Set<String> builtinsInternal() {
    if (builtinsInternal == null) {
      try {
        var names =
            (StrSXP)
                RDSReader.readStream(
                    this,
                    IO.maybeDecompress(
                        Objects.requireNonNull(
                            TestRSession.class.getResourceAsStream(
                                BUILTINS_INTERNAL_SYMBOLS_RDS_FILE))));
        builtinsInternal = ImmutableSet.copyOf(names);
      } catch (Exception e) {
        throw new RuntimeException("Failed to load specials", e);
      }
    }

    return builtinsInternal;
  }

  @Override
  public boolean isBuiltin(String name) {
    return builtins().contains(name);
  }

  public boolean isSpecial(String name) {
    return specials().contains(name);
  }

  @Override
  public boolean isBuiltinInternal(String name) {
    return builtinsInternal().contains(name);
  }
}
