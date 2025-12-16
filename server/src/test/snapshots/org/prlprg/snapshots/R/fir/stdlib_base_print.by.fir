fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1555278527;
    st `print.by` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1555278527(x, `...`, vsep) {
  (reg x:*, reg ddd:dots, reg vsep:*) -+> V { var x:*, var `...`:dots?, var vsep:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg dimnames:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg dn:*, reg dn1:V, reg names:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c:L, reg strrep:cls, reg getOption:cls, reg r12:V, reg r13:V, reg p:p(V +), reg r15:V, reg lapply:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg x5:*, reg x6:V, reg r19:I, reg p1:p(V +), reg r21:cls, reg p2:p(V +), reg x7:*, reg x8:V, reg p3:p(V +), reg vsep1:*, reg vsep2:V, reg p4:p(V +), reg ddd1:dots?, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg x9:*, reg x10:V, reg invisible:cls, reg r28:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    st vsep = vsep;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st d = r1;
    sym1 = ldf dimnames;
    base1 = ldf dimnames in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    st dn = r4;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L10() else D1();
  L11():
    x3 = ld x;
    check L13() else D2();
  L12():
    r3 = dyn base1(<sym x>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [x3];
  L2(r7):
    st dnn = r7;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L10():
    goto L0(r2);
  L13():
    x4 = force? x3;
    checkMissing(x4);
    dimnames = ldf dimnames in base;
    r5 = dyn dimnames(x4);
    check L14() else D3();
  L15():
    dn = ld dn;
    check L17() else D4();
  L16():
    r6 = dyn base2(<sym dn>);
    goto L2(r6);
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [dn];
  L3(r10):
    c = `as.logical`(r10);
    if c then L21() else L4();
  L14():
    goto L1(r5);
  L17():
    dn1 = force? dn;
    checkMissing(dn1);
    names = ldf names in base;
    r8 = dyn names(dn1);
    check L18() else D5();
  L19():
    missing = ldf missing in base;
    r11 = dyn missing(<sym vsep>);
    goto L3(r11);
  L20():
    r9 = dyn base3(<sym vsep>);
    goto L3(r9);
  D5():
    deopt 19 [r8];
  L4():
    goto L5();
  L5():
    lapply = ldf lapply;
    check L25() else D8();
  L18():
    goto L2(r8);
  L21():
    strrep = ldf strrep;
    check L22() else D6();
  D6():
    deopt 25 [];
  D8():
    deopt 33 [];
  L22():
    p = prom<V +>{
      getOption = ldf getOption;
      r12 = dyn getOption("width");
      r13 = `*`(0.75, r12);
      return r13;
    };
    r15 = dyn strrep("-", p);
    check L23() else D7();
  L25():
    p1 = prom<V +>{
      sym4 = ldf seq_along;
      base4 = ldf seq_along in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      r19 = seq_along(x6);
      goto L0(r19);
    L2():
      r17 = dyn base4(<sym x>);
      goto L0(r17);
    };
    p2 = prom<V +>{
      r21 = clos `inner-1026457152`;
      return r21;
    };
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p4 = prom<V +>{
      vsep1 = ld vsep;
      vsep2 = force? vsep1;
      checkMissing(vsep2);
      return vsep2;
    };
    ddd1 = ld `...`;
    r25 = dyn lapply[X, FUN, , , `...`](p1, p2, p3, p4, ddd1);
    check L26() else D9();
  D7():
    deopt 28 [r15];
  D9():
    deopt 41 [r25];
  L23():
    st vsep = r15;
    goto L5();
  L26():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L27() else L28();
  L6(r27):
    popenv;
    return r27;
  L27():
    x9 = ld x;
    check L29() else D10();
  L28():
    r26 = dyn base5(<sym x>);
    goto L6(r26);
  D10():
    deopt 44 [x9];
  L29():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r28 = dyn invisible(x10);
    check L30() else D11();
  D11():
    deopt 47 [r28];
  L30():
    goto L6(r28);
  }
}
fun `inner-1026457152`(i, x, vsep, `...`) {
  (reg i:*, reg x:*, reg vsep:*, reg ddd:dots) -+> V { var i:*, var x:*, var vsep:*, var `...`:dots?, reg i1:*, reg i2:V, reg r:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg c5:L, reg r2:V, reg vsep1:*, reg vsep2:V, reg c6:V, reg r3:V, reg c7:L, reg c8:V, reg c10:L, reg cat:cls, reg vsep3:*, reg vsep4:V, reg p:p(V +), reg r5:V, reg i3:*, reg i4:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg dn:*, reg dn1:V, reg r10:I, reg s:V, reg l:I, reg i5:I, reg i6:I, reg i7:I, reg c11:L, reg x1:V, reg ii:*, reg ii1:V, reg d:*, reg d1:V, reg c12:L, reg i11:I, reg d3:V, reg dr:V, reg dc:L, reg dx:V, reg i13:I, reg dx1:V, reg j:*, reg j1:V, reg __:cls, reg r11:V, reg __1:cls, reg r12:V, reg r13:V, reg ii2:*, reg ii3:V, reg d4:*, reg d5:V, reg c13:L, reg i15:I, reg d7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i17:I, reg dx3:V, reg j2:*, reg j3:V, reg __2:cls, reg r14:V, reg ___:cls, reg r15:V, reg cat1:cls, reg dnn:*, reg dnn1:V, reg c14:L, reg dnn3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg j4:*, reg j5:V, reg __3:cls, reg r16:V, reg p1:p(V +), reg dn2:*, reg dn3:V, reg c15:L, reg dn5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg j6:*, reg j7:V, reg __4:cls, reg r18:V, reg c16:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg iii:*, reg iii1:V, reg __5:cls, reg r19:V, reg p2:p(V +), reg r21:V, reg print:cls, reg x2:*, reg x3:V, reg c17:L, reg x5:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg i18:*, reg i19:V, reg __6:cls, reg r22:V, reg p3:p(V +), reg ddd1:dots?, reg r24:V |
    mkenv;
    st i = i;
    st x = x;
    st vsep = vsep;
    st `...` = ddd;
    i1 = ld i;
    check L9() else D0();
  D0():
    deopt 0 [i1];
  L9():
    i2 = force? i1;
    checkMissing(i2);
    r = `!=`(i2, 1);
    c = `as.logical`(r);
    if c then L10() else L0(c);
  L0(c2):
    c10 = `as.logical`(c2);
    if c10 then L15() else L2();
  L10():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(c5, r2):
    r3 = `!`(r2);
    c7 = `as.logical`(r3);
    c8 = `&&`(c5, c7);
    goto L0(c8);
  L2():
    goto L3();
  L3():
    i3 = ld i;
    check L19() else D4();
  L11():
    vsep1 = ld vsep;
    check L13() else D1();
  L12():
    r1 = dyn base(<sym vsep>);
    goto L1(c, r1);
  L15():
    cat = ldf cat;
    check L16() else D2();
  D1():
    deopt 5 [c, vsep1];
  D2():
    deopt 11 [];
  D4():
    deopt 17 [i3];
  L13():
    vsep2 = force? vsep1;
    checkMissing(vsep2);
    c6 = `==`(vsep2, NULL);
    goto L1(c, c6);
  L16():
    p = prom<V +>{
      vsep3 = ld vsep;
      vsep4 = force? vsep3;
      checkMissing(vsep4);
      return vsep4;
    };
    r5 = dyn cat(p, "\n");
    check L17() else D3();
  L19():
    i4 = force? i3;
    checkMissing(i4);
    r7 = `-`(i4, 1);
    st ii = r7;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  D3():
    deopt 14 [r5];
  L4(r9):
    s = toForSeq(r9);
    l = length(s);
    i5 = 0;
    goto L5(i5);
  L17():
    goto L3();
  L20():
    dn = ld dn;
    check L22() else D5();
  L21():
    r8 = dyn base1(<sym dn>);
    goto L4(r8);
  D5():
    deopt 23 [dn];
  L5(i6):
    i7 = `+`.1(i6, 1);
    c11 = `<`.1(l, i7);
    if c11 then L23() else L8();
  L22():
    dn1 = force? dn;
    checkMissing(dn1);
    r10 = seq_along(dn1);
    goto L4(r10);
  L8():
    x1 = `[[`(s, i7, NULL, TRUE);
    st j = x1;
    ii = ld ii;
    check L24() else D6();
  L23():
    print = ldf print;
    check L40() else D16();
  D6():
    deopt 27 [i7, ii];
  D16():
    deopt 63 [];
  L24():
    ii1 = force? ii;
    checkMissing(ii1);
    d = ld d;
    check L25() else D7();
  L40():
    p3 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c17 = `is.object`(x3);
      if c17 then L1() else L2(x3);
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", x3);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x5):
      i18 = ld i;
      i19 = force? i18;
      __6 = ldf `[[` in base;
      r22 = dyn __6(x5, i19);
      goto L0(r22);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    ddd1 = ld `...`;
    r24 = dyn print[, `...`](p3, ddd1);
    check L41() else D17();
  D7():
    deopt 29 [i7, d];
  D17():
    deopt 66 [r24];
  L25():
    d1 = force? d;
    checkMissing(d1);
    c12 = `is.object`(d1);
    if c12 then L26() else L27(i7, d1);
  L41():
    popenv;
    return r24;
  L6(i13, dx1):
    __1 = ldf `%%` in base;
    r12 = dyn __1(ii1, dx1);
    check L30() else D9();
  L26():
    dr = tryDispatchBuiltin.1("[", d1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(i7, dr);
  L27(i11, d3):
    j = ld j;
    check L29() else D8();
  D8():
    deopt 31 [i11, d3, j];
  D9():
    deopt 35 [i13, r12];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(i7, dx);
  L29():
    j1 = force? j;
    __ = ldf `[` in base;
    r11 = dyn __(d3, j1);
    goto L6(i11, r11);
  L30():
    r13 = `+`(r12, 1);
    st iii = r13;
    ii2 = ld ii;
    check L31() else D10();
  D10():
    deopt 40 [i13, ii2];
  L31():
    ii3 = force? ii2;
    checkMissing(ii3);
    d4 = ld d;
    check L32() else D11();
  D11():
    deopt 42 [i13, d4];
  L32():
    d5 = force? d4;
    checkMissing(d5);
    c13 = `is.object`(d5);
    if c13 then L33() else L34(i13, d5);
  L7(i17, dx3):
    ___ = ldf `%/%` in base;
    r15 = dyn ___(ii3, dx3);
    check L37() else D13();
  L33():
    dr2 = tryDispatchBuiltin.1("[", d5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(i13, dr2);
  L34(i15, d7):
    j2 = ld j;
    check L36() else D12();
  D12():
    deopt 44 [i15, d7, j2];
  D13():
    deopt 48 [i17, r15];
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i13, dx2);
  L36():
    j3 = force? j2;
    __2 = ldf `[` in base;
    r14 = dyn __2(d7, j3);
    goto L7(i15, r14);
  L37():
    st ii = r15;
    cat1 = ldf cat;
    check L38() else D14();
  D14():
    deopt 51 [i17];
  L38():
    p1 = prom<V +>{
      dnn = ld dnn;
      dnn1 = force? dnn;
      checkMissing(dnn1);
      c14 = `is.object`(dnn1);
      if c14 then L1() else L2(dnn1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", dnn1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(dnn3):
      j4 = ld j;
      j5 = force? j4;
      __3 = ldf `[` in base;
      r16 = dyn __3(dnn3, j5);
      goto L0(r16);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p2 = prom<V +>{
      dn2 = ld dn;
      dn3 = force? dn2;
      checkMissing(dn3);
      c15 = `is.object`(dn3);
      if c15 then L2() else L3(dn3);
    L0(dx7):
      c16 = `is.object`(dx7);
      if c16 then L5() else L6(dx7);
    L2():
      dr6 = tryDispatchBuiltin.1("[[", dn3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(dn5):
      j6 = ld j;
      j7 = force? j6;
      __4 = ldf `[[` in base;
      r18 = dyn __4(dn5, j7);
      goto L0(r18);
    L1(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx9):
      iii = ld iii;
      iii1 = force? iii;
      __5 = ldf `[` in base;
      r19 = dyn __5(dx9, iii1);
      goto L1(r19);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx10);
    };
    r21 = dyn cat1[, , , , sep](p1, ": ", p2, "\n", "");
    check L39() else D15();
  D15():
    deopt 58 [i17, r21];
  L39():
    goto L5(i17);
  }
}