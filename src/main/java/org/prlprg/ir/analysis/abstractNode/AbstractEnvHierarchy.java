package org.prlprg.ir.analysis.abstractNode;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.Optional;
import java.util.function.Function;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData.LdEnclosEnv;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.util.Pair;

public sealed interface AbstractEnvHierarchy extends AbstractNode<AbstractEnvHierarchy> {
  AbstractEnvHierarchy EMPTY = new AbstractEnvHierarchyImpl(ImmutableMap.of(), ImmutableMap.of());

  ImmutableMap<RValue, RValue> aliases();

  boolean areAllTainted();

  boolean isKnown(@IsEnv RValue env);

  AbstractEnv at(@IsEnv RValue env);

  ImmutableSet<RValue> potentialParents(@IsEnv RValue env);

  AbstractLoad lookup(@IsEnv RValue env, RegSymSXP name);

  AbstractLoad lookupSuper(@IsEnv RValue env, RegSymSXP name);

  AbstractLoad lookupFun(@IsEnv RValue env, RegSymSXP name);

  AbstractEnvHierarchy withDependency(@IsEnv RValue from, @IsEnv RValue to);

  AbstractEnvHierarchy leaking(@IsEnv RValue env);

  Pair<AbstractResult, AbstractEnvHierarchy> taintingLeaked();
}

record AbstractEnvHierarchyImpl(
    ImmutableMap<RValue, AbstractEnv> envs, @Override ImmutableMap<RValue, RValue> aliases)
    implements AbstractEnvHierarchy {

  @Override
  public boolean areAllTainted() {
    return envs.values().stream().allMatch(AbstractEnv::isTainted);
  }

  @Override
  public boolean isKnown(RValue env) {
    while (aliases.containsKey(env)) {
      env = aliases.get(env);
    }

    return envs.containsKey(env);
  }

  @Override
  public AbstractEnv at(RValue env) {
    while (aliases.containsKey(env)) {
      env = aliases.get(env);
    }

    var result = envs.get(env);
    if (result == null) {
      throw new NoSuchElementException("Environment not in hierarchy: " + env);
    }
    return result;
  }

  @Override
  public ImmutableSet<RValue> potentialParents(RValue env) {
    var result = ImmutableSet.<RValue>builder();

    while (aliases.containsKey(env)) {
      env = Objects.requireNonNull(aliases.get(env));
    }

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
          knownParent == AbstractEnvImpl.UNKNOWN_PARENT && auxParent != null
              ? auxParent
              : knownParent;
    }

    // We did not reach the outer most environment of the current closure.
    // Therefore we have no clue which envs are the actual parents. The
    // conservative choice is to return all candidates.
    if (!hasBaseParent) {
      result.addAll(envs.keySet());
    }

    return result.build();
  }

  /** Do a regular variable lookup. */
  @Override
  public AbstractLoad lookup(RValue env, RegSymSXP name) {
    // If unbound, we fall through. If maybe unbound, we "maybe fallthrough" (return tainted because
    // we can't be exact enough).
    return lookupGeneric(env, name, false, res -> res.isUnboundValue().negate());
  }

  /** Lookup, but skip the innermost environment (e.g. rebind super-assignment). */
  @Override
  public AbstractLoad lookupSuper(RValue env, RegSymSXP name) {
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
  @Override
  public AbstractLoad lookupFun(RValue env, RegSymSXP name) {
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

  private AbstractLoad lookupGeneric(
      RValue env, RegSymSXP name, boolean skipInnermost, Function<AbstractRValue, Maybe> test) {
    // First, de-alias.
    while (aliases.containsKey(env)) {
      env = Objects.requireNonNull(aliases.get(env));
    }

    // Then, do a regular lookup from innermost to outermost.
    // Except we're dealing with abstract values, so there are cases where a value "may" be present.
    // In these cases, we have to return the union of what we'd return if the value was present and
    // what we'd return if not, which in our domain loses precision to become "unknown environment"
    // and "unknown (tainted) value".
    while (env != AbstractEnvImpl.UNKNOWN_PARENT) {
      var aEnv = envs.get(env);
      if (aEnv == null) {
        // We have no idea what this env contains, so we definitely don't know if lookup succeeds or
        // what it finds.
        return new AbstractLoadImpl(AbstractEnvImpl.UNKNOWN_PARENT, AbstractRValue.TAINTED);
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
            return new AbstractLoadImpl(env, lookupCandidate);
          } else if (isCandidateLookedUp == Maybe.MAYBE) {
            // This *may* be the result of the lookup, and env it was found
            // Unfortunately, that means we don't know the real env or result,
            // and don't have enough precision to represent anything except "unknown".
            return new AbstractLoadImpl(AbstractEnvImpl.UNKNOWN_PARENT, AbstractRValue.TAINTED);
          }
          // else, this env didn't find a real candidate, so we fall through.
        }

        if (env instanceof StaticEnv
            || (env instanceof Stmt s && s.data() instanceof LdEnclosEnv)) {
          // In the case of existing R envs we only have a partial view (i.e. we
          // don't see all stores happening before entering the current function,
          // therefore we cannot practically exclude the existence of a binding
          // in those environments).
          return new AbstractLoadImpl(AbstractEnvImpl.UNKNOWN_PARENT, AbstractRValue.TAINTED);
        }
      }

      // The binding wasn't in the current environment, so look in its parent.
      // If the analysis does not know what the parent env is (`knownParent`),
      // but the env has a concrete parent (`auxParent`), we use that instead.
      var auxParent = env.envAux() == null ? null : Objects.requireNonNull(env.envAux()).parent();
      var knownParent = aEnv.parentEnv();
      env =
          knownParent == AbstractEnvImpl.UNKNOWN_PARENT && auxParent != null
              ? auxParent
              : knownParent;
    }

    return new AbstractLoadImpl(AbstractEnvImpl.UNKNOWN_PARENT, AbstractRValue.TAINTED);
  }

  @Override
  public AbstractEnvHierarchy withDependency(RValue from, RValue to) {
    if (from.equals(to)) {
      return this;
    }
    if (to == AbstractEnvImpl.UNKNOWN_PARENT
        || to instanceof StaticEnv
        || (to instanceof Stmt s && s.data() instanceof LdEnclosEnv)) {
      return leaking(from);
    }
    var result = this;
    var a = at(from);
    if (a.isLeaked()) {
      result =
          switch (result.leaking(to)) {
            case AbstractEnvHierarchyImpl e -> e;
          };
    }
    return new AbstractEnvHierarchyImpl(
        ImmutableMap.<RValue, AbstractEnv>builderWithExpectedSize(result.envs.size())
            .putAll(result.envs)
            .put(from, ((AbstractEnvImpl) a).withReachableEnv(to))
            .buildKeepingLast(),
        result.aliases);
  }

  @Override
  public AbstractEnvHierarchy leaking(RValue env) {
    var e = at(env);

    if (e.isLeaked()) {
      return this;
    }

    var newEnvs =
        ImmutableMap.<RValue, AbstractEnv>builderWithExpectedSize(this.envs.size())
            .putAll(this.envs)
            .put(env, e.leaked());
    for (var r : e.reachableEnvs()) {
      newEnvs.put(r, at(r).leaked());
    }

    return new AbstractEnvHierarchyImpl(newEnvs.buildKeepingLast(), aliases);
  }

  @Override
  public Pair<AbstractResult, AbstractEnvHierarchy> taintingLeaked() {
    var res = AbstractResult.NONE;
    var newEnvs = ImmutableMap.<RValue, AbstractEnv>builderWithExpectedSize(envs.size());
    for (var e : envs.entrySet()) {
      var load = e.getKey();
      var env = e.getValue();

      if (env.isLeaked() || load == StaticEnv.GLOBAL) {
        env = AbstractEnv.TAINTED;
        res = res.tainted();
      }

      newEnvs.put(load, env);
    }

    return Pair.of(res, new AbstractEnvHierarchyImpl(newEnvs.build(), aliases));
  }

  @Override
  public Pair<AbstractResult, AbstractEnvHierarchy> merge(AbstractEnvHierarchy other) {
    var o =
        switch (other) {
          case AbstractEnvHierarchyImpl e -> e;
        };

    var res = AbstractResult.NONE;
    var newEnvs =
        ImmutableMap.<RValue, AbstractEnv>builderWithExpectedSize(envs.size() + o.envs.size());
    var newAliases =
        ImmutableMap.<RValue, RValue>builderWithExpectedSize(aliases.size() + o.aliases.size())
            .putAll(aliases);

    for (var e : o.envs.entrySet()) {
      var load = e.getKey();
      var otherEnv = e.getValue();
      var myEnv = envs.get(load);

      // Env only known on one branch -> merge with empty environment.
      var newResAndEnv = otherEnv.merge(myEnv == null ? AbstractEnv.EMPTY : myEnv);
      res = res.merge(newResAndEnv.first());
      newEnvs.put(load, newResAndEnv.second());
    }

    for (var e : other.aliases().entrySet()) {
      var aliased = e.getKey();
      var otherAlias = e.getValue();
      var myAlias = aliases.get(aliased);

      if (myAlias == null) {
        newAliases.put(aliased, otherAlias);
        res = res.updated();
      } else {
        assert myAlias.equals(otherAlias);
      }
    }

    return Pair.of(res, new AbstractEnvHierarchyImpl(newEnvs.build(), newAliases.build()));
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("AEnvs(");

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

          for (var e : aliases.entrySet()) {
            if (!written) {
              w.write(',');
              written = true;
            }

            w.write("\nalias ");
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
}
