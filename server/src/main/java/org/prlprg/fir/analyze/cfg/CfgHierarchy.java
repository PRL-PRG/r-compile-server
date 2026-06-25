package org.prlprg.fir.analyze.cfg;

import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.Multimap;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.Optional;
import java.util.stream.Collector;
import java.util.stream.Collector.Characteristics;
import java.util.stream.Stream;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.util.Streams;

/// Computes [CFG] parent-child relationships. A [CFG] is another's child if the [CFG] is a
/// promise's body and the other [CFG] contains that promise instruction.
public final class CfgHierarchy implements Analysis {
  private final Map<CFG, CfgPosition> parents = new HashMap<>();
  private final Multimap<CFG, CfgPosition> children = ArrayListMultimap.create();

  @AnalysisConstructor
  public CfgHierarchy(Abstraction scope) {
    if (scope.cfg() != null) {
      run(new ArrayList<>(), scope.cfg());
    }
  }

  /// If `cfg` is a promise body, returns the position of that promise instruction.
  public @Nullable CfgPosition parent(CFG cfg) {
    return parents.get(cfg);
  }

  /// Returns the positions of every promise instruction in `cfg`.
  public @UnmodifiableView Collection<CfgPosition> children(CFG cfg) {
    return Collections.unmodifiableCollection(children.get(cfg));
  }

  /// [#parent(CFG)], its [CFG]'s parent, etc. (not `cfg` itself)
  public Stream<CfgPosition> streamAncestors(CFG cfg) {
    return Stream.iterate(parent(cfg), Objects::nonNull, pos -> parent(pos.cfg()));
  }

  /// [#children(CFG)], their children, etc. (not `cfg` itself)
  public Stream<CfgPosition> streamDescendants(CFG cfg) {
    return Streams.worklist2(
        children(cfg), (next, worklist) -> worklist.addAll(children(next.cfg())));
  }

  public @Nullable CFG commonAncestor(CFG cfg1, CFG cfg2) {
    return cfg1 == cfg2
        ? cfg1
        : streamAncestors(cfg2)
            .map(CfgPosition::cfg)
            .filter(ancestor2 -> cfg1 == ancestor2)
            .findFirst()
            .or(
                () ->
                    streamAncestors(cfg1)
                        .map(CfgPosition::cfg)
                        .filter(
                            ancestor1 ->
                                ancestor1 == cfg2
                                    || streamAncestors(cfg2)
                                        .map(CfgPosition::cfg)
                                        .anyMatch(ancestor2 -> ancestor1 == ancestor2))
                        .findFirst())
            .orElse(null);
  }

  public Collector<CFG, ?, Optional<CFG>> commonAncestor() {
    class Result {
      boolean isSet = false;
      @Nullable CFG value = null;

      void add(CFG next) {
        if (!isSet) {
          isSet = true;
          value = next;
          return;
        }

        if (value != null && value != next) {
          value = commonAncestor(value, next);
        }
      }

      Result merge(Result other) {
        if (!isSet) {
          isSet = other.isSet;
          value = other.value;
        } else if (other.isSet) {
          value = value == null || other.value == null ? null : commonAncestor(value, other.value);
        }

        return this;
      }

      Optional<CFG> get() {
        return Optional.ofNullable(value);
      }
    }

    return Collector.of(
        Result::new, Result::add, Result::merge, Result::get, Characteristics.CONCURRENT);
  }

  public ScopePosition scopePos(BB bb, int instructionIndex) {
    return scopePos(new CfgPosition(bb, instructionIndex));
  }

  public ScopePosition scopePos(CfgPosition cfgPos) {
    return new ScopePosition(streamAncestors(cfgPos.cfg())::iterator, cfgPos);
  }

  private void run(ArrayList<CfgPosition> parents, CFG cfg) {
    for (var bb : cfg.bbs()) {
      for (var i = 0; i < bb.statements().size(); i++) {
        var stmt = bb.statements().get(i);
        if (!(stmt.expression() instanceof Promise(_, _, var code))) {
          continue;
        }

        var pos = new CfgPosition(bb, i, stmt);
        this.parents.put(code, pos);
        children.put(cfg, pos);

        parents.add(pos);
        run(parents, code);
        parents.removeLast();
      }
    }
  }
}
