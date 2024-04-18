package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableMap;
import java.util.stream.Stream;

public class Nodes {
  /** All shared static nodes, associated to their name. */
  public static final ImmutableMap<String, Node> GLOBALS =
      Stream.of(Envs.GLOBAL, Envs.NOT_CLOSED, Envs.ELIDED)
          .collect(ImmutableMap.toImmutableMap(n -> n.id().name(), n -> n));

  private Nodes() {}
}
