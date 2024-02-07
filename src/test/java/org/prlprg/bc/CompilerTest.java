package org.prlprg.bc;

import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.Files;
import org.prlprg.util.SubTest;
import org.prlprg.util.Tests;

import java.nio.file.Path;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.util.Assertions.assertSnapshot;
import static org.prlprg.util.StructuralUtils.printStructurally;

public class CompilerTest implements Tests {

    @Test
    public void testInlineBlock() {
        var fun = R.eval("""
                function (x) {}
                """).cast(CloSXP.class);

        var compiler = new Compiler(3);
        var bc = compiler.compileFun(fun);
        System.out.println(bc);
    }

    @Test
    public void testInlineIf() {
        var fun =
                R.eval("""
                                function (x) if (x) 1 else 2
                                """)
                        .cast(CloSXP.class);

        var compiler = new Compiler(3);
        var bc = compiler.compileFun(fun);
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
                        var astClos = (CloSXP) RDSReader.readFile(astPath.toFile());
                        var bcClos = (CloSXP) RDSReader.readFile(bcPath.toFile());
                        var compiler = new Compiler(3);
                        var ourBc = printStructurally(compiler.compileFun(astClos));
                        var rBc = printStructurally(((BCodeSXP) bcClos.body()).bc());
                        assertEquals(ourBc, rBc, "`compile(read(ast)) == read(R.compile(ast))`");
                        assertSnapshot(bcOutPath, bcClos::toString, "`print(bc)`");
                    });
        }
    }
}
