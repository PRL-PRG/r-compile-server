package org.prlprg.ir.analysis.scope;

import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.InvalidNode;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.util.NotImplementedError;

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
public final class AbstractEnv implements AbstractNode<AbstractEnv> {
  public static final RValue UNKNOWN_PARENT = InvalidNode.create("unknownParent");
  static final RValue UNINITIALIZED_PARENT = InvalidNode.create("uninitializedParent");
  public static final AbstractEnv UNKNOWN =
      new AbstractEnv(Collections.emptyMap(), Collections.emptySet(), UNKNOWN_PARENT, false, true);

  private Map<RegSymSXP, AbstractRValue> entries;
  private Set<RValue> reachableEnvs;
  private @IsEnv RValue parentEnv;
  private boolean isLeaked;
  private boolean isUnknown;

  /** Creates an empty abstract environment. */
  public AbstractEnv() {
    entries = new HashMap<>();
    reachableEnvs = new HashSet<>();
    parentEnv = UNINITIALIZED_PARENT;
    isLeaked = false;
    isUnknown = false;
  }

  /** Internal constructor for {@link #UNKNOWN}. */
  private AbstractEnv(
      Map<RegSymSXP, AbstractRValue> entries,
      Set<RValue> reachableEnvs,
      RValue parentEnv,
      boolean isLeaked,
      boolean isUnknown) {
    this.entries = entries;
    this.reachableEnvs = reachableEnvs;
    this.parentEnv = parentEnv;
    this.isLeaked = isLeaked;
    this.isUnknown = isUnknown;
  }

  public @UnmodifiableView Map<RegSymSXP, AbstractRValue> entries() {
    return Collections.unmodifiableMap(entries);
  }

  public @UnmodifiableView Set<RValue> reachableEnvs() {
    return Collections.unmodifiableSet(reachableEnvs);
  }

  public @IsEnv RValue parentEnv() {
    return parentEnv == UNINITIALIZED_PARENT ? UNKNOWN_PARENT : parentEnv;
  }

  public boolean isLeaked() {
    return isLeaked;
  }

  public boolean isUnknown() {
    return isUnknown;
  }

  public boolean isPresent(RegSymSXP name) {
    return !isUnknown() && entries.containsKey(name);
  }

  public AbstractRValue get(RegSymSXP name) {
    return Objects.requireNonNull(entries.getOrDefault(name, AbstractRValue.UNKNOWN));
  }

  public void set(RegSymSXP name, RValue value, @Nullable Instr origin, int recursionLevel) {
    if (isUnknown) {
      return;
    }

    var abstractValue = new AbstractRValue(value, origin, recursionLevel);
    if (entries.containsKey(name)) {
      entries.get(name).merge(abstractValue);
    } else {
      entries.put(name, abstractValue);
    }
  }

  public void addReachableEnv(@IsEnv RValue env) {
    if (isUnknown) {
      return;
    }

    reachableEnvs.add(env);
  }

  public void setParentEnv(@IsEnv RValue parentEnv) {
    if (isUnknown) {
      return;
    }

    this.parentEnv = parentEnv;
  }

  public void leak() {
    if (isUnknown) {
      return;
    }

    isLeaked = true;
  }

  public void unleak() {
    if (isUnknown) {
      return;
    }

    isLeaked = false;
  }

  public void setToUnknown() {
    entries = Collections.emptyMap();
    reachableEnvs = Collections.emptySet();
    parentEnv = UNKNOWN_PARENT;
    isLeaked = false;
    isUnknown = true;
  }

  @Override
  public AbstractResult merge(AbstractEnv other) {
    if (isUnknown || other.isUnknown) {
      return AbstractResult.TAINTED;
    }

    var res = AbstractResult.NONE;

    if (!isLeaked && other.isLeaked) {
      isLeaked = true;
      res = res.union(AbstractResult.LOST_PRECISION);
    }

    for (var e : other.entries.entrySet()) {
      var name = e.getKey();
      var otherValue = e.getValue();
      var myValue = entries.get(name);

      if (myValue == null) {
        res = res.union(otherValue.merge(AbstractRValue.UNBOUND));
        // `UPDATED` is because we add to `entries`.
        entries.put(name, otherValue);
        res = res.union(AbstractResult.UPDATED);
      } else {
        res = res.union(myValue.merge(otherValue));
      }
    }
    for (var e : entries.entrySet()) {
      var name = e.getKey();
      var myValue = e.getValue();

      if (!myValue.isUnknown() && !other.entries.containsKey(name)) {
        res = res.union(myValue.merge(AbstractRValue.UNBOUND));
        // No `UPDATED` because we didn't add to `entries`.
      }
    }

    if (reachableEnvs.addAll(other.reachableEnvs)) {
      res = res.union(AbstractResult.UPDATED);
    }

    if (parentEnv == UNINITIALIZED_PARENT && other.parentEnv != UNINITIALIZED_PARENT) {
      parentEnv = other.parentEnv;
      res = res.union(AbstractResult.UPDATED);
    } else if (parentEnv != UNINITIALIZED_PARENT
        && parentEnv != UNKNOWN_PARENT
        && other.parentEnv != parentEnv) {
      parentEnv = UNKNOWN_PARENT;
      res = res.union(AbstractResult.LOST_PRECISION);
    }

    return res;
  }

  @Override
  public AbstractEnv clone() {
    // TODO
    throw new NotImplementedError();
  }

  // region serialization and deserialization
  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (isUnknown) {
      w.write("AEnv(unknown)");
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
  // endregion serialization and deserialization
}
