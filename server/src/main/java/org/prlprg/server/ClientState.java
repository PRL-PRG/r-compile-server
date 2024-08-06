package org.prlprg.server;

import javax.annotation.Nullable;
import org.prlprg.RVersion;

/**
 * State for a client stored on the server visible to {@link ReqRepHandlers}.
 *
 * <p>Doesn't include the socket and client thread, that's the role of {@link ClientHandler}.
 */
final class ClientState {
  private record Init(RVersion version) {}

  private @Nullable Init init;

  ClientState() {}

  void init(RVersion version) {
    if (init != null) {
      throw new ClientStateViolationException("Client already initialized");
    }
    init = new Init(version);
  }

  RVersion version() {
    return init().version;
  }

  private Init init() {
    if (init == null) {
      throw new ClientStateViolationException("Client not initialized");
    }
    return init;
  }
}
