package org.prlprg.session;

import java.io.FileInputStream;
import java.io.IOException;
import java.net.URI;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.List;
import java.util.Set;
import java.util.zip.InflaterInputStream;
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
  public GNURSession(RVersion version, Path r_dir) {
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

  public HashMap<String, CloSXP> readPackageDatabase(Path path, String packageName)
      throws IOException {
    // .libPaths and installed_packages() in R can help to see
    // where packages are installed
    var basePath = path.resolve(packageName + "/R");
    // Read the index file .rdx
    // we get a list with 3 elements, variables, references and compressed
    // See LazyLoading in https://cran.r-project.org/doc/manuals/r-devel/R-ints.html
    var index = RDSReader.readFile(this, basePath.resolve(packageName + ".rdx").toFile());

    // Load objects .rdb
    var objectFile = basePath.resolve(packageName + ".rdb").toFile();
    try (var input = new FileInputStream(objectFile)) {

      if (index instanceof VecSXP l) {
        var variables = (VecSXP) l.get(0);
        var names = variables.names();
        var references = (VecSXP) l.get(1);
        // Nowadays, it is always compressed. It can be a boolean,
        // or an Int to indicate the compression algorithm: 2 bzip2, 3: xz
        var compressed = l.get(2);
        if (compressed instanceof IntSXP i) {
          var algo =
              switch (i.get(0)) {
                case 2 -> "bzip2";
                case 3 -> "xz";
                default -> "unknown";
              };
          // For the other ones, there would be one more byte in addition to the length
          // that would contain the compression method again or 0 if the compressed size
          // had exceeded the uncompressed one.
          throw new RuntimeException(algo + " compression detected; only gzip is supported");
        }

        var bindings = new HashMap<String, CloSXP>(variables.size());

        int offset = 0;
        for (int i = 0; i < variables.size(); i++) {
          var posInRdb = (IntSXP) variables.get(i);

          input.skip(posInRdb.get(0) - offset);
          offset = posInRdb.get(0);
          byte[] len = input.readNBytes(4); // Skip the 4 bytes of the length
          // convert to a 4 byte big endian int
          int length = (len[0] << 24) | (len[1] << 16) | (len[2] << 8) | len[3];
          // Read the object from the rdb file at the right positions
          assert length + 4 == posInRdb.get(1) + 1;
          var obj = RDSReader.readStream(this, new InflaterInputStream(input));
          bindings.put(names.get(i), (CloSXP) obj);
        }
        return bindings;
      } else {
        throw new RuntimeException("Invalid index file");
      }
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
   * <p>It requires a special treatment as the reader refers to base functions and so we need to
   * carefully load symbols and then bind them.
   */
  public void loadBase(List<Messages.Function> functions) {
    // TODO
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
