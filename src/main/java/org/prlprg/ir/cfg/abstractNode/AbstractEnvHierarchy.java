package org.prlprg.ir.cfg.abstractNode;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.Optional;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.cfg.Stmt;
import org.prlprg.ir.cfg.StmtData.LdEnclosEnv;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.util.Pair;

public sealed interface AbstractEnvHierarchy extends AbstractNode<AbstractEnvHierarchy> {
  ImmutableMap<RValue, RValue> aliases();

  boolean areAllTainted();

  boolean isKnown(@IsEnv RValue env);
  AbstractEnv at(@IsEnv RValue env);
  ImmutableSet<RValue> potentialParents(@IsEnv RValue env);

  AbstractLoad lookup(@IsEnv RValue env, RegSymSXP name);
  AbstractLoad lookupFun(@IsEnv RValue env, RegSymSXP name);
  AbstractLoad lookupSuper(@IsEnv RValue env, RegSymSXP name);

  AbstractEnvHierarchy withDependency(@IsEnv RValue from, @IsEnv RValue to);
  AbstractEnvHierarchy leaking(@IsEnv RValue env);
  Pair<AbstractResult, AbstractEnvHierarchy> taintingLeaked();
}

record AbstractEnvHierarchyImpl(
    ImmutableMap<RValue, AbstractEnv> envs,
    @Override ImmutableMap<RValue, RValue> aliases) implements AbstractEnvHierarchy {

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
      var auxParent = Optional.ofNullable(env.envAux()).flatMap(e -> Optional.ofNullable(e.parent())).orElse(null);
      env = knownParent == AbstractEnvImpl.UNKNOWN_PARENT && auxParent != null ? auxParent : knownParent;
    }

    // We did not reach the outer most environment of the current closure.
    // Therefore we have no clue which envs are the actual parents. The
    // conservative choice is to return all candidates.
    if (!hasBaseParent) {
      result.addAll(envs.keySet());
    }

    return result.build();
  }

  @Override
  public AbstractLoad lookup(RValue env, RegSymSXP name) {
    TODO
  }

  @Override
  public AbstractLoad lookupFun(RValue env, RegSymSXP name) {
    TODO
  }

  @Override
  public AbstractLoad lookupSuper(RValue env, RegSymSXP name) {
    TODO
  }

  @Override
  public AbstractEnvHierarchy withDependency(RValue from, RValue to) {
    if (from.equals(to)) {
      return this;
    }
    if (to == AbstractEnvImpl.UNKNOWN_PARENT || to instanceof StaticEnv || (to instanceof Stmt s && s.data() instanceof LdEnclosEnv)) {
      return leaking(from);
    }
    var result = this;
    var a = at(from);
    if (a.isLeaked()) {
      result = switch (result.leaking(to)) {
        case AbstractEnvHierarchyImpl e -> e;
      };
    }
    return new AbstractEnvHierarchyImpl(
        ImmutableMap.<RValue, AbstractEnv>builderWithExpectedSize(result.envs.size())
            .putAll(result.envs)
            .put(from, ((AbstractEnvImpl)a).withReachableEnv(to))
            .buildKeepingLast(),
        result.aliases
    );
  }

  @Override
  public AbstractEnvHierarchy leaking(RValue env) {
    var e = at(env);

    if (e.isLeaked()) {
      return this;
    }

    var newEnvs = ImmutableMap.<RValue, AbstractEnv>builderWithExpectedSize(this.envs.size())
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
    var o = switch (other) {
      case AbstractEnvHierarchyImpl e -> e;
    };

    var res = AbstractResult.NONE;
    var newEnvs = ImmutableMap.<RValue, AbstractEnv>builderWithExpectedSize(envs.size() + o.envs.size());
    var newAliases = ImmutableMap.<RValue, RValue>builderWithExpectedSize(aliases.size() + o.aliases.size())
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
    TODO
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}