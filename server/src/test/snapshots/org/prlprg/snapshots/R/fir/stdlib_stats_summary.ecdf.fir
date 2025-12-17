fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.ecdf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg eval:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg expression:cls, reg r4:V, reg p:p(V +), reg environment:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg length:cls, reg r10:V, reg paste:cls, reg n:*, reg n1:V, reg p3:p(V +), reg r12:V, reg structure:cls, reg summary:cls, reg knots:cls, reg object3:*, reg object4:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg ddd1:dots?, reg r16:V, reg p6:p(V +), reg header:*, reg header1:V, reg p7:p(V +), reg r19:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st n = r1;
    paste = ldf paste;
    check L6() else D3();
  L1():
    eval = ldf eval;
    check L3() else D0();
  L2():
    r = dyn base(<lang eval(expression(x), envir=environment(object))>);
    goto L0(r);
  D0():
    deopt 3 [];
  D3():
    deopt 12 [];
  L3():
    p = prom<V +>{
      sym1 = ldf expression;
      base1 = ldf expression in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      expression = ldf expression in base;
      r4 = dyn expression(<sym x>);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym x>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r7 = dyn environment(p1);
      return r7;
    };
    r9 = dyn eval[, envir](p, p2);
    check L4() else D1();
  L6():
    p3 = prom<V +>{
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      return n1;
    };
    r12 = dyn paste("Empirical CDF:\t ", p3, "unique values with summary\n");
    check L7() else D4();
  D1():
    deopt 7 [r9];
  D4():
    deopt 16 [r12];
  L4():
    length = ldf length in base;
    r10 = dyn length(r9);
    check L5() else D2();
  L7():
    st header = r12;
    structure = ldf structure;
    check L8() else D5();
  D2():
    deopt 9 [r10];
  D5():
    deopt 19 [];
  L5():
    goto L0(r10);
  L8():
    p6 = prom<V +>{
      summary = ldf summary;
      p5 = prom<V +>{
        knots = ldf knots;
        p4 = prom<V +>{
          object3 = ld object;
          object4 = force? object3;
          checkMissing(object4);
          return object4;
        };
        r14 = dyn knots(p4);
        return r14;
      };
      ddd1 = ld `...`;
      r16 = dyn summary[, `...`](p5, ddd1);
      return r16;
    };
    p7 = prom<V +>{
      header = ld header;
      header1 = force? header;
      checkMissing(header1);
      return header1;
    };
    r19 = dyn structure[, header, class](p6, p7, "summary.ecdf");
    check L9() else D6();
  D6():
    deopt 25 [r19];
  L9():
    popenv;
    return r19;
  }
}