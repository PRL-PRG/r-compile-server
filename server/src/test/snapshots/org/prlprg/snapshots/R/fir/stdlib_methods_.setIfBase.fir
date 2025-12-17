fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3143136094;
    st `.setIfBase` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3143136094(f, fdef, mlist) {
  (reg f:*, reg fdef:*, reg mlist:*) -+> V { var f:*, var fdef:*, var mlist:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg f1:*, reg f2:V, reg c:V, reg c1:L, reg __:cls, reg r2:V, reg r3:cls, reg f3:*, reg f4:V, reg p:p(V +), reg r5:V, reg found:*, reg found1:V, reg c2:L, reg __1:cls, reg r6:V, reg r7:cls, reg __2:cls, reg r8:V, reg r9:cls, reg fdef1:*, reg fdef2:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg __3:cls, reg r13:V, reg r14:cls, reg f5:*, reg f6:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg found2:*, reg found3:V |
    mkenv;
    st f = f;
    st fdef = fdef;
    st mlist = mlist;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L7() else L1();
  L4():
    f1 = ld f;
    check L6() else D0();
  L5():
    r = dyn base(<sym f>);
    goto L0(r);
  D0():
    deopt 1 [f1];
  L1():
    __ = ldf `::`;
    check L9() else D1();
  L6():
    f2 = force? f1;
    checkMissing(f2);
    c = `==`(f2, NULL);
    goto L0(c);
  L7():
    popenv;
    return FALSE;
  D1():
    deopt 7 [];
  L9():
    r2 = dyn __("base", "exists");
    check L10() else D2();
  D2():
    deopt 10 [r2];
  L10():
    checkFun.0(r2);
    r3 = r2 as cls;
    p = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r5 = dyn r3(p, "package:base");
    check L11() else D3();
  D3():
    deopt 14 [r5];
  L11():
    st found = r5;
    found = ld found;
    check L12() else D4();
  D4():
    deopt 16 [found];
  L12():
    found1 = force? found;
    checkMissing(found1);
    c2 = `as.logical`(found1);
    if c2 then L13() else L2();
  L2():
    goto L3();
  L3():
    found2 = ld found;
    check L18() else D8();
  L13():
    __1 = ldf `::`;
    check L14() else D5();
  D5():
    deopt 19 [];
  D8():
    deopt 31 [found2];
  L14():
    r6 = dyn __1("base", "assign");
    check L15() else D6();
  L18():
    found3 = force? found2;
    checkMissing(found3);
    popenv;
    return found3;
  D6():
    deopt 22 [r6];
  L15():
    checkFun.0(r6);
    r7 = r6 as cls;
    p2 = prom<V +>{
      __2 = ldf `::`;
      r8 = dyn __2("base", "environment");
      checkFun.0(r8);
      r9 = r8 as cls;
      p1 = prom<V +>{
        fdef1 = ld fdef;
        fdef2 = force? fdef1;
        checkMissing(fdef2);
        return fdef2;
      };
      r11 = dyn r9(p1);
      return r11;
    };
    p4 = prom<V +>{
      __3 = ldf `::`;
      r13 = dyn __3("base", "get");
      checkFun.0(r13);
      r14 = r13 as cls;
      p3 = prom<V +>{
        f5 = ld f;
        f6 = force? f5;
        checkMissing(f6);
        return f6;
      };
      r16 = dyn r14(p3, "package:base");
      return r16;
    };
    r18 = dyn r7[, envir, ](".Methods", p2, p4);
    check L16() else D7();
  D7():
    deopt 28 [r18];
  L16():
    goto L3();
  }
}