fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.numeric2roman` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _romans:*, reg _romans1:V, reg names:cls, reg r2:V, reg r3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg as_integer:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg is_na:cls, reg r9:V, reg x5:*, reg x6:V, reg r10:V, reg r11:V, reg x7:*, reg x8:V, reg r12:V, reg r13:V, reg character:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg x9:*, reg x10:V, reg length:cls, reg r16:V, reg p:p(V +), reg r18:V, reg l:*, reg c:L, reg r20:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg ___:cls, reg r23:V, reg vapply:cls, reg x11:*, reg x12:V, reg c1:L, reg x14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg r24:V, reg __:cls, reg r25:V, reg p1:p(V +), reg n2r:*, reg n2r1:V, reg p2:p(V +), reg r28:V, reg l3:*, reg c2:L, reg r30:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind4:*, reg ind5:V, reg r33:V, reg ___1:cls, reg r34:V, reg out:*, reg out1:V |
    mkenv;
    st x = x;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st romaNs = r1;
    r3 = clos inner2148457334;
    st n2r = r3;
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    _romans = ld `.romans`;
    check L7() else D0();
  L6():
    r = dyn base(<sym .romans>);
    goto L0(r);
  D0():
    deopt 2 [_romans];
  L1(r5):
    st x = r5;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L7():
    _romans1 = force? _romans;
    checkMissing(_romans1);
    names = ldf names in base;
    r2 = dyn names(_romans1);
    check L8() else D1();
  L9():
    x1 = ld x;
    check L11() else D2();
  L10():
    r4 = dyn base1(<sym x>);
    goto L1(r4);
  D1():
    deopt 5 [r2];
  D2():
    deopt 12 [x1];
  L2(r8):
    x5 = ld x;
    check L17() else D6();
  L8():
    goto L0(r2);
  L11():
    x2 = force? x1;
    checkMissing(x2);
    as_integer = ldf `as.integer` in base;
    r6 = dyn as_integer(x2);
    check L12() else D3();
  L13():
    x3 = ld x;
    check L15() else D4();
  L14():
    r7 = dyn base2(<sym x>);
    goto L2(r7);
  D3():
    deopt 15 [r6];
  D4():
    deopt 19 [x3];
  D6():
    deopt 22 [r8, x5];
  L12():
    goto L1(r6);
  L15():
    x4 = force? x3;
    checkMissing(x4);
    is_na = ldf `is.na` in base;
    r9 = dyn is_na(x4);
    check L16() else D5();
  L17():
    x6 = force? x5;
    checkMissing(x6);
    r10 = `<=`(x6, 0);
    r11 = `||`(r8, r10);
    x7 = ld x;
    check L18() else D7();
  D5():
    deopt 22 [r9];
  D7():
    deopt 26 [r11, x7];
  L16():
    goto L2(r9);
  L18():
    x8 = force? x7;
    checkMissing(x8);
    r12 = `>=`(x8, 4000);
    r13 = `||`(r11, r12);
    st ind = r13;
    character = ldf character;
    check L19() else D8();
  D8():
    deopt 33 [];
  L19():
    p = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      length = ldf length in base;
      r16 = dyn length(x10);
      goto L0(r16);
    L2():
      r14 = dyn base3(<sym x>);
      goto L0(r14);
    };
    r18 = dyn character(p);
    check L20() else D9();
  D9():
    deopt 35 [r18];
  L20():
    st out = r18;
    l = ld out;
    c = `is.object`(l);
    if c then L21() else L22(NA_LGL, l);
  L3(dx1):
    st out = dx1;
    vapply = ldf vapply;
    check L25() else D11();
  L21():
    dr = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(NA_LGL, dr);
  L22(r20, l2):
    ind = ld ind;
    check L24() else D10();
  D10():
    deopt 40 [r20, l2, NA_LGL, ind];
  D11():
    deopt 45 [];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L24():
    ind1 = force? ind;
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l2, NA_LGL, ind1);
    goto L3(r23);
  L25():
    p1 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c1 = `is.object`(x12);
      if c1 then L1() else L2(x12);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x12);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x14):
      ind2 = ld ind;
      ind3 = force? ind2;
      checkMissing(ind3);
      r24 = `!`(ind3);
      __ = ldf `[` in base;
      r25 = dyn __(x14, r24);
      goto L0(r25);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      n2r = ld n2r;
      n2r1 = force? n2r;
      checkMissing(n2r1);
      return n2r1;
    };
    r28 = dyn vapply(p1, p2, "");
    check L26() else D12();
  D12():
    deopt 49 [r28];
  L26():
    l3 = ld out;
    c2 = `is.object`(l3);
    if c2 then L27() else L28(r28, l3);
  L4(dx5):
    st out = dx5;
    out = ld out;
    check L31() else D14();
  L27():
    dr4 = tryDispatchBuiltin.0("[<-", l3, r28);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(r28, dr4);
  L28(r30, l5):
    ind4 = ld ind;
    check L30() else D13();
  D13():
    deopt 51 [r30, l5, r28, ind4];
  D14():
    deopt 56 [out];
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L30():
    ind5 = force? ind4;
    checkMissing(ind5);
    r33 = `!`(ind5);
    ___1 = ldf `[<-` in base;
    r34 = dyn ___1(l5, r28, r33);
    goto L4(r34);
  L31():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  }
}
fun inner2148457334(z) {
  (reg z:*) -+> V { var z:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg _romans:*, reg _romans1:V, reg r3:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg _romans2:*, reg _romans3:V, reg c1:L, reg i6:I, reg _romans5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r4:V, reg i11:I, reg z1:*, reg z2:V, reg d:*, reg d1:V, reg r5:V, reg c2:L, reg z3:*, reg z4:V, reg d2:*, reg d3:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg i16:I, reg r8:V, reg y:*, reg y1:V, reg romaNs:*, reg romaNs1:V, reg c3:L, reg i18:I, reg romaNs3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg dx3:V, reg i21:*, reg i22:V, reg __1:cls, reg r9:V, reg c4:cls, reg r10:V, reg paste:cls, reg y2:*, reg y3:V, reg p:p(V +), reg r12:V |
    mkenv;
    st z = z;
    character = ldf character;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    r = dyn character();
    check L9() else D1();
  D1():
    deopt 2 [r];
  L9():
    st y = r;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r2):
    s = toForSeq(r2);
    l = length(s);
    i = 0;
    goto L1(i);
  L10():
    _romans = ld `.romans`;
    check L12() else D2();
  L11():
    r1 = dyn base(<sym .romans>);
    goto L0(r1);
  D2():
    deopt 5 [_romans];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L13() else L7();
  L12():
    _romans1 = force? _romans;
    checkMissing(_romans1);
    r3 = seq_along(_romans1);
    goto L0(r3);
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    _romans2 = ld `.romans`;
    check L14() else D3();
  L13():
    paste = ldf paste;
    check L34() else D13();
  D3():
    deopt 8 [i2, _romans2];
  D13():
    deopt 42 [];
  L14():
    _romans3 = force? _romans2;
    checkMissing(_romans3);
    c1 = `is.object`(_romans3);
    if c1 then L15() else L16(i2, _romans3);
  L34():
    p = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r12 = dyn paste[, collapse](p, "");
    check L35() else D14();
  D14():
    deopt 46 [r12];
  L2(i8, dx1):
    st d = dx1;
    goto L6(i8);
  L15():
    dr = tryDispatchBuiltin.1("[[", _romans3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(i2, dr);
  L16(i6, _romans5):
    i9 = ld i;
    check L18() else D4();
  L35():
    popenv;
    return r12;
  D4():
    deopt 10 [i6, _romans5, i9];
  L6(i11):
    z1 = ld z;
    check L19() else D5();
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L18():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r4 = dyn __(_romans5, i10);
    goto L2(i6, r4);
  D5():
    deopt 14 [i11, z1];
  L19():
    z2 = force? z1;
    checkMissing(z2);
    d = ld d;
    check L20() else D6();
  D6():
    deopt 15 [i11, z2, d];
  L20():
    d1 = force? d;
    checkMissing(d1);
    r5 = `>=`(z2, d1);
    c2 = `as.logical`(r5);
    if c2 then L21() else L3();
  L3():
    goto L1(i11);
  L21():
    z3 = ld z;
    check L22() else D7();
  D7():
    deopt 18 [i11, z3];
  L22():
    z4 = force? z3;
    checkMissing(z4);
    d2 = ld d;
    check L23() else D8();
  D8():
    deopt 19 [i11, z4, d2];
  L23():
    d3 = force? d2;
    checkMissing(d3);
    r6 = `-`(z4, d3);
    st z = r6;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L4(i16, r8):
    st y = r8;
    goto L6(i16);
  L24():
    y = ld y;
    check L26() else D9();
  L25():
    r7 = dyn base1(<sym y>, <lang `[`(romaNs, i)>);
    goto L4(i11, r7);
  D9():
    deopt 25 [i11, y];
  L26():
    y1 = force? y;
    checkMissing(y1);
    romaNs = ld romaNs;
    check L27() else D10();
  D10():
    deopt 27 [i11, romaNs];
  L27():
    romaNs1 = force? romaNs;
    checkMissing(romaNs1);
    c3 = `is.object`(romaNs1);
    if c3 then L28() else L29(i11, romaNs1);
  L5(i20, dx3):
    c4 = ldf c in base;
    r10 = dyn c4(y1, dx3);
    check L32() else D12();
  L28():
    dr2 = tryDispatchBuiltin.1("[", romaNs1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(i11, dr2);
  L29(i18, romaNs3):
    i21 = ld i;
    check L31() else D11();
  D11():
    deopt 29 [i18, romaNs3, i21];
  D12():
    deopt 33 [i20, r10];
  L30():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i11, dx2);
  L31():
    i22 = force? i21;
    __1 = ldf `[` in base;
    r9 = dyn __1(romaNs3, i22);
    goto L5(i18, r9);
  L32():
    goto L4(i20, r10);
  }
}