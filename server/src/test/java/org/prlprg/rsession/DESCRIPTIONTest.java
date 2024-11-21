package org.prlprg.rsession;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Map;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import org.prlprg.session.DESCRIPTION;

public class DESCRIPTIONTest {

  @TempDir Path tempDir;

  @Test
  public void testDescriptionParsing() throws IOException {
    // Create a temporary DESCRIPTION file
    Path descriptionFile = tempDir.resolve("DESCRIPTION");
    Files.writeString(
        descriptionFile,
        "Package: testpkg\nVersion: 1.2.3\nSuggests: pkgA (>= 1.0.0), pkgB\nImports: pkgC, pkgD (>= 2.0.0)\n");

    // Parse the DESCRIPTION file
    DESCRIPTION description = new DESCRIPTION(descriptionFile);

    // Assert the parsed values
    Assertions.assertEquals("1.2.3", description.getVersion());
    Assertions.assertEquals(Map.of("pkgA", ">= 1.0.0", "pkgB", ""), description.getSuggests());
    Assertions.assertEquals(Map.of("pkgC", "", "pkgD", ">= 2.0.0"), description.getImports());
  }

  @Test
  public void testEmptySuggestsAndImports() throws IOException {
    // Create a temporary DESCRIPTION file
    Path descriptionFile = tempDir.resolve("DESCRIPTION");
    Files.writeString(descriptionFile, "Package: testpkg\nVersion: 1.2.3\n");

    // Parse the DESCRIPTION file
    DESCRIPTION description = new DESCRIPTION(descriptionFile);

    // Assert the parsed values
    Assertions.assertEquals("1.2.3", description.getVersion());
    Assertions.assertTrue(description.getSuggests().isEmpty());
    Assertions.assertTrue(description.getImports().isEmpty());
  }

  @Test
  public void testNoVersion() throws IOException {
    // Create a temporary DESCRIPTION file
    Path descriptionFile = tempDir.resolve("DESCRIPTION");
    Files.writeString(
        descriptionFile,
        "Package: testpkg\nSuggests: pkgA (>= 1.0.0), pkgB\nImports: pkgC, pkgD (>= 2.0.0)\n");

    // Parse the DESCRIPTION file
    DESCRIPTION description = new DESCRIPTION(descriptionFile);

    // Assert the parsed values
    Assertions.assertNull(description.getVersion());
    Assertions.assertEquals(Map.of("pkgA", ">= 1.0.0", "pkgB", ""), description.getSuggests());
    Assertions.assertEquals(Map.of("pkgC", "", "pkgD", ">= 2.0.0"), description.getImports());
  }

  @Test
  public void testMalformedDescription() throws IOException {
    // Create a temporary DESCRIPTION file
    Path descriptionFile = tempDir.resolve("DESCRIPTION");
    Files.writeString(
        descriptionFile,
        "Package: testpkg\nVersion: 1.2.3\nSuggests pkgA (>= 1.0.0), pkgB\nImports: pkgC, pkgD (>= 2.0.0)\n");

    // Parse the DESCRIPTION file
    DESCRIPTION description = new DESCRIPTION(descriptionFile);

    // Assert the parsed values
    Assertions.assertEquals("1.2.3", description.getVersion());
    Assertions.assertTrue(description.getSuggests().isEmpty());
    Assertions.assertEquals(Map.of("pkgC", "", "pkgD", ">= 2.0.0"), description.getImports());
  }
}
