package org.prlprg;

import java.io.InputStream;
import java.io.OutputStream;
import java.nio.file.Path;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.RSession;
import org.prlprg.sexp.SEXP;

public abstract class RDSSnapshotTest<T> extends SnapshotTest<T> {

  @Override
  protected Path getTestPath(String name) {
    var p = super.getTestPath(name);
    return p.resolveSibling(p.getFileName().toString() + ".RDS");
  }

  @Override
  protected T load(InputStream input) throws Exception {
    var sxp = RDSReader.readStream(getRSession(), input);
    return deserialize(sxp);
  }

  @Override
  protected void save(T value, OutputStream output) throws Exception {
    var sxp = serialize(value);
    RDSWriter.writeStream(output, sxp);
  }

  protected abstract RSession getRSession();

  protected abstract T deserialize(SEXP value) throws Exception;

  protected abstract SEXP serialize(T value) throws Exception;
}
