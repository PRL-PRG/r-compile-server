fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg ave:cls, reg p1:p(V +), reg r6:V, reg attach:cls, reg warpbreaks:*, reg warpbreaks1:V, reg p2:p(V +), reg r8:V, reg ave1:cls, reg breaks:*, reg breaks1:V, reg p3:p(V +), reg wool:*, reg wool1:V, reg p4:p(V +), reg r11:V, reg ave2:cls, reg breaks2:*, reg breaks3:V, reg p5:p(V +), reg tension:*, reg tension1:V, reg p6:p(V +), reg r14:V, reg ave3:cls, reg breaks4:*, reg breaks5:V, reg p7:p(V +), reg tension2:*, reg tension3:V, reg p8:p(V +), reg r17:cls, reg p9:p(V +), reg r19:V, reg plot:cls, reg breaks6:*, reg breaks7:V, reg p10:p(V +), reg r21:V, reg lines:cls, reg ave4:cls, reg breaks8:*, reg breaks9:V, reg p11:p(V +), reg wool2:*, reg wool3:V, reg p12:p(V +), reg tension4:*, reg tension5:V, reg p13:p(V +), reg r25:V, reg p14:p(V +), reg r27:V, reg lines1:cls, reg ave5:cls, reg breaks10:*, reg breaks11:V, reg p15:p(V +), reg wool4:*, reg wool5:V, reg p16:p(V +), reg tension6:*, reg tension7:V, reg p17:p(V +), reg median:*, reg median1:V, reg p18:p(V +), reg r32:V, reg p19:p(V +), reg r34:V, reg legend:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r35:V, reg r36:V, reg c:cls, reg r37:V, reg p20:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r39:V, reg r40:V, reg c1:cls, reg r41:V, reg p21:p(V +), reg r43:V, reg detach:cls, reg r44:V, reg sample:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r45:V, reg r46:V, reg c2:cls, reg r47:V, reg p22:p(V +), reg r49:V, reg ave6:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg g:*, reg g1:V, reg r52:I, reg p23:p(V +), reg g2:*, reg g3:V, reg p24:p(V +), reg seq_along:*, reg seq_along1:V, reg p25:p(V +), reg r56:V |
    mkenv;
    r = clos inner1578471129;
    st ave = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    ave = ldf ave;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r6 = dyn ave(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    attach = ldf attach;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      warpbreaks = ld warpbreaks;
      warpbreaks1 = force? warpbreaks;
      checkMissing(warpbreaks1);
      return warpbreaks1;
    };
    r8 = dyn attach(p2);
    check L8() else D5();
  D5():
    deopt 15 [r8];
  L8():
    ave1 = ldf ave;
    check L9() else D6();
  D6():
    deopt 17 [];
  L9():
    p3 = prom<V +>{
      breaks = ld breaks;
      breaks1 = force? breaks;
      checkMissing(breaks1);
      return breaks1;
    };
    p4 = prom<V +>{
      wool = ld wool;
      wool1 = force? wool;
      checkMissing(wool1);
      return wool1;
    };
    r11 = dyn ave1(p3, p4);
    check L10() else D7();
  D7():
    deopt 20 [r11];
  L10():
    ave2 = ldf ave;
    check L11() else D8();
  D8():
    deopt 22 [];
  L11():
    p5 = prom<V +>{
      breaks2 = ld breaks;
      breaks3 = force? breaks2;
      checkMissing(breaks3);
      return breaks3;
    };
    p6 = prom<V +>{
      tension = ld tension;
      tension1 = force? tension;
      checkMissing(tension1);
      return tension1;
    };
    r14 = dyn ave2(p5, p6);
    check L12() else D9();
  D9():
    deopt 25 [r14];
  L12():
    ave3 = ldf ave;
    check L13() else D10();
  D10():
    deopt 27 [];
  L13():
    p7 = prom<V +>{
      breaks4 = ld breaks;
      breaks5 = force? breaks4;
      checkMissing(breaks5);
      return breaks5;
    };
    p8 = prom<V +>{
      tension2 = ld tension;
      tension3 = force? tension2;
      checkMissing(tension3);
      return tension3;
    };
    p9 = prom<V +>{
      r17 = clos inner2501545716;
      return r17;
    };
    r19 = dyn ave3[, , FUN](p7, p8, p9);
    check L14() else D11();
  D11():
    deopt 32 [r19];
  L14():
    plot = ldf plot;
    check L15() else D12();
  D12():
    deopt 34 [];
  L15():
    p10 = prom<V +>{
      breaks6 = ld breaks;
      breaks7 = force? breaks6;
      checkMissing(breaks7);
      return breaks7;
    };
    r21 = dyn plot[, main](p10, "ave( Warpbreaks )  for   wool  x  tension  combinations");
    check L16() else D13();
  D13():
    deopt 38 [r21];
  L16():
    lines = ldf lines;
    check L17() else D14();
  D14():
    deopt 40 [];
  L17():
    p14 = prom<V +>{
      ave4 = ldf ave;
      p11 = prom<V +>{
        breaks8 = ld breaks;
        breaks9 = force? breaks8;
        checkMissing(breaks9);
        return breaks9;
      };
      p12 = prom<V +>{
        wool2 = ld wool;
        wool3 = force? wool2;
        checkMissing(wool3);
        return wool3;
      };
      p13 = prom<V +>{
        tension4 = ld tension;
        tension5 = force? tension4;
        checkMissing(tension5);
        return tension5;
      };
      r25 = dyn ave4(p11, p12, p13);
      return r25;
    };
    r27 = dyn lines[, type, col](p14, "s", "blue");
    check L18() else D15();
  D15():
    deopt 46 [r27];
  L18():
    lines1 = ldf lines;
    check L19() else D16();
  D16():
    deopt 48 [];
  L19():
    p19 = prom<V +>{
      ave5 = ldf ave;
      p15 = prom<V +>{
        breaks10 = ld breaks;
        breaks11 = force? breaks10;
        checkMissing(breaks11);
        return breaks11;
      };
      p16 = prom<V +>{
        wool4 = ld wool;
        wool5 = force? wool4;
        checkMissing(wool5);
        return wool5;
      };
      p17 = prom<V +>{
        tension6 = ld tension;
        tension7 = force? tension6;
        checkMissing(tension7);
        return tension7;
      };
      p18 = prom<V +>{
        median = ld median;
        median1 = force? median;
        checkMissing(median1);
        return median1;
      };
      r32 = dyn ave5[, , , FUN](p15, p16, p17, p18);
      return r32;
    };
    r34 = dyn lines1[, type, col](p19, "s", "green");
    check L20() else D17();
  D17():
    deopt 54 [r34];
  L20():
    legend = ldf legend;
    check L21() else D18();
  D18():
    deopt 56 [];
  L21():
    p20 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      c = ldf c in base;
      r37 = dyn c("mean", "median");
      goto L0(r37);
    L2():
      r35 = dyn base1("mean", "median");
      goto L0(r35);
    };
    p21 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c1 = ldf c in base;
      r41 = dyn c1("blue", "green");
      goto L0(r41);
    L2():
      r39 = dyn base2("blue", "green");
      goto L0(r39);
    };
    r43 = dyn legend[, , , lty, col, bg](40.0, 70.0, p20, 1.0, p21, "gray90");
    check L22() else D19();
  D19():
    deopt 66 [r43];
  L22():
    detach = ldf detach;
    check L23() else D20();
  D20():
    deopt 68 [];
  L23():
    r44 = dyn detach();
    check L24() else D21();
  D21():
    deopt 69 [r44];
  L24():
    sample = ldf sample;
    check L25() else D22();
  D22():
    deopt 71 [];
  L25():
    p22 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      c2 = ldf c in base;
      r47 = dyn c2("u", "s", "e", "R");
      goto L0(r47);
    L2():
      r45 = dyn base3("u", "s", "e", "R");
      goto L0(r45);
    };
    r49 = dyn sample[, , replace](p22, 24.0, TRUE);
    check L26() else D23();
  D23():
    deopt 76 [r49];
  L26():
    st g = r49;
    ave6 = ldf ave;
    check L27() else D24();
  D24():
    deopt 79 [];
  L27():
    p23 = prom<V +>{
      sym4 = ldf seq_along;
      base4 = ldf seq_along in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      r52 = seq_along(g1);
      goto L0(r52);
    L2():
      r50 = dyn base4(<sym g>);
      goto L0(r50);
    };
    p24 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    p25 = prom<V +>{
      seq_along = ld seq_along;
      seq_along1 = force? seq_along;
      checkMissing(seq_along1);
      return seq_along1;
    };
    r56 = dyn ave6[, , FUN](p23, p24, p25);
    check L28() else D25();
  D25():
    deopt 84 [r56];
  L28():
    popenv;
    return r56;
  }
}
fun inner1578471129(x, `...`, FUN) {
  (reg x:*, reg ddd:dots, reg FUN:*) -+> V { var x:*, var `...`:dots?, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, reg mean:*, reg mean1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg FUN1:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg l:*, reg c1:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg r9:V, reg dx1:V, reg ___:cls, reg r10:V, reg interaction:cls, reg ddd1:dots?, reg r12:V, reg lapply:cls, reg split:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg g:*, reg g1:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg FUN2:*, reg FUN3:V, reg p5:p(V +), reg r18:V, reg l3:*, reg split__:cls, reg g2:*, reg g3:V, reg p6:p(V +), reg r20:V, reg x5:*, reg x6:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    FUN_isMissing = missing.0(FUN);
    if FUN_isMissing then L0() else L1(FUN);
  L0():
    p = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    goto L1(p);
  L1(FUN_orDefault):
    st FUN = FUN_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r2):
    c = `as.logical`(r2);
    if c then L8() else L3();
  L6():
    missing = ldf missing in base;
    r3 = dyn missing(<sym ...>);
    goto L2(r3);
  L7():
    r1 = dyn base(<sym ...>);
    goto L2(r1);
  L3():
    interaction = ldf interaction;
    check L15() else D2();
  L5():
    x5 = ld x;
    check L21() else D8();
  L8():
    FUN1 = ldf FUN;
    check L9() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 13 [];
  D8():
    deopt 28 [x5];
  L9():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn FUN1(p1);
    check L10() else D1();
  L15():
    ddd1 = ld `...`;
    r12 = dyn interaction[`...`](ddd1);
    check L16() else D3();
  L21():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  D1():
    deopt 6 [r5];
  D3():
    deopt 15 [r12];
  L10():
    l = ld x;
    c1 = `is.object`(l);
    if c1 then L11() else L12(r5);
  L16():
    st g = r12;
    lapply = ldf lapply;
    check L17() else D4();
  D4():
    deopt 18 [];
  L4(r9, dx1):
    st x = dx1;
    goto L5();
  L11():
    dr = tryDispatchBuiltin.0("[<-", l, r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(r5);
  L12(r7):
    ___ = ldf `[<-` in base;
    r10 = dyn ___(l, <missing>, r5);
    goto L4(r7, r10);
  L17():
    p4 = prom<V +>{
      split = ldf split;
      p2 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p3 = prom<V +>{
        g = ld g;
        g1 = force? g;
        checkMissing(g1);
        return g1;
      };
      r15 = dyn split(p2, p3);
      return r15;
    };
    p5 = prom<V +>{
      FUN2 = ld FUN;
      FUN3 = force? FUN2;
      checkMissing(FUN3);
      return FUN3;
    };
    r18 = dyn lapply(p4, p5);
    check L18() else D5();
  D5():
    deopt 21 [r18];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(r5, dx);
  L18():
    l3 = ld x;
    split__ = ldf `split<-`;
    check L19() else D6();
  D6():
    deopt 23 [r18, l3, r18];
  L19():
    p6 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    r20 = dyn split__(l3, NULL, p6, r18);
    check L20() else D7();
  D7():
    deopt 26 [r18, r20];
  L20():
    st x = r20;
    goto L5();
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg mean:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st x = x;
    mean = ldf mean;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn mean[, trim](p, 0.1);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}