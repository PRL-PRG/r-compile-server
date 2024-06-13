package org.prlprg.service;

import com.google.common.io.Files;
import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import org.prlprg.RSession;
import org.prlprg.bc.Compiler;
import org.prlprg.bcc.CCompiler;
import org.prlprg.sexp.CloSXP;

public class JITService {
  private final RSession rsession;

  public JITService(RSession rsession) {
    this.rsession = rsession;
  }

  public byte[] execute(CloSXP closure) throws IOException, InterruptedException {
    var bcCompiler = new Compiler(closure, rsession);
    var bc = bcCompiler.compile().get();
    var bccCompiler = new CCompiler(bc);
    var cfile = bccCompiler.compile();
    var input = File.createTempFile("cfile", ".c");
    var f = Files.newWriter(input, Charset.defaultCharset());
    cfile.writeTo(f);
    var output = new File("/tmp/jit.o"); // File.createTempFile("ofile", ".o");

    new NativeCompilerBuilder(input, output).flag("-g").compile();

    var res = Files.asByteSource(output).read();

    if (!input.delete()) {
      throw new IOException("Unable to delete file" + input);
    }

    //    if (!output.delete()) {
    //      throw new IOException("Unable to delete file" + input);
    //    }

    return res;
  }
}
