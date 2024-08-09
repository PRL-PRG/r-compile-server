package org.prlprg;

import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.NamespaceEnvSXP;

public interface RSession {
  NamespaceEnvSXP baseNamespace();

  BaseEnvSXP baseEnv();

  GlobalEnvSXP globalEnv();

  boolean isBuiltin(String name);

  boolean isSpecial(String name);

  boolean isBuiltinInternal(String name);

  NamespaceEnvSXP getNamespace(String name, String version);

  default String version() {
    return baseNamespace().version();
  }
}
