package org.prlprg.server;

import com.google.common.collect.ImmutableList;
import java.io.Closeable;
import java.util.Set;
import org.prlprg.util.WeakHashSet;
import org.zeromq.SocketType;
import org.zeromq.ZContext;

/**
 * An instance of the compile server which communicates with clients.
 *
 * <p>All methods to send and receive data are here so they're easy to find.
 *
 * @implNote The current plan is for the server's interface to be exclusive to the main thread,
 *     which includes adding sockets and closing. The server spawns separate threads for each client
 *     to wait and handle their requests, and the clients threads may spawn child threads for
 *     specific multi-part requests (although first the clients need to be multi- threaded).
 */
public final class Server implements Closeable {
  // TODO: Make this an environment variable, but we should have some centralized configuration
  //   static class with all environment variables
  private static final int IO_THREADS = 1;

  private final Thread mainThread = Thread.currentThread();
  private final ZContext context = new ZContext(IO_THREADS);
  // Assume that ClientHandlers get garbage collected when their sockets and threads close.
  // This doesn't mean all client handlers in the set are open, don't assume so.
  private final Set<ClientHandler> clients = new WeakHashSet<>();

  /** Creates a new server. */
  public Server() {}

  /**
   * Binds the server to the given address so a client can connect. Currently, we only allow one
   * client per address, but a server can bind to multiple addresses.
   *
   * <p>This method must be called from the thread the server was created on.
   *
   * @param address The address to bind to, e.g. "tcp://*:5555".
   */
  public void bind(String address) {
    requireMainThread("bind");

    var socket = context.createSocket(SocketType.REP);
    var isBound = socket.bind(address);
    // Does ZMQ ever return false without throwing? If so, we need to handle
    assert isBound;

    clients.add(new ClientHandler(address, socket));
  }

  /**
   * Unbinds the server from the given address so, if a client is connected, it will disconnect. If
   * the client socket was closed, this method may or may not throw {@link
   * IllegalArgumentException}.
   *
   * <p>If the client was once but already no longer connected, the behavior of this method is
   * undefined.
   *
   * <p>This method must be called from the thread the server was created on.
   *
   * @param address The address to unbind from, e.g. "tcp://*:5555".
   * @throws IllegalArgumentException If no client is bound to the given address.
   */
  public void unbind(String address) {
    requireMainThread("unbind");

    for (var client : clients) {
      if (client.address().equals(address)) {
        client.close();
        return;
      }
    }
    throw new IllegalArgumentException("No client bound to " + address);
  }

  /**
   * Throws a {@link SomeClientHandleException} if any client disconnected because it got an
   * exception.
   *
   * <p>This method must be called from the thread the server was created on.
   */
  void checkForAnyException() throws SomeClientHandleException {
    requireMainThread("checkForAnyException");

    var exceptionsBuilder =
        ImmutableList.<ClientHandleException>builderWithExpectedSize(clients.size());

    for (var client : clients) {
      try {
        client.checkForException();
      } catch (ClientHandleException e) {
        exceptionsBuilder.add(e);
      }
    }

    var exceptions = exceptionsBuilder.build();
    if (!exceptions.isEmpty()) {
      throw new SomeClientHandleException(exceptions);
    }
  }

  /**
   * Waits for all clients to disconnect.
   *
   * <p>This method must be called from the thread the server was created on.
   *
   * @throws SomeClientHandleException If any client disconnected because it got an exception.
   */
  public void waitForAllDisconnect() throws SomeClientHandleException {
    requireMainThread("waitForAllDisconnect");

    var exceptionsBuilder =
        ImmutableList.<ClientHandleException>builderWithExpectedSize(clients.size());

    for (var client : clients) {
      try {
        client.waitForDisconnect();
      } catch (ClientHandleException e) {
        exceptionsBuilder.add(e);
      }
    }

    var exceptions = exceptionsBuilder.build();
    if (!exceptions.isEmpty()) {
      throw new SomeClientHandleException(exceptions);
    }
  }

  /**
   * Closes the server, disconnecting all clients.
   *
   * <p>This method must be called from the thread the server was created on.
   */
  @Override
  public void close() {
    requireMainThread("close");

    // Probably handled by context but anyways
    if (context.isClosed()) {
      throw new IllegalStateException("Server already closed");
    }

    context.close();
    // Sockets will disconnect, and client handlers will stop their threads, automatically
  }

  private void requireMainThread(String method) {
    if (Thread.currentThread() != mainThread) {
      throw new IllegalStateException(
          "Method " + method + " must be called from the thread the server was created on");
    }
  }
}
