fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg list:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg friedman_test:cls, reg RoundingTimes:*, reg RoundingTimes1:V, reg p2:p(V +), reg r15:V, reg aggregate:cls, reg warpbreaks:*, reg warpbreaks1:V, reg c2:L, reg warpbreaks3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg warpbreaks4:*, reg warpbreaks5:V, reg c3:L, reg warpbreaks7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r20:V, reg warpbreaks8:*, reg warpbreaks9:V, reg c4:L, reg warpbreaks11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg list1:cls, reg r22:V, reg p4:p(V +), reg mean:*, reg mean1:V, reg p5:p(V +), reg r25:V, reg wb:*, reg wb1:V, reg friedman_test1:cls, reg wb2:*, reg wb3:V, reg c5:L, reg wb5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r26:V, reg p6:p(V +), reg wb6:*, reg wb7:V, reg c6:L, reg wb9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r28:V, reg p7:p(V +), reg wb10:*, reg wb11:V, reg c7:L, reg wb13:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r30:V, reg p8:p(V +), reg r32:V, reg friedman_test2:cls, reg __:cls, reg r33:V, reg p9:p(V +), reg wb14:*, reg wb15:V, reg p10:p(V +), reg r36:V |
    mkenv;
    r = clos inner2813596033;
    st `friedman.test` = r;
    matrix = ldf matrix;
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
      c = ldf c in base;
      r3 = dyn c(5.4, 5.5, 5.55, 5.85, 5.7, 5.75, 5.2, 5.6, 5.5, 5.55, 5.5, 5.4, 5.9, 5.85, 5.7, 5.45, 5.55, 5.6, 5.4, 5.4, 5.35, 5.45, 5.5, 5.35, 5.25, 5.15, 5.0, 5.85, 5.8, 5.7, 5.25, 5.2, 5.1, 5.65, 5.55, 5.45, 5.6, 5.35, 5.45, 5.05, 5.0, 4.95, 5.5, 5.5, 5.4, 5.45, 5.55, 5.5, 5.55, 5.55, 5.35, 5.45, 5.5, 5.55, 5.5, 5.45, 5.25, 5.65, 5.6, 5.4, 5.7, 5.65, 5.55, 6.3, 6.3, 6.25);
      goto L0(r3);
    L2():
      r1 = dyn base(5.4, 5.5, 5.55, 5.85, 5.7, 5.75, 5.2, 5.6, 5.5, 5.55, 5.5, 5.4, 5.9, 5.85, 5.7, 5.45, 5.55, 5.6, 5.4, 5.4, 5.35, 5.45, 5.5, 5.35, 5.25, 5.15, 5.0, 5.85, 5.8, 5.7, 5.25, 5.2, 5.1, 5.65, 5.55, 5.45, 5.6, 5.35, 5.45, 5.05, 5.0, 4.95, 5.5, 5.5, 5.4, 5.45, 5.55, 5.5, 5.55, 5.55, 5.35, 5.45, 5.5, 5.55, 5.5, 5.45, 5.25, 5.65, 5.6, 5.4, 5.7, 5.65, 5.55, 6.3, 6.3, 6.25);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r6):
      return r6;
    L2():
      r7 = `:`(1.0, 22.0);
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r5 = dyn base1(<lang `:`(1.0, 22.0)>, <lang c("Round Out", "Narrow Angle", "Wide Angle")>);
      goto L0(r5);
    L1(r9):
      list = ldf list in base;
      r11 = dyn list(r7, r9);
      goto L0(r11);
    L4():
      c1 = ldf c in base;
      r10 = dyn c1("Round Out", "Narrow Angle", "Wide Angle");
      goto L1(r10);
    L5():
      r8 = dyn base2("Round Out", "Narrow Angle", "Wide Angle");
      goto L1(r8);
    };
    r13 = dyn matrix[, nrow, byrow, dimnames](p, 22.0, TRUE, p1);
    check L1() else D1();
  D1():
    deopt 12 [r13];
  L1():
    st RoundingTimes = r13;
    friedman_test = ldf `friedman.test`;
    check L2() else D2();
  D2():
    deopt 15 [];
  L2():
    p2 = prom<V +>{
      RoundingTimes = ld RoundingTimes;
      RoundingTimes1 = force? RoundingTimes;
      checkMissing(RoundingTimes1);
      return RoundingTimes1;
    };
    r15 = dyn friedman_test(p2);
    check L3() else D3();
  D3():
    deopt 17 [r15];
  L3():
    aggregate = ldf aggregate;
    check L4() else D4();
  D4():
    deopt 19 [];
  L4():
    p3 = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      c2 = `is.object`(warpbreaks1);
      if c2 then L1() else L2(warpbreaks1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", warpbreaks1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(warpbreaks3):
      r16 = `$`(warpbreaks3, <sym breaks>);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      warpbreaks4 = ld warpbreaks;
      warpbreaks5 = force? warpbreaks4;
      checkMissing(warpbreaks5);
      c3 = `is.object`(warpbreaks5);
      if c3 then L4() else L5(warpbreaks5);
    L2():
      r18 = dyn base3[w, t](<lang `$`(warpbreaks, wool)>, <lang `$`(warpbreaks, tension)>);
      goto L0(r18);
    L3(dx3):
      warpbreaks8 = ld warpbreaks;
      warpbreaks9 = force? warpbreaks8;
      checkMissing(warpbreaks9);
      c4 = `is.object`(warpbreaks9);
      if c4 then L8() else L9(warpbreaks9);
    L4():
      dr2 = tryDispatchBuiltin.1("$", warpbreaks5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(warpbreaks7):
      r20 = `$`(warpbreaks7, <sym wool>);
      goto L3(r20);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    L7(dx5):
      list1 = ldf list in base;
      r22 = dyn list1(dx3, dx5);
      goto L0(r22);
    L8():
      dr4 = tryDispatchBuiltin.1("$", warpbreaks9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L10() else L9(dr4);
    L9(warpbreaks11):
      r21 = `$`(warpbreaks11, <sym tension>);
      goto L7(r21);
    L10():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L7(dx4);
    };
    p5 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r25 = dyn aggregate[, by, FUN](p3, p4, p5);
    check L5() else D5();
  D5():
    deopt 25 [r25];
  L5():
    st wb = r25;
    wb = ld wb;
    check L6() else D6();
  D6():
    deopt 27 [wb];
  L6():
    wb1 = force? wb;
    checkMissing(wb1);
    friedman_test1 = ldf `friedman.test`;
    check L7() else D7();
  D7():
    deopt 30 [];
  L7():
    p6 = prom<V +>{
      wb2 = ld wb;
      wb3 = force? wb2;
      checkMissing(wb3);
      c5 = `is.object`(wb3);
      if c5 then L1() else L2(wb3);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", wb3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(wb5):
      r26 = `$`(wb5, <sym x>);
      goto L0(r26);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      wb6 = ld wb;
      wb7 = force? wb6;
      checkMissing(wb7);
      c6 = `is.object`(wb7);
      if c6 then L1() else L2(wb7);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", wb7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(wb9):
      r28 = `$`(wb9, <sym w>);
      goto L0(r28);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p8 = prom<V +>{
      wb10 = ld wb;
      wb11 = force? wb10;
      checkMissing(wb11);
      c7 = `is.object`(wb11);
      if c7 then L1() else L2(wb11);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", wb11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(wb13):
      r30 = `$`(wb13, <sym t>);
      goto L0(r30);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r32 = dyn friedman_test1(p6, p7, p8);
    check L8() else D8();
  D8():
    deopt 34 [r32];
  L8():
    friedman_test2 = ldf `friedman.test`;
    check L9() else D9();
  D9():
    deopt 36 [];
  L9():
    p9 = prom<V +>{
      __ = ldf `~` in base;
      r33 = dyn __(<sym x>, <lang `|`(w, t)>);
      return r33;
    };
    p10 = prom<V +>{
      wb14 = ld wb;
      wb15 = force? wb14;
      checkMissing(wb15);
      return wb15;
    };
    r36 = dyn friedman_test2[, data](p9, p10);
    check L10() else D10();
  D10():
    deopt 40 [r36];
  L10():
    popenv;
    return r36;
  }
}
fun inner2813596033(y, `...`) {
  (reg y:*, reg ddd:dots) -+> V { var y:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st y = y;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("friedman.test");
    goto L0(r2);
  L2():
    r = dyn base("friedman.test");
    goto L0(r);
  }
}