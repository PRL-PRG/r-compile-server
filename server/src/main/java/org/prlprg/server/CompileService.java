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
import java.util.logging.Level;
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
    responseObserver.setCompression("gzip"); // Or for all responses? In that case, we just need to
    // add an interceptor.

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
      var debug = request.getDebug();
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
                + " debug mode "
                + debug
            + " Serialized size = "
            + request.getSerializedSize());

    if (request.getNoCache()) {
      logger.info("This closure will not be cached and no lookups in the cache will be performed.");
    }

    // Compile the code and build response
    Messages.CompileResponse.Builder response = Messages.CompileResponse.newBuilder();

    // Cache requests
    @Nullable NativeClosure ccCached = null;
    @Nullable Pair<Bc, ByteString> bcCached = null;
    @Nullable Bc bc = null;
    var nativeKey = Triple.of(function.getHash(), bcOpt, ccOpt);
    var bcKey = Pair.of(function.getHash(), bcOpt);

    if (!request.getNoCache()) {
      if (tier.equals(Messages.Tier.OPTIMIZED)) {
        ccCached = nativeCache.get(nativeKey);
        if (ccCached != null) {
          logger.info("Found " + function.getName() + " in native cache. No recompilation.");
            Messages.CompileSuccess.Builder successBuilder = Messages.CompileSuccess.newBuilder();
            successBuilder.setCode(ccCached.code());
            successBuilder.setConstants(ccCached.constantPool());
            successBuilder.setTier(tier);
            successBuilder.setHash(function.getHash());
            response.setSuccess(successBuilder.build());
            // Send the response and return early
            responseObserver.onNext(response.build());
            responseObserver.onCompleted();
            return;
        }
      }

      // We also have a look whether we have a cached bytecode for the native compilation

      if (tier.equals((Messages.Tier.BASELINE)) || ccCached == null) {
        bcCached = bcCache.get(bcKey);
          if (bcCached != null && tier.equals(Messages.Tier.BASELINE)) {
          logger.info("Found " + function.getName() + " in bytecode cache. No recompilation.");
              Messages.CompileSuccess.Builder successBuilder = Messages.CompileSuccess.newBuilder();
              successBuilder.setCode(bcCached.second());
              successBuilder.setTier(tier);
              successBuilder.setHash(function.getHash());
              response.setSuccess(successBuilder.build());
              // Send the response and return early
              responseObserver.onNext(response.build());
              responseObserver.onCompleted();
              return;
        }
      }
    }

    // If we found something in the bc cache but not native, we compile to native
    // If we found something in the native cache, we just go finish the response
    // If nothing was found in the cache, we compile the function to bytecode, then to native

    // Compile the body if we have it
    if (!function.hasBody()) {
      logger.info(
          "No body sent with the request for function " + function.getName() + ". Cannot compile.");
        Messages.CompileFailure.Builder failureBuilder = Messages.CompileFailure.newBuilder();
        failureBuilder.setCommand("compile");
        failureBuilder.setCompilerOutput("No body sent with the request for function " + function.getName());
        failureBuilder.setSourceCode("");
        response.setFailure(failureBuilder.build());
        responseObserver.onNext(response.build());
        responseObserver.onCompleted();
        return;
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
          var bcRes = compileBcClosure(function.getBody(), bcOpt);
          ByteString serializedBc = null;
          if (bcRes.isEmpty()) {
            logger.warning(
                "Empty bytecode for function "
                    + function.getName()
                        + ". Not caching and returning failure.");
              Messages.CompileFailure.Builder failureBuilder = Messages.CompileFailure.newBuilder();
              failureBuilder.setCommand("bytecode compile");
              failureBuilder.setCompilerOutput("Empty bytecode for function " + function.getName());
              failureBuilder.setSourceCode(function.getBody().toStringUtf8());
              response.setFailure(failureBuilder.build());
              responseObserver.onNext(response.build());
              responseObserver.onCompleted();
              return;
          } else {
            bc = bcRes.get();
            if (!request.getNoCache()) { // We do not cache if the client does not want to
              serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc));
              bcCached = Pair.of(bc, serializedBc); // potentially used for the native
              // compilation also
              // Add it to the cache
              bcCache.put(bcKey, bcCached);
            } else {
                serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc));
            }

              // If this is BASELINE tier, we're done after bytecode compilation
              if (tier.equals(Messages.Tier.BASELINE)) {
                  Messages.CompileSuccess.Builder successBuilder = Messages.CompileSuccess.newBuilder();
                  successBuilder.setCode(serializedBc);
                  successBuilder.setTier(tier);
                  successBuilder.setHash(function.getHash());
                  response.setSuccess(successBuilder.build());
                  responseObserver.onNext(response.build());
                  responseObserver.onCompleted();
                  return;
            }
          }
        } catch (Exception e) {
            Messages.CompileFailure.Builder failureBuilder = Messages.CompileFailure.newBuilder();
            failureBuilder.setCommand("bytecode compile");
            failureBuilder.setCompilerOutput("Cannot bytecode compile function " + function.getName() + " ; " + e.getMessage());
            failureBuilder.setSourceCode(function.getBody().toStringUtf8());
            response.setFailure(failureBuilder.build());
            responseObserver.onNext(response.build());
            responseObserver.onCompleted();
            return;
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
          assert bc != null;
          // Name should be fully decided by the client?
          var name = genSymbol(function);
          var bc2cCompiler = new BC2CCompiler(bc, name, false);
          var module = bc2cCompiler.finish();
          var input = File.createTempFile("cfile", ".c");
          var f = Files.newWriter(input, Charset.defaultCharset());
          module.file().writeTo(f);
          var output = File.createTempFile("ofile", ".o");

            var compiler = RshCompiler.getInstance(debug ? 0 : ccOpt)
              .createBuilder(input.getPath(), output.getPath())
                    .flag("-c");
            if (debug) {
                compiler.flag("-g");
            }
            compiler.compile();

          var res = Files.asByteSource(output).read();
          var serializedConstantPool = RDSWriter.writeByteString(module.constantPool());

          ccCached =
              new NativeClosure(
                  ByteString.copyFrom(res), module.topLevelFunName(), serializedConstantPool);

          if (!request.getNoCache()) {
            nativeCache.put(nativeKey, ccCached);
          }
            // Create success response
            Messages.CompileSuccess.Builder successBuilder = Messages.CompileSuccess.newBuilder();
            successBuilder.setCode(ccCached.code());
            successBuilder.setConstants(ccCached.constantPool());
            successBuilder.setTier(tier);
            successBuilder.setHash(function.getHash());
            
            if (debug) {
                var code = Messages.SourceCodeData.newBuilder().setSourceCode(org.prlprg.util.Files.readString(input.toPath())).setTempFileName(input.getAbsolutePath()).build();
                successBuilder.setSourceCodeData(code);
            }

            response.setSuccess(successBuilder.build());
        } catch (Exception e) {
          var msg = e.getMessage();
            Messages.CompileFailure.Builder failureBuilder = Messages.CompileFailure.newBuilder();
            failureBuilder.setCommand("native compile");
            failureBuilder.setCompilerOutput("Cannot native compile function " + function.getName() + " ; " + msg);
            failureBuilder.setSourceCode(function.getBody().toStringUtf8());
            response.setFailure(failureBuilder.build());
            responseObserver.onNext(response.build());
            responseObserver.onCompleted();
            return;
        }
      }
    }

      // Send the response (for successful compilations that didn't return early)
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
    var rHomeEnv = System.getenv("R_HOME");
    if (rHomeEnv == null) {
      rHomeEnv = "external/R";
    }
    var rHomePath = Path.of(rHomeEnv);
    var rLibraryPath = rHomePath.resolve("external/R/library");
    if (logger.isLoggable(Level.FINE)) {
      logger.fine("Creating an R session using R from `" + rHomePath.toAbsolutePath() + "'");
    }
    session = new GNURSession(convertVersion(RVersion), rHomePath, rLibraryPath);

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
