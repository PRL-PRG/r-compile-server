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

class CompileService extends CompileServiceGrpc.CompileServiceImplBase {
  private static final Logger logger = Logger.getLogger(CompileServer.class.getName());

  private @Nullable GNURSession session = null;

  // Cache for byte-code, only for functions. We keep the already serialized code in the cache
  // not the Bc (or BcCodeSXP)
  // Key is (hash, bcOpt, body)
  private record BcCacheKey(long hash, int bcOpt, ByteString body) {
  }

    private final HashMap<BcCacheKey, Pair<Bc, ByteString>> bcCache = new HashMap<>();
  // Cache for native code.
  // Key is (hash, bcOpt, ccOpt, body, debug)
  private record NativeCacheKey(long hash, int bcOpt, int ccOpt, ByteString body, boolean debug) {
  }

    private final HashMap<NativeCacheKey, NativeClosure> nativeCache = new HashMap<>();

  private static String genSymbol(Messages.Function function) {
    // the hash is uint64 (unsigned ) but java does not have unsigned numbers and store it as a long
    // We first need to convert it to a string and interpret it as an unsigned number
    // Java uses 2's complement
    return "gen_" + Long.toUnsignedString(function.getHash());
  }

    private record CompileParams(
            Messages.Function function,
            Messages.Tier tier,
            int bcOpt,
            int ccOpt,
            boolean debug,
            boolean noCache) {

        NativeCacheKey nativeKey() {
            return new NativeCacheKey(function.getHash(), bcOpt, ccOpt, function.getBody(), debug);
        }

        BcCacheKey bcKey() {
            return new BcCacheKey(function.getHash(), bcOpt, function.getBody());
        }
    }

    private record CompileResult(
            ByteString code,
            @Nullable ByteString constantPool,
            @Nullable Messages.SourceCodeData sourceCodeData) {
    }

    private static class CompileException extends Exception {
        final String command;
        final String sourceCode;

        CompileException(String command, String message, String sourceCode) {
            super(message);
            this.command = command;
            this.sourceCode = sourceCode;
        }
    }

    private CompileParams parseRequest(Messages.CompileRequest request) {
        var tier = request.getTier();
        if (tier == Messages.Tier.UNRECOGNIZED) {
            tier = Messages.Tier.OPTIMIZED;
        }
        return new CompileParams(
                request.getFunction(),
                tier,
                request.hasBcOpt() ? request.getBcOpt() : 2,
                request.hasCcOpt() ? request.getCcOpt() : 2,
                request.getDebug(),
                request.getNoCache());
    }

    private CompileResult compileFunction(CompileParams params) throws CompileException, IOException {
        if (!params.function.hasBody()) {
            throw new CompileException(
                    "compile",
                    "No body sent with the request for function " + params.function.getName(),
                    "");
        }

        // Try cache lookup first
        if (!params.noCache) {
            var cached = lookupCache(params);
            if (cached != null) {
                return cached;
            }
        }

        // Compile based on tier
        if (params.tier.equals(Messages.Tier.BASELINE)) {
            return compileToBaseline(params);
        } else {
            return compileToOptimized(params);
        }
    }


    private @Nullable CompileResult lookupCache(CompileParams params) {
        if (params.tier.equals(Messages.Tier.OPTIMIZED)) {
            var ccCached = nativeCache.get(params.nativeKey());
            if (ccCached != null) {
                logger.info("Found " + params.function.getName() + " in native cache. No recompilation.");
                Messages.SourceCodeData sourceCodeData = null;
                if (params.debug && ccCached.sourceCode() != null) {
                    sourceCodeData =
                            Messages.SourceCodeData.newBuilder()
                                    .setSourceCode(ccCached.sourceCode())
                                    .build();
                }
                return new CompileResult(ccCached.code(), ccCached.constantPool(), sourceCodeData);
            }
        }

        if (params.tier.equals(Messages.Tier.BASELINE)) {
            var bcCached = bcCache.get(params.bcKey());
            if (bcCached != null) {
                logger.info("Found " + params.function.getName() + " in bytecode cache. No recompilation.");
                return new CompileResult(bcCached.second(), null, null);
            }
        }

        return null;
    }

    private CompileResult compileToBaseline(CompileParams params) throws CompileException, IOException {
        var bc = compileBytecode(params);
        var serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc));

        if (!params.noCache) {
            bcCache.put(params.bcKey(), Pair.of(bc, serializedBc));
        }

        return new CompileResult(serializedBc, null, null);
    }

    private Bc compileBytecode(CompileParams params) throws CompileException {
        logger.info(
                "Compile function "
                        + params.function.getName()
                        + " to bytecode with optimisation level "
                        + params.bcOpt);

        try {
            var bcRes = compileBcClosure(params.function.getBody(), params.bcOpt);
            if (bcRes.isEmpty()) {
                throw new CompileException(
                        "bytecode compile",
                        "Empty bytecode for function " + params.function.getName(),
                        params.function.getBody().toStringUtf8());
            }
            return bcRes.get();
        } catch (CompileException e) {
            throw e;
        } catch (Exception e) {
            throw new CompileException(
                    "bytecode compile",
                    "Cannot bytecode compile function " + params.function.getName() + " ; " + e.getMessage(),
                    params.function.getBody().toStringUtf8());
        }
    }

    private CompileResult compileToOptimized(CompileParams params) throws CompileException, IOException {
        // Check if we have cached bytecode
        var bcCached = params.noCache ? null : bcCache.get(params.bcKey());
        Bc bc;

        if (bcCached != null) {
            bc = bcCached.first();
        } else {
            bc = compileBytecode(params);
            if (!params.noCache) {
                var serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc));
                bcCache.put(params.bcKey(), Pair.of(bc, serializedBc));
            }
        }

        logger.info(
                "Compile function "
                        + params.function.getName()
                        + " to native with optimisation level "
                        + params.ccOpt + " debug: " + params.debug);

        try {
            var name = genSymbol(params.function);
            var bc2cCompiler = new BC2CCompiler(bc, name, false);
            var module = bc2cCompiler.finish();

            var input = File.createTempFile("cfile", ".c");
            try (var f = Files.newWriter(input, Charset.defaultCharset())) {
                module.file().writeTo(f);
            }

            var output = File.createTempFile("ofile", ".o");
            var compiler =
                    RshCompiler.getInstance(params.ccOpt)
                            .createBuilder(input.getPath(), output.getPath())
                            .flag("-c");
            if (params.debug) {
                compiler.flag("-g");
            }
            compiler.compile();

            var code = ByteString.copyFrom(Files.asByteSource(output).read());
            var constantPool = RDSWriter.writeByteString(module.constantPool());
            var sourceCode = org.prlprg.util.Files.readString(input.toPath());

            var nativeClosure = new NativeClosure(module.topLevelFunName(), code, constantPool, sourceCode);
            if (!params.noCache) {
                nativeCache.put(params.nativeKey(), nativeClosure);
            }

            Messages.SourceCodeData sourceCodeData = null;
            if (params.debug) {
                sourceCodeData =
                        Messages.SourceCodeData.newBuilder()
                                .setSourceCode(sourceCode)
                                .setTempFileName(input.getAbsolutePath())
                                .build();
            }

            return new CompileResult(code, constantPool, sourceCodeData);
        } catch (Exception e) {
            throw new CompileException(
                    "native compile",
                    "Cannot native compile function " + params.function.getName() + " ; " + e.getMessage(),
                    params.function.getBody().toStringUtf8());
        }
    }

    private void sendSuccess(
            ServerCallStreamObserver<Messages.CompileResponse> responseObserver,
            CompileResult result,
            CompileParams params) {
        var successBuilder =
                Messages.CompileSuccess.newBuilder()
                        .setCode(result.code())
                        .setTier(params.tier)
                        .setHash(params.function.getHash());

        if (result.constantPool() != null) {
            successBuilder.setConstants(result.constantPool());
        }
        if (result.sourceCodeData() != null) {
            successBuilder.setSourceCodeData(result.sourceCodeData());
        }

        var response = Messages.CompileResponse.newBuilder().setSuccess(successBuilder.build()).build();
        responseObserver.onNext(response);
        logger.info("Response size : " + response.getSerializedSize());
        responseObserver.onCompleted();
    }

    private void sendFailure(
            ServerCallStreamObserver<Messages.CompileResponse> responseObserver,
            String command,
            String message,
            String sourceCode) {
        var failure =
                Messages.CompileFailure.newBuilder()
                        .setCommand(command)
                        .setCompilerOutput(message)
                        .setSourceCode(sourceCode)
                        .build();

        var response = Messages.CompileResponse.newBuilder().setFailure(failure).build();
        responseObserver.onNext(response);
        responseObserver.onCompleted();
    }
  // Testing externally: grpcurl -plaintext -d '{"function":{"name": "testFunc"}}' 0.0.0.0:8980
  // CompileService.Compile
  public void compile(
          Messages.CompileRequest request,
          StreamObserver<Messages.CompileResponse> plainResponseObserver) {

      ServerCallStreamObserver<Messages.CompileResponse> responseObserver =
              (ServerCallStreamObserver<Messages.CompileResponse>) plainResponseObserver;
      responseObserver.setCompression("gzip");

      if (session == null) {
          responseObserver.onError(
                  Status.INTERNAL.withDescription("Session not initialized.").asRuntimeException());
          return;
      }

      var params = parseRequest(request);
      logger.info(
              "Received request to compile function: " + params.function.getName());

      try {
          var result = compileFunction(params);
          sendSuccess(responseObserver, result, params);
      } catch (CompileException e) {
          sendFailure(responseObserver, e.command, e.getMessage(), e.sourceCode);
      } catch (IOException e) {
          // FIXME: better error handling
          throw new RuntimeException(e);
      }
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
          bcCache.entrySet().removeIf(entry -> entry.getKey().hash() == hash);
          nativeCache.entrySet().removeIf(entry -> entry.getKey().hash() == hash);
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
