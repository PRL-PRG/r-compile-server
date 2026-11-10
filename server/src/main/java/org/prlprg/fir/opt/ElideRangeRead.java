package org.prlprg.fir.opt;

import static org.prlprg.fir.GlobalModules.BASE;
import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import com.google.common.collect.ImmutableList;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.cfg.CfgDominatorTree;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.PrimitiveKind;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.AssigneeOf;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

/// Replaces the element read of a `for` loop over an integer `from:to` with
/// `rangeElement(from, k, step)` (`from + (k - 1) * step`, where `step` is 1 or -1), and
/// removes the read if its value is unused. It also removes the index decrement `idx` if nothing
/// else uses it.
///
/// The read is `seq[[idx]]` in the shape bc2fir gives a `for` loop:
///
/// ```
/// seq = toForSeq(x); len0 = length(seq); goto H(.., len0, .., 0, ..)
/// H(.., len, .., r, ..): k = forIndex(r); c = <(len, k); b = naToTrue(c); if b then E() else B()
/// B(): ...; idx = -(k, 1); e = seq[[idx]]
/// ```
///
/// `x` is a `:` call on two scalars that gives an integer vector: the call's arguments are both
/// integers, or `x` is a type assumption of the call's result. Then GNU-R's `seq_colon` makes
/// element `i` `from + i` if `from <= to`, else `from - i`, and `from` is a whole number.
///
/// The read is in bounds: each value of `r` is a value of `k` or a constant at least 0 (through any
/// phis), so a `k` that is not `NA` is at least 1. Each value of `len` is `len0`, and `B` runs only
/// when `k <= len` (an `NA` `k` ends the loop). So neither `idx` nor the element can overflow: a
/// dead `idx` or element can't warn, unlike the integer `-`, `*` and `+` that it replaces.
public final class ElideRangeRead extends AbstractionOptimization {
  private static final Function MINUS = builtin("-");
  private static final Function RANGE_ELEMENT =
      Objects.requireNonNull(INTRINSICS.localFunction(Variable.named("rangeElement")));
  private static final Function LESS = builtin("<");
  private static final Function LESS_EQUAL = builtin("<=");
  private static final Function AS_INTEGER = builtin("as.integer");
  private static final Constant MISSING = new Constant(SEXPs.MISSING_ARG);

  @Override
  public boolean runWithoutRecording(
      Optimization topLevel,
      @Nullable Function function,
      AbstractionFeedback feedback,
      Abstraction scope) {
    if (scope.isStub()) {
      return false;
    }
    var cfg = scope.body();
    var dominators = new CfgDominatorTree(cfg);
    var reads = new ArrayList<RangeRead>();
    for (var bb : cfg.bbsInPrintOrder()) {
      for (var statement : bb.statements()) {
        var read = match(statement, dominators);
        if (read != null) {
          reads.add(read);
        }
      }
    }

    // One element function per range and loop, because the reads of a loop share its entry edge.
    var elements = new HashMap<List<Object>, Element>();
    for (var read : reads) {
      var assignee = read.statement.assignee();
      if (assignee != null && assignee.isUsed()) {
        var element =
            elements.computeIfAbsent(
                List.of(read.range, read.header), _ -> element(scope, cfg, read));
        var value = element.at(scope, read.k, read.statement);
        for (var use : List.copyOf(assignee.uses())) {
          use.replaceWith(value);
        }
      }
      read.statement.remove();
      if (!read.idx.isUsed() && read.idx.statement().parentBB() != null) {
        read.idx.statement().remove();
      }
    }
    return !reads.isEmpty();
  }

  /// A read that [#match] proved in bounds: `statement` reads `range` (a `:` call) at
  /// `idx = -(k, 1)`, in the loop of `header`, whose only entry edge comes from `entry`.
  private record RangeRead(
      Statement statement, Statement range, AssigneeOf idx, Read k, BB header, BB entry) {}

  /// The element of a range at a 1-based index `k`, where `step` is the constant or register that
  /// holds 1 or -1.
  private record Element(Argument from, Argument step) {
    Argument at(Abstraction scope, Argument k, Statement before) {
      return call(scope, "elem", RANGE_ELEMENT, List.of(from, k, step), Type.INTEGER, before);
    }
  }

  private static @Nullable RangeRead match(Statement statement, CfgDominatorTree dominators) {
    if (!(statement.expression() instanceof SubscriptRead)
        || !(statement.arg(0) instanceof Read(AssigneeOf seq))
        || !(statement.arg(1) instanceof Read(AssigneeOf idx))) {
      return null;
    }
    var range = range(seq);
    if (range == null) {
      return null;
    }

    // idx = -(k, 1); k = forIndex(r) in H; H: c = <(len, k); b = naToTrue(c); if b then E else B
    var k = argOfIntegerCall(idx.statement(), MINUS, 1);
    if (!(k instanceof Read(AssigneeOf kAssignee))) {
      return null;
    }
    var header = kAssignee.statement().parentBB();
    if (header == null || !isCall(kAssignee.statement(), Variable.named("forIndex"))) {
      return null;
    }
    var r = kAssignee.statement().arg(1);
    if (!(r instanceof Read(BlockParameter rParameter))
        || rParameter.owner() != header
        || !(header.jump().expression() instanceof If(var ifTrue, var ifFalse, var _))
        || ifTrue.get() == ifFalse.get()
        || !(header.jump().arg(0) instanceof Read(AssigneeOf b))
        || !isCall(b.statement(), Variable.named("naToTrue"))
        || !(b.statement().arg(1) instanceof Read(AssigneeOf c))
        || c.statement().parentBB() != header
        || !isIntegerCall(c.statement(), LESS)
        || !(c.statement().arg(2) instanceof Read(var k1))
        || k1 != kAssignee
        || !isLengthOf(c.statement().arg(1), seq)) {
      return null;
    }
    var body = ifFalse.get();
    var bb = statement.parentBB();
    if (bb == null
        || body.predecessors().size() != 1
        || !dominators.dominates(body, bb)
        || !startsAtZeroAndSteps(r, kAssignee)) {
      return null;
    }

    var entries =
        header.predecessors().stream().filter(pred -> !dominators.dominates(header, pred)).toList();
    if (entries.size() != 1
        || entries.getFirst().jump().targets().stream().filter(t -> t.bb() == header).count()
            != 1) {
      return null;
    }
    return new RangeRead(statement, range, idx, new Read(kAssignee), header, entries.getFirst());
  }

  /// The `:` call that `seq = toForSeq(x)` is a sequence of, if it gives an integer vector.
  private static @Nullable Statement range(AssigneeOf seq) {
    var toForSeq = seq.statement();
    if (!isCall(toForSeq, Variable.named("toForSeq"))
        || !(toForSeq.arg(1) instanceof Read(AssigneeOf x))
        || !isIntegerVector(x.type())) {
      return null;
    }
    var assumed = false;
    var current = x;
    while (current.statement().expression() instanceof Assume(AssumeType(var type))
        && current.statement().arg(0) instanceof Read(AssigneeOf subject)) {
      assumed |= isIntegerVector(type);
      current = subject;
    }
    var colon = current.statement();
    if (!(colon.expression() instanceof Call(StaticFnCallee callee))
        || callee.isDispatch()
        || !isBuiltin(callee, ":")
        || colon.argCount() != 3) {
      return null;
    }
    var from = typeOf(colon.arg(1));
    var to = typeOf(colon.arg(2));
    if (!isScalarNumber(from)
        || !isScalarNumber(to)
        // An integer `:` has a whole `from`; a constant one that is not never reaches the loop.
        || colon.arg(1) instanceof Constant(var f) && wholeInt(f) == null) {
      return null;
    }
    // A static `v(I)` is not enough when an argument is real: `1L:3e9` is a real vector.
    return assumed || (from.equals(Type.INTEGER) && to.equals(Type.INTEGER)) ? colon : null;
  }

  /// Whether each value of `len` is `length(seq)`.
  private static boolean isLengthOf(Argument len, AssigneeOf seq) {
    return sources(len).stream()
        .allMatch(
            source ->
                source instanceof Read(AssigneeOf a)
                    && a.statement().expression() instanceof Call(StaticFnCallee callee)
                    && isBuiltin(callee, "length")
                    && a.statement().argCount() == 2
                    && a.statement().arg(1) instanceof Read(var s)
                    && s == seq);
  }

  /// Whether each value of `r` is `k` or a constant integer at least 0.
  private static boolean startsAtZeroAndSteps(Argument r, AssigneeOf k) {
    return sources(r).stream()
        .allMatch(
            source ->
                source instanceof Read(var register) && register == k
                    || source instanceof Constant(Value.Int(var i)) && i >= 0);
  }

  /// The arguments that are not phis and flow into `argument` through phis, so each value of
  /// `argument` is a value of one of them. (A loop's counter reaches its back edge through the phis
  /// of the inner loops.)
  private static Set<Argument> sources(Argument argument) {
    var sources = new LinkedHashSet<Argument>();
    var visited = new HashSet<BlockParameter>();
    var worklist = new ArrayDeque<Argument>(List.of(argument));
    while (!worklist.isEmpty()) {
      var next = worklist.pop();
      if (!(next instanceof Read(BlockParameter phi))) {
        sources.add(next);
      } else if (visited.add(phi)) {
        var owner = phi.owner();
        if (owner == null) {
          sources.add(next);
          continue;
        }
        owner.phiArguments(owner.phiParameters().indexOf(phi)).forEach(worklist::addAll);
      }
    }
    return sources;
  }

  /// Insert, on the entry edge of the loop, the computation of the element's start and step.
  ///
  /// `entry: goto H(args)` becomes `entry: goto P()`, `P: if from <= to then A() else D()`,
  /// `A: goto J(1)`, `D: goto J(-1)`, and `J(step): goto H(args)`.
  private static Element element(Abstraction scope, CFG cfg, RangeRead read) {
    var colon = read.range;
    var from = colon.arg(1);
    var to = colon.arg(2);

    if (from instanceof Constant(var f) && to instanceof Constant(var t)) {
      var fromInt = Objects.requireNonNull(wholeInt(f));
      var step = new Constant(new Value.Int(number(f) <= number(t) ? 1 : -1));
      return new Element(new Constant(new Value.Int(fromInt)), step);
    }

    var entryJump = read.entry.jump();
    var entryArgs =
        entryJump.targets().stream()
            .filter(target -> target.bb() == read.header)
            .findFirst()
            .orElseThrow()
            .phiArgs();
    var join = cfg.addBB();
    var step = new BlockParameter(scope.freshName("step"), Type.INTEGER);
    join.appendPhiParameter(step);
    join.setJump(new Jump(new Goto(new BBRef(read.header)), entryArgs));
    var up = cfg.addBB();
    up.setJump(new Jump(new Goto(new BBRef(join)), List.of(new Constant(new Value.Int(1)))));
    var down = cfg.addBB();
    down.setJump(new Jump(new Goto(new BBRef(join)), List.of(new Constant(new Value.Int(-1)))));
    var pre = cfg.addBB();
    pre.setJump(new Jump(new If(new BBRef(up), new BBRef(down), 0), List.of(MISSING)));
    var ascending =
        call(scope, "ascending", LESS_EQUAL, List.of(from, to), Type.BOOLEAN, pre.jump());
    pre.jump().setArg(0, ascending);

    var jump = entryJump.copy((_, argument) -> argument);
    jump.mapTargets(
        target ->
            target.bb() == read.header ? new Target(new BBRef(pre), ImmutableList.of()) : target);
    read.entry.setJump(jump);

    Argument fromInt = from;
    if (from instanceof Constant(var f)) {
      fromInt = new Constant(new Value.Int(Objects.requireNonNull(wholeInt(f))));
    } else if (typeOf(from).equals(Type.REAL)) {
      fromInt = call(scope, "from", AS_INTEGER, List.of(from, MISSING), Type.INTEGER, join.jump());
    }
    return new Element(fromInt, new Read(step));
  }

  /// Insert `name = function(args)` (with a fresh `name`) before `before`, and return a read of it.
  private static Read call(
      Abstraction scope,
      String name,
      Function function,
      List<Argument> args,
      Type returnType,
      org.prlprg.fir.ir.instruction.Instruction before) {
    var signature =
        new Signature(
            args.stream().map(ElideRangeRead::typeOf).collect(ImmutableList.toImmutableList()),
            returnType,
            Effects.NONE);
    var callArgs = new ArrayList<Argument>(List.of(Constant.ELIDED_CLOSURE));
    callArgs.addAll(args);
    var statement =
        new Statement(new Call(new StaticFnCallee(function, false, signature)), callArgs);
    var assignee = statement.setAssignee(scope.freshName(name), returnType);
    statement.insertBefore(before);
    return new Read(assignee);
  }

  /// `arg(1)` of `statement` if it is `function<I,I>(arg, <int constant>)`.
  private static @Nullable Argument argOfIntegerCall(
      Statement statement, Function function, int constant) {
    return isIntegerCall(statement, function)
            && statement.arg(2) instanceof Constant(Value.Int(var c))
            && c == constant
        ? statement.arg(1)
        : null;
  }

  private static boolean isIntegerCall(Statement statement, Function function) {
    return statement.expression() instanceof Call(StaticFnCallee callee)
        && !callee.isDispatch()
        && isBuiltin(callee, function.name().name())
        && statement.argCount() == 3
        && typeOf(statement.arg(1)).equals(Type.INTEGER)
        && typeOf(statement.arg(2)).equals(Type.INTEGER);
  }

  /// Whether `callee` calls the GNU-R builtin `name` (`BASE` and `BUILTINS` have distinct copies).
  private static boolean isBuiltin(StaticFnCallee callee, String name) {
    var function = callee.function();
    return (function.owner() == BUILTINS || function.owner() == BASE)
        && function.name().equals(Variable.named(name));
  }

  private static boolean isCall(Statement statement, Variable name) {
    return statement.expression() instanceof Call(StaticFnCallee callee)
        && !callee.isDispatch()
        && callee.function().name().equals(name)
        && statement.argCount() == 2;
  }

  private static boolean isIntegerVector(Type type) {
    return type.isValue()
        && type.kind() instanceof Kind.PrimitiveVector(var _, var primitive)
        && primitive == PrimitiveKind.INTEGER;
  }

  /// The type of `argument`; `scope` only matters for a `consume`, which never names a scalar here.
  private static Type typeOf(Argument argument) {
    return switch (argument) {
      case Constant(var value) -> value.type();
      case Read(var register) -> register.type();
      case org.prlprg.fir.ir.argument.Consume(var register) -> register.type();
    };
  }

  private static boolean isScalarNumber(Type type) {
    return type.equals(Type.INTEGER) || type.equals(Type.REAL);
  }

  private static double number(Value value) {
    return switch (value) {
      case Value.Int(var i) -> i;
      case Value.Real(var r) -> r;
      default -> throw new IllegalArgumentException("not a number: " + value);
    };
  }

  /// `value` as an `int` if it is a whole number in `int` range (an integer `:` gives that `from`).
  private static @Nullable Integer wholeInt(Value value) {
    var number = number(value);
    return number == Math.rint(number) && number > Integer.MIN_VALUE && number <= Integer.MAX_VALUE
        ? (int) number
        : null;
  }

  private static Function builtin(String name) {
    var function = BUILTINS.localFunction(Variable.named(name));
    return Objects.requireNonNull(function, name);
  }
}
