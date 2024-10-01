package org.prlprg.util.snapshot;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Optional;
import java.util.zip.GZIPOutputStream;
import javax.annotation.Nullable;
import org.prlprg.RSession;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.UserEnvSXP;

public class RDSSnapshotStore implements SnapshotStore<SEXP> {

  @Nullable private EnvSXP snapshots;
  private final RSession session;
  private final Path snapshotPath;

  public RDSSnapshotStore(RSession session, Path snapshotPath) {
    this.session = session;
    this.snapshotPath = snapshotPath.resolveSibling(snapshotPath.getFileName().toString() + ".RDS");
  }

  @Override
  public Optional<SEXP> load(String name) {
    if (snapshots == null) {
      open();
    }

    return snapshots.get(name);
  }

  @Override
  public void save(String name, SEXP value) {
    assert snapshots != null;
    snapshots.set(name, value);
  }

  protected void open() {
    if (!Files.exists(snapshotPath)) {
      snapshots = new UserEnvSXP();
      return;
    }

    try {
      var sxp = RDSReader.readFile(session, snapshotPath.toFile());
      if (!(sxp instanceof EnvSXP env)) {
        throw new RuntimeException(
            "Invalid snapshot file: " + snapshotPath + ", expected EnvSXP, got: " + sxp);
      }
      snapshots = env;
    } catch (IOException e) {
      throw new RuntimeException("Invalid snapshot file: " + snapshotPath, e);
    }
  }

  @Override
  public void close() {
    if (snapshots == null || snapshots.size() == 0) {
      return;
    }

    try {
      Files.createDirectories(snapshotPath.getParent());
      try (var output = new GZIPOutputStream(Files.newOutputStream(snapshotPath))) {
        RDSWriter.writeStream(output, snapshots);
      }
      snapshots = null;
    } catch (IOException e) {
      throw new RuntimeException("Failed to save snapshot: " + snapshotPath, e);
    }
  }
}
