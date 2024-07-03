package org.prlprg;

import javax.annotation.Nullable;

/**
 * Major.Minor.Patch version number with an optional suffix for things like "Beta" and "RC".
 *
 * <p>This class needs to support whatever format GNU-R versions can have. But it's not a GNU-R
 * specific
 */
public record RVersion(int major, int minor, int patch, @Nullable String suffix) {
  /** The latest version we handle. */
  public static final RVersion LATEST_AWARE = new RVersion(4, 3, 2);

  /**
   * Parse a version number from a string.
   *
   * @throws IllegalArgumentException if the string is not a valid version number.
   */
  public static RVersion parse(String textual) {
    var parts = textual.split("\\.");

    int major;
    int minor;
    int patch;
    try {
      major = Integer.parseInt(parts[0]);
      minor = Integer.parseInt(parts[1]);
      patch = Integer.parseInt(parts[2]);
    } catch (ArrayIndexOutOfBoundsException e) {
      throw new IllegalArgumentException("Invalid version number: " + textual, e);
    }

    String suffix;
    if (parts.length > 3) {
      if (parts[3].startsWith("-")) {
        suffix = parts[3].substring(1);
      } else {
        throw new IllegalArgumentException(
            "Invalid version number: " + textual + " (suffix must start with '-')");
      }
    } else {
      suffix = null;
    }

    return new RVersion(major, minor, patch, suffix);
  }

  RVersion(int major, int minor, int patch) {
    this(major, minor, patch, null);
  }

  /**
   * Encode the version as an integer.
   *
   * <p>It is used for the RDS serialization for instance.
   */
  public int encode() {
    return patch + 256 * minor + 65536 * major;
  }

  @Override
  public String toString() {
    return major + "." + minor + "." + patch + (suffix == null ? "" : "-" + suffix);
  }
}
