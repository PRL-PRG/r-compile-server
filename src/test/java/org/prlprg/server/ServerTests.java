package org.prlprg.server;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

import com.asarkar.grpc.test.GrpcCleanupExtension;
import com.asarkar.grpc.test.Resources;
import io.grpc.inprocess.InProcessChannelBuilder;
import io.grpc.inprocess.InProcessServerBuilder;
import java.time.Duration;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;

@ExtendWith(GrpcCleanupExtension.class)
public class ServerTests {
  @Test
  void testCompile(Resources resources) {
    // TODO
  }

  @Test
  void testInit(Resources resources) throws Exception {
    String serverName = InProcessServerBuilder.generateName();
    var server =
        InProcessServerBuilder.forName(serverName)
            .directExecutor()
            .addService(new CompileServer.CompileService())
            .build()
            .start();
    resources.register(server, Duration.ofSeconds(3));
    var channel = InProcessChannelBuilder.forName(serverName).directExecutor().build();
    resources.register(channel, Duration.ofSeconds(3));
    CompileServiceGrpc.CompileServiceBlockingStub blockingStub =
        CompileServiceGrpc.newBlockingStub(channel);

    var initRequest =
        Messages.InitRequest.newBuilder()
            .setRVersion(Messages.Version.newBuilder().setMajor(4).setMinor(3).setPatch(2).build())
            .setRshVersion(Messages.Version.newBuilder().build())
            .setPlatform("amd64")
            .build();
    assertDoesNotThrow(
        () -> {
          Messages.InitResponse response = blockingStub.init(initRequest);
        });
  }
}
