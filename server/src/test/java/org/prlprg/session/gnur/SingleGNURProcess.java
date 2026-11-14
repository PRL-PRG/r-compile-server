package org.prlprg.session.gnur;

import static java.lang.String.format;
import static org.prlprg.AppConfig.R_BIN;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintStream;
import java.io.PrintWriter;
import java.net.InetAddress;
import java.net.ServerSocket;
import java.time.Duration;
import java.util.Objects;
import java.util.UUID;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.function.UnaryOperator;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.annotation.concurrent.NotThreadSafe;
import org.jspecify.annotations.Nullable;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.RSession;
import org.prlprg.session.TestRSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Pair;

@NotThreadSafe
class SingleGNURProcess implements GNUR {
  private static final Logger logger = Logger.getLogger(SingleGNURProcess.class.getName());

  /// Kills processes whose evaluation exceeds its timeout (see [#waitForCommand]).
  private static final ScheduledExecutorService WATCHDOG =
      Executors.newSingleThreadScheduledExecutor(
          Thread.ofPlatform().name("GNU-R watchdog").daemon().factory());

  private final TestRSession session;
  private final Duration timeout;
  private final Process process;
  private final PrintStream in;
  private final BufferedReader out;

  /// `timeout` is how long each evaluation may take before the process is killed.
  SingleGNURProcess(TestRSession session, Duration timeout) {
    this.session = session;
    this.timeout = timeout;

    // Start process
    try {
      String version;
      // Errors are merged in because this is the first R invocation of the run: if R can't start at
      // all (on macOS, a dyld failure when the libraries it was linked against aren't installed),
      // what it says about it is the only clue, and it says it on stderr.
      try (var versionProc = rProcess(R_BIN, "--version").redirectErrorStream(true).start()) {
        if (!versionProc.waitFor(10, TimeUnit.SECONDS)) {
          throw new RuntimeException("R (`" + R_BIN + " --version`) timed out");
        }

        try (var versionReader = versionProc.inputReader()) {
          var output = new StringBuilder();
          String versionStr;

          // Skip lines like "WARNING: ignoring environment value of R_HOME"
          do {
            versionStr = versionReader.readLine();
            if (versionStr != null) {
              output.append(versionStr).append('\n');
            }
          } while (versionStr != null && versionStr.startsWith("WARNING:"));

          if (versionStr == null) {
            throw new RuntimeException(
                "R (`"
                    + R_BIN
                    + " --version`) exited with code "
                    + versionProc.exitValue()
                    + " without reporting a version. Its output was:\n"
                    + (output.isEmpty() ? "<nothing>" : output.toString()));
          }

          if (versionStr.startsWith("R version")) {
            version = versionStr.substring("R version ".length()).split(" ", 2)[0];
            if (!version.equals(session.version())) {
              throw new RuntimeException(
                  "R version can't be used for compiler tests: expected version "
                      + session.version()
                      + " but found "
                      + version
                      + " (R_BIN = "
                      + R_BIN
                      + ")");
            }
          } else if (versionStr.startsWith("R Under development (unstable)")) {
            // OK -- this should be a bundled version
            version = "bundled";
          } else {
            throw new RuntimeException(
                "R (`" + R_BIN + " --version`) returned unexpected output:\n" + versionStr);
          }
        }
      }

      process = rProcess(R_BIN, "--slave", "--vanilla").redirectErrorStream(true).start();

      if (logger.isLoggable(Level.FINE)) {
        logger.fine("Started %s version: %s process: %d".formatted(R_BIN, version, process.pid()));
      }
    } catch (IOException | SecurityException | UnsupportedOperationException e) {
      throw new RuntimeException("Unable to start R (R_BIN = " + R_BIN + ")", e);
    } catch (InterruptedException e) {
      throw new RuntimeException("Interrupted while running R (R_BIN = " + R_BIN + ")", e);
    }

    in = new PrintStream(process.getOutputStream());
    out = new BufferedReader(new InputStreamReader(process.getInputStream()));
    // See [#capturingEval(String)].
    in.println(".rcs_search <- search()");
  }

  /// [ProcessBuilder] for `R_BIN`, without `R_HOME` in the environment.
  ///
  /// `R_BIN` is a path to a specific R, whose launcher script ignores an inherited `R_HOME` and
  /// says so on stderr. That warning would otherwise land in the captured output of whichever
  /// eval happened to start the process, which is nondeterministic once a crashing example makes
  /// [RestartingGNURProcess] restart it mid-suite.
  private static ProcessBuilder rProcess(String... command) {
    var builder = new ProcessBuilder(command);
    builder.environment().remove("R_HOME");
    return builder;
  }

  @Override
  public boolean isAlive() {
    return process.isAlive();
  }

  private String run(String code) {
    return waitForCommand(start(code));
  }

  /// Sends `code` to R, and returns the request ID that R prints after it ran it.
  private String start(String code) {
    var requestId = UUID.randomUUID().toString();

    if (!process.isAlive()) {
      throw new RuntimeException("R is not running");
    }
    if (evalDepth > 0) {
      throw new IllegalStateException("R is in an evaluation with callbacks");
    }

    in.println(code);
    in.printf("cat('%s\n')", requestId);
    in.println();
    in.flush();
    return requestId;
  }

  // region evaluation with callbacks

  /// The R side of [#eval(String, SEXP, UnaryOperator)]: a socket to this process, over which
  /// both sides send serialized lists (R sends the length first, because the reader reads to the
  /// end of its input). `.rcs$serve()` evaluates one `list("eval", source, input)`
  /// and sends `list("value", x)`. In between, `.rcs_callback(x)` sends `list("callback", x)`, and
  /// evaluates the `"eval"`s it gets until it gets its `list("value", x)`, or a `list("abort")`,
  /// at which the evaluation it's in sends `list("aborted")` in place of its value.
  private static final String CONNECT =
      """
      .rcs <- new.env()
      .rcs$con <- socketConnection("127.0.0.1", %d, blocking = TRUE, open = "r+b", timeout = 86400)
      .rcs$parsed <- new.env()
      .rcs$send <- function(x) {
        bytes <- serialize(x, NULL, version = 2)
        writeBin(length(bytes), .rcs$con, endian = "big")
        writeBin(bytes, .rcs$con)
        flush(.rcs$con)
      }
      .rcs$eval <- function(msg) {
        code <- .rcs$parsed[[msg[[2]]]]
        if (is.null(code)) .rcs$parsed[[msg[[2]]]] <- code <- parse(text = msg[[2]])
        withRestarts(
          list("value", eval(code, list(input = msg[[3]]), globalenv())),
          rcs_abort = function() list("aborted"))
      }
      .rcs$serve <- function() .rcs$send(.rcs$eval(unserialize(.rcs$con)))
      .rcs_callback <- function(x) {
        .rcs$send(list("callback", x))
        repeat {
          msg <- unserialize(.rcs$con)
          switch(msg[[1]],
            value = return(msg[[2]]),
            abort = invokeRestart("rcs_abort"),
            eval = .rcs$send(.rcs$eval(msg)))
        }
      }
      """;

  private @Nullable InputStream fromR;
  private @Nullable OutputStream toR;
  /// How many [#eval(String, SEXP, UnaryOperator)] are running (nested in callbacks).
  private int evalDepth = 0;

  @Override
  public SEXP eval(String source, SEXP input, UnaryOperator<SEXP> callback) {
    try {
      if (fromR == null) {
        connect();
      }
      var requestId = evalDepth == 0 ? start(".rcs$serve()") : null;
      evalDepth++;
      try {
        send(SEXPs.vec(SEXPs.string("eval"), SEXPs.string(source), input));
        Throwable thrown = null;
        while (true) {
          var message = receive();
          switch (((StrSXP) message.get(0)).get(0)) {
            case "value" -> {
              return message.get(1);
            }
            case "callback" -> {
              try {
                send(SEXPs.vec(SEXPs.string("value"), callback.apply(message.get(1))));
              } catch (RuntimeException | Error e) {
                thrown = e;
                send(SEXPs.vec(SEXPs.string("abort")));
              }
            }
            case "aborted" -> {
              switch (Objects.requireNonNull(thrown)) {
                case RuntimeException e -> throw e;
                case Error e -> throw e;
                default -> throw new AssertionError(thrown);
              }
            }
            default -> throw new IOException("Unexpected message from R: " + message);
          }
        }
      } finally {
        evalDepth--;
        if (requestId != null && process.isAlive()) {
          waitForCommand(requestId);
        }
      }
    } catch (IOException e) {
      // R died (then say why), or it's killed because it didn't answer in time.
      process.destroyForcibly();
      throw new RuntimeException("I/O exception during R evaluation with callbacks", e);
    }
  }

  private void connect() throws IOException {
    try (var server = new ServerSocket(0, 1, InetAddress.getLoopbackAddress())) {
      // R connects before `accept`, into the backlog.
      run(CONNECT.formatted(server.getLocalPort()));
      var socket = server.accept();
      socket.setSoTimeout(Math.toIntExact(timeout.toMillis()));
      socket.setTcpNoDelay(true);
      fromR = new BufferedInputStream(socket.getInputStream());
      toR = socket.getOutputStream();
    }
  }

  private void send(SEXP message) throws IOException {
    var bytes = new ByteArrayOutputStream();
    RDSWriter.writeStream(bytes, message);
    var out = Objects.requireNonNull(toR);
    bytes.writeTo(out);
    out.flush();
  }

  private VecSXP receive() throws IOException {
    var in = new DataInputStream(Objects.requireNonNull(fromR));
    var bytes = in.readNBytes(in.readInt());
    return (VecSXP) RDSReader.readStream(session, new ByteArrayInputStream(bytes));
  }

  // endregion

  @Override
  public Pair<SEXP, String> capturingEval(String source) {
    String output = null;
    try {
      var sourceFile = File.createTempFile("RCS-test", ".R");
      var targetFile = File.createTempFile("RCS-test", ".rds");

      try (var w = new PrintWriter(sourceFile)) {
        w.println(source);
      }

      // An error must kill R, which is how [EvalException] detects it, so clear any
      // `options(error = ...)` an earlier eval in this process left behind (e.g. an example of
      // `traceback`). With one set, R survives the error and `targetFile` stays empty.
      // Also detach the packages that earlier evals attached, so that the output doesn't depend on
      // them: `require` prints "Loading required package: ..." only if the package isn't attached.
      var code =
          format(
              "options(error=NULL); local(for (p in setdiff(search(), .rcs_search)) detach(p, character.only=TRUE, force=TRUE)); saveRDS(eval(parse(file='%s'), envir=new.env(parent=globalenv())), '%s', version=2, compress=FALSE)",
              sourceFile.getAbsoluteFile(), targetFile.getAbsoluteFile());

      output = run(code);

      var res = RDSReader.readFile(session, targetFile);

      var sourceDeleted = sourceFile.delete();
      var targetDeleted = targetFile.delete();
      assert sourceDeleted && targetDeleted;

      return Pair.of(res, output);
    } catch (IOException e) {
      // Ensure [RestartingGNURProcess] starts a new process if this didn't actually die
      process.destroy();
      throw new RuntimeException(
          "I/O exception during R source evaluation"
              + (output != null ? "\nOutput:\n" + output : ""),
          e);
    }
  }

  @Override
  public SEXP eval(String source) {
    return capturingEval(source).first();
  }

  @Override
  public SEXP eval(String source, SEXP input) {
    File inputFile = null;
    try {
      inputFile = File.createTempFile("RCS-input", ".rds");
      RDSWriter.writeFile(inputFile, input);
      String full_source = "input <- readRDS('" + inputFile.getAbsolutePath() + "')\n" + source;

      return eval(full_source);
    } catch (Exception e) {
      throw new RuntimeException("Unable to eval R source", e);
    } finally {
      if (inputFile != null) {
        var _ = inputFile.delete();
      }
    }
  }

  @Override
  public EnvSXP evalEnvironment(String source) {
    return (EnvSXP) eval(source + "\nenvironment()");
  }

  /// Reads output until the line with `requestId`.
  ///
  /// If that takes longer than [#timeout] (e.g. the code reads stdin, which consumes the request
  /// ID, or loops forever), the watchdog kills the process, so `readLine` reaches EOF and this
  /// throws [EvalException].
  private String waitForCommand(String requestId) {
    var output = new StringBuilder();

    var timedOut = new AtomicBoolean();
    var watchdog =
        WATCHDOG.schedule(
            () -> {
              timedOut.set(true);
              // Descendants too, since they can hold the output pipe open.
              process.descendants().forEach(ProcessHandle::destroyForcibly);
              process.destroyForcibly();
            },
            timeout.toMillis(),
            TimeUnit.MILLISECONDS);

    IOException exception = null;
    try {
      while (true) {
        String line = null;
        try {
          line = out.readLine();
        } catch (IOException e) {
          exception = e;
        }
        if (line == null) {
          break;
        }

        // Output that doesn't end with a newline (e.g. `alarm()`'s "\a") shares the request ID's
        // line.
        if (line.endsWith(requestId)) {
          return output.append(line, 0, line.length() - requestId.length()).toString();
        }

        output.append(line).append("\n");
      }
    } finally {
      watchdog.cancel(false);
    }

    int exit;
    try {
      exit = process.waitFor();
      if (timedOut.get()) {
        throw EvalException.timedOut(timeout, exit, output.toString());
      } else if (exit == 0) {
        throw new RuntimeException("R finished without printing request ID. Output:\n" + output);
      } else {
        throw new EvalException(exit, output.toString(), exception);
      }
    } catch (InterruptedException ex) {
      throw new RuntimeException("Interrupted waiting for R process to finish dying", ex);
    }
  }

  @Override
  public void close() {
    process.destroy();
  }

  @Override
  public RSession getSession() {
    return session;
  }
}
