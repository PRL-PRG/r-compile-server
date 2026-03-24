package org.prlprg.fir.opt.specialize;

import static org.prlprg.fir.GlobalModules.INTRINSICS;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analyses;
import org.prlprg.fir.analyze.AnalysisTypes;
import org.prlprg.fir.analyze.cfg.DefUses;
import org.prlprg.fir.analyze.cfg.DominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;

/// Elides redundant `box`/`unbox` calls by substituting their results with an equivalent register.
///
/// Specifically:
/// - `box(r)` followed by `unbox(...)`, or `unbox(r)` followed by `box(...)`, substitutes the
///   second result with `r`.
/// - Two identical `box(r)` calls, or two identical `unbox(r)` calls, substitute dominated uses
///   of the later result with the earlier result.
public final class ElideRedundantBoxUnbox implements SpecializeOptimization {
  @Override
  public AnalysisTypes analyses() {
    return new AnalysisTypes(DefUses.class, DominatorTree.class);
  }

  @Override
  public Expression run(
      BB bb,
      int index,
      @Nullable Register assignee,
      Expression expression,
      Abstraction scope,
      AbstractionFeedback feedback,
      Analyses analyses,
      NonLocalSpecializations nonLocal,
      DeferredInsertions defer) {
    return expression;
  }

  @Override
  public boolean finish(Abstraction scope, Analyses analyses) {
    var changed = false;
    while (optimizeOnce(scope)) {
      changed = true;
    }
    return changed;
  }

  private boolean optimizeOnce(Abstraction scope) {
    var analyses = new Analyses(scope, analyses());
    var defUses = analyses.get(DefUses.class);
    var domTree = analyses.get(DominatorTree.class);

    var boxFunction = INTRINSICS.localFunction(Variable.named("box"));
    var unboxFunction = INTRINSICS.localFunction(Variable.named("unbox"));
    if (boxFunction == null || unboxFunction == null) {
      return false;
    }

    var conversions = collectConversions(scope, boxFunction, unboxFunction);
    if (conversions.isEmpty()) {
      return false;
    }

    var byAssignee = new LinkedHashMap<Register, Conversion>();
    for (var conversion : conversions) {
      byAssignee.put(conversion.assignee(), conversion);
    }

    var changed = false;
    var seenByKey = new LinkedHashMap<ConversionKey, List<Conversion>>();
    for (var conversion : conversions) {
      changed |= replaceBoxUnboxChain(conversion, byAssignee, defUses, domTree);

      var earlierDuplicates = seenByKey.getOrDefault(conversion.key(), List.of());
      if (!earlierDuplicates.isEmpty()) {
        changed |= replaceDominatedDuplicateUses(conversion, earlierDuplicates, defUses, domTree);
      }

      seenByKey.computeIfAbsent(conversion.key(), _ -> new ArrayList<>()).add(conversion);
    }

    return changed;
  }

  private static List<Conversion> collectConversions(
      Abstraction scope, Function boxFunction, Function unboxFunction) {
    var conversions = new ArrayList<Conversion>();
    scope
        .streamCfgs()
        .forEach(
            cfg -> {
              for (var bb : cfg.bbs()) {
                for (var i = 0; i < bb.statements().size(); i++) {
                  var statement = bb.statements().get(i);
                  var conversion = conversionAt(bb, i, statement, boxFunction, unboxFunction);
                  if (conversion != null) {
                    conversions.add(conversion);
                  }
                }
              }
            });
    conversions.sort(Comparator.comparing(Conversion::definition));
    return conversions;
  }

  private static @Nullable Conversion conversionAt(
      BB bb, int index, Statement statement, Function boxFunction, Function unboxFunction) {
    var assignee = statement.assignee();
    if (!(assignee != null
        && statement.expression() instanceof Call(StaticFnCallee callee, var arguments)
        && arguments.size() == 1
        && arguments.getFirst().variable() != null)) {
      return null;
    }

    var kind = ConversionKind.of(callee.function(), boxFunction, unboxFunction);
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

  private static boolean replaceBoxUnboxChain(
      Conversion conversion,
      LinkedHashMap<Register, Conversion> byAssignee,
      DefUses defUses,
      DominatorTree domTree) {
    var previous = byAssignee.get(conversion.source());
    if (previous == null || previous.kind().inverse() != conversion.kind()) {
      return false;
    }

    var replacementDefinition = defUses.definition(previous.source());
    if (replacementDefinition == null) {
      return false;
    }

    return replaceDominatedUses(
        conversion.assignee(),
        previous.source(),
        replacementDefinition.inInnermostCfg(),
        defUses,
        domTree);
  }

  private static boolean replaceDominatedDuplicateUses(
      Conversion conversion,
      List<Conversion> earlierDuplicates,
      DefUses defUses,
      DominatorTree domTree) {
    var changed = false;
    var uses = new ArrayList<>(defUses.uses(conversion.assignee()));
    uses.sort(Comparator.naturalOrder());

    for (var use : uses) {
      var usePosition = use.inInnermostCfg();
      for (var earlier : earlierDuplicates) {
        if (!dominates(domTree, earlier.definition(), usePosition)) {
          continue;
        }

        changed |= replaceUse(usePosition, conversion.assignee(), earlier.assignee());
        break;
      }
    }

    return changed;
  }

  private static boolean replaceDominatedUses(
      Register from, Register to, CfgPosition dominator, DefUses defUses, DominatorTree domTree) {
    var changed = false;
    var uses = new ArrayList<>(defUses.uses(from));
    uses.sort(Comparator.naturalOrder());

    for (var use : uses) {
      var usePosition = use.inInnermostCfg();
      if (!dominates(domTree, dominator, usePosition)) {
        continue;
      }
      changed |= replaceUse(usePosition, from, to);
    }

    return changed;
  }

  private static boolean dominates(
      DominatorTree domTree, CfgPosition dominator, CfgPosition dominee) {
    return domTree.dominates(
        dominator.bb(), dominator.instructionIndex(), dominee.bb(), dominee.instructionIndex());
  }

  private static boolean replaceUse(CfgPosition position, Register from, Register to) {
    var instruction = Objects.requireNonNull(position.instruction(), "phis are never uses");
    var replacement = replace(instruction, from, to);
    if (instruction.equals(replacement)) {
      return false;
    }

    position.replaceWith(replacement);
    return true;
  }

  private static Instruction replace(Instruction instruction, Register from, Register to) {
    return switch (instruction) {
      case Statement(var comments, var assignee, var expression) ->
          new Statement(comments, assignee, replace(expression, from, to));
      case Jump jump -> replace(jump, from, to);
    };
  }

  private static Expression replace(Expression expression, Register from, Register to) {
    return switch (expression) {
      case Aea(var value) -> new Aea(replace(value, from, to));
      case Assume(var assumption) ->
          new Assume(
              switch (assumption) {
                case AssumeType(var target, var type) ->
                    new AssumeType(replace(target, from, to), type);
                case AssumeConstant(var target, var constant) ->
                    new AssumeConstant(replace(target, from, to), constant);
                case AssumeFunction assume ->
                    new AssumeFunction(replace(assume.target(), from, to), assume.function());
                case AssumeLoadFun assume ->
                    new AssumeLoadFun(assume.variable(), assume.function());
              });
      case Call(var callee, var callArguments) ->
          new Call(
              replace(callee, from, to),
              callArguments.stream()
                  .map(argument -> replace(argument, from, to))
                  .collect(ImmutableList.toImmutableList()));
      case Cast(var target, var type) -> new Cast(replace(target, from, to), type);
      case Closure closure -> closure;
      case Dup(var value) -> new Dup(replace(value, from, to));
      case Force(var isMaybe, var value) -> new Force(isMaybe, replace(value, from, to));
      case Load(var loadType, var variable) -> new Load(loadType, variable);
      case MkEnv() -> new MkEnv();
      case MkVector(var kind, var elements) ->
          new MkVector(
              kind,
              elements.stream()
                  .map(
                      element ->
                          new NamedArgument(element.name(), replace(element.argument(), from, to)))
                  .collect(ImmutableList.toImmutableList()));
      case Noop() -> new Noop();
      case PopEnv() -> new PopEnv();
      case Promise promise -> promise;
      case ReflectiveLoad(var promise, var variable) ->
          new ReflectiveLoad(replace(promise, from, to), variable);
      case ReflectiveStore(var promise, var variable, var value) ->
          new ReflectiveStore(replace(promise, from, to), variable, replace(value, from, to));
      case Store(var storeType, var variable, var value) ->
          new Store(storeType, variable, replace(value, from, to));
      case SubscriptRead(var target, var index) ->
          new SubscriptRead(replace(target, from, to), replace(index, from, to));
      case SubscriptWrite(var target, var index, var value) ->
          new SubscriptWrite(
              replace(target, from, to), replace(index, from, to), replace(value, from, to));
    };
  }

  private static Callee replace(Callee callee, Register from, Register to) {
    return switch (callee) {
      case StaticFnCallee(var isDispatch, var function, var signature) ->
          new StaticFnCallee(isDispatch, function, signature);
      case DynamicCallee(var calleeArgument, var argumentNames) ->
          new DynamicCallee(replace(calleeArgument, from, to), argumentNames);
    };
  }

  private static Jump replace(Jump jump, Register from, Register to) {
    return switch (jump) {
      case Goto(var comments, var target) -> new Goto(comments, replace(target, from, to));
      case If(var comments, var condition, var ifTrue, var ifFalse) ->
          new If(
              comments,
              replace(condition, from, to),
              replace(ifTrue, from, to),
              replace(ifFalse, from, to));
      case Return(var comments, var value) -> new Return(comments, replace(value, from, to));
      case Checkpoint(var comments, var success, var deopt) ->
          new Checkpoint(comments, replace(success, from, to), replace(deopt, from, to));
      case Deopt(var comments, var reason, var frameState) ->
          new Deopt(
              comments,
              reason,
              frameState.stream()
                  .map(argument -> replace(argument, from, to))
                  .collect(ImmutableList.toImmutableList()));
      case Unreachable(var comments) -> new Unreachable(comments);
    };
  }

  private static Target replace(Target target, Register from, Register to) {
    return new Target(
        target.bb(),
        target.phiArgs().stream()
            .map(argument -> replace(argument, from, to))
            .collect(ImmutableList.toImmutableList()));
  }

  private static Argument replace(Argument argument, Register from, Register to) {
    return switch (argument) {
      case Read(var register) when register.equals(from) -> new Read(to);
      case Consume(var register) when register.equals(from) -> new Consume(to);
      default -> argument;
    };
  }

  private enum ConversionKind {
    BOX,
    UNBOX;

    static @Nullable ConversionKind of(
        Function function, Function boxFunction, Function unboxFunction) {
      if (function == boxFunction) {
        return BOX;
      }
      if (function == unboxFunction) {
        return UNBOX;
      }
      return null;
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
