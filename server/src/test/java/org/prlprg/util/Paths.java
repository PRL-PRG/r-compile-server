package org.prlprg.util;

import java.nio.file.Path;
import java.util.Objects;

public class Paths {
  public static Path getResource(Class<?> anchor, String name) {
    return Files.pathFromFileUrl(Objects.requireNonNull(
        anchor.getResource(name),
        "Resource not found in " + anchor.getPackageName() + ": " + name));
  }

  public static String getFileStem(Path path) {
    var fileName = path.getFileName().toString();
    var lastDot = fileName.lastIndexOf('.');
    return lastDot == -1 ? fileName : fileName.substring(0, lastDot);
  }

  private Paths() {}
}
