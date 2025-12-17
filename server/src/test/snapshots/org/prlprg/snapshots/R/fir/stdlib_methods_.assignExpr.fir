fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3708401697;
    st `.assignExpr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg deparse:cls, reg e1:*, reg e2:V, reg p:p(V +), reg r4:V, reg l:*, reg c:L, reg r6:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg r10:cls, reg e3:*, reg e4:V, reg p1:p(V +), reg r12:V, reg ____:cls, reg r13:V, reg value:*, reg value1:V |
    mkenv;
    st e = e;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st value = r1;
    deparse = ldf deparse;
    check L5() else D1();
  L2():
    list = ldf list in base;
    r2 = dyn list();
    check L4() else D0();
  L3():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 6 [];
  L4():
    goto L0(r2);
  L5():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r4 = dyn deparse[, nlines](p, 1);
    check L6() else D2();
  D2():
    deopt 10 [r4];
  L6():
    l = ld value;
    c = `is.object`(l);
    if c then L7() else L8(r4, l);
  L1(dx1):
    st value = dx1;
    value = ld value;
    check L13() else D6();
  L7():
    dr = tryDispatchBuiltin.0("[[<-", l, r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(r4, dr);
  L8(r6, l2):
    __ = ldf `::`;
    check L10() else D3();
  D3():
    deopt 13 [r6, l2, r4];
  D6():
    deopt 22 [value];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L10():
    r9 = dyn __("codetools", "getAssignedVar");
    check L11() else D4();
  L13():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D4():
    deopt 16 [r6, l2, r4, r9];
  L11():
    checkFun.0(r9);
    r10 = r9 as cls;
    p1 = prom<V +>{
      e3 = ld e;
      e4 = force? e3;
      checkMissing(e4);
      return e4;
    };
    r12 = dyn r10(p1);
    check L12() else D5();
  D5():
    deopt 19 [r6, l2, r4, r12];
  L12():
    ____ = ldf `[[<-` in base;
    r13 = dyn ____(l2, r4, r12);
    goto L1(r13);
  }
}