package org.prlprg.fir.opt.egraph.data;

import com.google.common.collect.ImmutableList;

/// Reconstructed expression produced by [AEGraph#extract].
public record Term<Op>(Op op, ImmutableList<Term<Op>> args) {
  @Override
  public String toString() {
    if (args.isEmpty()) {
      return op.toString();
    }
    var sb = new StringBuilder(op.toString()).append('(');
    for (int i = 0; i < args.size(); i++) {
      if (i > 0) {
        sb.append(", ");
      }
      sb.append(args.get(i));
    }
    return sb.append(')').toString();
  }
}
