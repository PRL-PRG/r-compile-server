package org.prlprg.bc2c;

import java.util.*;
import javax.annotation.Nullable;
import org.prlprg.bc.*;
import org.prlprg.sexp.*;

record Constant(int id, SEXP value) {}

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
    --top;
    var s = get(top);
    return "*" + s;
  }

  public String get(int i) {
    var p = top - i;
    if (p < 0 || p + 1 > max) {
      throw new IllegalStateException("Invalid stack state (i: %d, max: %d)".formatted(p, max));
    }

    return "GET_VAL(" + p + ")";
  }

  public int max() {
    return max;
  }

  public boolean isEmpty() {
    return top == -1;
  }

  protected Optional<String> registerInitialization() {
    //    if (max == 0) {
    return Optional.empty();
    //    }
    //
    //    var builder = new StringBuilder();
    //    for (int i = 0; i < max; i++) {
    //      builder.append("INIT_VAL(_").append(i).append(");\n");
    //    }
    //
    //    return Optional.of(builder.toString());
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

  public Iterable<CFunction> funs() {
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
    module.funs().forEach(fun -> file.addFun(fun, true));

    return new CompiledModule(file, compiledClosure.name(), compiledClosure.constantPool());
  }
}

// TODO: extract labels and cells into its own classes
class ClosureCompiler {
  /** The name of the variable representing the current environment */
  private static final String VAR_RHO = "RHO";

  /** The name of the variable representing the C constant pool */
  private static final String VAR_CCP = "CCP";

  private final Bc bc;
  private final ByteCodeStack stack = new ByteCodeStack();
  private final Map<Integer, Constant> constants = new LinkedHashMap<>();
  private final Set<Integer> labels = new HashSet<>();
  private final Set<Integer> cells = new HashSet<>();
  private int extraConstPoolIdx;
  private final String name;

  protected CModule module;
  protected CFunction fun;
  protected CCode body;

  public ClosureCompiler(CModule module, String name, Bc bc) {
    this.bc = bc;
    this.name = name;
    this.module = module;
    this.fun = module.createFun("SEXP", name, "SEXP %s, SEXP %s".formatted(VAR_RHO, VAR_CCP));
    this.body = fun.add();
    this.extraConstPoolIdx = bc.consts().size() + 1;
  }

  public VectorSXP<SEXP> compile() {
    beforeCompile();

    var code = bc.code();
    for (int i = 0; i < code.size(); i++) {
      compile(code.get(i), i);
    }

    //    if (!stack.isEmpty()) {
    //      throw new IllegalStateException("Stack not empty: %d".formatted(stack.top()));
    //    }

    afterCompile();

    return SEXPs.vec(constants());
  }

  private void beforeCompile() {
    fillLabels();
  }

  private void afterCompile() {
    compileCells();
    compileRegisters();
    compileStackGuard();
  }

  private void compileStackGuard() {
    fun.insertAbove(body).line("Value *__top__ = R_BCNodeStackTop;");
  }

  private void fillLabels() {
    bc.code().forEach(x -> x.label().ifPresent(l -> labels.add(l.target())));
  }

  public List<SEXP> constants() {
    return List.copyOf(constants.values().stream().map(Constant::value).toList());
  }

  private void compile(BcInstr instr, int pc) {
    if (labels.contains(pc)) {
      body.line("%s:".formatted(label(pc)));
    }

    var builder = new InstrBuilder(instr);
    checkSupported(instr);
    var code =
        switch (instr) {
            // FIXME: do not POP after return
            // FIXME: extract constants
          case BcInstr.Return() ->
              """
              do {
                Value __ret__ = *GET_VAL(1);
                POP_VAL(1);
                if (__top__ != R_BCNodeStackTop) {
                  Rf_error("Stack not empty after compilation: %ld", R_BCNodeStackTop - __top__);
                }
                POP_VAL(__ncells__);
                return Rsh_Return(__ret__);
              } while(0);
            """;
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
                .args("Rsh_const(%s, %d)".formatted(VAR_CCP, c.id()))
                .compileStmt();
          }
          case BcInstr.SetVar(var symbol) ->
              builder.args(constantSXP(symbol), cell(symbol)).compileStmt();
          case BcInstr.GetVar(var symbol) ->
              builder.args(constantSXP(symbol), cell(symbol)).compileStmt();
          case BcInstr.GetVarMissOk(var symbol) ->
              builder.args(constantSXP(symbol), cell(symbol)).compileStmt();
          case BcInstr.StartAssign(var symbol) ->
              builder.args(constantSXP(symbol), cell(symbol)).compileStmt();
          case BcInstr.StartAssign2(var symbol) ->
              builder.args(constantSXP(symbol), cell(symbol)).compileStmt();
          case BcInstr.EndAssign(var symbol) ->
              builder.args(constantSXP(symbol), cell(symbol)).compileStmt();
          case BcInstr.EndAssign2(var symbol) ->
              builder.args(constantSXP(symbol), cell(symbol)).compileStmt();
          case BcInstr.GetBuiltin(var idx) ->
              builder.args("\"" + bc.consts().get(idx).name() + "\"").compileStmt();
          case BcInstr.MakeClosure(var idx) -> compileMakeClosure(builder, idx);

            // FIXME: this can be all done using the default branch - except for the rank
            //  the builder should be smarter and include also other types such as int
          case BcInstr.SubsetN(var call, var rank) ->
              builder
                  .args(String.valueOf(rank), constantSXP(call))
                  .pop(rank + 1)
                  .useStackAsArray()
                  .compileStmt();
          case BcInstr.Subset2N(var call, var rank) ->
              builder
                  .args(String.valueOf(rank), constantSXP(call))
                  .pop(rank + 1)
                  .useStackAsArray()
                  .compileStmt();
          case BcInstr.SubassignN(var call, var rank) ->
              builder
                  .args(String.valueOf(rank), constantSXP(call))
                  .pop(rank + 2)
                  .useStackAsArray()
                  .compileStmt();
          case BcInstr.Subassign2N(var call, var rank) ->
              builder
                  .args(String.valueOf(rank), constantSXP(call))
                  .pop(rank + 2)
                  .useStackAsArray()
                  .compileStmt();

          case BcInstr.StartFor(var ast, var symbol, var label) -> {
            var c = builder.args(constantSXP(ast), constantSXP(symbol), cell(symbol)).compileStmt();
            yield c + "\ngoto " + label(label) + ";";
          }
          case BcInstr.StepFor(var label) -> {
            if (!(this.bc.instr(label.target() - 1)
                instanceof BcInstr.StartFor(_, var symbol, _))) {
              throw new IllegalStateException("Expected StartFor instruction");
            }
            yield "if (%s) {\n goto %s;\n}"
                .formatted(builder.args(cell(symbol)).compile(), label(label));
          }
          case BcInstr.Math1(var call, var op) ->
              builder.args(constantSXP(call), String.valueOf(op)).compileStmt();

          default -> {
            if (instr.label().orElse(null) instanceof BcLabel l) {
              yield "if (%s) {\ngoto %s;\n}".formatted(builder.compile(), label(l));
            } else {
              yield builder.compileStmt();
            }
          }
        };

    builder.beforeCompile().forEach(body::line);
    body.line(code);
    if (!(instr instanceof BcInstr.BrIfNot)) {
      // FIXME: temporary
      builder.afterCompile().forEach(body::line);
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

  private String compileMakeClosure(InstrBuilder builder, ConstPool.Idx<VecSXP> idx) {
    var cls = bc.consts().get(idx);

    if (cls.get(1) instanceof BCodeSXP closureBody) {
      var compiledClosure = module.compileClosure(closureBody.bc(), name);
      var cpConst = createExtraConstant(compiledClosure.constantPool());
      return builder
          .args(constantSXP(idx), "&" + compiledClosure.name(), constantSXP(cpConst))
          .compileStmt();
    } else {
      throw new UnsupportedOperationException("Unsupported body: " + body);
    }
  }

  private void compileRegisters() {
    var code = stack.registerInitialization();
    if (code.isPresent()) {
      var sec = fun.insertAbove(body);
      sec.line(code.get());
    }
  }

  private void compileCells() {
    var sec = fun.insertAbove(body);

    if (cells.isEmpty()) {
      sec.line("int __ncells__ = 0;");
      return;
    }

    sec.line("int __ncells__ = %d;".formatted(cells.size()));
    sec.line("PUSH_VAL(__ncells__);");
    int i = 0;
    for (var c : cells) {
      var idx = cells.size() - i;
      sec.line("BCell* C%d = &(R_BCNodeStackTop - %d)->u.sxpval;".formatted(c, idx));
      sec.line("(R_BCNodeStackTop - %d)->tag = 0;".formatted(idx));
      sec.line("(R_BCNodeStackTop - %d)->flags = 0;".formatted(idx));
      sec.line("*C%d = R_NilValue;".formatted(c));
      i++;
    }
  }

  // API

  class InstrBuilder {
    private String fun;
    private List<String> args = new ArrayList<>();
    private boolean needsRho;
    private int push;
    private int pop;
    private boolean stackAsArray;

    public InstrBuilder(BcInstr instr) {
      for (var x : instr.args()) {
        this.args.add(constantSXP(x));
      }
      if (instr.needsRho()) {
        this.needsRho = true;
      }
      this.fun = "Rsh_" + instr.getClass().getSimpleName();
      this.pop = instr.pop();
      this.push = instr.push();
    }

    public InstrBuilder fun(String fun) {
      this.fun = fun;
      return this;
    }

    public InstrBuilder args(String... args) {
      this.args = List.of(args);
      return this;
    }

    public InstrBuilder push(int push) {
      this.push = push;
      return this;
    }

    public InstrBuilder pop(int pop) {
      this.pop = pop;
      return this;
    }

    public String compile() {
      var args = new ArrayList<String>(Math.max(pop, push) + this.args.size());

      if (stackAsArray) {
        args.add("GET_VAL(0)");
      } else {
        args.addAll(replayStackEffect());
      }

      args.addAll(this.args);

      if (needsRho) {
        args.add(VAR_RHO);
      }

      return fun + "(" + String.join(", ", args) + ")";
    }

    public List<String> replayStackEffect() {
      var args = new ArrayList<String>(Math.max(pop, push) + this.args.size());
      var max = Math.max(pop, push);

      for (int i = 0; i < max; i++) {
        var a = "GET_VAL(%d)".formatted(max - i);
        if (i >= push) {
          a = "*" + a;
        }
        args.add(a);
      }

      return args;
    }

    public String compileStmt() {
      return this.compile() + ";";
    }

    public InstrBuilder useStackAsArray() {
      this.stackAsArray = true;
      return this;
    }

    public List<String> beforeCompile() {
      int n = push - pop;
      if (n > 0) {
        return List.of("PUSH_VAL(%d);".formatted(n));
      } else {
        return List.of();
      }
    }

    public List<String> afterCompile() {
      int n = pop - push;
      if (n > 0) {
        return List.of("POP_VAL(%d);".formatted(n));
      } else {
        return List.of();
      }
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

  private String cell(ConstPool.Idx<? extends SEXP> idx) {
    var id = getConstant(idx).id();
    cells.add(id);
    return "C%d".formatted(id);
  }
}
