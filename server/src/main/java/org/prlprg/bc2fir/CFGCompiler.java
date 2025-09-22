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
import org.prlprg.bc.BCCompiler;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcInstr.Add;
import org.prlprg.bc.BcInstr.And;
import org.prlprg.bc.BcInstr.And1st;
import org.prlprg.bc.BcInstr.And2nd;
import org.prlprg.bc.BcInstr.BaseGuard;
import org.prlprg.bc.BcInstr.BrIfNot;
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
import org.prlprg.bc.ConstPool.Idx;
import org.prlprg.bc.LabelName;
import org.prlprg.fir.analyze.type.InferType;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.binding.Local;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.callee.DispatchCallee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.cfg.cursor.JumpInsertion;
import org.prlprg.fir.ir.expression.Aea;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.LoadFun;
import org.prlprg.fir.ir.expression.LoadFun.Env;
import org.prlprg.fir.ir.expression.MaybeForce;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SuperLoad;
import org.prlprg.fir.ir.expression.SuperStore;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.type.Concreteness;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.session.RSession;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.NilSXP;
import org.prlprg.sexp.PrimVectorSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.SymSXP;
import org.prlprg.util.Reflection;
import org.prlprg.util.Strings;

/// Stores state to compile a promise or closure's code from GNU-R bytecode into FIŘ.
///
/// This could be a set of functions but they would be *very* large and/or pass around lots of
/// variables. Instead, it's a class and those commonly-passed variables are fields.
public class CFGCompiler {
  /// Compile the given bytecode into the given control-flow-graph
  ///
  /// @throws IllegalArgumentException If the control-flow graph isn't empty
  /// ([#compile(RSession, CFGCursor, Bc)] doesn't have this restriction).
  public static void compile(@Nullable RSession r, CFG cfg, Bc bc) {
    if (cfg.bbs().size() != 1 || !cfg.entry().statements().isEmpty() || !(cfg.entry().jump() instanceof Unreachable)) {
      throw new IllegalArgumentException("CFG must be empty");
    }

    compile(r, new CFGCursor(cfg), bc);
  }

  /// Compile the given bytecode into the given control-flow-graph, starting at the cursor
  public static void compile(@Nullable RSession r, CFGCursor cursor, Bc bc) {
    new CFGCompiler(r, cursor, bc).compileBc();
  }

  // region compiler data
  // - Some of it is constant through the compilation, some changes as instructions are compiled.
  private final @Nullable RSession r;
  private final InferType inferType;
  private final CFG cfg;
  private final Bc bc;
  private final Map<Integer, BB> bbByLabel = new HashMap<>();
  private final Set<BB> bbsWithPhis = new HashSet<>();
  private int bcPos = 0;
  private final CFGCursor cursor;
  private int numDeopts = 0;
  private final List<Argument> stack = new ArrayList<>();
  private final List<Loop> loopStack = new ArrayList<>();
  private final List<ComplexAssign> complexAssignStack = new ArrayList<>();
  private final List<Call> callStack = new ArrayList<>();
  private final List<Dispatch> dispatchStack = new ArrayList<>();
  private @Nullable String lastLoadedFunName;

  // endregion compiler data

  // region constructor
  /// Create the compiler, but don't compile `bc` into `cfg` yet.
  CFGCompiler(@Nullable RSession r, CFGCursor cursor, Bc bc) {
    this.r = r;
    cfg = cursor.cfg();
    inferType = new InferType(cfg.scope());
    this.bc = bc;
    this.cursor = cursor;
  }
  // endregion constructor

  // region compile closure entry
  /// Compile initial environment with parameters.
  void compileClosureEntry(List<NamedVariable> parameterNames, List<SEXP> parameterValues) {
    // Create the closure's environment
    cursor.insert(new Statement(new MkEnv()));

    // Compile parameters
    for (var i = 0; i < parameterNames.size(); i++) {
      var parameter = scope().parameters().get(i);
      var parameterName = parameterNames.get(i);
      var parameterDefault = parameterValues.get(i);
      compileParameter(parameter, parameterName, parameterDefault);
    }
  }

  private void compileParameter(Parameter parameter, NamedVariable parameterName,
      SEXP parameterDefault) {
    // Note: We don't use all `CFGCompiler` machinery,
    // e.g. we don't track phis because they're trivial.

    // Add parameter local named variable (only for documentation unless type is DOTS)
    var parameterVarType = parameter.type().withConcreteness(Concreteness.MAYBE);
    scope().addLocal(new Local(parameterName, parameterVarType));

    // Compile "compute default" if necessary, then "store parameter"
    if (parameterDefault == SEXPs.MISSING_ARG) {
      // The parameter never has a default, so just compile "store provided parameter"
      insert(new Store(parameterName, new Read(parameter.variable())));
    } else {
      // Compile "compute default if missing, otherwise store provided parameter"

      // Small optimization: if the parameter is a constant, we don't need to create a promise
      // and branch to store the promise.
      // It's also particularly useful for testing to generate branches to the same BB,
      // since they're an SSA edge case.
      var defaultIsConstant = parameterDefault instanceof NilSXP || parameterDefault instanceof PrimVectorSXP<?>;

      var parameterIsMissing = scope().addLocal(Type.LOGICAL);
      var parameterPhi = scope().addLocal(Type.ANY);

      var computeDefaultBb = defaultIsConstant ? null : cfg.addBB();
      var afterBb = cfg.addBB();

      insert(new Statement(parameterIsMissing, builtin("missing", 0, new Read(parameter.variable()))));
      cursor.advance();
      if (defaultIsConstant) {
        cursor.replace(new If(
            new Read(parameterIsMissing),
            new Target(afterBb, new Constant(parameterDefault)),
            new Target(afterBb, new Read(parameter.variable()))));
      } else {
        cursor.replace(new If(
            new Read(parameterIsMissing),
            new Target(computeDefaultBb),
            new Target(afterBb, new Read(parameter.variable()))));

        cursor.moveToStart(computeDefaultBb);
        var defaultParameter = compilePromise(parameterDefault);
        cursor.advance();
        cursor.replace(new Goto(new Target(afterBb, defaultParameter)));
      }

      cursor.moveToStart(afterBb);
      afterBb.appendParameter(parameterPhi);
      insert(new Store(parameterName, new Read(parameterPhi)));
    }
  }
  // endregion compile closure entry

  // region compile bc loop
  /// Actually compile `bc` into `cfg`.
  void compileBc() {
    // Start with a basic block for each section of bytecode separated by a label.
    addBcLabelBBs();

    try {
      var code = bc.code();

      // Translate each bytecode into one or more instructions.
      // Note that some bytecode translate into subgraphs with their own basic blocks.
      for (bcPos = 0; bcPos < code.size(); bcPos++) {
        // Remember: a label in between bytecode indicates another block...
        if (bbByLabel.containsKey(bcPos) && bbByLabel.get(bcPos) != cursor.bb()) {
          var nextBb = bbByLabel.get(bcPos);
          // ...and if there's no explicit jump before the label, an implicit GOTO.
          if (!cursor.isAtLocalEnd()) {
            setJump(goto_(nextBb));
          }
          moveTo(nextBb);
        }

        addBcInstrIrInstrs(code.get(bcPos));
      }
    } catch (Throwable e) {
      // If we get a real error, we still want position information when this gets printed.
      throw switch (e) {
        case CFGCompilerException e1 -> e1;
        case ClosureCompilerUnsupportedException e1 ->
            new CFGCompilerUnsupportedException("can't compile nested", bc, bcPos, cursor, e1);
        default -> new CFGCompilerException("uncaught exception", bc, bcPos, cursor, e);
      };
    }
  }

  // endregion compile bc loop

  // region add BB for each bytecode label
  /// Add a basic block for every label in the bytecode.
  ///
  /// "Label in the bytecode" = relative offset in a jump instruction.
  private void addBcLabelBBs() {
    for (var instr : bc.code()) {
      assert instr != null;
      addBcLabelBBs(instr);
    }
  }

  /// Add a basic block for every label in the instruction, i.e. the relative offset if it's a
  /// jump instruction.
  ///
  /// Multiple instructions may point to the same bytecode position. In that case, after the block
  /// is inserted, subsequent instructions don't insert another block for the same position.
  private void addBcLabelBBs(BcInstr instr) {
    if (!(instr instanceof Record instrAsRecord)) {
      throw new AssertionError("bytecode instructions should all be java records");
    }

    if (instr instanceof Switch(var _, var _, var chrLabelsIdx, var numLabelsIdx)) {
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
      var value = Reflection.getComponentValue(instrAsRecord, component);
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

  // endregion add BB for each bytecode label

  // region compile instructions
  private void addBcInstrIrInstrs(BcInstr instr) {
    switch (instr) {
      case BcInstr.Return() -> {
        var retVal = pop();
        assertStackForReturn();

        // For whatever reason, this is necessary to keep the stack balanced.
        push(new Constant(SEXPs.NULL));

        if (!cfg.isPromise()) {
          insert(new PopEnv());
        }
        insert(_ -> new Return(retVal));
      }
      case BcInstr.Goto(var label) -> {
        var bb = bbAt(label);

        // For whatever reason, this is necessary to keep the stack balanced.
        // This is probably an inlined `Return`.
        if (!cursor.bb().isEntry()
            && cursor.bb().predecessors().isEmpty()
            && bc.code().get(bcPos - 1) instanceof BcInstr.Goto) {
          push(new Constant(SEXPs.NULL));
        }

        insert(_ -> goto_(bb));
      }
      case BrIfNot(var _, var label) -> {
        var bb = bbAt(label);
        var cond = pop();
        var condCasted = insertAndReturn(builtin("as.logical", cond));
        insert(next -> branch(condCasted, next, bb));
      }
      case Pop() -> pop();
      case BcInstr.Dup() -> {
        var value = pop();
        push(value);
        push(value);
      }
      case PrintValue() -> pushInsert(builtin("print", pop()));
      case StartLoopCntxt(var isForLoop, var end) -> {
        // REACH: Complicated loop contexts.
        // Currently, we only handle simple cases like PIR, where `next` and `break` aren't in
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
      case EndLoopCntxt(var isForLoop) -> {
        // We already handle `for` loops in `EndFor` (similar to `StartLoopCntxt`).
        // We don't auto-skip over them though because we don't need to.
        if (!isForLoop) {
          compileEndLoop(LoopType.WHILE_OR_REPEAT);
        }
      }
      case StartFor(var _, var elemName, var step) -> {
        // This takes advantage of invariants expected between `StartFor/StepFor/EndFor` and just
        // compiles the entire for loop logic (everything other than the loop forBody). We then do a
        // weak sanity check that the bytecode upholds these invariants by including `StepFor` in
        // the step branch and `EndFor` in the end branch, although it may break the invariants
        // other ways and simply not be noticed.
        var loopCntxt = bc.code().get(bcPos + 1) instanceof StartLoopCntxt l ? l : null;

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
        var seq = insertAndReturn(intrinsic("toForSeq", pop()));
        var length = insertAndReturn(builtin("length", seq));
        var init = new Constant(SEXPs.integer(0));
        var index = insertAndReturn(new Aea(init));
        push(index);
        setJump(goto_(stepBb));

        // For loop step
        moveTo(stepBb);
        // Increment the index
        var index1 = insertAndReturn(builtin("+", 1, pop(), new Constant(SEXPs.integer(1))));
        push(index1);
        // Compare the index to the length
        var cond = insertAndReturn(builtin("<", 1, length, index1));
        // Jump to `end` if it's greater (remember, GNU-R indexing is one-based)
        setJump(branch(cond, endBb, forBodyBb));

        // For loop body
        moveTo(forBodyBb);
        // Extract element at index
        var elem = insertAndReturn(builtin("[[", seq, index1, new Constant(SEXPs.dots()), new Constant(SEXPs.logical(true))));
        // Store in the element variable
        insert(new Store(getVar(elemName), elem));
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
      case DoLoopNext() -> {
        // The bytecode compilers don't actually generate these instructions, are they deprecated?
        // Regardless, we can still support them.
        if (cfg.isPromise() && !inLocalLoop()) {
          throw failUnsupported("'next' or 'break' in promise (complex loop context)");
        }
        var stepBb = topLoop().next;
        insert(_ -> goto_(stepBb));
      }
      case DoLoopBreak() -> {
        // The bytecode compilers don't actually generate these instructions, are they deprecated?
        // Regardless, we can still support them.
        if (cfg.isPromise() && !inLocalLoop()) {
          throw failUnsupported("'next' or 'break' in promise (complex loop context)");
        }
        var endBb = topLoop().end;
        insert(_ -> goto_(endBb));
      }
      case StepFor(var body) -> {
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
        if (cursor.bb() != stepBb || cursor.instructionIndex() != -1) {
          throw fail("StepFor: expected to be at start of step BB " + stepBb.label());
        }

        // We must explicitly move to `endBb` because there may not be a label corresponding to it,
        // and we don't want to compile anything else in `stepBb`.
        moveTo(endBb);
      }
      case EndFor() -> compileEndLoop(LoopType.FOR);
      case SetLoopVal() -> {
        // This one is weird. It doesn't get inserted by the Java compiler anywhere.
        // However, it has a simple (unhelpful) implementation, so even if unused, we'll support it.
        pop();
        pop();
        push(new Constant(SEXPs.NULL));
      }
      case Invisible() -> insert(intrinsic("invisible", 0));
      case LdConst(var constant) -> push(new Constant(get(constant)));
      case LdNull() -> push(new Constant(SEXPs.NULL));
      case LdTrue() -> push(new Constant(SEXPs.TRUE));
      case LdFalse() -> push(new Constant(SEXPs.FALSE));
      case GetVar(var name) -> {
        pushInsert(new Load(getVar(name)));
        pushInsert(new MaybeForce(pop()));
        tryAddCheckpoint();
      }
      case DdVal(var name) -> {
        var ddIndex = NamedVariable.ddNum(get(name).ddNum());
        pushInsert(new Load(ddIndex));
        pushInsert(new MaybeForce(pop()));
        tryAddCheckpoint();
      }
      case SetVar(var name) -> insert(new Store(getVar(name), top()));
      case GetFun(var name) -> {
        var fun = insertAndReturn(new LoadFun(getVar(name), Env.LOCAL));
        pushCall(fun);
        lastLoadedFunName = getVar(name).name();
        tryAddCheckpoint();
      }
      case GetGlobFun(var name) -> {
        var fun = insertAndReturn(new LoadFun(getVar(name), Env.GLOBAL));
        pushCall(fun);
        lastLoadedFunName = getVar(name).name();
        tryAddCheckpoint();
      }
        // ???: GNU-R calls `SYMVALUE` and `INTERNAL` to implement these, but we don't store that in
        //  our `RegSymSxp` data-structure. So the next three implementations may be incorrect.
      case GetSymFun(var name) -> pushCall(new Builtin(get(name).name()));
      case GetBuiltin(var name) -> pushCall(new Builtin(get(name).name()));
      case GetIntlBuiltin(var name) -> pushCall(new Builtin(get(name).name()));
      case CheckFun() -> {
        var fun = pop();
        insert(checkFun(fun));
        var castedFun = insertAndReturn(new Cast(fun, Type.CLOSURE));
        pushCall(castedFun);
      }
      case MakeProm(var code) -> {
        var prom = compilePromise(this.get(code));
        pushCallArg(prom);
      }
      case DoMissing() -> pushMissingCallArg();
      case SetTag(var tag) -> {
        if (tag != null) {
          setNameOfLastCallArg(
              get(tag)
                  .reifyString()
                  .orElseThrow(() -> fail("SetTag: tag must be a regular symbol or string")));
        }
      }
      case DoDots() -> pushCallArg(insertAndReturn(new Load(NamedVariable.DOTS)));
      case PushArg() -> pushCallArg(pop());
      case PushConstArg(var constant) -> {
        if (get(constant) instanceof SymSXP || get(constant) instanceof LangSXP) {
          throw fail("what? " + get(constant));
        }
        pushCallArg(new Constant(get(constant)));
      }
      case PushNullArg() -> pushCallArg(new Constant(SEXPs.NULL));
      case PushTrueArg() -> pushCallArg(new Constant(SEXPs.TRUE));
      case PushFalseArg() -> pushCallArg(new Constant(SEXPs.FALSE));
      case BcInstr.Call(var _), CallBuiltin(var _) -> compileCall();
      case CallSpecial(var astId) -> {
        var ast = get(astId);
        if (!(ast.fun() instanceof RegSymSXP builtinSymbol)) {
          throw fail("CallSpecial: expected a symbol (builtin id) function");
        }
        var builtinName = builtinSymbol.name();
        // Note that some of these are constant symbols and language objects, they should be treated
        // like `eval`. We also assume builtins never use names.
        // GNU-R just passes `CDR(call)` to the builtin.
        var args =
            ast.args().stream().map(arg -> new Constant(arg.value())).collect(ImmutableList.<Argument>toImmutableList());
        // REACH: Like `compileCall`, we must insert a dynamic call, because we don't have the
        // formal parameters of all specials, and some arguments may be `...`.
        var loadFun = insertAndReturn(new LoadFun(Variable.named(builtinName), Env.BASE));
        pushInsert(new org.prlprg.fir.ir.expression.Call(new DynamicCallee(loadFun), args));
      }
      case MakeClosure(var arg) -> {
        var fb = get(arg);
        var forms = (ListSXP) fb.get(0);
        var body = fb.get(1);
        var ast = fb.size() > 2 ? fb.get(2) : null;
        var cloSxp =
            SEXPs.closure(
                forms, body, SEXPs.EMPTY_ENV, ast == null ? null : Attributes.srcref(ast));

        // This causes snapshots to fail if we change how SEXPs are printed.
        // We just need to update them because the generated names are different.
        // `String#hashCode` is stable, so it shouldn't fail otherwise.
        var generatedName = "inner" + cloSxp.toString().hashCode();

        // Since we generate the name from a hash of the closure's body, we may have a name
        // conflict, but it's only with an identical closure we've already compiled.
        // Therefore, we can reuse it.
        var alreadyGenerated = module().lookupFunction(generatedName);
        var code =
            alreadyGenerated != null
                ? alreadyGenerated
                : ClosureCompiler.compile(r, module(), generatedName, cloSxp);

        pushInsert(new Closure(code));
      }
      case UMinus(var _) -> pushInsert(builtin("-", new Constant(SEXPs.MISSING_ARG), pop()));
      case UPlus(var _) -> pushInsert(builtin("+", new Constant(SEXPs.MISSING_ARG), pop()));
      case Sqrt(var _) -> pushInsert(mkUnop("sqrt"));
      case Add(var _) -> pushInsert(mkBinop("+"));
      case Sub(var _) -> pushInsert(mkBinop("-"));
      case Mul(var _) -> pushInsert(mkBinop("*"));
      case Div(var _) -> pushInsert(mkBinop("/"));
      case Expt(var _) -> pushInsert(mkBinop("^"));
      case Exp(var _) -> pushInsert(mkUnop("exp"));
      case Eq(var _) -> pushInsert(mkBinop("=="));
      case Ne(var _) -> pushInsert(mkBinop("!="));
      case Lt(var _) -> pushInsert(mkBinop("<"));
      case Le(var _) -> pushInsert(mkBinop("<="));
      case Ge(var _) -> pushInsert(mkBinop(">="));
      case Gt(var _) -> pushInsert(mkBinop(">"));
      case And(var _) -> pushInsert(mkBinop("&&"));
      case Or(var _) -> pushInsert(mkBinop("||"));
      case Not(var _) -> pushInsert(mkUnop("!"));
      case DotsErr() -> insert(stop("'...' used in an incorrect context"));
      case StartAssign(var name) -> {
        var lhs = insertAndReturn(new Load(getVar(name)));
        var rhs = top();
        pushComplexAssign(false, get(name), lhs, rhs);
      }
      case EndAssign(var name) -> {
        var lhs = popComplexAssign(false, get(name));
        insert(new Store(getVar(name), lhs));
      }
      case StartSubset(var _, var after) -> compileStartDispatch(Dispatch.Type.SUBSET, after);
      case DfltSubset() -> compileDefaultDispatch(Dispatch.Type.SUBSET);
      case StartSubassign(var _, var after) -> compileStartDispatch(Dispatch.Type.SUBASSIGN, after);
      case DfltSubassign() -> compileDefaultDispatch(Dispatch.Type.SUBASSIGN);
      case StartC(var _, var after) -> compileStartDispatch(Dispatch.Type.C, after);
      case DfltC() -> compileDefaultDispatch(Dispatch.Type.C);
      case StartSubset2(var _, var after) -> compileStartDispatch(Dispatch.Type.SUBSET2, after);
      case DfltSubset2() -> compileDefaultDispatch(Dispatch.Type.SUBSET2);
      case StartSubassign2(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGN2, after);
      case DfltSubassign2() -> compileDefaultDispatch(Dispatch.Type.SUBASSIGN2);
      case Dollar(var _, var member) -> {
        var after = cfg.addBB();

        var target = top();
        compileGeneralDispatchCommon(new Builtin("$"), false, target, null, after);

        var call = popCall();
        if (!call.fun.equals(new Call.Fun.Builtin(new Builtin("$")))) {
          throw fail("Dollar: expected a call to $");
        }

        var target1 = pop();
        pushInsert(builtin("$", target1, new Constant(get(member))));
        setJump(goto_(after));

        moveTo(after);
      }
      case DollarGets(var _, var member) -> {
        var after = cfg.addBB();

        var rhs = pop();
        var target = top();
        compileGeneralDispatchCommon(new Builtin("$<-"), false, target, rhs, after);

        var call = popCall();
        if (!call.fun.equals(new Call.Fun.Builtin(new Builtin("$<-")))) {
          throw fail("Dollar: expected a call to $");
        }

        var target1 = pop();
        pushInsert(builtin("$<-", target1, new Constant(get(member)), rhs));
        setJump(goto_(after));

        moveTo(after);
      }
      case IsNull() -> pushInsert(builtin("==", pop(), new Constant(SEXPs.NULL)));
      case IsLogical() -> pushInsert(builtin("is.logical", pop()));
      case IsInteger() -> pushInsert(builtin("is.integer", pop()));
      case IsDouble() -> pushInsert(builtin("is.double", pop()));
      case IsComplex() -> pushInsert(builtin("is.complex", pop()));
      case IsCharacter() -> pushInsert(builtin("is.character", pop()));
      case IsSymbol() -> pushInsert(builtin("is.symbol", pop()));
      case IsObject() -> pushInsert(builtin("is.object", pop()));
      case IsNumeric() -> pushInsert(builtin("is.numeric", pop()));
      case VecSubset(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBSETN, 2);
      case MatSubset(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBSETN, 3);
      case VecSubassign(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGNN, 3);
      case MatSubassign(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGNN, 4);
      case And1st(var _, var shortCircuit) -> {
        var shortCircuitBb = bbAt(shortCircuit);
        pushInsert(builtin("as.logical", pop()));
        var cond = top();
        insert(next -> branch(cond, next, shortCircuitBb));
      }
      case And2nd(var _) -> {
        pushInsert(builtin("as.logical", pop()));
        pushInsert(mkBinop("&&"));
        insert(this::goto_);
      }
      case Or1st(var _, var shortCircuit) -> {
        var shortCircuitBb = bbAt(shortCircuit);
        pushInsert(builtin("as.logical", pop()));
        var cond = top();
        insert(next -> branch(cond, shortCircuitBb, next));
      }
      case Or2nd(var _) -> {
        pushInsert(builtin("as.logical", pop()));
        pushInsert(mkBinop("||"));
        insert(this::goto_);
      }
      case GetVarMissOk(var name) -> {
        pushInsert(new Load(getVar(name)));
        pushInsert(new MaybeForce(pop()));
      }
      case DdValMissOk(var name) -> {
        var ddIndex = get(name).ddNum();
        pushInsert(new Load(NamedVariable.ddNum(ddIndex)));
        pushInsert(new MaybeForce(pop()));
      }
      case Visible() -> insert(intrinsic("visible", 0));
      case SetVar2(var name) -> insert(new SuperStore(getVar(name), top()));
      case StartAssign2(var name) -> {
        // GNU-R has "cells" and stores the assign on the main stack.
        // But we don't have cells, and since we're compiling, we can store the assignment on its
        // own stack.
        var lhs = insertAndReturn(new SuperLoad(getVar(name)));
        var rhs = top();
        pushComplexAssign(true, get(name), lhs, rhs);
      }
      case EndAssign2(var name) -> {
        var lhs = popComplexAssign(true, get(name));
        insert(new SuperStore(getVar(name), lhs));
      }
      case SetterCall(var _, var _) -> {
        // GNU-R has to wrap these call args in evaluated promises depending on the call type,
        // but presumably this is something we abstract. This is also what `valueExpr` is for,
        // which is why it's unused.
        var rhs = pop();
        var lhs = pop();
        prependCallArg(lhs);
        pushCallArg(rhs);
        compileCall();
      }
      case GetterCall(var _) -> {
        // GNU-R has to wrap this call arg in an evaluated promise depending on the call type,
        // but presumably this is something we abstract.
        prependCallArg(top());
        compileCall();
      }
      case SpecialSwap() -> {
        var value = pop();
        var value2 = pop();
        push(value);
        push(value2);
      }
      case Dup2nd() -> {
        var value = pop();
        var value2 = top();
        push(value);
        push(value2);
      }
      case ReturnJmp() -> {
        var retVal = pop();
        assertStackForReturn();
        // ???: non-local return?
        // ???: Do we need to push `NULL` like in `BcInstr.Return`?
        if (!cfg.isPromise()) {
          insert(new PopEnv());
        }
        insert(_ -> new Return(retVal));
      }
      case Switch(var _, var namesIdx, var chrLabelsIdx, var numLabelsIdx) -> {
        var names = namesIdx == null ? null : get(namesIdx);
        var chrLabels = chrLabelsIdx == null ? null : get(chrLabelsIdx);
        var numLabels = numLabelsIdx == null ? null : get(numLabelsIdx);

        var value = pop();

        var isVector =
            insertAndReturn(builtin("is.vector", value, new Constant(SEXPs.string("any"))));
        var isVectorBb = cfg.addBB();
        var isNotVectorBb = cfg.addBB();
        setJump(branch(isVector, isVectorBb, isNotVectorBb));

        moveTo(isNotVectorBb);
        insert(stop("EXPR must be a length 1 vector"));
        setJump(new Unreachable());

        moveTo(isVectorBb);
        var isFactor =
            insertAndReturn(builtin("inherits", value, new Constant(SEXPs.string("factor")), new Constant(SEXPs.logical(false))));
        var isFactorBb = cfg.addBB();
        var isNotFactorBb = cfg.addBB();
        setJump(branch(isFactor, isFactorBb, isNotFactorBb));

        moveTo(isNotFactorBb);
        insert(
            warning(
                "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead."));
        setJump(goto_(isFactorBb));

        moveTo(isFactorBb);
        var isString = insertAndReturn(builtin("is.character", value));
        var stringBb = cfg.addBB();
        var asIntegerBb = cfg.addBB();
        setJump(branch(isString, stringBb, asIntegerBb));

        moveTo(stringBb);
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
              var cond = insertAndReturn(builtin("==", 6, value, new Constant(SEXPs.string(name))));
              insert(next -> branch(cond, ifMatch, next));
            }
            // `switch` just goes to the last label regardless of whether it matches.
            var lastBb = bbAt(new BcLabel(chrLabels.last()));
            setJump(goto_(lastBb));
          }
        }

        moveTo(asIntegerBb);
        if (numLabels == null) {
          insert(stop("bad numeric 'switch' offsets"));
          setJump(new Unreachable());
        } else if (numLabels.isScalar()) {
          insert(warning("'switch' with no alternatives"));
          setJump(goto_(new BcLabel(numLabels.get(0))));
        } else {
          var asInteger = insertAndReturn(intrinsic("asSwitchIdx", value));
          for (var i = 0; i < numLabels.size() - 1; i++) {
            var ifMatch = bbAt(new BcLabel(numLabels.get(i)));
            var cond = insertAndReturn(builtin("==", 5, asInteger, new Constant(SEXPs.integer(i))));
            insert(next -> branch(cond, ifMatch, next));
          }
          // `switch` just goes to the last label regardless of whether it matches.
          var lastBb = bbAt(new BcLabel(numLabels.last()));
          setJump(goto_(lastBb));
        }

        // We called `setJump`, so we can't encounter any bytecode before a label.
        // In practice, there has always a label after this instruction,
        // but take note in case we get bytecode where this doesn't hold.
      }
      case StartSubsetN(var _, var after) -> compileStartDispatch(Dispatch.Type.SUBSETN, after);
      case StartSubassignN(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGNN, after);
      case VecSubset2(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBSET2N, 2);
      case MatSubset2(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBSET2N, 3);
      case VecSubassign2(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGN2N, 3);
      case MatSubassign2(var _) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGN2N, 4);
      case StartSubset2N(var _, var after) -> compileStartDispatch(Dispatch.Type.SUBSET2N, after);
      case StartSubassign2N(var _, var after) ->
          compileStartDispatch(Dispatch.Type.SUBASSIGN2N, after);
      case SubsetN(var _, var n) -> compileDefaultDispatchN(Dispatch.Type.SUBSETN, n + 1);
      case Subset2N(var _, var n) -> compileDefaultDispatchN(Dispatch.Type.SUBSET2N, n + 1);
      case SubassignN(var _, var n) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGNN, n + 2);
      case Subassign2N(var _, var n) -> compileDefaultDispatchN(Dispatch.Type.SUBASSIGN2N, n + 2);
      case Log(var _) -> pushInsert(builtin("log", pop(), new Constant(SEXPs.real(Math.E))));
      case LogBase(var _) -> pushInsert(mkBinop("log"));
      case Math1(var _, var funId) -> pushInsert(mkUnop(MATH1_FUNS.get(funId)));
      case DotCall(var _, var numArgs) -> {
        if (stack.size() < numArgs + 1) {
          throw fail("stack underflow");
        }
        var funAndArgs = stack.subList(stack.size() - numArgs - 1, stack.size());
        var fun = funAndArgs.getFirst();
        var args = funAndArgs.subList(1, funAndArgs.size()).stream()
            .map(NamedArgument::new)
            .collect(ImmutableList.toImmutableList());
        funAndArgs.clear();

        // Insert dots list for arguments
        var argsDots = insertAndReturn(new MkVector(new Kind.Dots(), args));

        pushInsert(builtin(".Call", fun, argsDots, new Constant(SEXPs.MISSING_ARG)));
      }
      case Colon(var _) -> pushInsert(mkBinop(":"));
      case SeqAlong(var _) -> pushInsert(builtin("seq_along", pop()));
      case SeqLen(var _) -> pushInsert(builtin("seq_len", pop()));
      case BaseGuard(var exprIdx, var after) -> {
        // PIR apparently just ignores the guards (`rir2pir.cpp:341`), but we can handle here.
        var expr = get(exprIdx);
        var fun = Variable.named(((RegSymSXP) expr.fun()).name());
        var sym = insertAndReturn(new LoadFun(fun, Env.LOCAL));
        var base = insertAndReturn(new LoadFun(fun, Env.BASE));
        var guard = insertAndReturn(builtin("==", 4, sym, base));

        var safeBb = cfg.addBB();
        var fallbackBb = cfg.addBB();
        var afterBb = bbAt(after);
        setJump(branch(guard, safeBb, fallbackBb));

        moveTo(fallbackBb);
        // Compile a call.
        // Also, pass `Constant`s containing symbols and language objects to arguments,
        // expecting them to be `eval`ed, like in `CallSpecial`.
        var argNames =
            expr.args().names().stream()
                .map(n -> n.isEmpty() ? "" : n)
                .collect(ImmutableList.toImmutableList());
        var args =
            expr.args().values().stream()
                .map(v -> (Argument) new Constant(v))
                .collect(ImmutableList.toImmutableList());
        pushInsert(new org.prlprg.fir.ir.expression.Call(new DynamicCallee(base, argNames), args));
        setJump(goto_(afterBb));

        moveTo(safeBb);
      }
      case IncLnk(), DecLnk(), DeclnkN(var _), IncLnkStk(), DecLnkStk() -> {}
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

  private Argument compilePromise(SEXP codeSexp) {
    Bc bc;
    if (codeSexp instanceof BCodeSXP bcSxp) {
      bc = bcSxp.bc();
    } else {
      if (r == null) {
        throw failUnsupported("No RSession, and promise has non-bytecode body: " + codeSexp);
      }

      var astThunk = SEXPs.closure(SEXPs.list(), codeSexp, r.globalEnv());
      bc =
          new BCCompiler(astThunk, r)
              .compile()
              .orElseThrow(() -> failUnsupported("promise has uncompilable AST body: " + codeSexp));
    }

    var cfg = new CFG(scope());
    compile(r, cfg, bc);

    return insertAndReturn(new Promise(Type.ANY_VALUE, Effects.ANY, cfg));
  }

  /// End the previously-compiled for loop instruction (the latest [#pushWhileOrRepeatLoop(BB,
  /// BB)] or [#pushForLoop(BB,BB,BB)]): pop its data, assert that the loop is of the correct
  /// type, and that the cursor is right after its end.
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
        || cursor.instructionIndex() != -1) {
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
      Builtin fun, boolean isNForm, Argument target, @Nullable Argument rhs, BB after) {
    // ???: Maybe avoid compiling optimized dispatch code, since we can optimize it ourselves.
    var isObject = insertAndReturn(builtin("is.object", target));
    var objectBb = cfg.addBB();
    var nonObjectBb = cfg.addBB();
    setJump(branch(isObject, objectBb, nonObjectBb));

    moveTo(objectBb);
    var target1 = pop();

    var funNameSexp = new Constant(SEXPs.string(fun.name()));
    var dispatchExpr =
        rhs == null
            ? intrinsic("tryDispatchBuiltin", 1, funNameSexp, target1)
            : intrinsic("tryDispatchBuiltin", 0, funNameSexp, target1, rhs);
    var dispatchResult = insertAndReturn(dispatchExpr);
    var dispatched = insertAndReturn(intrinsic("getTryDispatchBuiltinDispatched", dispatchResult));

    push(dispatchResult);
    insert(next -> branch(dispatched, next, nonObjectBb));
    var dispatchValue = insertAndReturn(intrinsic("getTryDispatchBuiltinValue", pop()));
    push(dispatchValue);
    setJump(goto_(after));

    moveTo(nonObjectBb);

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

    var argValues = call.args.stream().map(Call.Arg::node).collect(ImmutableList.toImmutableList());
    finishCompilingDefaultDispatch(type, dispatch, argValues);
  }

  private void compileDefaultDispatchN(Dispatch.Type type, int numArgs) {
    assert type.isNForm : "use compileDefaultDispatch for non-`...N` bytecodes";

    var dispatch = popDispatch(type);

    // Unlike `compileDefaultDispatch`, there's no `Call`, instead we take the args from the stack.
    // Like `compileDefaultDispatch`, there's either a specialized instruction or a fallback call,
    // although in this the number of arguments is known.
    var argsView = stack.subList(stack.size() - numArgs, stack.size());
    var args = argsView.stream().collect(ImmutableList.toImmutableList());
    argsView.clear();

    finishCompilingDefaultDispatch(type, dispatch, args);
  }

  private void finishCompilingDefaultDispatch(Dispatch.Type type, Dispatch dispatch,
      ImmutableList<Argument> argValues) {
    // See `compileCall` for why we can't compile builtins directly.
    var loadFun = insertAndReturn(new LoadFun(Variable.named(type.builtin.name()), Env.BASE));
    pushInsert(new org.prlprg.fir.ir.expression.Call(new DynamicCallee(loadFun), argValues));

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
    var args = call.args.stream().map(arg -> arg.node).collect(ImmutableList.toImmutableList());
    var callInstr =
        switch (call.fun) {
          case Call.Fun.Dynamic(var fun) ->
              new org.prlprg.fir.ir.expression.Call(new DynamicCallee(fun, names), args);
          case Call.Fun.Builtin(var builtin) -> {
              // REACH: We can't compile builtins directly, only because we don't know how to
              // match arguments.
              // The created `LdFun` will be optimized into a builtin call if we know the
              // builtin's formals and none of the arguments are `...`. Eventually we can add
              // the formals of all builtins programatically and do this in the compiler, or at
              // least pre-optimize here when the above conditions are met if it's too expensive.
              var loadFun = insertAndReturn(new LoadFun(Variable.named(builtin.name()), Env.BASE));
              yield new org.prlprg.fir.ir.expression.Call(new DynamicCallee(loadFun), args);
          }
        };
    pushInsert(callInstr);

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
    if (Objects.equals(lastLoadedFunName, "stop")
        && args.size() == 1
        && args.getFirst().equals(new Constant(SEXPs.string("empty alternative in numeric switch")))
        && !(bc.code().get(bcPos + 1) instanceof BcInstr.Return)) {
      pop();
    } else {
      tryAddCheckpoint();
    }
  }

  // endregion compile instructions

  // region checkpoints
  void tryAddCheckpoint() {
    // Don't add checkpoints/deopts in promises for now
    if (cfg.isPromise()) {
      return;
    }

    var deopt = cfg.addBB("D" + numDeopts++);
    deopt.setJump(new Deopt(bcPos, ImmutableList.copyOf(stack)));

    // Don't add phis because they're never necessary.
    // Don't use `insert` because it adds phis.
    var success = cfg.addBB();
    cursor.bb().setJump(new Checkpoint(new Target(success), new Target(deopt)));
    cursor.moveToStart(success);
  }

  // endregion checkpoints

  // region get BB for bytecode label or position
  /// Returns the basic block corresponding to the given label
  ///
  /// Specifically, this returns the block inserted by [#ensureBbAt(BcLabel)], which was created
  /// before we started "actually" compiling the bytecode instructions, and this is called while
  /// actually compiling the instructions.
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

  // endregion get BB for bytecode label or position

  // region `moveTo` and phis
  /// Move the cursor to the basic block and replace all stack arguments with its phi parameters.
  private void moveTo(BB bb) {
    if (!bbsWithPhis.contains(bb)) {
      throw fail("moved to BB before adding phis: " + bb.label());
    }

    // Move cursor
    cursor.moveToStart(bb);

    // Replace stack with phis
    stack.clear();
    for (var phiParameter : bb.phiParameters()) {
      stack.add(new Read(phiParameter));
    }
  }

  /// A jump target to the given [BB] with all variables on the stack as arguments.
  private Target target(BB bb) {
    ensurePhiInputsForStack(bb);
    return new Target(bb, ImmutableList.copyOf(stack));
  }

  /// Ensure the given block has phis for each stack argument in the current block.
  ///
  /// If the block hasn't been given to [#ensurePhiInputsForStack(BB)] before, phis will be added
  /// (one for each stack argument), otherwise they will be checked (if there's a different
  /// number, a "broken invariant" exception is raised).
  private void ensurePhiInputsForStack(BB bb) {
    // Ensure the BB has phis for each stack value.
    if (bbsWithPhis.add(bb)) {
      for (var arg : stack) {
        var type = inferType.of(arg);
        assert type != null : "argument on stack is an undeclared register";

        var phi = scope().addLocal(type);
        bb.appendParameter(phi);
      }
    } else {
      // Check number of phis equals number of arguments.
      var numParameters = bb.phiParameters().size();
      var numArguments = stack.size();
      if (numParameters != numArguments) {
        throw fail(
            "BB stack mismatch: "
                + bb.label()
                + " has "
                + numParameters
                + " phis but we have "
                + numArguments
                + " arguments");
      }

      // Union phi types
      for (var i = 0; i < numParameters; i++) {
        var phi = bb.phiParameters().get(i);
        var arg = stack.get(i);

        var oldType = scope().typeOf(phi);
        var argType = inferType.of(arg);
        assert oldType != null : "phi is an undeclared register";
        assert argType != null : "argument on stack is an undeclared register";

        scope()
            .setLocalType(
                phi,
                oldType.union(
                    argType,
                    () -> {
                      throw new AssertionError("ownership mismatch between phi arguments");
                    }));
      }
    }
  }

  // endregion `moveTo` and phis

  // region insertions
  /// Insert a statement that executes the expression and discards the result.
  private void insert(Expression expression) {
    insert(new Statement(expression));
  }

  /// Insert a statement that executes the expression and assigns its result to a fresh
  /// register, and return that register.
  private Argument insertAndReturn(Expression expression) {
    var exprType = inferType.of(expression);
    var tempVar = cfg.scope().addLocal(exprType == null ? Type.ANY : exprType);
    insert(new Statement(tempVar, expression));
    return new Read(tempVar);
  }

  /// Insert a statement.
  private void insert(Statement statement) {
    cursor.insert(statement);
  }

  /// Insert a jump, then move to the next block (given to `computeJump`).
  private void insert(JumpInsertion computeJump) {
    var newBb = cfg.addBB();

    var jump = computeJump.compute(newBb);
    setJump(jump);

    if (cursor.bb().successors().contains(newBb)) {
      moveTo(newBb);
    } else if (bbByLabel.containsKey(bcPos + 1)) {
      // Don't actually create the block, since we'll just move to the next one.
      // If we DO create the block, we get a stack imbalance, because we're coming from a
      // different position.
      cfg.removeBB(newBb);
    } else {
      // IN THEORY, we could get a stack imbalance, because we're coming from a different position.
      // IN PRACTICE, we haven't gotten one so far, with the two "for whatever reason" stack
      // modifications in `addBcInstrIrInstrs`.
      // An ideal solution would be hard because we don't know what the correct stack size is.
      ensurePhiInputsForStack(newBb);
      // This block will be removed by cleanup, but we need to iterate the bytecode instructions
      // because they may alter the stack, and in practice they alter it correctly.
      moveTo(newBb);
    }
  }

  /// Insert a jump.
  ///
  /// Afterward, you can't call any overloads of `insert` or [#setJump(Jump)] until [#moveTo(BB)].
  private void setJump(Jump jump) {
    cursor.advance();
    cursor.replace(jump);
  }

  // endregion insertions

  // region stacks

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

  /// Insert a statement that executes the expression and assigns its result to a fresh
  /// register, and push the register onto the stack.
  private void pushInsert(Expression expression) {
    push(insertAndReturn(expression));
  }

  /// Push a value onto the "virtual stack" so that the next call to [#pop(Class)] or
  /// [#top(Class)] will return it.
  ///
  /// The bytecode is stack-based and IR is SSA-form. To convert properly, when the compiler
  /// encounters `BcInstr.Ld...` and other instructions that push real values onto the
  /// interpreter stack, it pushes the node that stores their abstract value ([Argument]) onto
  /// the "virtual stack"; and when the compiler encounters [Pop] and other instructions
  /// that read/pop real values from the interpreter stack, it reads/pops the corresponding
  /// abstract values from the "virtual stack" and passes them as arguments to the IR
  /// instructions those bytecode instructions that pop values compile into.
  ///
  /// Also, stack nodes are replaced by phi nodes whenever the compiler moves to a new basic
  /// block: see [#moveTo(BB)] for details.
  private void push(Argument value) {
    stack.add(value);
  }

  /// Pop a variable from the "virtual stack" that was pushed by the last call to
  /// [#push(Argument)].
  ///
  /// The bytecode is stack-based and IR is SSA-form, see [#push(Argument)] for more
  /// explanation.
  private Argument pop() {
    require(!stack.isEmpty(), () -> "node stack underflow");
    return stack.removeLast();
  }

  /// Get the node on the top of the "virtual stack" that was pushed by the last call to
  /// [#push(Argument)], without popping.
  ///
  /// The bytecode is stack-based and IR is SSA-form, see [#push(Argument)] for more
  /// explanation.
  private Argument top() {
    require(!stack.isEmpty(), () -> "no node on stack");
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
  /// GNU-R also stores a "cell" for the lhs value, which has a flag to determine if its in an
  /// assignment, for ref-counting purposes. TODO how we handle ref-counting because it will
  /// probably be much different, but we will probably abstract it so that we don't have to do
  /// anything here even in the future.
  private void pushComplexAssign(boolean isSuper, RegSymSXP name, Argument lhs, Argument rhs) {
    complexAssignStack.add(new ComplexAssign(isSuper, name, rhs));
    push(lhs);
    push(rhs);
  }

  /// Get the current complex assign (the one that was pushed by the last call to
  /// [#pushComplexAssign(boolean,RegSymSXP, Argument, Argument)]), assert that the given
  /// `isSuper` and `name` match its own, and remove it from the stack.
  private Argument popComplexAssign(boolean isSuper, RegSymSXP name) {
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
  private void pushCall(Argument fun) {
    callStack.add(new Call(new Call.Fun.Dynamic(fun)));
    lastLoadedFunName = null;
  }

  /// Begin a new call of the given function (statically known builtin).
  private void pushCall(Builtin fun) {
    callStack.add(new Call(new Call.Fun.Builtin(fun)));
    lastLoadedFunName = null;
  }

  /// Get the current call (the one that was pushed by the last call to `pushCall`).
  private Call topCall() {
    require(!callStack.isEmpty(), () -> "no call on stack");
    return callStack.getLast();
  }

  /// Pop the current call (the one that was pushed by the last call to `pushCall`).
  private Call popCall() {
    require(!callStack.isEmpty(), () -> "call stack underflow");
    return callStack.removeLast();
  }

  /// Prepend a value to the current call stack ([#topCall()]).
  ///
  /// This is required for [GetterCall] and [SetterCall], since the `lhs` of the
  /// complex assignment is prepended in the GNU-R. See also [#pushCallArg(Argument)], which
  /// appends the argument.
  private void prependCallArg(Argument value) {
    topCall().args.addFirst(new Call.Arg(value));
  }

  /// Push a value onto the current call stack ([#topCall()]).
  ///
  /// GNU-R maintains a the call function and arguments list on the stack, but we store them
  /// separately. Either way generates the same IR, but this way makes errors clearer, e.g.
  /// forgetting to push a call raises a specific error earlier instead of a stack mismatch
  /// later.
  private void pushCallArg(Argument value) {
    topCall().args.add(new Call.Arg(value));
  }

  /// Push the missing value onto the "call arguments list".
  ///
  /// @see #pushCallArg(Argument)
  private void pushMissingCallArg() {
    topCall().args.add(Call.Arg.missing());
  }

  /// Set the name of the last argument on the "call arguments list".
  ///
  /// @see #pushCallArg(Argument)
  private void setNameOfLastCallArg(String name) {
    var args = topCall().args;
    var last = args.removeLast();
    args.add(new Call.Arg(last.node(), name));
  }

  /// Add data for a "start dispatch" bytecode instruction that will be referenced by later
  /// "default dispatch" instruction (via [#popDispatch(Dispatch.Type)].
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

  // endregion stacks

  // region expression constructors
  private Expression builtin(String name, Argument... args) {
    return builtin(name, -1, args);
  }

  private Expression builtin(String name, int versionIndex, Argument... args) {
    var function = BUILTINS.localFunction(name);
    assert function != null : "missing builtin " + name;
    var callee =
        versionIndex == -1
            ? new DispatchCallee(function, null)
            : new StaticCallee(function, function.version(versionIndex));
    return new org.prlprg.fir.ir.expression.Call(callee, ImmutableList.copyOf(args));
  }

  private Expression intrinsic(String name, Argument... args) {
    return intrinsic(name, -1, args);
  }

  private Expression intrinsic(String name, int versionIndex, Argument... args) {
    var function = INTRINSICS.localFunction(name);
    assert function != null : "missing intrinsic " + name;
    var callee =
        versionIndex == -1
            ? new DispatchCallee(function, null)
            : new StaticCallee(function, function.version(versionIndex));
    return new org.prlprg.fir.ir.expression.Call(callee, ImmutableList.copyOf(args));
  }

  /// An expression that raises an error with the given message.
  private Expression stop(String message) {
    return builtin("stop", new Constant(SEXPs.dots(SEXPs.string(message))), new Constant(SEXPs.logical(true)), new Constant(SEXPs.NULL));
  }

  /// An expression that raises a warning with the given message.
  private Expression warning(String message) {
    return builtin("warning", new Constant(SEXPs.dots(SEXPs.string(message))), new Constant(SEXPs.logical(true)), new Constant(SEXPs.logical(false)), new Constant(SEXPs.logical(false)), new Constant(SEXPs.NULL));
  }

  /// Stub for function guard (TODO what does [#BcInstr.CheckFun] do again?), which can fallback to
  /// an intrinsic but usually gets caught and turned into [DynamicCallee].
  private Expression checkFun(Argument fun) {
    return intrinsic("checkFun", 0, fun);
  }

  // endregion expression constructors

  // region jump constructors
  private Jump goto_(BB bb) {
    return new Goto(target(bb));
  }

  private Jump goto_(BcLabel label) {
    return goto_(bbAt(label));
  }

  private Jump branch(Argument condition, BB trueBb, BB falseBb) {
    return new If(condition, target(trueBb), target(falseBb));
  }

  // endregion jump constructors

  // region misc getters
  private Abstraction scope() {
    return cfg.scope();
  }

  private Module module() {
    return cfg.module();
  }

  /// Get the [SEXP] in the constant pool corresponding to the given index.
  private <S extends SEXP> S get(Idx<S> idx) {
    return bc.consts().get(idx);
  }

  /// Get the [SEXP] in the constant pool corresponding to the given index,
  /// then cast it into a variable.
  private NamedVariable getVar(Idx<RegSymSXP> idx) {
    return Variable.named(get(idx).name());
  }

  // endregion misc getters

  // region exceptions
  private void require(boolean condition, Supplier<String> message) {
    if (!condition) {
      throw fail(message.get());
    }
  }

  private CFGCompilerUnsupportedException failUnsupported(String message) {
    return new CFGCompilerUnsupportedException(message, bc, bcPos, cursor, null);
  }

  private CFGCompilerException fail(String message) {
    return new CFGCompilerException(message, bc, bcPos, cursor);
  }

  // endregion exceptions

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
  private record ComplexAssign(boolean isSuper, RegSymSXP name, Argument originalRhs) {}

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
      record Dynamic(Argument function) implements Fun {}

      record Builtin(CFGCompiler.Builtin builtin) implements Fun {}
    }

    /// Stores information about a call argument: the [Argument] node and optional name.
    private record Arg(Argument node, @Nullable String name) {
      static Arg missing() {
        return new Arg(new Constant(SEXPs.MISSING_ARG), null);
      }

      Arg(Argument node) {
        this(node, null);
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
}
