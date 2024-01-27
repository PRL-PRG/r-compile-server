import edu.umd.cs.findbugs.annotations.NonNull;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.IO;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

public class Main {

    public static void main(String[] args) throws Exception {
        new Main().doMain(args);
    }

    private void doMain(String[] args) throws Exception {
        compile(args[0]);
    }

    private void compile(String file) throws IOException {
        try (var input = new FileInputStream(file)) {
            compile(input);
        }
    }

    private void compile(@NonNull InputStream input) throws IOException {
        compile(RDSReader.readStream(IO.maybeDecompress(input)));
    }

    private void compile(SEXP sexp) {
        System.out.println(sexp);
    }
}
