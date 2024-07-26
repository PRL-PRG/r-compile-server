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
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.RegSymSXP;

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
  /**
   * The "top" of the lattice, representing a completely unknown environment.
   *
   * <p>This can is because it can't change; merging with unknown always produces unknown.
   */
  public static final AbstractEnv UNKNOWN =
      new AbstractEnv(
          Collections.emptyMap(), Collections.emptySet(), StaticEnv.UNKNOWN, false, true);

  private Map<RegSymSXP, AbstractISexp> entries;
  private Set<ISexp> reachableEnvs;
  private @Nullable ISexp parentEnv;
  private boolean isLeaked;
  private boolean isUnknown;

  /** Creates an empty abstract environment. */
  public AbstractEnv() {
    entries = new HashMap<>();
    reachableEnvs = new HashSet<>();
    parentEnv = null;
    isLeaked = false;
    isUnknown = false;
  }

  /** Internal constructor for {@link #copy()} and {@link #UNKNOWN}. */
  private AbstractEnv(
      Map<RegSymSXP, AbstractISexp> entries,
      Set<ISexp> reachableEnvs,
      @Nullable ISexp parentEnv,
      boolean isLeaked,
      boolean isUnknown) {
    this.entries = entries;
    this.reachableEnvs = reachableEnvs;
    this.parentEnv = parentEnv;
    this.isLeaked = isLeaked;
    this.isUnknown = isUnknown;
  }

  public @UnmodifiableView Map<RegSymSXP, AbstractISexp> entries() {
    return Collections.unmodifiableMap(entries);
  }

  public @UnmodifiableView Set<ISexp> reachableEnvs() {
    return Collections.unmodifiableSet(reachableEnvs);
  }

  public ISexp parentEnv() {
    return parentEnv == null ? StaticEnv.UNKNOWN : parentEnv;
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

  public AbstractISexp get(RegSymSXP name) {
    return Objects.requireNonNull(entries.getOrDefault(name, AbstractISexp.UNKNOWN));
  }

  public void set(RegSymSXP name, ISexp value, @Nullable Instr origin, int recursionLevel) {
    if (isUnknown) {
      return;
    }

    var abstractValue = new AbstractISexp(value, origin, recursionLevel);
    if (entries.containsKey(name)) {
      entries.get(name).merge(abstractValue);
    } else {
      entries.put(name, abstractValue);
    }
  }

  public void addReachableEnv(ISexp env) {
    if (isUnknown) {
      return;
    }

    reachableEnvs.add(env);
  }

  public void setParentEnv(ISexp parentEnv) {
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
      throw new IllegalStateException("Can't unleak an unknown environment");
    } else if (!isLeaked) {
      throw new IllegalStateException("Can't unleak an environment that hasn't been leaked");
    }

    isLeaked = false;
  }

  /** Set to {@link #UNKNOWN}. */
  public void taint() {
    entries = Collections.emptyMap();
    reachableEnvs = Collections.emptySet();
    parentEnv = StaticEnv.UNKNOWN;
    isLeaked = false;
    isUnknown = true;
  }

  @Override
  public AbstractResult merge(AbstractEnv other) {
    // Skip if top.
    if (isUnknown) {
      return AbstractResult.NONE;
    }

    // Taint if other is top.
    if (other.isUnknown) {
      taint();
      return AbstractResult.TAINTED;
    }

    var res = AbstractResult.NONE;

    // Merge `entries`.
    for (var e : other.entries.entrySet()) {
      var name = e.getKey();
      var otheiSexp = e.getValue();
      var myValue = entries.get(name);

      if (myValue == null) {
        myValue = otheiSexp.copy();
        res = res.union(myValue.mergeUnbound());
        // `UPDATED` is because we add to `entries`.
        entries.put(name, myValue);
        res = res.union(AbstractResult.UPDATED);
      } else {
        res = res.union(myValue.merge(otheiSexp));
      }
    }
    for (var e : entries.entrySet()) {
      var name = e.getKey();
      var myValue = e.getValue();

      if (!myValue.isUnknown() && !other.entries.containsKey(name)) {
        res = res.union(myValue.mergeUnbound());
        // No `UPDATED` because we didn't add to `entries`.
      }
    }

    // Merge `reachableEnvs`.
    if (reachableEnvs.addAll(other.reachableEnvs)) {
      res = res.union(AbstractResult.UPDATED);
    }

    // Merge `parentEnv`.
    if (parentEnv == null && other.parentEnv != null) {
      parentEnv = other.parentEnv;
      res = res.union(AbstractResult.UPDATED);
    } else if (parentEnv != null
        && parentEnv != StaticEnv.UNKNOWN
        && other.parentEnv != parentEnv) {
      parentEnv = StaticEnv.UNKNOWN;
      res = res.union(AbstractResult.LOST_PRECISION);
    }

    // Merge `isLeaked`.
    if (!isLeaked && other.isLeaked) {
      isLeaked = true;
      res = res.union(AbstractResult.LOST_PRECISION);
    }

    return res;
  }

  @Override
  public AbstractEnv copy() {
    if (isUnknown) {
      return UNKNOWN;
    }

    var newEntries = new HashMap<RegSymSXP, AbstractISexp>();
    for (var e : entries.entrySet()) {
      newEntries.put(e.getKey(), e.getValue().copy());
    }

    return new AbstractEnv(newEntries, new HashSet<>(reachableEnvs), parentEnv, isLeaked, false);
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
