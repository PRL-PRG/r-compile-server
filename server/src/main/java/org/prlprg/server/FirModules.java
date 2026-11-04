package org.prlprg.server;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.atomic.AtomicInteger;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir2c.Fir2CSession;

/// The FIŘ modules whose compiled code clients run, by the id their stubs name them with, so that
/// when a stub asks for its version ([CompileService#compileFirVersion]), the server finds the
/// module and what the client already has of it (see `server/doc/lazy-versions.md`).
public final class FirModules {
  /// A registered module.
  ///
  /// @param ccOpt The C optimization level its code is compiled with.
  /// @param versionStats Whether its code is compiled with `-DFIR_VERSION_STATS` (it counts the
  ///     calls of each version, see `Fir_stats_versions_get` in `client/rsh/src/fir2c/runtime.h`).
  public record Entry(Fir2CSession session, int ccOpt, boolean versionStats) {}

  private final Map<String, Entry> entries = new ConcurrentHashMap<>();
  private final AtomicInteger nextId = new AtomicInteger(1);

  /// An id no module was registered with before, for a new [Fir2CSession].
  ///
  /// Ids must never repeat: they prefix the module's C names, and a client's JIT remembers where
  /// it found a name for as long as it runs.
  public String freshId() {
    return "m" + nextId.getAndIncrement();
  }

  /// Register `session`'s module under its id, replacing whatever was registered under it.
  public void register(Fir2CSession session, int ccOpt, boolean versionStats) {
    entries.put(session.id(), new Entry(session, ccOpt, versionStats));
  }

  public @Nullable Entry get(String id) {
    return entries.get(id);
  }

  public void remove(String id) {
    entries.remove(id);
  }
}
