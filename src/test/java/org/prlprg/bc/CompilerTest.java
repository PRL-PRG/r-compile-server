package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.util.Assertions.assertSnapshot;
import static org.prlprg.util.StructuralUtils.printStructurally;

import java.io.IOException;
import java.nio.file.Path;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.compile.Compiler;
import org.prlprg.rds.RDSException;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.Files;
import org.prlprg.util.SubTest;
import org.prlprg.util.Tests;

public class CompilerTest implements Tests {
  @Test
  public void testSomeOutput() throws IOException, RDSException {
    var source = (CloSXP) RDSReader.readStream(getResourceAsStream("f1.rds"));
    var bc = Compiler.compileFun(source);
    System.out.println(bc);
  }

  @Disabled
  @ParameterizedTest(name = "Commutative read/compile {0}")
  @DirectorySource(glob = "*.R", relativize = true, exclude = "serialize-closures.R")
  void testCommutativeReadAndCompile(Path sourceName) {
    var sourcePath = getResourcePath(sourceName);
    var compiledRoot = getSnapshotPath(sourceName);

    // Generate `compiledRoot` from `sourcePath` using GNU-R if necessary
    if (Files.exists(compiledRoot) && Files.isOlder(compiledRoot, sourcePath)) {
      Files.deleteRecursively(compiledRoot);
    }
    if (!Files.exists(compiledRoot)) {
      // Generate `compiledRoot` from `sourcePath` using GNU-R
      cmd(
          "R",
          "-s",
          "-f",
          getResourcePath("serialize-closures.R"),
          "--args",
          sourcePath,
          compiledRoot);
    }

    // Test each closure in the file
    for (var astPath : Files.listDir(compiledRoot, "*.ast.rds", 1, false, false)) {
      var name = astPath.getFileName().toString().split("\\.")[0];
      var bcPath = compiledRoot.resolve(name + ".bc.rds");
      var bcOutPath = compiledRoot.resolve(name + ".bc.out");
      SubTest.run(
          name,
          () -> {
            var astClos = (CloSXP) RDSReader.readFile(astPath);
            var bcClos = (CloSXP) RDSReader.readFile(bcPath);
            var ourBc = printStructurally(Compiler.compileFun(astClos));
            var rBc = printStructurally(((BCodeSXP) bcClos.body()).bc());
            assertEquals(ourBc, rBc, "`compile(read(ast)) == read(R.compile(ast))`");
            assertSnapshot(bcOutPath, () -> printStructurally(bcClos), "`print(bc)`");
          });
    }
  }
}
