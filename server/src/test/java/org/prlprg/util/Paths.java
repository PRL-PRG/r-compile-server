package org.prlprg.util;

import java.nio.file.Path;
import java.util.Objects;

public class Paths {
  public static Path getResourceSource(Class<?> anchor, String name) {
    return Path.of("src", "test", "resources", anchor.getPackageName().replace(".", "/"), name);
  }

  public static Path getResource(Class<?> anchor, String name) {
    return Files.pathFromFileUrl(
        Objects.requireNonNull(
            anchor.getResource(name),
            "Resource not found in " + anchor.getPackageName() + ": " + name));
  }

  public static String getFileStem(Path path) {
    var fileName = path.getFileName().toString();
    var lastDot = fileName.lastIndexOf('.');
    return lastDot == -1 ? fileName : fileName.substring(0, lastDot);
  }

  public static String getExtension(Path path) {
    var fileName = path.getFileName().toString();
    var lastDot = fileName.lastIndexOf('.');
    return lastDot == -1 ? "" : fileName.substring(lastDot + 1);
  }

  public static Path addingExtension(Path path, String extension) {
    return path.resolveSibling(path.getFileName().toString() + "." + extension);
  }

  public static Path removingExtension(Path path) {
    return path.resolveSibling(getFileStem(path));
  }

  private Paths() {}
}
