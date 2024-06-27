package org.prlprg.bc2c;

import java.text.MessageFormat;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
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
    int curr = protects.size() -  1;
    max = Math.max(max, curr);

    return set(curr, expr, protect);
  }

  public String pop() {
    return pop(1);
  }

  public String pop(int n) {
    var unprotect = 0;
    for (int i = 0; i < n; i++) {
      unprotect += protects.pop();
    }

    return UNPROTECT_EXPR.formatted(unprotect);
  }

  public String curr() {
    return curr(0);
  }

  public String curr(int n) {
    return NAME.formatted(currIdx(n));
  }

  public int currIdx() {
    return currIdx(0);
  }

  public int currIdx(int n) {
    int curr = protects.size() - 1;

    assert curr + n >= -1 && curr + n <= max : "Invalid offset: %d (curr: %d, max: %d)".formatted(n, curr, max);

    return curr + n;
  }

  public int max() {
    return max;
  }

  public String set(int i, String expr, boolean protect) {
    assert(i >= 0 && i <= max);

    if (protect) {
      protects.set(i, protects.get(i) + 1);
      expr = PROTECT_EXPR.formatted(expr);
    }

    return "%s = %s;".formatted(NAME.formatted(i), expr);
  }
}

public class BC2CCompiler {
  private static final String NAME_ENV = "ENV";
  private static final String NAME_CP = "CP";
  private static final String CONST_GET = "CONST";
  private static final Value NIL = new Value("R_NilValue", false);

  private final String name;
  private final Bc bc;
  private final Map<Integer, Constant> constants = new LinkedHashMap<>();
  private final ByteCodeStack stack = new ByteCodeStack();

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
    bc.code().forEach(this::compile);
    compileRegisters();
    preamble();
    return file;
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

  private void compileRegisters() {
    var sec = fun.insertAbove(body);
    var line =
        IntStream.rangeClosed(0, stack.max())
            .mapToObj("_%d = NULL"::formatted)
            .collect(Collectors.joining(", ", "SEXP ", ";"));
    sec.line(line);
  }

  private void compile(BcInstr instr) {
    body.comment("begin: " + instr);
    switch (instr) {
      case BcInstr.SetVar(var idx) -> compileSetVar(idx);
      case BcInstr.LdConst(var idx) -> compilerLdConst(idx);
      case BcInstr.GetVar(var idx) -> compileGetVar(idx);
      case BcInstr.Add(var ignored) -> compileAdd();
      case BcInstr.Return() -> compileReturn();
      case BcInstr.Pop() -> pop(1);
      case BcInstr.GetBuiltin(var idx) -> compileGetBuiltin(idx);
      case BcInstr.PushConstArg(var idx) -> compilePushConstArg(idx);
      case BcInstr.CallBuiltin(var idx) -> compileCallBuiltin(idx);

      default ->
        throw new UnsupportedOperationException(instr + ": not supported");

    }
    body.comment("end: " + instr);
    body.nl();
  }

  private void compilePushConstArg(ConstPool.Idx<SEXP> idx) {
    body.line("RSH_LIST_APPEND(%s, %s, %s);".formatted(stack.curr(-1), stack.curr(), constant(idx)));
  }

  private void compileCallBuiltin(ConstPool.Idx<LangSXP> idx) {
    push(constant(idx));
    pop(4);
    push("Rsh_call_builtin(%s, %s, %s, %s)".formatted(stack.curr(4), stack.curr(1), stack.curr(2), NAME_ENV));
  }

  private void compileGetBuiltin(ConstPool.Idx<RegSymSXP> idx) {
    var name = bc.consts().get(idx).name();
    push("Rsh_get_builtin(\"%s\")".formatted(name));
    push(NIL);
    push(NIL);
  }

  private void compileSetVar(ConstPool.Idx<RegSymSXP> idx) {
    body.line("Rf_defineVar(%s, %s, %s);".formatted(constant(idx), stack.curr(), NAME_ENV));
  }

  private void compileReturn() {
    pop(1);
    assert stack.currIdx() == -1 : "Stack not empty (%d)".formatted(stack.currIdx());
    body.line("return %s;", stack.curr(1));
  }

  private void compileAdd() {
    pop(2);
    push("Rsh_fast_binary(ADD, %s, %s)".formatted(stack.curr(2), stack.curr(1)));
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
    var comment =
        IntStream.rangeClosed(stack.currIdx(-n + 1), stack.currIdx()).mapToObj("_%d"::formatted).collect(Collectors.joining(", "));

    body.line("%s; // %s ".formatted(stack.pop(n), comment));
  }

  private void push(String expr, boolean protect) {
    body.line(stack.push(expr, protect));
  }

  private void push(String expr) {
    push(expr, true);
  }

  private void push(Value value) {
    push(value.expr(), value.protect());
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
}
