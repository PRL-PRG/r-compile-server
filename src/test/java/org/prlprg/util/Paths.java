package org.prlprg.util;

import java.nio.file.Path;

public class Paths {
  public static String getFileStem(Path path) {
    var fileName = path.getFileName().toString();
    var lastDot = fileName.lastIndexOf('.');
    return lastDot == -1 ? fileName : fileName.substring(0, lastDot);
  }

  public static String getExtension(Path path) {
    var fileName = path.getFileName().toString();
    var lastDot = fileName.lastIndexOf('.');
    return lastDot == -1 ? "" : fileName.substring(lastDot);
  }

  public static Path withExtension(Path path, String extension) {
    return path.resolveSibling(getFileStem(path) + extension);
  }

  private Paths() {}
}
