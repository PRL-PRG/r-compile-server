package org.prlprg.server;

import com.google.protobuf.ByteString;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.logging.ConsoleHandler;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.prlprg.RSession;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.rsession.TestRSession;
import org.prlprg.server.protocol.CompileRequest;
import org.prlprg.server.protocol.CompileResponse;
import org.prlprg.server.protocol.CompiledFunction;
import org.prlprg.server.protocol.Request;
import org.prlprg.service.JITService;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.zeromq.SocketType;
import org.zeromq.ZContext;
import org.zeromq.ZMQ;

public class Main {

  static {
    var logger = Logger.getLogger("org.prlprg");
    logger.setLevel(Level.ALL);
    var consoleHandler = new ConsoleHandler();
    consoleHandler.setLevel(Level.ALL);
    logger.addHandler(consoleHandler);
  }

  private static final Logger logger = Logger.getLogger(Main.class.getName());
  private final RSession rsession;
  private final JITService jit;

  public Main() {
    rsession = new TestRSession();
    jit = new JITService(rsession);
  }

  void run() {
    try (ZContext context = new ZContext()) {
      ZMQ.Socket socket = context.createSocket(SocketType.REP);
      socket.bind("tcp://*:5555");
      logger.info("Listening on " + socket.getLastEndpoint());

      while (!Thread.currentThread().isInterrupted()) {
        Request request = Request.parseFrom(socket.recv(0));
        logger.info("Got a request: " + request);

        switch (request.getPayloadCase()) {
          case COMPILE -> {
            var response = compile(request.getCompile());
            socket.send(response.toByteArray());
          }
          default -> {
            logger.severe("Unknown request type: " + request);
          }
        }
      }
    } catch (Exception e) {
      e.printStackTrace(System.err);
      System.exit(1);
    }
  }

  private CompileResponse compile(CompileRequest compile) {
    try {
      var name = compile.getName();
      var closure = deserialize(new ByteArrayInputStream(compile.getClosure().toByteArray()));
      var compiledClosure = jit.execute(name, closure);

      var result =
          CompiledFunction.newBuilder()
              .setName(name)
              .setNativeCode(ByteString.copyFrom(compiledClosure.code()))
              .setConstants(
                  ByteString.copyFrom(serialize(SEXPs.vec(compiledClosure.constantPool()))));

      var response = CompileResponse.newBuilder().setResult(result);

      return response.build();
    } catch (Exception e) {
      logger.severe("Unable to process request: " + e.getMessage());
      var response = CompileResponse.newBuilder().setFailure(e.getMessage());
      return response.build();
    }
  }

  private CloSXP deserialize(InputStream input) throws IOException {
    return (CloSXP) RDSReader.readStream(rsession, input);
  }

  private byte[] serialize(SEXP data) throws IOException {
    var output = new ByteArrayOutputStream();
    RDSWriter.writeStream(rsession, output, data);
    return output.toByteArray();
  }

  public static void main(String[] args) {
    new Main().run();
  }
}
