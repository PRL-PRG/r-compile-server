fun main() {
  () -+> V { reg r:cls, reg rnorm:cls, reg r1:V, reg hist:cls, reg x:*, reg x1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg par:cls, reg r8:V, reg clip:cls, reg usr:*, reg usr1:V, reg c1:L, reg usr3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg p2:p(V +), reg p3:p(V +), reg usr4:*, reg usr5:V, reg c2:L, reg usr7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r12:V, reg p4:p(V +), reg usr8:*, reg usr9:V, reg c3:L, reg usr11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r14:V, reg p5:p(V +), reg r16:V, reg hist1:cls, reg x2:*, reg x3:V, reg p6:p(V +), reg r18:V, reg clip1:cls, reg usr12:*, reg usr13:V, reg c4:L, reg usr15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r19:V, reg p7:p(V +), reg usr16:*, reg usr17:V, reg c5:L, reg usr19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r21:V, reg p8:p(V +), reg usr20:*, reg usr21:V, reg c6:L, reg usr23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r23:V, reg p9:p(V +), reg r25:V, reg hist2:cls, reg x4:*, reg x5:V, reg p10:p(V +), reg r27:V, reg do_call:cls, reg as_list:cls, reg usr24:*, reg usr25:V, reg p11:p(V +), reg r29:V, reg p12:p(V +), reg r31:V |
    mkenv;
    r = clos `inner-2020538207`;
    st clip = r;
    rnorm = ldf rnorm;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn rnorm(1000.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    st x = r1;
    hist = ldf hist;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c(-4.0, 4.0);
      goto L0(r5);
    L2():
      r3 = dyn base(<lang `-`(4.0)>, 4.0);
      goto L0(r3);
    };
    r7 = dyn hist[, xlim](p, p1);
    check L3() else D3();
  D3():
    deopt 13 [r7];
  L3():
    par = ldf par;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    r8 = dyn par("usr");
    check L5() else D5();
  D5():
    deopt 17 [r8];
  L5():
    st usr = r8;
    clip = ldf clip;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p2 = prom<V +>{
      usr = ld usr;
      usr1 = force? usr;
      checkMissing(usr1);
      c1 = `is.object`(usr1);
      if c1 then L1() else L2(usr1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", usr1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(usr3):
      __ = ldf `[` in base;
      r9 = dyn __(usr3, 1.0);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      return -2.0;
    };
    p4 = prom<V +>{
      usr4 = ld usr;
      usr5 = force? usr4;
      checkMissing(usr5);
      c2 = `is.object`(usr5);
      if c2 then L1() else L2(usr5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", usr5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(usr7):
      __1 = ldf `[` in base;
      r12 = dyn __1(usr7, 3.0);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p5 = prom<V +>{
      usr8 = ld usr;
      usr9 = force? usr8;
      checkMissing(usr9);
      c3 = `is.object`(usr9);
      if c3 then L1() else L2(usr9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", usr9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(usr11):
      __2 = ldf `[` in base;
      r14 = dyn __2(usr11, 4.0);
      goto L0(r14);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r16 = dyn clip(p2, p3, p4, p5);
    check L7() else D7();
  D7():
    deopt 25 [r16];
  L7():
    hist1 = ldf hist;
    check L8() else D8();
  D8():
    deopt 27 [];
  L8():
    p6 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r18 = dyn hist1[, col, add](p6, "red", TRUE);
    check L9() else D9();
  D9():
    deopt 33 [r18];
  L9():
    clip1 = ldf clip;
    check L10() else D10();
  D10():
    deopt 35 [];
  L10():
    p7 = prom<V +>{
      usr12 = ld usr;
      usr13 = force? usr12;
      checkMissing(usr13);
      c4 = `is.object`(usr13);
      if c4 then L1() else L2(usr13);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", usr13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(usr15):
      __3 = ldf `[` in base;
      r19 = dyn __3(usr15, 2.0);
      goto L0(r19);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p8 = prom<V +>{
      usr16 = ld usr;
      usr17 = force? usr16;
      checkMissing(usr17);
      c5 = `is.object`(usr17);
      if c5 then L1() else L2(usr17);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", usr17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(usr19):
      __4 = ldf `[` in base;
      r21 = dyn __4(usr19, 3.0);
      goto L0(r21);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p9 = prom<V +>{
      usr20 = ld usr;
      usr21 = force? usr20;
      checkMissing(usr21);
      c6 = `is.object`(usr21);
      if c6 then L1() else L2(usr21);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", usr21);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(usr23):
      __5 = ldf `[` in base;
      r23 = dyn __5(usr23, 4.0);
      goto L0(r23);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r25 = dyn clip1(2.0, p7, p8, p9);
    check L11() else D11();
  D11():
    deopt 40 [r25];
  L11():
    hist2 = ldf hist;
    check L12() else D12();
  D12():
    deopt 42 [];
  L12():
    p10 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r27 = dyn hist2[, col, add](p10, "blue", TRUE);
    check L13() else D13();
  D13():
    deopt 48 [r27];
  L13():
    do_call = ldf `do.call`;
    check L14() else D14();
  D14():
    deopt 50 [];
  L14():
    p12 = prom<V +>{
      as_list = ldf `as.list`;
      p11 = prom<V +>{
        usr24 = ld usr;
        usr25 = force? usr24;
        checkMissing(usr25);
        return usr25;
      };
      r29 = dyn as_list(p11);
      return r29;
    };
    r31 = dyn do_call("clip", p12);
    check L15() else D15();
  D15():
    deopt 53 [r31];
  L15():
    popenv;
    return r31;
  }
}
fun `inner-2020538207`(x1, x2, y1, y2) {
  (reg x1:*, reg x2:*, reg y1:*, reg y2:*) -+> V { var x1:*, var x2:*, var y1:*, var y2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg C_clip:*, reg C_clip1:V, reg x3:*, reg x4:V, reg x5:*, reg x6:V, reg y3:*, reg y4:V, reg y5:*, reg y6:V, reg _External_graphics:cls, reg r4:V, reg invisible:cls, reg r5:V |
    mkenv;
    st x1 = x1;
    st x2 = x2;
    st y1 = y1;
    st y2 = y2;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf `.External.graphics`;
    base1 = ldf `.External.graphics` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang .External.graphics(C_clip, x1, x2, y1, y2)>);
    goto L0(r);
  L1(r3):
    invisible = ldf invisible in base;
    r5 = dyn invisible(r3);
    check L12() else D6();
  L4():
    C_clip = ld C_clip;
    check L6() else D0();
  L5():
    r2 = dyn base1(<sym C_clip>, <sym x1>, <sym x2>, <sym y1>, <sym y2>);
    goto L1(r2);
  D0():
    deopt 4 [C_clip];
  D6():
    deopt 17 [r5];
  L6():
    C_clip1 = force? C_clip;
    checkMissing(C_clip1);
    x3 = ld x1;
    check L7() else D1();
  L12():
    goto L0(r5);
  D1():
    deopt 6 [x3];
  L7():
    x4 = force? x3;
    checkMissing(x4);
    x5 = ld x2;
    check L8() else D2();
  D2():
    deopt 8 [x5];
  L8():
    x6 = force? x5;
    checkMissing(x6);
    y3 = ld y1;
    check L9() else D3();
  D3():
    deopt 10 [y3];
  L9():
    y4 = force? y3;
    checkMissing(y4);
    y5 = ld y2;
    check L10() else D4();
  D4():
    deopt 12 [y5];
  L10():
    y6 = force? y5;
    checkMissing(y6);
    _External_graphics = ldf `.External.graphics` in base;
    r4 = dyn _External_graphics(C_clip1, x4, x6, y4, y6);
    check L11() else D5();
  D5():
    deopt 15 [r4];
  L11():
    goto L1(r4);
  }
}