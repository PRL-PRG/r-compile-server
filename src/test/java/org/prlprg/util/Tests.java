package org.prlprg.util;

import com.google.common.io.Resources;

import java.io.InputStream;
import java.util.Objects;
import java.util.stream.Collectors;

public interface Tests {
    default InputStream getResourceAsStream(String path) {
        return Objects.requireNonNull(getClass().getResourceAsStream(path), "Resource not found in " + getClass().getPackageName() + ": " + path);
    }
}
