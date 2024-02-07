package org.prlprg.server;

/**
 * An exception a background thread got when processing a client request. This exception is checked
 * while the underlying exception may not be.
 */
public final class ClientHandleException extends Exception {
  public final String address;

  public ClientHandleException(String address, Throwable cause) {
    super("Handler/thread for client " + address + " crashed", cause);
    this.address = address;
  }
}
