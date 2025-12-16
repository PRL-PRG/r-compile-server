fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1010876159;
    st Filter = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1010876159(f, x) {
  (reg f:*, reg x:*) -+> V { var f:*, var x:*, reg match_fun:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg unlist:cls, reg lapply:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg f3:*, reg f4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg as_logical:cls, reg r9:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg which:cls, reg ind:*, reg ind1:V, reg p4:p(V +), reg r11:V, reg __:cls, reg r12:V |
    mkenv;
    st f = f;
    st x = x;
    match_fun = ldf `match.fun`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn match_fun(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st f = r1;
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    st ind = r3;
    x3 = ld x;
    check L9() else D5();
  L4():
    unlist = ldf unlist;
    check L6() else D2();
  L5():
    r2 = dyn base(<lang unlist(lapply(x, f))>);
    goto L0(r2);
  D2():
    deopt 8 [];
  D5():
    deopt 14 [x3];
  L6():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      p2 = prom<V +>{
        f3 = ld f;
        f4 = force? f3;
        checkMissing(f4);
        return f4;
      };
      r6 = dyn lapply(p1, p2);
      return r6;
    };
    r8 = dyn unlist(p3);
    check L7() else D3();
  L9():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L10() else L11(x4);
  D3():
    deopt 10 [r8];
  L1(dx1):
    popenv;
    return dx1;
  L7():
    as_logical = ldf `as.logical` in base;
    r9 = dyn as_logical(r8);
    check L8() else D4();
  L10():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x6):
    which = ldf which;
    check L13() else D6();
  D4():
    deopt 12 [r9];
  D6():
    deopt 17 [x6];
  L8():
    goto L0(r9);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    p4 = prom<V +>{
      ind = ld ind;
      ind1 = force? ind;
      checkMissing(ind1);
      return ind1;
    };
    r11 = dyn which(p4);
    check L14() else D7();
  D7():
    deopt 19 [x6, r11];
  L14():
    __ = ldf `[` in base;
    r12 = dyn __(x6, r11);
    goto L1(r12);
  }
}