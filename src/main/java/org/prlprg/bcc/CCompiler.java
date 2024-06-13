package org.prlprg.bcc;

import org.prlprg.bc.Bc;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.ConstPool;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXP;

import java.io.PrintWriter;
import java.io.Writer;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

record Constant(int id, SEXP value) {
}

class CSection {
    private final List<String> body = new ArrayList<>();

    public void line(String f, Object ... args) {
        body.add(f.formatted(args));
    }

    public void writeTo(Writer w) {
        var pw = new PrintWriter(w);
        body.forEach(pw::println);
    }

    public void comment(String comment) {
        body.add("// " + comment);
    }

    public void nl() {
        body.add("");
    }
}

class CFunction {
    private final String name;
    private final List<CSection> sections = new ArrayList<>();

    CFunction(String name) {
        this.name = name;
    }

    public CSection add() {
        var s = new CSection();
        sections.add(s);
        return s;
    }

    public void writeTo(Writer w) {
        var pw = new PrintWriter(w);
        pw.format("SEXP %s(SEXP %s) {", name, CCompiler.NAME_ENV);
        pw.println();
        for (int i=0; i<sections.size(); i++) {
            sections.get(i).writeTo(w);
            if (i < sections.size()-1) {
                pw.println();
            }
        }
        pw.println("}");
        pw.flush();
    }

    public CSection insertAbove(CSection sec) {
        var i = sections.indexOf(sec);
        if (i == -1) {
            throw new IllegalArgumentException("Section "+sec+" does not exist in fun "+this);
        }
        var s = new CSection();
        sections.add(i, s);
        return s;
    }
}

// point the stack to one before the top
class Stack {
    private int max = 0;
    private int curr = -1;

    public int inc() {
        curr++;
        max = Math.max(max, curr);
        return curr;
    }


    public int dec() {
        return --curr;
    }

    public int curr() {
        return curr;
    }

    public int max() {
        return max;
    }

    public int getAndInc() {
        var x = curr;
        inc();
        return x;
    }
}

public class CCompiler {
    static final String NAME_ENV = "ENV";
    static final String NAME_CP = "CP";
    private final Bc bc;
  private final Map<Integer, Constant> constants = new HashMap<>();
  private final Stack stack = new Stack();

  private final CFile file;
  private CFunction fun;
  private CSection body;

  public CCompiler(Bc bc) {
    this.bc = bc;
    this.file = new CFile();
    this.fun = file.createFun("jit_f");
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
            // from C stdlib
            #define NULL ((void*)0)
            
            // from R        
            typedef struct SEXPREC SEXPREC;
            typedef SEXPREC *SEXP;

            SEXP Rf_install(const char*);            
            SEXP Rf_protect(SEXP);
            void Rf_unprotect(int);
            #define PROTECT(s)	Rf_protect(s)
            #define UNPROTECT(n)	Rf_unprotect(n)
            SEXP Rf_ScalarInteger(int x);
            SEXP Rf_ScalarReal(int x);
            SEXP Rf_findVar(SEXP, SEXP);
            void Rf_defineVar(SEXP, SEXP, SEXP);            
            
            // from Rsh
            typedef enum {
                ADD
            } BINARY_OP;
            
            SEXP Rhs_fast_binary(BINARY_OP, SEXP, SEXP);
            inline SEXP Rsh_getvar(SEXP, SEXP) {
            	if (type == PROMSXP) {						
            	      SEXP pv = PRVALUE(value);				
            	    if (pv != R_UnboundValue) {				
            		value = pv;						
            		type = TYPEOF(value);					
            	    }								
            	}								
            
            }
        """);
    }

    private void compileRegisters() {
      var sec = fun.insertAbove(body);
      var line = IntStream.rangeClosed(0, stack.max())
                .mapToObj("_%d = NULL"::formatted)
                .collect(Collectors.joining(", ", "SEXP ", ";"));
      sec.line(line);
    }

    private void compileConstantPool() {
      var sec = fun.insertAbove(body);
      var cp = IntStream.range(0, constants.size())
              .mapToObj(ignored -> "NULL")
              .collect(Collectors.joining(", ", "SEXP %s[] = {".formatted(NAME_CP), "};"));
      sec.line(cp);
    }

    private void compile(BcInstr instr) {
      // TODO: comment
        body.comment("begin: " + instr);
        switch (instr) {
            case BcInstr.SetVar(var idx) -> compileSetVar(idx);
            case BcInstr.LdConst(var idx) -> compilerLdConst(idx);
            case BcInstr.GetVar(var idx) -> compileGetVar(idx);
            case BcInstr.Add(var ignored) -> compileAdd();
            case BcInstr.Return() -> compileReturn();
            case BcInstr.Pop() -> pop(1);

            default ->throw new UnsupportedOperationException(instr + ": not supported");
        }
        body.comment("end: " + instr);
        body.nl();
    }

    private void compileSetVar(ConstPool.Idx<RegSymSXP> idx) {
        body.line("Rf_defineVar(%s, _%d, %s)".formatted(constant(idx), stack.curr(), NAME_ENV));
    }

    private void compileReturn() {
      pop(1);
      assert stack.curr() == -1;
      body.line("return _%d;", stack.curr()+1);
    }

    private void compileAdd() {
      pop(2);
      push("Rsh_fast_binary(ADD, _%d, _%d)".formatted(stack.curr()+2, stack.curr()+1));
    }

    private void pop(int n) {
        for (int i=0; i<n; i++) {
            body.line("UNPROTECT(1); // _%d".formatted(stack.curr()));
            stack.dec();
        }
    }

    private void compileGetVar(ConstPool.Idx<RegSymSXP> idx) {
        push(findVar(constant(idx)));
    }

    private String findVar(String expr) {
        return "Rf_findVar(%s, %s)".formatted(expr, NAME_ENV);
    }

    private void compilerLdConst(ConstPool.Idx<SEXP> idx) {
        push(constant(idx));
    }

    private void push(String expr) {
      body.line("_%d = PROTECT(%s);", stack.inc(), expr);
    }

    private String constant(ConstPool.Idx<? extends SEXP> idx) {
      var c = constants.computeIfAbsent(idx.idx(), ignored -> {
          var next = constants.size();
          return new Constant(next, bc.consts().get(idx));
      });

      var cp = "%s[%d]".formatted(NAME_CP, c.id());
      var init = sexp(bc.consts().get(idx));
      return "%s == NULL ? %s : %s".formatted(cp, init, cp);
    }

    private String sexp(SEXP v) {
      var protect = true;
      var expr = switch (v) {
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
