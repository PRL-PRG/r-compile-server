package org.prlprg.server;

import com.google.common.collect.ImmutableSet;
import com.google.protobuf.ByteString;
import io.grpc.Status;
import io.grpc.stub.ServerCallStreamObserver;
import io.grpc.stub.StreamObserver;
import java.io.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.List;
import java.util.Optional;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.jspecify.annotations.Nullable;
import org.prlprg.RVersion;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcOptLevel;
import org.prlprg.bc2c.BC2CCompiler;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.bc2fir.BcRecordingFeedback;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.Optimizations;
import org.prlprg.fir2c.Fir2CCompiler;
import org.prlprg.fir2c.Fir2CSession;
import org.prlprg.fir2c.Option;
import org.prlprg.gen2c.CUnit;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.NativeClosure;
import org.prlprg.service.RshCompiler;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.GNURSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Pair;
import org.prlprg.util.Triple;
import org.prlprg.util.cc.CCompilationException;

class CompileService extends CompileServiceGrpc.CompileServiceImplBase {
  private static final Logger logger = Logger.getLogger(CompileServer.class.getName());

  private @Nullable GNURSession session = null;

  private final FirModules firModules;

  // Cache for byte-code, only for functions. We keep the already serialized code in the cache
  // not the Bc (or BcCodeSXP)
  // Key is (hash, optimisationLevel)
  private final HashMap<Pair<Long, BcOptLevel>, Pair<Bc, ByteString>> bcCache = new HashMap<>();
  // Cache for native code.
  // Key is (hash, bcOpt, ccOpt)
  private final HashMap<Triple<Long, BcOptLevel, Integer>, NativeClosure> nativeCache =
      new HashMap<>();

  CompileService() {
    this(new FirModules());
  }

  CompileService(FirModules firModules) {
    this.firModules = firModules;
  }

  /// The FIŘ modules whose stubs' requests this serves.
  FirModules firModules() {
    return firModules;
  }

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

    // Parse the request
    Messages.Function function = request.getFunction();
    Messages.Tier tier = request.getTier(); // Default is optimized
    if (tier == Messages.Tier.UNRECOGNIZED) {
      tier = Messages.Tier.OPTIMIZED;
    }
    var bcOpt = request.hasBcOpt() ? BcOptLevel.fromValue(request.getBcOpt()) : BcOptLevel.DEFAULT;
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

    if (request.getNoCache()) {
      logger.info("This closure will not be cached and no lookups in the cache will be performed.");
    }

    // Compile the code and build response
    Messages.CompileResponse.Builder response = Messages.CompileResponse.newBuilder();
    response.setTier(tier);
    response.setHash(function.getHash());

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
          response.setCode(ccCached.code());
          response.setConstants(ccCached.constantPool());
        }
      }

      // We also have a look whether we have a cached bytecode for the native compilation

      if (tier.equals((Messages.Tier.BASELINE)) || ccCached == null) {
        bcCached = bcCache.get(bcKey);
        if (bcCached != null) {
          logger.info("Found " + function.getName() + " in bytecode cache. No recompilation.");
          response.setCode(bcCached.second());
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
          var bcRes = compileBcClosure(function.getBody(), bcOpt);
          ByteString serializedBc = null;
          if (bcRes.isEmpty()) {
            logger.warning(
                "Empty bytecode for function "
                    + function.getName()
                    + ". Not caching and returning the original body.");
            // We will keep the code field empty
          } else {
            bc = bcRes.get();
            if (!request.getNoCache()) { // We do not cache if the client does not want to
              serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc));
              response.setCode(serializedBc);
              bcCached = Pair.of(bc, serializedBc); // potentially used for the native
              // compilation also
              // Add it to the cache
              bcCache.put(bcKey, bcCached);
            }
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
          assert bc != null;
          // Name should be fully decided by the client?
          var name = genSymbol(function);
          var module = BC2CCompiler.compile(bc, name, false);
          var res = compileObject(module.code(), "bc2c", ccOpt, RuntimeVariant.DIRECT_BC2C, false);
          var serializedConstantPool = RDSWriter.writeByteString(module.constantPool());

          ccCached = new NativeClosure(ByteString.copyFrom(res), name, serializedConstantPool);

          if (!request.getNoCache()) {
            nativeCache.put(nativeKey, ccCached);
          }
          response.setCode(ccCached.code());
          response.setConstants(ccCached.constantPool());
        } catch (Exception e) {
          var msg = e.getMessage();
          responseObserver.onError(
              Status.INTERNAL
                  .withDescription(
                      "Cannot native compile function "
                          + function.getName()
                          + " ; "
                          // we truncate the message, as it can get quite big with compilation
                          // errors, and anyway, gRPC has a max header size of 8KB
                          + msg.substring(0, Math.min(msg.length(), 7000)))
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

  /// Compile the version a stub stands for (see `server/doc/lazy-versions.md`).
  ///
  /// Requests for the same module are served one at a time: compiling a version changes the
  /// module, and what the client has of it.
  @Override
  public void compileFirVersion(
      Messages.FirVersionRequest request,
      StreamObserver<Messages.FirVersionResponse> responseObserver) {
    var entry = firModules.get(request.getModule());
    if (entry == null) {
      responseObserver.onError(
          Status.NOT_FOUND
              .withDescription("No FIR module registered as " + request.getModule())
              .asRuntimeException());
      return;
    }

    logger.info(
        "Received request to compile stub "
            + request.getStub()
            + " of FIR module "
            + request.getModule());

    var response = Messages.FirVersionResponse.newBuilder();
    try {
      var session = entry.session();
      Fir2CCompiler.StubAnswer answer;
      synchronized (session) {
        answer = Fir2CCompiler.compileStub(session, request.getStub());
      }

      response.setFallback(answer.fallback());
      var patch = answer.patch();
      if (patch != null) {
        response.setCode(
            ByteString.copyFrom(
                compileObject(
                    patch.code(),
                    "fir_patch",
                    entry.ccOpt(),
                    RuntimeVariant.FIR2C,
                    entry.versionStats())));
        response.setConstants(RDSWriter.writeByteString(patch.constantPool()));
        response.setInit(patch.init());
      }
    } catch (Exception e) {
      logger.log(Level.WARNING, "Failed to compile FIR version", e);
      var msg = String.valueOf(e.getMessage());
      responseObserver.onError(
          Status.INTERNAL
              .withDescription(
                  "Cannot compile stub "
                      + request.getStub()
                      + " of FIR module "
                      + request.getModule()
                      + "; "
                      // gRPC has a max header size of 8KB
                      + msg.substring(0, Math.min(msg.length(), 7000)))
              .asRuntimeException());
      return;
    }

    responseObserver.onNext(response.build());
    responseObserver.onCompleted();
  }

  /// Compile a closure that ran its bytecode often enough into a new FIŘ module, optimized with
  /// what the bytecode recorded, and answer with the module's first piece (see
  /// `server/doc/lazy-versions.md`).
  @Override
  public void compileFirClosure(
      Messages.FirClosureRequest request,
      StreamObserver<Messages.FirClosureResponse> responseObserver) {
    logger.info(
        "Received request to compile closure "
            + request.getName()
            + " to FIR"
            + (request.hasRecording() ? " with a recording" : ""));

    Messages.FirClosureResponse response;
    try {
      response = compileFirClosure(request);
    } catch (Exception e) {
      logger.log(Level.WARNING, "Failed to compile closure to FIR", e);
      var msg = String.valueOf(e.getMessage());
      responseObserver.onError(
          Status.INTERNAL
              .withDescription(
                  "Cannot compile closure "
                      + request.getName()
                      + " to FIR; "
                      // gRPC has a max header size of 8KB
                      + msg.substring(0, Math.min(msg.length(), 7000)))
              .asRuntimeException());
      return;
    }

    responseObserver.onNext(response);
    responseObserver.onCompleted();
  }

  /// Compile `code` into an object file, and return its contents. The files are temporary.
  ///
  /// @param versionStats Whether to compile with `-DFIR_VERSION_STATS` (see [FirModules.Entry]).
  private static byte[] compileObject(
      CUnit code, String prefix, int ccOpt, RuntimeVariant variant, boolean versionStats)
      throws IOException, InterruptedException, CCompilationException {
    var inputFile = Files.createTempFile(prefix, ".c");
    try {
      var outputFile = Files.createTempFile(prefix, ".o");
      try {
        code.writeTo(inputFile);
        var builder = RshCompiler.getInstance(ccOpt, variant).createBuilder(inputFile, outputFile);
        if (versionStats) {
          builder.flag("-DFIR_VERSION_STATS");
        }
        builder.flag("-c").compile();
        return Files.readAllBytes(outputFile);
      } finally {
        Files.deleteIfExists(outputFile);
      }
    } finally {
      Files.deleteIfExists(inputFile);
    }
  }

  private Messages.FirClosureResponse compileFirClosure(Messages.FirClosureRequest request)
      throws Exception {
    var rSession = session();
    if (!(RDSReader.readByteString(rSession, request.getClosure()) instanceof CloSXP closure)) {
      throw new IllegalArgumentException("Not a closure");
    }
    var name = request.getName().isEmpty() ? "f" : request.getName();

    // The client's bytecode, not recompiled: the recording's offsets index it.
    var module = new Module();
    var bytecodes = new ModuleBcOriginMap();
    var function = BC2FirClosureCompiler.compile(rSession, module, name, closure, bytecodes);

    var feedback =
        request.hasRecording()
            ? BcRecordingFeedback.translate(
                module,
                bytecodes,
                List.of(
                    new BcRecordingFeedback.Recording(
                        name, (VecSXP) RDSReader.readByteString(rSession, request.getRecording()))))
            : null;
    Optimizations.defaultOptimizations(request.getThreshold(), true)
        .run(feedback == null ? new MockModuleFeedback(module) : feedback, module);
    // The closure is hot, so its versions that exist now (the baseline's copy) are compiled, not
    // stubs. Evaluating them optimizes them, which creates the versions that specialize on the
    // feedback; those start as stubs.
    for (var version : List.copyOf(function.versions())) {
      if (version != function.baseline()) {
        version.body();
      }
    }

    var fir2cSession =
        new Fir2CSession(
            firModules.freshId(),
            module,
            rSession,
            bytecodes,
            ImmutableSet.of(Option.COMPILE_REFERENCED_FUNCTIONS));
    CompiledModule compiled;
    synchronized (fir2cSession) {
      compiled = Fir2CCompiler.compile(fir2cSession, function);
    }

    var code =
        compileObject(
            compiled.code(), "fir_closure", request.getCcOpt(), RuntimeVariant.FIR2C, false);

    firModules.register(fir2cSession, request.getCcOpt(), false);
    return Messages.FirClosureResponse.newBuilder()
        .setModule(fir2cSession.id())
        .setCode(ByteString.copyFrom(code))
        .setConstants(RDSWriter.writeByteString(compiled.constantPool()))
        .setInit(Fir2CCompiler.functionInitCName(fir2cSession, function))
        .setFromR(Fir2CCompiler.functionFromRCName(fir2cSession, function))
        .build();
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
    synchronized (this) {
      session = newSession(convertVersion(RVersion));
    }

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

  /// The R session, which [#init] creates, or one for the latest R version if it didn't run.
  private synchronized GNURSession session() {
    if (session == null) {
      session = newSession(RVersion.LATEST_AWARE);
    }
    return session;
  }

  /// A session for the R at `R_HOME`, or the vendored R if it's unset.
  private static GNURSession newSession(RVersion version) {
    // TODO: detect where R is installed
    var rHomeEnv = System.getenv("R_HOME");
    var rHomePath = rHomeEnv == null ? RshCompiler.R_DIRECTORY : Path.of(rHomeEnv);
    if (logger.isLoggable(Level.FINE)) {
      logger.fine("Creating an R session using R from `" + rHomePath.toAbsolutePath() + "'");
    }
    return new GNURSession(version, rHomePath, rHomePath.resolve("library"));
  }

  private RVersion convertVersion(Messages.Version version) {
    return new RVersion(version.getMajor(), version.getMinor(), version.getPatch());
  }

  private Optional<Bc> compileBcClosure(ByteString body, BcOptLevel optimizationLevel) {
    SEXP closure = null;
    try {
      closure = RDSReader.readByteString(session(), body);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }
    if (closure instanceof CloSXP c) {
      BCCompiler compiler = new BCCompiler(c, session());
      compiler.setOptimizationLevel(optimizationLevel);
      return compiler.compile();
    } else {
      throw new RuntimeException("Not a closure");
    }
  }
}
