import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.IO;

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

    private void compile(InputStream input) throws IOException {
        var reader = new RDSReader(IO.maybeDecompress(input));
        compile(reader.read());
    }

    private void compile(SEXP sexp) {
        System.out.println(sexp);
    }
}
