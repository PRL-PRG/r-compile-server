package org.prlprg.fir.ir.expression;

import com.google.common.collect.ImmutableList;
import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;

/// Create a vector (or `...`/dots). The owning statement's arguments are the elements, in order,
/// and [#elementNames] is the parallel list of their (optional) names.
public record MkVector(Kind kind, ImmutableList<OptionalNamedVariable> elementNames)
    implements Expression {
  public MkVector(Kind kind, List<@Nullable NamedVariable> elementNames) {
    this(
        kind,
        elementNames.stream()
            .map(OptionalNamedVariable::ofNullable)
            .collect(ImmutableList.toImmutableList()));
  }
}
