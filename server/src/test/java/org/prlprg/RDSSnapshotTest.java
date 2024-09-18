package org.prlprg;

import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.SEXP;

import java.io.InputStream;
import java.io.OutputStream;
import java.nio.file.Path;

public abstract class RDSSnapshotTest extends SnapshotTest<SEXP> {

    @Override
    protected Path getTestPath(String name) {
        var p = super.getTestPath(name);
        return p.resolveSibling(p.getFileName().toString() + ".RDS");
    }

    @Override
    protected SEXP load(InputStream input) throws Exception {
        return RDSReader.readStream(getRSession(), input);
    }

    @Override
    protected void save(SEXP value, OutputStream output) throws Exception {
        RDSWriter.writeStream(output, value);
    }

    protected abstract RSession getRSession();
}
