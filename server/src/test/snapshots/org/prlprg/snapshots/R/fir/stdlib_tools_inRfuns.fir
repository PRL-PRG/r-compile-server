fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4107366828;
    st inRfuns = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4107366828(syms) {
  (reg syms:*) -+> V { var syms:*, reg Rfuns:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rfuns:*, reg rfuns1:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg inRfunsCrude:cls, reg syms1:*, reg syms2:V, reg p:p(V +), reg r6:V, reg syms3:*, reg syms4:V, reg c1:L, reg syms6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg unmap:cls, reg syms7:*, reg syms8:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg unmap1:cls, reg rfuns2:*, reg rfuns3:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg __:cls, reg r14:V |
    mkenv;
    st syms = syms;
    Rfuns = ldf Rfuns;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn Rfuns();
    check L4() else D1();
  D1():
    deopt 2 [r];
  L4():
    st rfuns = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r2):
    r4 = `==`(r2, 0.0);
    c = `as.logical`(r4);
    if c then L9() else L1();
  L5():
    rfuns = ld rfuns;
    check L7() else D2();
  L6():
    r1 = dyn base(<sym rfuns>);
    goto L0(r1);
  D2():
    deopt 6 [rfuns];
  L1():
    syms3 = ld syms;
    check L13() else D6();
  L7():
    rfuns1 = force? rfuns;
    checkMissing(rfuns1);
    length = ldf length in base;
    r3 = dyn length(rfuns1);
    check L8() else D3();
  L9():
    inRfunsCrude = ldf inRfunsCrude;
    check L10() else D4();
  D3():
    deopt 9 [r3];
  D4():
    deopt 13 [];
  D6():
    deopt 16 [syms3];
  L8():
    goto L0(r3);
  L10():
    p = prom<V +>{
      syms1 = ld syms;
      syms2 = force? syms1;
      checkMissing(syms2);
      return syms2;
    };
    r6 = dyn inRfunsCrude(p);
    check L11() else D5();
  L13():
    syms4 = force? syms3;
    checkMissing(syms4);
    c1 = `is.object`(syms4);
    if c1 then L14() else L15(syms4);
  D5():
    deopt 15 [r6];
  L2(dx1):
    popenv;
    return dx1;
  L11():
    popenv;
    return r6;
  L14():
    dr = tryDispatchBuiltin.1("[", syms4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(syms6):
    _in_ = ldf `%in%`;
    check L17() else D7();
  D7():
    deopt 19 [syms6];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L17():
    p2 = prom<V +>{
      unmap = ldf unmap;
      p1 = prom<V +>{
        syms7 = ld syms;
        syms8 = force? syms7;
        checkMissing(syms8);
        return syms8;
      };
      r8 = dyn unmap(p1);
      return r8;
    };
    p4 = prom<V +>{
      unmap1 = ldf unmap;
      p3 = prom<V +>{
        rfuns2 = ld rfuns;
        rfuns3 = force? rfuns2;
        checkMissing(rfuns3);
        return rfuns3;
      };
      r11 = dyn unmap1(p3);
      return r11;
    };
    r13 = dyn _in_(p2, p4);
    check L18() else D8();
  D8():
    deopt 22 [syms6, r13];
  L18():
    __ = ldf `[` in base;
    r14 = dyn __(syms6, r13);
    goto L2(r14);
  }
}