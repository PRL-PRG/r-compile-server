fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3773442701;
    st specialOpLocs = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3773442701(text) {
  (reg text:*) -+> V { var text:*, reg sapply:cls, reg specialOps:*, reg specialOps1:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V, reg sapply1:cls, reg ge:*, reg ge1:V, reg p2:p(V +), reg tail_default:*, reg tail_default1:V, reg p3:p(V +), reg r6:V, reg ge2:*, reg ge3:V, reg c:L, reg ge5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ge6:*, reg ge7:V, reg r7:V, reg __:cls, reg r8:V |
    mkenv;
    st text = text;
    sapply = ldf sapply;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      specialOps = ld specialOps;
      specialOps1 = force? specialOps;
      checkMissing(specialOps1);
      return specialOps1;
    };
    p1 = prom<V +>{
      r1 = clos inner1236783023;
      return r1;
    };
    r3 = dyn sapply[, , simplify](p, p1, FALSE);
    check L2() else D1();
  D1():
    deopt 6 [r3];
  L2():
    st ge = r3;
    sapply1 = ldf sapply;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    p2 = prom<V +>{
      ge = ld ge;
      ge1 = force? ge;
      checkMissing(ge1);
      return ge1;
    };
    p3 = prom<V +>{
      tail_default = ld `tail.default`;
      tail_default1 = force? tail_default;
      checkMissing(tail_default1);
      return tail_default1;
    };
    r6 = dyn sapply1(p2, p3, 1.0);
    check L4() else D3();
  D3():
    deopt 13 [r6];
  L4():
    st ge = r6;
    ge2 = ld ge;
    check L5() else D4();
  D4():
    deopt 15 [ge2];
  L5():
    ge3 = force? ge2;
    checkMissing(ge3);
    c = `is.object`(ge3);
    if c then L6() else L7(ge3);
  L0(dx1):
    st ge = dx1;
    invisible.0();
    popenv;
    return dx1;
  L6():
    dr = tryDispatchBuiltin.1("[", ge3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(ge5):
    ge6 = ld ge;
    check L9() else D5();
  D5():
    deopt 17 [ge5, ge6];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L9():
    ge7 = force? ge6;
    checkMissing(ge7);
    r7 = `>`(ge7, 0.0);
    __ = ldf `[` in base;
    r8 = dyn __(ge5, r7);
    goto L0(r8);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg gregexpr:cls, reg s1:*, reg s2:V, reg p:p(V +), reg text:*, reg text1:V, reg p1:p(V +), reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V |
    mkenv;
    st s = s;
    gregexpr = ldf gregexpr;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    p1 = prom<V +>{
      text = ld text;
      text1 = force? text;
      checkMissing(text1);
      return text1;
    };
    r2 = dyn gregexpr[, , fixed](p, p1, TRUE);
    check L2() else D1();
  D1():
    deopt 6 [r2];
  L2():
    c = `is.object`(r2);
    if c then L3() else L4(r2);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[[", r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r4):
    __ = ldf `[[` in base;
    r5 = dyn __(r4, 1);
    goto L0(r5);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}