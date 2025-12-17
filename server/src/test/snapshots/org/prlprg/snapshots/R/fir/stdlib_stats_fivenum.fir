fun main() {
  () -+> V { reg r:cls, reg fivenum:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rnorm:cls, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg r6:V |
    mkenv;
    r = clos inner4021312349;
    st fivenum = r;
    fivenum = ldf fivenum;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      rnorm = ldf rnorm;
      r3 = dyn rnorm(100.0);
      c = ldf c in base;
      r4 = dyn c(r3, <real -Infinity, NA_REAL, +Infinity>);
      goto L0(r4);
    L2():
      r1 = dyn base(<lang rnorm(100.0)>, <lang `/`(`:`(`-`(1.0), 1.0), 0.0)>);
      goto L0(r1);
    };
    r6 = dyn fivenum(p);
    check L1() else D1();
  D1():
    deopt 6 [r6];
  L1():
    popenv;
    return r6;
  }
}
fun inner4021312349(x, `na.rm`) {
  (reg x:*, reg na_rm:*) -+> V { var x:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_na:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg xna:*, reg xna1:V, reg any:cls, reg r5:V, reg c:L, reg na_rm1:*, reg na_rm2:V, reg c1:L, reg x3:*, reg x4:V, reg c2:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg xna2:*, reg xna3:V, reg r6:V, reg __:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg rep_int:cls, reg r10:V, reg sort:cls, reg x7:*, reg x8:V, reg p:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x9:*, reg x10:V, reg length:cls, reg r15:V, reg n:*, reg n1:V, reg r16:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg rep_int1:cls, reg r19:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg n2:*, reg n3:V, reg r22:V, reg r23:V, reg r24:V, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg n4:*, reg n5:V, reg n6:*, reg n7:V, reg r28:V, reg r29:V, reg n8:*, reg n9:V, reg r30:V, reg n10:*, reg n11:V, reg r31:V, reg n12:*, reg n13:V, reg c4:cls, reg r32:V, reg x11:*, reg x12:V, reg c5:L, reg r34:R, reg x14:V, reg dr2:V, reg dc1:L, reg dx4:V, reg r36:R, reg dx5:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:R, reg x17:V, reg r41:V, reg d:*, reg d1:V, reg r42:V, reg __1:cls, reg r43:V, reg x18:*, reg x19:V, reg c6:L, reg r45:R, reg dx7:V, reg x21:V, reg dr4:V, reg dc2:L, reg dx9:V, reg r47:R, reg dx10:V, reg dx11:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg r51:R, reg dx14:V, reg x24:V, reg r52:V, reg d2:*, reg d3:V, reg r53:V, reg __2:cls, reg r54:V, reg r55:V, reg r56:V |
    mkenv;
    st x = x;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(TRUE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r1):
    st xna = r1;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(r4):
    c = `as.logical`(r4);
    if c then L26() else L3();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(x2);
    check L21() else D1();
  L22():
    xna = ld xna;
    check L24() else D2();
  L23():
    r3 = dyn base1(<sym xna>);
    goto L2(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [xna];
  L3():
    goto L8();
  L8():
    sort = ldf sort;
    check L40() else D8();
  L21():
    goto L1(r2);
  L24():
    xna1 = force? xna;
    checkMissing(xna1);
    any = ldf any in base;
    r5 = dyn any(xna1);
    check L25() else D3();
  L26():
    na_rm1 = ld `na.rm`;
    check L27() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 13 [na_rm1];
  D8():
    deopt 32 [];
  L25():
    goto L2(r5);
  L27():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    c1 = `as.logical`(na_rm2);
    if c1 then L28() else L4();
  L40():
    p = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r12 = dyn sort(p);
    check L41() else D9();
  D9():
    deopt 34 [r12];
  L4():
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L28():
    x3 = ld x;
    check L29() else D5();
  L41():
    st x = r12;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D5():
    deopt 15 [x3];
  L7(r9):
    popenv;
    return r9;
  L9(r14):
    st n = r14;
    n = ld n;
    check L46() else D12();
  L29():
    x4 = force? x3;
    checkMissing(x4);
    c2 = `is.object`(x4);
    if c2 then L30() else L31(x4);
  L35():
    rep_int = ldf `rep.int` in base;
    r10 = dyn rep_int(NA_LGL, 5.0);
    check L37() else D7();
  L36():
    r8 = dyn base2(NA_LGL, 5.0);
    goto L7(r8);
  L42():
    x9 = ld x;
    check L44() else D10();
  L43():
    r13 = dyn base3(<sym x>);
    goto L9(r13);
  D7():
    deopt 27 [r10];
  D10():
    deopt 38 [x9];
  D12():
    deopt 43 [n];
  L5(dx1):
    st x = dx1;
    goto L8();
  L30():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(x6):
    xna2 = ld xna;
    check L33() else D6();
  L37():
    goto L7(r10);
  L44():
    x10 = force? x9;
    checkMissing(x10);
    length = ldf length in base;
    r15 = dyn length(x10);
    check L45() else D11();
  L46():
    n1 = force? n;
    checkMissing(n1);
    r16 = `==`(n1, 0.0);
    c3 = `as.logical`(r16);
    if c3 then L47() else L10();
  D6():
    deopt 17 [x6, xna2];
  D11():
    deopt 41 [r15];
  L10():
    sym5 = ldf floor;
    base5 = ldf floor in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L33():
    xna3 = force? xna2;
    checkMissing(xna3);
    r6 = `!`(xna3);
    __ = ldf `[` in base;
    r7 = dyn __(x6, r6);
    goto L5(r7);
  L45():
    goto L9(r15);
  L47():
    sym4 = ldf `rep.int`;
    base4 = ldf `rep.int` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L11(r18):
    popenv;
    return r18;
  L12(r21):
    r25 = `/`(r21, 2.0);
    st n4 = r25;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L48():
    rep_int1 = ldf `rep.int` in base;
    r19 = dyn rep_int1(NA_LGL, 5.0);
    check L50() else D13();
  L49():
    r17 = dyn base4(NA_LGL, 5.0);
    goto L11(r17);
  L52():
    n2 = ld n;
    check L54() else D14();
  L53():
    r20 = dyn base5(<lang `/`(`(`(`+`(n, 3.0)), 2.0)>);
    goto L12(r20);
  D13():
    deopt 52 [r19];
  D14():
    deopt 54 [n2];
  L13(r27):
    st d = r27;
    x11 = ld x;
    check L63() else D21();
  L50():
    goto L11(r19);
  L54():
    n3 = force? n2;
    checkMissing(n3);
    r22 = `+`(n3, 3.0);
    r23 = `/`(r22, 2.0);
    r24 = floor(r23);
    goto L12(r24);
  L55():
    n4 = ld n4;
    check L57() else D15();
  L56():
    r26 = dyn base6(1.0, <sym n4>, <lang `/`(`(`(`+`(n, 1.0)), 2.0)>, <lang `-`(`+`(n, 1.0), n4)>, <sym n>);
    goto L13(r26);
  D15():
    deopt 67 [n4];
  D21():
    deopt 87 [0.5, x11];
  L57():
    n5 = force? n4;
    checkMissing(n5);
    n6 = ld n;
    check L58() else D16();
  L63():
    x12 = force? x11;
    checkMissing(x12);
    c5 = `is.object`(x12);
    if c5 then L64() else L65(0.5, x12);
  D16():
    deopt 69 [n6];
  L14(r36, dx5):
    x18 = ld x;
    check L70() else D23();
  L58():
    n7 = force? n6;
    checkMissing(n7);
    r28 = `+`(n7, 1.0);
    r29 = `/`(r28, 2.0);
    n8 = ld n;
    check L59() else D17();
  L64():
    dr2 = tryDispatchBuiltin.1("[", x12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(0.5, dr2);
  L65(r34, x14):
    sym7 = ldf floor;
    base7 = ldf floor in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  D17():
    deopt 75 [n8];
  D23():
    deopt 93 [r36, dx5, x18];
  L15(r40, x17, r41):
    __1 = ldf `[` in base;
    r43 = dyn __1(x17, r41);
    goto L14(r40, r43);
  L59():
    n9 = force? n8;
    checkMissing(n9);
    r30 = `+`(n9, 1.0);
    n10 = ld n4;
    check L60() else D18();
  L66():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L14(0.5, dx4);
  L67():
    d = ld d;
    check L69() else D22();
  L68():
    r39 = dyn base7(<sym d>);
    goto L15(r34, x14, r39);
  L70():
    x19 = force? x18;
    checkMissing(x19);
    c6 = `is.object`(x19);
    if c6 then L71() else L72(r36, dx5, x19);
  D18():
    deopt 78 [r30, n10];
  D22():
    deopt 90 [r34, x14, d];
  L16(r47, dx10, dx11):
    r55 = `+`(dx10, dx11);
    r56 = `*`(r47, r55);
    popenv;
    return r56;
  L60():
    n11 = force? n10;
    checkMissing(n11);
    r31 = `-`(r30, n11);
    n12 = ld n;
    check L61() else D19();
  L69():
    d1 = force? d;
    checkMissing(d1);
    r42 = floor(d1);
    goto L15(r34, x14, r42);
  L71():
    dr4 = tryDispatchBuiltin.1("[", x19);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L73() else L72(r36, dx5, dr4);
  L72(r45, dx7, x21):
    sym8 = ldf ceiling;
    base8 = ldf ceiling in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L74() else L75();
  D19():
    deopt 81 [n12];
  L17(r51, dx14, x24, r52):
    __2 = ldf `[` in base;
    r54 = dyn __2(x24, r52);
    goto L16(r51, dx14, r54);
  L61():
    n13 = force? n12;
    checkMissing(n13);
    c4 = ldf c in base;
    r32 = dyn c4(1.0, n5, r29, r31, n13);
    check L62() else D20();
  L73():
    dx9 = getTryDispatchBuiltinValue(dr4);
    goto L16(r36, dx5, dx9);
  L74():
    d2 = ld d;
    check L76() else D24();
  L75():
    r50 = dyn base8(<sym d>);
    goto L17(r45, dx7, x21, r50);
  D20():
    deopt 84 [r32];
  D24():
    deopt 96 [r45, dx7, x21, d2];
  L62():
    goto L13(r32);
  L76():
    d3 = force? d2;
    checkMissing(d3);
    r53 = ceiling(d3);
    goto L17(r45, dx7, x21, r53);
  }
}