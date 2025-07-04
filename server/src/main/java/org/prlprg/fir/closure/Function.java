package org.prlprg.fir.closure;

import com.google.common.collect.ImmutableList;

public record Function(String name, ImmutableList<Abstraction> versions) {
  // TODO: toString
}
