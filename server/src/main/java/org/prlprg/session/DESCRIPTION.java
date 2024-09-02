package org.prlprg.session;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/** DESCRIPTION file parser. */
public class DESCRIPTION {
  private String version;
  private final HashMap<String, String> suggests;
  private final HashMap<String, String> imports;

  private static final Pattern versionPattern = Pattern.compile("^Version:\\s*(.*)$");
  private static final Pattern suggestsPattern = Pattern.compile("^Suggests:\\s*(.*)$");
  private static final Pattern importsPattern = Pattern.compile("^Imports:\\s*(.*)$");
  private static final Pattern versionRequirementPattern =
      Pattern.compile("([a-zA-Z0-9]+)\\s*\\((>=|=|>|<=|<)\\s*([0-9\\.]+)\\)");

  public DESCRIPTION(Path descriptionFile) throws IOException {
    this.suggests = new HashMap<>();
    this.imports = new HashMap<>();
    parseDescriptionFile(descriptionFile);
  }

  /**
   * Parses the DESCRIPTION file.
   *
   * @param descriptionFile the path to the DESCRIPTION file
   * @throws IOException if an I/O error occurs
   */
  private void parseDescriptionFile(Path descriptionFile) throws IOException {
    List<String> lines = Files.readAllLines(descriptionFile);

    for (String line : lines) {
      Matcher versionMatcher = versionPattern.matcher(line);
      Matcher suggestsMatcher = suggestsPattern.matcher(line);
      Matcher importsMatcher = importsPattern.matcher(line);

      if (versionMatcher.find()) {
        this.version = versionMatcher.group(1).trim();
      } else if (suggestsMatcher.find()) {
        parsePackages(suggestsMatcher.group(1).trim(), this.suggests);
      } else if (importsMatcher.find()) {
        parsePackages(importsMatcher.group(1).trim(), this.imports);
      }
    }
  }

  /**
   * Parses a comma-separated list of packages with version requirements.
   *
   * @param packages the comma-separated list of packages
   * @param map the map to add the packages and their version requirements to
   */
  private void parsePackages(String packages, HashMap<String, String> map) {
    String[] packageArray = packages.split(",");
    for (String pkg : packageArray) {
      Matcher matcher = versionRequirementPattern.matcher(pkg.trim());
      if (matcher.find()) {
        map.put(matcher.group(1).trim(), matcher.group(2).trim() + " " + matcher.group(3).trim());
      } else {
        map.put(pkg.trim(), "");
      }
    }
  }

  /**
   * Returns the version of the package.
   *
   * @return the version of the package
   */
  public String getVersion() {
    return version;
  }

  /**
   * Returns the list of suggested packages.
   *
   * @return the list of suggested packages
   */
  public HashMap<String, String> getSuggests() {
    return suggests;
  }

  /**
   * Returns the list of imported packages.
   *
   * @return the list of imported packages
   */
  public HashMap<String, String> getImports() {
    return imports;
  }
}
