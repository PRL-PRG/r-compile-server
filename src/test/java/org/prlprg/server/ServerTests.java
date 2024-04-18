package org.prlprg.server;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

import java.io.IOException;
import java.net.ServerSocket;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Timeout;
import org.zeromq.SocketType;
import org.zeromq.ZSocket;

@Timeout(5)
public class ServerTests {
  @Test
  public void testEmptyServer() throws SomeClientHandleException {
    var server = new Server();
    server.waitForAllDisconnect();
    server.close();
  }

  @Test
  @Disabled(
      "Upgraded jeroMQ and this hangs, I'm going to wait in case it resolves itself in another upgrade since we're not using this yet")
  public void testServerImmediatelyUnbind() throws SomeClientHandleException {
    int port = getUnusedPort();

    var server = new Server();
    server.bind("tcp://localhost:" + port);

    var aClient = new ZSocket(SocketType.REQ);
    aClient.connect("tcp://localhost:" + port);

    server.unbind("tcp://localhost:" + port);

    // Client won't send
    aClient.sendStringUtf8("Hello, server!");

    // These will do nothing
    server.checkForAnyException();
    server.waitForAllDisconnect();
    // Close should still work
    server.close();
  }

  @Test
  public void testServerWithABadClient() {
    int port = getUnusedPort();

    var server = new Server();
    server.bind("tcp://localhost:" + port);

    var aClient = new ZSocket(SocketType.REQ);
    aClient.connect("tcp://localhost:" + port);

    // This isn't a valid message, so it will trigger an exception in the background thread
    aClient.sendStringUtf8("Hello, server!");

    // Which will propogate when we join
    assertThrows(SomeClientHandleException.class, server::waitForAllDisconnect);
    // And check exceptions (this must be called after join or the client handler may have not yet
    // thrown anything)
    assertThrows(SomeClientHandleException.class, server::checkForAnyException);

    // Close should still work
    server.close();
  }

  @Test
  public void testServerWithAGoodClientOnlyInit() throws SomeClientHandleException {
    int port = getUnusedPort();

    var server = new Server();
    server.bind("tcp://localhost:" + port);

    var aClient = new ZSocket(SocketType.REQ);
    aClient.connect("tcp://localhost:" + port);

    // This is a valid message and will initialize the client
    aClient.sendStringUtf8("Proper init 1.23.45");
    assertEquals("", aClient.receiveStringUtf8());

    // So this will do nothing
    server.checkForAnyException();

    // This is now invalid because the client has already been initialized
    aClient.sendStringUtf8("Proper init 1.23.45");
    // If we try receiveStringUtf8 here it will hang forever. Even though we closed the socket on
    // the server end (and even we unbind), that's what ZMQ seems to do.

    // So this will throw an exception
    assertThrows(SomeClientHandleException.class, server::waitForAllDisconnect);

    // This should work normally, as always
    server.close();
  }

  private int getUnusedPort() {
    // From https://stackoverflow.com/questions/2675362/how-to-find-an-available-port
    try (var socket = new ServerSocket(0)) {
      return socket.getLocalPort();
    } catch (IOException e) {
      throw new RuntimeException("Failed to find an unused port", e);
    }
  }
}
