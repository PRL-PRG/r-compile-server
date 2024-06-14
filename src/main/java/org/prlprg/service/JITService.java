package org.prlprg.service;

import com.google.common.io.Files;
import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.List;
import org.prlprg.RSession;
import org.prlprg.bc.Compiler;
import org.prlprg.bcc.CCompiler;
import org.prlprg.sexp.CloSXP;

public class JITService {
  private final RSession rsession;

  private static final String INCLUDE_PATH = "backend/include";

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
    var input = new File("Rsh.h");
    var output = new File("Rsh.h.gch");
    new NativeCompilerBuilder(input, output)
        .workingDirectory(new File(INCLUDE_PATH))
        .flags(COMPILER_FLAGS)
        .compile();
  }

  public byte[] execute(String name, CloSXP closure) throws IOException, InterruptedException {
    var bcCompiler = new Compiler(closure, rsession);
    var bc = bcCompiler.compile().get();
    var bccCompiler = new CCompiler(name, bc);
    var cfile = bccCompiler.compile();
    var input = File.createTempFile("cfile", ".c");
    var f = Files.newWriter(input, Charset.defaultCharset());
    cfile.writeTo(f);
    var output = new File("/tmp/jit.o"); // File.createTempFile("ofile", ".o");

    new NativeCompilerBuilder(input, output)
        .flag("-DNDEBUG")
        .flag("-I.")
        .flag("-I/usr/local/include")
        .flag("-fpic")
        .flag("-march=x86-64")
        .flag("-mtune=generic")
        .flag("-pipe")
        .flag("-fno-plt")
        .flag("-fexceptions")
        .flag("-Wformat")
        .flag("-Werror=format-security")
        .flag("-fstack-clash-protection")
        .flag("-fcf-protection")
        .flag("-flto=auto")
        .flag("-ffat-lto-objects")
        .flag("-Wall")
        .flag("-pedantic")
        // .flag("-O3")
        .flag("-g")
        .flag("-Ibackend/include")
        .compile();

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
