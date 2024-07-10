package org.prlprg.server;

import io.grpc.Server;
import io.grpc.ServerBuilder;
import io.grpc.stub.StreamObserver;
import java.util.concurrent.TimeUnit;
import java.util.logging.Logger;

class CompileServer {
  private static final Logger logger = Logger.getLogger(CompileServer.class.getName());

  private final int port;
  private final Server server;

  public CompileServer(int port) {
    this.port = port;
    this.server = ServerBuilder.forPort(port).addService(new CompileService()).build();
  }

  public void start() throws Exception {
    server.start();
    logger.info("Server started, listening on " + port);
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

  private static class CompileService extends CompileServiceGrpc.CompileServiceImplBase {
    @Override
    public void compile(
        Messages.CompileRequest request,
        StreamObserver<Messages.CompileResponse> responseObserver) {
      // Parse the request
      Messages.Function function = request.getFunction();
      Messages.Tier tier = request.getTier(); // Default is baseline
      int optimizationLevel = request.getOptimizationLevel(); // default is 0
      Messages.Context context = request.getContext(); // null if not provided

      // Compile the code and build response
      Messages.CompileResponse.Builder response = Messages.CompileResponse.newBuilder();
      // TODO

      // Send the response
      responseObserver.onNext(response.build());
      responseObserver.onCompleted();
    }
  }
}
