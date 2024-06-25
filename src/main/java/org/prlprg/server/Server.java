package org.prlprg.server;

import java.io.Closeable;
import java.io.IOException;

/**
 * An instance of the compile server which communicates with clients.
 *
 * <p>All methods to send and receive data are here so they're easy to find.
 *
 * @implNote This uses gRPC.
 */
public final class Server implements Closeable {
  @Override
  public void close() throws IOException {}
}
