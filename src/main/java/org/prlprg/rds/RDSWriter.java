package org.prlprg.rds;

import java.io.*;

import org.prlprg.RSession;
import org.prlprg.sexp.*;

public class RDSWriter implements Closeable {
    private final RSession session;
    private final RDSOutputStream out;

    private RDSWriter(RSession session, OutputStream out) {
        this.session = session;
        this.out = new RDSOutputStream(out);
    }

    @Override
    public void close() throws IOException {
        out.close();
    }
}
