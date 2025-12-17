fun main() {
  () -+> V { reg r:cls, reg shapiro_test:cls, reg rnorm:cls, reg r1:V, reg p:p(V +), reg r3:V, reg shapiro_test1:cls, reg runif:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    r = clos inner2501545716;
    st `shapiro.test` = r;
    shapiro_test = ldf `shapiro.test`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      rnorm = ldf rnorm;
      r1 = dyn rnorm[, mean, sd](100.0, 5.0, 3.0);
      return r1;
    };
    r3 = dyn shapiro_test(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    shapiro_test1 = ldf `shapiro.test`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      runif = ldf runif;
      r4 = dyn runif[, min, max](100.0, 2.0, 4.0);
      return r4;
    };
    r6 = dyn shapiro_test1(p1);
    check L3() else D3();
  D3():
    deopt 10 [r6];
  L3():
    popenv;
    return r6;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg sort:cls, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg complete_cases:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r11:V, reg __:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg x9:*, reg x10:V, reg length:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg n:*, reg n1:V, reg is_na:cls, reg r20:V, reg c1:L, reg c2:V, reg n2:*, reg n3:V, reg r21:V, reg c4:L, reg c5:V, reg c7:L, reg c8:V, reg n4:*, reg n5:V, reg r22:V, reg c10:L, reg c11:V, reg c13:L, reg stop:cls, reg r23:V, reg x11:*, reg x12:V, reg c14:L, reg x14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg n6:*, reg n7:V, reg __1:cls, reg r25:V, reg x15:*, reg x16:V, reg c15:L, reg dx5:V, reg x18:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg __2:cls, reg r26:V, reg r27:V, reg rng:*, reg rng1:V, reg r28:V, reg c16:L, reg stop1:cls, reg r29:V, reg rng2:*, reg rng3:V, reg r31:V, reg c17:L, reg x19:*, reg x20:V, reg rng4:*, reg rng5:V, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg C_SWilk:*, reg C_SWilk1:V, reg x21:*, reg x22:V, reg vargs:dots, reg r36:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg res:*, reg res1:V, reg c18:L, reg res3:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r41:V, reg c19:cls, reg r42:V, reg res4:*, reg res5:V, reg c20:L, reg res7:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r43:V, reg DNAME:*, reg DNAME1:V, reg list:cls, reg r44:V, reg l:*, reg class__:cls, reg r45:V, reg RVAL:*, reg RVAL1:V |
    mkenv;
    st x = x;
    deparse1 = ldf deparse1;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<sym x>);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    r4 = dyn deparse1(p);
    check L18() else D1();
  D1():
    deopt 3 [r4];
  L18():
    st DNAME = r4;
    stopifnot = ldf stopifnot;
    check L19() else D2();
  D2():
    deopt 6 [];
  L19():
    p1 = prom<V +>{
      sym1 = ldf `is.numeric`;
      base1 = ldf `is.numeric` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      is_numeric = ldf `is.numeric` in base;
      r7 = dyn is_numeric(x2);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym x>);
      goto L0(r5);
    };
    r9 = dyn stopifnot(p1);
    check L20() else D3();
  D3():
    deopt 8 [r9];
  L20():
    sort = ldf sort;
    check L21() else D4();
  D4():
    deopt 10 [];
  L21():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c = `is.object`(x4);
      if c then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      complete_cases = ldf `complete.cases`;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r11 = dyn complete_cases(p2);
      __ = ldf `[` in base;
      r12 = dyn __(x6, r11);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r14 = dyn sort(p3);
    check L22() else D5();
  D5():
    deopt 12 [r14];
  L22():
    st x = r14;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  L0(r16):
    st n = r16;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L23():
    x9 = ld x;
    check L25() else D6();
  L24():
    r15 = dyn base2(<sym x>);
    goto L0(r15);
  D6():
    deopt 16 [x9];
  L1(r19):
    c1 = `as.logical`(r19);
    if c1 then L2(c1) else L31();
  L25():
    x10 = force? x9;
    checkMissing(x10);
    length = ldf length in base;
    r17 = dyn length(x10);
    check L26() else D7();
  L27():
    n = ld n;
    check L29() else D8();
  L28():
    r18 = dyn base3(<sym n>);
    goto L1(r18);
  D7():
    deopt 19 [r17];
  D8():
    deopt 23 [n];
  L2(c2):
    c7 = `as.logical`(c2);
    if c7 then L3(c7) else L34();
  L26():
    goto L0(r17);
  L29():
    n1 = force? n;
    checkMissing(n1);
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(n1);
    check L30() else D9();
  L31():
    n2 = ld n;
    check L32() else D10();
  D9():
    deopt 26 [r20];
  D10():
    deopt 27 [c1, n2];
  L3(c8):
    c13 = `as.logical`(c8);
    if c13 then L37() else L4();
  L30():
    goto L1(r20);
  L32():
    n3 = force? n2;
    checkMissing(n3);
    r21 = `<`(n3, 3);
    c4 = `as.logical`(r21);
    c5 = `||`(c1, c4);
    goto L2(c5);
  L34():
    n4 = ld n;
    check L35() else D11();
  D11():
    deopt 32 [c7, n4];
  L4():
    goto L5();
  L5():
    x11 = ld x;
    check L41() else D14();
  L35():
    n5 = force? n4;
    checkMissing(n5);
    r22 = `>`(n5, 5000);
    c10 = `as.logical`(r22);
    c11 = `||`(c7, c10);
    goto L3(c11);
  L37():
    stop = ldf stop;
    check L38() else D12();
  D12():
    deopt 38 [];
  D14():
    deopt 43 [x11];
  L38():
    r23 = dyn stop("sample size must be between 3 and 5000");
    check L39() else D13();
  L41():
    x12 = force? x11;
    checkMissing(x12);
    c14 = `is.object`(x12);
    if c14 then L42() else L43(x12);
  D13():
    deopt 40 [r23];
  L6(dx3):
    x15 = ld x;
    check L46() else D16();
  L39():
    goto L5();
  L42():
    dr2 = tryDispatchBuiltin.1("[", x12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(x14):
    n6 = ld n;
    check L45() else D15();
  D15():
    deopt 45 [x14, n6];
  D16():
    deopt 47 [dx3, x15];
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L45():
    n7 = force? n6;
    __1 = ldf `[` in base;
    r25 = dyn __1(x14, n7);
    goto L6(r25);
  L46():
    x16 = force? x15;
    checkMissing(x16);
    c15 = `is.object`(x16);
    if c15 then L47() else L48(dx3, x16);
  L7(dx8, dx9):
    r27 = `-`(dx8, dx9);
    st rng = r27;
    rng = ld rng;
    check L50() else D17();
  L47():
    dr4 = tryDispatchBuiltin.1("[", x16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(dx3, dr4);
  L48(dx5, x18):
    __2 = ldf `[` in base;
    r26 = dyn __2(x18, 1);
    goto L7(dx5, r26);
  D17():
    deopt 54 [rng];
  L49():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx3, dx7);
  L50():
    rng1 = force? rng;
    checkMissing(rng1);
    r28 = `==`(rng1, 0.0);
    c16 = `as.logical`(r28);
    if c16 then L51() else L8();
  L8():
    goto L9();
  L9():
    rng2 = ld rng;
    check L55() else D20();
  L51():
    stop1 = ldf stop;
    check L52() else D18();
  D18():
    deopt 59 [];
  D20():
    deopt 64 [rng2];
  L52():
    r29 = dyn stop1("all 'x' values are identical");
    check L53() else D19();
  L55():
    rng3 = force? rng2;
    checkMissing(rng3);
    r31 = `<`(rng3, 1.0E-10);
    c17 = `as.logical`(r31);
    if c17 then L56() else L10();
  D19():
    deopt 61 [r29];
  L10():
    goto L11();
  L11():
    sym4 = ldf `.Call`;
    base4 = ldf `.Call` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L53():
    goto L9();
  L56():
    x19 = ld x;
    check L57() else D21();
  D21():
    deopt 68 [x19];
  L12(r35):
    st res = r35;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L57():
    x20 = force? x19;
    checkMissing(x20);
    rng4 = ld rng;
    check L58() else D22();
  L60():
    C_SWilk = ld C_SWilk;
    check L62() else D23();
  L61():
    r34 = dyn base4(<sym C_SWilk>, <sym x>);
    goto L12(r34);
  D22():
    deopt 69 [x20, rng4];
  D23():
    deopt 76 [C_SWilk];
  L13(r38):
    st RVAL = r38;
    l = ld RVAL;
    class__ = ldf `class<-`;
    check L79() else D30();
  L58():
    rng5 = force? rng4;
    checkMissing(rng5);
    r32 = `/`(x20, rng5);
    st x = r32;
    goto L11();
  L62():
    C_SWilk1 = force? C_SWilk;
    checkMissing(C_SWilk1);
    x21 = ld x;
    check L63() else D24();
  L64():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L65():
    r37 = dyn base5[statistic, `p.value`, method, `data.name`](<lang c(W=`[`(res, 1.0))>, <lang `[`(res, 2.0)>, "Shapiro-Wilk normality test", <sym DNAME>);
    goto L13(r37);
  D24():
    deopt 77 [C_SWilk1, x21];
  D30():
    deopt 111 ["htest", l, "htest"];
  L14(r40):
    res4 = ld res;
    check L73() else D27();
  L63():
    x22 = force? x21;
    checkMissing(x22);
    vargs = dots[x22];
    r36 = `.Call`(C_SWilk1, vargs, <missing>);
    goto L12(r36);
  L66():
    res = ld res;
    check L68() else D25();
  L67():
    r39 = dyn base6[W](<lang `[`(res, 1.0)>);
    goto L14(r39);
  L79():
    r45 = dyn class__(l, NULL, "htest");
    check L80() else D31();
  D25():
    deopt 85 [res];
  D27():
    deopt 94 [res4];
  D31():
    deopt 113 ["htest", r45];
  L68():
    res1 = force? res;
    checkMissing(res1);
    c18 = `is.object`(res1);
    if c18 then L69() else L70(res1);
  L73():
    res5 = force? res4;
    checkMissing(res5);
    c20 = `is.object`(res5);
    if c20 then L74() else L75(res5);
  L80():
    st RVAL = r45;
    RVAL = ld RVAL;
    check L81() else D32();
  D32():
    deopt 115 [RVAL];
  L15(dx11):
    c19 = ldf c in base;
    r42 = dyn c19(dx11);
    check L72() else D26();
  L16(dx13):
    DNAME = ld DNAME;
    check L77() else D28();
  L69():
    dr6 = tryDispatchBuiltin.1("[", res1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L71() else L70(dr6);
  L70(res3):
    __3 = ldf `[` in base;
    r41 = dyn __3(res3, 1.0);
    goto L15(r41);
  L74():
    dr8 = tryDispatchBuiltin.1("[", res5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(dr8);
  L75(res7):
    __4 = ldf `[` in base;
    r43 = dyn __4(res7, 2.0);
    goto L16(r43);
  L81():
    RVAL1 = force? RVAL;
    checkMissing(RVAL1);
    popenv;
    return RVAL1;
  D26():
    deopt 92 [r42];
  D28():
    deopt 102 [DNAME];
  L71():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx10);
  L72():
    goto L14(r42);
  L76():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L16(dx12);
  L77():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    list = ldf list in base;
    r44 = dyn list(r40, dx13, "Shapiro-Wilk normality test", DNAME1);
    check L78() else D29();
  D29():
    deopt 106 [r44];
  L78():
    goto L13(r44);
  }
}