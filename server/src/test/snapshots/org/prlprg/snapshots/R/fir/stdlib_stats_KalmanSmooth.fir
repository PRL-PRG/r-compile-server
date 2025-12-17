fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4264800991;
    st KalmanSmooth = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4264800991(y, mod, nit) {
  (reg y:*, reg mod:*, reg nit:*) -+> V { var y:*, var mod:*, var nit:*, reg nit_isMissing:L, reg nit_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_KalmanSmooth:*, reg C_KalmanSmooth1:V, reg y1:*, reg y2:V, reg mod1:*, reg mod2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg C_KalmanSmooth4:V, reg y5:V, reg mod5:V, reg r3:V, reg nit1:*, reg nit2:V, reg as_integer:cls, reg r4:V, reg vargs:dots, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg z:*, reg z1:V, reg c:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg dim:cls, reg r9:V, reg dn:*, reg dn1:V, reg c1:L, reg dn3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg dn6:V, reg r11:V, reg c2:cls, reg r12:V, reg __:cls, reg r13:V, reg l:*, reg c3:L, reg dx6:V, reg l3:*, reg dx7:V, reg l4:*, reg dr4:V, reg dc2:L, reg dx10:V, reg dx11:V, reg l6:*, reg dx12:V, reg dx13:V, reg r14:V, reg dim__:cls, reg r15:V, reg c4:L, reg dx15:V, reg l8:*, reg dr6:V, reg dc3:L, reg dx17:V, reg dx19:V, reg r16:V, reg z4:*, reg z5:V |
    mkenv;
    st y = y;
    st mod = mod;
    nit_isMissing = missing.0(nit);
    if nit_isMissing then L0(0) else L0(nit);
  L0(nit_orDefault):
    st nit = nit_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r1):
    st z = r1;
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L6():
    C_KalmanSmooth = ld C_KalmanSmooth;
    check L8() else D0();
  L7():
    r = dyn base(<sym C_KalmanSmooth>, <sym y>, <sym mod>, <lang as.integer(nit)>);
    goto L1(r);
  D0():
    deopt 1 [C_KalmanSmooth];
  L3(r7):
    st dn = r7;
    dn = ld dn;
    check L23() else D7();
  L8():
    C_KalmanSmooth1 = force? C_KalmanSmooth;
    checkMissing(C_KalmanSmooth1);
    y1 = ld y;
    check L9() else D1();
  L15():
    z = ld z;
    check L17() else D5();
  L16():
    r6 = dyn base2(<lang `$`(z, smooth)>);
    goto L3(r6);
  D1():
    deopt 2 [C_KalmanSmooth1, y1];
  D5():
    deopt 14 [z];
  D7():
    deopt 20 [dn];
  L9():
    y2 = force? y1;
    checkMissing(y2);
    mod1 = ld mod;
    check L10() else D2();
  L17():
    z1 = force? z;
    checkMissing(z1);
    c = `is.object`(z1);
    if c then L19() else L20(z1);
  L23():
    dn1 = force? dn;
    checkMissing(dn1);
    c1 = `is.object`(dn1);
    if c1 then L24() else L25(dn1);
  D2():
    deopt 3 [C_KalmanSmooth1, y2, mod1];
  L4(dx3):
    l = ld z;
    c3 = `is.object`(l);
    if c3 then L31() else L32(dx3, l, dx3, l);
  L10():
    mod2 = force? mod1;
    checkMissing(mod2);
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L18(dx1):
    dim = ldf dim in base;
    r9 = dyn dim(dx1);
    check L22() else D6();
  L19():
    dr = tryDispatchBuiltin.1("$", z1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(z3):
    r8 = `$`(z3, <sym smooth>);
    goto L18(r8);
  L24():
    dr2 = tryDispatchBuiltin.1("[", dn1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(dn3):
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  D6():
    deopt 18 [r9];
  L2(C_KalmanSmooth4, y5, mod5, r3):
    vargs = dots[y5, mod5, r3];
    r5 = `.Call`(C_KalmanSmooth4, vargs, <missing>);
    goto L1(r5);
  L5(dn6, r11):
    __ = ldf `[` in base;
    r13 = dyn __(dn6, r11);
    goto L4(r13);
  L11():
    nit1 = ld nit;
    check L13() else D3();
  L12():
    r2 = dyn base1(<sym nit>);
    goto L2(C_KalmanSmooth1, y2, mod2, r2);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    goto L3(r9);
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L27():
    c2 = ldf c in base;
    r12 = dyn c2(1, 2, 2);
    check L29() else D8();
  L28():
    r10 = dyn base3(1, 2, 2);
    goto L5(dn3, r10);
  L30(dx11, l6, dx12, dx13):
    dim__ = ldf `dim<-`;
    check L34() else D9();
  L31():
    dr4 = tryDispatchBuiltin.1("$", l);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(dx3, l, dx3, dr4);
  L32(dx6, l3, dx7, l4):
    r14 = `$`(l4, <sym var>);
    goto L30(dx6, l3, dx7, r14);
  D3():
    deopt 6 [C_KalmanSmooth1, y2, mod2, nit1];
  D8():
    deopt 28 [dn3, r12];
  D9():
    deopt 34 [dx11, l6, dx13, dx12];
  L13():
    nit2 = force? nit1;
    checkMissing(nit2);
    as_integer = ldf `as.integer` in base;
    r4 = dyn as_integer(nit2);
    check L14() else D4();
  L29():
    goto L5(dn3, r12);
  L33():
    dx10 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx3, l, dx3, dx10);
  L34():
    r15 = dyn dim__(dx13, NULL, dx12);
    check L35() else D10();
  D4():
    deopt 9 [C_KalmanSmooth1, y2, mod2, r4];
  D10():
    deopt 36 [dx11, l6, r15];
  L14():
    goto L2(C_KalmanSmooth1, y2, mod2, r4);
  L35():
    c4 = `is.object`(l6);
    if c4 then L37() else L38(dx11, l6);
  L36(dx19):
    st z = dx19;
    z4 = ld z;
    check L40() else D11();
  L37():
    dr6 = tryDispatchBuiltin.0("$<-", l6, r15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L39() else L38(dx11, dr6);
  L38(dx15, l8):
    r16 = `$<-`(l8, <sym var>, r15);
    goto L36(r16);
  D11():
    deopt 39 [z4];
  L39():
    dx17 = getTryDispatchBuiltinValue(dr6);
    goto L36(dx17);
  L40():
    z5 = force? z4;
    checkMissing(z5);
    popenv;
    return z5;
  }
}