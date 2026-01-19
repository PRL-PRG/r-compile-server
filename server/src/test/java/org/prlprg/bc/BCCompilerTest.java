package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;
import static org.junit.jupiter.api.Assumptions.abort;

import java.nio.file.Path;
import org.junit.jupiter.api.Test;
import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.snapshots.SnapshotStore;

public class BCCompilerTest {
  @RExampleTest
  public void test(Example example, SnapshotStore store) {
    if (example.rpath().equals(Path.of("stdlib", "utils", ".install.macbinary.R"))
        && System.getProperty("os.name").contains("Mac")) {
      abort("utils/.install.macbinary is different on macOS, so the snapshot also differs");
    }

    store.verify(example, BCQuery.REGULAR);
  }

  @Test
  public void testMatchCall() {
    var R = GNUR.instance();

    var def = (CloSXP) R.eval("f <- function(a=1,b,c=100,d) {}");
    var call = (LangSXP) R.eval("quote(f(d=1,3,a=2))");

    var matched = BCCompiler.matchCall(def, call);

    assertThat(matched).isEqualTo(R.eval("quote(f(d=1,a=2,b=3))"));
  }
}
