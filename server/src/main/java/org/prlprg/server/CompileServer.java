package org.prlprg.server;

import io.grpc.Server;
import io.grpc.ServerBuilder;
import io.grpc.health.v1.HealthCheckResponse;
import io.grpc.netty.shaded.io.grpc.netty.NettyServerBuilder;
import io.grpc.protobuf.services.HealthStatusManager;
import io.grpc.protobuf.services.ProtoReflectionService;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.concurrent.TimeUnit;
import java.util.logging.LogManager;
import java.util.logging.Logger;

public class CompileServer {
  private static final Logger logger = Logger.getLogger(CompileServer.class.getName());

  private final Server server;
  private final CompileService service;
  private final HealthStatusManager health;

  static {
    try (var is = CompileServer.class.getResourceAsStream("/logging.properties")) {
      LogManager.getLogManager().readConfiguration(is);
    } catch (IOException e) {
      throw new RuntimeException("Unable to load logging.properties", e);
    }
  }

  /// Serve on `port`, or on any free port if it's 0 (see [#port()]).
  public CompileServer(int port) {
    this(ServerBuilder.forPort(port));
  }

  private CompileServer(ServerBuilder<?> builder) {
    this.health = new HealthStatusManager();
    this.service = new CompileService();
    this.server =
        builder
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
    var announcePort = args.length != 0;
    if (announcePort && (args.length != 2 || !args[0].equals("--port"))) {
      throw new IllegalArgumentException("Usage: CompileServer [--port PORT]");
    }
    var server =
        announcePort
            ? new CompileServer(
                NettyServerBuilder.forAddress(
                    new InetSocketAddress("127.0.0.1", Integer.parseInt(args[1]))))
            : new CompileServer(8980);
    server.start();
    if (announcePort) {
      System.out.println("RCS_READY " + server.port());
      System.out.flush();
    }
    server.blockUntilShutdown();
  }
}
