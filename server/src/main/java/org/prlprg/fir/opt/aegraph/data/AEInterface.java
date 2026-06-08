package org.prlprg.fir.opt.aegraph.data;

import java.util.Comparator;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;

/// Provides interface/adapter methods for [AEGraph]'s parameters
///
/// Encapsulation and moving implementation we don't need, but it only adds a small amount of
/// complexity, for arguably better readability
public interface AEInterface<Expr, Arg> {
  /// Comparator for `Arg`
  Comparator<Arg> argumentComparator();

  /// Create a fresh ID
  Arg freshRegister();

  /// Arguments of `expression`
  @UnmodifiableView
  List<Arg> arguments(Expr expression);

  /// Transform arguments of `expression`
  Expr mapArguments(Expr expression, Function<Arg, Arg> transform);
}
