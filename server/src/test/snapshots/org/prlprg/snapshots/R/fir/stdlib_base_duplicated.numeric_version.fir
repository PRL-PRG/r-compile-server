fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3117001256;
    st `duplicated.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3117001256(x, incomparables, `...`) {
  (reg x:*, reg incomparables:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg lengths:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg lens:*, reg lens1:V, reg max:cls, reg r7:V, reg lens2:*, reg lens3:V, reg r8:V, reg which:cls, reg lens4:*, reg lens5:V, reg r9:V, reg need:*, reg need1:V, reg r10:V, reg r11:V, reg p1:p(V +), reg r13:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg i7:I, reg r15:V, reg x6:*, reg x7:V, reg c1:L, reg i9:I, reg x9:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg i12:*, reg i13:V, reg __:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg i16:I, reg r18:V, reg need2:*, reg need3:V, reg c2:L, reg i18:I, reg need5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg i21:*, reg i22:V, reg __1:cls, reg r19:V, reg rep_int:cls, reg r20:V, reg c3:cls, reg r21:V, reg l1:*, reg c4:L, reg i24:I, reg r23:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i26:I, reg dx5:V, reg i27:*, reg i28:V, reg ____:cls, reg r26:V, reg NextMethod:cls, reg r27:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    st `...` = ddd;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    st x = r1;
    lengths = ldf lengths;
    check L14() else D2();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [];
  L12():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L13() else D1();
  L14():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn lengths[, `use.names`](p, FALSE);
    check L15() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 12 [r4];
  L13():
    goto L1(r2);
  L15():
    st lens = r4;
    sym1 = ldf max;
    base1 = ldf max in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L2(r6):
    lens2 = ld lens;
    check L20() else D6();
  L16():
    lens = ld lens;
    check L18() else D4();
  L17():
    r5 = dyn base1(<sym lens>);
    goto L2(r5);
  D4():
    deopt 16 [lens];
  D6():
    deopt 19 [r6, lens2];
  L18():
    lens1 = force? lens;
    checkMissing(lens1);
    max = ldf max in base;
    r7 = dyn max(lens1);
    check L19() else D5();
  L20():
    lens3 = force? lens2;
    checkMissing(lens3);
    r8 = `-`(r6, lens3);
    st need = r8;
    which = ldf which;
    check L21() else D7();
  D5():
    deopt 19 [r7];
  D7():
    deopt 24 [];
  L19():
    goto L2(r7);
  L21():
    p1 = prom<V +>{
      lens4 = ld lens;
      lens5 = force? lens4;
      checkMissing(lens5);
      r9 = `>`(lens5, 0.0);
      need = ld need;
      need1 = force? need;
      checkMissing(need1);
      r10 = `>`(need1, 0.0);
      r11 = `&&`(r9, r10);
      return r11;
    };
    r13 = dyn which(p1);
    check L22() else D8();
  D8():
    deopt 26 [r13];
  L22():
    s = toForSeq(r13);
    l = length(s);
    i = 0;
    goto L3(i);
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L23() else L9();
  L9():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L23():
    NextMethod = ldf NextMethod;
    check L44() else D16();
  D16():
    deopt 55 [];
  L4(i7, r15):
    l1 = ld x;
    c4 = `is.object`(l1);
    if c4 then L40() else L41(i7, r15, l1);
  L24():
    x6 = ld x;
    check L26() else D9();
  L25():
    r14 = dyn base2(<lang `[[`(x, i)>, <lang rep.int(0, `[`(need, i))>);
    goto L4(i2, r14);
  L44():
    r27 = dyn NextMethod("duplicated");
    check L45() else D17();
  D9():
    deopt 29 [i2, x6];
  D17():
    deopt 57 [r27];
  L8(i26, dx5):
    st x = dx5;
    goto L3(i26);
  L26():
    x7 = force? x6;
    checkMissing(x7);
    c1 = `is.object`(x7);
    if c1 then L27() else L28(i2, x7);
  L40():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r15);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(i7, r15, dr4);
  L41(i24, r23, l3):
    i27 = ld i;
    check L43() else D15();
  L45():
    popenv;
    return r27;
  D15():
    deopt 47 [i24, r23, l3, r15, i27];
  L5(i11, dx1):
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L27():
    dr = tryDispatchBuiltin.1("[[", x7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(i2, dr);
  L28(i9, x9):
    i12 = ld i;
    check L30() else D10();
  L42():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(i7, dx4);
  L43():
    i28 = force? i27;
    ____ = ldf `[[<-` in base;
    r26 = dyn ____(l3, r15, i28);
    goto L8(i24, r26);
  D10():
    deopt 31 [i9, x9, i12];
  L6(i16, r18):
    c3 = ldf c in base;
    r21 = dyn c3(dx1, r18);
    check L39() else D14();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(i2, dx);
  L30():
    i13 = force? i12;
    __ = ldf `[[` in base;
    r16 = dyn __(x9, i13);
    goto L5(i9, r16);
  L31():
    need2 = ld need;
    check L33() else D11();
  L32():
    r17 = dyn base3(0, <lang `[`(need, i)>);
    goto L6(i11, r17);
  D11():
    deopt 37 [i11, need2];
  D14():
    deopt 45 [i16, r21];
  L33():
    need3 = force? need2;
    checkMissing(need3);
    c2 = `is.object`(need3);
    if c2 then L34() else L35(i11, need3);
  L39():
    goto L4(i16, r21);
  L7(i20, dx3):
    rep_int = ldf `rep.int` in base;
    r20 = dyn rep_int(0, dx3);
    check L38() else D13();
  L34():
    dr2 = tryDispatchBuiltin.1("[", need3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(i11, dr2);
  L35(i18, need5):
    i21 = ld i;
    check L37() else D12();
  D12():
    deopt 39 [i18, need5, i21];
  D13():
    deopt 43 [i20, r20];
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i11, dx2);
  L37():
    i22 = force? i21;
    __1 = ldf `[` in base;
    r19 = dyn __1(need5, i22);
    goto L7(i18, r19);
  L38():
    goto L6(i20, r20);
  }
}