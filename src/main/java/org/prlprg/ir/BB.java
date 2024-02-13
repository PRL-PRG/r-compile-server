package org.prlprg.ir;

import com.google.common.collect.ForwardingList;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.util.SmallSet;

/**
 * Intermediate representation <a href="https://en.wikipedia.org/wiki/Basic_block">basic-block</a>
 * (straight-line sequence of {@link Node}s).
 *
 * <p>The generic parameter lets you restrict the type of nodes in this block. {@link CFG#castNodes}
 * will enforce that all nodes conform to a particular type and then return the same block with a
 * different generic. See the {@link org.prlprg.ir} package documentation for more details.
 */
public class BB<N extends Node> extends ForwardingList<Instr> {
  private final CFG<N> parent;
  private final List<Instr> instrs = new ArrayList<>();
  private @Nullable BB<N> predecessor;
  private final Set<BB<N>> successors = new SmallSet<>(2);

  BB(CFG<N> parent) {
    this.parent = parent;
  }

  /** CFG containing this block. */
  public CFG<N> cfg() {
    return parent;
  }

  // TODO: Ensure other forwarded methods are correct, probably need to override some of them.
  @Override
  protected List<Instr> delegate() {
    return instrs;
  }
}
