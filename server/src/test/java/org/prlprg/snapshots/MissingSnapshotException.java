package org.prlprg.snapshots;

public class MissingSnapshotException extends RuntimeException {
  MissingSnapshotException(String queryName) {
    super(
        "No snapshot for "
            + queryName
            + ".\nYou must run the test that generates said snapshot before you can run this test.");
  }
}
