package org.prlprg.server;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.logging.Logger;
import org.prlprg.RSession;
import org.prlprg.rds.RDSReader;
import org.prlprg.rsession.TestRSession;
import org.prlprg.service.JITService;
import org.prlprg.sexp.CloSXP;
import org.zeromq.SocketType;
import org.zeromq.ZContext;
import org.zeromq.ZMQ;

public class Main {

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
        byte[] request = socket.recv(0); // block
        logger.info("Got a request: " + request.length);
        if (request[0] == 1) {
          // compile request
          try {
            var bis = new ByteArrayInputStream(request, 1, request.length);
            var closure = deserialize(bis);
            var nativeCode = jit.execute(closure);
            var response = new byte[nativeCode.length + 1];
            response[0] = 0; // indicate success
            System.arraycopy(nativeCode, 0, response, 1, nativeCode.length);
            socket.send(response, 0);
          } catch (Exception e) {
            logger.severe("Unable to process request: " + e.getMessage());

            var payload = e.getMessage().getBytes(ZMQ.CHARSET);
            socket.send(payload, 0);
          }
        } else {
          logger.severe("Unknown request type: " + request[0]);
        }
      }
    } catch (Exception e) {
      e.printStackTrace(System.err);
      System.exit(1);
    }
  }

  private CloSXP deserialize(InputStream input) throws IOException {
    return (CloSXP) RDSReader.readStream(rsession, input);
  }

  public static void main(String[] args) {
    new Main().run();
  }
}
