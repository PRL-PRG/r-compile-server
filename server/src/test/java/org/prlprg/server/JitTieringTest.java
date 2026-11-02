package org.prlprg.server;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.io.IOException;
import java.nio.file.Files;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;
import org.prlprg.AppConfig;

/// The rsh JIT's tiers, end to end: an R process with `rsh` asks [FirTestServer] to compile a
/// closure that ran its baseline often enough, and runs what the server sends back (see
/// `client/rsh/README.md`).
///
/// The R process is its own, not [org.prlprg.session.gnur.GNUR#rshInstance()], because it enables
/// GNU-R's JIT, which would change what the eval tests run.
class JitTieringTest {
  /// Calls `f` and `g` and reports what they return and their tiers as `@key=deparsed value`
  /// lines. `report` is compiled before the rsh JIT is enabled, so the JIT doesn't tier it.
  private static final String SCRIPT =
      """
      options(warn = 1)
      threshold <- %dL
      port <- %dL

      report <- compiler::cmpfun(function(key, value) {
        cat("@", key, "=", paste(deparse(value), collapse = " "), "\\n", sep = "")
      })

      invisible(compiler::enableJIT(3))
      rsh::rsh_jit_enable(threshold)

      # Not connected: never leaves the baseline.
      g <- function(x) x * 2
      ok <- TRUE
      for (i in seq_len(4L * threshold)) ok <- identical(g(i), i * 2) && ok
      report("g_results", ok)
      report("g_tier", rsh::rsh_jit_tier(g))
      report("g_compiled", rsh::is_compiled(g))

      rsh::rsh_fir_connect("127.0.0.1", port, deterministic = TRUE)

      f <- function(x) x + 1
      report("f_tier_0", rsh::rsh_jit_tier(f))
      ok <- TRUE
      for (i in seq_len(threshold - 1L)) ok <- identical(f(i), i + 1) && ok
      report("f_results_interpreted", ok)
      report("f_tier_interpreted", rsh::rsh_jit_tier(f))
      report("f_result_n", f(threshold))
      report("f_tier_n", rsh::rsh_jit_tier(f))
      ok <- TRUE
      for (i in seq_len(threshold) + threshold) ok <- identical(f(i), i + 1) && ok
      report("f_results_baseline", ok)
      report("f_tier_2n", rsh::rsh_jit_tier(f))

      report("f_eager", f(41))
      report("f_tier_optimized", rsh::rsh_jit_tier(f))
      report("f_compiled", rsh::is_compiled(f))
      y <- 41
      report("f_promise", f(y))
      report("f_integer", identical(f(1L), 1L + 1))
      report("f_vector", identical(f(c(1, 2)), c(2, 3)))
      report("f_string", tryCatch(f("a"), error = conditionMessage))
      report("original_string", tryCatch("a" + 1, error = conditionMessage))
      report("f_tier_end", rsh::rsh_jit_tier(f))
      """;

  @ParameterizedTest
  @ValueSource(ints = {3, 5})
  void tiers(int threshold) throws Exception {
    var server = FirTestServer.instance();
    var modules = server.firModules();
    // Ids are sequential, so the module the server makes for `f` is the next one.
    var lastId = Integer.parseInt(modules.freshId().substring(1));
    var moduleId = "m" + (lastId + 1);

    var output = runR(SCRIPT.formatted(threshold, server.port()));
    var reports = reports(output);
    var msg = "R output:\n" + output;

    try {
      assertEquals("TRUE", reports.get("g_results"), msg);
      assertEquals("\"baseline\"", reports.get("g_tier"), msg);
      assertEquals("FALSE", reports.get("g_compiled"), msg);

      assertEquals("\"interpreted\"", reports.get("f_tier_0"), msg);
      assertEquals("TRUE", reports.get("f_results_interpreted"), msg);
      assertEquals("\"interpreted\"", reports.get("f_tier_interpreted"), msg);
      assertEquals(String.valueOf(threshold + 1), reports.get("f_result_n"), msg);
      assertEquals("\"baseline\"", reports.get("f_tier_n"), msg);
      assertEquals("TRUE", reports.get("f_results_baseline"), msg);
      assertEquals("\"baseline\"", reports.get("f_tier_2n"), msg);

      assertEquals("42", reports.get("f_eager"), msg);
      assertEquals("\"optimized\"", reports.get("f_tier_optimized"), msg);
      assertEquals("TRUE", reports.get("f_compiled"), msg);
      assertEquals("42", reports.get("f_promise"), msg);
      assertEquals("TRUE", reports.get("f_integer"), msg);
      assertEquals("TRUE", reports.get("f_vector"), msg);
      assertNotNull(reports.get("original_string"), msg);
      assertEquals(reports.get("original_string"), reports.get("f_string"), msg);
      assertEquals("\"optimized\"", reports.get("f_tier_end"), msg);

      var entry = modules.get(moduleId);
      assertNotNull(entry, "The server has no module " + moduleId + " for `f`. " + msg);
      assertNull(modules.get("m" + (lastId + 2)), "The server made more than one module. " + msg);
      synchronized (entry.session()) {
        var names =
            entry.session().module().localFunctions().stream().map(fn -> fn.name().name()).toList();
        assertTrue(names.contains("f"), "No function named `f` in the module: " + names);
      }
    } finally {
      modules.remove(moduleId);
    }
  }

  /// Every `@key=value` line of `output`.
  private static Map<String, String> reports(String output) {
    var reports = new LinkedHashMap<String, String>();
    output
        .lines()
        .filter(line -> line.startsWith("@") && line.contains("="))
        .forEach(
            line -> {
              var eq = line.indexOf('=');
              reports.put(line.substring(1, eq), line.substring(eq + 1));
            });
    return reports;
  }

  /// Run `script` in a new R process in which GNU-R's JIT hands every closure to its compile hook
  /// on its first call, and return what it printed.
  private static String runR(String script) throws IOException, InterruptedException {
    var scriptFile = Files.createTempFile("jit-tiering", ".R");
    try {
      Files.writeString(scriptFile, script);
      var builder =
          new ProcessBuilder(AppConfig.R_BIN, "--slave", "--vanilla", "-f", scriptFile.toString())
              .redirectErrorStream(true);
      builder.environment().remove("R_HOME");
      builder.environment().put("R_JIT_STRATEGY", "3");
      try (var process = builder.start()) {
        // Read on another thread, so a hung R still lets the timeout below fire.
        var output = new StringBuilder();
        var reader =
            Thread.ofVirtual()
                .start(
                    () -> {
                      try (var in = process.inputReader()) {
                        in.lines().forEach(line -> output.append(line).append('\n'));
                      } catch (IOException e) {
                        output.append("<failed to read R's output: ").append(e).append(">\n");
                      }
                    });
        if (!process.waitFor(40, TimeUnit.SECONDS)) {
          process.destroyForcibly();
          reader.join();
          throw new AssertionError("R timed out. Output:\n" + output);
        }
        reader.join();
        assertEquals(0, process.exitValue(), "R failed. Output:\n" + output);
        return output.toString();
      }
    } finally {
      Files.deleteIfExists(scriptFile);
    }
  }
}
