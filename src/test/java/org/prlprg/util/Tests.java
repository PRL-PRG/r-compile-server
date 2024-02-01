package org.prlprg.util;

import java.io.InputStream;
import java.util.Objects;

public interface Tests {
  default InputStream getResourceAsStream(String path) {
    return Objects.requireNonNull(
        getClass().getResourceAsStream(path),
        "Resource not found in " + getClass().getPackageName() + ": " + path);
  }
}
