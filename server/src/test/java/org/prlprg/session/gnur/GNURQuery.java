package org.prlprg.session.gnur;

import java.io.IOException;
import java.nio.file.Path;
import org.prlprg.bc.BCQuery;
import org.prlprg.examples.Example;
import org.prlprg.session.TestRSession;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;
import org.prlprg.util.SingletonParameterResolver;

/// Get the specific [GNUR] instance for an [org.prlprg.examples.Example].
///
/// Currently, we only support one version of GNUR, so this returns a singleton but pretends
/// it's per-example.
public class GNURQuery implements Query<GNUR> {
  // ???: Make it not a static final? And make it the same as `GNURParameterResolver`'s?
  private static final GNUR R = new RestartingGNURProcess(new TestRSession());

  public static GNURQuery INSTANCE = new GNURQuery();

  private GNURQuery() {}

  @Override
  public GNUR compute(Example example, SnapshotStore store) {
    return R;
  }

  @Override
  public GNUR deserialize(Path path, Example example, SnapshotStore store) {
    return R;
  }

  @Override
  public void serialize(GNUR data, Path path, Example example, SnapshotStore store) {

  }
}
