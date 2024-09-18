package org.prlprg.util;

import static java.lang.String.format;
import static org.prlprg.AppConfig.R_BIN;

import java.io.*;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
import java.util.function.Supplier;
import javax.annotation.Nullable;
import javax.annotation.concurrent.NotThreadSafe;

import org.prlprg.RSession;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.sexp.SEXP;

public class GNURFactory {
    public static GNUR createRestarting(RSession session) {
        return new RestartingGNURProcess(() -> spawn(session));
    }

    public static GNUR create(RSession session) {
        return spawn(session);
    }

    static SingleGNURProcess spawn(RSession session) {
        try {
            var versionProc = new ProcessBuilder(R_BIN, "--version").start();
            if (!versionProc.waitFor(10, TimeUnit.SECONDS)) {
                throw new RuntimeException("R (`" + R_BIN + " --version`) timed out");
            }
            String version;
            try (var versionReader = versionProc.inputReader()) {
                var versionStr = versionReader.readLine();

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
                } else {
                    throw new RuntimeException("R (`" + R_BIN + " --version`) returned unexpected output");
                }
            }

            var proc =
                    new ProcessBuilder(R_BIN, "--slave", "--vanilla").redirectErrorStream(true).start();
            return new SingleGNURProcess(session, proc);
        } catch (IOException | SecurityException | UnsupportedOperationException e) {
            throw new RuntimeException("Unable to start R (R_BIN = " + R_BIN + ")", e);
        } catch (InterruptedException e) {
            throw new RuntimeException("Interrupted while running R (R_BIN = " + R_BIN + ")", e);
        }
    }
}

class RestartingGNURProcess implements GNUR {
    private @Nullable GNUR R;
    private final Supplier<GNUR> factory;

    RestartingGNURProcess(Supplier<GNUR> factory) {
        this.factory = factory;
    }

    private void check() {
        if (R == null || !R.isAlive()) {
            R = factory.get();
        }
    }

    @Override
    public boolean isAlive() {
        return R != null && R.isAlive();
    }

    @Override
    public SEXP eval(String source) {
        check();
        assert R != null;
        return R.eval(source);
    }

    @Override
    public Pair<SEXP, String> capturingEval(String source) {
        check();
        assert R != null;
        return R.capturingEval(source);
    }

    @Override
    public SEXP eval(String source, SEXP input) {
        check();
        assert R != null;
        return R.eval(source);
    }

    @Override
    public void close() throws Exception {
        if (R != null) {
            R.close();
        }
    }
}

@NotThreadSafe
class SingleGNURProcess implements GNUR {
    private final RSession session;
    private final Process process;
    private final PrintStream in;
    private final BufferedReader out;

    public SingleGNURProcess(RSession session, Process process) {
        this.session = session;
        this.process = process;
        this.in = new PrintStream(process.getOutputStream());
        this.out = new BufferedReader(new InputStreamReader(process.getInputStream()));
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
        try {
            var sourceFile = File.createTempFile("RCS-test", ".R");
            var targetFile = File.createTempFile("RCS-test", ".rds");

            try (var w = new PrintWriter(sourceFile)) {
                w.println(source);
            }

            var code =
                    format(
                            "saveRDS(eval(parse(file='%s'), envir=new.env(parent=baseenv())), '%s', version=2, compress=FALSE)",
                            sourceFile.getAbsoluteFile(), targetFile.getAbsoluteFile());

            var output = run(code);

            var res = RDSReader.readFile(session, targetFile);

            assert (sourceFile.delete());
            assert (targetFile.delete());

            return Pair.of(res, output);
        } catch (Exception e) {
            throw new RuntimeException("Unable to eval R source", e);
        }
    }

    @Override
    public SEXP eval(String source) {
        return capturingEval(source).first();
    }

    // FIXME: remove

    /**
     * Evaluate R source with input SEXP. The SEXP is passed from Java to the R world using RDS.
     *
     * @param source
     * @param input
     * @return
     */
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

    private String waitForCommand(String requestId) {
        var output = new StringBuilder();
        try {
            while (true) {
                if (!process.isAlive()) {
                    throw new RuntimeException("R exited unexpectedly");
                }

                var line = out.readLine();
                if (line == null) {
                    throw new RuntimeException("R exited unexpectedly");
                }

                if (line.equals(requestId)) {
                    return output.toString();
                }

                output.append(line).append("\n");
            }
        } catch (Exception e) {
            int exit;
            try {
                exit = process.waitFor();

                throw new RuntimeException(
                        "R REPL died (status: " + exit + ") Output so far:\n " + output, e);

            } catch (InterruptedException ex) {
                throw new RuntimeException("Interrupted waiting for R process to finish dying", ex);
            }
        }


    }

    @Override
    public void close() {
        process.destroy();
    }

}
