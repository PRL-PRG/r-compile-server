package org.prlprg.session.gnur;

import static java.lang.String.format;
import static org.prlprg.AppConfig.R_BIN;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.io.PrintWriter;
import java.time.Duration;
import java.util.UUID;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.annotation.concurrent.NotThreadSafe;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.RSession;
import org.prlprg.session.TestRSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
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
    var requestId = UUID.randomUUID().toString();

    if (!process.isAlive()) {
      throw new RuntimeException("R is not running");
    }

    in.println(code);
    in.printf("cat('%s\n')", requestId);
    in.println();
    in.flush();
    return waitForCommand(requestId);
  }

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
      var code =
          format(
              "options(error=NULL); saveRDS(eval(parse(file='%s'), envir=new.env(parent=globalenv())), '%s', version=2, compress=FALSE)",
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
    try {
      var inputFile = File.createTempFile("RCS-input", ".rds");
      RDSWriter.writeFile(inputFile, input);
      String full_source = "input <- readRDS('" + inputFile.getAbsolutePath() + "')\n" + source;

      return eval(full_source);
    } catch (Exception e) {
      throw new RuntimeException("Unable to eval R source", e);
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
