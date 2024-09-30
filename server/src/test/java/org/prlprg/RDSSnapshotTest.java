package org.prlprg;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Optional;
import java.util.zip.GZIPOutputStream;
import javax.annotation.Nullable;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.TestInstance;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.UserEnvSXP;

@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public abstract class RDSSnapshotTest<T> extends SnapshotTest<T> {

  private @Nullable EnvSXP snapshots = null;
  private @Nullable Path lastTestPath = null;

  @Override
  protected Path getTestPath() {
    var p = super.getTestPath();
    return p.resolveSibling(p.getFileName().toString() + ".RDS");
  }

  @BeforeEach
  protected void initializeSnapshots() {
    var testPath = getTestPath();

    if (lastTestPath == null) {
      lastTestPath = getTestPath();
    } else {
      assert snapshots != null;
      if (!lastTestPath.equals(testPath) && snapshots.size() > 0) {
        saveSnapshots(lastTestPath);
        lastTestPath = testPath;
      }
    }

    if (snapshots == null) {
      loadSnapshots(testPath);
    }
  }

  @AfterAll
  protected void finishSnapshots() {
    if (snapshots != null && snapshots.size() > 0) {
      assert lastTestPath != null;
      saveSnapshots(lastTestPath);
    }
  }

  protected void saveSnapshots(Path path) {
    assert snapshots != null;
    try {
      Files.createDirectories(path.getParent());
      try (var output = new GZIPOutputStream(Files.newOutputStream(path))) {
        RDSWriter.writeStream(output, snapshots);
      }
      snapshots = null;
    } catch (IOException e) {
      throw new RuntimeException("Failed to save snapshot: " + path, e);
    }
  }

  protected void loadSnapshots(Path path) {
    if (Files.exists(path)) {
      try {
        var sxp = RDSReader.readFile(getRSession(), path.toFile());
        if (!(sxp instanceof EnvSXP env)) {
          throw new RuntimeException(
              "Invalid snapshot file: " + path + ", expected EnvSXP, got: " + sxp);
        }
        snapshots = env;
      } catch (IOException e) {
        throw new RuntimeException("Invalid snapshot file: " + path, e);
      }
    } else {
      snapshots = new UserEnvSXP();
    }
  }

  @Override
  protected Optional<T> load(String snapshotName) throws Exception {
    assert snapshots != null;
    var v = snapshots.get(snapshotName).orElse(null);
    return v == null ? Optional.empty() : Optional.of(deserialize(v));
  }

  @Override
  protected void save(String snapshotName, T value) throws Exception {
    assert snapshots != null;
    snapshots.set(snapshotName, serialize(value));
  }

  protected abstract RSession getRSession();

  protected abstract T deserialize(SEXP value) throws Exception;

  protected abstract SEXP serialize(T value) throws Exception;
}
