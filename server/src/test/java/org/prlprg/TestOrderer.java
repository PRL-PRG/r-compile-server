package org.prlprg;

import java.util.Comparator;
import java.util.List;
import org.junit.jupiter.api.ClassOrderer;
import org.junit.jupiter.api.ClassOrdererContext;
import org.prlprg.util.Files;
import org.prlprg.util.Paths;

public class TestOrderer implements ClassOrderer {
  private static final List<String> ORDERED_SNAPSHOT_CLASSES =
      Files.readString(Paths.getResource(TestOrderer.class, "snapshot/order.txt")).lines().toList();

  @Override
  public void orderClasses(ClassOrdererContext context) {
    context
        .getClassDescriptors()
        .sort(Comparator.comparing(d -> ORDERED_SNAPSHOT_CLASSES.indexOf(d.getDisplayName())));
  }
}
