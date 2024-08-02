package org.prlprg.server;

import com.google.protobuf.ByteString;
import io.grpc.Status;
import io.grpc.stub.StreamObserver;
import java.io.IOException;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.RVersion;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
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
      try {
        ByteString serializedBc =
            compileClosure(function.getBody(), optimizationLevel, responseObserver);
        response.setCode(serializedBc);
      } catch (Exception e) {
        // See
        // https://github.com/grpc/grpc-java/blob/master/examples/src/main/java/io/grpc/examples/errorhandling/DetailErrorSample.java
        // We could have more details using that:
        // https://github.com/grpc/grpc-java/blob/master/examples/src/main/java/io/grpc/examples/errordetails/ErrorDetailsExample.java
        responseObserver.onError(
            Status.INTERNAL
                .withDescription(
                    "Cannot compile function " + function.getName() + " ; " + e.getMessage())
                .asRuntimeException());
      }
    } else {
      var functionHash = function.getHash();
      Bc cached = bcCache.get(functionHash);
      // Also cache the optimization level?
      if (cached != null) {
        // TODO:
        // Serialize BcCode and ConstPool and set them in the response
      } else {
        // Ask the client for the body of the function

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

    // TODO: Lookup to see if we have this version of R installed or not.
    // Hardcoded so far:
    var r_dir = Path.of("/usr/lib/R/");
    var lib_dir = "~/R/x86_64-pc-linux-gnu-library/4.3/";
    lib_dir = lib_dir.replaceFirst("^~", System.getProperty("user.home"));
    session = new GNURSession(convertVersion(RVersion), r_dir, Path.of(lib_dir));

    // TODO: Look into our cache if we have the packages.
    // Request the packages for those we do not have hashes for.

    responseObserver.onNext(Messages.InitResponse.newBuilder().build());
    responseObserver.onCompleted();
  }

  private RVersion convertVersion(Messages.Version version) {
    return new RVersion(version.getMajor(), version.getMinor(), version.getPatch());
  }

  private ByteString compileClosure(
      ByteString body,
      int optimizationLevel,
      StreamObserver<Messages.CompileResponse> responseObserver) {
    SEXP closure = null;
    ByteString serializedBc = null;
    try {
      assert session != null;
      closure = RDSReader.readByteString(session, body);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }
    if (closure instanceof CloSXP c) {
      BCCompiler compiler = new BCCompiler(c, session);
      compiler.setOptimizationLevel(optimizationLevel);
      var res = compiler.compile();
      if (res.isEmpty()) {
        throw new RuntimeException("Cannot compile a closure with a browser call");
      } else {
        BCodeSXP bc = SEXPs.bcode(res.get());

        try {
          serializedBc = RDSWriter.writeByteString(bc);
        } catch (Exception e) {
          throw new RuntimeException("Impossible to serialize the bytecode");
        }
      }
    } else {
      throw new RuntimeException("Not a closure");
    }
    return serializedBc;
  }
}
