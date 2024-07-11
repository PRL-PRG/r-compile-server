package org.prlprg.rsession;

import com.google.common.collect.ImmutableSet;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.rds.RDSReader;
import org.prlprg.session.RSession;
import org.prlprg.sexp.*;
import org.prlprg.util.IO;

// http://adv-r.had.co.nz/Environments.html
public class TestRSession implements RSession {
  private static final String BASE_SYMBOLS_RDS_FILE = "basevars.RDS";
  private static final String BASE_ENV_RDS_FILE = "baseenv.RDS";
  private static final String BUILTINS_SYMBOLS_RDS_FILE = "builtins.RDS";
  private static final String SPECIALS_SYMBOLS_RDS_FILE = "specials.RDS";
  private static final String BUILTINS_INTERNAL_SYMBOLS_RDS_FILE = "builtins-internal.RDS";

  private @Nullable BaseEnvSXP baseEnv = null;
  private @Nullable NamespaceEnvSXP baseNamespace = null;
  private @Nullable GlobalEnvSXP globalEnv = null;
  private @Nullable Set<String> builtins = null;
  private @Nullable Set<String> specials = null;
  private @Nullable Set<String> builtinsInternal = null;

  private void bootstrapBase() {
    try {
      // 1. Load just the symbol names. This will work as long as loading the STRSXP does not need
      // baseenv itself
      var names =
          (StrSXP)
              RDSReader.readStream(
                  this,
                  IO.maybeDecompress(
                      Objects.requireNonNull(
                          TestRSession.class.getResourceAsStream(BASE_SYMBOLS_RDS_FILE))));

      // 2. Create empty bindings
      var bindings = new HashMap<String, SEXP>(names.size());
      names.forEach(x -> bindings.put(x, SEXPs.UNBOUND_VALUE));

      // 3. Create a temporary baseenv and temporary base namespace
      baseEnv = new BaseEnvSXP(bindings);
      // the 4.3.2 should correspond to the R version that written the RDS files used in this class
      baseNamespace = new NamespaceEnvSXP("base", "4.3.2", baseEnv, bindings);

      // 4. Load the values
      var temp =
          (EnvSXP)
              RDSReader.readStream(
                  this,
                  IO.maybeDecompress(
                      Objects.requireNonNull(
                          TestRSession.class.getResourceAsStream(BASE_ENV_RDS_FILE))));

      // 5. update them in the baseenv and base namespace
      temp.bindings()
          .forEach(
              x -> {
                baseEnv.set(x.getKey(), x.getValue());
                baseNamespace.set(x.getKey(), x.getValue());
              });
    } catch (IOException e) {
      throw new RuntimeException("Failed to load the base environment", e);
    }
  }

  @Override
  public NamespaceEnvSXP baseNamespace() {
    if (baseNamespace == null) {
      bootstrapBase();
    }
    return baseNamespace;
  }

  public synchronized BaseEnvSXP baseEnv() {
    if (baseEnv == null) {
      bootstrapBase();
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

  @Override
  public NamespaceEnvSXP getNamespace(String name, String version) {
    if (name.equals("base")) {
      return baseNamespace();
    } else {
      return new NamespaceEnvSXP(name, version, baseNamespace(), Map.of());
    }
  }
}
