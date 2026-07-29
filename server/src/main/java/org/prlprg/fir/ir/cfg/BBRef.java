package org.prlprg.fir.ir.cfg;

import org.jspecify.annotations.Nullable;
import org.prlprg.util.ForwardRef;

/// A reference to a [BB], which may not be resolved yet (a jump can target a block that appears
/// later in the text).
public final class BBRef extends ForwardRef<BB> {
  public BBRef() {
    super();
  }

  public BBRef(@Nullable BB bb) {
    super(bb);
  }

  @Override
  public String toString() {
    return this.get().toString();
  }
}
