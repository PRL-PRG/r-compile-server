package org.prlprg.bc2fir;

import static org.prlprg.bc.BCCompiler.MATH1_FUNS;
import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.function.Supplier;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcLabel;
import org.prlprg.bc.ConstPool;
import org.prlprg.bc.LabelName;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.cfg.cursor.JumpInsertion;
import org.prlprg.fir.ir.instruction.Cast;
import org.prlprg.fir.ir.instruction.Closure;
import org.prlprg.fir.ir.instruction.Expression;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Literal;
import org.prlprg.fir.ir.instruction.MaybeForce;
import org.prlprg.fir.ir.instruction.Promise;
import org.prlprg.fir.ir.instruction.Read;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.SuperRead;
import org.prlprg.fir.ir.instruction.SuperWrite;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.instruction.Write;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.PhiParameter;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Lists;
import org.prlprg.util.Reflection;
import org.prlprg.util.Strings;

/// Stores state to compile a promise or closure's code from GNU-R bytecode into FIŘ.
///
/// This could be a set of functions but they would be *very* large and/or pass around lots of
/// variables. Instead, it's a class and those commonly-passed variables are fields.
public class CFGCompiler {
  /// Compile the given bytecode into the given control-flow-graph.
  public static void compile(CFG cfg, Bc bc) {
    new CFGCompiler(cfg, bc);
  }

  // region compiler data types
  // - ADTs to organize the compiler data.
  /// Stores information about a loop being compiled which is shared between multiple instructions.
  private record Loop(LoopType type, @Nullable BB forBody, BB next, BB end) {}

  /** Whether a loop is a GNU-R "while" or "for" loop. */
  private enum LoopType {
    WHILE_OR_REPEAT,
    FOR
  }

  /// A pending complex assignment.
  private record ComplexAssign(boolean isSuper, RegSymSXP name, Expression originalRhs) {}

  /// A call currently being built.
  ///
  /// The function is set on construction, but the argument stack is built after.
  private static class Call {
    private final Fun fun;
    private final List<Arg> args = new ArrayList<>();

    public Call(Fun fun) {
      this.fun = fun;
    }

    sealed interface Fun {
      record Variable(NamedVariable name) implements Fun {}

      record Builtin(CFGCompiler.Builtin builtin) implements Fun {}
    }

    /// Stores information about a call argument: a [Expression] node and optional
    /// name.
    private record Arg(Expression value, @Nullable String name) {
      static Arg missing() {
        // TODO(jakob): Either make it parse, or use a different expression to represent missing.
        return new Arg(new Literal(SEXPs.MISSING_ARG), null);
      }

      Arg(Expression value) {
        this(value, null);
      }
    }

    @Override
    public String toString() {
      return "Call{" + "fun=" + fun + ", args=" + args + '}';
    }
  }

  /// Stores information about a dispatch function being compiled which is shared between multiple
  /// instructions.
  private record Dispatch(Type type, BB after) {

    /// The dispatch function (e.g. "[", "[<-", "c").
    private enum Type {
      C("c", false, false),
      SUBSET("[", false, false),
      SUBASSIGN("[<-", true, false),
      SUBSET2("[[", false, false),
      SUBASSIGN2("[[<-", true, false),
      SUBSETN("[", false, true),
      SUBASSIGNN("[<-", true, true),
      SUBSET2N("[[", false, true),
      SUBASSIGN2N("[[<-", true, true);

      private final Builtin builtin;
      private final boolean hasRhs;
      private final boolean isNForm;

      Type(String builtinName, boolean hasRhs, boolean isNForm) {
        this.builtin = new Builtin(builtinName);
        this.hasRhs = hasRhs;
        this.isNForm = isNForm;
      }
    }
  }

  private record Builtin(String name) {}

  // endregion compiler data types

  // region compiler data
  // - Some of it is constant through the compilation, some changes as instructions are compiled.
  private final CFG cfg;
  private final Bc bc;
  private final Map<Integer, BB> bbByLabel = new HashMap<>();
  private final Set<BB> bbsWithPhis = new HashSet<>();
  private int bcPos = 0;
  private boolean isInUnreachableBytecode = false;
  private final CFGCursor cursor;
  private final List<Expression> stack = new ArrayList<>();
  private final List<Loop> loopStack = new ArrayList<>();
  private final List<ComplexAssign> complexAssignStack = new ArrayList<>();
  private final List<Call> callStack = new ArrayList<>();
  private final List<Dispatch> dispatchStack = new ArrayList<>();

  // endregion compiler data

  // region main compile functions: compile everything
  /// Compile everything.
  private CFGCompiler(CFG cfg, Bc bc) {
    if (cfg.bbs().size() != 1 || !(cfg.entry().jump() instanceof Unreachable)) {
      throw new IllegalArgumentException(
          "CFG must be empty, except assigning parameters to named variables");
    }

    this.cfg = cfg;
    this.bc = bc;

    cursor = new CFGCursor(cfg);
    cursor.moveToLocalEnd();

    doCompile();
  }

  /// Actually compile `bc` into `cfg`.
  private void doCompile() {
    addBcLabelBBs();

    try {
      var code = bc.code();

      // Add instructions to BBs, including jumps which connect them.
      // Also, move to the BB at each label, and skip unreachable bytecode.
      for (bcPos = 0; bcPos < code.size(); bcPos++) {
        if (bbByLabel.containsKey(bcPos) && bbByLabel.get(bcPos) != cursor.bb()) {
          // Move to the BB at this label.
          var nextBb = bbByLabel.get(bcPos);
          if (cursor.bb().jump() instanceof Unreachable) {
            // We need to insert a jump because in the bytecode it just falls through, but there's
            // no such thing as fallthrough in IR.
            setJump(goto_(nextBb));
          }
          if (nextBb.predecessors().isEmpty() && !bbsWithPhis.contains(nextBb)) {
            // This happens after a compiled `repeat`, so the following bytecode is unreachable and
            // we can even remove `nextBb` (since it's entirely unreachable). Maybe it's not correct
            // in other cases.
            isInUnreachableBytecode = true;
            cfg.removeBB(nextBb);
          } else {
            // If we were skipping over unreachable bytecode, stop doing that.
            isInUnreachableBytecode = false;
            // Then move the cursor to the next BB, and change the stack for it.
            moveTo(nextBb);
          }
        }
        if (!isInUnreachableBytecode) {
          // Add instruction, it's not unreachable.
          addBcInstrIrInstrs(code.get(bcPos));
        }
      }
    } catch (Throwable e) {
      throw e instanceof CFGCompilerException e1
          ? e1
          : new CFGCompilerException("uncaught exception: " + e, bc, bcPos, cursor, e);
    }
  }

  // endregion main compile functions: compile everything

  // region map BBs to labels (+ get)
  private void addBcLabelBBs() {
    for (var instr : bc.code()) {
      addBcLabelBBs(instr);
    }
  }

  /// Add and map a basic block to every label referenced by an instruction.
  ///
  /// A jump to a label in bytecode compiles to a jump to the mapped basic block in IR. Some
  /// bytecode instructions compile into more jumps and basic blocks, but those basic blocks only
  /// contain, and jumps only go to, IR compiled from that instruction and from future
  // instructions.
  /// The only scenario we need to insert a jump into IR from previously-compiled instructions, is
  /// when we insert a jump to a label; we exploit this and insert basic blocks for all the labels
  /// before compiling the instructions, so that we know ahead-of-time which block every
  /// instruction's compiled IR belongs to.
  ///
  /// This properly handles the case where multiple instructions have the same label, by not
  /// inserting a new block when it encounters again a label that it already inserted a block for
  /// (although maybe this can't happen in bytecode so we don't need to handle it...).
  private void addBcLabelBBs(BcInstr instr) {
    if (!(instr instanceof Record r)) {
      throw new AssertionError("bytecode instructions should all be java records");
    }

    if (instr instanceof BcInstr.Switch(var _, var _, var chrLabelsIdx, var numLabelsIdx)) {
      // `switch` is special, because the labels are encoded in the constant pool.
      var chrLabels = chrLabelsIdx == null ? null : get(chrLabelsIdx);
      var numLabels = numLabelsIdx == null ? null : get(numLabelsIdx);
      if (chrLabels != null) {
        for (var i = 0; i < chrLabels.size(); i++) {
          var labelPos = chrLabels.get(i);
          ensureBbAt(new BcLabel(labelPos));
        }
      }
      if (numLabels != null) {
        for (var i = 0; i < numLabels.size(); i++) {
          var labelPos = numLabels.get(i);
          ensureBbAt(new BcLabel(labelPos));
        }
      }
      return;
    }

    for (var component : instr.getClass().getRecordComponents()) {
      var clazz = component.getType();
      var labelName = component.getAnnotation(LabelName.class);
      var value = Reflection.getComponentValue(r, component);
      assert clazz == BcLabel.class || labelName == null
          : "only BcLabel fields should be annotated with @LabelName";
      assert clazz != BcLabel.class || labelName != null
          : "BcLabel fields should be annotated with @LabelName";

      if (clazz == BcLabel.class && value != null) {
        ensureBbAt((BcLabel) value);
      }
    }
  }

  /// Adds a basic block and maps it to the given label, if a basic block for the given label
  /// doesn't already exist (otherwise no-op).
  private void ensureBbAt(BcLabel label) {
    int pos = label.target();
    if (!bbByLabel.containsKey(pos)) {
      bbByLabel.put(pos, cfg.addBB());
    }
  }

  /// Returns the basic block corresponding to the given label
  ///
  /// Specifically, this returns the block inserted by [#ensureBbAt(BcLabel)], which should've
  // been
  /// compiled before we started "actually" compiling the bytecode instructions, and this is
  // called
  /// while actually compiling the instructions.
  private BB bbAt(BcLabel label) {
    int pos = label.target();
    assert bbByLabel.containsKey(pos) : "no BB at position " + pos;
    return bbByLabel.get(pos);
  }

  /// Gets the basic block immediately after the current bytecode instruction.
  ///
  /// Specifically, returns the BB in `bbByLabel` mapped to the position immediately after,
  /// creating it if this mapping doesn't exist.
  private BB bbAfterCurrent() {
    return bbByLabel.computeIfAbsent(bcPos + 1, _ -> cfg.addBB());
  }

  // endregion map BBs to labels (+ get)

  // region main compile functions: compile individual things
  private void addBcInstrIrInstrs(BcInstr instr) {
    switch (instr) {
      case BcInstr.Return() -> {
        var retVal = pop();
        assertStackForReturn();
        setJump(new Return(retVal));
        setInUnreachableBytecode();
      }
      case BcInstr.Goto(var label) -> {
        var bb = bbAt(label);
        setJump(goto_(bb));
        addPhiInputsForStack(bb);
        setInUnreachableBytecode();
      }
      case BcInstr.BrIfNot(var _, var label) -> {
        var bb = bbAt(label);
        setJump(branch(pop(), bbAfterCurrent(), bb));
        addPhiInputsForStack(bb);
      }
      case BcInstr.Pop() -> pop();
      case BcInstr.Dup() -> {
        var value = pop();
        push(value);
        push(value);
      }
      case BcInstr.PrintValue() -> push(builtin("print", pop()));
      case BcInstr.StartLoopCntxt(var isForLoop, var end) -> {
        // REACH: Complicated loop contexts.
        // Currently we only handle simple cases like PIR, where `next` and `break` aren't in
        // promises. To do this (handle the non-promise cases and fail on the promise ones), we
        // maintain a stack of loops (markers, `cond` and `end` blocks) within each `CFGCompiler`.
        // In the simple non-promise cases, we encounter `break` or `next` while the loop stack has
        // an element, which is the innermost loop that we want to break or continue. In a promise,
        // if there is no inner loop, the loop stack is empty, so we know to fail and can report the
        // failure accurately.

        // We already handle `for` loops in `StartFor` (due to the very specific bytecode pattern of
        // for loops), but need to handle `while` and `repeat` since they don't have specific
        // bytecode instructions.
        if (isForLoop) {
          // Specifically, we step over this instruction if we encounter `StartFor`, so it's never
          // compiled directly unless the bytecode is malformed.
          throw fail("StartLoopCntxt: expected to be preceded by StartFor");
        }

        // This takes advantage of the invariant that the loop body is right after
        // `StartLoopCntxt`, so a label should exist here.
        var bodyBb = bbAfterCurrent();
        var endBb = bbAt(end);

        pushWhileOrRepeatLoop(bodyBb, endBb);
      }
      case BcInstr.EndLoopCntxt(var isForLoop) -> {
        // We already handle `for` loops in `EndFor` (similar to `StartLoopCntxt`).
        // We don't auto-skip over them though because we don't need to.
        if (!isForLoop) {
          compileEndLoop(LoopType.WHILE_OR_REPEAT);
        }
      }
      case BcInstr.StartFor(var _, var elemName, var step) -> {
        // This takes advantage of invariants expected between `StartFor/StepFor/EndFor` and just
        // compiles the entire for loop logic (everything other than the loop forBody). We then do a
        // weak sanity check that the bytecode upholds these invariants by including `StepFor` in
        // the step branch and `EndFor` in the end branch, although it may break the invariants
        // other ways and simply not be noticed.
        var loopCntxt = bc.code().get(bcPos + 1) instanceof BcInstr.StartLoopCntxt l ? l : null;

        BB forBodyBb;
        BB stepBb;
        BB endBb;
        if (loopCntxt == null) {
          forBodyBb = bbAfterCurrent();
          stepBb = bbAt(step);
          endBb = cfg.addBB();
        } else {
          var stepGoto = bc.code().get(bcPos + 2) instanceof BcInstr.Goto g ? g : null;
          if (stepGoto == null) {
            throw fail(
                "StartFor followed by StartLoopCntxt, expected the StartLoopCntxt to be followed by Goto");
          }
          if (!bbByLabel.containsKey(bcPos + 3)) {
            throw fail(
                "StartFor followed by StartLoopCntxt followed by Goto, expected a label to be immediately after the Goto");
          }
          forBodyBb = bbByLabel.get(bcPos + 3);
          stepBb = bbAt(stepGoto.dest());
          endBb = bbAt(loopCntxt.end());
        }

        // For loop init
        var seq = intrinsic("toForSeq", pop());
        var length = builtin("length", 0, seq);
        var init = new Literal(SEXPs.integer(0));
        var index = cfg.scope().addLocal();
        insert(new Write(index, init));
        push(new Read(index));
        setJump(goto_(stepBb));

        // For loop step
        moveTo(stepBb);
        // Increment the index
        var index1 = builtin("+", 0, pop(), new Literal(SEXPs.integer(1)));
        push(index1);
        // Compare the index to the length
        var cond = builtin("<", 0, length, index1);
        // Jump to `end` if it's greater (remember, GNU-R indexing is one-based)
        setJump(branch(cond, endBb, forBodyBb));

        // For loop body
        moveTo(forBodyBb);
        // Extract element at index
        var elem = builtin("[[<-", 0, seq, index1);
        // Store in the element variable
        insert(new Write(getVar(elemName), elem));
        // Now we compile the rest of the body...
        // When we encounter `StepFor`, we know that the body is over. Note that we may no longer be
        // in `forBodyBb`: that is just the first BB in the for body, there may be more.
        pushForLoop(forBodyBb, stepBb, endBb);

        if (loopCntxt != null) {
          // We already handled the next 2 instructions.
          // The `StartLoopCntxt` could be made into a no-op, but the `Goto` would break this setup
          // because we've already added the goto to `stepBb` and moved to `forBodyBb`.
          bcPos += 2;
        }
      }
      case BcInstr.DoLoopNext() -> {
        // The bytecode compilers don't actually generate these instructions, are they deprecated?
        // Regardless, we can still support them.
        if (cfg.isPromise() && !inLocalLoop()) {
          throw failUnsupported("'next' or 'break' in promise (complex loop context)");
        }
        var stepBb = topLoop().next;
        setJump(goto_(stepBb));
        addPhiInputsForStack(stepBb);

        setInUnreachableBytecode();
      }
      case BcInstr.DoLoopBreak() -> {
        // The bytecode compilers don't actually generate these instructions, are they deprecated?
        // Regardless, we can still support them.
        if (cfg.isPromise() && !inLocalLoop()) {
          throw failUnsupported("'next' or 'break' in promise (complex loop context)");
        }
        var endBb = topLoop().end;
        setJump(goto_(endBb));
        addPhiInputsForStack(endBb);

        setInUnreachableBytecode();
      }
      case BcInstr.StepFor(var body) -> {
        // This is the instruction immediately after the end of the for loop body (excluding `next`
        // and `break`).

        // First do a sanity check
        var loop = topLoop();
        if (loop.type != LoopType.FOR) {
          throw fail("StepFor: expected a for loop");
        }
        var forBodyBb = bbAt(body);
        var stepBb = loop.next;
        var endBb = loop.end;
        if (forBodyBb != loop.forBody) {
          throw fail(
              "StepFor: expected forBody BB "
                  + Objects.requireNonNull(loop.forBody).label()
                  + " but got "
                  + forBodyBb.label());
        }
        if (cursor.bb() != stepBb || cursor.instructionIndex() != 0) {
          throw fail("StepFor: expected to be at start of step BB " + stepBb.label());
        }

        // We must explicitly move to `endBb` because there may not be a label corresponding to it,
        // and we don't want to compile anything else in `stepBb`.
        moveTo(endBb);
      }
      case BcInstr.EndFor() -> compileEndLoop(LoopType.FOR);
      case BcInstr.SetLoopVal() -> {
        // This one is weird. It doesn't get inserted by the Java compiler anywhere.
        // However it has a simple (unhelpful) implementation, so even if unused, we'll support it.
        pop();
        pop();
        push(new Literal(SEXPs.NULL));
      }
      case BcInstr.Invisible() -> insert(intrinsic("invisible", 0));
      case BcInstr.LdConst(var constant) -> push(new Literal(get(constant)));
      case BcInstr.LdNull() -> push(new Literal(SEXPs.NULL));
      case BcInstr.LdTrue() -> push(new Literal(SEXPs.TRUE));
      case BcInstr.LdFalse() -> push(new Literal(SEXPs.FALSE));
      case BcInstr.GetVar(var name) -> {
        push(new Read(getVar(name)));
        push(new MaybeForce(pop()));
      }
      case BcInstr.DdVal(var name) -> {
        var ddIndex = NamedVariable.ddNum(get(name).ddNum());
        push(new Read(ddIndex));
        push(new MaybeForce(pop()));
      }
      case BcInstr.SetVar(var name) -> insert(new Write(getVar(name), top()));
      case BcInstr.GetFun(var name) -> pushCall(getVar(name));
        // TODO: Ensure function lookup is global.
      case BcInstr.GetGlobFun(var name) -> pushCall(getVar(name));
        // ???: GNU-R calls `SYMVALUE` and `INTERNAL` to implement these, but we don't store that in
        //  our `RegSymSxp` data-structure. So the next three implementations may be incorrect.
      case BcInstr.GetSymFun(var name) -> pushCall(new Builtin(get(name).name()));
      case BcInstr.GetBuiltin(var name) -> pushCall(new Builtin(get(name).name()));
      case BcInstr.GetIntlBuiltin(var name) -> pushCall(new Builtin(get(name).name()));
      case BcInstr.CheckFun() -> {
        var funVar = Variable.named("*tmp*");
        insert(new Write(funVar, pop()));
        insert(checkFun(new Read(funVar)));
        pushCall(funVar);
      }
      case BcInstr.MakeProm(var code) -> {
        if (!(this.get(code) instanceof BCodeSXP bcSxp)) {
          throw failUnsupported("Promise with non-bytecode body at index " + code);
        }
        var bc = bcSxp.bc();

        var cfg = new CFG(scope());
        compile(cfg, bc);

        pushCallArg(new Promise(Type.ANY, Effects.ANY, cfg));
      }
      case BcInstr.DoMissing() -> pushMissingCallArg();
      case BcInstr.SetTag(var tag) -> {
        if (tag != null) {
          setNameOfLastCallArg(
              get(tag)
                  .reifyString()
                  .orElseThrow(() -> fail("SetTag: tag must be a regular symbol or string")));
        }
      }
      case BcInstr.DoDots() -> pushCallArg(new Read(NamedVariable.DOTS));
      case BcInstr.PushArg() -> pushCallArg(pop());
      case BcInstr.PushConstArg(var constant) -> pushCallArg(new Literal(get(constant)));
      case BcInstr.PushNullArg() -> pushCallArg(new Literal(SEXPs.NULL));
      case BcInstr.PushTrueArg() -> pushCallArg(new Literal(SEXPs.TRUE));
      case BcInstr.PushFalseArg() -> pushCallArg(new Literal(SEXPs.FALSE));
      case BcInstr.Call(var _), BcInstr.CallBuiltin(var _) -> compileCall();
      case BcInstr.CallSpecial(var astId) -> {
        var ast = get(astId);
        if (!(ast.fun() instanceof RegSymSXP builtinSymbol)) {
          throw fail("CallSpecial: expected a symbol (builtin id) function");
        }
        var builtinName = builtinSymbol.name();
        // Note that some of these are constant symbols and language objects, they should be treated
        // like `eval`. We also assume builtins never use names.
        // GNU-R just passes `CDR(call)` to the builtin.
        var args =
            ast.args().stream()
                .map(arg -> (Expression) new Literal(arg.value()))
                .toArray(Expression[]::new);
        push(builtin(builtinName, args));
      }
      case BcInstr.MakeClosure(var arg) -> {
        var fb = get(arg);
        var forms = (ListSXP) fb.get(0);
        var body = fb.get(1);
        var ast = fb.size() > 2 ? fb.get(2) : null;
        var cloSxp =
            SEXPs.closure(
                forms, body, SEXPs.EMPTY_ENV, ast == null ? null : Attributes.srcref(ast));

        // TODO: infer name. Eventually, we also must handle name conflicts.
        var generatedName = "inner" + module().localFunctions().size();

        var code = ClosureCompiler.compile(module(), generatedName, cloSxp);

        push(new Closure(code));
      }
      case BcInstr.UMinus(var _) -> push(mkUnop("-"));
      case BcInstr.UPlus(var _) -> push(mkUnop("+"));
      case BcInstr.Sqrt(var _) -> push(mkUnop("sqrt"));
      case BcInstr.Add(var _) -> push(mkBinop("+"));
      case BcInstr.Sub(var _) -> push(mkBinop("-"));
      case BcInstr.Mul(var _) -> push(mkBinop("*"));
      case BcInstr.Div(var _) -> push(mkBinop("/"));
      case BcInstr.Expt(var _) -> push(mkBinop("^"));
      case BcInstr.Exp(var _) -> push(mkUnop("exp"));
      case BcInstr.Eq(var _) -> push(mkBinop("=="));
      case BcInstr.Ne(var _) -> push(mkBinop("!="));
      case BcInstr.Lt(var _) -> push(mkBinop("<"));
      case BcInstr.Le(var _) -> push(mkBinop("<="));
      case BcInstr.Ge(var _) -> push(mkBinop(">="));
      case BcInstr.Gt(var _) -> push(mkBinop(">"));
      case BcInstr.And(var _) -> push(mkBinop("&&"));
      case BcInstr.Or(var _) -> push(mkBinop("||"));
      case BcInstr.Not(var _) -> push(mkUnop("!"));
      case BcInstr.DotsErr() -> insert(stop("'...' used in an incorrect context"));
      case BcInstr.StartAssign(var name) -> {
        var lhs = new Read(getVar(name));
        var rhs = top();
        pushComplexAssign(false, get(name), lhs, rhs);
      }
      case BcInstr.EndAssign(var name) -> {
        var lhs = popComplexAssign(false, get(name));
        insert(new Write(getVar(name), lhs));
      }
      case BcInstr.StartSubset(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBSET, after);
      case BcInstr.DfltSubset() -> compileDefaultDispatch(Dispatch.Type.SUBSET);
      case BcInstr.StartSubassign(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGN, after);
      case BcInstr.DfltSubassign() -> compileDefaultDispatch(Dispatch.Type.SUBASSIGN);
      case BcInstr.StartC(var _, var after) -> compileStartDispatch(Dispatch.Type.C, after);
      case BcInstr.DfltC() -> compileDefaultDispatch(Dispatch.Type.C);
      case BcInstr.StartSubset2(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBSET2, after);
      case BcInstr.DfltSubset2() -> compileDefaultDispatch(Dispatch.Type.SUBSET2);
      case BcInstr.StartSubassign2(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGN2, after);
      case BcInstr.DfltSubassign2() -> compileDefaultDispatch(Dispatch.Type.SUBASSIGN2);
      case BcInstr.Dollar(var _, var member) -> {
        var after = cfg.addBB();

        var target = top();
        compileGeneralDispatchCommon(new Builtin("$"), false, target, null, after);

        var call = popCall();
        if (!call.fun.equals(new Call.Fun.Builtin(new Builtin("$")))) {
          throw fail("Dollar: expected a call to $");
        }

        pop();
        push(builtin("$", target, new Literal(get(member))));
        setJump(goto_(after));

        moveTo(after);
      }
      case BcInstr.DollarGets(var _, var member) -> {
        var after = cfg.addBB();

        var rhs = pop();
        var target = top();
        compileGeneralDispatchCommon(new Builtin("$<-"), false, target, rhs, after);

        var call = popCall();
        if (!call.fun.equals(new Call.Fun.Builtin(new Builtin("$<-")))) {
          throw fail("Dollar: expected a call to $");
        }

        pop();
        push(builtin("$<-", target, new Literal(get(member)), rhs));
        setJump(goto_(after));

        moveTo(after);
      }
      case BcInstr.IsNull() -> push(builtin("==", pop(), new Literal(SEXPs.NULL)));
      case BcInstr.IsLogical() -> push(builtin("is.logical", pop()));
      case BcInstr.IsInteger() -> push(builtin("is.integer", pop()));
      case BcInstr.IsDouble() -> push(builtin("is.double", pop()));
      case BcInstr.IsComplex() -> push(builtin("is.complex", pop()));
      case BcInstr.IsCharacter() -> push(builtin("is.character", pop()));
      case BcInstr.IsSymbol() -> push(builtin("is.symbol", pop()));
      case BcInstr.IsObject() -> push(builtin("is.object", pop()));
      case BcInstr.IsNumeric() -> push(builtin("is.numeric", pop()));
      case BcInstr.VecSubset(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBSETN, 2);
      case BcInstr.MatSubset(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBSETN, 3);
      case BcInstr.VecSubassign(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGNN, 3);
      case BcInstr.MatSubassign(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGNN, 4);
      case BcInstr.And1st(var _, var shortCircuit) -> {
        var shortCircuitBb = bbAt(shortCircuit);
        push(builtin("as.logical", pop()));
        setJump(branch(top(), bbAfterCurrent(), shortCircuitBb));
        addPhiInputsForStack(shortCircuitBb);
      }
      case BcInstr.And2nd(var _) -> {
        push(builtin("as.logical", pop()));
        push(mkBinop("&&"));
        setJump(goto_(bbAfterCurrent()));
      }
      case BcInstr.Or1st(var _, var shortCircuit) -> {
        var shortCircuitBb = bbAt(shortCircuit);
        push(builtin("as.logical", pop()));
        setJump(branch(top(), shortCircuitBb, bbAfterCurrent()));
        addPhiInputsForStack(shortCircuitBb);
      }
      case BcInstr.Or2nd(var _) -> {
        push(builtin("as.logical", pop()));
        push(mkBinop("||"));
        setJump(goto_(bbAfterCurrent()));
      }
      case BcInstr.GetVarMissOk(var name) -> {
        push(new Read(getVar(name)));
        push(new MaybeForce(pop()));
      }
      case BcInstr.DdValMissOk(var name) -> {
        var ddIndex = get(name).ddNum();
        push(new Read(NamedVariable.ddNum(ddIndex)));
        push(new MaybeForce(pop()));
      }
      case BcInstr.Visible() -> insert(intrinsic("visible", 0));
      case BcInstr.SetVar2(var name) -> insert(new SuperWrite(getVar(name), top()));
      case BcInstr.StartAssign2(var name) -> {
        // GNU-R has "cells" and stores the assign on the main stack.
        // But we don't have cells, and since we're compiling, we can store the assignment on its
        // own stack.
        var lhs = new SuperRead(getVar(name));
        var rhs = top();
        pushComplexAssign(true, get(name), lhs, rhs);
      }
      case BcInstr.EndAssign2(var name) -> {
        var lhs = popComplexAssign(true, get(name));
        insert(new SuperWrite(getVar(name), lhs));
      }
      case BcInstr.SetterCall(var _, var _) -> {
        // GNU-R has to wrap these call args in evaluated promises depending on the call type,
        // but presumably this is something we abstract. This is also what `valueExpr` is for,
        // which is why it's unused.
        var rhs = pop();
        var lhs = pop();
        prependCallArg(lhs);
        pushCallArg(rhs);
        compileCall();
      }
      case BcInstr.GetterCall(var _) -> {
        // GNU-R has to wrap this call arg in an evaluated promise depending on the call type,
        // but presumably this is something we abstract.
        prependCallArg(top());
        compileCall();
      }
      case BcInstr.SpecialSwap() -> {
        var value = pop();
        var value2 = pop();
        push(value);
        push(value2);
      }
      case BcInstr.Dup2nd() -> {
        var value = pop();
        var value2 = top();
        push(value);
        push(value2);
      }
      case BcInstr.ReturnJmp() -> {
        var retVal = pop();
        assertStackForReturn();
        // ???: non-local return?
        setJump(new Return(retVal));
        setInUnreachableBytecode();
      }
      case BcInstr.Switch(var _, var namesIdx, var chrLabelsIdx, var numLabelsIdx) -> {
        var names = namesIdx == null ? null : get(namesIdx);
        var chrLabels = chrLabelsIdx == null ? null : get(chrLabelsIdx);
        var numLabels = numLabelsIdx == null ? null : get(numLabelsIdx);

        var value = pop();

        var isVector = builtin("is.vector", value, new Literal(SEXPs.string("any")));
        var isVectorBb = cfg.addBB();
        var isNotVectorBb = cfg.addBB();
        setJump(branch(isVector, isVectorBb, isNotVectorBb));

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(isNotVectorBb);
        insert(stop("EXPR must be a length 1 vector"));
        setJump(new Unreachable());

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(isVectorBb);
        var isFactor = builtin("inherits", value, new Literal(SEXPs.string("factor")));
        var isFactorBb = cfg.addBB();
        var isNotFactorBb = cfg.addBB();
        setJump(branch(isFactor, isFactorBb, isNotFactorBb));

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(isNotFactorBb);
        insert(
            warning(
                "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead."));
        setJump(goto_(isFactorBb));

        // Has two predecessors, but the second defines no values (means no phis), so we can call
        // `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(isFactorBb);
        var isString = builtin("is.character", value);
        var stringBb = cfg.addBB();
        var asIntegerBb = cfg.addBB();
        setJump(branch(isString, stringBb, asIntegerBb));

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(stringBb);
        if (names == null) {
          if (numLabels == null) {
            insert(stop("bad numeric 'switch' offsets"));
            setJump(new Unreachable());
          } else if (numLabels.isScalar()) {
            insert(warning("'switch' with no alternatives"));
            setJump(goto_(new BcLabel(numLabels.get(0))));
          } else {
            insert(stop("numeric EXPR required for 'switch' without named alternatives"));
            setJump(new Unreachable());
          }
        } else {
          if (chrLabels == null) {
            insert(stop("bad character 'switch' offsets"));
            setJump(new Unreachable());
          } else if (names.size() != chrLabels.size()) {
            insert(stop("bad 'switch' names"));
            setJump(new Unreachable());
          } else {
            for (var i = 0; i < chrLabels.size() - 1; i++) {
              var name = names.get(i);
              var ifMatch = bbAt(new BcLabel(chrLabels.get(i)));
              var cond = builtin("==", value, new Literal(SEXPs.string(name)));
              insert(next -> branch(cond, ifMatch, next));
              addPhiInputsForStack(ifMatch);
            }
            // `switch` just goes to the last label regardless of whether it matches.
            var lastBb = bbAt(new BcLabel(chrLabels.last()));
            setJump(goto_(lastBb));
            addPhiInputsForStack(lastBb);
          }
        }

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(asIntegerBb);
        if (numLabels == null) {
          insert(stop("bad numeric 'switch' offsets"));
          setJump(new Unreachable());
        } else if (numLabels.isScalar()) {
          insert(warning("'switch' with no alternatives"));
          setJump(goto_(new BcLabel(numLabels.get(0))));
        } else {
          var asInteger = intrinsic("asSwitchIdx", value);
          for (var i = 0; i < numLabels.size() - 1; i++) {
            var ifMatch = bbAt(new BcLabel(numLabels.get(i)));
            var cond = builtin("==", asInteger, new Literal(SEXPs.integer(i)));
            insert(next -> branch(cond, ifMatch, next));
            addPhiInputsForStack(ifMatch);
          }
          // `switch` just goes to the last label regardless of whether it matches.
          var lastBb = bbAt(new BcLabel(numLabels.last()));
          setJump(goto_(lastBb));
          addPhiInputsForStack(lastBb);
        }

        // The `switch` executes a GOTO on all branches, so the following code is unreachable unless
        // there's a label immediately after (which is probably guaranteed).
        setInUnreachableBytecode();
      }
      case BcInstr.StartSubsetN(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBSETN, after);
      case BcInstr.StartSubassignN(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGNN, after);
      case BcInstr.VecSubset2(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBSET2N, 2);
      case BcInstr.MatSubset2(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBSET2N, 3);
      case BcInstr.VecSubassign2(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGN2N, 3);
      case BcInstr.MatSubassign2(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGN2N, 4);
      case BcInstr.StartSubset2N(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBSET2N, after);
      case BcInstr.StartSubassign2N(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGN2N, after);
      case BcInstr.SubsetN(var _, var n) -> compileDefaultDispatchN(Dispatch.Type.SUBSETN, n + 1);
      case BcInstr.Subset2N(var _, var n) -> compileDefaultDispatchN(Dispatch.Type.SUBSET2N, n + 1);
      case BcInstr.SubassignN(var _, var n) ->
          compileDefaultDispatchN(Dispatch.Type.SUBASSIGNN, n + 2);
      case BcInstr.Subassign2N(var _, var n) ->
          compileDefaultDispatchN(Dispatch.Type.SUBASSIGN2N, n + 2);
      case BcInstr.Log(var _) -> push(mkUnop("log"));
      case BcInstr.LogBase(var _) -> push(mkBinop("log"));
      case BcInstr.Math1(var _, var funId) -> push(mkUnop(MATH1_FUNS.get(funId)));
      case BcInstr.DotCall(var _, var numArgs) -> {
        if (stack.size() < numArgs + 1) {
          throw fail("stack underflow");
        }
        var funAndArgs = stack.subList(stack.size() - numArgs - 1, stack.size());
        var args = funAndArgs.toArray(Expression[]::new);
        funAndArgs.clear();

        push(builtin(".Call", args));
      }
      case BcInstr.Colon(var _) -> push(mkBinop(":"));
      case BcInstr.SeqAlong(var _) -> push(builtin("seq_along", pop()));
      case BcInstr.SeqLen(var _) -> push(builtin("seq_len", pop()));
      case BcInstr.BaseGuard(var exprIdx, var after) -> {
        // PIR apparently just ignores the guards (`rir2pir.cpp:341`), but we can handle here.
        var expr = get(exprIdx);
        var fun = Variable.named(((RegSymSXP) expr.fun()).name());
        var sym = loadFun(fun, Env.LOCAL);
        var base = loadFun(fun, Env.BASE);
        var guard = builtin("==", sym, base);

        var safeBb = cfg.addBB();
        var fallbackBb = cfg.addBB();
        var afterBb = bbAt(after);
        setJump(branch(guard, safeBb, fallbackBb));

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(fallbackBb);
        // Compile a call.
        // Also, pass `Constant`s containing symbols and language objects to arguments,
        // expecting them to be `eval`ed, like in `CallSpecial`.
        var argNames =
            expr.args().names().stream()
                .map(n -> n.isEmpty() ? "" : n)
                .collect(ImmutableList.toImmutableList());
        var args =
            expr.args().values().stream()
                .map(v -> (Expression) new Literal(v))
                .collect(ImmutableList.toImmutableList());
        push(new org.prlprg.fir.ir.instruction.Call(new DynamicCallee(fun, argNames), args));
        setJump(goto_(afterBb));
        addPhiInputsForStack(afterBb);
        pop(); // the `CallBuiltin` pushed above.

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(safeBb);
      }
      case BcInstr.IncLnk(),
          BcInstr.DecLnk(),
          BcInstr.DeclnkN(var _),
          BcInstr.IncLnkStk(),
          BcInstr.DecLnkStk() -> {}
    }
  }

  private Expression mkUnop(String builtinName) {
    return builtin(builtinName, pop());
  }

  private Expression mkBinop(String builtinName) {
    var rhs = pop();
    var lhs = pop();
    return builtin(builtinName, lhs, rhs);
  }

  /**
   * End the previously-compiled for loop instruction (the latest {@link #pushWhileOrRepeatLoop(BB,
   * BB)} or {@link #pushForLoop(BB, BB, BB)}): pop its data, assert that the loop is of the correct
   * type, and that the cursor is right after its end.
   */
  private void compileEndLoop(LoopType type) {
    var loop = popLoop();
    if (loop.type != type) {
      throw fail("expected a " + type + " loop");
    }
    if ((cursor.bb() != loop.end
            // If there is a `break` instruction in a for loop, there will be a label at `EndFor`,
            // so `loop.end` will only consist of a `Goto` to the "real" end BB. This is allowed,
            // and this long inverted AND-chain checks if it's the case.
            && !(loop.end.statements().isEmpty()
                && loop.end.jump() instanceof Goto(var loopEndGoto)
                && loopEndGoto.bb() == cursor.bb()))
        || cursor.instructionIndex() != 0) {
      throw fail("compileEndLoop: expected to be at start of end BB " + loop.end.label());
    }
  }

  private void compileStartDispatch(Dispatch.Type type, BcLabel after) {
    compileStartDispatch(type, bbAt(after));
  }

  private void compileStartDispatch(Dispatch.Type type, BB after) {
    var rhs = type.hasRhs ? pop() : null;
    var target = top();
    compileGeneralDispatchCommon(type.builtin, type.isNForm, target, rhs, after);
    if (rhs != null) {
      push(rhs);
    }

    if (!type.isNForm) {
      pushCallArg(target);
    }

    pushDispatch(type, after);
  }

  private void compileGeneralDispatchCommon(
      Builtin fun, boolean isNForm, Expression target, @Nullable Expression rhs, BB after) {
    // ???: Maybe avoid compiling optimized dispatch code, since we can optimize it ourselves.
    var isObject = builtin("is.object", target);
    var objectBb = cfg.addBB();
    var nonObjectBb = cfg.addBB();
    setJump(branch(isObject, objectBb, nonObjectBb));

    // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
    cursor.moveToStart(objectBb);
    var target1 = pop();
    assert target == target1
        : "'compileGeneralDispatchCommon' only called with top-of-stack as 'target'";

    var funNameSexp = new Literal(SEXPs.string(fun.name()));
    var dispatchExpr =
        rhs == null
            ? intrinsic("tryDispatchBuiltin", funNameSexp, target)
            : intrinsic("tryDispatchBuiltin", funNameSexp, target, rhs);
    var dispatchReg = scope().addLocal();
    insert(new Write(dispatchReg, dispatchExpr));
    var dispatched = intrinsic("getTryDispatchBuiltinDispatched", new Read(dispatchReg));
    var dispatchValue = intrinsic("getTryDispatchBuiltinValue", new Read(dispatchReg));

    insert(next -> branch(dispatched, next, nonObjectBb));
    push(dispatchValue);
    setJump(goto_(after));
    addPhiInputsForStack(after);
    pop(); // the `CallBuiltin` pushed above.

    // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
    cursor.moveToStart(nonObjectBb);
    push(target);

    if (!isNForm) {
      pushCall(fun);
    }
  }

  private void compileDefaultDispatch(Dispatch.Type type) {
    assert !type.isNForm : "use compileDefaultDispatchN for `...N` bytecodes";

    if (type.hasRhs) {
      pushCallArg(pop());
    }

    var dispatch = popDispatch(type);
    var call = popCall();

    pop();

    var argValues = Lists.map(call.args, Call.Arg::value).toArray(Expression[]::new);
    push(builtin(type.builtin.name(), argValues));

    setJump(goto_(bbAfterCurrent()));
    if (bbAfterCurrent() != dispatch.after) {
      throw fail("expected to be immediately before `after` BB " + dispatch.after.label());
    }
  }

  private void compileDefaultDispatchN(Dispatch.Type type, int numArgs) {
    assert type.isNForm : "use compileDefaultDispatch for non-`...N` bytecodes";

    var dispatch = popDispatch(type);
    var argsList = stack.subList(stack.size() - numArgs, stack.size());
    var args = argsList.toArray(Expression[]::new);
    argsList.clear();

    // Unlike `compileDefaultDispatch`, there's no `Call`, instead we take the args from the stack.
    // Like `compileDefaultDispatch`, there's either a specialized instruction or a fallback call,
    // although in this the number of arguments is known.
    push(builtin(type.builtin.name(), args));

    setJump(goto_(bbAfterCurrent()));
    if (bbAfterCurrent() != dispatch.after) {
      throw fail("expected to be immediately before `after` BB " + dispatch.after.label());
    }
  }

  private void compileCall() {
    compileCall(popCall());
  }

  private void compileCall(Call call) {
    var names =
        call.args.stream()
            .map(arg -> arg.name == null ? "" : arg.name)
            .collect(ImmutableList.toImmutableList());
    var args = call.args.stream().map(arg -> arg.value).collect(ImmutableList.toImmutableList());
    var callInstr =
        switch (call.fun) {
          case Call.Fun.Variable(var funName) ->
              new org.prlprg.fir.ir.instruction.Call(new DynamicCallee(funName, names), args);
          case Call.Fun.Builtin(var builtin) ->
              builtin(builtin.name, args.toArray(Expression[]::new));
        };
    push(callInstr);

    // Special-case due to weird and possibly buggy (GNU-R) bytecode compiler behavior:
    // when the bytecode compiler compiles a `switch` with a missing label, it inserts a branch that
    // ends with `stop("empty alternative in numeric switch")`. This call pushes an extra value
    // (call return) onto the stack. When interpreted, the call to `stop` usually\* exits the
    // function, so the stack no longer matters. But when we compile to IR, we still expect the
    // stack to be balanced, and this call return is unaccounted for. Therefore, we have to special-
    // case, and we do so by checking a) the exact function and b) we're about to go to another
    // label without any phis. If both these conditions are met, we're guaranteed to be in this
    // special-case (unless there's another compiler bug causing stack imbalances, and even then,
    // very unlikely), so we pop the result of the call to re-balance the stack.
    //
    // \* If `stop` is overridden in the function, the bytecode compiler will use the overridden
    // call, which is different than the AST interpreter which errors regardless. This and the fact
    // that the stack now has an extra value until the function returns, are why it may be a bug.
    if (callInstr instanceof org.prlprg.fir.ir.instruction.Call c
        && c.callee() instanceof DynamicCallee ca
        && ca.variable().name().equals("stop")
        && c.arguments().size() == 1
        && c.arguments()
            .getFirst()
            .equals(new Literal(SEXPs.string("empty alternative in numeric switch")))
        && !(bc.code().get(bcPos + 1) instanceof BcInstr.Return)) {
      pop();
    }
  }

  // endregion main compile functions: compile individual things

  // region `moveTo` and phis
  /// A jump target to the given [BB] with all variables on the stack as arguments.
  private Target target(BB bb) {
    return new Target(bb, ImmutableList.copyOf(stack));
  }

  /// Move the cursor to the basic block _and_ replace all stack arguments with its phi parameters.
  ///
  /// Replacing the stack with phis is part of converting a stack-based bytecode to SSA-based IR.
  /// Since actual interpretation we may encounter this block from different predecessors, it
  // needs
  /// phi nodes in order to preserve the SSA invariant "each variable is assigned exactly once".
  /// Although the block may have only one predecessor, in which case phi nodes are unnecessary,
  // we
  /// start by assigning phi nodes to every block, and then the single-input phis in a cleanup
  // phase
  /// later.
  ///
  /// If the current block is a predecessor to the given block, the given block's stack will have
  /// a phi for each stack node in the current block, and one of the inputs will be said node (see
  /// [#addPhiInputsForStack(BB)]). We call [#addPhiInputsForStack(BB)] here for
  /// convenience, although it makes this method have 2 functions (add phis if the next block is a
  /// successor, and move to it). Otherwise, we don't know what its stack will look like from the
  /// current block, but we can rely on the invariant that it already had phis added from a
  // different
  /// block, so we use the phis that were already added (if it didn't have phis added from a
  /// different block, we throw [AssertionError]).
  private void moveTo(BB bb) {
    // First ensure the block has phis, and add inputs from this block if necessary.
    if (bb.predecessors().contains(cursor.bb())) {
      // Make sure this block has phis representing the arguments currently on the stack, then
      // replace the stack with those phis (this is how to convert a stack-based bytecode to an
      // SSA-form IR).
      addPhiInputsForStack(bb);
    } else {
      // This won't work unless we've already added phis from another BB
      assert bbsWithPhis.contains(bb)
          : "tried to move to BB "
              + bb.label()
              + " which isn't a successor and didn't have phis added yet, so we don't know what its stack looks like";
    }

    // Then replace the stack with those phis.
    stack.clear();
    bb.phiParameters().stream().map(PhiParameter::asExpression).forEachOrdered(stack::add);

    // Finally, actually move the cursor to the BB.
    cursor.moveToStart(bb);
  }

  /// Add inputs to the given block's phis for the stack at the current block.
  ///
  /// The currently block is required to be one of the given block's predecessors. This needs to
  /// be called for every jump to a block returned by [#bbAt(BcLabel)] in order to uphold the
  /// SSA invariant "each variable is assigned exactly once"; see [#moveTo(BB)] for more
  /// explanation.
  private void addPhiInputsForStack(BB bb) {
    // Ensure the BB has phis for each stack value.
    if (bbsWithPhis.add(bb)) {
      // Add phis for all of the nodes on the stack.
      for (var _ : stack) {
        bb.addParameter();
      }
    } else {
      // Already added phis,
      // but sanity-check that they're still same type and amount as the nodes on the stack.
      var phis = bb.phiParameters().iterator();
      for (var i = 0; i < stack.size(); i++) {
        if (!phis.hasNext()) {
          throw fail(
              "BB stack mismatch: "
                  + bb.label()
                  + " has too few phis; expected "
                  + stack.size()
                  + " but got "
                  + i
                  + "\nIncoming stack: ["
                  + Strings.join(", ", stack)
                  + "]");
        }
        phis.next();
      }
      if (phis.hasNext()) {
        var i = stack.size();
        while (phis.hasNext()) {
          phis.next();
          i++;
        }
        throw fail(
            "BB stack mismatch: "
                + bb.label()
                + " has too many phis; expected "
                + stack.size()
                + " but got "
                + i
                + "\nIncoming stack: ["
                + Strings.join(", ", stack)
                + "]");
      }
    }
  }

  // endregion `moveTo` and phis

  // region statement and jump insertions
  /// Insert a statement.
  private void insert(Expression statement) {
    cursor.insert(statement);
  }

  private void insert(JumpInsertion jump) {
    cursor.insert(jump);
  }

  private void setJump(Jump jump) {
    cursor.replace(jump);
  }

  // endregion statement and jump insertions

  // region inter-instruction data

  /// Mark the following bytecode until the next label as unreachable.
  ///
  /// This means we skip generating IR, since it may underflow the stack (and because we'd
  /// optimize out that IR later anyways).
  private void setInUnreachableBytecode() {
    assert !isInUnreachableBytecode : "already set in unreachable bytecode";
    isInUnreachableBytecode = true;
  }

  // - Since we're converting from stack-based, temporal bytecode to SSA form, we use the virtual
  //   stacks to keep track of data from previous instructions that affects future instructions
  //   (specifically, that data is what's "pushed", when the future instructions use the data it's
  //   read, and when the data no longer affects further future instructions it's popped).
  /// Assert that all stacks are empty, unless in a loop.
  ///
  /// If we return in a loop, the loop stack won't be empty. Additionally, if we return in a for
  /// loop, the node stack will contain the loop index.
  ///
  /// Otherwise, the bytecode compiler pops everything before returning, so the stack should be
  /// empty. And especially so when we implicitly return at the end of a function.
  private void assertStackForReturn() {
    if (loopStack.isEmpty()) {
      assertStacksAreEmpty();
    }
  }

  /// Assert that all stacks are empty, for when the function has ended.
  private void assertStacksAreEmpty() {
    require(
        stack.isEmpty(),
        () -> "stack isn't empty at end of function: [" + Strings.join(", ", stack) + "]");
    require(
        loopStack.isEmpty(),
        () -> "loop stack isn't empty at end of function: [" + Strings.join(", ", loopStack) + "]");
    require(
        complexAssignStack.isEmpty(),
        () ->
            "complex assign stack isn't empty at end of function: ["
                + Strings.join(", ", complexAssignStack)
                + "]");
    require(
        callStack.isEmpty(),
        () -> "call stack isn't empty at end of function: [" + Strings.join(", ", callStack) + "]");
    require(
        dispatchStack.isEmpty(),
        () ->
            "dispatch stack isn't empty at end of function: ["
                + Strings.join(", ", dispatchStack)
                + "]");
  }

  /// Push a node onto the "virtual stack" so that the next call to [#pop(Class)] or
  /// [#top(Class)] will return it.
  ///
  /// The bytecode is stack-based and IR is SSA-form. To convert properly, when the compiler
  /// encounters `BcInstr.Ld...` and other instructions that push real values onto the
  /// interpreter stack, it pushes the node that stores their abstract value ([Node]) onto the
  /// "virtual stack"; and when the compiler encounters [BcInstr.Pop] and other instructions
  /// that read/pop real values from the interpreter stack, it reads/pops the corresponding
  // abstract
  /// values from the "virtual stack" and passes them as arguments to the IR instructions those
  /// bytecode instructions that pop values compile into.
  ///
  /// Also, stack nodes are replaced by phi nodes whenever the compiler moves to a new basic
  /// block: see [#moveTo(BB)] for details.
  private void push(Expression value) {
    // Keep ordering if not trivially pure.
    if (!(value instanceof Read) && !(value instanceof Literal) && !(value instanceof Cast)) {
      var tempVar = cfg.scope().addLocal();
      insert(new Write(tempVar, value));
      value = new Read(tempVar);
    }

    stack.add(value);
  }

  /// Pop a node from the "virtual stack" that was pushed by the last call to [#push(Expression)].
  ///
  /// The bytecode is stack-based and IR is SSA-form, see [#push(Expression)] for more
  /// explanation.
  private Expression pop() {
    require(!stack.isEmpty(), () -> "node stack underflow");
    return stack.removeLast();
  }

  /// Get the node on the top of the "virtual stack" that was pushed by the last call to
  /// [#push(Expression)], without popping.
  ///
  /// The bytecode is stack-based and IR is SSA-form, see [#push(Expression)] for more
  /// explanation.
  private Expression top() {
    require(!stack.isEmpty(), () -> "no node on stack");

    // Do basic constant subexpression elimination.
    if (!(stack.getLast() instanceof Read) && !(stack.getLast() instanceof Literal)) {
      var tempVar = cfg.scope().addLocal();
      insert(new Write(tempVar, pop()));
      push(new Read(tempVar));
    }

    return stack.getLast();
  }

  /// Add data that will be referenced by later for loop instructions (via [#topLoop()] and
  /// [#popLoop()].
  private void pushWhileOrRepeatLoop(BB next, BB end) {
    loopStack.add(new Loop(LoopType.WHILE_OR_REPEAT, null, next, end));
  }

  /// Add data that will be referenced by later for loop instructions (via [#topLoop()] and
  /// [#popLoop()].
  private void pushForLoop(BB forBody, BB step, BB end) {
    loopStack.add(new Loop(LoopType.FOR, forBody, step, end));
  }

  /// Whether we're currently compiling a loop i.e. there's a loop on the loop stack.
  ///
  /// "Local" because promises and `eval` are weird and can reference the loop of the environment
  /// they are provided, which is a long-jump in GNU-R. We don't currently support compiling this.
  private boolean inLocalLoop() {
    return !loopStack.isEmpty();
  }

  /// Reference data from a previously-compiled for loop instruction (the latest
  /// [#pushWhileOrRepeatLoop(BB,BB)] or [#pushForLoop(BB,BB,BB)]).
  private Loop topLoop() {
    require(!loopStack.isEmpty(), () -> "no for loop on stack");
    return loopStack.getLast();
  }

  /// Reference data from a previously-compiled for loop instruction (the latest
  /// [#pushWhileOrRepeatLoop(BB,BB)] or [#pushForLoop(BB,BB,BB)]), and remove it.
  private Loop popLoop() {
    require(!loopStack.isEmpty(), () -> "for loop stack underflow");
    return loopStack.removeLast();
  }

  /// Add data for `StartAssign(2)?` that will be referenced by `EndAssign(2)?` (via
  /// [#popComplexAssign(boolean,RegSymSXP)]).
  ///
  /// GNU-R stores the complex assign values on the main stack, but we also store them on their
  /// own stack for understandability at the cost of negligible performance (same with calls).
  // GNU-R
  /// also stores a "cell" for the lhs value, which has a flag to determine if its in an
  // assignment,
  /// for ref-counting purposes. TODO how we handle ref-counting because it will probably be much
  /// different, but we will probably abstract it so that we don't have to do anything here even
  // in
  /// the future.
  private void pushComplexAssign(boolean isSuper, RegSymSXP name, Expression lhs, Expression rhs) {
    complexAssignStack.add(new ComplexAssign(isSuper, name, rhs));
    push(lhs);
    push(rhs);
  }

  /// Get the current complex assign (the one that was pushed by the last call to
  /// [#pushComplexAssign(boolean,RegSymSXP,Expression,Expression)]), assert that the given
  // `isSuper`
  /// and `name` match its own, and remove it from the stack.
  private Expression popComplexAssign(boolean isSuper, RegSymSXP name) {
    require(!complexAssignStack.isEmpty(), () -> "complex assign stack underflow");
    var assign = complexAssignStack.removeLast();

    if (!name.equals(assign.name)) {
      throw fail(
          "complex assign stack mismatch: expected "
              + (isSuper ? "super" : "regular")
              + " assign for "
              + name
              + " but got "
              + (assign.isSuper ? "super" : "regular")
              + " assign for "
              + assign.name);
    }
    if (isSuper != assign.isSuper) {
      throw fail(
          "complex assign stack mismatch: expected "
              + (isSuper ? "super" : "regular")
              + " assign, but stack has "
              + (assign.isSuper ? "super" : "regular")
              + " assign");
    }

    return pop();
  }

  /// Begin a new call of the given function (abstract value).
  private void pushCall(NamedVariable fun) {
    callStack.add(new Call(new Call.Fun.Variable(fun)));
  }

  /// Begin a new call of the given function (statically known builtin).
  private void pushCall(Builtin fun) {
    callStack.add(new Call(new Call.Fun.Builtin(fun)));
  }

  /// Get the current call (the one that was pushed by the last call to
  // [<?>][#pushCall(NodeextendsSEXP)]).
  private Call topCall() {
    require(!callStack.isEmpty(), () -> "no call on stack");
    return callStack.getLast();
  }

  /// Pop the current call (the one that was pushed by the last call to
  // [<?>][#pushCall(NodeextendsSEXP)]).
  private Call popCall() {
    require(!callStack.isEmpty(), () -> "call stack underflow");
    return callStack.removeLast();
  }

  /**
   * Prepend a value to the current call stack ({@link #topCall()}).
   *
   * <p>This is required for {@link BcInstr.GetterCall} and {@link BcInstr.SetterCall}, since the
   * {@code lhs} of the complex assignment is prepended in the GNU-R. See also {@link
   * #pushCallArg(Expression)}, which appends the argument.
   */
  private void prependCallArg(Expression value) {
    topCall().args.addFirst(new Call.Arg(value));
  }

  /**
   * Push a value onto the current call stack ({@link #topCall()}).
   *
   * <p>GNU-R maintains a the call function and arguments list on the stack, but we store them
   * separately. Either way generates the same IR, but this way makes errors clearer, e.g.
   * forgetting to push a call raises a specific error earlier instead of a stack mismatch later.
   */
  private void pushCallArg(Expression value) {
    topCall().args.add(new Call.Arg(value));
  }

  /**
   * Push the missing value onto the "call arguments list".
   *
   * @see #pushCallArg(Expression)
   */
  private void pushMissingCallArg() {
    topCall().args.add(Call.Arg.missing());
  }

  /**
   * Set the name of the last argument on the "call arguments list".
   *
   * @see #pushCallArg(Expression)
   */
  private void setNameOfLastCallArg(String name) {
    var args = topCall().args;
    var last = args.removeLast();
    args.add(new Call.Arg(last.value(), name));
  }

  /**
   * Add data for a "start dispatch" bytecode instruction that will be referenced by later "default
   * dispatch" instruction (via {@link #popDispatch(Dispatch.Type)}.
   */
  private void pushDispatch(Dispatch.Type type, BB after) {
    dispatchStack.add(new Dispatch(type, after));
  }

  /// Reference data from a previously-compiled "start dispatch" bytecode instruction (via
  /// [#pushDispatch(Dispatch.Type,BB)]), and pop it.
  private Dispatch popDispatch(Dispatch.Type type) {
    require(!dispatchStack.isEmpty(), () -> "dispatch stack underflow");
    var dispatch = dispatchStack.removeLast();
    if (dispatch.type != type) {
      throw fail("dispatch stack mismatch: expected " + type + " but got " + dispatch.type);
    }
    return dispatch;
  }

  // endregion inter-instruction data

  // region expression constructors
  private Expression builtin(String name, Expression... args) {
    return builtin(name, -1, args);
  }

  private Expression builtin(String name, int versionIndex, Expression... args) {
    var function = BUILTINS.localFunction(name);
    assert function != null : "missing builtin " + name;
    var callee =
        versionIndex == -1
            ? new DispatchCallee(function, null)
            : new StaticCallee(function, function.version(versionIndex));
    return new org.prlprg.fir.ir.instruction.Call(callee, ImmutableList.copyOf(args));
  }

  private Expression intrinsic(String name, Expression... args) {
    return intrinsic(name, -1, args);
  }

  private Expression intrinsic(String name, int versionIndex, Expression... args) {
    var function = INTRINSICS.localFunction(name);
    assert function != null : "missing intrinsic " + name;
    var callee =
        versionIndex == -1
            ? new DispatchCallee(function, null)
            : new StaticCallee(function, function.version(versionIndex));
    return new org.prlprg.fir.ir.instruction.Call(callee, ImmutableList.copyOf(args));
  }

  /// An expression that raises an error with the given message.
  private Expression stop(String message) {
    return builtin("stop", new Literal(SEXPs.string(message)));
  }

  /// An expression that raises a warning with the given message.
  private Expression warning(String message) {
    return builtin("warning", new Literal(SEXPs.string(message)));
  }

  enum Env {
    LOCAL,
    GLOBAL,
    BASE
  }

  /// Stub for loaded function, which can fallback to an intrinsic but usually gets caught and
  /// turned into [DynamicCallee].
  private Expression loadFun(NamedVariable name, Env env) {
    return intrinsic("loadFun", 0, new Read(name), new Literal(SEXPs.integer(env.ordinal())));
  }

  /// Stub for function guard (TODO what does [#BcInstr.CheckFun] do again?), which can fallback to
  /// an intrinsic but usually gets caught and turned into [DynamicCallee].
  private Expression checkFun(Expression fun) {
    return intrinsic("checkFun", 0, fun);
  }

  private Jump goto_(BB bb) {
    return new Goto(target(bb));
  }

  private Jump goto_(BcLabel label) {
    return goto_(bbAt(label));
  }

  private Jump branch(Expression condition, BB trueBb, BB falseBb) {
    return new If(condition, target(trueBb), target(falseBb));
  }

  // endregion expression constructors

  // region misc
  private Abstraction scope() {
    return cfg.scope();
  }

  private Module module() {
    return cfg.module();
  }

  /// Get the [SEXP] in the constant pool corresponding to the given index.
  private <S extends SEXP> S get(ConstPool.Idx<S> idx) {
    return bc.consts().get(idx);
  }

  /// Get the [SEXP] in the constant pool corresponding to the given index,
  /// then cast it into a variable.
  private NamedVariable getVar(ConstPool.Idx<RegSymSXP> idx) {
    return Variable.named(get(idx).name());
  }

  private void require(boolean condition, Supplier<String> message) {
    if (!condition) {
      throw fail(message.get());
    }
  }

  private CFGCompilerUnsupportedBcException failUnsupported(String message) {
    return new CFGCompilerUnsupportedBcException(message, bc, bcPos, cursor, null);
  }

  private CFGCompilerException fail(String message) {
    return new CFGCompilerException(message, bc, bcPos, cursor);
  }
  // endregion misc
}
