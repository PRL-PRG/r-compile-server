package org.prlprg.examples;

import java.nio.file.Path;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

record ExamplePath(Path root, Path relative) {
  public String name() {
    return Paths.getFileStem(relative);
  }

  public Path absolute() {
    return root.resolve(relative);
  }

  public String read() {
    return Files.readString(absolute());
  }

  @Override
  public String toString() {
    return relative.toString();
  }
}
