package org.prlprg.server;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

import org.junit.jupiter.api.Test;
import org.prlprg.RVersion;

public class ClientStateTests {
  @Test
  public void testClientState() {
    var clientState = new ClientState();
    assertThrows(ClientStateViolationException.class, clientState::version);
    clientState.init(RVersion.LATEST_AWARE);
    assertEquals(RVersion.LATEST_AWARE, clientState.version());
  }
}
