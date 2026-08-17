package org.prlprg.snapshot.fir.ir;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.IOException;
import java.nio.file.Path;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.snapshot.Query;
import org.prlprg.snapshot.SnapshotStore;

public interface GenFirQuery extends Query<Module> {
  /// Whether `example` is a FIŘ example that deliberately contains errors, marked by an
  /// `<checker>-error:` comment.
  ///
  /// Such a module is only good for checking that the checkers report those errors: optimizing it
  /// can crash, interpreting it is meaningless, and it doesn't even survive a print/parse round
  /// trip, since the parser rejects what the checkers are supposed to catch.
  static boolean isDeliberatelyInvalid(Example example) {
    return example.text().contains("-error:");
  }

  @Override
  default void verifyEqual(Module expected, Module actual, Example example, SnapshotStore store) {
    assertEquals(expected.toString(), actual.toString());
  }

  @Override
  default String snapshotExtension() {
    return "fir";
  }

  @Override
  default Module deserialize(Path path, Example example, SnapshotStore store) throws IOException {
    return Parser.fromFile(path.toFile(), Module.class);
  }

  @Override
  default void serialize(Module data, Path path, Example example, SnapshotStore store)
      throws IOException {
    if (isDeliberatelyInvalid(example)) {
      // The printout doesn't parse back (see `isDeliberatelyInvalid`), so a snapshot of it can
      // only ever fail to load, which is what the *next* run would report instead of whatever the
      // test is really checking. Nothing needs it: every query that consumes a module skips these
      // examples, and `FirQuery#verifyExtra` -- the point of snapshotting them -- runs regardless.
      return;
    }

    Printer.toFile(path.toFile(), data);
  }
}
