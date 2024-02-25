package org.prlprg.ir;

import com.google.common.collect.ForwardingList;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import javax.annotation.Nullable;
import org.prlprg.util.SmallSet;

/**
 * IR (intermediate representation) <a
 * href="https://en.wikipedia.org/wiki/Basic_block">basic-block</a> (straight-line sequence of
 * {@link Node}s).
 */
public class BB extends ForwardingList<Instr> {
  private final CFG parent;
  private final List<Instr> instrs = new ArrayList<>();
  private Set<BB> predecessors = new SmallSet<>(4);
  private @Nullable Jump jump = null;

  BB(CFG parent) {
    this.parent = parent;
  }

  /** CFG containing this block. */
  public CFG cfg() {
    return parent;
  }

  // TODO: Ensure other forwarded methods are correct, probably need to override some of them.
  @Override
  protected List<Instr> delegate() {
    return instrs;
  }
}
