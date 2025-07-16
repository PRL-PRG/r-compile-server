package org.prlprg.bc2c;

import java.util.*;
import javax.annotation.Nullable;
import org.prlprg.bc.*;
import org.prlprg.sexp.*;

record Constant(int id, SEXP value) {}

record BCell(int id, String name, int uses) {
  public BCell uses(int newUses) {
    return new BCell(id, name, newUses);
  }
}

class ByteCodeStack {
  private int max = 0;
  private int top = 0;

  public String push() {
    top++;
    max = Math.max(max, top);
    return get(top);
  }

  public String pop() {
    if (top < 0) {
      throw new IllegalArgumentException("Stack underflow: %d".formatted(top));
    }
    var s = get(top);
    --top;
    return "*" + s;
  }

  public String get(int i) {
    return "R" + i;
  }

  public int max() {
    return max;
  }

  public boolean isEmpty() {
    return top == 0;
  }

  public int top() {
    return top;
  }

  public void reset(int newTop) {
    if (newTop < -1) {
      throw new IllegalArgumentException("Invalid top: %d".formatted(newTop));
    }
    this.top = newTop;
  }
}

record CompiledClosure(String name, VectorSXP<SEXP> constantPool) {}

class CModule {
  private final List<CFunction> funs = new ArrayList<>();
  private int funId = 0;

  CFunction createFun(String returnType, String name, String args) {
    var fun = new CFunction(returnType, name, args);
    funs.add(fun);
    return fun;
  }

  CompiledClosure compileClosure(Bc bc, String baseName) {
    var name = baseName + "_" + funId++;
    var compiler = new ClosureCompiler(this, name, bc);
    var constants = compiler.compile();

    return new CompiledClosure(name, constants);
  }

  CompiledClosure compilePromise(Bc bc, String baseName) {
    var name = baseName + "_P_" + funId++;
    var compiler = new ClosureCompiler(this, name, bc);
    //        compiler.setUseCells(false);
    var constants = compiler.compile();

    return new CompiledClosure(name, constants);
  }

  public List<CFunction> funs() {
    return funs;
  }
}

public class BC2CCompiler {
  private final CModule module = new CModule();
  private final Bc bc;
  private final String name; // The name is chosen by the client

  public BC2CCompiler(Bc bc, String name) {
    this.bc = bc;
    // We can have other closures to compile in the same Bc
    // We will need to generate a unique name for each
    // This is the base name
    this.name = name;
  }

  public CompiledModule finish() {
    var compiledClosure = module.compileClosure(bc, name);

    var file = new CFile();
    file.addInclude("runtime.h");
    module.funs().forEach(fun -> file.addFun(fun, module.funs().size() > 1));

    return new CompiledModule(file, compiledClosure.name(), compiledClosure.constantPool());
  }
}

class ClosureCompiler {
  /** The name of the variable representing the current environment */
  private static final String VAR_RHO = "RHO";

  /** The name of the variable representing the C constant pool */
  private static final String VAR_CCP = "CCP";

  private static final String VAR_STACK_SAVE = "STACK_SAVE";

  private static final String BCELL_PREFIX = "C";

  private final Bc bc;
  private final ByteCodeStack stack = new ByteCodeStack();
  private final Map<Integer, Constant> constants = new LinkedHashMap<>();
  private final Set<Integer> labels = new HashSet<>();
  private final Map<Integer, BCell> cells = new HashMap<>();
  private final Map<Integer, Integer> branchStackState = new HashMap<>();
  private int extraConstPoolIdx;
  private final String name;
  private boolean debug = true;
  private boolean useCells = true;
  private boolean compilePromises = true;

  protected CModule module;
  protected CFunction fun;
  protected CCode prologue;
  protected CCode body;

  public ClosureCompiler(CModule module, String name, Bc bc) {
    this.bc = bc;
    this.name = name;
    this.module = module;
    this.fun = module.createFun("SEXP", name, "SEXP %s, SEXP %s".formatted(VAR_RHO, VAR_CCP));
    this.prologue = fun.add();
    this.body = fun.add();
    this.extraConstPoolIdx = bc.consts().size() + 1;
  }

  public void setDebug(boolean debug) {
    this.debug = debug;
  }

  public VectorSXP<SEXP> compile() {
    beforeCompile();

    var code = bc.code();
    for (int i = 0; i < code.size(); i++) {
      compile(code.get(i), i);
    }

    if (!stack.isEmpty()) {
      throw new IllegalStateException("Stack not empty: %d".formatted(stack.top()));
    }

    afterCompile();

    return SEXPs.vec(constants());
  }

  private int stackSpace() {
    return stack.max();
  }

  private void beforeCompile() {
    analyseCode();
  }

  private void afterCompile() {
    prologue.line("int %s = %d;".formatted(VAR_STACK_SAVE, stackSpace()));
    if (!cells.isEmpty() || !stack.isEmpty()) {
      prologue.line("CHECK_OVERFLOW(%d);".formatted(stackSpace()));
    }

    compileCells();
    compileRegisters();
  }

  private void analyseCode() {
    var code = bc.code();
    var hasLoop = false;

    for (int i = 0; i < code.size(); i++) {
      var instr = code.get(i);

      switch (instr) {
        case BcInstr.Goto(var label) -> {
          hasLoop |= label.target() < i;
        }
        case BcInstr.StartFor(var _, var symbol, var label) -> {
          hasLoop = true;
        }
        default -> {}
      }

      instr.label().ifPresent(l -> labels.add(l.target()));
      instr
          .bindingCell()
          .ifPresent(
              s -> {
                cells.merge(
                    s.idx(), new BCell(s.idx(), symbolName(s), 1), (o, _) -> o.uses(o.uses() + 1));
              });
    }

    if (hasLoop) {
      cells.replaceAll((_, o) -> o.uses(o.uses() + 1));
    }
  }

  public List<SEXP> constants() {
    return List.copyOf(constants.values().stream().map(Constant::value).toList());
  }

  private void compile(BcInstr instr, int pc) {
    checkSupported(instr);

    if (labels.contains(pc)) {
      body.line("%s:".formatted(label(pc)));
      Integer state = branchStackState.remove(pc);
      if (state != null) {
        stack.reset(state);
      }
    }

    var builder = new InstrCallBuilder(instr);

    var code =
        switch (instr) {
          case BcInstr.Return() -> builder.addArgs(VAR_STACK_SAVE).compileStmt();
          case BcInstr.Goto(var dest) -> "goto %s;".formatted(label(dest));
          case BcInstr.LdConst(var idx) -> {
            var c = getConstant(idx);
            yield builder
                .fun(
                    switch (c.value()) {
                      case IntSXP v when v.size() == 1 -> "Rsh_LdConstInt";
                      case RealSXP v when v.size() == 1 -> "Rsh_LdConstDbl";
                      case LglSXP v when v.size() == 1 -> "Rsh_LdConstLgl";
                      case SEXP _ -> "Rsh_LdConst";
                    })
                .compileStmt();
          }
          case BcInstr.MakeClosure(var idx) -> compileMakeClosure(builder, idx);
          case BcInstr.MakeProm(var idx) -> {
            var prom = bc.consts().get(idx);
            if (prom instanceof BCodeSXP c && compilePromises) {
              yield compileMakePromise(builder, c);
            } else {
              yield builder.compileStmt();
            }
          }
          case BcInstr.SubsetN(var call, var rank) -> compileSubsetN(builder, call, rank);
          case BcInstr.Subset2N(var call, var rank) -> compileSubsetN(builder, call, rank);
          case BcInstr.SubassignN(var call, var rank) -> compileSubassignN(builder, call, rank);
          case BcInstr.Subassign2N(var call, var rank) -> compileSubassignN(builder, call, rank);
          case BcInstr.StartFor(var _, var symbol, var label) -> {
            var cell = cells.get(symbol.idx());
            var c = builder.cell(cell).compileStmt();
            yield c + "\ngoto " + label(label) + ";";
          }
          case BcInstr.StepFor(var label) -> {
            if (!(this.bc.instr(label.target() - 1)
                instanceof BcInstr.StartFor(_, var symbol, _))) {
              throw new IllegalStateException("Expected StartFor instruction");
            }
            var cell = cells.get(symbol.idx());
            assert cell != null;
            yield "if (%s) {\n\tgoto %s;\n}".formatted(builder.cell(cell).compile(), label(label));
          }
          case BcInstr.Math1(var _, var op) -> builder.addArgs(String.valueOf(op)).compileStmt();
          default -> {
            if (instr.label().orElse(null) instanceof BcLabel l) {
              yield "if (%s) {\n\tgoto %s;\n}".formatted(builder.compile(), label(l));
            } else {
              yield builder.compileStmt();
            }
          }
        };

    body.line(code);
    updateBranchStackState(instr);
  }

  private void updateBranchStackState(BcInstr instr) {
    if (instr.op() == BcOp.GOTO) {
      // GOTO do not change the stack state
      return;
    }
    var diff =
        switch (instr.op()) {
          case BcOp.STARTSUBSET, BcOp.STARTSUBSET2 -> -3;
          case BcOp.STARTSUBASSIGN, BcOp.STARTSUBASSIGN2 -> -4;
          case BcOp.STARTSUBASSIGN_N, BcOp.STARTSUBASSIGN2_N -> -1;
          default -> 0;
        };
    instr.label().ifPresent(label -> branchStackState.put(label.target(), stack.top() + diff));
  }

  private String compileMakePromise(InstrCallBuilder builder, BCodeSXP bc) {
    var compiledClosure = module.compilePromise(bc.bc(), name);
    var cpConst = createExtraConstant(compiledClosure.constantPool());
    return builder
        .fun("Rsh_MakeProm2")
        .args("&" + compiledClosure.name(), constantSXP(cpConst))
        .compileStmt();
  }

  private String compileSubsetN(
      InstrCallBuilder builder, ConstPool.Idx<? extends SEXP> call, int rank) {
    var line =
        builder
            .push(0)
            .pop(0)
            .args(stack.get(stack.top()), String.valueOf(rank), constantSXP(call))
            .compileStmt();
    // manually apply the instruction stack effect
    for (int i = 0; i < rank + 1; i++) stack.pop();
    stack.push();
    return line;
  }

  private String compileSubassignN(
      InstrCallBuilder builder, ConstPool.Idx<? extends SEXP> call, int rank) {
    var line =
        builder
            .push(0)
            .pop(0)
            .args(stack.get(stack.top()), String.valueOf(rank), constantSXP(call))
            .compileStmt();
    // manually apply the instruction stack effect
    for (int i = 0; i < rank + 2; i++) stack.pop();
    stack.push();
    return line;
  }

  private String compileMakeClosure(InstrCallBuilder builder, ConstPool.Idx<VecSXP> idx) {
    var cls = bc.consts().get(idx);

    if (cls.get(1) instanceof BCodeSXP closureBody) {
      var compiledClosure = module.compileClosure(closureBody.bc(), name);
      var ccp = createExtraConstant(compiledClosure.constantPool());
      return builder.addArgs("&" + compiledClosure.name(), constantSXP(ccp)).compileStmt();
    } else {
      throw new UnsupportedOperationException("Unsupported body: " + body);
    }
  }

  private void compileRegisters() {
    prologue.comment("REGISTERS");
    for (int i = 1; i <= stack.max(); i++) {
      prologue.line("DEFINE_VAL(%s);".formatted(stack.get(i)));
    }
  }

  private void compileCells() {
    if (cells.isEmpty() || !useCells) {
      return;
    }

    prologue.comment("CELLS");
    for (var cell : cells.values()) {
      if (cell.uses() <= 1) {
        continue; // skip unused cells
      }
      var line = "DEFINE_BCELL2(%s%d);".formatted(BCELL_PREFIX, cell.id());
      if (debug) {
        line += " // symbol: '%s' (used: %d)".formatted(cell.name(), cell.uses());
      }
      prologue.line(line);
    }
  }

  public void setUseCells(boolean useCells) {
    this.useCells = useCells;
  }

  // API
  class InstrCallBuilder {
    private String fun = "";
    private int push = 0;
    private int pop = 0;
    private boolean needsRho = false;
    private boolean needsCell = false;
    private BCell cell = null;
    private List<String> args = new ArrayList<>();
    private final List<String> debugMessages = new ArrayList<>();

    public InstrCallBuilder(BcInstr instr) {
      fun = "Rsh_" + instr.getClass().getSimpleName();
      push = instr.push();
      pop = instr.pop();
      needsRho = instr.needsRho();

      for (var x : instr.args()) {
        args.add(constantSXP(x));
      }

      instr
          .bindingCell()
          .ifPresent(
              s -> {
                needsCell = true;
                if (useCells) {
                  cell = cells.get(s.idx());
                }
              });
    }

    public InstrCallBuilder fun(String fun) {
      this.fun = fun;
      return this;
    }

    public InstrCallBuilder push(int push) {
      this.push = push;
      return this;
    }

    public InstrCallBuilder pop(int pop) {
      this.pop = pop;
      return this;
    }

    public InstrCallBuilder cell(BCell cell) {
      this.cell = cell;
      this.needsCell = true;
      return this;
    }

    public InstrCallBuilder args(String... args) {
      this.args = new ArrayList<>(args.length);
      this.args.addAll(Arrays.asList(args));
      return this;
    }

    public InstrCallBuilder addArgs(String... args) {
      this.args.addAll(Arrays.asList(args));
      return this;
    }

    public String compile() {
      var n = Math.max(pop, push);
      var xs = new String[n + args.size() + (needsRho ? 1 : 0) + (cell != null ? 1 : 0)];

      for (int i = pop; i > 0; i--) {
        xs[i - 1] = stack.pop();
      }

      for (int i = 0; i < push; i++) {
        xs[i] = stack.push();
      }

      for (String arg : args) {
        xs[n++] = arg;
      }

      if (needsCell) {
        if (cell != null && cell.uses() > 1) {
          xs[n++] = "&C" + cell.id();
          debugMessages.add("symbol: '%s'".formatted(cell.name()));
        } else {
          xs[n++] = "NULL";
        }
      }

      if (needsRho) {
        xs[n++] = VAR_RHO;
      }

      var line = fun + "(" + String.join(", ", xs) + ")";

      if (debug) {
        debugMessages.add("stack: " + stack.top());
        line += " /* " + String.join(", ", debugMessages) + " */";
      }

      return line;
    }

    public String compileStmt() {
      return this.compile() + ";";
    }

    public InstrCallBuilder debug(String message) {
      this.debugMessages.add(message);
      return this;
    }
  }

  private String constantSXP(@Nullable ConstPool.Idx<? extends SEXP> idx) {
    if (idx == null) {
      return "R_NilValue";
    }

    var c = getConstant(idx);
    return constantSXP(c);
  }

  private String constantSXP(Constant c) {
    return "Rsh_const(%s, %d)".formatted(VAR_CCP, c.id());
  }

  private Constant getConstant(ConstPool.Idx<? extends SEXP> idx) {
    return constants.computeIfAbsent(
        idx.idx(),
        ignored -> {
          var next = constants.size();
          return new Constant(next, bc.consts().get(idx));
        });
  }

  private Constant createExtraConstant(SEXP v) {
    var next = constants.size();
    var c = new Constant(next, v);
    constants.put(extraConstPoolIdx++, c);
    return c;
  }

  private String label(BcLabel l) {
    return "L%d".formatted(l.target());
  }

  private String label(int target) {
    labels.add(target);
    return "L%d".formatted(target);
  }

  private String symbolName(ConstPool.Idx<? extends SEXP> idx) {
    var sym = bc.consts().get(idx);
    if (sym instanceof RegSymSXP s) {
      return s.name();
    } else {
      throw new IllegalArgumentException("Expected a symbol or code, got: " + sym);
    }
  }

  private static final Set<BcOp> SUPPORTED_OPS =
      Set.of(
          BcOp.AND,
          BcOp.BRIFNOT,
          BcOp.CALLBUILTIN,
          BcOp.CALLSPECIAL,
          BcOp.CALL,
          BcOp.CHECKFUN,
          BcOp.DIV,
          BcOp.DOLLAR,
          BcOp.EQ,
          BcOp.EXPT,
          BcOp.EXP,
          BcOp.GETBUILTIN,
          BcOp.GETFUN,
          BcOp.GETVAR,
          BcOp.GE,
          BcOp.GOTO,
          BcOp.GT,
          BcOp.INVISIBLE,
          BcOp.VISIBLE,
          BcOp.LDCONST,
          BcOp.LDFALSE,
          BcOp.LDNULL,
          BcOp.LDTRUE,
          BcOp.LE,
          BcOp.LT,
          BcOp.MAKECLOSURE,
          BcOp.MAKEPROM,
          BcOp.MUL,
          BcOp.NE,
          BcOp.NOT,
          BcOp.OR,
          BcOp.POP,
          BcOp.PUSHARG,
          BcOp.PUSHCONSTARG,
          BcOp.PUSHFALSEARG,
          BcOp.PUSHNULLARG,
          BcOp.PUSHTRUEARG,
          BcOp.RETURN,
          BcOp.SETTAG,
          BcOp.SETVAR2,
          BcOp.SETVAR,
          BcOp.SUB,
          BcOp.SQRT,
          BcOp.UMINUS,
          BcOp.UPLUS,
          BcOp.ADD,
          BcOp.GETINTLBUILTIN,
          BcOp.GETVAR_MISSOK,
          BcOp.STARTSUBSET,
          BcOp.STARTSUBSET2,
          BcOp.STARTSUBSET2_N,
          BcOp.STARTSUBSET_N,
          BcOp.VECSUBSET2,
          BcOp.VECSUBSET,
          BcOp.STARTASSIGN,
          BcOp.STARTASSIGN2,
          BcOp.ENDASSIGN,
          BcOp.ENDASSIGN2,
          BcOp.STARTSUBASSIGN,
          BcOp.STARTSUBASSIGN2,
          BcOp.STARTSUBASSIGN_N,
          BcOp.STARTSUBASSIGN2_N,
          BcOp.VECSUBASSIGN2,
          BcOp.VECSUBASSIGN,
          BcOp.SETTER_CALL,
          BcOp.GETTER_CALL,
          BcOp.SWAP,
          BcOp.DOMISSING,
          BcOp.DFLTSUBASSIGN,
          BcOp.DFLTSUBASSIGN2,
          BcOp.SUBASSIGN_N,
          BcOp.SUBASSIGN2_N,
          BcOp.DFLTSUBSET,
          BcOp.DFLTSUBSET2,
          BcOp.SUBSET_N,
          BcOp.SUBSET2_N,
          BcOp.MATSUBSET,
          BcOp.MATSUBSET2,
          BcOp.MATSUBASSIGN,
          BcOp.MATSUBASSIGN2,
          BcOp.STARTFOR,
          BcOp.STEPFOR,
          BcOp.ENDFOR,
          BcOp.COLON,
          BcOp.SEQALONG,
          BcOp.SEQLEN,
          BcOp.ISNULL,
          BcOp.ISLOGICAL,
          BcOp.ISCHARACTER,
          BcOp.ISCOMPLEX,
          BcOp.ISDOUBLE,
          BcOp.ISINTEGER,
          BcOp.ISNUMERIC,
          BcOp.ISOBJECT,
          BcOp.ISSYMBOL,
          BcOp.DUP,
          BcOp.DUP2ND,
          BcOp.AND1ST,
          BcOp.AND2ND,
          BcOp.OR1ST,
          BcOp.OR2ND,
          BcOp.LOG,
          BcOp.LOGBASE,
          BcOp.MATH1,
          BcOp.DODOTS);

  private void checkSupported(BcInstr instr) {
    if (!SUPPORTED_OPS.contains(instr.op())) {
      throw new UnsupportedOperationException("Unsupported instruction: " + instr);
    }
  }
}
