package org.prlprg.session;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.file.Path;
import java.util.*;
import java.util.logging.Logger;
import java.util.zip.InflaterInputStream;
import org.prlprg.rds.RDSException;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.*;

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
  private final Set<String> seenTmpEnvs = new HashSet<>();

  private class EnvHook implements RDSReader.Hook {
    @Override
    public SEXP hook(SEXP sexp) throws IOException {
      if (sexp instanceof StrSXP s) {
        var name = s.get(0);
        var position = tmpEnvs.get(name);
        if (position == null) {
          return sexp;
        }
        // There is a cycle in the Env!
        if (seenTmpEnvs.contains(name)) {
          // create a placeholder environment, which we will replace later
          // by the actual environment
          return new NamespaceEnvSXP(
              // add a binding which would be the parent SEXP?
              name, "__placeholder__", session.baseNamespace(), new HashMap<>());
        }

        seenTmpEnvs.add(name);
        // env::4, env::10, env::9 are not environments but VecSXP!
        // We should convert them to environments.
        // They are created when the function was defined using `local`
        // But more generally, any non special env (i.e, not global, namespace, base etc)
        // is serialized to a VecSXP in the rdb file.
        var tmpEnv = readObject(name, tmpEnvs);
        if (tmpEnv instanceof VecSXP v) {
          var realEnv = vecToEnv(v);
          realEnv = (UserEnvSXP) replacePlaceHolder(realEnv, realEnv, name);
          return realEnv;
        }

        return tmpEnv;
      }

      return sexp;
    }
  }

  /**
   * Find occurrences of all placeholder environments, that we added when reading back environments
   * with cycles and put back the cycle. Placeholder envs are NamespaceEnv with "__placeholder__" as
   * version and the original env::n as name. We have to do this 2-step dance here because we first
   * need to build the environment before putting a reference to it inside itself!
   *
   * @param selfRefEnv the environment that we want to make refer to itself
   * @param v the sexp on which we currently recurse
   * @param name the name of the environment used in the placeholder
   * @return the sexp with the placeholder replaced by the actual environment
   */
  private static SEXP replacePlaceHolder(UserEnvSXP selfRefEnv, SEXP v, String name) {
    // FIXME: there could also be environments in attributes
    return switch (v) {
      case NamespaceEnvSXP n -> {
        if (n.version().equals("__placeholder__") && n.name().equals(name)) {
          yield selfRefEnv;
        } else {
          yield n;
        }
      }
      case EnvSXP env -> {
        for (var e : env.bindings()) {
          var res = replacePlaceHolder(selfRefEnv, e.getValue(), name);
          if (res != e.getValue()) {
            env.set(e.getKey(), res);
          }
        }
        yield env;
      }
      case VecSXP vec -> {
        SEXP[] res = new SEXP[vec.size()];
        boolean change = false;
        for (int i = 0; i < vec.size(); i++) {
          res[i] = replacePlaceHolder(selfRefEnv, vec.get(i), name);
          if (res[i] != vec.get(i)) {
            change = true;
          }
        }
        if (change) {
          yield SEXPs.vec(res, vec.attributes());
        } else {
          yield vec;
        }
      }
      case CloSXP clo -> {
        var res = replacePlaceHolder(selfRefEnv, clo.env(), name);
        if (res != clo.env()) {
          yield SEXPs.closure(clo.parameters(), clo.body(), (EnvSXP) res, clo.attributes());
        } else {
          yield clo;
        }
      }
      default -> v;
    };
  }

  /**
   * Envs that are not special environments are serialized as VecSXP, with a specific shape. Here,
   * we transform them back into EnvSXP
   *
   * <p>See makebasedb.R or makelazyload.R
   *
   * <p>- <a
   * href="https://github.com/SurajGupta/r-source/blob/a28e609e72ed7c47f6ddfbb86c85279a0750f0b7/src/library/base/makebasedb.R#L69">makebasedb</a>
   * - <a
   * href="https://github.com/SurajGupta/r-source/blob/a28e609e72ed7c47f6ddfbb86c85279a0750f0b7/src/library/tools/R/makeLazyLoad.R">makelazyload</a>
   *
   * @param v
   * @return
   */
  private static UserEnvSXP vecToEnv(VecSXP v) {
    /*
     env is a list with 2 elements with names:
     - `bindings`: all the symbols in the environment (names + value)
     - `enclos`: the parent environment
    */
    // Check if the names are correct
    var names = (StrSXP) v.attributes().get("names");
    assert Objects.requireNonNull(names).get(0).equals("bindings");
    assert names.get(1).equals("enclos");

    // Enclos
    var enclos = (EnvSXP) v.get(1);

    // Bindings
    var symbols = (VecSXP) v.get(0);
    names = (StrSXP) symbols.attributes().get("names");
    assert names != null;
    var bindings = new HashMap<String, SEXP>();
    for (int i = 0; i < symbols.size(); i++) {
      var name = names.get(i);
      assert name != null;
      var value = symbols.get(i);
      bindings.put(name, value);
    }

    return new UserEnvSXP(enclos, bindings);
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

    // Problems:
    // - .doSortWrap : cycle in with env:4
    // - globalCallingHandlers : same as .doSortWrap
    // - conflictRules : same
    // - .doWrap : same (but it seems it depends on the order of the symbol reading
    // - .dynLibs: cycle with env:4
    // - .libPaths: same
    for (var name : index.keySet()) {
      // LOGGER.info("Loading " + name);

      try {
        readObject(name, index);
      } catch (RDSException e) {
        LOGGER.warning("Error loading " + name + ": " + e.getMessage());
      }
    }

    var notClos =
        objects.entrySet().stream()
            .filter(e -> !(e.getValue() instanceof CloSXP))
            .map(e -> e.getKey() + ":" + e.getValue().type())
            .toList();
    LOGGER.info("Not Closures: " + notClos);

    // TODO: filter out the env::n

    return objects;
  }
}
