package org.prlprg.fir.ir.expression;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Create a vector (or `...`/dots). The owning statement's arguments are the elements, in order,
/// and [#elementNames] is the parallel list of their (optional) names.
public record MkVector(Kind kind, @Unmodifiable List<@Nullable NamedVariable> elementNames)
    implements Expression {
  public MkVector {
    // Defensive, null-permitting unmodifiable copy (ImmutableList disallows nulls).
    elementNames = Collections.unmodifiableList(new ArrayList<>(elementNames));
  }
}
