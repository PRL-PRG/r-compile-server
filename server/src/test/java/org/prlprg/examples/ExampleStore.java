package org.prlprg.examples;

import com.google.common.collect.ImmutableList;
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
  private final ImmutableList<Example> examples;

  public ExampleStore(String subDirAndExtension) {
    var root = Paths.getResource(getClass(), subDirAndExtension);
    examples = Files.listDir(root, "*." + subDirAndExtension, Integer.MAX_VALUE, false, true).stream()
        .map(relative -> {
          // Keep extension, because FIŘ examples come from R and FIŘ files.
          var name = relative.getFileName().toString();

          var path = root.resolve(relative);
          try {
            return Parser.fromFile(path.toFile(), Example.class, new Example.ParseContext(name));
          } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
          }
        })
        .collect(ImmutableList.toImmutableList());
  }

  public ImmutableList<Example> examples() {
    return examples;
  }
}
