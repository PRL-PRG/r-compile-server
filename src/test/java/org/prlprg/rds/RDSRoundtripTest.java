package org.prlprg.rds;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import org.prlprg.RClosureTests;
import org.prlprg.sexp.SEXP;

public class RDSRoundtripTest extends RClosureTests {
  @Override
  protected void testClosure(String closure, int optimizationLevel) {

    // Load the closure into Java using eval - this will be our starting point
    var clo = R.eval(closure);

    // Write the closure using the RDS writer
    var output = new ByteArrayOutputStream();
    try {
      RDSWriter.writeStream(output, clo);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }

    // Read from the stream using the RDS reader
    var input = new ByteArrayInputStream(output.toByteArray());
    SEXP readSexp;
    try {
      readSexp = RDSReader.readStream(rsession, input);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }

    assertEquals(clo, readSexp);
  }
}
