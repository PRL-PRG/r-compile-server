package org.prlprg.fir.cfg;

import com.google.common.base.Joiner;
import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.Supplier;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.observer.CFGObserver;

/// FIŘ [control-flow-graph](https://en.wikipedia.org/wiki/Control-flow_graph).
public final class CFG {
  private static final String DEFAULT_LABEL_PREFIX = "L";
  private static final String DEFAULT_REG_NAME_PREFIX = "r";

  // Observers
  private final Set<CFGObserver> observers = new LinkedHashSet<>();

  // Data
  private final Map<String, BB> bbs = new LinkedHashMap<>();

  // Cache
  private final BB entry;
  final Set<BB> exits = new LinkedHashSet<>();
  private final int nextLabelDisambiguator = 0;
  private final int nextRegNameDisambiguator = 0;

  // private @Nullable DomTree domTree;
  // private @Nullable DefUses defUses;
  // private @Nullable Loops loops;

  public CFG() {
    entry = new BB(this, "entry");
    bbs.put(entry.label(), entry);
    exits.add(entry);
  }

  public BB entry() {
    return entry;
  }

  public @UnmodifiableView Collection<BB> exits() {
    return Collections.unmodifiableCollection(exits);
  }

  public @UnmodifiableView Collection<BB> bbs() {
    return Collections.unmodifiableCollection(bbs.values());
  }

  public String nextLabel() {
    return DEFAULT_LABEL_PREFIX + nextLabelDisambiguator;
  }

  public String nextRegName() {
    return DEFAULT_REG_NAME_PREFIX + nextRegNameDisambiguator;
  }

  public void addObserver(CFGObserver observer) {
    observers.add(observer);
  }

  public void removeObserver(CFGObserver observer) {
    observers.remove(observer);
  }

  public BB addBB() {
    return this.addBB(this.nextLabel());
  }

  public BB addBB(String label) {
    return this.record(
        "addBB(String)",
        List.of(label),
        () -> {
          if (bbs.containsKey(label)) {
            throw new IllegalArgumentException(
                "Basic block with label '" + label + "' already exists.");
          }
          var bb = new BB(this, label);
          bbs.put(bb.label(), bb);
          return bb;
        });
  }

  public void remove(BB bb) {
    this.record(
        "remove(BB)",
        List.of(bb),
        () -> {
          if (!bbs.remove(bb.label(), bb)) {
            throw new IllegalArgumentException(
                "Basic block with label '" + bb.label() + "' does not exist.");
          }
          return null;
        });
  }

  public <T> T record(String func, List<Object> args, Supplier<T> action) {
    for (var observer : observers) {
      observer.before(func, args);
    }
    var returnValue = action.get();
    for (var observer : observers) {
      observer.after(returnValue);
    }
    return returnValue;
  }

  @Override
  public String toString() {
    return Joiner.on('\n').join(bbs());
  }
}
