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
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.LazyCopy;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir2c.Fir2CCompiler;
import org.prlprg.fir2c.Fir2CSession;
import org.prlprg.fir2c.Option;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.TaggedElem;

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
    LazyCopy.create(
        new Optimization() {
          @Override
          public boolean runWithoutRecording(
              Optimization topLevel, ModuleFeedback feedback, Function function) {
            return false;
          }
        },
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
    firModules.register(session, 0);
    Fir2CCompiler.compile(
        session, Objects.requireNonNull(module.localFunction(Variable.named("main"))));
    assertEquals(1, session.stubs().size());

    var request =
        Messages.FirVersionRequest.newBuilder().setModule(session.id()).setStub(0).build();
    var response = blockingStub.compileFirVersion(request);
    assertTrue(response.hasCode() && !response.getCode().isEmpty(), "an object file");
    assertTrue(response.hasConstants());
    assertTrue(response.getInit().startsWith("Fir_" + session.id() + "_patch_init_"));
    assertTrue(session.stubs().getFirst().isEvaluated());

    // Asking again: the client already has the version.
    var again = blockingStub.compileFirVersion(request);
    assertFalse(again.hasCode());

    var unknown =
        assertThrows(
            StatusRuntimeException.class,
            () ->
                blockingStub.compileFirVersion(
                    Messages.FirVersionRequest.newBuilder().setModule("nope").setStub(0).build()));
    assertEquals(Status.Code.NOT_FOUND, unknown.getStatus().getCode());
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
