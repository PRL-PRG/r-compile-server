package org.prlprg.ir.analysis.scope;

import com.google.common.collect.ImmutableSet;
import java.util.HashMap;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.Optional;
import java.util.Set;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.ISexp;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.RegSymSXP;

/**
 * An abstract tree of environments that can perform variable lookup in abstract interpretation.
 *
 * <p>Specifically, it maps concrete environments ({@link ISexp}s) to abstract environments {@link
 * AbstractEnv}, and the abstract environments have parents ({@link AbstractEnv#parentEnv()}).
 */
public final class AbstractEnvHierarchy implements AbstractNode<AbstractEnvHierarchy> {
  private final Map<ISexp, AbstractEnv> envs = new HashMap<>();

  /** Creates an empty abstract environment hierarchy (no mapped environments). */
  public AbstractEnvHierarchy() {}

  /** Returns {@code true} iff every environment in the hierarchy is {@link AbstractEnv#UNKNOWN}. */
  public boolean areAllUnknown() {
    return envs.values().stream().allMatch(AbstractEnv::isUnknown);
  }

  /**
   * Returns {@code true} iff the given concrete environment is mapped to an abstract environment.
   *
   * <p>This returns {@code true} even if the mapped environment is unknown. It's required before
   * calling {@link #at(ISexp)} if you don't know whether the environment is mapped.
   */
  public boolean contains(@IsEnv ISexp env) {
    return envs.containsKey(env);
  }

  /**
   * Returns the abstract environment for the given concrete environment.
   *
   * @throws NoSuchElementException If the concrete environment isn't mapped.
   */
  public AbstractEnv at(@IsEnv ISexp env) {
    var result = envs.get(env);
    if (result == null) {
      throw new NoSuchElementException("Environment not in hierarchy: " + env);
    }
    return result;
  }

  /** Returns all concrete environments that could be parents of the given concrete environment. */
  public @UnmodifiableView Set<ISexp> potentialParents(@IsEnv ISexp env) {
    var result = ImmutableSet.<ISexp>builder();

    var hasBaseParent = false;
    while (envs.containsKey(env)) {
      result.add(env);

      if (env == StaticEnv.BASE) {
        hasBaseParent = true;
        break;
      }

      var knownParent = at(env).parentEnv();
      var auxParent =
          Optional.ofNullable(env.envAux())
              .flatMap(e -> Optional.ofNullable(e.parent()))
              .orElse(null);
      env =
          knownParent == AbstractEnv.UNKNOWN_PARENT && auxParent != null ? auxParent : knownParent;
    }

    // We did not reach the outermost environment of the current closure. Therefore, we have no clue
    // which envs are the actual parents. The conservative choice is to return all candidates.
    if (!hasBaseParent) {
      result.addAll(envs.keySet());
    }

    return result.build();
  }

  /** Do a regular variable lookup. */
  public AbstractLoad lookup(@IsEnv ISexp env, RegSymSXP name) {
    // If unbound, we fall through. If maybe unbound, we "maybe fallthrough" (return tainted because
    // we can't be exact enough).
    return lookupGeneric(env, name, false, res -> res.isUnboundValue().negate());
  }

  /** Lookup, but skip the innermost environment (e.g. rebind super-assignment). */
  public AbstractLoad lookupSuper(@IsEnv ISexp env, RegSymSXP name) {
    // The `test` argument is the same as that in `lookup`
    return lookupGeneric(env, name, true, res -> res.isUnboundValue().negate());
  }

  /**
   * Do a function lookup; when a symbol is called, R ignores non-function variables.
   *
   * <p>e.g.
   *
   * <pre>
   *   a <- 1
   *   b <- 2
   *   c <- 3
   *   res <- c(a, b, c)
   * </pre>
   *
   * R semantics means {@code c} being called doesn't refer to the variable {@code c}, even though
   * it has the same name, because the {@code c} being called is being called and the variable
   * {@code c} is not a function.
   */
  public AbstractLoad lookupFun(@IsEnv ISexp env, RegSymSXP name) {
    return lookupGeneric(
        env,
        name,
        false,
        res -> {
          if (res.type().isFunction() == Maybe.YES) {
            // If it is a function, we know it will be looked up.
            return Maybe.YES;
          } else if (res.type().isFunction() == Maybe.MAYBE
              || res.isUnboundValue() == Maybe.MAYBE) {
            // If it might be a function, we can neither be sure, nor exclude this binding
            // (and if it might be unbound, it might be a function although its type won't say).
            return Maybe.MAYBE;
          } else {
            // If it's not a function, we know it will be skipped.
            return Maybe.NO;
          }
        });
  }

  /** Private method for shared code in all {@code lookup...} functions. */
  private AbstractLoad lookupGeneric(
      ISexp env, RegSymSXP name, boolean skipInnermost, Function<AbstractISexp, Maybe> test) {
    // First, do a regular lookup from innermost to outermost.
    // Except we're dealing with abstract values, so there are cases where a value "may" be present.
    // In these cases, we have to return the union of what we'd return if the value was present and
    // what we'd return if not, which in our domain loses precision to become "unknown environment"
    // and "unknown (tainted) value".
    while (env != AbstractEnv.UNKNOWN_PARENT) {
      var aEnv = envs.get(env);
      if (aEnv == null) {
        // We have no idea what this env contains, so we definitely don't know if lookup succeeds or
        // what it finds.
        return new AbstractLoad(AbstractEnv.UNKNOWN_PARENT, AbstractISexp.UNKNOWN);
      }

      if (skipInnermost) {
        skipInnermost = false;
      } else {
        // TODO: If we can assume that the enclosing environments are stable,
        // then we could just do the lookup here.
        if (aEnv.isPresent(name)) {
          var lookupCandidate = aEnv.get(name);
          var isCandidateLookedUp = test.apply(lookupCandidate);

          if (isCandidateLookedUp == Maybe.YES) {
            // This is the result of the lookup, and env it was found.
            return new AbstractLoad(env, lookupCandidate);
          } else if (isCandidateLookedUp == Maybe.MAYBE) {
            // This *may* be the result of the lookup, and env it was found
            // Unfortunately, that means we don't know the real env or result,
            // and don't have enough precision to represent anything except "unknown".
            return new AbstractLoad(AbstractEnv.UNKNOWN_PARENT, AbstractISexp.UNKNOWN);
          }
          // else, this env didn't find a real candidate, so we fall through.
        }

        if (env instanceof StaticEnv /* && env != StaticEnv.EMPTY, if we add `StaticEnv.EMPTY` */) {
          // In the case of existing R envs we only have a partial view (i.e. we
          // don't see all stores happening before entering the current function,
          // therefore we cannot practically exclude the existence of a binding
          // in those environments).
          return new AbstractLoad(AbstractEnv.UNKNOWN_PARENT, AbstractISexp.UNKNOWN);
        }
      }

      // The binding wasn't in the current environment, so look in its parent.
      // If the analysis does not know what the parent env is (`knownParent`),
      // but the env has a concrete parent (`auxParent`), we use that instead.
      var auxParent = env.envAux() == null ? null : Objects.requireNonNull(env.envAux()).parent();
      var knownParent = aEnv.parentEnv();
      env =
          knownParent == AbstractEnv.UNKNOWN_PARENT && auxParent != null ? auxParent : knownParent;
    }

    return new AbstractLoad(AbstractEnv.UNKNOWN_PARENT, AbstractISexp.UNKNOWN);
  }

  /**
   * Mark {@code to} as "reachable" from {@code from}.
   *
   * <p>Specifically, if {@code from} is leaked or eventually leaks, {@code to} also leaks, and if
   * {@code to} is unknown or static, {@code from} leaks. I don't know the significance of
   * "dependency" here.
   */
  public void addDependency(@IsEnv ISexp from, @IsEnv ISexp to) {
    if (from.equals(to)) {
      return;
    }

    if (to == AbstractEnv.UNKNOWN_PARENT || to instanceof StaticEnv
    /* && env != StaticEnv.EMPTY, if we add `StaticEnv.EMPTY` */ ) {
      leak(from);
      return;
    }

    var afrom = at(from);
    if (afrom.isLeaked()) {
      leak(to);
    }
    afrom.addReachableEnv(to);
  }

  /**
   * Mark the abstract environment mapped to the concrete environment (and dependencies) as leaked.
   */
  public void leak(@IsEnv ISexp env) {
    var e = at(env);

    if (e.isLeaked()) {
      return;
    }

    e.leak();
    for (var r : e.reachableEnvs()) {
      at(r).leak();
    }
  }

  /**
   * Taint every leaked environment (or environment mapped to the global concrete environment?).
   *
   * <p>Returns {@link AbstractResult#TAINTED} if we had to taint an environment (otherwise {@link
   * AbstractResult#NONE}.
   */
  public AbstractResult taintLeaked() {
    var res = AbstractResult.NONE;
    for (var e : envs.entrySet()) {
      var load = e.getKey();
      var env = e.getValue();

      if ((env.isLeaked() || load == StaticEnv.GLOBAL) && !env.isUnknown()) {
        e.setValue(AbstractEnv.UNKNOWN);
        res = AbstractResult.TAINTED;
      }
    }

    return res;
  }

  @Override
  public AbstractResult merge(AbstractEnvHierarchy other) {
    var res = AbstractResult.NONE;

    for (var e : other.envs.entrySet()) {
      var load = e.getKey();
      var otherEnv = e.getValue();
      var myEnv = envs.get(load);

      // Env only known on one branch -> merge with empty environment
      // (not a no-op because it makes values maybe unbound).
      if (myEnv == null) {
        myEnv = otherEnv.copy();
        res = res.union(myEnv.merge(new AbstractEnv()));
        // `UPDATED` is because we add to `envs`.
        envs.put(load, myEnv);
        res = res.union(AbstractResult.UPDATED);
      } else {
        res = res.union(myEnv.merge(otherEnv));
      }
    }

    return res;
  }

  @Override
  public AbstractEnvHierarchy copy() {
    var result = new AbstractEnvHierarchy();
    for (var e : envs.entrySet()) {
      result.envs.put(e.getKey(), e.getValue().copy());
    }
    return result;
  }

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("AEnvHierarchy(");
    w.runIndented(
        () -> {
          var written = false;

          for (var e : envs.entrySet()) {
            if (!written) {
              w.write(',');
              written = true;
            }

            w.write('\n');
            p.print(e.getKey());
            w.write(" -> ");
            p.print(e.getValue());
          }
        });
    w.write(')');
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
