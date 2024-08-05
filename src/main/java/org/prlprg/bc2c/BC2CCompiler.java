package org.prlprg.bc2c;

import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import org.jetbrains.annotations.NotNull;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcLabel;
import org.prlprg.bc.ConstPool;
import org.prlprg.sexp.*;

record Constant(int id, SEXP value) {}

record Value(String expr, boolean protect) {}

class ByteCodeStack {
  private static final String PROTECT_EXPR = "PROTECT(%s)";
  private static final String UNPROTECT_EXPR = "UNPROTECT(%d)";

  private int max = 0;
  private final Stack<Integer> protects = new Stack<>();

  public String push(String expr, boolean protect) {
    protects.push(0);
    int curr = protects.size();
    max = Math.max(max, curr);

    return set(curr - 1, expr, protect);
  }

  public String pop(int n) {
    var unprotect = 0;
    for (int i = 0; i < n; i++) {
      unprotect += protects.pop();
    }

    if (unprotect > 0) {
      return UNPROTECT_EXPR.formatted(unprotect);
    } else {
      return "";
    }
  }

  public String curr(int n) {
    return register(currIdx(n));
  }

  public int currIdx(int n) {
    int curr = protects.size() - 1;

    assert curr + n >= 0 && curr + n <= max
        : "Invalid offset: %d (curr: %d, max: %d)".formatted(n, curr, max);

    return curr + n;
  }

  public int max() {
    return max;
  }

  public boolean isEmpty() {
    return protects.isEmpty();
  }

  public String set(int i, String expr, boolean protect) {
    assert i >= 0 && i <= max : "Invalid index: %d (max: %d)".formatted(i, max);

    if (protect) {
      expr = protect(i, expr);
    }

    return "%s = %s;".formatted(register(i), expr);
  }

  private String protect(int i, String expr) {
    protects.set(i, protects.get(i) + 1);
    return PROTECT_EXPR.formatted(expr);
  }

  protected String register(int idx) {
    assert idx >=0;
    return "_" + idx;
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
}

// TODO: extract labels and cells into its own classes
public class BC2CCompiler {
  protected static final String NAME_ENV = "ENV";
  protected static final String NAME_CP = "CP";
  protected static final Value VAL_NULL = new Value("Rsh_NilValue", false);

  protected final String name;
  protected final Bc bc;
  protected final Map<Integer, Constant> constants = new LinkedHashMap<>();
  protected final ByteCodeStack stack = new ByteCodeStack();
  protected final Set<Integer> labels = new HashSet<>();
  protected final Set<Integer> cells = new HashSet<>();

  protected final CFile file;
  protected CFunction fun;
  protected CCode body;

  public BC2CCompiler(String name, Bc bc) {
    this.name = name;
    this.bc = bc;
    this.file = new CFile();
    this.fun = file.createFun("SEXP", name, "SEXP %s, SEXP %s".formatted(NAME_ENV, NAME_CP));
    this.body = fun.add();
  }

  public CFile compile() {
    beforeCompile();

    var code = bc.code();
    for (int i = 0; i < code.size(); i++) {
      compile(code.get(i), i);
    }

    afterCompile();
    return file;
  }

  protected void beforeCompile() {
    fillLabels();
  }

  protected void afterCompile() {
    compileCells();
    compileRegisters();
    preamble();
  }

  private void fillLabels() {
    bc.code().forEach(x -> x.labels().forEach(l -> labels.add(l.target())));
  }

  public List<SEXP> constants() {
    return List.copyOf(constants.values().stream().map(Constant::value).toList());
  }

  private void preamble() {
    file.setPreamble("#include <Rsh.h>");
  }

  private void compile(BcInstr instr, int instrIdx) {
    body.comment("begin: " + instr);
    if (labels.contains(instrIdx)) {
      body.line("%s:".formatted(label(instrIdx)));
    }

    switch (instr) {
      case BcInstr.SetVar(var idx) -> compileSetVar(idx);
      case BcInstr.LdConst(var idx) -> compilerLdConst(idx);
      case BcInstr.GetVar(var idx) -> compileGetVar(idx);
      case BcInstr.Add(var idx) -> compileAdd(idx);
      case BcInstr.Lt(var idx) -> compileLt(idx);
      case BcInstr.Return() -> compileReturn();
      case BcInstr.Pop() -> pop(1);
      case BcInstr.GetBuiltin(var idx) -> compileGetBuiltin(idx);
      case BcInstr.PushConstArg(var idx) -> compilePushConstArg(idx);
      case BcInstr.CallBuiltin(var idx) -> compileCall(idx);
      case BcInstr.Call(var idx) -> compileCall(idx);
      case BcInstr.PushArg() -> compilePushArg();
      case BcInstr.SetTag(var idx) -> compilerSetTag(idx);
      case BcInstr.BrIfNot(var call, var label) -> compileBrIfNot(call, label);
      case BcInstr.Goto(var label) -> compileGoto(label);
      case BcInstr.Invisible() -> compileInvisible();
      case BcInstr.LdNull() -> compileLdNull();
      case BcInstr.GetFun(var idx) -> compileGetFun(idx);
      case BcInstr.Eq(var idx) -> compileEq(idx);

      default -> throw new UnsupportedOperationException(instr + ": not supported");
    }
    body.comment("end: " + instr);
    body.nl();
  }

  private void compileEq(ConstPool.Idx<LangSXP> idx) {
    var lhs = stack.curr(-1);
    var rhs = stack.curr(0);
    popPush(2, "Rsh_binary(EQ, %s, %s);".formatted(lhs, rhs), true);
  }

  private void compileCall(ConstPool.Idx<LangSXP> idx) {
    var call = constantSXP(idx);
    var fun = stack.curr(-2);
    var args = stack.curr(-1);

    // FIXME: how do we signal back the whether the value needs protection?
    var c = "Rsh_call(%s, %s, %s, %s)".formatted(call, fun, args, NAME_ENV);
    // we are going to pop 4 elements from the stack - all the until the beginning of the call frame
    popPush(3, c, false);
  }

  private void compileGetFun(ConstPool.Idx<RegSymSXP> idx) {
    push("Rsh_getFun(%s, %s)".formatted(constantSXP(idx), NAME_ENV), false);
    initCallFrame();
  }

  private void compileLdNull() {
    visible(true);
    push(VAL_NULL);
  }

  private void compileInvisible() {
    visible(false);
  }

  private void compileGoto(BcLabel label) {
    body.line("goto %s;".formatted(label(label.target())));
  }

  private void compileBrIfNot(ConstPool.Idx<LangSXP> call, BcLabel label) {
    var curr = stack.curr(0);
    var unprotect = stack.pop(1);
    body.line(
        "if (!Rsh_is_true(%s, %s)) { %s; goto %s; }"
            .formatted(curr, constantSXP(call), unprotect, label(label.target())));
    body.line(unprotect + ";");
  }

  private void compilerSetTag(ConstPool.Idx<StrOrRegSymSXP> idx) {
    body.line(
        """
    if (TYPEOF(%s) != SPECIALSXP) {
      RSH_SET_TAG(%s, %s);
    }"""
            .formatted(stack.curr(-2), stack.curr(0), constantVAL(idx)));
  }

  private void compilePushArg() {
    body.line(
        "RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.curr(-2), stack.curr(-1), stack.curr(0)));
    pop(1);
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

  private void compilePushConstArg(ConstPool.Idx<SEXP> idx) {
    body.line(
        "RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.curr(-1), stack.curr(0), constantVAL(idx)));
  }

  private void compileGetBuiltin(ConstPool.Idx<RegSymSXP> idx) {
    var name = bc.consts().get(idx).name();
    push("Rsh_get_builtin(\"%s\")".formatted(name), false);
    initCallFrame();
  }

  private void initCallFrame() {
    push(VAL_NULL);
    push(VAL_NULL);
  }

  private void compileGetVar(ConstPool.Idx<RegSymSXP> idx) {
    push(
        "Rsh_get_var(%s, %s, FALSE, FALSE, &%s)".formatted(constantSXP(idx), NAME_ENV, cell(idx)),
        false);
  }

  private void compileSetVar(ConstPool.Idx<RegSymSXP> idx) {
    body.line(
        "Rsh_set_var(%s, %s, %s, &%s);"
            .formatted(constantSXP(idx), stack.curr(0), NAME_ENV, cell(idx)));
  }

  private void compileReturn() {
    pop(1);
    assert stack.isEmpty() : "Stack not empty (%d)".formatted(stack.currIdx(0));
    body.line("return Rsh_return(%s);".formatted(stack.curr(1)));
  }

  private void compileAdd(ConstPool.Idx<LangSXP> idx) {
    var call = constantSXP(idx);
    var lhs = stack.curr(-1);
    var rhs = stack.curr(0);
    popPush(2, "Rsh_arith(ADD_OP, %s, %s, %s, %s)".formatted(lhs, rhs, call, NAME_ENV), false);
  }

  private void compileLt(ConstPool.Idx<LangSXP> idx) {
    var call = constantSXP(idx);
    var lhs = stack.curr(-1);
    var rhs = stack.curr(0);
    popPush(2, "Rsh_relop(LT_OP, %s, %s, %s, %s)".formatted(lhs, rhs, call, NAME_ENV), false);
  }

  private void compilerLdConst(ConstPool.Idx<SEXP> idx) {
    push(constantVAL(idx), false);
  }

  // API

  private void pop(int n) {
    var unprotect = stack.pop(n);
    if (!unprotect.isEmpty()) {
      body.line(unprotect + ";");
    }
  }

  private String push(String expr, boolean protect) {
    body.line(stack.push(expr, protect));
    return stack.curr(0);
  }

  private String push(String expr) {
    return push(expr, true);
  }

  private void push(Value value) {
    push(value.expr(), value.protect());
  }

  public void popPush(int n, String expr, boolean protect) {
    set(stack.currIdx(-n + 1), expr, false);
    pop(n);
    push(stack.curr(1), protect);
  }

  private void set(int i, String expr, boolean protect) {
    body.line(stack.set(i, expr, protect));
  }

  private String constantSXP(ConstPool.Idx<? extends SEXP> idx) {
    var c = getConstant(idx);
    return "Rsh_const(%s, %d)".formatted(NAME_CP, c.id());
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

    return "%s(%s, %d)".formatted(f, NAME_CP, c.id());
  }

  @NotNull private Constant getConstant(ConstPool.Idx<? extends SEXP> idx) {
    return constants.computeIfAbsent(
        idx.idx(),
        ignored -> {
          var next = constants.size();
          return new Constant(next, bc.consts().get(idx));
        });
  }

  private String label(int instrIndex) {
    labels.add(instrIndex);
    return "L%d".formatted(instrIndex);
  }

  private String cell(ConstPool.Idx<? extends SEXP> idx) {
    var id = getConstant(idx).id();
    cells.add(id);
    return "C%d".formatted(id);
  }

  private void visible(boolean visible) {
    body.line("R_Visible = %s;".formatted(visible ? "TRUE" : "FALSE"));
  }
}
