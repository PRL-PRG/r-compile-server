package org.prlprg.fir.ir.cfg.iterator;

import java.util.Iterator;
import org.prlprg.fir.ir.cfg.BB;

/// Abstract iterator over a [CFG](org.prlprg.fir.ir.cfg.CFG)'s basic blocks.
///
/// It supports [Iterator#remove()]. It supports concurrent modification, and only queues elements
/// when [#next()] or [#remove()] is called.
public interface BBIterator extends Iterator<BB> {
  /// Don't iterate successors (or predecessors if this is reverse) of the previously-yielded
  /// block.
  ///
  /// Can't call [#remove()] after this until after [#next()]
  void prune();
}
