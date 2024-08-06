package org.prlprg.server;

import javax.annotation.Nullable;
import org.prlprg.RVersion;
import org.prlprg.util.NotImplementedError;

/**
 * Functions for each initial request the client can make. They take the initial request body as
 * params (as well as client state), and return the final response (or void if there are none). If a
 * request is more complicated than a simple function (e.g. server can respond with "more
 * information needed" and then wait until the client sends more), the function will also take a
 * {@link Mediator} to send intermediate responses and handle intermediate requests (possibly out-
 * of-order, we're not sure what kinds of communicatio we'll need yet).
 *
 * <p>The specific handlers are actually all private, because this class's interface has the method
 * which handles a generic initial request, parsing and dispatching to the specific handler.
 */
final class ReqRepHandlers {
  private static final String SIMPLE_ACK = "";

  /**
   * Handle an initial request (not intermediate request in a request chain) from the client.
   *
   * <p>Apparetly ZMQ needs every request to have some response. If this returns null, it already
   * send a response. If this only needs to do a simple ACK, it will return the empty string.
   */
  // TODO: Add GenericMediator which can create all other mediators which we'll do depending on the
  //  request type. GenericMediator will have a reference to the ClientHandler's socket and thread
  //  so it can send and receive subsequect requests,
  static @Nullable String handle(ClientState state, String request) {
    // TODO: Parse request type and the rest of the data, create specific mediator if necessary,
    //  dispatch to the specific handler, and encode the response.
    if (request.equals("Hello, server!")) {
      throw new ClientStateViolationException("bad message");
    }
    if (request.startsWith("Proper init ")) {
      RVersion rVersion;
      try {
        rVersion = RVersion.parse(request.substring("Proper init ".length()));
      } catch (IllegalArgumentException e) {
        throw new ClientParseViolationException(e);
      }
      init(state, rVersion);
      return SIMPLE_ACK;
    }
    if (request.startsWith("Something which returns null so IntelliJ doesn't complain")) {
      return null;
    }
    throw new NotImplementedError();
  }

  // region specific handlers
  private static void init(ClientState state, RVersion rVersion) {
    state.init(rVersion);
  }
  // endregion
}
