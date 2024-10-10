package org.prlprg.session;

import com.google.common.collect.ImmutableList;
import java.io.IOException;
import java.net.URI;
import java.nio.file.Path;
import java.util.*;
import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.RVersion;
import org.prlprg.rds.RDSReader;
import org.prlprg.server.Messages;
import org.prlprg.sexp.*;
import org.prlprg.util.Files;

/**
 * Dummy session used to bootstrap base. Indeed, the RDS reader that reads base package database
 * requires a session.
 */
class DummySession implements RSession {
  private final Logger logger = Logger.getLogger(DummySession.class.getName());
  private final GlobalEnvSXP globalEnv = new GlobalEnvSXP(SEXPs.EMPTY_ENV);
  private final NamespaceEnvSXP namespaceEnv =
      new NamespaceEnvSXP("base", "4.3.2", globalEnv, new HashMap<>());
  private final BaseEnvSXP baseEnv = new BaseEnvSXP(new HashMap<>());

  @Override
  public NamespaceEnvSXP baseNamespace() {
    return namespaceEnv;
  }

  @Override
  public BaseEnvSXP baseEnv() {
    return baseEnv;
  }

  @Override
  public GlobalEnvSXP globalEnv() {
    return globalEnv;
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

  @Override
  public ImmutableList<String> RFunTab() {
    return null;
  }
}

public class GNURSession implements RSession {
  private URI cranMirror;
  private org.prlprg.RVersion RVersion;
  private final Path RDir;
  private final List<Path> RLibraries;

  private @Nullable BaseEnvSXP baseEnv = null;
  private @Nullable NamespaceEnvSXP baseNamespace = null;
  private @Nullable GlobalEnvSXP globalEnv = null;
  private @Nullable Set<String> builtins = null;
  private @Nullable Set<String> specials = null;
  private @Nullable Set<String> builtinsInternal = null;
  private final HashMap<String, NamespaceEnvSXP> namespaces = new HashMap<>();
  private @Nullable ImmutableList<String> rFunTab = null;
  private static final String R_FUN_TAB_FILE = "R_FunTab.txt";

  // TODO: need the path to R *and* the path to the installed packages
  public GNURSession(RVersion version, Path r_dir, Path r_libraries) {
    cranMirror = URI.create("https://cran.r-project.org");
    RVersion = version;
    RDir = r_dir;
    RLibraries = Arrays.asList(RDir.resolve("library"), r_libraries);
  }

  public GNURSession(RVersion version, Path r_dir, Path r_libraries, URI cranMirror) {
    this(version, r_dir, r_libraries);
    this.cranMirror = cranMirror;
  }

  public void setCranMirror(URI uri) {}

  private @Nullable Path resolvePaths(String name) {
    for (var p : RLibraries) {
      var pkgPath = p.resolve(name);
      var pkgDir = pkgPath.toFile();
      if (pkgDir.exists() && pkgDir.isDirectory()) {
        return pkgPath;
      }
    }
    return null;
  }

  // We should also handle installation of a package from a GitHub repo?
  public void loadPackage(String name, String version) {
    @Nullable var pkgDir = resolvePaths(name);
    if (pkgDir == null) {
      installPackage(name);
      pkgDir = resolvePaths(name);
    }

    DESCRIPTION description = getDescription(name);

    String installedVersion = description.getVersion();
    if (!version.equals(installedVersion)) {
      throw new RuntimeException(
          "Version mismatch: expected " + version + " but found " + installedVersion);
    }

    // Use suggests and imports as needed
    var suggests = description.getSuggests();
    var imports = description.getImports();

    // Make sure base is loaded
    if (baseNamespace == null) {
      loadBase();
    }

    // Bootstrap the namespace
    prepareNamespace(name, version);

    // Load the package
    try {
      // getParent() because we add the name of the package to the path in readPackageDatabase
      var bindings = readPackageDatabase(this, pkgDir.getParent(), name);
      var ns = namespaces.get(name + version);
      ns.setBindings(bindings);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }
  }

  private void installPackage(String name) {
    var pkgDir = resolvePaths(name);

    var RScript = RDir.resolve("bin/Rscript");
    try {
      ProcessBuilder processBuilder =
          new ProcessBuilder(
              RScript.toString(),
              "-e",
              "install.packages('" + name + "', repos='" + cranMirror + "')");
      processBuilder.inheritIO();
      Process process = processBuilder.start();
      int exitCode = process.waitFor();
      if (exitCode != 0) {
        throw new RuntimeException("Failed to install package " + name);
      }
    } catch (IOException | InterruptedException e) {
      throw new RuntimeException("Failed to install package " + name, e);
    }
  }

  private DESCRIPTION getDescription(String name) {
    try {
      var pkgDir = resolvePaths(name);

      Path descriptionFile = pkgDir.toAbsolutePath().resolve("DESCRIPTION");
      DESCRIPTION description;
      description = new DESCRIPTION(descriptionFile);
      return description;
    } catch (Exception e) {
      throw new RuntimeException(e);
    }
  }

  private static HashMap<String, SEXP> readPackageDatabase(
      RSession session, Path libPath, String packageName) throws IOException {
    var db = new PackageDatabase(session, libPath, packageName);
    return db.getBindings();
  }

  /**
   * Objects in a package database refer to their own namespace so we need to create it before
   * reading.
   *
   * @param name
   * @param version
   */
  private void prepareNamespace(String name, String version) {
    var ns = namespaces.get(name + version);
    if (globalEnv == null) {
      loadBase();
    }
    if (ns == null) {
      ns = new NamespaceEnvSXP(name, version, globalEnv, new HashMap<>());
      namespaces.put(name + version, ns);
    }
  }

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

  /**
   * Load the base environment and namespace.
   *
   * <p>It requires a special treatment as the reader refers to base functions, and so we need to
   * carefully load symbols and then bind them.
   */
  public void loadBase(List<Messages.Function> functions) {
    // TODO
    // Bootstrap the reader with an ad-hoc session?
  }

  /** Load base from the given installed R version */
  public void loadBase() {
    var session = new DummySession();
    var baseLibPath = RDir.resolve("library");
    try {
      var objs = GNURSession.readPackageDatabase(session, baseLibPath, "base");
      baseEnv = new BaseEnvSXP(objs);
      globalEnv = new GlobalEnvSXP(baseEnv);
      baseNamespace = new NamespaceEnvSXP("base", RVersion.toString(), globalEnv, objs);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }
  }

  @Override
  public NamespaceEnvSXP baseNamespace() {
    if (baseNamespace == null) {
      loadBase();
    }
    return baseNamespace;
  }

  @Override
  public BaseEnvSXP baseEnv() {
    if (baseEnv == null) {
      loadBase();
    }
    return baseEnv;
  }

  @Override
  public GlobalEnvSXP globalEnv() {
    if (globalEnv == null) {
      loadBase();
    }
    return globalEnv;
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
    var ns = namespaces.get(name + version);
    if (ns == null) {
      loadPackage(name, version);
      // Retrieve the namespace again after loading the package
      ns = namespaces.get(name + version);
    }
    return ns;
  }

  @Override
  public ImmutableList<String> RFunTab() {
    if (rFunTab == null) {
      rFunTab =
          ImmutableList.<String>builder()
              .addAll(
                  Files.readLines(
                      Objects.requireNonNull(
                          GNURSession.class.getResourceAsStream(R_FUN_TAB_FILE))))
              .build();
    }
    return rFunTab;
  }
}
