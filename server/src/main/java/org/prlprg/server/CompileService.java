package org.prlprg.server;

import com.google.common.io.Files;
import com.google.protobuf.ByteString;
import io.grpc.Status;
import io.grpc.stub.ServerCallStreamObserver;
import io.grpc.stub.StreamObserver;
import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.Optional;
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

  // Cache for byte-code, only for functions. We keep the already serialized code in the cache
  // not the Bc (or BcCodeSXP)
  // Key is (hash, optimisationLevel)
  private final HashMap<Pair<Long, Integer>, Pair<Bc, ByteString>> bcCache = new HashMap<>();
  // Cache for native code.
  // Key is (hash, bcOpt, ccOpt)
  private final HashMap<Triple<Long, Integer, Integer>, NativeClosure> nativeCache =
      new HashMap<>();

  private static String genSymbol(Messages.Function function) {
    // the hash is uint64 (unsigned ) but java does not have unsigned numbers and store it as a long
    // We first need to convert it to a string and interpret it as an unsigned number
    // Java uses 2's complement
    return "gen_" + Long.toUnsignedString(function.getHash());
  }

  // Testing externally: grpcurl -plaintext -d '{"function":{"name": "testFunc"}}' 0.0.0.0:8980
  // CompileService.Compile
  @Override
  public void compile(
      Messages.CompileRequest request,
      StreamObserver<Messages.CompileResponse> plainResponseObserver) {

    ServerCallStreamObserver<Messages.CompileResponse> responseObserver =
        (ServerCallStreamObserver<Messages.CompileResponse>) plainResponseObserver;
    responseObserver.setCompression(
        "gzip"); // Or for all responses? In that case, we just need to add an interceptor.

    if (session == null) {
      responseObserver.onError(
          Status.INTERNAL.withDescription("Session not initialized.").asRuntimeException());
    }

    // Parse the request
    Messages.Function function = request.getFunction();
    Messages.Tier tier = request.getTier(); // Default is optimized
    if (tier == Messages.Tier.UNRECOGNIZED) {
      tier = Messages.Tier.OPTIMIZED;
    }
    var bcOpt = request.hasBcOpt() ? request.getBcOpt() : 2;
    var ccOpt = request.hasCcOpt() ? request.getCcOpt() : 2;
    Messages.Context context = request.getContext(); // null if not provided

    logger.info(
        "Received request to compile function "
            + function.getName()
            + " with hash "
            + Long.toUnsignedString(function.getHash())
            + " at tier "
            + tier
            + " with bytecode level "
            + (request.hasBcOpt() ? bcOpt : "default 2")
            + " and native optimization level "
            + (request.hasCcOpt() ? ccOpt : "default 2")
            + " Serialized size = "
            + request.getSerializedSize());

    // Compile the code and build response
    Messages.CompileResponse.Builder response = Messages.CompileResponse.newBuilder();
    response.setTier(tier);
    response.setHash(function.getHash());

    // Cache requests
    NativeClosure ccCached = null;
    var nativeKey = Triple.of(function.getHash(), bcOpt, ccOpt);
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
    var bcKey = Pair.of(function.getHash(), bcOpt);
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
                + bcOpt
                + ": not found in cache.");
        try {
          var bc = compileBcClosure(function.getBody(), bcOpt);
          ByteString serializedBc = null;
          if (bc.isEmpty()) {
            logger.warning(
                "Empty bytecode for function "
                    + function.getName()
                    + ". Not caching and returning the original body.");
            // We will keep the code field empty
          } else {
            serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc.get()));
            response.setCode(serializedBc);
            bcCached =
                Pair.of(bc.get(), serializedBc); // potentially used for the native compilation also
            // Add it to the cache
            bcCache.put(bcKey, bcCached);
          }
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
                + bcOpt
                + " and native level "
                + ccOpt
                + ": not found in cache.");
        // At this point, we have already the bytecode, whether we got it from the cache or we
        // compiled it
        try {
          assert bcCached != null;
          // Name should be fully decided by the client?
          var name = genSymbol(function);
          var bc2cCompiler = new BC2CCompiler(bcCached.first(), name);
          var module = bc2cCompiler.finish();
          var input = File.createTempFile("cfile", ".c");
          var f = Files.newWriter(input, Charset.defaultCharset());
          module.file().writeTo(f);
          var output = File.createTempFile("ofile", ".o");

          RshCompiler.getInstance(ccOpt)
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
    var res = response.build();
    responseObserver.onNext(res);
    logger.info("Response size : " + res.getSerializedSize());
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
    // TODO: detect where R is installed
    // var base_dir = Path.of("/workspace/");
    var base_dir = Path.of(".");
    var r_dir = base_dir.resolve("external/R");
    var lib_dir = base_dir.resolve("external/R/library");
    session = new GNURSession(convertVersion(RVersion), r_dir, lib_dir);

    // TODO: Look into our cache if we have the packages.
    // Request the packages for those we do not have hashes for.

    responseObserver.onNext(Messages.InitResponse.newBuilder().build());
    responseObserver.onCompleted();
  }

  @Override
  public void clearCache(
      Messages.ClearCacheRequest request,
      StreamObserver<Messages.ClearCacheResponse> responseObserver) {
    logger.info("Clearing cache");

    var hashes = request.getHashesList();
    // If no specific hashes, we clean the entire cache
    if (hashes.isEmpty()) {
      bcCache.clear();
      nativeCache.clear();
    } else {
      for (var hash : hashes) {
        logger.info("Clearing cache entry for hash " + hash);
        bcCache.entrySet().removeIf(entry -> entry.getKey().first().equals(hash));
        nativeCache.entrySet().removeIf(entry -> entry.getKey().first().equals(hash));
      }
    }
    responseObserver.onNext(Messages.ClearCacheResponse.newBuilder().build());
    responseObserver.onCompleted();
  }

  private RVersion convertVersion(Messages.Version version) {
    return new RVersion(version.getMajor(), version.getMinor(), version.getPatch());
  }

  private Optional<Bc> compileBcClosure(ByteString body, int optimizationLevel) {
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
      return compiler.compile();
    } else {
      throw new RuntimeException("Not a closure");
    }
  }
}
