package org.prlprg.fir.analyze.cfg;

import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.Multimap;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;
import java.util.stream.Stream;
import org.jetbrains.annotations.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.position.CfgPosition;
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

  private void run(ArrayList<CfgPosition> parents, CFG cfg) {
    for (var bb : cfg.bbs()) {
      for (var i = 0; i < bb.statements().size(); i++) {
        var stmt = bb.statements().get(i);
        if (!(stmt.expression() instanceof Promise(var _, var _, var code))) {
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
