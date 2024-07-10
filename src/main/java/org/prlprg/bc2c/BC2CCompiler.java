package org.prlprg.bc2c;

import java.text.MessageFormat;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.BcLabel;
import org.prlprg.bc.ConstPool;
import org.prlprg.sexp.*;

record Constant(int id, SEXP value) {}

record Value(String expr, boolean protect) {}

class ByteCodeStack {
  private static final String NAME = "_%d";
  private static final String PROTECT_EXPR = "PROTECT(%s)";
  private static final String UNPROTECT_EXPR = "UNPROTECT(%d)";

  private int max = 0;
  private final Stack<Integer> protects = new Stack<>();

  public String push(String expr, boolean protect) {
    protects.push(0);
    int curr = protects.size() - 1;
    max = Math.max(max, curr);

    return set(curr, expr, protect);
  }

  public String pop(int n) {
    var unprotect = 0;
    for (int i = 0; i < n; i++) {
      unprotect += protects.pop();
    }

    return UNPROTECT_EXPR.formatted(unprotect);
  }

  public String curr(int n) {
    return NAME.formatted(currIdx(n));
  }

  public int currIdx(int n) {
    int curr = protects.size() - 1;

    assert curr + n >= -1 && curr + n <= max
        : "Invalid offset: %d (curr: %d, max: %d)".formatted(n, curr, max);

    return curr + n;
  }

  public int max() {
    return max;
  }

  public String set(int i, String expr, boolean protect) {
    assert i >= 0 && i <= max : "Invalid index: %d (max: %d)".formatted(i, max);

    if (protect) {
      expr = protect(i, expr);
    }

    return "%s = %s;".formatted(NAME.formatted(i), expr);
  }

  private String protect(int i, String expr) {
    protects.set(i, protects.get(i) + 1);
    return PROTECT_EXPR.formatted(expr);
  }
}

public class BC2CCompiler {
  private static final String NAME_ENV = "ENV";
  private static final String NAME_CP = "CP";
  private static final String CONST_GET = "CONST";
  private static final Value VAL_NULL = new Value("R_NilValue", false);

  private final String name;
  private final Bc bc;
  private final Map<Integer, Constant> constants = new LinkedHashMap<>();
  private final ByteCodeStack stack = new ByteCodeStack();
  private final Set<Integer> labels = new HashSet<>();

  private final CFile file;
  private CFunction fun;
  private CCode body;

  public BC2CCompiler(String name, Bc bc) {
    this.name = name;
    this.bc = bc;
    this.file = new CFile();
    this.fun = file.createFun("SEXP", name, "SEXP %s, SEXP %s".formatted(NAME_ENV, NAME_CP));
    this.body = fun.add();
  }

  public CFile compile() {
    fillLabels();
    var code = bc.code();
    for (int i = 0; i < code.size(); i++) {
      compile(code.get(i), i);
    }

    compileRegisters();
    preamble();
    return file;
  }

  private void fillLabels() {
    bc.code().forEach(x -> x.labels().forEach(l -> labels.add(l.target())));
  }

  public List<SEXP> constants() {
    return List.copyOf(constants.values().stream().map(Constant::value).toList());
  }

  private void preamble() {
    file.setPreamble(
        MessageFormat.format(
            """
        #include <Rsh.h>

        // constant pool accessor
        #define {0}(i)        ((SEXP *) STDVEC_DATAPTR({1}))[i]
        """,
            CONST_GET, NAME_CP));
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
      case BcInstr.Add(_) -> compileAdd();
      case BcInstr.Return() -> compileReturn();
      case BcInstr.Pop() -> pop(1);
      case BcInstr.GetBuiltin(var idx) -> compileGetBuiltin(idx);
      case BcInstr.PushConstArg(var idx) -> compilePushConstArg(idx);
      case BcInstr.CallBuiltin(var idx) -> compileCall(idx);
      case BcInstr.PushArg() -> compilePushArg();
      case BcInstr.SetTag(var idx) -> compilerSetTag(idx);
      case BcInstr.Lt(_) -> compileLt();
      case BcInstr.BrIfNot(var call, var label) -> compileBrIfNot(call, label);
      case BcInstr.Goto(var label) -> compileGoto(label);
      case BcInstr.Invisible() -> compileInvisible();
      case BcInstr.LdNull() -> compileLdNull();
      case BcInstr.GetFun(var idx) -> compileGetFun(idx);
      case BcInstr.Call(var idx) -> compileCall(idx);

      default -> throw new UnsupportedOperationException(instr + ": not supported");
    }
    body.comment("end: " + instr);
    body.nl();
  }

  // FIXME: refactor
  private void compileCall(ConstPool.Idx<LangSXP> idx) {
    var call = push(constant(idx), false);
    var fun = stack.curr(-3);
    var args = stack.curr(-2);

    var c = "Rsh_call(%s, %s, %s, %s)".formatted(call, fun, args, NAME_ENV);
    // we are going to pop 4 elements from the stack - all the until the beginning of the call frame
    popPush(4, c, true);
  }

  private void compileGetFun(ConstPool.Idx<RegSymSXP> idx) {
    push("Rf_findFun(%s, %s)".formatted(constant(idx), NAME_ENV));
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
            .formatted(curr, constant(call), unprotect, label(label.target())));
    body.line(unprotect + ";");
  }

  private void compileLt() {
    popPush(2, "Rsh_fast_binary(LT, %s, %s)".formatted(stack.curr(-1), stack.curr(0)), true);
  }

  private void compilerSetTag(ConstPool.Idx<StrOrRegSymSXP> idx) {
    body.line(
        """
    if (TYPEOF(%s) != SPECIALSXP) {
      RSH_SET_TAG(%s, %s);
    }"""
            .formatted(stack.curr(-2), stack.curr(0), constant(idx)));
  }

  private void compilePushArg() {
    body.line(
        "RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.curr(-2), stack.curr(-1), stack.curr(0)));
    pop(1);
  }

  private void compileRegisters() {
    var sec = fun.insertAbove(body);
    var line =
        IntStream.rangeClosed(0, stack.max())
            .mapToObj("_%d = NULL"::formatted)
            .collect(Collectors.joining(", ", "SEXP ", ";"));
    sec.line(line);
  }

  private void compilePushConstArg(ConstPool.Idx<SEXP> idx) {
    body.line(
        "RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.curr(-1), stack.curr(0), constant(idx)));
  }

  private void compileGetBuiltin(ConstPool.Idx<RegSymSXP> idx) {
    var name = bc.consts().get(idx).name();
    push("Rsh_get_builtin(\"%s\")".formatted(name));
    initCallFrame();
  }

  private void initCallFrame() {
    push(VAL_NULL);
    push(VAL_NULL);
  }

  private void compileSetVar(ConstPool.Idx<RegSymSXP> idx) {
    body.line("Rsh_set_var(%s, %s, %s);".formatted(constant(idx), stack.curr(0), NAME_ENV));
  }

  private void compileReturn() {
    pop(1);
    assert stack.currIdx(0) == -1 : "Stack not empty (%d)".formatted(stack.currIdx(0));
    body.line("return %s;".formatted(stack.curr(1)));
  }

  private void compileAdd() {
    popPush(2, "Rsh_fast_binary(ADD, %s, %s)".formatted(stack.curr(-1), stack.curr(0)), true);
  }

  private void compileGetVar(ConstPool.Idx<RegSymSXP> idx) {
    push(getVar(constant(idx)));
  }

  private String getVar(String expr) {
    return "Rsh_get_var(%s, %s)".formatted(expr, NAME_ENV);
  }

  private void compilerLdConst(ConstPool.Idx<SEXP> idx) {
    push(constant(idx), false);
  }

  // API

  private void pop(int n) {
    body.line("%s;".formatted(stack.pop(n)));
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

  private String constant(ConstPool.Idx<? extends SEXP> idx) {
    var c =
        constants.computeIfAbsent(
            idx.idx(),
            ignored -> {
              var next = constants.size();
              return new Constant(next, bc.consts().get(idx));
            });

    return "%s(%d)".formatted(CONST_GET, c.id());
  }

  private String label(int instrIndex) {
    labels.add(instrIndex);
    return "L%d".formatted(instrIndex);
  }

  private void visible(boolean visible) {
    body.line("R_Visible = %s;".formatted(visible ? "TRUE" : "FALSE"));
  }
}
