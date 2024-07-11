package org.prlprg.session;

import java.net.URI;
import java.nio.file.Path;
import java.util.List;
import org.prlprg.server.Messages;
import org.prlprg.sexp.BaseEnvSXP;
import org.prlprg.sexp.GlobalEnvSXP;
import org.prlprg.sexp.NamespaceEnvSXP;

public class GNURSession implements RSession {
  private URI cranMirror;

  // TODO: need the path to R *and* the path to the installed packages
  public GNURSession(Path r_dir) {
    cranMirror = URI.create("https://cran.r-project.org");
  }

  GNURSession(Path r_dir, URI cranMirror) {
    this(r_dir);
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
   */
  public void loadPackage(String name, String version, List<Messages.Function> functions) {}

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
