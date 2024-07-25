package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.Optional;
import org.checkerframework.checker.index.qual.SameLen;
import org.prlprg.sexp.SEXPs;

/**
 * The list of {@link Node}s representing arguments to a call, and whether we statically know their
 * order.
 */
public sealed interface CallArguments {
  /**
   * Create {@link CallArguments} from arguments without names.
   *
   * <p>The order is known iff there's no dots argument.
   */
  static CallArguments withoutNames(ImmutableList<Node<?>> args) {
    return args.contains(Constant.DOTS) ? new KnownOrder(args) : new KnownOrderExceptDots(args);
  }

  /**
   * Arguments have a known order, so we don't provide names.
   *
   * @param args Arguments in order i.e. their indices directly map to the indices of the function's
   *     parameters. Note that there may be less or more arguments than the function's parameters
   *     (less arguments = {@linkplain SEXPs#MISSING_ARG missings} are implicitly inserted, more =
   *     error).
   */
  record KnownOrder(ImmutableList<Node<?>> args) implements CallArguments {
    public KnownOrder {
      if (args.contains(Constant.DOTS)) {
        throw new IllegalArgumentException(
            "We don't know the order because one of the arguments is `...`, use `KnownOrderExceptDots` instead");
      }
    }
  }

  /** Arguments would have a known order except contain the dots argument. */
  record KnownOrderExceptDots(ImmutableList<Node<?>> args) implements CallArguments {
    public KnownOrderExceptDots {
      if (!args.contains(Constant.DOTS)) {
        throw new IllegalArgumentException(
            "None of the arguments are `...`, use `KnownOrder` instead");
      }
    }
  }

  /**
   * Some arguments have explicit names and we don't know the parameter names, so we don't know the
   * order.
   *
   * @param names Names, each corresponding to an argument, that determine the order.
   * @param args Arguments <i>not</i> in order, i.e. their indices don't directly map to those of
   *     the function's parameters.
   */
  record UnknownOrder(
      ImmutableList<Optional<String>> names, @SameLen("names") ImmutableList<Node<?>> args)
      implements CallArguments {}
}
