fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1411039386`;
    st `.factor` = r;
    st `is.na` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1411039386`(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg levels:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg oldClass:cls, reg r4:V, reg l:*, reg class__:cls, reg r5:V, reg l1:*, reg c:L, reg r7:L, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg value1:*, reg value2:V, reg ___:cls, reg r10:V, reg structure:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg lx:*, reg lx1:V, reg p2:p(V +), reg cx:*, reg cx1:V, reg p3:p(V +), reg r14:V |
    mkenv;
    st x = x;
    st value = value;
    levels = ldf levels;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn levels(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st lx = r1;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    st cx = r3;
    l = ld x;
    class__ = ldf `class<-`;
    check L8() else D4();
  L4():
    x3 = ld x;
    check L6() else D2();
  L5():
    r2 = dyn base(<sym x>);
    goto L0(r2);
  D2():
    deopt 7 [x3];
  D4():
    deopt 15 [NULL, l, NULL];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    oldClass = ldf oldClass in base;
    r4 = dyn oldClass(x4);
    check L7() else D3();
  L8():
    r5 = dyn class__(l, NULL, NULL);
    check L9() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 17 [NULL, r5];
  L7():
    goto L0(r4);
  L9():
    st x = r5;
    l1 = ld x;
    c = `is.object`(l1);
    if c then L10() else L11(NA_LGL, l1);
  L1(dx1):
    st x = dx1;
    structure = ldf structure;
    check L14() else D7();
  L10():
    dr = tryDispatchBuiltin.0("[<-", l1, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(NA_LGL, dr);
  L11(r7, l3):
    value1 = ld value;
    check L13() else D6();
  D6():
    deopt 22 [r7, l3, NA_LGL, value1];
  D7():
    deopt 27 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    value2 = force? value1;
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l3, NA_LGL, value2);
    goto L1(r10);
  L14():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      lx = ld lx;
      lx1 = force? lx;
      checkMissing(lx1);
      return lx1;
    };
    p3 = prom<V +>{
      cx = ld cx;
      cx1 = force? cx;
      checkMissing(cx1);
      return cx1;
    };
    r14 = dyn structure[, levels, class](p1, p2, p3);
    check L15() else D8();
  D8():
    deopt 33 [r14];
  L15():
    popenv;
    return r14;
  }
}