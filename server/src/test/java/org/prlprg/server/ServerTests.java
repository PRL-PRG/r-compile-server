package org.prlprg.server;

import static org.junit.jupiter.api.Assertions.*;

import com.asarkar.grpc.test.GrpcCleanupExtension;
import com.asarkar.grpc.test.Resources;
import io.grpc.ManagedChannel;
import io.grpc.Server;
import io.grpc.inprocess.InProcessChannelBuilder;
import io.grpc.inprocess.InProcessServerBuilder;
import java.io.IOException;
import java.time.Duration;
import javax.annotation.Nullable;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.rds.RDSWriter;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.TaggedElem;

@ExtendWith(GrpcCleanupExtension.class)
public class ServerTests {

  private @Nullable Server server;
  private @Nullable ManagedChannel channel;
  private @Nullable CompileServiceGrpc.CompileServiceBlockingStub blockingStub;

  @BeforeEach
  public void setupServer() throws IOException {
    String serverName = InProcessServerBuilder.generateName();
    server =
        InProcessServerBuilder.forName(serverName)
            .directExecutor()
            .addService(new CompileService())
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
