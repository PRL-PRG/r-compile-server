package org.prlprg.snapshots;

public class MissingSnapshotException extends RuntimeException {
  MissingSnapshotException(String queryName, Throwable cause) {
    super("No snapshot for and couldn't compute " + queryName, cause);
  }
}
