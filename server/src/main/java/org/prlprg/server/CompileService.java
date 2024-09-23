package org.prlprg.server;

import com.google.common.io.Files;
import com.google.protobuf.ByteString;
import io.grpc.Status;
import io.grpc.stub.StreamObserver;
import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.logging.Logger;
import javax.annotation.Nullable;
import org.prlprg.RVersion;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.bc2c.BC2CCompiler;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.NativeClosure;
import org.prlprg.service.RshCompiler;
import org.prlprg.session.GNURSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Pair;
import org.prlprg.util.Triple;

class CompileService extends CompileServiceGrpc.CompileServiceImplBase {
  private static final Logger logger = Logger.getLogger(CompileServer.class.getName());

  private @Nullable GNURSession session = null;
  // Cache for all values (including functions)
  private HashMap<ByteString, SEXP> cache = new HashMap<>();

  // Cache for byte-code, only for functions. We keep the already serialized code in the cache
  // not the Bc (or BcCodeSXP)
  // Key is (hash, optimisationLevel)
  private final HashMap<Pair<Long, Integer>, Pair<Bc, ByteString>> bcCache = new HashMap<>();
  // Cache for native code.
  // Key is (hash, bcOpt, ccOpt)
  private final HashMap<Triple<Long, Integer, Integer>, NativeClosure> nativeCache =
      new HashMap<>();

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
    Messages.Context context = request.getContext(); // null if not provided

    logger.info(
        "Received request to compile function "
            + function.getName()
            + " at tier "
            + tier
            + " with bytecode level "
            + request.getBcOpt()
            + " and native optimization level "
            + request.getCcOpt());

    // Compile the code and build response
    Messages.CompileResponse.Builder response = Messages.CompileResponse.newBuilder();
    response.setTier(tier);
    response.setHash(function.getHash());

    // Cache requests
    NativeClosure ccCached = null;
    var nativeKey = Triple.of(function.getHash(), request.getBcOpt(), request.getCcOpt());
    if (tier.equals(Messages.Tier.OPTIMIZED)) {
      ccCached = nativeCache.get(nativeKey);
      if (ccCached != null) {
        logger.info("Found " + function.getName() + " in native cache. No recompilation.");
        response.setCode(ccCached.code());
        response.setConstants(ccCached.constantPool());
      }
    }

    Pair<Bc, ByteString> bcCached = null;
    // We also have a look whether we have a cached bytecode for the native compilation
    var bcKey = Pair.of(function.getHash(), request.getBcOpt());
    if (tier.equals((Messages.Tier.BASELINE)) || ccCached == null) {
      bcCached = bcCache.get(bcKey);
      if (bcCached != null) {
        logger.info("Found " + function.getName() + " in bytecode cache. No recompilation.");
        response.setCode(bcCached.second());
      }
    }

    // We do not have the request version in cache
    // Compile the body if we have it
    if (!function.hasBody()) {
      logger.info(
          "No body sent with the request for function " + function.getName() + ". Cannot compile.");
      responseObserver.onError(
          Status.INVALID_ARGUMENT
              .withDescription("No body sent with the request for function " + function.getName())
              .asRuntimeException());
      // TODO: send a request to the client to get the body
    } else {
      if ((tier.equals(Messages.Tier.BASELINE) && bcCached == null)
          || (tier.equals(Messages.Tier.OPTIMIZED) && ccCached == null)) {
        logger.info(
            "Compile function "
                + function.getName()
                + " to bytecode with optimisation level "
                + request.getBcOpt()
                + ": not found in cache.");
        try {
          var bc = compileBcClosure(function.getBody(), request.getBcOpt());
          ByteString serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc));
          response.setCode(serializedBc);
          bcCached = Pair.of(bc, serializedBc); // potentially used for the native compilation also
          // Add it to the cache
          bcCache.put(bcKey, bcCached);
        } catch (Exception e) {
          // See
          // https://github.com/grpc/grpc-java/blob/master/examples/src/main/java/io/grpc/examples/errorhandling/DetailErrorSample.java
          // We could have more details using that:
          // https://github.com/grpc/grpc-java/blob/master/examples/src/main/java/io/grpc/examples/errordetails/ErrorDetailsExample.java
          responseObserver.onError(
              Status.INTERNAL
                  .withDescription(
                      "Cannot bytecode compile function "
                          + function.getName()
                          + " ; "
                          + e.getMessage())
                  .asRuntimeException());
        }
      }
      if (tier.equals(Messages.Tier.OPTIMIZED) && ccCached == null) { // OPTIMIZED tier => native
        logger.info(
            "Compile function "
                + function.getName()
                + " with optimisation level "
                + request.getBcOpt()
                + " and native level "
                + request.getCcOpt()
                + ": not found in cache.");
        // At this point, we have already the bytecode, whether we got it from the cache or we
        // compiled it
        try {
          assert bcCached != null;
          // Name should be fully decided by the client?
          var name = function.getName() + "_" + function.getHash();
          var bc2cCompiler = new BC2CCompiler(bcCached.first(), name);
          var module = bc2cCompiler.finish();
          var input = File.createTempFile("cfile", ".c");
          var f = Files.newWriter(input, Charset.defaultCharset());
          module.file().writeTo(f);
          var output = File.createTempFile("ofile", ".o");

          RshCompiler.getInstance(request.getCcOpt())
              .createBuilder(input.getPath(), output.getPath())
              .flag("-c")
              .compile();

          var res = Files.asByteSource(output).read();
          var serializedConstantPool = RDSWriter.writeByteString(module.constantPool());

          ccCached =
              new NativeClosure(
                  ByteString.copyFrom(res), module.topLevelFunName(), serializedConstantPool);
          nativeCache.put(nativeKey, ccCached);
          response.setCode(ccCached.code());
          response.setConstants(ccCached.constantPool());
        } catch (Exception e) {
          responseObserver.onError(
              Status.INTERNAL
                  .withDescription(
                      "Cannot native compile function "
                          + function.getName()
                          + " ; "
                          + e.getMessage())
                  .asRuntimeException());
        }
      }
    }

    // Send the response
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
            + "and Rsh version "
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

  private Bc compileBcClosure(ByteString body, int optimizationLevel) {
    SEXP closure = null;
    try {
      assert session != null;
      closure = RDSReader.readByteString(session, body);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }
    if (closure instanceof CloSXP c) {
      BCCompiler compiler = new BCCompiler(c, session);
      compiler.setOptimizationLevel(optimizationLevel);
      var bc = compiler.compile();
      if (bc.isEmpty()) {
        throw new RuntimeException("Bytecode compilation failed");
      }
      return bc.get();
    } else {
      throw new RuntimeException("Not a closure");
    }
  }
}
