package org.prlprg.service;

import com.google.common.io.Files;
import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.logging.Logger;
import org.prlprg.RSession;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc2c.BC2CCompiler;
import org.prlprg.sexp.CloSXP;

public class JITService {
  private final RSession rsession;

  private static final Logger logger = Logger.getLogger(JITService.class.getName());

  public JITService(RSession rsession) {
    this.rsession = rsession;
  }

  public CompiledFunction execute(String name, CloSXP closure, int ccOptimization)
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

    RshCompiler.getInstance().compile(input, output, ccOptimization);

    var res = Files.asByteSource(output).read();

    //    if (!input.delete()) {
    //      throw new IOException("Unable to delete file" + input);
    //    }

    //    if (!output.delete()) {
    //      throw new IOException("Unable to delete file" + input);
    //    }

    return new CompiledFunction(res, bc2cCompiler.constants());
  }
}
