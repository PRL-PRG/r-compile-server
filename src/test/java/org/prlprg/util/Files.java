package org.prlprg.util;

import com.google.errorprone.annotations.CanIgnoreReturnValue;
import java.io.IOException;
import java.net.URISyntaxException;
import java.net.URL;
import java.nio.file.FileSystems;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.attribute.FileTime;
import java.util.Collection;
import java.util.stream.Collectors;
import javax.annotation.Nullable;

public class Files {
  /**
   * @param root Directory to list files from
   * @param glob Filter files by glob applied to the filename. Pass {@code null} to not filter.
   * @param depth Specify a number > 1 to include files in subdirectories. Specify INT_MAX to
   *     recurse infinitely.
   * @param includeDirs Whether to include directories.
   * @param relativize Whether to relativize the paths to {@code root}.
   * @return The paths of each of the children of {@code root} filtered by the other arguments. It
   *     doesn't return {@code root} itself.
   */
  public static Collection<Path> listDir(
      Path root, @Nullable String glob, int depth, boolean includeDirs, boolean relativize) {
    if (!isDirectory(root)) {
      throw new IllegalArgumentException("Not a directory: " + root);
    }

    var globMatcher = glob == null ? null : FileSystems.getDefault().getPathMatcher("glob:" + glob);

    try (var filesHandle = java.nio.file.Files.walk(root, depth)) {
      var files = filesHandle.filter(file -> !file.equals(root));
      if (!includeDirs) {
        files = files.filter(Files::isRegularFile);
      }
      if (glob != null) {
        files = files.filter(p -> globMatcher.matches(p.getFileName()));
      }
      if (relativize) {
        files = files.map(root::relativize);
      }
      return files.collect(Collectors.toList());
    } catch (IOException e) {
      throw new RuntimeException("Failed to list files in " + root, e);
    }
  }

  public static void deleteRecursively(Path path) {
    try (var subpaths = java.nio.file.Files.walk(path)) {
      subpaths
          .sorted(java.util.Comparator.reverseOrder())
          .forEach(
              subpath -> {
                try {
                  java.nio.file.Files.delete(subpath);
                } catch (IOException e) {
                  throw new RuntimeException(
                      "Failed to recursively delete "
                          + path
                          + ", specifically on "
                          + path.relativize(subpath),
                      e);
                }
              });
    } catch (IOException e) {
      throw new RuntimeException("Failed to delete recursively " + path, e);
    }
  }

  public static boolean isOlder(Path lhs, Path rhs) {
    return getLastModifiedTime(lhs).compareTo(getLastModifiedTime(rhs)) < 0;
  }

  public static Path pathFromFileUrl(URL url) {
    try {
      return Paths.get(url.toURI());
    } catch (URISyntaxException e) {
      throw new RuntimeException("Not a file URL: " + url, e);
    }
  }

  // region boilerplate wrappers which don't throw IOException
  public static Path createTempDirectory(String prefix) {
    try {
      return java.nio.file.Files.createTempDirectory(prefix);
    } catch (IOException e) {
      throw new RuntimeException("Failed to create temp directory", e);
    }
  }

  public static void createDirectories(Path path) {
    try {
      java.nio.file.Files.createDirectories(path);
    } catch (IOException e) {
      throw new RuntimeException("Failed to create directories", e);
    }
  }

  public static FileTime getLastModifiedTime(Path path) {
    try {
      return java.nio.file.Files.getLastModifiedTime(path);
    } catch (IOException e) {
      throw new RuntimeException("Failed to get last modified time", e);
    }
  }

  public static void writeString(Path path, CharSequence out) {
    try {
      java.nio.file.Files.writeString(path, out);
    } catch (IOException e) {
      throw new RuntimeException("Failed to write string to " + path, e);
    }
  }

  public static String readString(Path path) {
    try {
      return java.nio.file.Files.readString(path);
    } catch (IOException e) {
      throw new RuntimeException("Failed to read string from " + path, e);
    }
  }

  @CanIgnoreReturnValue
  public static boolean deleteIfExists(Path path) {
    try {
      return java.nio.file.Files.deleteIfExists(path);
    } catch (IOException e) {
      throw new RuntimeException("Failed to delete " + path, e);
    }
  }

  public static boolean exists(Path path) {
    return java.nio.file.Files.exists(path);
  }

  public static boolean isDirectory(Path path) {
    return java.nio.file.Files.isDirectory(path);
  }

  public static boolean isRegularFile(Path path) {
    return java.nio.file.Files.isRegularFile(path);
  }

  // endregion

  private Files() {}
}
