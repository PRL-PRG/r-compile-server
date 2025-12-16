fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1411039386`;
    st `.factor` = r;
    st length = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1411039386`(x, value) {
  (reg x:*, reg value:*) -+> V { var x:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg class:cls, reg r2:V, reg levels:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg NextMethod:cls, reg r5:V, reg structure:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg levs:*, reg levs1:V, reg p2:p(V +), reg cl:*, reg cl1:V, reg p3:p(V +), reg r9:V |
    mkenv;
    st x = x;
    st value = value;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st cl = r1;
    levels = ldf levels;
    check L5() else D2();
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    class = ldf class in base;
    r2 = dyn class(x2);
    check L4() else D1();
  L5():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn levels(p);
    check L6() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r4];
  L4():
    goto L0(r2);
  L6():
    st levs = r4;
    NextMethod = ldf NextMethod;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    r5 = dyn NextMethod();
    check L8() else D5();
  D5():
    deopt 14 [r5];
  L8():
    st x = r5;
    structure = ldf structure;
    check L9() else D6();
  D6():
    deopt 17 [];
  L9():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      levs = ld levs;
      levs1 = force? levs;
      checkMissing(levs1);
      return levs1;
    };
    p3 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    r9 = dyn structure[, levels, class](p1, p2, p3);
    check L10() else D7();
  D7():
    deopt 23 [r9];
  L10():
    popenv;
    return r9;
  }
}