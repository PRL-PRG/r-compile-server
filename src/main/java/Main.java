import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import org.prlprg.rds.RDSException;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.IO;

/**
 * TODO right now reads a command-line argument pointing to an RDS file containing an AST closure,
 * reads that closure, compiles it, and debug-prints the output. In the future, this will start the
 * compile server, and command-line arguments will probably be a list of ports it will bind to (and
 * possibly flags for other modes, "-h" and "-v").
 */
public class Main {
  /**
   * @see Main
   */
  public static void main(String[] args) throws IOException, RDSException {
    new Main().doMain(args);
  }

  private void doMain(String[] args) throws IOException, RDSException {
    compile(args[0]);
  }

  private void compile(String file) throws IOException, RDSException {
    try (var input = new FileInputStream(file)) {
      compile(input);
    }
  }

  private void compile(InputStream input) throws IOException, RDSException {
    compile(RDSReader.readStream(IO.maybeDecompress(input)));
  }

  private void compile(SEXP sexp) {
    System.out.println(sexp);
  }
}
