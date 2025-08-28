package org.prlprg.util;

import java.nio.file.Path;

public record TestPath(Path root, Path relative) {
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
