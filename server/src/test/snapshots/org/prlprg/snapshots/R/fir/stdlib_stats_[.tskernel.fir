fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2456338378;
    st `[.tskernel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2456338378(k, i) {
  (reg k:*, reg i:*) -+> V { var k:*, var i:*, reg k1:*, reg k2:V, reg c:L, reg k4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg k5:*, reg k6:V, reg c1:L, reg k8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg dx10:V, reg r4:V, reg m1:*, reg m2:V, reg r5:V, reg m3:*, reg m4:V, reg r6:V, reg c3:cls, reg r7:V, reg __:cls, reg r8:V, reg y:*, reg y1:V, reg c4:L, reg y3:V, reg dr6:V, reg dc3:L, reg dx11:V, reg dx12:V, reg i1:*, reg i2:V, reg m5:*, reg m6:V, reg r9:V, reg __1:cls, reg r10:V |
    mkenv;
    st k = k;
    st i = i;
    k1 = ld k;
    check L3() else D0();
  D0():
    deopt 0 [k1];
  L3():
    k2 = force? k1;
    checkMissing(k2);
    c = `is.object`(k2);
    if c then L5() else L6(k2);
  L4(dx1):
    r1 = `+`(dx1, 1);
    st m1 = r1;
    k5 = ld k;
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("$", k2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(k4):
    r = `$`(k4, <sym m>);
    goto L4(r);
  D1():
    deopt 6 [k5];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    k6 = force? k5;
    checkMissing(k6);
    c1 = `is.object`(k6);
    if c1 then L10() else L11(k6);
  L9(dx3):
    c2 = `is.object`(dx3);
    if c2 then L13() else L14(dx3);
  L10():
    dr2 = tryDispatchBuiltin.1("$", k6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L12() else L11(dr2);
  L11(k8):
    r2 = `$`(k8, <sym coef>);
    goto L9(r2);
  L0(dx7):
    st y = dx7;
    y = ld y;
    check L21() else D5();
  L12():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L13():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L15() else L14(dr4);
  L14(dx5):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  D5():
    deopt 23 [y];
  L1(dx10, r4):
    __ = ldf `[` in base;
    r8 = dyn __(dx10, r4);
    goto L0(r8);
  L15():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L0(dx6);
  L16():
    m1 = ld m1;
    check L18() else D2();
  L17():
    r3 = dyn base(<lang `:`(m1, 2)>, <lang `:`(1, m1)>);
    goto L1(dx5, r3);
  L21():
    y1 = force? y;
    checkMissing(y1);
    c4 = `is.object`(y1);
    if c4 then L22() else L23(y1);
  D2():
    deopt 11 [dx5, m1];
  L2(dx12):
    popenv;
    return dx12;
  L18():
    m2 = force? m1;
    checkMissing(m2);
    r5 = `:`(m2, 2);
    m3 = ld m1;
    check L19() else D3();
  L22():
    dr6 = tryDispatchBuiltin.1("[", y1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L24() else L23(dr6);
  L23(y3):
    i1 = ld i;
    check L25() else D6();
  D3():
    deopt 16 [dx5, 1, m3];
  D6():
    deopt 25 [y3, i1];
  L19():
    m4 = force? m3;
    checkMissing(m4);
    r6 = `:`(1, m4);
    c3 = ldf c in base;
    r7 = dyn c3(r5, r6);
    check L20() else D4();
  L24():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L2(dx11);
  L25():
    i2 = force? i1;
    checkMissing(i2);
    m5 = ld m1;
    check L26() else D7();
  D4():
    deopt 20 [dx5, r7];
  D7():
    deopt 26 [y3, i2, m5];
  L20():
    goto L1(dx5, r7);
  L26():
    m6 = force? m5;
    checkMissing(m6);
    r9 = `+`(i2, m6);
    __1 = ldf `[` in base;
    r10 = dyn __1(y3, r9);
    goto L2(r10);
  }
}