package org.prlprg.bc2c;

import java.util.HashMap;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.ConstPool;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;

record Constant(int id, SEXP value) {}
record Value(String expr, boolean protect) {}

// point the stack to one before the top
class Stack {
  private int max = 0;
  private int curr = -1;

  public int inc() {
    curr++;
    max = Math.max(max, curr);
    return curr;
  }

  @SuppressWarnings("UnusedReturnValue")
  public int dec() {
    return --curr;
  }

  public int curr() {
    return curr;
  }

  public int max() {
    return max;
  }
}

public class BC2CCompiler {
  static final String NAME_ENV = "ENV";
  private static final String NAME_CP = "CP";

  private final String name;
  private final Bc bc;
  private final Map<Integer, Constant> constants = new HashMap<>();
  private final Stack stack = new Stack();

  private final CFile file;
  private CFunction fun;
  private CCode body;

  public BC2CCompiler(String name, Bc bc) {
    this.name = name;
    this.bc = bc;
    this.file = new CFile();
    this.fun = file.createFun(name);
    this.body = fun.add();
  }

  public CFile compile() {
    bc.code().forEach(this::compile);
    compileConstantPool();
    compileRegisters();
    preamble();
    return file;
  }

  private void preamble() {
    file.setPreamble("""
        #include <Rsh.h>
        """);
  }

  private void compileRegisters() {
    var sec = fun.insertAbove(body);
    var line =
        IntStream.rangeClosed(0, stack.max())
            .mapToObj("_%d = NULL"::formatted)
            .collect(Collectors.joining(", ", "SEXP ", ";"));
    sec.line(line);
  }

  private void compileConstantPool() {
    var sec = fun.insertAbove(body);
    var cp =
        IntStream.range(0, constants.size())
            .mapToObj(ignored -> "NULL")
            .collect(Collectors.joining(", ", "SEXP %s[] = {".formatted(NAME_CP), "};"));
    sec.line(cp);
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

      default -> throw new UnsupportedOperationException(instr + ": not supported");
    }
    body.comment("end: " + instr);
    body.nl();
  }

  private void compileSetVar(ConstPool.Idx<RegSymSXP> idx) {
    body.line("Rf_defineVar(%s, _%d, %s);".formatted(constant(idx), stack.curr(), NAME_ENV));
  }

  private void compileReturn() {
    pop(1);
    assert stack.curr() == -1;
    body.line("return _%d;", stack.curr() + 1);
  }

  private void compileAdd() {
    pop(2);
    push("Rsh_fast_binary(ADD, _%d, _%d)".formatted(stack.curr() + 2, stack.curr() + 1));
  }

  private void pop(int n) {
    for (int i = 0; i < n; i++) {
      body.line("UNPROTECT(1); // _%d".formatted(stack.curr()));
      stack.dec();
    }
  }

  private void compileGetVar(ConstPool.Idx<RegSymSXP> idx) {
    push(getVar(constant(idx)));
  }

  private String getVar(String expr) {
    return "Rsh_get_var(%s, %s)".formatted(expr, NAME_ENV);
  }

  private void compilerLdConst(ConstPool.Idx<SEXP> idx) {
    push(constant(idx));
  }

  private void push(String expr) {
    body.line("_%d = PROTECT(%s);", stack.inc(), expr);
  }

  private String constant(ConstPool.Idx<? extends SEXP> idx) {
    var c =
        constants.computeIfAbsent(
            idx.idx(),
            ignored -> {
              var next = constants.size();
              return new Constant(next, bc.consts().get(idx));
            });

    var cp = "%s[%d]".formatted(NAME_CP, c.id());
    var init = sexp(bc.consts().get(idx));
    return "%s == NULL ? %s : %s".formatted(cp, init, cp);
  }

  private String sexp(SEXP v) {
    var protect = true;
    var expr =
        switch (v) {
          case RealSXP r when r.size() == 1 -> "Rf_ScalarReal(%f)".formatted(r.get(0));
          case IntSXP i when i.size() == 1 -> "Rf_ScalarInteger(%d)".formatted(i.get(0));
          case RegSymSXP r -> {
            protect = false;
            yield "Rf_install(\"%s\")".formatted(r.name());
          }
          default -> throw new UnsupportedOperationException("Unsupported SEXP: " + v);
        };

    return protect ? "PROTECT(%s)".formatted(expr) : expr;
  }
}
