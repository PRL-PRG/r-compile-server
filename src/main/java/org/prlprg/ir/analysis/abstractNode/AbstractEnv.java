package org.prlprg.ir.analysis.abstractNode;

import static org.prlprg.ir.analysis.abstractNode.AbstractEnvImpl.UNINITIALIZED_PARENT;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InvalidNode;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.util.Pair;

/**
 * A static approximation of an {@linkplain EnvSXP R runtime environment} (from PIR).
 *
 * <p>A key notion is when an environment leaks; a <b>leaked</b> environment describes an
 * environment that is visible to an unknown context, i.e. can be inspected and manipulated by code
 * we can't statically analyze.
 *
 * <p>Typically an analysis will need to mark an environment leaked, when we call a (statically)
 * unknown function. The reason is that the callee can always inspect our environment through {@code
 * sys.parent()}.
 *
 * <p>For inter-procedural analysis we can additionally keep track of closures.
 */
public sealed interface AbstractEnv extends AbstractNode<AbstractEnv> {
  AbstractEnv EMPTY =
      new AbstractEnvImpl(ImmutableMap.of(), ImmutableSet.of(), UNINITIALIZED_PARENT, false, false);
  AbstractEnv TAINTED =
      new AbstractEnvImpl(ImmutableMap.of(), ImmutableSet.of(), UNINITIALIZED_PARENT, false, true);

  ImmutableMap<RegSymSXP, AbstractRValue> entries();

  ImmutableSet<RValue> reachableEnvs();

  @IsEnv
  RValue parentEnv();

  boolean isLeaked();

  boolean isTainted();

  default boolean isPresent(RegSymSXP name) {
    return !isTainted() && entries().containsKey(name);
  }

  default AbstractRValue get(RegSymSXP name) {
    return Objects.requireNonNull(entries().getOrDefault(name, AbstractRValue.TAINTED));
  }

  default AbstractEnv withEntry(
      RegSymSXP name, RValue value, @Nullable Instr origin, int recursionLevel) {
    return isTainted()
        ? this
        : new AbstractEnvImpl(
            ImmutableMap.<RegSymSXP, AbstractRValue>builder()
                .putAll(entries())
                .put(name, AbstractRValue.of(value, origin, recursionLevel))
                .buildKeepingLast(),
            reachableEnvs(),
            parentEnv(),
            isLeaked(),
            isTainted());
  }

  default AbstractEnv withParentEnv(@IsEnv RValue parentEnv) {
    return new AbstractEnvImpl(entries(), reachableEnvs(), parentEnv, isLeaked(), isTainted());
  }

  default AbstractEnv leaked() {
    return new AbstractEnvImpl(entries(), reachableEnvs(), parentEnv(), true, isTainted());
  }

  default AbstractEnv notLeaked() {
    return new AbstractEnvImpl(entries(), reachableEnvs(), parentEnv(), false, isTainted());
  }
}

record AbstractEnvImpl(
    @Override ImmutableMap<RegSymSXP, AbstractRValue> entries,
    @Override ImmutableSet<RValue> reachableEnvs,
    RValue actualParentEnv,
    @Override boolean isLeaked,
    @Override boolean isTainted)
    implements AbstractEnv {
  static final RValue UNKNOWN_PARENT = InvalidNode.create("unknownParent");
  static final RValue UNINITIALIZED_PARENT = InvalidNode.create("uninitializedParent");

  AbstractEnvImpl {
    if (isTainted
        && (!entries.isEmpty()
            || !reachableEnvs.isEmpty()
            || actualParentEnv != UNINITIALIZED_PARENT
            || isLeaked)) {
      throw new IllegalArgumentException(
          "A tainted environment must be equal to `AbstractEnv#TAINTED`");
    }
  }

  @Override
  public @IsEnv RValue parentEnv() {
    return actualParentEnv == UNINITIALIZED_PARENT ? UNKNOWN_PARENT : actualParentEnv;
  }

  AbstractEnvImpl withReachableEnv(@IsEnv RValue env) {
    return new AbstractEnvImpl(
        entries,
        ImmutableSet.<RValue>builderWithExpectedSize(reachableEnvs.size() + 1)
            .addAll(reachableEnvs)
            .add(env)
            .build(),
        actualParentEnv,
        isLeaked,
        isTainted);
  }

  @Override
  public Pair<AbstractResult, AbstractEnv> merge(AbstractEnv other) {
    var o =
        switch (other) {
          case AbstractEnvImpl e -> e;
        };

    if (isTainted || o.isTainted) {
      return Pair.of(AbstractResult.TAINTED, TAINTED);
    }

    var res = AbstractResult.NONE;
    var newEntries =
        ImmutableMap.<RegSymSXP, AbstractRValue>builderWithExpectedSize(
            entries.size() + o.entries.size());
    var newReachableEnvs =
        ImmutableSet.<RValue>builderWithExpectedSize(reachableEnvs.size() + o.reachableEnvs.size())
            .addAll(reachableEnvs);
    var newActualParentEnv = actualParentEnv;

    if (!isLeaked && o.isLeaked) {
      res = res.withLostPrecision();
    }

    for (var e : o.entries.entrySet()) {
      var name = e.getKey();
      var otherValue = e.getValue();
      var myValue = entries.get(name);

      Pair<AbstractResult, AbstractRValue> newResAndValue;
      if (myValue == null) {
        newResAndValue = otherValue.merge(AbstractRValue.UNBOUND);
        res = res.updated();
      } else {
        newResAndValue = myValue.merge(otherValue);
      }
      res = res.merge(newResAndValue.first());
      newEntries.put(name, newResAndValue.second());
    }
    for (var e : entries.entrySet()) {
      var name = e.getKey();
      var myValue = e.getValue();

      if (!myValue.isUnknown() && !o.entries.containsKey(name)) {
        var newResAndValue = myValue.merge(AbstractRValue.UNBOUND);
        // Note: no `updated()` even though it's similar to above.
        res = res.merge(newResAndValue.first());
        newEntries.put(name, newResAndValue.second());
      }
    }

    for (var env : o.reachableEnvs) {
      if (!reachableEnvs.contains(env)) {
        newReachableEnvs.add(env);
        res = res.updated();
      }
    }

    if (actualParentEnv == UNINITIALIZED_PARENT && o.actualParentEnv != UNINITIALIZED_PARENT) {
      newActualParentEnv = o.actualParentEnv;
      res = res.updated();
    } else if (actualParentEnv != UNINITIALIZED_PARENT
        && actualParentEnv != UNKNOWN_PARENT
        && o.actualParentEnv != actualParentEnv) {
      newActualParentEnv = UNKNOWN_PARENT;
      res = res.withLostPrecision();
    }

    return Pair.of(
        res,
        new AbstractEnvImpl(
            newEntries.build(),
            newReachableEnvs.build(),
            newActualParentEnv,
            isLeaked || o.isLeaked,
            false));
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (isTainted) {
      w.write("AEnv(tainted)");
    } else {
      w.write("AEnv(");

      w.runIndented(
          () -> {
            var written = false;
            if (isLeaked) {
              w.write("\nleaked");
              written = true;
            }

            for (var reachable : reachableEnvs) {
              if (!written) {
                w.write(',');
                written = true;
              }
              w.write("\nreachable: ");
              p.print(reachable);
            }

            for (var entry : entries.entrySet()) {
              if (!written) {
                w.write(',');
                written = true;
              }
              w.write('\n');
              w.write(entry.getKey().toString());
              w.write(" -> ");
              p.print(entry.getValue());
            }
          });

      w.write(')');
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
