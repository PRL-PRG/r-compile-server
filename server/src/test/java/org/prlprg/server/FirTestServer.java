package org.prlprg.server;

import org.jspecify.annotations.Nullable;

/// The compile server the FIŘ stubs in compiled test modules ask for their versions (see
/// `server/doc/lazy-versions.md`): one per test JVM, on a free port, for as long as the JVM runs.
public final class FirTestServer {
  private static @Nullable CompileServer INSTANCE;

  /// Start the server if it isn't running, and return it.
  public static synchronized CompileServer instance() {
    if (INSTANCE == null) {
      var server = new CompileServer(0);
      try {
        server.start();
      } catch (Exception e) {
        throw new RuntimeException("Failed to start the FIR test compile server", e);
      }
      INSTANCE = server;
    }
    return INSTANCE;
  }

  private FirTestServer() {}
}
