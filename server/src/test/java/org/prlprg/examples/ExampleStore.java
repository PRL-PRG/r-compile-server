package org.prlprg.examples;

import static org.prlprg.TestConfig.EXAMPLE_FILTER;

import com.google.common.collect.ImmutableList;
import java.io.FileNotFoundException;
import java.util.stream.Stream;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

/// Lazy static store of [Example]s and associated data.
sealed class ExampleStore permits RExampleStore, FirExampleStore {
  static Stream<Example> listDir(String type) {
    var root = Paths.getResource(ExampleStore.class, type);
    return Files.listDir(root, "*." + type, Integer.MAX_VALUE, false, true).stream()
        .filter(rpath -> EXAMPLE_FILTER.matcher(rpath.getFileName().toString()).matches())
        .map(
            rpath -> {
              var path = root.resolve(rpath);
              try {
                return Parser.fromFile(
                    path.toFile(), Example.class, new Example.ParseContext(rpath));
              } catch (ParseException e) {
                throw new AssertionError("Malformed options in example: " + rpath, e);
              } catch (FileNotFoundException e) {
                throw new RuntimeException(e);
              }
            });
  }

  private final ImmutableList<Example> examples;

  ExampleStore(Stream<Example> examples) {
    this.examples = examples.collect(ImmutableList.toImmutableList());
  }

  public ImmutableList<Example> examples() {
    return examples;
  }
}
