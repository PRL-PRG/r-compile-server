package org.prlprg.server;

import com.google.protobuf.ByteString;
import io.grpc.Server;
import io.grpc.ServerBuilder;
import io.grpc.Status;
import io.grpc.health.v1.HealthCheckResponse;
import io.grpc.protobuf.services.HealthStatusManager;
import io.grpc.protobuf.services.ProtoReflectionService;
import io.grpc.stub.StreamObserver;
import java.io.IOException;
import java.util.HashMap;
import java.util.concurrent.TimeUnit;
import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.bc.Compiler;
import org.prlprg.rds.RDSReader;
import org.prlprg.session.GNURSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;

class CompileServer {
  private static final Logger logger = Logger.getLogger(CompileServer.class.getName());

  private final int port;
  private final Server server;
  private HealthStatusManager health;

  public CompileServer(int port) {
    this.port = port;
    this.health = new HealthStatusManager();
    this.server =
        ServerBuilder.forPort(port)
            .addService(new CompileService())
            .addService(health.getHealthService())
            .addService(
                ProtoReflectionService
                    .newInstance()) // automatic discovery of all services and messages
            .build();
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

  static class CompileService extends CompileServiceGrpc.CompileServiceImplBase {
    private @Nullable GNURSession session = null;
    // Cache for all values (including functions)
    private HashMap<ByteString, SEXP> cache = new HashMap<>();
    // Cache for byte-code, only for functions
    private HashMap<ByteString, Bc> bcCache = new HashMap<>();

    // TODO: cache for native code, which should also include contexts

    // Testing externally: grpcurl -plaintext -d '{"function":{"name": "testFunc"}}' 0.0.0.0:8980
    // CompileService.Compile
    @Override
    public void compile(
        Messages.CompileRequest request,
        StreamObserver<Messages.CompileResponse> responseObserver) {

      if (session == null) {
        responseObserver.onError(
            Status.INTERNAL.withDescription("Session not initialized.").asRuntimeException());
      }

      // Parse the request
      Messages.Function function = request.getFunction();
      Messages.Tier tier = request.getTier(); // Default is baseline
      int optimizationLevel = request.getOptimizationLevel(); // default is 0
      Messages.Context context = request.getContext(); // null if not provided

      logger.info("Received request to compile function " + function.getName());

      // Compile the code and build response
      Messages.CompileResponse.Builder response = Messages.CompileResponse.newBuilder();
      // TODO
      if (function.hasBody()) {
        SEXP closure = null;
        try {
          closure = RDSReader.readByteString(session, function.getBody());
        } catch (IOException e) {
          throw new RuntimeException(e);
        }
        if (closure instanceof CloSXP c) {
          Compiler compiler = new Compiler(c, session);
        } else {
          // See
          // https://github.com/grpc/grpc-java/blob/master/examples/src/main/java/io/grpc/examples/errorhandling/DetailErrorSample.java
          // We could have more details using that:
          // https://github.com/grpc/grpc-java/blob/master/examples/src/main/java/io/grpc/examples/errordetails/ErrorDetailsExample.java
          responseObserver.onError(
              Status.INTERNAL.withDescription("Not a closure").asRuntimeException());
        }
      } else {
        var functionHash = function.getHash();
        Bc cached = bcCache.get(functionHash);
        if (cached != null) {
          // TODO:
          // Serialize BcCode and ConstPool and set them in the response
        } else {
          // Compile the function

          // Add it to the code cache
        }
        // TODO: We should cache the Compiler instance for that function and then
        // retrieve it here.
      }

      // Send the response
      response.setTier(tier);
      responseObserver.onNext(response.build());
      responseObserver.onCompleted();
    }

    @Override
    public void init(
        Messages.InitRequest request, StreamObserver<Messages.InitResponse> responseObserver) {

      // Parse the request
      Messages.Version rshVersion = request.getRshVersion();
      Messages.Version RVersion = request.getRVersion();
      String platform = request.getPlatform();

      var packages = request.getPackageHashList();

      logger.info(
          "Received init request with R version "
              + RVersion
              + "and Rsh version"
              + rshVersion
              + " and platform "
              + platform);
      logger.info("Received package hashes: " + packages);

      // Look into our cache if we have the packages.
      // Request the packages for those we do not have hashes for.

      responseObserver.onNext(Messages.InitResponse.newBuilder().build());
      responseObserver.onCompleted();
    }
  }
}