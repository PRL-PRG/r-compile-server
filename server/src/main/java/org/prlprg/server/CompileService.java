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
    private static final Logger logger = Logger.getLogger(CompileService.class.getName());

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

    private static NativeCacheKey nativeKey(Messages.CompileRequest request) {
        return new NativeCacheKey(request.getFunction().getHash(), request.getBcOpt(), request.getCcOpt(), request.getFunction().getBody(), request.getDebug());
    }

    private static BcCacheKey bcKey(Messages.CompileRequest request) {
        return new BcCacheKey(request.getFunction().getHash(), request.getBcOpt(), request.getFunction().getBody());
    }


    private static Messages.CompileResponse failure(String command, String message, String sourceCode) {
        var failure = Messages.CompileFailure.newBuilder()
                .setCommand(command)
                .setCompilerOutput(message)
                .setSourceCode(sourceCode)
                .build();
        return Messages.CompileResponse.newBuilder().setFailure(failure).build();
    }

    private static Messages.CompileResponse success(Messages.CompileSuccess result) {
        return Messages.CompileResponse.newBuilder().setSuccess(result).build();
    }

    private Messages.CompileResponse compileFunction(Messages.CompileRequest params) {
        if (!params.getFunction().hasBody()) {
            return failure(
                    "compile",
                    "No body sent with the request for function " + params.getFunction().getName(),
                    "");
        }

        // Try cache lookup first
        if (!params.getNoCache()) {
            var cached = lookupCache(params);
            if (cached != null) {
                logger.info("Found " + params.getFunction().getName() + " in cache. No recompilation.");
                return success(cached);
            }
        }

        // Compile based on tier
        if (params.getTier().equals(Messages.Tier.BASELINE)) {
            return compileToBaseline(params);
        } else {
            return compileToOptimized(params);
        }
    }

    private @Nullable Messages.CompileSuccess lookupCache(Messages.CompileRequest params) {
        if (params.getTier().equals(Messages.Tier.OPTIMIZED)) {
            var ccCached = nativeCache.get(nativeKey(params));
            if (ccCached != null) {
                var builder = Messages.CompileSuccess.newBuilder()
                        .setCode(ccCached.code())
                        .setConstants(ccCached.constantPool())
                        .setTier(params.getTier())
                        .setHash(params.getFunction().getHash());
                if (params.getDebug() && ccCached.sourceCode() != null) {
                    builder.setSourceCodeData(
                            Messages.SourceCodeData.newBuilder()
                                    .setSourceCode(ccCached.sourceCode())
                                    .build());
                }
                return builder.build();
            }
        }

        if (params.getTier().equals(Messages.Tier.BASELINE)) {
            var bcCached = bcCache.get(bcKey(params));
            if (bcCached != null) {
                logger.info("Found " + params.getFunction().getName() + " in bytecode cache. No recompilation.");
                return Messages.CompileSuccess.newBuilder()
                        .setCode(bcCached.second())
                        .setTier(params.getTier())
                        .setHash(params.getFunction().getHash())
                        .build();
            }
        }

        return null;
    }

    private Messages.CompileResponse compileToBaseline(Messages.CompileRequest params) {
        logger.info(
                "Compile function "
                        + params.getFunction().getName()
                        + " to bytecode with optimisation level "
                        + params.getBcOpt());

        Bc bc;
        double bcTimeMs;
        try {
            long bcStart = System.nanoTime();
            var bcRes = compileBcClosure(params.getFunction().getBody(), params.getBcOpt());
            long bcEnd = System.nanoTime();
            bcTimeMs = (bcEnd - bcStart) / 1_000_000.0;

            if (bcRes.isEmpty()) {
                return failure(
                        "bytecode compile",
                        "Empty bytecode for function " + params.getFunction().getName(),
                        params.getFunction().getBody().toStringUtf8());
            }
            bc = bcRes.get();
        } catch (Exception e) {
            return failure(
                    "bytecode compile",
                    "Cannot bytecode compile function " + params.getFunction().getName() + " ; " + e.getMessage(),
                    params.getFunction().getBody().toStringUtf8());
        }

        try {
            var serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc));

            if (!params.getNoCache()) {
                bcCache.put(bcKey(params), Pair.of(bc, serializedBc));
            }

            var metrics = Messages.CompileMetrics.newBuilder()
                    .setBytecodeInstructions(bc.code().size())
                    .setBytecodeCompileTimeMs(bcTimeMs)
                    .build();

            return success(Messages.CompileSuccess.newBuilder()
                    .setCode(serializedBc)
                    .setTier(params.getTier())
                    .setHash(params.getFunction().getHash())
                    .setMetrics(metrics)
                    .build());
        } catch (IOException e) {
            return failure(
                    "bytecode compile",
                    "Cannot serialize bytecode for function " + params.getFunction().getName() + " ; " + e.getMessage(),
                    params.getFunction().getBody().toStringUtf8());
        }
    }

    private Messages.CompileResponse compileToOptimized(Messages.CompileRequest params) {
        // Check if we have cached bytecode
        var bcCached = params.getNoCache() ? null : bcCache.get(bcKey(params));
        Bc bc;
        double bcTimeMs = 0;

        if (bcCached != null) {
            bc = bcCached.first();
        } else {
            logger.info(
                    "Compile function "
                            + params.getFunction().getName()
                            + " to bytecode with optimisation level "
                            + params.getBcOpt());
            try {
                long bcStart = System.nanoTime();
                var bcRes = compileBcClosure(params.getFunction().getBody(), params.getBcOpt());
                long bcEnd = System.nanoTime();
                bcTimeMs = (bcEnd - bcStart) / 1_000_000.0;

                if (bcRes.isEmpty()) {
                    return failure(
                            "bytecode compile",
                            "Empty bytecode for function " + params.getFunction().getName(),
                            params.getFunction().getBody().toStringUtf8());
                }
                bc = bcRes.get();

                if (!params.getNoCache()) {
                    var serializedBc = RDSWriter.writeByteString(SEXPs.bcode(bc));
                    bcCache.put(bcKey(params), Pair.of(bc, serializedBc));
                }
            } catch (Exception e) {
                return failure(
                        "bytecode compile",
                        "Cannot bytecode compile function " + params.getFunction().getName() + " ; " + e.getMessage(),
                        params.getFunction().getBody().toStringUtf8());
            }
        }

        logger.info(
                "Compile function "
                        + params.getFunction().getName()
                        + " to native with optimisation level "
                        + params.getCcOpt() + " debug: " + params.getDebug());

        try {
            long cStart = System.nanoTime();
            var name = genSymbol(params.getFunction());
            var bc2cCompiler = new BC2CCompiler(bc, name, false);
            var module = bc2cCompiler.finish();

            var input = File.createTempFile("cfile", ".c");
            try (var f = Files.newWriter(input, Charset.defaultCharset())) {
                module.file().writeTo(f);
            }
            long cEnd = System.nanoTime();
            double cTimeMs = (cEnd - cStart) / 1_000_000.0;

            long nativeStart = System.nanoTime();
            var output = File.createTempFile("ofile", ".o");
            var compiler =
                    RshCompiler.getInstance(params.getCcOpt())
                            .createBuilder(input.getPath(), output.getPath())
                            .flag("-c");
            if (params.getDebug()) {
                compiler.flag("-g");
            }
            compiler.compile();
            long nativeEnd = System.nanoTime();
            double nativeTimeMs = (nativeEnd - nativeStart) / 1_000_000.0;

            var code = ByteString.copyFrom(Files.asByteSource(output).read());
            var constantPool = RDSWriter.writeByteString(module.constantPool());
            var sourceCode = org.prlprg.util.Files.readString(input.toPath());

            var nativeClosure = new NativeClosure(module.topLevelFunName(), code, constantPool, sourceCode);
            if (!params.getNoCache()) {
                nativeCache.put(nativeKey(params), nativeClosure);
            }

            var successBuilder = Messages.CompileSuccess.newBuilder()
                    .setCode(code)
                    .setConstants(constantPool)
                    .setTier(params.getTier())
                    .setHash(params.getFunction().getHash());

            if (params.getDebug()) {
                successBuilder.setSourceCodeData(
                        Messages.SourceCodeData.newBuilder()
                                .setSourceCode(sourceCode)
                                .setTempFileName(input.getAbsolutePath())
                                .build());
            }

            successBuilder.setMetrics(Messages.CompileMetrics.newBuilder()
                    .setBytecodeInstructions(bc.code().size())
                    .setBytecodeCompileTimeMs(bcTimeMs)
                    .setCCompileTimeMs(cTimeMs)
                    .setNativeCompileTimeMs(nativeTimeMs)
                    .build());

            return success(successBuilder.build());
        } catch (Exception e) {
            return failure(
                    "native compile",
                    "Cannot native compile function " + params.getFunction().getName() + " ; " + e.getMessage(),
                    params.getFunction().getBody().toStringUtf8());
        }
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

        logger.info(
                "Received request to compile function: " + request.getFunction().getName());

        var response = compileFunction(request);
        responseObserver.onNext(response);
        logger.info("Response size : " + response.getSerializedSize());
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
      SEXP closure;
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
