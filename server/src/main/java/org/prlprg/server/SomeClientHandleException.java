package org.prlprg.server;

import com.google.common.collect.ImmutableList;

/** If any client threads closed because of an exception, the server will throw this. */
public final class SomeClientHandleException extends Exception {
  /** The exceptions that caused the client threads to close. */
  public final ImmutableList<ClientHandleException> clientExceptions;

  SomeClientHandleException(ImmutableList<ClientHandleException> clientExceptions) {
    super("Some client handlers/threads crashed, see the client exceptions for details.");
    this.clientExceptions = clientExceptions;
  }
}
