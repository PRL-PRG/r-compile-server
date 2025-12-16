fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg by:cls, reg warpbreaks:*, reg warpbreaks1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p1:p(V +), reg warpbreaks4:*, reg warpbreaks5:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r7:V, reg p2:p(V +), reg summary:*, reg summary1:V, reg p3:p(V +), reg r10:V, reg by1:cls, reg warpbreaks8:*, reg warpbreaks9:V, reg c2:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r11:V, reg p4:p(V +), reg warpbreaks12:*, reg warpbreaks13:V, reg c3:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r13:V, reg p5:p(V +), reg summary2:*, reg summary3:V, reg p6:p(V +), reg r16:V, reg by2:cls, reg warpbreaks16:*, reg warpbreaks17:V, reg p7:p(V +), reg warpbreaks18:*, reg warpbreaks19:V, reg c4:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r18:V, reg p8:p(V +), reg r20:cls, reg p9:p(V +), reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg with:cls, reg warpbreaks22:*, reg warpbreaks23:V, reg p10:p(V +), reg by3:cls, reg warpbreaks24:*, reg warpbreaks25:V, reg p11:p(V +), reg tension:*, reg tension1:V, reg p12:p(V +), reg r28:cls, reg p13:p(V +), reg r30:V, reg p14:p(V +), reg r32:V, reg sapply:cls, reg tmp1:*, reg tmp2:V, reg p15:p(V +), reg coef:*, reg coef1:V, reg p16:p(V +), reg r35:V, reg by4:cls, reg warpbreaks26:*, reg warpbreaks27:V, reg p17:p(V +), reg __5:cls, reg r37:V, reg p18:p(V +), reg with1:*, reg with2:V, reg p19:p(V +), reg coef2:cls, reg lm:cls, reg __6:cls, reg r40:V, reg p20:p(V +), reg r42:V, reg p21:p(V +), reg r44:V, reg p22:p(V +), reg r46:V, reg array2DF:cls, reg tmp3:*, reg tmp4:V, reg p23:p(V +), reg r48:V |
    mkenv;
    r = clos inner1188691255;
    st by = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    by = ldf by;
    check L6() else D2();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    p1 = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      c = `is.object`(warpbreaks1);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", warpbreaks1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r5 = dyn __(warpbreaks1, <missing>, <int 1, 2>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      warpbreaks4 = ld warpbreaks;
      warpbreaks5 = force? warpbreaks4;
      checkMissing(warpbreaks5);
      c1 = `is.object`(warpbreaks5);
      if c1 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", warpbreaks5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r7 = dyn __1(warpbreaks5, <missing>, "tension");
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      summary = ld summary;
      summary1 = force? summary;
      checkMissing(summary1);
      return summary1;
    };
    r10 = dyn by(p1, p2, p3);
    check L7() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r10];
  L5():
    goto L0();
  L7():
    by1 = ldf by;
    check L8() else D4();
  D4():
    deopt 15 [];
  L8():
    p4 = prom<V +>{
      warpbreaks8 = ld warpbreaks;
      warpbreaks9 = force? warpbreaks8;
      checkMissing(warpbreaks9);
      c2 = `is.object`(warpbreaks9);
      if c2 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", warpbreaks9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r11 = dyn __2(warpbreaks9, <missing>, 1.0);
      goto L0(r11);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p5 = prom<V +>{
      warpbreaks12 = ld warpbreaks;
      warpbreaks13 = force? warpbreaks12;
      checkMissing(warpbreaks13);
      c3 = `is.object`(warpbreaks13);
      if c3 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", warpbreaks13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r13 = dyn __3(warpbreaks13, <missing>, -1.0);
      goto L0(r13);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p6 = prom<V +>{
      summary2 = ld summary;
      summary3 = force? summary2;
      checkMissing(summary3);
      return summary3;
    };
    r16 = dyn by1(p4, p5, p6);
    check L9() else D5();
  D5():
    deopt 19 [r16];
  L9():
    by2 = ldf by;
    check L10() else D6();
  D6():
    deopt 21 [];
  L10():
    p7 = prom<V +>{
      warpbreaks16 = ld warpbreaks;
      warpbreaks17 = force? warpbreaks16;
      checkMissing(warpbreaks17);
      return warpbreaks17;
    };
    p8 = prom<V +>{
      warpbreaks18 = ld warpbreaks;
      warpbreaks19 = force? warpbreaks18;
      checkMissing(warpbreaks19);
      c4 = `is.object`(warpbreaks19);
      if c4 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", warpbreaks19);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __4 = ldf `[` in base;
      r18 = dyn __4(warpbreaks19, <missing>, "tension");
      goto L0(r18);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p9 = prom<V +>{
      r20 = clos inner354062069;
      return r20;
    };
    r22 = dyn by2(p7, p8, p9);
    check L11() else D7();
  D7():
    deopt 25 [r22];
  L11():
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L1(r24):
    st tmp1 = r24;
    sapply = ldf sapply;
    check L16() else D10();
  L12():
    with = ldf with;
    check L14() else D8();
  L13():
    r23 = dyn base1(<sym warpbreaks>, <lang by(warpbreaks, tension, function((x=), lm(`~`(breaks, wool), data=x), NULL))>);
    goto L1(r23);
  D8():
    deopt 28 [];
  D10():
    deopt 34 [];
  L14():
    p10 = prom<V +>{
      warpbreaks22 = ld warpbreaks;
      warpbreaks23 = force? warpbreaks22;
      checkMissing(warpbreaks23);
      return warpbreaks23;
    };
    p14 = prom<V +>{
      by3 = ldf by;
      p11 = prom<V +>{
        warpbreaks24 = ld warpbreaks;
        warpbreaks25 = force? warpbreaks24;
        checkMissing(warpbreaks25);
        return warpbreaks25;
      };
      p12 = prom<V +>{
        tension = ld tension;
        tension1 = force? tension;
        checkMissing(tension1);
        return tension1;
      };
      p13 = prom<V +>{
        r28 = clos inner354062069;
        return r28;
      };
      r30 = dyn by3(p11, p12, p13);
      return r30;
    };
    r32 = dyn with(p10, p14);
    check L15() else D9();
  L16():
    p15 = prom<V +>{
      tmp1 = ld tmp1;
      tmp2 = force? tmp1;
      checkMissing(tmp2);
      return tmp2;
    };
    p16 = prom<V +>{
      coef = ld coef;
      coef1 = force? coef;
      checkMissing(coef1);
      return coef1;
    };
    r35 = dyn sapply(p15, p16);
    check L17() else D11();
  D9():
    deopt 31 [r32];
  D11():
    deopt 37 [r35];
  L15():
    goto L1(r32);
  L17():
    by4 = ldf by;
    check L18() else D12();
  D12():
    deopt 39 [];
  L18():
    p17 = prom<V +>{
      warpbreaks26 = ld warpbreaks;
      warpbreaks27 = force? warpbreaks26;
      checkMissing(warpbreaks27);
      return warpbreaks27;
    };
    p18 = prom<V +>{
      __5 = ldf `~` in base;
      r37 = dyn __5(<sym tension>);
      return r37;
    };
    p19 = prom<V +>{
      with1 = ld with;
      with2 = force? with1;
      checkMissing(with2);
      return with2;
    };
    p22 = prom<V +>{
      coef2 = ldf coef;
      p21 = prom<V +>{
        lm = ldf lm;
        p20 = prom<V +>{
          __6 = ldf `~` in base;
          r40 = dyn __6(<sym breaks>, <sym wool>);
          return r40;
        };
        r42 = dyn lm(p20);
        return r42;
      };
      r44 = dyn coef2(p21);
      return r44;
    };
    r46 = dyn by4(p17, p18, p19, p22);
    check L19() else D13();
  D13():
    deopt 44 [r46];
  L19():
    st tmp2 = r46;
    array2DF = ldf array2DF;
    check L20() else D14();
  D14():
    deopt 47 [];
  L20():
    p23 = prom<V +>{
      tmp3 = ld tmp2;
      tmp4 = force? tmp3;
      checkMissing(tmp4);
      return tmp4;
    };
    r48 = dyn array2DF[, simplify](p23, TRUE);
    check L21() else D15();
  D15():
    deopt 51 [r48];
  L21():
    popenv;
    return r48;
  }
}
fun inner1188691255(data, INDICES, FUN, `...`, simplify) {
  (reg data:*, reg INDICES:*, reg FUN:*, reg ddd:dots, reg simplify:*) -+> V { var data:*, var INDICES:*, var FUN:*, var `...`:dots?, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st data = data;
    st INDICES = INDICES;
    st FUN = FUN;
    st `...` = ddd;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L0(TRUE) else L0(simplify);
  L0(simplify_orDefault):
    st simplify = simplify_orDefault;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("by");
    goto L1(r2);
  L3():
    r = dyn base("by");
    goto L1(r);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg lm:cls, reg __:cls, reg r:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    lm = ldf lm;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r = dyn __(<sym breaks>, <sym wool>);
      return r;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn lm[, data](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}