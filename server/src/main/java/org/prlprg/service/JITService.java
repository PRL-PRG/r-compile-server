package org.prlprg.service;

import com.google.common.io.Files;
import java.io.File;
import java.nio.charset.Charset;
import java.util.logging.Logger;
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc2c.BC2CCompiler;
import org.prlprg.session.RSession;
import org.prlprg.sexp.CloSXP;

public class JITService {
  private final RSession rsession;

  private static final Logger logger = Logger.getLogger(JITService.class.getName());

  public JITService(RSession rsession) {
    this.rsession = rsession;
  }

  public NativeClosure execute(String name, CloSXP closure, int bcOptimization, int ccOptimization)
      throws Exception {
    logger.fine(
        "Compiling closure: "
            + name
            + "\n"
            + closure
            + "(bcOpt="
            + bcOptimization
            + ", ccOpt="
            + ccOptimization
            + ")\n");

    var bcCompiler = new BCCompiler(closure, rsession);
    bcCompiler.setOptimizationLevel(bcOptimization);
    var bc = bcCompiler.compile().get();
    var bc2cCompiler = new BC2CCompiler(bc);
    var module = bc2cCompiler.finish();
    // var input = new File("/tmp/jit.c");
    var input = File.createTempFile("cfile", ".c");
    var f = Files.newWriter(input, Charset.defaultCharset());
    module.file().writeTo(f);
    // var output = new File("/tmp/jit.o");
    var output = File.createTempFile("ofile", ".o");

    RshCompiler.getInstance(ccOptimization)
        .createBuilder(input.getPath(), output.getPath())
        .flag("-c")
        .compile();

    var res = Files.asByteSource(output).read();

    //    if (!input.delete()) {
    //      throw new IOException("Unable to delete file" + input);
    //    }

    //    if (!output.delete()) {
    //      throw new IOException("Unable to delete file" + input);
    //    }

    return new NativeClosure(res, module.topLevelFunName(), module.constantPool());
  }
}
