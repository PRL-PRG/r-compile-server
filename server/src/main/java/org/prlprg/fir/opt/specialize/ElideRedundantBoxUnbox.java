package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.BOX_FUN;
import static org.prlprg.fir.GlobalModules.UNBOX_FUN;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.substitute.Substituter;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.opt.AbstractionOptimization;

/// Elides redundant `box`/`unbox` calls by substituting their results with an equivalent register.
///
/// Specifically:
/// - `box(r)` followed by `unbox(...)`, or `unbox(r)` followed by `box(...)`, substitutes the
///   second result with `r`.
/// - Two identical `box(r)` calls, or two identical `unbox(r)` calls, substitute dominated uses
///   of the later result with the earlier result.
public final class ElideRedundantBoxUnbox implements AbstractionOptimization {
  @Override
  public boolean run(Function function, AbstractionFeedback feedback, Abstraction scope) {
    return new OnAbstraction(scope).run();
  }

  private static final class OnAbstraction {
    private final Abstraction scope;
    private final DominatorTree domTree;
    private final DefUses defUses;
    private final Substituter substs;

    OnAbstraction(Abstraction scope) {
      this.scope = scope;
      domTree = new DominatorTree(scope);
      defUses = new DefUses(scope);
      substs = new Substituter(scope);
    }

    boolean run() {
      var conversions = collectConversions();
      if (conversions.isEmpty()) {
        return false;
      }

      var byAssignee = new LinkedHashMap<Register, Conversion>();
      for (var conversion : conversions) {
        byAssignee.put(conversion.assignee(), conversion);
      }

      var seenByKey = new LinkedHashMap<ConversionKey, List<Conversion>>();
      for (var conversion : conversions) {
        var replacement = replacementFor(conversion, byAssignee, seenByKey);
        if (replacement != null) {
          substs.stage(conversion.assignee(), new Read(replacement));
        }

        seenByKey.computeIfAbsent(conversion.key(), _ -> new ArrayList<>()).add(conversion);
      }

      return substs.commit();
    }

    private List<Conversion> collectConversions() {
      var conversions = new ArrayList<Conversion>();
      scope
          .streamCfgs()
          .forEach(
              cfg -> {
                for (var bb : cfg.bbs()) {
                  for (var i = 0; i < bb.statements().size(); i++) {
                    var statement = bb.statements().get(i);
                    var conversion = conversionAt(bb, i, statement);
                    if (conversion != null) {
                      conversions.add(conversion);
                    }
                  }
                }
              });
      conversions.sort(Comparator.comparing(Conversion::definition));
      return conversions;
    }

    private static @Nullable Conversion conversionAt(BB bb, int index, Statement statement) {
      var assignee = statement.assignee();
      if (!(assignee != null
          && statement.expression() instanceof Call(StaticFnCallee callee, var arguments)
          && arguments.size() == 1
          && arguments.getFirst().variable() != null)) {
        return null;
      }

      var kind = ConversionKind.of(callee.function());
      if (kind == null) {
        return null;
      }

      return new Conversion(
          assignee,
          Objects.requireNonNull(arguments.getFirst().variable()),
          kind,
          callee.signature(),
          new CfgPosition(bb, index, statement));
    }

    private @Nullable Register replacementFor(
        Conversion conversion,
        LinkedHashMap<Register, Conversion> byAssignee,
        LinkedHashMap<ConversionKey, List<Conversion>> seenByKey) {
      var previous = byAssignee.get(conversion.source());
      if (previous != null
          && previous.kind().inverse() == conversion.kind()
          && canSubstitute(conversion.assignee(), previous.source())) {
        return previous.source();
      }

      var earlierDuplicates = seenByKey.getOrDefault(conversion.key(), List.of());
      for (var earlier : earlierDuplicates) {
        if (canSubstitute(conversion.assignee(), earlier.assignee())) {
          return earlier.assignee();
        }
      }

      return null;
    }

    private boolean canSubstitute(Register original, Register replacement) {
      var replacementDefinition = defUses.definition(replacement);
      if (replacementDefinition == null) {
        return false;
      }

      return defUses.uses(original).stream()
          .allMatch(
              use ->
                  domTree.dominates(replacementDefinition.inInnermostCfg(), use.inInnermostCfg()));
    }
  }

  private enum ConversionKind {
    BOX,
    UNBOX;

    static @Nullable ConversionKind of(Function function) {
      return function == BOX_FUN ? BOX : function == UNBOX_FUN ? UNBOX : null;
    }

    ConversionKind inverse() {
      return switch (this) {
        case BOX -> UNBOX;
        case UNBOX -> BOX;
      };
    }
  }

  private record Conversion(
      Register assignee,
      Register source,
      ConversionKind kind,
      Signature signature,
      CfgPosition definition) {
    ConversionKey key() {
      return new ConversionKey(kind, source, signature);
    }
  }

  private record ConversionKey(ConversionKind kind, Register source, Signature signature) {}
}
