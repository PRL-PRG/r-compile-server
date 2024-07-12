package org.prlprg.session;

import java.io.IOException;
import java.net.URI;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.List;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.RVersion;
import org.prlprg.rds.RDSReader;
import org.prlprg.server.Messages;
import org.prlprg.sexp.*;

public class GNURSession implements RSession {
  private URI cranMirror;
  private org.prlprg.RVersion RVersion;

  private @Nullable BaseEnvSXP baseEnvSXP = null;
  private @Nullable NamespaceEnvSXP baseNamespace = null;
  private @Nullable GlobalEnvSXP globalEnv = null;
  private @Nullable Set<String> builtins = null;
  private @Nullable Set<String> specials = null;
  private @Nullable Set<String> builtinsInternal = null;
  private @Nullable HashMap<String, NamespaceEnvSXP> namespaces = null;

  // TODO: need the path to R *and* the path to the installed packages
  public GNURSession(org.prlprg.RVersion version, Path r_dir) {
    cranMirror = URI.create("https://cran.r-project.org");
    RVersion = version;
  }

  public GNURSession(RVersion version, Path r_dir, URI cranMirror) {
    this(version, r_dir);
    this.cranMirror = cranMirror;
  }

  public void setCranMirror(URI uri) {}

  // We should also handle installation of a package from a Github repo?
  public void loadPackage(String name, String version) {
    // Check if package is installed and if not install it

    // Load index (name.rdx) and serialized objects (name.rdb)
    // Or rather do lazy loading like R?
  }

  private void readPackageDatabase(Path path, String packageName) {}

  /**
   * Makes it possible to load a package by providing its functions directly.
   *
   * <p>Note that it does not support loading the package's data, documentation, etc.
   *
   * @param name
   * @param version
   * @param functions in the package
   * @return the populated environment
   */
  public EnvSXP loadPackage(String name, String version, List<Messages.Function> functions) {
    if (name.equals("base")) {
      throw new RuntimeException("Cannot load base namespace this way");
    }
    // Should the parent rather be the package namespace?
    if (baseNamespace == null) {
      throw new RuntimeException("Base namespace not loaded yet");
    }

    var bindings = new HashMap<String, SEXP>(functions.size());
    functions.forEach(
        function -> {
          try {
            bindings.put(
                function.getName(), (CloSXP) RDSReader.readByteString(this, function.getBody()));
          } catch (IOException e) {
            throw new RuntimeException(e);
          }
        });
    return new NamespaceEnvSXP(name, version, baseNamespace, bindings);
  }

  @Override
  public NamespaceEnvSXP baseNamespace() {
    return null;
  }

  @Override
  public BaseEnvSXP baseEnv() {
    return null;
  }

  @Override
  public GlobalEnvSXP globalEnv() {
    return null;
  }

  @Override
  public boolean isBuiltin(String name) {
    return false;
  }

  @Override
  public boolean isSpecial(String name) {
    return false;
  }

  @Override
  public boolean isBuiltinInternal(String name) {
    return false;
  }

  @Override
  public NamespaceEnvSXP getNamespace(String name, String version) {
    return null;
  }
}
