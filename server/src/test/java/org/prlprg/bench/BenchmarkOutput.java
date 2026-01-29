package org.prlprg.bench;

import java.io.File;
import org.jspecify.annotations.Nullable;
import org.prlprg.util.Files;

public class BenchmarkOutput {
  private final String csv;
  private final @Nullable String print;

  BenchmarkOutput(String csv, @Nullable String print) {
    this.csv = csv;
    this.print = print;
  }

  public void writeCsv(File file) {
    Files.writeString(file.toPath(), csv);
  }

  @Override
  public String toString() {
    return print == null ? csv : print;
  }
}
