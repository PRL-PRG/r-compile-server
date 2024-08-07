package org.prlprg.server;

import javax.annotation.Nullable;
import org.zeromq.ZMQ;
import org.zeromq.ZMQ.Error;
import org.zeromq.ZMQException;

/**
 * Manages communication between the server and a particular client. Contains the client's socket,
 * thread, and {@link ClientState}.
 *
 * <p>This class doesn't implement {@link AutoCloseable}; if you want to close this, close the
 * socket. The reason is that the socket may close on its own, so we have to handle that case
 * anyways, and don't want two separate ways to close.
 */
final class ClientHandler {
  private final String address;
  private final ZMQ.Socket socket;
  private final Thread thread;
  private @Nullable Throwable exception = null;
  // When the socket closes, we aren't made aware until we handle its next message and get null or
  // an exception.
  private boolean isDefinitelyClosed = false;
  private final ClientState state = new ClientState();

  /**
   * <b>This will immediately start handling client requests on a background thread immediately.</b>
   *
   * <p>As specified in the class description, to close this (and stop the thread), close the
   * socket.
   *
   * @param address The address of the socket. It must resolve to the same address as {@code
   *     socket.getLastEndpoint()}, however the actual text may be different (e.g. localhost vs
   *     127.0.0.1) which is why we need to pass it explicitly (because otherwise {@link
   *     Server#unbind} won't work).
   */
  ClientHandler(String address, ZMQ.Socket socket) {
    this.address = address;
    this.socket = socket;
    this.thread =
        new Thread(
            () -> {
              try {
                while (true) {
                  var message = socket.recvStr();
                  if (message == null) {
                    // Socket closed
                    isDefinitelyClosed = true;
                    break;
                  }
                  var response = ReqRepHandlers.handle(state, message);
                  if (response != null) {
                    socket.send(response);
                  }
                }
              } catch (ZMQException e) {
                close();
                var error = Error.findByCode(e.getErrorCode());
                switch (error) {
                    // Currently assume these are normal
                  case Error.ECONNABORTED:
                  case Error.ETERM:
                    System.out.println("ClientState-" + address() + " closed with " + error);
                    break;
                  default:
                    exception = e;
                    throw e;
                }
              } catch (Throwable e) {
                close();
                exception = e;
                throw e;
              }
            });
    thread.setName("ClientState-" + address());
    thread.start();
  }

  /** The address the client is connected to. */
  String address() {
    return address;
  }

  /**
   * Close the underlying socket, which makes the thread stop on next communication (if it's doing
   * something it won't stop immediately).
   *
   * <p>If the socket is already closed, the behavior of this method is undefined.
   */
  void close() {
    if (isDefinitelyClosed) {
      throw new IllegalStateException("Socket already closed");
    }
    isDefinitelyClosed = true;
    socket.close();
  }

  /**
   * Throws a {@link ClientHandleException} if the client disconnected because it got an exception.
   */
  void checkForException() throws ClientHandleException {
    if (exception != null) {
      throw new ClientHandleException(address(), exception);
    }
  }

  /**
   * Waits for the client to disconnect and the socket to close on its own.
   *
   * @throws ClientHandleException if a client disconnected because it got an exception.
   */
  void waitForDisconnect() throws ClientHandleException {
    try {
      thread.join();
    } catch (InterruptedException e) {
      throw new RuntimeException(e);
    }
    checkForException();
  }
}
