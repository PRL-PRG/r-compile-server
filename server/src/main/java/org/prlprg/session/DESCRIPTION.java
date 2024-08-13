
package org.prlprg.session;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/** DESCRIPTION file parser. */
public class DESCRIPTION {
    private String version;
    private final List<String> suggests;
    private final List<String> imports;

    public DESCRIPTION(Path descriptionFile) throws IOException {
        this.suggests = new ArrayList<>();
        this.imports = new ArrayList<>();
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
        Pattern versionPattern = Pattern.compile("^Version:\\s*(.*)$");
        Pattern suggestsPattern = Pattern.compile("^Suggests:\\s*(.*)$");
        Pattern importsPattern = Pattern.compile("^Imports:\\s*(.*)$");

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
     * Parses a comma-separated list of packages.
     *
     * @param packages the comma-separated list of packages
     * @param list the list to add the packages to
     */
    private void parsePackages(String packages, List<String> list) {
        String[] packageArray = packages.split(",");
        for (String pkg : packageArray) {
            list.add(pkg.trim());
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
    public List<String> getSuggests() {
        return suggests;
    }

    /**
     * Returns the list of imported packages.
     *
     * @return the list of imported packages
     */
    public List<String> getImports() {
        return imports;
    }
}
