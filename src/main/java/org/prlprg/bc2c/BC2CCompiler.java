package org.prlprg.bc2c;

import java.text.MessageFormat;
import java.util.HashMap;
import java.util.List;
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
  private static final String CONST_GET = "CONST";

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
    file.setPreamble(MessageFormat.format("""
        #include <Rsh.h>
        
        // constant pool accessor
        #define {0}(i)        ((SEXP *) STDVEC_DATAPTR(_CP))[i]
        """, CONST_GET));
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

    return "%s(%d)".formatted(CONST_GET, c.id());
  }
}
