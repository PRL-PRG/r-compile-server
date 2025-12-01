package org.prlprg.examples;

import com.google.common.collect.ImmutableMap;
import java.io.FileNotFoundException;
import java.nio.file.Path;
import org.junit.jupiter.params.provider.Arguments;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;
import org.prlprg.util.Streams;

/// Lazy static store of [Example]s.
public class ExampleStore {
  private final ImmutableMap<String, Example> examples;

  public ExampleStore(Path root, String extension) {
    examples = Files.listDir(root, "*." + extension, Integer.MAX_VALUE, false, true).stream()
        .map(relative -> {
          var name = Paths.getFileStem(relative);
          var path = root.resolve(relative);
          try {
            return Parser.fromFile(path.toFile(), Example.class, new Example.ParseContext(name));
          } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
          }
        })
        .collect(Streams.toImmutableMap(Example::name, e -> e));
  }

  public ImmutableMap<String, Example> examples() {
    return examples;
  }
}
