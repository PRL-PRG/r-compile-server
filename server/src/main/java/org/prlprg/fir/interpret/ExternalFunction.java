package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.TaggedElem;

/// Function that executes Java code which can be called from the interpreter.
///
/// For example, a reimplementation of an R builtin.
///
/// This works by "hijacking" a [Function]; when the function is called and none of its FIŘ
/// overloads match, instead of a crashing, the interpreter runs this code.
///
/// Add to a runtime with [Interpreter#registerExternalFunction(String, ExternalFunction)].
@FunctionalInterface
public interface ExternalFunction {
  /// Forces all arguments, then calls `inner`.
  static ExternalFunction strict(ExternalFunction inner) {
    return (runtime, hijacked, arguments, environment) -> {
      var forcedArgs =
          SEXPs.list(
              arguments.stream()
                  .map(
                      argument ->
                          new TaggedElem(
                              argument.tag(),
                              argument.value() instanceof PromSXP promSxp
                                  ? runtime.force(promSxp)
                                  : argument.value()))
                  .collect(ImmutableList.toImmutableList()));
      return inner.call(runtime, hijacked, forcedArgs, environment);
    };
  }

  SEXP call(Interpreter runtime, Function hijacked, ListSXP arguments, EnvSXP environment);
}
