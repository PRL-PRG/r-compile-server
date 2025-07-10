package org.prlprg.bc2fir;

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
import org.prlprg.fir.callee.StaticCallee;
import org.prlprg.fir.cfg.BB;
import org.prlprg.fir.cfg.CFG;
import org.prlprg.fir.cfg.cursor.CFGCursor;
import org.prlprg.fir.instruction.Cast;
import org.prlprg.fir.instruction.Expression;
import org.prlprg.fir.instruction.Force;
import org.prlprg.fir.instruction.Goto;
import org.prlprg.fir.instruction.If;
import org.prlprg.fir.instruction.Jump;
import org.prlprg.fir.instruction.Literal;
import org.prlprg.fir.instruction.Read;
import org.prlprg.fir.instruction.Return;
import org.prlprg.fir.instruction.Unreachable;
import org.prlprg.fir.instruction.Write;
import org.prlprg.fir.module.Module;
import org.prlprg.fir.phi.PhiParameter;
import org.prlprg.fir.phi.Target;
import org.prlprg.fir.variable.NamedVariable;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.rshruntime.BcPosition;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Reflection;
import org.prlprg.util.Strings;

/// Stores state to compile a promise or closure's code from GNU-R bytecode into FIŘ.
///
/// This could be a set of functions but they would be *very* large and/or pass around lots of
/// variables. Instead, it's a class and those commonly-passed variables are fields.
public class CFGCompiler {
  /// Compile the given bytecode into the given control-flow-graph.
  ///
  /// @throws IllegalArgumentException if the control-flow-graph isn't empty.
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
      record Value(Expression fun) implements Fun {}

      record Builtin(BuiltinId id) implements Fun {}
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
  private record Dispatch(Type type, LangSXP ast, BB after) {

    /// The dispatch function (e.g. "[", "[<-", "c").
    private enum Type {
      C(BuiltinId.C, false, false),
      SUBSET(BuiltinId.SUBSET, false, false),
      SUBASSIGN(BuiltinId.SUBASSIGN, true, false),
      SUBSET2(BuiltinId.SUBSET2, false, false),
      SUBASSIGN2(BuiltinId.SUBASSIGN2, true, false),
      SUBSETN(BuiltinId.SUBSETN, false, true),
      SUBASSIGNN(BuiltinId.SUBASSIGNN, true, true),
      SUBSET2N(BuiltinId.SUBSET2N, false, true),
      SUBASSIGN2N(BuiltinId.SUBASSIGN2N, true, true);

      private final BuiltinId builtin;
      private final boolean hasRhs;
      private final boolean isNForm;

      Type(BuiltinId builtin, boolean hasRhs, boolean isNForm) {
        this.builtin = builtin;
        this.hasRhs = hasRhs;
        this.isNForm = isNForm;
      }
    }
  }

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
    if (cfg.bbs().size() != 1
        || cfg.entry().statements().isEmpty()
        || !(cfg.entry().jump() instanceof Unreachable)) {
      throw new IllegalArgumentException("CFG must be empty");
    }

    this.cfg = cfg;
    this.bc = bc;

    cursor = new CFGCursor(cfg);

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
            setJump(new Goto(target(nextBb)));
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
          ensureBbAt(new BcLabel(labelPos), "SWITCH_CHR" + i);
        }
      }
      if (numLabels != null) {
        for (var i = 0; i < numLabels.size(); i++) {
          var labelPos = numLabels.get(i);
          ensureBbAt(new BcLabel(labelPos), "SWITCH_NUM" + i);
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
        ensureBbAt((BcLabel) value, labelName.value());
      }
    }
  }

  /// Adds a basic block and maps it to the given label, if a basic block for the given label
  // doesn't
  /// already exist (otherwise no-op).
  private void ensureBbAt(BcLabel label, String name) {
    int pos = label.target();
    if (!bbByLabel.containsKey(pos)) {
      bbByLabel.put(pos, cfg.addBB());
    }
  }

  /// Returns the basic block corresponding to the given label
  ///
  /// Specifically, this returns the block inserted by [#ensureBbAt(BcLabel,String)], which
  /// should've been compiled before we started "actually" compiling the bytecode instructions,
  // and
  /// this is called while actually compiling the instructions.
  private BB bbAt(BcLabel label) {
    int pos = label.target();
    assert bbByLabel.containsKey(pos) : "no BB at position " + pos;
    return bbByLabel.get(pos);
  }

  /// Whether there is a label pointing immediately after the current bytecode instruction.
  ///
  /// Specifically, returns whether there is a BB in `bbByLabel` mapped to the position
  /// immediately after.
  private boolean hasBbAfterCurrent() {
    return bbByLabel.containsKey(bcPos + 1);
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
        setJump(new Goto(target(bb)));
        addPhiInputsForStack(bb);
        setInUnreachableBytecode();
      }
      case BcInstr.BrIfNot(var ast, var label) -> {
        var bb = bbAt(label);
        setJump(new If(pop(), target(bbAfterCurrent()), target(bb)));
        addPhiInputsForStack(bb);
      }
      case BcInstr.Pop() -> pop();
      case BcInstr.Dup() -> {
        var value = pop();
        push(value);
        push(value);
      }
      case BcInstr.PrintValue() -> push(builtin(BuiltinId.PRINT_VALUE, pop()));
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
      case BcInstr.StartFor(var ast, var elemName, var step) -> {
        // This takes advantage of invariants expected between `StartFor/StepFor/EndFor` and just
        // compiles the entire for loop logic (everything other than the loop forBody). We then do a
        // weak sanity check that the bytecode upholds these invariants by including `StepFor` in
        // the step branch and `EndFor` in the end branch, although it may break the invariants
        // other ways and simply not be noticed.
        var loopCntxt = bc.code().get(bcPos + 1) instanceof BcInstr.StartLoopCntxt l ? l : null;

        var initBb = cursor.bb();
        BB forBodyBb;
        BB stepBb;
        BB endBb;
        if (loopCntxt == null) {
          forBodyBb = bbAfterCurrent();
          stepBb = bbAt(step);
          endBb = cfg.addBB("endFor");
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
        var length = intrinsic("length", seq);
        var init = new Literal(SEXPs.integer(0));
        var index = cfg.scope().addLocal();
        cursor.insert(new Write(index, init));
        push(new Read(index));
        setJump(new Goto(target(stepBb)));

        // For loop step
        moveTo(stepBb);
        // Increment the index
        var index1 = intrinsic("inc", pop());
        push(index1);
        // Compare the index to the length
        var cond = intrinsic("lt", length, index1);
        // Jump to `end` if it's greater (remember, GNU-R indexing is one-based)
        setJump(new If(cond, target(endBb), target(forBodyBb)));

        // For loop body
        moveTo(forBodyBb);
        // Extract element at index
        var elem = intrinsic("extract2_1D", seq, index1);
        // Store in the element variable
        cursor.insert(new Write(getVar(elemName), elem));
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
          throw failUnsupported("`next` or `break` in promise (complex loop context)");
        }
        var stepBb = topLoop().next;
        setJump(new Goto(target(stepBb)));
        addPhiInputsForStack(stepBb);

        setInUnreachableBytecode();
      }
      case BcInstr.DoLoopBreak() -> {
        // The bytecode compilers don't actually generate these instructions, are they deprecated?
        // Regardless, we can still support them.
        if (cfg.isPromise() && !inLocalLoop()) {
          throw failUnsupported("`next` or `break` in promise (complex loop context)");
        }
        var endBb = topLoop().end;
        setJump(new Goto(target(endBb)));
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
      case BcInstr.Invisible() -> insert(intrinsic("invisible"));
      case BcInstr.LdConst(var constant) -> push(new Literal(get(constant)));
      case BcInstr.LdNull() -> push(new Literal(SEXPs.NULL));
      case BcInstr.LdTrue() -> push(new Literal(SEXPs.TRUE));
      case BcInstr.LdFalse() -> push(new Literal(SEXPs.FALSE));
      case BcInstr.GetVar(var name) -> {
        push(new Read(getVar(name)));
        push(new Force(pop()));
      }
      case BcInstr.DdVal(var name) -> {
        var ddIndex = new NamedVariable("`.." + get(name).ddNum() + "`");
        push(new Read(ddIndex));
        push(new Force(pop()));
      }
      case BcInstr.SetVar(var name) -> insert(new Write(getVar(name), top()));
        // TODO 🔽
      case BcInstr.GetFun(var name) -> push(name, new StmtData.LdFun(get(name)));
      case BcInstr.GetGlobFun(var name) ->
          pushCallFunInsert(name, new StmtData.LdFun(get(name), StaticEnv.GLOBAL));
        // ???: GNU-R calls `SYMVALUE` and `INTERNAL` to implement these, but we don't store that in
        //  our `RegSymSxp` data-structure. So the next three implementations may be incorrect.
      case BcInstr.GetSymFun(var name) -> pushCall(BuiltinId.referencedBy(get(name)));
      case BcInstr.GetBuiltin(var name) -> pushCall(BuiltinId.referencedBy(get(name)));
      case BcInstr.GetIntlBuiltin(var name) -> pushCall(BuiltinId.referencedBy(get(name)));
      case BcInstr.CheckFun() -> pushCallFunInsert(new StmtData.ChkFun(pop()));
      case BcInstr.MakeProm(var code) -> {
        // REACH: Could cache compiled promise CFGs (env will always be different) in the module...
        // TODO: infer name
        Promise promise;
        try {
          promise = compilePromise("", get(code), module);
        } catch (ClosureCompilerUnsupportedException e) {
          throw failUnsupported("Promise with unsupported body", e);
        }
        pushCallArgInsert(new StmtData.MkProm(promise));
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
      case BcInstr.DoDots() -> pushCallArgInsert("...", new StmtData.LdDots(env));
      case BcInstr.PushArg() -> pushCallArg(pop());
      case BcInstr.PushConstArg(var constant) -> pushCallArg(new Constant(get(constant)));
      case BcInstr.PushNullArg() -> pushCallArg(new Constant(SEXPs.NULL));
      case BcInstr.PushTrueArg() -> pushCallArg(new Constant(SEXPs.TRUE));
      case BcInstr.PushFalseArg() -> pushCallArg(new Constant(SEXPs.FALSE));
      case BcInstr.BcInstr.Call(var ast) -> compileCall(ast);
      case BcInstr.CallBuiltin(var ast) -> compileCall(ast);
      case BcInstr.CallSpecial(var astId) -> {
        var ast = get(astId);
        if (!(ast.fun() instanceof RegSymSXP builtinSymbol)) {
          throw fail("CallSpecial: expected a symbol (builtin id) function");
        }
        var builtin = BuiltinId.referencedBy(builtinSymbol);
        // Note that some of these are constant symbols and language objects, they should be treated
        // like `eval`. We also assume builtins never use names.
        // GNU-R just passes `CDR(call)` to the builtin.
        var args =
            ast.args().stream()
                .map(arg -> (Expression) new Constant(arg.value()))
                .collect(ImmutableList.toImmutableList());
        push(new StmtData.CallBuiltin(ast, builtin, args));
      }
      case BcInstr.MakeClosure(var arg) -> {
        var fb = get(arg);
        var forms = (ListSXP) fb.get(0);
        var body = fb.get(1);
        var ast = fb.size() > 2 ? fb.get(2) : null;
        var cloSxp =
            SEXPs.closure(
                forms, body, SEXPs.EMPTY_ENV, ast == null ? null : Attributes.srcref(ast));

        // Note that we don't use `module.getOrCompile` because the inner closure will probably have
        // a unique environment, so we don't even bother trying to cache it outside of the outer
        // closure.
        // Also, we intentionally only compile the baseline version because the inner closure will
        // be optimized along with the outer closure.
        // TODO: infer name
        Closure closure;
        try {
          closure = compileBaselineClosure("", cloSxp, module);
        } catch (ClosureCompilerUnsupportedException e) {
          throw failUnsupported("Closure with unsupported body", e);
        }

        push(new StmtData.MkCls(closure));
      }
      case BcInstr.UMinus(var ast) -> push(mkUnop(ast, StmtData.UMinus::new));
      case BcInstr.UPlus(var ast) -> push(mkUnop(ast, StmtData.UPlus::new));
      case BcInstr.Sqrt(var ast) -> push(mkUnop(ast, StmtData.Sqrt::new));
      case BcInstr.Add(var ast) -> push(mkBinop(ast, StmtData.Add::new));
      case BcInstr.Sub(var ast) -> push(mkBinop(ast, StmtData.Sub::new));
      case BcInstr.Mul(var ast) -> push(mkBinop(ast, StmtData.Mul::new));
      case BcInstr.Div(var ast) -> push(mkBinop(ast, StmtData.Div::new));
      case BcInstr.Expt(var ast) -> push(mkBinop(ast, StmtData.Pow::new));
      case BcInstr.Exp(var ast) -> push(mkUnop(ast, StmtData.Exp::new));
      case BcInstr.Eq(var ast) -> push(mkBinop(ast, StmtData.Eq::new));
      case BcInstr.Ne(var ast) -> push(mkBinop(ast, StmtData.Neq::new));
      case BcInstr.Lt(var ast) -> push(mkBinop(ast, StmtData.Lt::new));
      case BcInstr.Le(var ast) -> push(mkBinop(ast, StmtData.Lte::new));
      case BcInstr.Ge(var ast) -> push(mkBinop(ast, StmtData.Gte::new));
      case BcInstr.Gt(var ast) -> push(mkBinop(ast, StmtData.Gt::new));
      case BcInstr.And(var ast) -> push(mkBinop(ast, StmtData.LAnd::new));
      case BcInstr.Or(var ast) -> push(mkBinop(ast, StmtData.LOr::new));
      case BcInstr.Not(var ast) -> push(mkUnop(ast, StmtData.Not::new));
      case BcInstr.DotsErr() ->
          insertVoid(new StmtData.Error("'...' used in an incorrect context"));
      case BcInstr.StartAssign(var name) -> {
        var lhs = cursor.insert(get(name).name(), new StmtData.LdVar(get(name), false));
        var rhs = top();
        pushComplexAssign(false, get(name), lhs, rhs);
      }
      case BcInstr.EndAssign(var name) -> {
        var lhs = popComplexAssign(false, get(name));
        insertVoid(new Write(getVar(name), lhs));
      }
      case BcInstr.StartSubset(var ast, var after) ->
          compileStartDispatch(Dispatch.Type.SUBSET, ast, after);
      case BcInstr.DfltSubset() ->
          compileDefaultDispatch(
              Dispatch.Type.SUBSET,
              2,
              4,
              (ast, args) ->
                  switch (args.size()) {
                    case 2 -> new StmtData.Extract1_1D(ast, args.get(0), args.get(1));
                    case 3 -> new StmtData.Extract1_2D(ast, args.get(0), args.get(1), args.get(2));
                    case 4 ->
                        new StmtData.Extract1_3D(
                            ast, args.get(0), args.get(1), args.get(2), args.get(3));
                    default ->
                        throw new UnreachableError("index should've been range-checked above");
                  });
      case BcInstr.StartSubassign(var ast, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGN, ast, after);
      case BcInstr.DfltSubassign() ->
          compileDefaultDispatch(
              Dispatch.Type.SUBASSIGN,
              3,
              5,
              (ast, args) ->
                  switch (args.size()) {
                    case 3 ->
                        new StmtData.Subassign1_1D(ast, args.get(0), args.get(1), args.get(2));
                    case 4 ->
                        new StmtData.Subassign1_2D(
                            ast, args.get(0), args.get(1), args.get(2), args.get(3));
                    case 5 ->
                        new StmtData.Subassign1_3D(
                            ast,
                            args.get(0),
                            args.get(1),
                            args.get(2),
                            args.get(3),
                            args.get(4),
                            env);
                    default ->
                        throw new UnreachableError("index should've been range-checked above");
                  });
      case BcInstr.StartC(var ast, var after) -> compileStartDispatch(Dispatch.Type.C, ast, after);
      case BcInstr.DfltC() ->
          compileDefaultDispatch(
              Dispatch.Type.C,
              0,
              0,
              (_, _) -> {
                throw new UnreachableError("There isn't a specialized PIR instruction for C");
              });
      case BcInstr.StartSubset2(var ast, var after) ->
          compileStartDispatch(Dispatch.Type.SUBSET2, ast, after);
      case BcInstr.DfltSubset2() ->
          compileDefaultDispatch(
              Dispatch.Type.SUBSET2,
              2,
              3,
              (ast, args) ->
                  switch (args.size()) {
                    case 2 -> new StmtData.Extract2_1D(ast, args.get(0), args.get(1));
                    case 3 -> new StmtData.Extract2_2D(ast, args.get(0), args.get(1), args.get(2));
                    default ->
                        throw new UnreachableError("index should've been range-checked above");
                  });
      case BcInstr.StartSubassign2(var ast, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGN2, ast, after);
      case BcInstr.DfltSubassign2() ->
          compileDefaultDispatch(
              Dispatch.Type.SUBASSIGN2,
              3,
              4,
              (ast, args) ->
                  switch (args.size()) {
                    case 3 ->
                        new StmtData.Subassign2_1D(ast, args.get(0), args.get(1), args.get(2));
                    case 4 ->
                        new StmtData.Subassign2_2D(
                            ast, args.get(0), args.get(1), args.get(2), args.get(3));
                    default ->
                        throw new UnreachableError("index should've been range-checked above");
                  });
      case BcInstr.Dollar(var ast, var member) -> {
        var after = cfg.addBB("afterDollar");

        var target = top();
        compileGeneralDispatchCommon(BuiltinId.DOLLAR, false, target, null, after);

        var call = popCall();
        if (!call.fun.equals(new Call.Fun.Builtin(BuiltinId.DOLLAR))) {
          throw fail("Dollar: expected a call to $");
        }

        pop();
        push(
            new StmtData.CallBuiltin(
                get(ast),
                BuiltinId.DOLLAR,
                ImmutableList.of(target, new Constant(get(member))),
                env));
        setJump(new Goto(target(after)));

        moveTo(after);
      }
      case BcInstr.DollarGets(var ast, var member) -> {
        var after = cfg.addBB("afterDollarGets");

        var rhs = pop();
        var target = top();
        compileGeneralDispatchCommon(BuiltinId.DOLLAR_GETS, false, target, rhs, after);

        var call = popCall();
        if (!call.fun.equals(new Call.Fun.Builtin(BuiltinId.DOLLAR_GETS))) {
          throw fail("Dollar: expected a call to $");
        }

        pop();
        push(
            new StmtData.CallBuiltin(
                get(ast),
                BuiltinId.DOLLAR_GETS,
                ImmutableList.of(target, new Constant(get(member)), rhs),
                env));
        setJump(new Goto(target(after)));

        moveTo(after);
      }
      case BcInstr.IsNull() -> push(new StmtData.Eq(null, pop(), new Constant(SEXPs.NULL)));
      case BcInstr.IsLogical() -> push(new StmtData.GnuRIs(IsTypeCheck.LGL, pop()));
      case BcInstr.IsInteger() -> push(new StmtData.GnuRIs(IsTypeCheck.INT, pop()));
      case BcInstr.IsDouble() -> push(new StmtData.GnuRIs(IsTypeCheck.REAL, pop()));
      case BcInstr.IsComplex() -> push(new StmtData.GnuRIs(IsTypeCheck.CPLX, pop()));
      case BcInstr.IsCharacter() -> push(new StmtData.GnuRIs(IsTypeCheck.STR, pop()));
      case BcInstr.IsSymbol() -> push(new StmtData.GnuRIs(IsTypeCheck.SYM, pop()));
      case BcInstr.IsObject() -> push(new StmtData.GnuRIs(IsTypeCheck.NON_OBJECT, pop()));
      case BcInstr.IsNumeric() -> push(new StmtData.GnuRIs(IsTypeCheck.NUM, pop()));
      case BcInstr.VecSubset(var _) ->
          compileDefaultDispatchN(
              Dispatch.Type.SUBSETN,
              2,
              (ast, args) -> new StmtData.Extract2_1D(ast, args.getFirst(), args.get(1)));
      case BcInstr.MatSubset(var _) ->
          compileDefaultDispatchN(
              Dispatch.Type.SUBSETN,
              3,
              (ast, args) ->
                  new StmtData.Extract2_2D(ast, args.getFirst(), args.get(1), args.get(2)));
      case BcInstr.VecSubassign(var _) ->
          compileDefaultDispatchN(
              Dispatch.Type.SUBASSIGNN,
              3,
              (ast, args) ->
                  new StmtData.Subassign2_1D(ast, args.getFirst(), args.get(1), args.get(2)));
      case BcInstr.MatSubassign(var _) ->
          compileDefaultDispatchN(
              Dispatch.Type.SUBASSIGNN,
              4,
              (ast, args) ->
                  new StmtData.Subassign2_2D(
                      ast, args.getFirst(), args.get(1), args.get(2), args.get(3)));
      case BcInstr.And1st(var ast, var shortCircuit) -> {
        var shortCircuitBb = bbAt(shortCircuit);
        push(new StmtData.AsLogical(pop()));
        setJump(new JumpData.Branch(top(), bbAfterCurrent(), shortCircuitBb));
        addPhiInputsForStack(shortCircuitBb);
      }
      case BcInstr.And2nd(var ast) -> {
        push(new StmtData.AsLogical(pop()));
        push(mkBinop(ast, StmtData.LAnd::new));
        setJump(new Goto(target(bbAfterCurrent())));
      }
      case BcInstr.Or1st(var ast, var shortCircuit) -> {
        var shortCircuitBb = bbAt(shortCircuit);
        push(new StmtData.AsLogical(pop()));
        setJump(new JumpData.Branch(top(), shortCircuitBb, bbAfterCurrent()));
        addPhiInputsForStack(shortCircuitBb);
      }
      case BcInstr.Or2nd(var ast) -> {
        push(new StmtData.AsLogical(pop()));
        push(mkBinop(ast, StmtData.LOr::new));
        setJump(new Goto(target(bbAfterCurrent())));
      }
      case BcInstr.GetVarMissOk(var name) -> {
        push(name, new StmtData.LdVar(get(name), true));
        push(new StmtData.Force(pop(), compileFrameState()));
      }
      case BcInstr.DdValMissOk(var name) -> {
        var ddIndex = get(name).ddNum();
        push(name, new StmtData.LdDdVal(ddIndex, true));
        push(new StmtData.Force(pop(), compileFrameState()));
      }
      case BcInstr.Visible() -> insertVoid(new StmtData.Visible());
      case BcInstr.SetVar2(var name) -> insertVoid(new WriteSuper(get(name), top()));
      case BcInstr.StartAssign2(var name) -> {
        // GNU-R has "cells" and stores the assign on the main stack.
        // But we don't have cells, and since we're compiling, we can store the assignment on its
        // own stack.
        var lhs = cursor.insert(get(name).name(), new StmtData.LdVarSuper(get(name)));
        var rhs = top();
        pushComplexAssign(true, get(name), lhs, rhs);
      }
      case BcInstr.EndAssign2(var name) -> {
        var lhs = popComplexAssign(true, get(name));
        insertVoid(new WriteSuper(get(name), lhs));
      }
      case BcInstr.SetterCall(var ast, var _) -> {
        // GNU-R has to wrap these call args in evaluated promises depending on the call type,
        // but presumably this is something we abstract. This is also what `valueExpr` is for,
        // which is why it's unused.
        var rhs = pop();
        var lhs = pop();
        prependCallArg(lhs);
        pushCallArg(rhs);
        compileCall(ast);
      }
      case BcInstr.GetterCall(var ast) -> {
        // GNU-R has to wrap this call arg in an evaluated promise depending on the call type,
        // but presumably this is something we abstract.
        prependCallArg(top());
        compileCall(ast);
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
      case BcInstr.Switch(var ast, var namesIdx, var chrLabelsIdx, var numLabelsIdx) -> {
        var names = namesIdx == null ? null : get(namesIdx);
        var chrLabels = chrLabelsIdx == null ? null : get(chrLabelsIdx);
        var numLabels = numLabelsIdx == null ? null : get(numLabelsIdx);

        var value = pop();

        var isVector = cursor.insert(new GnuRIs(IsTypeCheck.SCALAR, value));
        var isVectorBb = cfg.addBB();
        var isNotVectorBb = cfg.addBB("failNotVector");
        setJump(new JumpData.Branch(isVector, isVectorBb, isNotVectorBb));

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(isNotVectorBb);
        cursor.insert(new StmtData.Error("EXPR must be a length 1 vector"));
        setJump(new JumpData.Unreachable());

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(isVectorBb);
        var isFactor = cursor.insert(new GnuRIs(IsTypeCheck.FACTOR, value));
        var isFactorBb = cfg.addBB();
        var isNotFactorBb = cfg.addBB("warnNotFactor");
        setJump(new JumpData.Branch(isFactor, isFactorBb, isNotFactorBb));

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(isNotFactorBb);
        cursor.insert(
            new StmtData.Warning(
                "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead."));
        setJump(new Goto(target(isFactorBb)));

        // Has two predecessors, but the second defines no values (means no phis), so we can call
        // `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(isFactorBb);
        var isString = cursor.insert(new GnuRIs(IsTypeCheck.STR, value));
        var stringBb = cfg.addBB("switchString");
        var asIntegerBb = cfg.addBB("switchAsInteger");
        setJump(new JumpData.Branch(isString, stringBb, asIntegerBb));

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(stringBb);
        if (names == null) {
          if (numLabels == null) {
            cursor.insert(new StmtData.Error("bad numeric 'switch' offsets"));
            setJump(new JumpData.Unreachable());
          } else if (numLabels.isScalar()) {
            cursor.insert(new StmtData.Warning("'switch' with no alternatives"));
            setJump(new Goto(target(bbAt(new BcLabel(numLabels.get(0))))));
          } else {
            cursor.insert(
                new StmtData.Error(
                    "numeric EXPR required for 'switch' without named alternatives"));
            setJump(new JumpData.Unreachable());
          }
        } else {
          if (chrLabels == null) {
            cursor.insert(new StmtData.Error("bad character 'switch' offsets"));
            setJump(new JumpData.Unreachable());
          } else if (names.size() != chrLabels.size()) {
            cursor.insert(new StmtData.Error("bad 'switch' names"));
            setJump(new JumpData.Unreachable());
          } else {
            for (var i = 0; i < chrLabels.size() - 1; i++) {
              var name = names.get(i);
              var ifMatch = bbAt(new BcLabel(chrLabels.get(i)));
              var cond = cursor.insert(new StmtData.Eq(value, Constant.strSxp(name)));
              var prev = cursor.bb();
              cursor.insert(next -> new JumpData.Branch(cond, ifMatch, next));
              addPhiInputsForStack(ifMatch, prev);
            }
            // `switch` just goes to the last label regardless of whether it matches.
            var lastBb = bbAt(new BcLabel(chrLabels.last()));
            setJump(new Goto(target(lastBb)));
            addPhiInputsForStack(lastBb);
          }
        }

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(asIntegerBb);
        if (numLabels == null) {
          cursor.insert(new StmtData.Error("bad numeric 'switch' offsets"));
          setJump(new JumpData.Unreachable());
        } else if (numLabels.isScalar()) {
          cursor.insert(new StmtData.Warning("'switch' with no alternatives"));
          setJump(new Goto(target(bbAt(new BcLabel(numLabels.get(0))))));
        } else {
          var asInteger = cursor.insert(new StmtData.AsSwitchIdx(value));
          for (var i = 0; i < numLabels.size() - 1; i++) {
            var ifMatch = bbAt(new BcLabel(numLabels.get(i)));
            var cond = cursor.insert(new StmtData.Eq(asInteger, Constant.intSxp(i)));
            var prev = cursor.bb();
            cursor.insert(next -> new JumpData.Branch(cond, ifMatch, next));
            addPhiInputsForStack(ifMatch, prev);
          }
          // `switch` just goes to the last label regardless of whether it matches.
          var lastBb = bbAt(new BcLabel(numLabels.last()));
          setJump(new Goto(target(lastBb)));
          addPhiInputsForStack(lastBb);
        }

        // The `switch` executes a GOTO on all branches, so the following code is unreachable unless
        // there's a label immediately after (which is probably guaranteed).
        setInUnreachableBytecode();
      }
      case BcInstr.StartSubsetN(var ast, var after) ->
          compileStartDispatch(Dispatch.Type.SUBSETN, ast, after);
      case BcInstr.StartSubassignN(var ast, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGNN, ast, after);
      case BcInstr.VecSubset2(var _) ->
          compileDefaultDispatchN(
              Dispatch.Type.SUBSET2N,
              2,
              (ast, args) -> new StmtData.Extract2_1D(ast, args.getFirst(), args.get(1)));
      case BcInstr.MatSubset2(var _) ->
          compileDefaultDispatchN(
              Dispatch.Type.SUBSET2N,
              3,
              (ast, args) ->
                  new StmtData.Extract2_2D(ast, args.getFirst(), args.get(1), args.get(2)));
      case BcInstr.VecSubassign2(var _) ->
          compileDefaultDispatchN(
              Dispatch.Type.SUBASSIGN2N,
              3,
              (ast, args) ->
                  new StmtData.Subassign2_1D(ast, args.getFirst(), args.get(1), args.get(2)));
      case BcInstr.MatSubassign2(var _) ->
          compileDefaultDispatchN(
              Dispatch.Type.SUBASSIGN2N,
              4,
              (ast, args) ->
                  new StmtData.Subassign2_2D(
                      ast, args.getFirst(), args.get(1), args.get(2), args.get(3)));
      case BcInstr.StartSubset2N(var ast, var after) ->
          compileStartDispatch(Dispatch.Type.SUBSET2N, ast, after);
      case BcInstr.StartSubassign2N(var ast, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGN2N, ast, after);
      case BcInstr.SubsetN(var _, var n) -> compileDefaultDispatchN(Dispatch.Type.SUBSETN, n + 1);
      case BcInstr.Subset2N(var _, var n) -> compileDefaultDispatchN(Dispatch.Type.SUBSET2N, n + 1);
      case BcInstr.SubassignN(var _, var n) ->
          compileDefaultDispatchN(Dispatch.Type.SUBASSIGNN, n + 2);
      case BcInstr.Subassign2N(var _, var n) ->
          compileDefaultDispatchN(Dispatch.Type.SUBASSIGN2N, n + 2);
      case BcInstr.Log(var ast) -> push(mkUnop(ast, StmtData.Log::new));
      case BcInstr.LogBase(var ast) -> push(mkBinop(ast, StmtData.LogBase::new));
      case BcInstr.Math1(var ast, var funId) -> push(new StmtData.Math1(funId, pop()));
      case BcInstr.DotCall(var ast, var numArgs) -> {
        if (stack.size() < numArgs + 1) {
          throw fail("stack underflow");
        }
        var funAndArgs = stack.subList(stack.size() - numArgs - 1, stack.size());
        var args =
            funAndArgs.stream().map(a -> (Expression) a).collect(ImmutableList.toImmutableList());
        funAndArgs.clear();

        push(new StmtData.CallBuiltin(BuiltinId.DOT_CALL, args));
      }
      case BcInstr.Colon(var ast) -> push(mkBinop(ast, StmtData.Colon::new));
      case BcInstr.SeqAlong(var ast) ->
          push(new StmtData.CallBuiltin(BuiltinId.SEQ_ALONG, ImmutableList.of(pop())));
      case BcInstr.SeqLen(var ast) ->
          push(new StmtData.CallBuiltin(BuiltinId.SEQ_LEN, ImmutableList.of(pop())));
      case BcInstr.BaseGuard(var exprIdx, var after) -> {
        // PIR apparently just ignores the guards (`rir2pir.cpp:341`), but we can handle here.
        var expr = get(exprIdx);
        var fun = (RegSymSXP) expr.fun();
        var sym = cursor.insert(fun.name(), new StmtData.LdFun(fun));
        var base = cursor.insert("base." + fun.name(), new StmtData.LdFun(fun, StaticEnv.BASE));
        var guard = cursor.insert(new StmtData.Eq(expr, sym, base));

        var safeBb = cfg.addBB("baseGuardSafe");
        var fallbackBb = cfg.addBB("baseGuardFail");
        var afterBb = bbAt(after);
        setJump(new JumpData.Branch(guard, safeBb, fallbackBb));

        // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
        cursor.moveToStart(fallbackBb);
        // Compile a call.
        // Also, pass `Constant`s containing symbols and language objects to arguments,
        // expecting them to be `eval`ed, like in `CallSpecial`.
        var argNames =
            expr.args().names().stream()
                .map(Optional::ofNullable)
                .collect(ImmutableList.toImmutableList());
        var args =
            expr.args().values().stream()
                .map(v -> (Expression) new Constant(v))
                .collect(ImmutableList.toImmutableList());
        var fs = compileFrameState();
        push(
            argNames.stream().anyMatch(Optional::isPresent)
                ? new StmtData.NamedCall(expr, sym, argNames, args, fs)
                : new StmtData.NamelessCall(expr, sym, args, fs));
        setJump(new Goto(target(afterBb)));
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

  @FunctionalInterface
  private interface MkUnopFn {
    StmtData.Expression make(@Nullable LangSXP ast, Expression value);
  }

  @FunctionalInterface
  private interface MkBinopFn {
    StmtData.Expression make(@Nullable LangSXP ast, Expression lhs, Expression rhs);
  }

  private StmtData.Expression mkUnop(ConstPool.Idx<LangSXP> ast, MkUnopFn unop) {
    return unop.make(pop());
  }

  private StmtData.Expression mkBinop(ConstPool.Idx<LangSXP> ast, MkBinopFn binop) {
    var rhs = pop();
    var lhs = pop();
    return binop.make(lhs, rhs);
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

  private void compileStartDispatch(Dispatch.Type type, ConstPool.Idx<LangSXP> ast, BcLabel after) {
    compileStartDispatch(type, bbAt(after));
  }

  private void compileStartDispatch(Dispatch.Type type, LangSXP ast, BB after) {
    var rhs = type.hasRhs ? pop() : null;
    var target = top();
    compileGeneralDispatchCommon(type.builtin, type.isNForm, ast, target, rhs, after);
    if (rhs != null) {
      push(rhs);
    }

    if (!type.isNForm) {
      pushCallArg(target);
      if (!ast.args().isEmpty() && ast.argName(0) != null) {
        setNameOfLastCallArg(Objects.requireNonNull(ast.argName(0)).name());
      }
    }

    pushDispatch(type, ast, after);
  }

  private void compileGeneralDispatchCommon(
      BuiltinId fun,
      boolean isNForm,
      LangSXP ast,
      Expression target,
      @Nullable Expression rhs,
      BB after) {
    var isNotObject = cursor.insert(new StmtData.GnuRIs(IsTypeCheck.NON_OBJECT, target));
    var nonObjectBb = cfg.addBB("dispatchNonObject");
    var objectBb = cfg.addBB("dispatchObject");
    setJump(new JumpData.Branch(isNotObject, nonObjectBb, objectBb));

    // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
    cursor.moveToStart(objectBb);
    var target1 = pop();
    assert target == target1
        : "`compileGeneralDispatchCommon` only called with top-of-stack as `target`";
    var dispatch = cursor.insert(new StmtData.TryDispatchBuiltin_(ast, fun, target, rhs));
    cursor.insert(next -> new JumpData.Branch(dispatch.dispatched(), next, nonObjectBb));
    push(dispatch.value());
    setJump(new Goto(target(after)));
    addPhiInputsForStack(after);
    pop(); // the `CallBuiltin` pushed above.

    // Has one predecessor (no phis) so we can call `cursor.moveToStart` instead of `moveTo`.
    cursor.moveToStart(nonObjectBb);
    push(target);

    if (!isNForm) {
      pushCall(fun);
    }
  }

  private void compileDefaultDispatch(
      Dispatch.Type type,
      int minNumArgs,
      int maxNumArgs,
      BiFunction<LangSXP, List<Expression>, StmtData.Expression> dispatchInstrData) {
    assert !type.isNForm : "use compileDefaultDispatchN for `...N` bytecodes";

    if (type.hasRhs) {
      pushCallArg(pop());
    }

    var dispatch = popDispatch(type);
    var call = popCall();

    pop();

    var argValues = Lists.map(call.args, Call.Arg::value);
    if (call.args.stream().anyMatch(arg -> arg.name() != null || arg.value == Constant.DOTS)
        || call.args.size() < minNumArgs
        || call.args.size() > maxNumArgs) {
      // Slowcase, for when we don't have a specialized instruction.
      push(
          new StmtData.CallSafeBuiltin(
              dispatch.ast, type.builtin, ImmutableList.copyOf(argValues)));
    } else {
      // Instead of compiling a call, insert our specialized instruction with the call arguments.
      push(dispatchInstrData.apply(dispatch.ast, argValues));
    }

    setJump(new Goto(target(bbAfterCurrent())));
    if (bbAfterCurrent() != dispatch.after) {
      throw fail("expected to be immediately before `after` BB " + dispatch.after.label());
    }
  }

  private void compileDefaultDispatchN(Dispatch.Type type, int numArgs) {
    compileDefaultDispatchN(type, numArgs, null);
  }

  private void compileDefaultDispatchN(
      Dispatch.Type type,
      int numArgs,
      @Nullable BiFunction<LangSXP, List<Expression>, StmtData.Expression> dispatchInstrData) {
    assert type.isNForm : "use compileDefaultDispatch for non-`...N` bytecodes";

    var dispatch = popDispatch(type);
    var uncastedArgs = stack.subList(stack.size() - numArgs, stack.size());
    for (var arg : uncastedArgs) {
      if (!(arg instanceof Expression)) {
        throw fail(
            "expected Expression on stack for `compileDefaultDispatchN("
                + type
                + ", "
                + numArgs
                + ", ...)`");
      }
    }
    @SuppressWarnings("unchecked")
    var args = (List<Expression>) (List<?>) uncastedArgs;

    // Unlike `compileDefaultDispatch`, there's no call, instead we take the args from the stack.
    // Like `compileDefaultDispatch`, there's either a specialized instruction or a fallback call,
    // although in this the number of arguments is known.
    var result =
        dispatchInstrData == null
            ? new StmtData.CallSafeBuiltin(dispatch.ast, type.builtin, ImmutableList.copyOf(args))
            : dispatchInstrData.apply(dispatch.ast, args);
    args.clear();
    push(result);

    setJump(new Goto(target(bbAfterCurrent())));
    if (bbAfterCurrent() != dispatch.after) {
      throw fail("expected to be immediately before `after` BB " + dispatch.after.label());
    }
  }

  private void compileCall(ConstPool.Idx<LangSXP> ast) {
    compileCall(popCall(), get(ast));
  }

  private void compileCall(Call call, LangSXP ast) {
    var names =
        call.args.stream()
            .map(arg -> Optional.ofNullable(arg.name))
            .collect(ImmutableList.toImmutableList());
    var args = call.args.stream().map(arg -> arg.value).collect(ImmutableList.toImmutableList());
    var isNamed = call.args.stream().anyMatch(arg -> arg.name() != null);
    var callInstr =
        cursor.insert(
            switch (call.fun) {
              case Call.Fun.Value(var fun) ->
                  isNamed
                      ? new StmtData.NamedCall(ast, fun, names, args, compileFrameState())
                      : new NamelessCall(ast, fun, args, compileFrameState());
              case Call.Fun.Builtin(var fun) ->
                  // Even if `isNamed` is true, R just ignores the names.
                  new StmtData.CallBuiltin(ast, fun, args);
            });
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
    if (callInstr.data() instanceof StmtData.NamelessCall n
        && n.fun() instanceof Stmt f
        && f.data() instanceof StmtData.LdFun(var name, var _)
        && name.name().equals("stop")
        && n.args().size() == 1
        && n.args().getFirst().equals(Constant.strSxp("empty alternative in numeric switch"))
        && hasBbAfterCurrent()
        && bbAfterCurrent().phis().size() == stack.size() - 1) {
      pop();
    }
  }

  private FrameState compileFrameState() {
    return cursor.insert(
        new FrameState_(new BcPosition(bcPos), cfg.isPromise, ImmutableList.copyOf(stack)));
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
    addPhiInputsForStack(bb, cursor.bb());
  }

  /// Add inputs to the given block's phis for the stack at `incoming`.
  ///
  /// This is the same as [#addPhiInputsForStack(BB)] except uses `incoming` instead
  /// of the current block.
  private void addPhiInputsForStack(BB bb, BB incoming) {
    // Ensure the BB has phis for each stack value.
    if (bbsWithPhis.add(bb)) {
      // Add phis for all of the nodes on the stack.
      for (var expr : stack) {
        bb.addPhi(node.getClass());
      }
    } else {
      // Already added phis,
      // but sanity-check that they're still same type and amount as the nodes on the stack.
      var phis = bb.phis().iterator();
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
                  + Strings.join(", ", Node::id, stack)
                  + "]");
        }
        var phi = phis.next();
        if (!phi.nodeClass().isInstance(stack.get(i))) {
          throw fail(
              "BB stack mismatch: "
                  + bb.label()
                  + " has a phi of type "
                  + phi.getClass()
                  + " at index "
                  + i
                  + " but expected "
                  + stack.get(i).getClass()
                  + "\nIncoming stack: ["
                  + Strings.join(", ", Node::id, stack)
                  + "]");
        }
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
                + Strings.join(", ", Node::id, stack)
                + "]");
      }
    }

    // Add an input to each phi, for the corresponding stack value and the current BB.
    var phis = bb.phis().iterator();
    for (var node : stack) {
      @SuppressWarnings("unchecked")
      var phi = (Phi<Node>) phis.next();
      phi.setInput(incoming, node);
    }
  }

  // endregion `moveTo` and phis

  // region statement and jump insertions
  /// Insert a statement.
  private void insert(Expression statement) {
    cursor.insert(statement);
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
  private void pushCall(Expression fun) {
    callStack.add(new Call(new Call.Fun.Value(fun)));
  }

  /// Begin a new call of the given function (statically known builtin).
  private void pushCall(BuiltinId fun) {
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
  private void pushDispatch(Dispatch.Type type, LangSXP ast, BB after) {
    dispatchStack.add(new Dispatch(type, ast, after));
  }

  /// Reference data from a previously-compiled "start dispatch" bytecode instruction (via
  /// [#pushDispatch(Dispatch.Type,LangSXP,BB)]), and pop it.
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
  private Expression builtin(BuiltinId builtin, Expression... args) {
    return intrinsic("blt_" + builtin.name(), args);
  }

  private Expression intrinsic(String name, Expression... args) {
    // TODO: Add intrinsic callee, not `StaticCallee`.
    var function = module().function(name);
    assert function != null : "missing builtin";
    var version = function.version(0);
    return new org.prlprg.fir.instruction.Call(
        new StaticCallee(function, version), ImmutableList.copyOf(args));
  }

  // endregion expression constructors

  // region misc
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
    return new NamedVariable(get(idx).name());
  }

  private void require(boolean condition, Supplier<String> message) {
    if (!condition) {
      throw fail(message.get());
    }
  }

  private CFGCompilerUnsupportedBcException failUnsupported(String message) {
    return failUnsupported(message, null);
  }

  private CFGCompilerUnsupportedBcException failUnsupported(
      String message, @Nullable ClosureCompilerUnsupportedException cause) {
    return new CFGCompilerUnsupportedBcException(message, bc, bcPos, cursor, cause);
  }

  private CFGCompilerException fail(String message) {
    return new CFGCompilerException(message, bc, bcPos, cursor);
  }
  // endregion misc
}
