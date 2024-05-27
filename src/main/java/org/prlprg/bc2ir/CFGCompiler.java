package org.prlprg.bc2ir;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import java.util.function.Supplier;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcInstr.Add;
import org.prlprg.bc.BcInstr.And;
import org.prlprg.bc.BcInstr.And1st;
import org.prlprg.bc.BcInstr.And2nd;
import org.prlprg.bc.BcInstr.BaseGuard;
import org.prlprg.bc.BcInstr.BrIfNot;
import org.prlprg.bc.BcInstr.Call;
import org.prlprg.bc.BcInstr.CallBuiltin;
import org.prlprg.bc.BcInstr.CallSpecial;
import org.prlprg.bc.BcInstr.CheckFun;
import org.prlprg.bc.BcInstr.Colon;
import org.prlprg.bc.BcInstr.DdVal;
import org.prlprg.bc.BcInstr.DdValMissOk;
import org.prlprg.bc.BcInstr.DecLnk;
import org.prlprg.bc.BcInstr.DecLnkStk;
import org.prlprg.bc.BcInstr.DeclnkN;
import org.prlprg.bc.BcInstr.DfltC;
import org.prlprg.bc.BcInstr.DfltSubassign;
import org.prlprg.bc.BcInstr.DfltSubassign2;
import org.prlprg.bc.BcInstr.DfltSubset;
import org.prlprg.bc.BcInstr.DfltSubset2;
import org.prlprg.bc.BcInstr.Div;
import org.prlprg.bc.BcInstr.DoDots;
import org.prlprg.bc.BcInstr.DoLoopBreak;
import org.prlprg.bc.BcInstr.DoLoopNext;
import org.prlprg.bc.BcInstr.DoMissing;
import org.prlprg.bc.BcInstr.Dollar;
import org.prlprg.bc.BcInstr.DollarGets;
import org.prlprg.bc.BcInstr.DotCall;
import org.prlprg.bc.BcInstr.DotsErr;
import org.prlprg.bc.BcInstr.Dup;
import org.prlprg.bc.BcInstr.Dup2nd;
import org.prlprg.bc.BcInstr.EndAssign;
import org.prlprg.bc.BcInstr.EndAssign2;
import org.prlprg.bc.BcInstr.EndFor;
import org.prlprg.bc.BcInstr.EndLoopCntxt;
import org.prlprg.bc.BcInstr.Eq;
import org.prlprg.bc.BcInstr.Exp;
import org.prlprg.bc.BcInstr.Expt;
import org.prlprg.bc.BcInstr.Ge;
import org.prlprg.bc.BcInstr.GetBuiltin;
import org.prlprg.bc.BcInstr.GetFun;
import org.prlprg.bc.BcInstr.GetGlobFun;
import org.prlprg.bc.BcInstr.GetIntlBuiltin;
import org.prlprg.bc.BcInstr.GetSymFun;
import org.prlprg.bc.BcInstr.GetVar;
import org.prlprg.bc.BcInstr.GetVarMissOk;
import org.prlprg.bc.BcInstr.GetterCall;
import org.prlprg.bc.BcInstr.Goto;
import org.prlprg.bc.BcInstr.Gt;
import org.prlprg.bc.BcInstr.IncLnk;
import org.prlprg.bc.BcInstr.IncLnkStk;
import org.prlprg.bc.BcInstr.Invisible;
import org.prlprg.bc.BcInstr.IsCharacter;
import org.prlprg.bc.BcInstr.IsComplex;
import org.prlprg.bc.BcInstr.IsDouble;
import org.prlprg.bc.BcInstr.IsInteger;
import org.prlprg.bc.BcInstr.IsLogical;
import org.prlprg.bc.BcInstr.IsNull;
import org.prlprg.bc.BcInstr.IsNumeric;
import org.prlprg.bc.BcInstr.IsObject;
import org.prlprg.bc.BcInstr.IsSymbol;
import org.prlprg.bc.BcInstr.LdConst;
import org.prlprg.bc.BcInstr.LdFalse;
import org.prlprg.bc.BcInstr.LdNull;
import org.prlprg.bc.BcInstr.LdTrue;
import org.prlprg.bc.BcInstr.Le;
import org.prlprg.bc.BcInstr.Log;
import org.prlprg.bc.BcInstr.LogBase;
import org.prlprg.bc.BcInstr.Lt;
import org.prlprg.bc.BcInstr.MakeClosure;
import org.prlprg.bc.BcInstr.MakeProm;
import org.prlprg.bc.BcInstr.MatSubassign;
import org.prlprg.bc.BcInstr.MatSubassign2;
import org.prlprg.bc.BcInstr.MatSubset;
import org.prlprg.bc.BcInstr.MatSubset2;
import org.prlprg.bc.BcInstr.Math1;
import org.prlprg.bc.BcInstr.Mul;
import org.prlprg.bc.BcInstr.Ne;
import org.prlprg.bc.BcInstr.Not;
import org.prlprg.bc.BcInstr.Or;
import org.prlprg.bc.BcInstr.Or1st;
import org.prlprg.bc.BcInstr.Or2nd;
import org.prlprg.bc.BcInstr.Pop;
import org.prlprg.bc.BcInstr.PrintValue;
import org.prlprg.bc.BcInstr.PushArg;
import org.prlprg.bc.BcInstr.PushConstArg;
import org.prlprg.bc.BcInstr.PushFalseArg;
import org.prlprg.bc.BcInstr.PushNullArg;
import org.prlprg.bc.BcInstr.PushTrueArg;
import org.prlprg.bc.BcInstr.Return;
import org.prlprg.bc.BcInstr.ReturnJmp;
import org.prlprg.bc.BcInstr.SeqAlong;
import org.prlprg.bc.BcInstr.SeqLen;
import org.prlprg.bc.BcInstr.SetLoopVal;
import org.prlprg.bc.BcInstr.SetTag;
import org.prlprg.bc.BcInstr.SetVar;
import org.prlprg.bc.BcInstr.SetVar2;
import org.prlprg.bc.BcInstr.SetterCall;
import org.prlprg.bc.BcInstr.SpecialSwap;
import org.prlprg.bc.BcInstr.Sqrt;
import org.prlprg.bc.BcInstr.StartAssign;
import org.prlprg.bc.BcInstr.StartAssign2;
import org.prlprg.bc.BcInstr.StartC;
import org.prlprg.bc.BcInstr.StartFor;
import org.prlprg.bc.BcInstr.StartLoopCntxt;
import org.prlprg.bc.BcInstr.StartSubassign;
import org.prlprg.bc.BcInstr.StartSubassign2;
import org.prlprg.bc.BcInstr.StartSubassign2N;
import org.prlprg.bc.BcInstr.StartSubassignN;
import org.prlprg.bc.BcInstr.StartSubset;
import org.prlprg.bc.BcInstr.StartSubset2;
import org.prlprg.bc.BcInstr.StartSubset2N;
import org.prlprg.bc.BcInstr.StartSubsetN;
import org.prlprg.bc.BcInstr.StepFor;
import org.prlprg.bc.BcInstr.Sub;
import org.prlprg.bc.BcInstr.Subassign2N;
import org.prlprg.bc.BcInstr.SubassignN;
import org.prlprg.bc.BcInstr.Subset2N;
import org.prlprg.bc.BcInstr.SubsetN;
import org.prlprg.bc.BcInstr.Switch;
import org.prlprg.bc.BcInstr.UMinus;
import org.prlprg.bc.BcInstr.UPlus;
import org.prlprg.bc.BcInstr.VecSubassign;
import org.prlprg.bc.BcInstr.VecSubassign2;
import org.prlprg.bc.BcInstr.VecSubset;
import org.prlprg.bc.BcInstr.VecSubset2;
import org.prlprg.bc.BcInstr.Visible;
import org.prlprg.bc.BcLabel;
import org.prlprg.bc.ConstPool;
import org.prlprg.bc.LabelName;
import org.prlprg.ir.cfg.BB;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Constant;
import org.prlprg.ir.cfg.JumpData;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.cfg.StmtData;
import org.prlprg.ir.cfg.builder.CFGCursor;
import org.prlprg.ir.cfg.builder.JumpInsertion;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.IsTypeCheck;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Reflection;

/** Stores data to compile {@link org.prlprg.bc.Bc} into {@link org.prlprg.ir.cfg.CFG} */
public class CFGCompiler {
  public static CFG compileCFG(Bc bc) {
    var compiler = new CFGCompiler(bc);
    compiler.doCompile();
    return compiler.cfg();
  }

  private record CallArg(RValue value, @Nullable String name) {
    static CallArg missing() {
      return new CallArg(new Constant(SEXPs.MISSING_ARG), null);
    }

    CallArg(RValue value) {
      this(value, null);
    }
  }

  private record ForLoop(BB body, BB step, BB end) {}

  private final Bc bc;
  private final CFG cfg = new CFG();
  private final Map<Integer, BB> bbByLabel = new HashMap<>();
  private final Set<BB> bbsWithPhis = new HashSet<>();
  private int bcPos = 0;
  private final CFGCursor cursor = new CFGCursor(cfg);
  private final List<Node> stack = new ArrayList<>();
  private final List<CallArg> callArgStack = new ArrayList<>();
  private final List<ForLoop> forLoopStack = new ArrayList<>();
  private final RValue env;
  private boolean startedCompile = false;

  /**
   * Create a compiler.
   *
   * <p>After this, it initialized the variables necessary for compiling but hasn't started.
   */
  CFGCompiler(Bc bc) {
    this.bc = bc;
    bbByLabel.put(0, cfg.entry());
    env = cursor.insert(new StmtData.LdFunctionEnv());
  }

  /**
   * The CFG being compiled.
   *
   * <p>It's only 100% compiled after {@link #doCompile()} returns.
   */
  CFG cfg() {
    return cfg;
  }

  /** Actually compile {@code bc} into {@code cfg}. */
  void doCompile() {
    assert !startedCompile : "already started (and may or may not have finished) compiling";
    startedCompile = true;

    var code = bc.code();

    // Put BBs at jump destinations
    // (and after jumps, but these are guaranteed to be other jump's destinations)
    for (var i = 0; i < code.size(); i++) {
      addInstrBBs(code.get(i));
    }

    // Add instructions to BBs, including jumps which connect them
    for (bcPos = 0; bcPos < code.size(); bcPos++) {
      addBcInstrIrInstrs(code.get(bcPos));
    }
  }

  private void push(Node value) {
    stack.add(value);
  }

  private <N extends Node> N pop(Class<N> clazz) {
    require(!stack.isEmpty(), () -> "node stack underflow");
    return clazz.cast(stack.removeLast());
  }

  private <N extends Node> N top(Class<N> clazz) {
    require(!stack.isEmpty(), () -> "no node on stack");
    return clazz.cast(stack.getLast());
  }

  private void pushCallArg(RValue value) {
    callArgStack.add(new CallArg(value));
  }

  private void pushMissingCallArg() {
    callArgStack.add(CallArg.missing());
  }

  private void setNameOfLastCallArg(String name) {
    var last = callArgStack.removeLast();
    callArgStack.add(new CallArg(last.value(), name));
  }

  private void pushForLoop(BB body, BB step, BB end) {
    forLoopStack.add(new ForLoop(body, step, end));
  }

  private ForLoop topForLoop() {
    require(!forLoopStack.isEmpty(), () -> "no for loop on stack");
    return forLoopStack.getLast();
  }

  private ForLoop popForLoop() {
    require(!forLoopStack.isEmpty(), () -> "for loop stack underflow");
    return forLoopStack.removeLast();
  }

  private <S extends SEXP> S get(ConstPool.Idx<S> idx) {
    return bc.consts().get(idx);
  }

  private void insert(StmtData.Void data) {
    cursor.insert(data);
  }

  private void pushInsert(StmtData.RValue_ data) {
    push(cursor.insert(data));
  }

  private void pushCallArgInsert(StmtData.RValue_ data) {
    pushCallArg(cursor.insert(data));
  }

  private void insert(JumpInsertion<?> jump) {
    // We've already added all basic blocks, so don't use `cursor.insert` because it would add this
    // one gain. Instead we just get the pre-existing basic block and compute the jump insertion
    // with it, then move to it.
    if (!bbByLabel.containsKey(bcPos + 1)) {
      throw fail("no other jump points after this jump");
    }
    var bb = bbByLabel.get(bcPos + 1);
    cursor.insert(jump.compute(bb));
    cursor.moveToStart(bb);
  }

  private void addBb(BcLabel label, String name) {
    int pos = label.target();
    if (!bbByLabel.containsKey(pos)) {
      bbByLabel.put(pos, cfg.addBB(name));
    }
  }

  private BB bbAt(BcLabel label) {
    int pos = label.target();
    assert bbByLabel.containsKey(pos) : "no BB at position " + pos;
    return bbByLabel.get(pos);
  }

  private void moveTo(BB bb) {
    cursor.moveToStart(bb);

    // Make sure this block has phis representing the arguments currently on the stack, then replace
    // the stack with those phis (this is how to convert a stack-based bytecode to an SSA-form IR).
    //
    // First make sure the block has phis (add them or check they're the correct type and count).
    if (bbsWithPhis.add(bb)) {
      // Already added phis,
      // but sanity-check that they're still same type and amount as the nodes on the stack.
      var phis = bb.phis().iterator();
      for (var i = 0; i < stack.size(); i++) {
        if (!phis.hasNext()) {
          throw fail(
              "BB stack mismatch: "
                  + bb
                  + " has too few phis; expected "
                  + stack.size()
                  + " but got "
                  + i);
        }
        var phi = phis.next();
        if (phi.getClass() != stack.get(i).getClass()) {
          throw fail(
              "BB stack mismatch: "
                  + bb
                  + " has a phi of type "
                  + phi.getClass()
                  + " at index "
                  + i
                  + " but expected "
                  + stack.get(i).getClass());
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
                + bb
                + " has too many phis; expected "
                + stack.size()
                + " but got "
                + i);
      }
    } else {
      // Add phis for all of the nodes on the stack
      for (var node : stack) {
        bb.addPhi(node.getClass());
      }
    }
    // Then replace the stack with those phis.
    stack.clear();
    stack.addAll(bb.phis());
  }

  private void addInstrBBs(BcInstr instr) {
    if (!(instr instanceof Record r)) {
      throw new AssertionError("bytecode instructions should all be java records");
    }

    for (var component : instr.getClass().getRecordComponents()) {
      var clazz = component.getType();
      var labelName = component.getAnnotation(LabelName.class);
      var value = Reflection.getComponent(r, component);
      assert clazz == BcLabel.class || labelName == null
          : "only BcLabel fields should be annotated with @LabelName";
      assert clazz != BcLabel.class || labelName != null
          : "BcLabel fields should be annotated with @LabelName";

      if (clazz == BcLabel.class) {
        addBb((BcLabel) value, labelName.value());
      }
    }
  }

  private void addBcInstrIrInstrs(BcInstr instr) {
    switch (instr) {
      case Return() -> insert(_ -> new JumpData.Return(pop(RValue.class)));
      case Goto(var label) -> insert(_ -> new JumpData.Goto(bbAt(label)));
      case BrIfNot(var ast, var label) ->
          insert(next -> new JumpData.Branch(get(ast), pop(RValue.class), next, bbAt(label)));
      case Pop() -> pop(Node.class);
      case Dup() -> {
        var value = pop(Node.class);
        push(value);
        push(value);
      }
      case PrintValue() ->
          pushInsert(
              new StmtData.CallBuiltin(
                  Optional.empty(),
                  BuiltinId.PRINT_VALUE,
                  ImmutableList.of(pop(RValue.class)),
                  env));
      case StartLoopCntxt(var _, var _), EndLoopCntxt(var _) ->
          throw failUnsupported("loop contexts");
      case StartFor(var ast, var elemName, var step) -> {
        // This takes advantage of invariants expected between `StartFor/StepFor/EndFor` and just
        // compiles the entire for loop logic (everything other than the loop body). We then do a
        // weak sanity check that the bytecode upholds these invariants by including `StepFor` in
        // the step branch and `EndFor` in the end branch, although it may break the invariants
        // other ways and simply not be noticed.
        //
        // For loop init
        var seq = cursor.insert(new StmtData.ToForSeq(pop(RValue.class)));
        var length = cursor.insert(new StmtData.Length(top(RValue.class)));
        var init = Constant.integer(0);
        var initBb = cursor.bb();
        insert(JumpData.Goto::new);
        var bodyBb = cursor.bb();

        // For loop step
        var stepBb = bbAt(step);
        cursor.moveToStart(stepBb);
        var index = stepBb.addPhi(RValue.class);
        index.setInput(initBb, init);
        var index1 = cursor.insert(new StmtData.Inc(index.cast()));
        index.setInput(bodyBb, index1);
        var cond = cursor.insert(new StmtData.Lt(Optional.of(get(ast)), length, index1, env));
        // There's no label corresponding to `end` (only in `StartLoopCntxt`), so we haven't
        // inserted a BB for it, so we can insert it here. We do this by using
        // `cursor.insert(JumpInsertion)` instead of `this.insert(JumpInsertion)`; the former
        // inserts a new BB and the latter uses the BB after the currently-compiled bytecode
        // instruction (which is `bodyBb`, notice we used `this.insert(JumpInsertion)` above).
        cursor.insert(endBb -> new JumpData.Branch(get(ast), cond, endBb, bodyBb));
        var endBb = cursor.bb();

        // For loop index (in body BB before the body expression)
        cursor.moveToStart(bodyBb);
        var elem = cursor.insert(new StmtData.Extract2_1D(Optional.of(get(ast)), seq, index1, env));
        cursor.insert(new StmtData.StVar(get(elemName), elem, env));

        // Next we'll compile the body.
        // When we encounter `StepFor`, we know that the body is over and can move to `endBb`
        // (`stepBB` only contains instructions that were inserted in "For loop step" above).
        pushForLoop(bodyBb, stepBb, endBb);
      }
      case DoLoopNext() -> insert(_ -> new JumpData.Goto(topForLoop().body()));
      case DoLoopBreak() -> insert(_ -> new JumpData.Goto(topForLoop().end()));
      case StepFor(var body) -> {
        var forLoop = topForLoop();
        var bodyBb = bbAt(body);
        if (bodyBb != forLoop.body) {
          throw fail("StepFor: expected body BB " + forLoop.body.id() + " but got " + bodyBb.id());
        }
        if (cursor.bb() != forLoop.step || cursor.stmtIdx() != 0) {
          throw fail("StepFor: expected to be at start of step BB " + forLoop.step.id());
        }

        // We must explicitly move to `endBb` because, as mentioned above, there's no label
        // corresponding to it (the compiler automatically moves to BBs with corresponding labels).
        moveTo(topForLoop().end);
      }
      case EndFor() -> {
        var forLoop = popForLoop();
        if (cursor.bb() != forLoop.end || cursor.stmtIdx() != 0) {
          throw fail("EndFor: expected to be at start of end BB " + forLoop.end.id());
        }
      }
      case SetLoopVal() -> {
        // This one is weird. It doesn't get inserted by the Java compiler anywhere.
        // However it has a simple (unhelpful) implementation, so even if unused, we'll support it.
        pop(RValue.class);
        pop(RValue.class);
        push(new Constant(SEXPs.NULL));
      }
      case Invisible() -> insert(new StmtData.Invisible());
      case LdConst(var constant) -> push(new Constant(get(constant)));
      case LdNull() -> push(new Constant(SEXPs.NULL));
      case LdTrue() -> push(new Constant(SEXPs.TRUE));
      case LdFalse() -> push(new Constant(SEXPs.FALSE));
      case GetVar(var name) -> pushInsert(new StmtData.LdVar(get(name), env));
      case DdVal(var _) -> throw failUnsupported("`..n` variables");
      case SetVar(var name) -> insert(new StmtData.StVar(get(name), pop(RValue.class), env));
      case GetFun(var name) -> pushInsert(new StmtData.LdFun(get(name), env));
      case GetGlobFun(var name) -> pushInsert(new StmtData.LdFun(get(name), StaticEnv.GLOBAL));
        // TODO: No PIR analogue for SYMVALUE, so this may be incorrect
      case GetSymFun(var name) -> push(Constant.builtin(BuiltinId.referencedBy(get(name))));
      case GetBuiltin(var name) -> push(Constant.builtin(BuiltinId.referencedBy(get(name))));
      case GetIntlBuiltin(var name) -> push(Constant.builtin(BuiltinId.referencedBy(get(name))));
      case CheckFun() -> pushInsert(new StmtData.ChkFun(pop(RValue.class)));
      case MakeProm(var code) -> pushCallArgInsert(new StmtData.MkProm(get(code), env));
      case DoMissing() -> pushMissingCallArg();
      case SetTag(var tag) -> {
        if (tag != null) {
          setNameOfLastCallArg(
              get(tag)
                  .reifyString()
                  .orElseThrow(() -> fail("SetTag: tag must be a regular symbol or string")));
        }
      }
      case DoDots() -> pushCallArgInsert(new StmtData.LdDots(pop(RValue.class)));
      case PushArg() -> pushCallArg(pop(RValue.class));
      case PushConstArg(var constant) -> pushCallArg(new Constant(get(constant)));
      case PushNullArg() -> pushCallArg(new Constant(SEXPs.NULL));
      case PushTrueArg() -> pushCallArg(new Constant(SEXPs.TRUE));
      case PushFalseArg() -> pushCallArg(new Constant(SEXPs.FALSE));
      case Call(var ast) -> compileCall(ast);
      case CallBuiltin(var ast) -> compileCall(ast);
      case CallSpecial(var ast) -> compileCall(ast);
      case MakeClosure(var _) -> {
        throw failUnsupported("closure");
        /* var fb = get(arg);
        var forms = (ListSXP) fb.get(0);
        // TODO: `compileClosure` will be a static function in `ClosureCompiler`.
        //  `fb.get(1)` could be a `BcSEXP` or AST SEXP.
        var body = compileClosure(fb.get(1));
        var ast = fb.size() > 2 ? (SymOrLangSXP) fb.get(2) : null;
        pushInsert(new StmtData.MkCls(body.closure(), forms, ast, body.bcAddress(), env)); */
      }
      case UMinus(var ast) ->
          pushInsert(new StmtData.UMinus(Optional.of(get(ast)), pop(RValue.class), env));
      case UPlus(var ast) ->
          pushInsert(new StmtData.UPlus(Optional.of(get(ast)), pop(RValue.class), env));
      case Sqrt(var ast) ->
          pushInsert(new StmtData.Sqrt(Optional.of(get(ast)), pop(RValue.class), env));
      case Add(var ast) ->
          pushInsert(
              new StmtData.Add(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Sub(var ast) ->
          pushInsert(
              new StmtData.Sub(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Mul(var ast) ->
          pushInsert(
              new StmtData.Mul(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Div(var ast) ->
          pushInsert(
              new StmtData.Div(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Expt(var ast) ->
          pushInsert(
              new StmtData.Pow(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Exp(var ast) ->
          pushInsert(new StmtData.Exp(Optional.of(get(ast)), pop(RValue.class), env));
      case Eq(var ast) ->
          pushInsert(
              new StmtData.Eq(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Ne(var ast) ->
          pushInsert(
              new StmtData.Neq(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Lt(var ast) ->
          pushInsert(
              new StmtData.Lt(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Le(var ast) ->
          pushInsert(
              new StmtData.Lte(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Ge(var ast) ->
          pushInsert(
              new StmtData.Gte(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Gt(var ast) ->
          pushInsert(
              new StmtData.Gt(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case And(var ast) ->
          pushInsert(
              new StmtData.LAnd(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Or(var ast) ->
          pushInsert(
              new StmtData.LOr(Optional.of(get(ast)), pop(RValue.class), pop(RValue.class), env));
      case Not(var ast) ->
          pushInsert(new StmtData.Not(Optional.of(get(ast)), pop(RValue.class), env));
      case DotsErr() -> pushInsert(new StmtData.DotsError(env));
      case StartAssign(var _), EndAssign(var _) -> throw failUnsupported("complex assignment");
      case StartSubset(var _, var _), DfltSubset() -> throw failUnsupported("subset");
      case StartSubassign(var _, var _), DfltSubassign() -> throw failUnsupported("subassign");
      case StartC(var _, var _), DfltC() -> throw failUnsupported("c");
      case StartSubset2(var _, var _), DfltSubset2() -> throw failUnsupported("subset2");
      case StartSubassign2(var _, var _), DfltSubassign2() -> throw failUnsupported("subassign2");
      case Dollar(var ast, var member) -> {}
      case DollarGets(var ast, var member) -> {}
      case IsNull() ->
          pushInsert(
              new StmtData.Eq(Optional.empty(), pop(RValue.class), new Constant(SEXPs.NULL), env));
      case IsLogical() -> pushInsert(new StmtData.GnuRIs(IsTypeCheck.LGL, pop(RValue.class)));
      case IsInteger() -> pushInsert(new StmtData.GnuRIs(IsTypeCheck.INT, pop(RValue.class)));
      case IsDouble() -> pushInsert(new StmtData.GnuRIs(IsTypeCheck.REAL, pop(RValue.class)));
      case IsComplex() -> pushInsert(new StmtData.GnuRIs(IsTypeCheck.CPLX, pop(RValue.class)));
      case IsCharacter() -> pushInsert(new StmtData.GnuRIs(IsTypeCheck.STR, pop(RValue.class)));
      case IsSymbol() -> pushInsert(new StmtData.GnuRIs(IsTypeCheck.SYM, pop(RValue.class)));
      case IsObject() -> pushInsert(new StmtData.GnuRIs(IsTypeCheck.NON_OBJECT, pop(RValue.class)));
      case IsNumeric() -> pushInsert(new StmtData.GnuRIs(IsTypeCheck.NUM, pop(RValue.class)));
      case VecSubset(var ast) -> {}
      case MatSubset(var ast) -> {}
      case VecSubassign(var ast) -> {}
      case MatSubassign(var ast) -> {}
      case And1st(var ast, var shortCircuit) -> {}
      case And2nd(var ast) -> {}
      case Or1st(var ast, var shortCircuit) -> {}
      case Or2nd(var ast) -> {}
      case GetVarMissOk(var name) -> {}
      case DdValMissOk(var name) -> {}
      case Visible() -> {}
      case SetVar2(var name) -> {}
      case StartAssign2(var name) -> {}
      case EndAssign2(var name) -> {}
      case SetterCall(var ast, var valueExpr) -> {}
      case GetterCall(var ast) -> {}
      case SpecialSwap() -> {
        var value = pop(Node.class);
        var value2 = pop(Node.class);
        push(value);
        push(value2);
      }
      case Dup2nd() -> {
        var value = pop(Node.class);
        var value2 = top(Node.class);
        push(value);
        push(value2);
      }
        // ???
      case ReturnJmp() -> insert(_ -> new JumpData.NonLocalReturn(pop(RValue.class), env));
      case Switch(var ast, var names, var chrLabelsIdx, var numLabelsIdx) -> {}
      case StartSubsetN(var ast, var after) -> {}
      case StartSubassignN(var ast, var after) -> {}
      case VecSubset2(var ast) -> {}
      case MatSubset2(var ast) -> {}
      case VecSubassign2(var ast) -> {}
      case MatSubassign2(var ast) -> {}
      case StartSubset2N(var ast, var after) -> {}
      case StartSubassign2N(var ast, var after) -> {}
      case SubsetN(var ast, var n) -> {}
      case Subset2N(var ast, var n) -> {}
      case SubassignN(var ast, var n) -> {}
      case Subassign2N(var ast, var n) -> {}
      case Log(var ast) ->
          pushInsert(new StmtData.Log(Optional.of(get(ast)), pop(RValue.class), env));
      case LogBase(var ast) ->
          pushInsert(new StmtData.LogBase(Optional.of(get(ast)), pop(RValue.class), env));
      case Math1(var ast, var funId) ->
          pushInsert(new StmtData.Math1(Optional.of(get(ast)), funId, pop(RValue.class), env));
      case DotCall(var ast, var numArgs) -> {}
      case Colon(var ast) -> {}
      case SeqAlong(var ast) -> {}
      case SeqLen(var ast) -> {}
      case BaseGuard(var expr, var after) -> {}
      case IncLnk() -> {}
      case DecLnk() -> {}
      case DeclnkN(var _) -> {}
      case IncLnkStk() -> {}
      case DecLnkStk() -> {}
    }
  }

  private void compileCall(ConstPool.Idx<LangSXP> ast) {
    throw failUnsupported("call");
    /* var names = callArgStack.stream().map(arg -> Optional.ofNullable(arg.name)).collect(ImmutableList.toImmutableList());
    var args = callArgStack.stream().map(arg -> arg.value).collect(ImmutableList.toImmutableList());
    var fun = pop(RValue.class);
    // REACH: Handle when `fun` is trivially builtin or special
    var isNamed = callArgStack.stream().anyMatch(arg -> arg.name() != null);
    var fs = cursor.insert(new StmtData.FrameState(location(), inPromise(), ImmutableList.copyOf(stack), env));
    var call = cursor.insert(
        isNamed
            ? new StmtData.NamedCall(get(ast), fun, names, args, env, fs)
            : new StmtData.Call(get(ast), fun, args, env, fs));
    callArgStack.clear();
    push(call); */
  }

  private void require(boolean condition, Supplier<String> message) {
    if (!condition) {
      throw fail(message.get());
    }
  }

  private CFGCompilerUnsupportedBcException failUnsupported(String message) {
    return new CFGCompilerUnsupportedBcException(message, bcPos, cursor);
  }

  private CFGCompilerException fail(String message) {
    return new CFGCompilerException(message, bcPos, cursor);
  }
}
