package org.prlprg.util;

import java.nio.file.Path;

public record TestPath(Path root, Path relative) {
  public String name() {
    String fileName = relative.getFileName().toString();
    int dotIndex = fileName.lastIndexOf('.');
    return dotIndex == -1 ? fileName : fileName.substring(0, dotIndex);
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
