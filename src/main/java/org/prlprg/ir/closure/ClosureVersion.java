package org.prlprg.ir.closure;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.EnumSet;
import java.util.List;
import org.prlprg.ir.cfg.CFG;

/** A closure version. */
public class ClosureVersion {
  /** Parent closure which contains this version. */
  private final Closure closure;

  /** Is this the baseline (unoptimized) version? */
  private final boolean isBaseline;

  /**
   * Properties required in an environment for the closure version to be selected (precondition).
   */
  private final OptimizationContext optimizationContext;

  /**
   * Properties of the closure version's code that can be used for (or prevent) other optimizations
   * (postcondition).
   */
  private final Properties properties;

  private final CFG body;
  private final List<Promise> promises;

  public ClosureVersion(
      Closure closure,
      boolean isBaseline,
      OptimizationContext optimizationContext,
      Properties properties,
      CFG body,
      Collection<Promise> promises) {
    // TODO: Change constructor, make package-private so we must call Closure#declareVersion.
    this.closure = closure;
    this.isBaseline = isBaseline;
    this.optimizationContext = optimizationContext;
    this.properties = properties;
    this.body = body;
    this.promises = new ArrayList<>(promises);
  }

  /** Parent closure which contains this version. */
  public Closure closure() {
    return closure;
  }

  /** Properties required in an environment for a closure version to be selected (precondition). */
  public record OptimizationContext(
      EnumSet<Assumption> flags,
      ImmutableList<EnumSet<TypeAssumption>> argumentFlags,
      int missing) {
    public OptimizationContext {
      if (missing < 0) {
        throw new IllegalArgumentException("Missing arguments must be non-negative");
      }
      if (argumentFlags.stream()
          .anyMatch(
              f ->
                  f.contains(TypeAssumption.IS_SIMPLE_INT)
                      && f.contains(TypeAssumption.IS_SIMPLE_REAL))) {
        throw new IllegalArgumentException("Argument can't be both simple int and simple real");
      }
      if (argumentFlags.stream()
          .anyMatch(
              f ->
                  (f.contains(TypeAssumption.IS_SIMPLE_INT)
                          || f.contains(TypeAssumption.IS_SIMPLE_REAL))
                      && !f.contains(TypeAssumption.IS_NOT_OBJECT))) {
        throw new IllegalArgumentException("Argument can't be both simple scalar and object");
      }
    }

    public boolean requires(Assumption assumption) {
      return flags.contains(assumption);
    }

    public boolean requires(int argument, TypeAssumption assumption) {
      return argumentFlags.get(argument).contains(assumption);
    }
  }

  /**
   * Properties of the closure version's code that must be considered for other optimizations
   * (postcondition).
   */
  public record Properties(EnumSet<Property> flags, ImmutableList<Integer> argumentForceOrder) {
    public Properties {
      if (argumentForceOrder.stream().anyMatch(i -> i < 0)) {
        throw new IllegalArgumentException("Argument force order indices must be non-negative");
      }
      if (argumentForceOrder.stream().anyMatch(i -> i >= argumentForceOrder.size())) {
        throw new IllegalArgumentException(
            "Argument force order indices can't be larger than the length of the argument list");
      }
    }
  }

  /**
   * Flag in {@link OptimizationContext} (property required in an environment for a closure version
   * to be selected).
   */
  public enum Assumption {
    /**
     * Explicitly missing is e.g. {@code f(,,)} ({@code f} is given 3 explicitly missing arguments).
     */
    NO_EXPLICITLY_MISSING_ARGUMENTS,
    /** i.e. the args are not named (? unless they're in the same order without any gaps ?). */
    CORRECT_ORDER_OF_ARGUMENTS,
    /** The number of args supplied is less than or equal to {@link Closure#numArgs}. */
    NOT_TOO_MANY_ARGUMENTS,
    /**
     * Arguments are statically matched.
     *
     * <p>TODO clarify this. It's very similar to CORRECT_ORDER_OF_ARGUMENTS, but neither seems to
     * imply the other.
     */
    STATICALLY_ARGMATCHED
  }

  /** Flag in {@link OptimizationContext} for a particular argument. */
  public enum TypeAssumption {
    /** Argument isn't lazy. */
    IS_EAGER,
    /** Argument isn't reflective (? promise doesn't perform reflection ?). */
    IS_NON_REFLECTIVE,
    /** Argument isn't an object. */
    IS_NOT_OBJECT,
    /** Argument is a simple int: int scalar with no attributes or altrep. */
    IS_SIMPLE_INT,
    /** Argument is a simple real: double scalar with no attributes or altrep. */
    IS_SIMPLE_REAL
  }

  /** Flag in {@link Properties} (flag which must be considered for other optimizations). */
  public enum Property {
    /** Closure evaluates all of its arguments. */
    IS_EAGER,
    /** Closure doesn't perform reflection in an outside environment. */
    NO_REFLECTION
  }
}
