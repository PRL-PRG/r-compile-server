package org.prlprg.bc2c;

import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import javax.annotation.Nullable;
import org.prlprg.bc.*;
import org.prlprg.sexp.*;

record Constant(int id, SEXP value) {}

class ByteCodeStack {
  private int max = 0;
  private int top = -1;

  public String push() {
    top++;
    max = Math.max(max, top + 1);
    return "&" + variable();
  }

  public String pop() {
    if (top < 0) {
      throw new IllegalArgumentException("Stack underflow: %d".formatted(top));
    }
    String v = variable();
    top--;
    return v;
  }

  private String variable() {
    if (top < 0 || top + 1 > max) {
      throw new IllegalStateException("Invalid stack state (top: %d, max: %d)".formatted(top, max));
    }

    return "_" + top;
  }

  public int max() {
    return max;
  }

  public boolean isEmpty() {
    return top == -1;
  }

  protected Optional<String> registerInitialization() {
    if (max == 0) {
      return Optional.empty();
    }

    var line =
        IntStream.range(0, max)
            .mapToObj("_%d"::formatted)
            .collect(Collectors.joining(", ", "Value ", ";"));

    return Optional.of(line);
  }

  public int top() {
    return top;
  }
}

record CompiledClosure(String name, VectorSXP<SEXP> constantPool) {}

class CModule {
  private final List<CFunction> funs = new ArrayList<>();

  CFunction createFun(String returnType, String name, String args) {
    var fun = new CFunction(returnType, name, args);
    funs.add(fun);
    return fun;
  }

  CompiledClosure compileClosure(Bc bc) {
    var bcHash = Math.abs(bc.hashCode());
    var randomSuffix = UUID.randomUUID().toString().substring(0, 8);
    var name = "f_" + bcHash + "_" + randomSuffix;

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

  public BC2CCompiler(Bc bc) {
    this.bc = bc;
  }

  public CompiledModule finish() {
    var compiledClosure = module.compileClosure(bc);

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

  protected CModule module;
  protected CFunction fun;
  protected CCode body;

  public ClosureCompiler(CModule module, String name, Bc bc) {
    this.bc = bc;
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

    if (!stack.isEmpty()) {
      throw new IllegalStateException("Stack not empty: %d".formatted(stack.top()));
    }

    afterCompile();

    return SEXPs.vec(constants());
  }

  private void beforeCompile() {
    fillLabels();
  }

  private void afterCompile() {
    compileCells();
    compileRegisters();
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
          case BcInstr.Return() -> "return %s;".formatted(builder.compile());
          case BcInstr.Goto(var dest) -> "goto %s;".formatted(label(dest));
          case BcInstr.LdConst(var idx) -> builder.args(constantVAL(idx)).compileStmt();
          case BcInstr.PushConstArg(var idx) -> builder.args(constantVAL(idx)).compileStmt();
          case BcInstr.SetTag(var idx) -> builder.args(constantVAL(idx)).compileStmt();
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
          case BcInstr.SubsetN(var call, var rank) ->
              builder.args(constantSXP(call)).pop(1 + rank).useStackAsArray().compileStmt();
          case BcInstr.Subset2N(var call, var rank) ->
              builder.args(constantSXP(call)).pop(1 + rank).useStackAsArray().compileStmt();
          case BcInstr.SubassignN(var call, var rank) ->
              builder.args(constantSXP(call)).pop(2 + rank).useStackAsArray().compileStmt();
          case BcInstr.Subassign2N(var call, var rank) ->
              builder.args(constantSXP(call)).pop(2 + rank).useStackAsArray().compileStmt();
          case BcInstr.StartFor(var ast, var symbol, var label) -> {
            var c = builder.args(constantSXP(ast), constantSXP(symbol), cell(symbol)).compileStmt();
            yield c + "\ngoto " + label(label) + ";";
          }
          case BcInstr.StepFor(var label) -> {
            if (!(this.bc.code().get(label.target() - 1)
                instanceof BcInstr.StartFor(_, var symbol, _))) {
              throw new IllegalStateException("Expected StartFor instruction");
            }
            yield "if (%s) {\n goto %s;\n}"
                .formatted(builder.args(cell(symbol)).compile(), label(label));
          }
          default -> {
            if (instr.label().orElse(null) instanceof BcLabel l) {
              yield "if (%s) {\ngoto %s;\n}".formatted(builder.compile(), label(l));
            } else {
              yield builder.compileStmt();
            }
          }
        };

    body.line(code);
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
          BcOp.DUP,
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
          BcOp.COLON);

  private void checkSupported(BcInstr instr) {
    if (!SUPPORTED_OPS.contains(instr.op())) {
      throw new UnsupportedOperationException("Unsupported instruction: " + instr);
    }
  }

  private String compileMakeClosure(InstrBuilder builder, ConstPool.Idx<VecSXP> idx) {
    var cls = bc.consts().get(idx);

    if (cls.get(1) instanceof BCodeSXP closureBody) {
      var compiledClosure = module.compileClosure(closureBody.bc());
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
    if (cells.isEmpty()) {
      return;
    }

    var sec = fun.insertAbove(body);
    var line =
        cells.stream()
            .map("C%d = R_NilValue"::formatted)
            .collect(Collectors.joining(", ", "BCell ", ";"));
    sec.line(line);
  }

  // API

  class InstrBuilder {
    private final BcInstr instr;
    private final String fun;
    private List<String> args = new ArrayList<>();
    private boolean needsRho;
    private int push;
    private int pop;
    private boolean stackAsArray;

    public InstrBuilder(BcInstr instr) {
      this.instr = instr;
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

      // TODO: maybe it will be better to represent stack as an array from the beginning
      //  and just keep track of the top of the stack
      if (stackAsArray) {
        var top = stack.top();
        replayStackEffect();
        var bottom = stack.top();
        var s =
            IntStream.range(bottom, top + 1)
                .mapToObj("&_%d"::formatted)
                .collect(Collectors.toList());
        var arg = "((Value*[]){" + String.join(",", s) + "})";
        args.add(arg);
        args.add(String.valueOf(s.size()));
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
      // play the stack effects
      for (int i = 0; i < pop; i++) {
        args.addFirst(stack.pop());
      }
      for (int i = 0; i < push; i++) {
        var e = stack.push();
        if (args.size() < i + 1) {
          args.add(e);
        } else {
          args.set(i, e);
        }
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

  private String constantVAL(ConstPool.Idx<? extends SEXP> idx) {
    var c = getConstant(idx);

    var f =
        switch (c.value()) {
          case IntSXP v when v.size() == 1 -> "Rsh_const_int";
          case RealSXP v when v.size() == 1 -> "Rsh_const_dbl";
          case LglSXP v when v.size() == 1 -> "Rsh_const_lgl";
          case SEXP _ -> "Rsh_const_sxp";
        };

    return "%s(%s, %d)".formatted(f, VAR_CCP, c.id());
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
    return "&C%d".formatted(id);
  }
}
