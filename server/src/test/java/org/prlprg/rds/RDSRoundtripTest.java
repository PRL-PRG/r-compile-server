package org.prlprg.rds;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;

import org.prlprg.RClosureTests;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;

// FIXME: can we replace this with snapshots?
public class RDSRoundtripTest extends RClosureTests {
    @Override
    protected void testClosure(String closure, int optimizationLevel) throws Exception {

        // Load the closure into Java using eval - this will be our starting point
        var clo = R.eval(closure);

        // Write the closure using the RDS writer
        var output = new ByteArrayOutputStream();
        RDSWriter.writeStream(output, clo);

        // Read from the stream using the RDS reader
        var input = new ByteArrayInputStream(output.toByteArray());
        SEXP res = RDSReader.readStream(Rsession, input);

        if (clo instanceof CloSXP c && res instanceof CloSXP r) {
            assertEquals(c.body(), r.body());
            assertEquals(c.parameters(), r.parameters());
        } else {
            throw new AssertionError("Expected deserialized SEXP to be a closure");
        }
    }
}
