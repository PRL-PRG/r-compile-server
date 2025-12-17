fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg vector:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg lf:*, reg lf1:V, reg r7:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg f:cls, reg i5:*, reg i6:V, reg p:p(V +), reg r9:V, reg l1:*, reg c1:L, reg i8:I, reg r11:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i10:I, reg dx1:V, reg i11:*, reg i12:V, reg ____:cls, reg r14:V, reg lf2:*, reg lf3:V, reg c2:L, reg lf5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r15:V, reg dx4:cls, reg r16:V, reg r17:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg vector1:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg lg:*, reg lg1:V, reg r23:I, reg s1:V, reg l4:I, reg i13:I, reg i14:I, reg i15:I, reg c3:L, reg x1:V, reg g:cls, reg i18:*, reg i19:V, reg p1:p(V +), reg r25:V, reg l5:*, reg c4:L, reg i21:I, reg r27:V, reg l7:*, reg dr4:V, reg dc2:L, reg dx5:V, reg i23:I, reg dx6:V, reg i24:*, reg i25:V, reg ____1:cls, reg r30:V, reg lg2:*, reg lg3:V, reg c5:L, reg lg5:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __1:cls, reg r31:V, reg dx9:cls, reg r32:V, reg r33:cls |
    mkenv;
    r = clos inner2501545716;
    st force = r;
    r1 = clos inner177517877;
    st f = r1;
    sym = ldf vector;
    base = ldf vector in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r3):
    st lf = r3;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L12():
    vector = ldf vector in base;
    r4 = dyn vector("list", 5.0);
    check L14() else D0();
  L13():
    r2 = dyn base("list", 5.0);
    goto L0(r2);
  D0():
    deopt 11 [r4];
  L1(r6):
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L2(i);
  L14():
    goto L0(r4);
  L15():
    lf = ld lf;
    check L17() else D1();
  L16():
    r5 = dyn base1(<sym lf>);
    goto L1(r5);
  D1():
    deopt 14 [lf];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L18() else L4();
  L17():
    lf1 = force? lf;
    checkMissing(lf1);
    r7 = seq_along(lf1);
    goto L1(r7);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    f = ldf f;
    check L19() else D2();
  L18():
    lf2 = ld lf;
    check L25() else D5();
  D2():
    deopt 18 [i2];
  D5():
    deopt 29 [lf2];
  L19():
    p = prom<V +>{
      i5 = ld i;
      i6 = force? i5;
      checkMissing(i6);
      return i6;
    };
    r9 = dyn f(p);
    check L20() else D3();
  L25():
    lf3 = force? lf2;
    checkMissing(lf3);
    c2 = `is.object`(lf3);
    if c2 then L26() else L27(lf3);
  D3():
    deopt 20 [i2, r9];
  L5(dx3):
    checkFun.0(dx3);
    dx4 = dx3 as cls;
    r16 = dyn dx4();
    check L29() else D6();
  L20():
    l1 = ld lf;
    c1 = `is.object`(l1);
    if c1 then L21() else L22(i2, r9, l1);
  L26():
    dr2 = tryDispatchBuiltin.1("[[", lf3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(lf5):
    __ = ldf `[[` in base;
    r15 = dyn __(lf5, 1.0);
    goto L5(r15);
  D6():
    deopt 35 [r16];
  L3(i10, dx1):
    st lf = dx1;
    goto L2(i10);
  L21():
    dr = tryDispatchBuiltin.0("[[<-", l1, r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(i2, r9, dr);
  L22(i8, r11, l3):
    i11 = ld i;
    check L24() else D4();
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L29():
    r17 = clos inner177517877;
    st g = r17;
    sym2 = ldf vector;
    base2 = ldf vector in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D4():
    deopt 22 [i8, r11, l3, r9, i11];
  L6(r19):
    st lg = r19;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L24():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r14 = dyn ____(l3, r9, i12);
    goto L3(i8, r14);
  L30():
    vector1 = ldf vector in base;
    r20 = dyn vector1("list", 5.0);
    check L32() else D7();
  L31():
    r18 = dyn base2("list", 5.0);
    goto L6(r18);
  D7():
    deopt 44 [r20];
  L7(r22):
    s1 = toForSeq(r22);
    l4 = length(s1);
    i13 = 0;
    goto L8(i13);
  L32():
    goto L6(r20);
  L33():
    lg = ld lg;
    check L35() else D8();
  L34():
    r21 = dyn base3(<sym lg>);
    goto L7(r21);
  D8():
    deopt 47 [lg];
  L8(i14):
    i15 = `+`.1(i14, 1);
    c3 = `<`.1(l4, i15);
    if c3 then L36() else L10();
  L35():
    lg1 = force? lg;
    checkMissing(lg1);
    r23 = seq_along(lg1);
    goto L7(r23);
  L10():
    x1 = `[[`(s1, i15, NULL, TRUE);
    st i = x1;
    g = ldf g;
    check L37() else D9();
  L36():
    lg2 = ld lg;
    check L43() else D12();
  D9():
    deopt 51 [i15];
  D12():
    deopt 62 [lg2];
  L37():
    p1 = prom<V +>{
      i18 = ld i;
      i19 = force? i18;
      checkMissing(i19);
      return i19;
    };
    r25 = dyn g(p1);
    check L38() else D10();
  L43():
    lg3 = force? lg2;
    checkMissing(lg3);
    c5 = `is.object`(lg3);
    if c5 then L44() else L45(lg3);
  D10():
    deopt 53 [i15, r25];
  L11(dx8):
    checkFun.0(dx8);
    dx9 = dx8 as cls;
    r32 = dyn dx9();
    check L47() else D13();
  L38():
    l5 = ld lg;
    c4 = `is.object`(l5);
    if c4 then L39() else L40(i15, r25, l5);
  L44():
    dr6 = tryDispatchBuiltin.1("[[", lg3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L46() else L45(dr6);
  L45(lg5):
    __1 = ldf `[[` in base;
    r31 = dyn __1(lg5, 1.0);
    goto L11(r31);
  D13():
    deopt 68 [r32];
  L9(i23, dx6):
    st lg = dx6;
    goto L8(i23);
  L39():
    dr4 = tryDispatchBuiltin.0("[[<-", l5, r25);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(i15, r25, dr4);
  L40(i21, r27, l7):
    i24 = ld i;
    check L42() else D11();
  L46():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx7);
  L47():
    r33 = clos inner177517877;
    st g = r33;
    invisible.0();
    popenv;
    return r33;
  D11():
    deopt 55 [i21, r27, l7, r25, i24];
  L41():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L9(i15, dx5);
  L42():
    i25 = force? i24;
    ____1 = ldf `[[<-` in base;
    r30 = dyn ____1(l7, r25, i25);
    goto L9(i21, r30);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}
fun inner177517877(y) {
  (reg y:*) -+> V { var y:*, reg r:cls |
    mkenv;
    st y = y;
    r = clos inner2708337952;
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg y:*, reg y1:V |
    mkenv;
    y = ld y;
    check L0() else D0();
  D0():
    deopt 0 [y];
  L0():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}