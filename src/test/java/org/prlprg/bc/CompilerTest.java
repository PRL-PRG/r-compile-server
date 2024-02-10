package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.util.Assertions.assertSnapshot;
import static org.prlprg.util.StructuralUtils.printStructurally;

import java.nio.file.Path;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.RSession;
import org.prlprg.rds.RDSReader;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.util.*;

public class CompilerTest implements Tests {

  private final RSession rsession = new TestRSession();
  private final GNUR R = new GNUR(rsession);

  //    @Test
  //    public void testInlineBlock() {
  //        var fun = (CloSXP) R.eval("""
  //                function (x) {}
  //                """);
  //
  //        var compiler = new Compiler(3);
  //        var bc = compiler.compileFun(fun);
  //        System.out.println(bc);
  //    }

  @ParameterizedTest(name = "Commutative read/compile {0}")
  @DirectorySource(glob = "*.R", relativize = true, exclude = "serialize-closures.R")
  void testCommutativeReadAndCompile(Path sourceName) {
    var bootstrapScript = getResourcePath("serialize-closures.R");
    var sourcePath = getResourcePath(sourceName);
    var compiledRoot = getSnapshotPath(sourceName);

    // Generate `compiledRoot` from `sourcePath` using GNU-R if necessary
    if (Files.exists(compiledRoot)
        && (Files.isOlder(compiledRoot, sourcePath)
            || Files.isOlder(compiledRoot, bootstrapScript))) {
      Files.deleteRecursively(compiledRoot);
    }

    if (!Files.exists(compiledRoot)) {
      System.out.println("Serializing closures");
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
            var astClos = (CloSXP) RDSReader.readFile(rsession, astPath.toFile());
            var bcClos = (CloSXP) RDSReader.readFile(rsession, bcPath.toFile());
            var compiler = new Compiler(astClos);
            var ourBc = compiler.compile();
            var rBc = ((BCodeSXP) bcClos.body()).bc();

            assertEquals(
                printStructurally(rBc),
                printStructurally(ourBc),
                "`compile(read(ast)) == read(R.compile(ast))`");
            assertSnapshot(bcOutPath, bcClos::toString, "`print(bc)`");
          });
    }
  }
}
