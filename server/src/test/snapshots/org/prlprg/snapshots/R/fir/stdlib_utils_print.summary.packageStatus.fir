fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.summary.packageStatus` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg r:V, reg cat1:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg r5:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg cat2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x6:*, reg x7:V, reg c2:L, reg x9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg names:cls, reg r9:V, reg c3:L, reg r11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg k:*, reg k1:V, reg __:cls, reg r12:V, reg p:p(V +), reg r14:V, reg print:cls, reg x10:*, reg x11:V, reg c4:L, reg x13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r15:V, reg c5:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg k2:*, reg k3:V, reg __1:cls, reg r16:V, reg p1:p(V +), reg ddd1:dots?, reg r18:V, reg cat3:cls, reg r19:V, reg cat4:cls, reg r20:V, reg cat5:cls, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg x14:*, reg x15:V, reg c6:L, reg x17:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r24:V, reg r25:I, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg c7:L, reg x18:V, reg cat6:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg x19:*, reg x20:V, reg c8:L, reg x22:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r28:V, reg names1:cls, reg r29:V, reg c9:L, reg r31:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg k4:*, reg k5:V, reg __2:cls, reg r32:V, reg p2:p(V +), reg r34:V, reg print1:cls, reg x23:*, reg x24:V, reg c10:L, reg x26:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r35:V, reg c11:L, reg dx21:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg k6:*, reg k7:V, reg __3:cls, reg r36:V, reg p3:p(V +), reg ddd2:dots?, reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg x27:*, reg x28:V, reg invisible:cls, reg r41:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r = dyn cat("\nInstalled packages:\n");
    check L8() else D1();
  D1():
    deopt 3 [r];
  L8():
    cat1 = ldf cat;
    check L9() else D2();
  D2():
    deopt 5 [];
  L9():
    r1 = dyn cat1("-------------------\n");
    check L10() else D3();
  D3():
    deopt 7 [r1];
  L10():
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r3):
    s = toForSeq(r3);
    l = length(s);
    i = 0;
    goto L1(i);
  L11():
    x1 = ld x;
    check L13() else D4();
  L12():
    r2 = dyn base(<lang `$`(x, Libs)>);
    goto L0(r2);
  D4():
    deopt 9 [x1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L18() else L2();
  L13():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L15() else L16(x2);
  L2():
    x5 = `[[`(s, i2, NULL, TRUE);
    st k = x5;
    cat2 = ldf cat;
    check L19() else D5();
  L14(dx1):
    r5 = seq_along(dx1);
    goto L0(r5);
  L15():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(x4):
    r4 = `$`(x4, <sym Libs>);
    goto L14(r4);
  L18():
    cat3 = ldf cat;
    check L23() else D9();
  D5():
    deopt 14 [i2];
  D9():
    deopt 30 [];
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L19():
    p = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r7):
      c3 = `is.object`(r7);
      if c3 then L8() else L9(r7);
    L2():
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c2 = `is.object`(x7);
      if c2 then L5() else L6(x7);
    L3():
      r6 = dyn base1(<lang `$`(x, Libs)>);
      goto L0(r6);
    L1(dx5):
      return dx5;
    L4(dx3):
      names = ldf names in base;
      r9 = dyn names(dx3);
      goto L0(r9);
    L5():
      dr2 = tryDispatchBuiltin.1("$", x7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(x9):
      r8 = `$`(x9, <sym Libs>);
      goto L4(r8);
    L8():
      dr4 = tryDispatchBuiltin.1("[", r7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L10() else L9(dr4);
    L9(r11):
      k = ld k;
      k1 = force? k;
      __ = ldf `[` in base;
      r12 = dyn __(r11, k1);
      goto L1(r12);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx2);
    L10():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    r14 = dyn cat2[, , , sep]("\n*** Library ", p, "\n", "");
    check L20() else D6();
  L23():
    r19 = dyn cat3("\n\nAvailable packages:\n");
    check L24() else D10();
  D6():
    deopt 20 [i2, r14];
  D10():
    deopt 32 [r19];
  L20():
    print = ldf print;
    check L21() else D7();
  L24():
    cat4 = ldf cat;
    check L25() else D11();
  D7():
    deopt 22 [i2];
  D11():
    deopt 34 [];
  L21():
    p1 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c4 = `is.object`(x11);
      if c4 then L2() else L3(x11);
    L1(dx7):
      c5 = `is.object`(dx7);
      if c5 then L5() else L6(dx7);
    L2():
      dr6 = tryDispatchBuiltin.1("$", x11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(x13):
      r15 = `$`(x13, <sym Libs>);
      goto L1(r15);
    L0(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx9):
      k2 = ld k;
      k3 = force? k2;
      __1 = ldf `[[` in base;
      r16 = dyn __1(dx9, k3);
      goto L0(r16);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    ddd1 = ld `...`;
    r18 = dyn print[, `...`](p1, ddd1);
    check L22() else D8();
  L25():
    r20 = dyn cat4("-------------------\n");
    check L26() else D12();
  D8():
    deopt 25 [i2, r18];
  D12():
    deopt 36 [r20];
  L22():
    goto L1(i2);
  L26():
    cat5 = ldf cat;
    check L27() else D13();
  D13():
    deopt 38 [];
  L27():
    r21 = dyn cat5("(each package appears only once)\n");
    check L28() else D14();
  D14():
    deopt 40 [r21];
  L28():
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L3(r23):
    s1 = toForSeq(r23);
    l1 = length(s1);
    i5 = 0;
    goto L4(i5);
  L29():
    x14 = ld x;
    check L31() else D15();
  L30():
    r22 = dyn base2(<lang `$`(x, Repos)>);
    goto L3(r22);
  D15():
    deopt 42 [x14];
  L4(i6):
    i7 = `+`.1(i6, 1);
    c7 = `<`.1(l1, i7);
    if c7 then L36() else L5();
  L31():
    x15 = force? x14;
    checkMissing(x15);
    c6 = `is.object`(x15);
    if c6 then L33() else L34(x15);
  L5():
    x18 = `[[`(s1, i7, NULL, TRUE);
    st k = x18;
    cat6 = ldf cat;
    check L37() else D16();
  L32(dx13):
    r25 = seq_along(dx13);
    goto L3(r25);
  L33():
    dr10 = tryDispatchBuiltin.1("$", x15);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L35() else L34(dr10);
  L34(x17):
    r24 = `$`(x17, <sym Repos>);
    goto L32(r24);
  L36():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  D16():
    deopt 47 [i7];
  L6(r40):
    popenv;
    return r40;
  L35():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L32(dx12);
  L37():
    p2 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r27):
      c9 = `is.object`(r27);
      if c9 then L8() else L9(r27);
    L2():
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      c8 = `is.object`(x20);
      if c8 then L5() else L6(x20);
    L3():
      r26 = dyn base3(<lang `$`(x, Repos)>);
      goto L0(r26);
    L1(dx17):
      return dx17;
    L4(dx15):
      names1 = ldf names in base;
      r29 = dyn names1(dx15);
      goto L0(r29);
    L5():
      dr12 = tryDispatchBuiltin.1("$", x20);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(x22):
      r28 = `$`(x22, <sym Repos>);
      goto L4(r28);
    L8():
      dr14 = tryDispatchBuiltin.1("[", r27);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L10() else L9(dr14);
    L9(r31):
      k4 = ld k;
      k5 = force? k4;
      __2 = ldf `[` in base;
      r32 = dyn __2(r31, k5);
      goto L1(r32);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L4(dx14);
    L10():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx16);
    };
    r34 = dyn cat6[, , , sep]("\n*** Repository ", p2, "\n", "");
    check L38() else D17();
  L41():
    x27 = ld x;
    check L43() else D20();
  L42():
    r39 = dyn base4(<sym x>);
    goto L6(r39);
  D17():
    deopt 53 [i7, r34];
  D20():
    deopt 64 [x27];
  L38():
    print1 = ldf print;
    check L39() else D18();
  L43():
    x28 = force? x27;
    checkMissing(x28);
    invisible = ldf invisible in base;
    r41 = dyn invisible(x28);
    check L44() else D21();
  D18():
    deopt 55 [i7];
  D21():
    deopt 67 [r41];
  L39():
    p3 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      c10 = `is.object`(x24);
      if c10 then L2() else L3(x24);
    L1(dx19):
      c11 = `is.object`(dx19);
      if c11 then L5() else L6(dx19);
    L2():
      dr16 = tryDispatchBuiltin.1("$", x24);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(x26):
      r35 = `$`(x26, <sym Repos>);
      goto L1(r35);
    L0(dx23):
      return dx23;
    L4():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx18);
    L5():
      dr18 = tryDispatchBuiltin.1("[[", dx19);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(dx21):
      k6 = ld k;
      k7 = force? k6;
      __3 = ldf `[[` in base;
      r36 = dyn __3(dx21, k7);
      goto L0(r36);
    L7():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx22);
    };
    ddd2 = ld `...`;
    r38 = dyn print1[, `...`](p3, ddd2);
    check L40() else D19();
  L44():
    goto L6(r41);
  D19():
    deopt 58 [i7, r38];
  L40():
    goto L4(i7);
  }
}