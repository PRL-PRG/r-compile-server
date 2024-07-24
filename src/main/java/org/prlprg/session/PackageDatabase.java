package org.prlprg.session;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.file.Path;
import java.util.*;
import java.util.logging.Logger;
import java.util.zip.InflaterInputStream;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;

/**
 * Read a package database. As described in the <a
 * href="https://cran.r-project.org/doc/manuals/r-devel/R-ints.html#SEXPTYPEs">Lazy Loading</a>
 * section of the R internals manual, the package database is located in the R subdirectory of the
 * installed package and consists of two files: a compressed index file with the extension .rdx and
 * a serialized object file with the extension .rdb.
 *
 * <p>This class can load object in the package on demand, and not all of them at once.
 */
public class PackageDatabase {
  private static Logger LOGGER = Logger.getLogger(PackageDatabase.class.getName());
  private final RandomAccessFile objectFile;
  private final HashMap<String, IntSXP> index = new HashMap<>();
  private final HashMap<String, IntSXP> tmpEnvs = new HashMap<>();
  private final HashMap<String, SEXP> objects = new HashMap<>();
  private final RSession session;
  private final EnvHook envHook = new EnvHook();

  private class EnvHook implements RDSReader.Hook {
    @Override
    public SEXP hook(SEXP sexp) throws IOException {
      if (sexp instanceof StrSXP s) {
        var position = tmpEnvs.get(s.get(0));
        if (position == null) {
          return sexp;
        }

        return readObject(s.get(0), tmpEnvs);
      }

      return sexp;
    }
  }

  /**
   * Create a new package database.
   *
   * @param libraryPath The path to the library where the package is installed.
   * @param packageName The name of the package.
   */
  public PackageDatabase(RSession session, Path libraryPath, String packageName)
      throws IOException {
    this.session = session;
    // .libPaths and installed_packages() in R can help to see
    // where packages are installed
    var basePath = libraryPath.resolve(packageName + "/R");
    // Read the index file .rdx
    // we get a list with 3 elements, variables, references and compressed
    // See LazyLoading in https://cran.r-project.org/doc/manuals/r-devel/R-ints.html
    var indexFile = RDSReader.readFile(session, basePath.resolve(packageName + ".rdx").toFile());

    // Load objects .rdb
    objectFile = new RandomAccessFile(String.valueOf(basePath.resolve(packageName + ".rdb")), "r");

    // Read the index
    if (indexFile instanceof VecSXP l) {
      var variables = (VecSXP) l.get(0);
      var references = (VecSXP) l.get(1);
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
        throw new RuntimeException(algo + " compression detected; only zlib is supported");
      }

      populateIndex(variables, index);
      populateIndex(references, tmpEnvs);
    } else {
      throw new IllegalArgumentException("Invalid index file");
    }
  }

  private static void populateIndex(VecSXP offsets, HashMap<String, IntSXP> offsetMap) {
    var names = offsets.names();
    for (int i = 0; i < offsets.size(); i++) {
      var posInRdb = (IntSXP) offsets.get(i);
      offsetMap.put(names.get(i), posInRdb);
    }
  }

  /**
   * Get the names of the symbols in the package database. It corresponds to the `variables` field
   * in the index file (.rdb)
   *
   * @return
   */
  public Set<String> getSymbolNames() {
    return index.keySet();
  }

  /**
   * Get the object with the given name. This will look at the cache or read the rdb file and use
   * the offset and length information from the index file to read the object.
   *
   * @param name
   * @return
   */
  public SEXP getObject(String name) throws IOException {
    return readObject(name, index);
  }

  private SEXP readObject(String name, HashMap<String, IntSXP> offsets) throws IOException {
    var obj = objects.get(name);
    if (obj != null) {
      return obj;
    }

    var posInRdb = offsets.get(name);
    objectFile.seek(posInRdb.get(0));
    byte[] raw = new byte[posInRdb.get(1)];
    objectFile.readFully(raw);
    // The first 4 bytes are the uncompressed size for the chunk we read
    // It is a big endian int
    int length = (raw[0] << 24) | (raw[1] << 16) | (raw[2] << 8) | raw[3];
    // assert length >= raw.length - 4;

    var input = new ByteArrayInputStream(raw);
    input.skipNBytes(4);
    obj = RDSReader.readStream(session, new InflaterInputStream(input), envHook);

    objects.put(name, obj);
    return obj;
  }

  /**
   * Get all the objects in the package database.
   *
   * @return
   */
  public HashMap<String, SEXP> getBindings() throws IOException {
    if (objects.size() == index.size() + tmpEnvs.size()) {
      return objects;
    }
    if (index.containsKey(".__NAMESPACE__.")) {
      readObject(".__NAMESPACE__.", index);
    }
    for (var name : index.keySet()) {
      LOGGER.info("Loading " + name);
      readObject(name, index);
    }
    return objects;
  }
}
