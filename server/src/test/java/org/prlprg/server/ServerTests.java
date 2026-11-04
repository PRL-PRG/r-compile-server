package org.prlprg.server;

import static org.junit.jupiter.api.Assertions.*;

import com.asarkar.grpc.test.GrpcCleanupExtension;
import com.asarkar.grpc.test.Resources;
import com.google.common.collect.ImmutableSet;
import io.grpc.ManagedChannel;
import io.grpc.Server;
import io.grpc.Status;
import io.grpc.StatusRuntimeException;
import io.grpc.inprocess.InProcessChannelBuilder;
import io.grpc.inprocess.InProcessServerBuilder;
import java.io.IOException;
import java.time.Duration;
import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.bc2fir.BcRecordingFeedback;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.LazyCopy;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir2c.Fir2CCompiler;
import org.prlprg.fir2c.Fir2CSession;
import org.prlprg.fir2c.Option;
import org.prlprg.parseprint.Printer;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.TaggedElem;
import org.prlprg.sexp.VecSXP;

@ExtendWith(GrpcCleanupExtension.class)
public class ServerTests {

  private @Nullable Server server;
  private @Nullable ManagedChannel channel;
  private CompileServiceGrpc.@Nullable CompileServiceBlockingStub blockingStub;

  private final FirModules firModules = new FirModules();

  @BeforeEach
  public void setupServer() throws IOException {
    String serverName = InProcessServerBuilder.generateName();
    server =
        InProcessServerBuilder.forName(serverName)
            .directExecutor()
            .addService(new CompileService(firModules))
            .build()
            .start();

    channel = InProcessChannelBuilder.forName(serverName).directExecutor().build();
    blockingStub = CompileServiceGrpc.newBlockingStub(channel);
  }

  @AfterEach
  public void tearDown() {
    assert server != null;
    server.shutdown();
  }

  @Test
  void testCompile(Resources resources) throws IOException {
    assert server != null;
    resources.register(server, Duration.ofSeconds(3));
    assert channel != null;
    resources.register(channel, Duration.ofSeconds(3));

    // Init compile server
    var initRequest =
        Messages.InitRequest.newBuilder()
            .setRVersion(Messages.Version.newBuilder().setMajor(4).setMinor(3).setPatch(2).build())
            .setRshVersion(Messages.Version.newBuilder().build())
            .setPlatform("amd64")
            .build();
    assert blockingStub != null;
    assertDoesNotThrow(
        () -> {
          Messages.InitResponse initResponse = blockingStub.init(initRequest);
        });

    // Compile identify function
    var function =
        SEXPs.closure(
            SEXPs.list(new TaggedElem("x", SEXPs.symbol("x"))), SEXPs.symbol("x"), SEXPs.EMPTY_ENV);
    var f =
        Messages.Function.newBuilder()
            .setName("testFunc")
            .setBody(RDSWriter.writeByteString(function))
            .build();
    var compileRequest =
        Messages.CompileRequest.newBuilder()
            .setFunction(f)
            .setTier(Messages.Tier.BASELINE)
            .setBcOpt(0)
            .setContext(Messages.Context.newBuilder().build())
            .build();

    final Messages.CompileResponse[] response = new Messages.CompileResponse[1];
    assertDoesNotThrow(
        () -> {
          assert blockingStub != null;
          response[0] = blockingStub.compile(compileRequest);
        });
    assertNotNull(response[0].getCode());
  }

  // TODO: factorize this test and the testCompile above
  @Test
  void testCompileNoCache(Resources resources) throws Exception {
    assert server != null;
    resources.register(server, Duration.ofSeconds(3));
    assert channel != null;
    resources.register(channel, Duration.ofSeconds(3));

    // Init compile server
    var initRequest =
        Messages.InitRequest.newBuilder()
            .setRVersion(Messages.Version.newBuilder().setMajor(4).setMinor(3).setPatch(2).build())
            .setRshVersion(Messages.Version.newBuilder().build())
            .setPlatform("amd64")
            .build();
    assert blockingStub != null;
    assertDoesNotThrow(
        () -> {
          Messages.InitResponse initResponse = blockingStub.init(initRequest);
        });

    // Compile identify function
    var function =
        SEXPs.closure(
            SEXPs.list(new TaggedElem("x", SEXPs.symbol("x"))), SEXPs.symbol("x"), SEXPs.EMPTY_ENV);
    var f =
        Messages.Function.newBuilder()
            .setName("testFunc")
            .setBody(RDSWriter.writeByteString(function))
            .build();
    var compileRequest =
        Messages.CompileRequest.newBuilder()
            .setFunction(f)
            .setTier(Messages.Tier.BASELINE)
            .setBcOpt(0)
            .setNoCache(true)
            .setContext(Messages.Context.newBuilder().build())
            .build();

    final Messages.CompileResponse[] response = new Messages.CompileResponse[1];
    assertDoesNotThrow(
        () -> {
          assert blockingStub != null;
          response[0] = blockingStub.compile(compileRequest);
        });
    assertNotNull(response[0].getCode());
  }

  /// A stub's request for its version (see `server/doc/lazy-versions.md`).
  @Test
  void testCompileFirVersion(Resources resources) throws Exception {
    assert server != null;
    resources.register(server, Duration.ofSeconds(3));
    assert channel != null;
    resources.register(channel, Duration.ofSeconds(3));
    assert blockingStub != null;

    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
                r: V = f< v1(I) --> V >(<int 41>);
                return r;
              }
            }

            fun f(x) {
              (x:*) -+> V {
                v: V = force? x;
                return v;
              }
              (x:v(I)) --> V {
                r: v(I) = `+`< v(I),v(I) --> v(I) >(x, <int 1>);
                return r;
              }
            }
            """);
    var f = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    var source = f.versions().first();
    var noOptimization =
        new Optimization() {
          @Override
          public boolean runWithoutRecording(
              Optimization topLevel, ModuleFeedback feedback, Function function) {
            return false;
          }
        };
    LazyCopy.create(
        noOptimization,
        noOptimization,
        new MockModuleFeedback(module),
        f,
        source,
        List.of(Type.BOXED_INTEGER));
    var session =
        new Fir2CSession(
            firModules.freshId(),
            module,
            GNUR.instance().getSession(),
            null,
            ImmutableSet.of(Option.COMPILE_REFERENCED_FUNCTIONS));
    firModules.register(session, 0, false);
    Fir2CCompiler.compile(
        session, Objects.requireNonNull(module.localFunction(Variable.named("main"))));
    assertEquals(1, session.stubs().size());

    var request =
        Messages.FirVersionRequest.newBuilder().setModule(session.id()).setStub(0).build();
    var redundant = blockingStub.compileFirVersion(request);
    var copy = session.stubs().getFirst();
    assertTrue(copy.isEvaluated());
    assertTrue(
        redundant.getFallback() && !redundant.hasCode(),
        "optimizing changed nothing, so the stub keeps its fallback");

    // Once the version changes (say a later optimization run changes it), it's compiled.
    copy.comments().add(" optimized");
    var response = blockingStub.compileFirVersion(request);
    assertTrue(response.hasCode() && !response.getCode().isEmpty(), "an object file");
    assertTrue(response.hasConstants());
    assertTrue(response.getInit().startsWith("Fir_" + session.id() + "_patch_init_"));
    assertFalse(response.getFallback());

    // Asking again: the client already has the version.
    var again = blockingStub.compileFirVersion(request);
    assertFalse(again.hasCode());
    assertFalse(again.getFallback());

    var unknown =
        assertThrows(
            StatusRuntimeException.class,
            () ->
                blockingStub.compileFirVersion(
                    Messages.FirVersionRequest.newBuilder().setModule("nope").setStub(0).build()));
    assertEquals(Status.Code.NOT_FOUND, unknown.getStatus().getCode());
  }

  /// A closure the client's JIT sends once its bytecode ran often enough, with what the bytecode
  /// recorded: the module is optimized with the recording, so it has a version that speculates on
  /// the recorded type, which is a stub until the client calls it. Optimizing that version adds a
  /// version for the recorded parameter type, which is a stub too.
  @Test
  void testCompileFirClosure(Resources resources) throws Exception {
    assert server != null;
    resources.register(server, Duration.ofSeconds(3));
    assert channel != null;
    resources.register(channel, Duration.ofSeconds(3));
    assert blockingStub != null;

    var R = GNUR.instance();
    var source = (CloSXP) R.eval("function(x) x + 1");
    var bc =
        new BCCompiler(source, R.getSession())
            .compile()
            .orElseThrow(() -> new AssertionError("example didn't compile"));
    var closure = SEXPs.closure(source.parameters(), SEXPs.bcode(bc), source.env());

    // The offset the JIT records `x`'s `GETVAR` under, from a throwaway compile of the closure.
    var bytecodes = new ModuleBcOriginMap();
    var throwaway = new Module();
    var baseline =
        BC2FirClosureCompiler.compile(R.getSession(), throwaway, "addOne", closure, bytecodes)
            .baseline();
    var offsets =
        BcRecordingFeedback.feedbackOffsets(
            baseline, Objects.requireNonNull(bytecodes.get("addOne")));
    assertEquals(1, offsets.size(), "only `x`'s `GETVAR` is recorded: " + offsets);
    var offset = offsets.firstEntry().getKey();
    var register = offsets.firstEntry().getValue();

    // `x` was a real scalar in all 10 calls.
    var recording =
        recording(
            10,
            group(List.of(), List.of(), List.of(), "taken", "not_taken"),
            group(List.of(offset), List.of(10), List.of(1 << 28), "counters", "types"),
            SEXPs.vec(SEXPs.integer(), SEXPs.integer(), SEXPs.vec())
                .withNames(List.of("bcids", "counters", "callees")));
    var feedbackText =
        BcRecordingFeedback.print(
            throwaway, bytecodes, List.of(new BcRecordingFeedback.Recording("addOne", recording)));
    assertEquals(
        """
        feedback {
          addOne< %s > = 10x
          [
            reg %s :v1(R) (10x)
            reg x :v1(R)[v1(R) 10x] (10x)
          ]
        }"""
            .formatted(Printer.toString(baseline.signature()), register),
        feedbackText);

    var response =
        blockingStub.compileFirClosure(
            Messages.FirClosureRequest.newBuilder()
                .setClosure(RDSWriter.writeByteString(closure))
                .setName("addOne")
                .setRecording(RDSWriter.writeByteString(recording))
                .setThreshold(3)
                .setCcOpt(0)
                .build());
    var entry = Objects.requireNonNull(firModules.get(response.getModule()), "module registered");
    assertFalse(response.getCode().isEmpty(), "an object file");
    assertEquals("Fir_" + response.getModule() + "_fun_init_addOne", response.getInit());
    assertEquals("Fir_" + response.getModule() + "_fun_from_r_addOne", response.getFromR());

    // `CopyBaseline`'s copy is evaluated: it assumes the recorded type, and optimizing it adds a
    // version for the recorded parameter type, which is a stub until the client calls it.
    var session = entry.session();
    var function = Objects.requireNonNull(session.module().localFunction(Variable.named("addOne")));
    var copy =
        function.versions().stream()
            .filter(v -> v != function.baseline() && v.isEvaluated())
            .findFirst()
            .orElseThrow(
                () ->
                    new AssertionError(
                        "the baseline's copy must be compiled, not a stub: "
                            + function.versions()));
    var specialized =
        function.versions().stream()
            .filter(v -> Printer.toString(v.signature()).equals("v1(R) -+> V"))
            .findFirst()
            .orElseThrow(
                () ->
                    new AssertionError(
                        "no version for the recorded parameter type: " + function.versions()));
    assertFalse(specialized.isEvaluated(), "the specialized version must be unevaluated");
    assertEquals(List.of(specialized), session.stubs(), "the specialized version is the only stub");
    assertTrue(
        copy.streamCfgs()
            .flatMap(cfg -> cfg.bbs().stream())
            .flatMap(bb -> bb.statements().stream())
            .anyMatch(
                stmt ->
                    stmt.expression() instanceof Assume(AssumeType(var type))
                        && type.equals(Type.BOXED_REAL)),
        "the evaluated version must assume `x` is a real scalar:\n" + session.module());

    // When the client calls the stub, the specialized version is evaluated.
    blockingStub.compileFirVersion(
        Messages.FirVersionRequest.newBuilder().setModule(session.id()).setStub(0).build());
    assertTrue(specialized.isEvaluated());
  }

  private static VecSXP recording(int calls, SEXP branch, SEXP varCall, SEXP fun) {
    return (VecSXP)
        SEXPs.vec(SEXPs.integer(calls), branch, varCall, fun)
            .withNames(List.of("calls", "branch", "var_call", "fun"));
  }

  private static SEXP group(
      List<Integer> bcids, List<Integer> first, List<Integer> second, String... names) {
    return SEXPs.vec(SEXPs.integer(bcids), SEXPs.integer(first), SEXPs.integer(second))
        .withNames(List.of("bcids", names[0], names[1]));
  }

  @Test
  void testInit(Resources resources) throws Exception {
    assert server != null;
    resources.register(server, Duration.ofSeconds(3));
    assert channel != null;
    resources.register(channel, Duration.ofSeconds(3));

    var initRequest =
        Messages.InitRequest.newBuilder()
            .setRVersion(Messages.Version.newBuilder().setMajor(4).setMinor(3).setPatch(2).build())
            .setRshVersion(Messages.Version.newBuilder().build())
            .setPlatform("amd64")
            .build();
    assertDoesNotThrow(
        () -> {
          assert blockingStub != null;
          Messages.InitResponse response = blockingStub.init(initRequest);
        });
  }
}
