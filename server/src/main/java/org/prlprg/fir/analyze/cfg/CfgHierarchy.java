package org.prlprg.fir.analyze.cfg;

import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Optional;
import java.util.stream.Collector;
import java.util.stream.Collector.Characteristics;
import java.util.stream.Stream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.util.Streams;

/// Computes [CFG] parent-child relationships. A [CFG] is another's child if the [CFG] is a
/// promise's body and the other [CFG] contains that promise instruction.
public final class CfgHierarchy implements Analysis {
  // For each promise-body CFG, the promise statement that owns it.
  private final Map<CFG, Statement> parents = new HashMap<>();

  @AnalysisConstructor
  public CfgHierarchy(Abstraction scope) {
    if (scope.cfg() != null) {
      run(scope.cfg());
    }
  }

  /// If `cfg` is a promise body, returns that promise instruction (a [Promise] statement).
  public @Nullable Statement parentPromise(CFG cfg) {
    return parents.get(cfg);
  }

  /// The [CFG] that (transitively) contains `cfg`'s parent promise, its parent, etc. (not `cfg`).
  public Stream<CFG> streamAncestorCfgs(CFG cfg) {
    return Stream.iterate(parentCfg(cfg), Objects::nonNull, this::parentCfg);
  }

  private @Nullable CFG parentCfg(CFG cfg) {
    var parent = parents.get(cfg);
    return parent == null ? null : Objects.requireNonNull(parent.parentBB()).owner();
  }

  /// The instruction within `cfg` corresponding to `instr`: `instr` itself if it's already in
  /// `cfg`, otherwise the [Promise] statement in `cfg` that (transitively) contains `instr`, or
  /// `null` if `instr` is in a sibling or outer scope.
  public @Nullable Instruction projectInto(CFG cfg, Instruction instr) {
    var c = Objects.requireNonNull(instr.parentBB()).owner();
    while (c != cfg) {
      var parent = parentPromise(c);
      if (parent == null) {
        return null;
      }
      instr = parent;
      c = Objects.requireNonNull(parent.parentBB()).owner();
    }
    return instr;
  }

  /// The innermost [CFG] that is an ancestor (or self) of both `cfg1` and `cfg2`, or `null` if
  /// they're in unrelated scopes.
  public @Nullable CFG commonAncestor(CFG cfg1, CFG cfg2) {
    if (cfg1 == cfg2) {
      return cfg1;
    }

    // Ancestors-or-self of `cfg1`.
    var ancestors1 = new LinkedHashSet<CFG>();
    ancestors1.add(cfg1);
    streamAncestorCfgs(cfg1).forEach(ancestors1::add);

    // Walk `cfg2` and its ancestors; the first one that's also an ancestor-or-self of `cfg1` is
    // the innermost common ancestor.
    if (ancestors1.contains(cfg2)) {
      return cfg2;
    }
    return streamAncestorCfgs(cfg2).filter(ancestors1::contains).findFirst().orElse(null);
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
      for (var stmt : bb.statements()) {
        if (stmt.expression() instanceof Promise(_, _, var code)) {
          parents.put(code, stmt);
          run(code);
        }
      }
    }
  }
}
