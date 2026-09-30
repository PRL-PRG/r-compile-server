package org.prlprg.server;

import io.grpc.Server;
import io.grpc.ServerBuilder;
import io.grpc.health.v1.HealthCheckResponse;
import io.grpc.protobuf.services.HealthStatusManager;
import io.grpc.protobuf.services.ProtoReflectionService;
import java.io.IOException;
import java.util.concurrent.TimeUnit;
import java.util.logging.LogManager;
import java.util.logging.Logger;

public class CompileServer {
  private static final Logger logger = Logger.getLogger(CompileServer.class.getName());

  private final Server server;
  private final CompileService service;
  private HealthStatusManager health;

  static {
    try (var is = CompileServer.class.getResourceAsStream("/logging.properties")) {
      LogManager.getLogManager().readConfiguration(is);
    } catch (IOException e) {
      throw new RuntimeException("Unable to load logging.properties", e);
    }
  }

  /// Serve on `port`, or on any free port if it's 0 (see [#port()]).
  public CompileServer(int port) {
    this.health = new HealthStatusManager();
    this.service = new CompileService();
    this.server =
        ServerBuilder.forPort(port)
            .addService(service)
            .addService(health.getHealthService())
            .addService(
                ProtoReflectionService
                    .newInstance()) // automatic discovery of all services and messages
            .build();
  }

  /// The port this serves on. Only known once started, if it was constructed with port 0.
  public int port() {
    return server.getPort();
  }

  /// The FIŘ modules whose stubs' requests this serves.
  public FirModules firModules() {
    return service.firModules();
  }

  public void start() throws Exception {
    server.start();
    logger.info("Server started, listening on " + port());
    Runtime.getRuntime()
        .addShutdownHook(
            new Thread() {
              @Override
              public void run() {
                // Use stderr here since the logger may have been reset by its JVM shutdown hook.
                System.err.println("*** shutting down gRPC server since JVM is shutting down");
                try {
                  CompileServer.this.stop();
                } catch (InterruptedException e) {
                  e.printStackTrace(System.err);
                }
                System.err.println("*** server shut down");
              }
            });
    health.setStatus("", HealthCheckResponse.ServingStatus.SERVING);
  }

  /** Stop serving requests and shutdown resources. */
  public void stop() throws InterruptedException {
    if (server != null) {
      server.shutdown().awaitTermination(30, TimeUnit.SECONDS);
    }
  }

  /** Await termination on the main thread since the grpc library uses daemon threads. */
  private void blockUntilShutdown() throws InterruptedException {
    if (server != null) {
      server.awaitTermination();
    }
  }

  public static void main(String[] args) throws Exception {
    CompileServer server = new CompileServer(8980);
    server.start();
    server.blockUntilShutdown();
  }
}
