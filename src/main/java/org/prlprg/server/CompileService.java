package org.prlprg.server;

import com.google.protobuf.ByteString;
import io.grpc.Status;
import io.grpc.stub.StreamObserver;
import java.io.IOException;
import java.util.HashMap;
import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.bc.Compiler;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.GNURSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

class CompileService extends CompileServiceGrpc.CompileServiceImplBase {
  private static final Logger logger = Logger.getLogger(CompileServer.class.getName());

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
      Messages.CompileRequest request, StreamObserver<Messages.CompileResponse> responseObserver) {

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
        compiler.setOptimizationLevel(optimizationLevel);
        var res = compiler.compile();
        if (res.isEmpty()) {
          responseObserver.onError(
              Status.INTERNAL
                  .withDescription("Cannot compile with browser() in the function")
                  .asRuntimeException());
        } else {
          BCodeSXP bc = SEXPs.bcode(res.get());
          ByteString serializedBc = null;
          try {
            serializedBc = RDSWriter.writeByteString(bc);
          } catch (Exception e) {
            responseObserver.onError(
                Status.INTERNAL
                    .withDescription("Impossible to serialize the bytecode")
                    .asRuntimeException());
          }
          assert serializedBc != null;
          response.setCode(serializedBc);
        }
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
      // Also cache the optimization level?
      if (cached != null) {
        // TODO:
        // Serialize BcCode and ConstPool and set them in the response
      } else {
        // Compile the function

        // Add it to the code cache
      }
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
