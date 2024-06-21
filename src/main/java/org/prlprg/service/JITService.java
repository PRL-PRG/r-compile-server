package org.prlprg.service;

import com.google.common.io.Files;
import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.List;
import java.util.logging.Logger;
import org.prlprg.RSession;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc2c.BC2CCompiler;
import org.prlprg.sexp.CloSXP;

public class JITService {
  private final RSession rsession;

  private static final Logger logger = Logger.getLogger(JITService.class.getName());

  // TODO: make it configurable
  private static final String INCLUDE_PATH = "backend/include";

  // TODO: which ones are needed? Can we bootstrap it from R?
  private static final List<String> COMPILER_FLAGS =
      List.of(
          "-DNDEBUG",
          "-I.",
          "-I/usr/local/include",
          "-I" + INCLUDE_PATH,
          "-fpic",
          "-march=x86-64",
          "-mtune=generic",
          "-pipe",
          "-fno-plt",
          "-fexceptions",
          "-Wformat",
          "-Werror=format-security",
          "-fstack-clash-protection",
          "-fcf-protection",
          "-flto=auto",
          "-ffat-lto-objects",
          "-Wall",
          "-pedantic",
          "-g");

  public JITService(RSession rsession) {
    this.rsession = rsession;
  }

  public void initialize() throws IOException, InterruptedException {
    // TODO: make it constants
    var input = new File("Rsh.h");
    var output = new File("Rsh.h.gch");
    new CCCompilationBuilder(input, output)
        .workingDirectory(new File(INCLUDE_PATH))
        .flags(COMPILER_FLAGS)
        .compile();
  }

  public CompiledFunction execute(String name, CloSXP closure)
      throws IOException, InterruptedException {
    logger.fine("Compiling closure: " + name + "\n" + closure + "\n");

    var bcCompiler = new BCCompiler(closure, rsession);
    var bc = bcCompiler.compile().get();
    var bc2cCompiler = new BC2CCompiler(name, bc);
    var cfile = bc2cCompiler.compile();
    // var input = new File("/tmp/jit.c");
    var input = File.createTempFile("cfile", ".c");
    var f = Files.newWriter(input, Charset.defaultCharset());
    cfile.writeTo(f);
    // var output = new File("/tmp/jit.o");
    var output = File.createTempFile("ofile", ".o");

    var builder = new CCCompilationBuilder(input, output).flags(COMPILER_FLAGS);
    var time = System.currentTimeMillis();
    builder.compile();
    time = System.currentTimeMillis() - time;

    var res = Files.asByteSource(output).read();

    //    if (!input.delete()) {
    //      throw new IOException("Unable to delete file" + input);
    //    }

    //    if (!output.delete()) {
    //      throw new IOException("Unable to delete file" + input);
    //    }

    logger.fine("Finished compilation in %d ms (size: %d)\n".formatted(time, res.length));

    return new CompiledFunction(res, bc2cCompiler.constants());
  }
}
