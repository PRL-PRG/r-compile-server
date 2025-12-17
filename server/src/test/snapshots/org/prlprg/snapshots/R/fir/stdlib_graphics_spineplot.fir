fun main() {
  () -+> V { reg r:cls, reg factor:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rep:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg factor1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg rep1:cls, reg r16:V, reg p3:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg c2:cls, reg r20:V, reg p4:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg c3:cls, reg r24:V, reg p5:p(V +), reg r26:V, reg spineplot:cls, reg __:cls, reg r27:V, reg p6:p(V +), reg r29:V, reg spineplot1:cls, reg marginSums:cls, reg UCBAdmissions:*, reg UCBAdmissions1:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg c4:cls, reg r33:V, reg p8:p(V +), reg r35:V, reg p9:p(V +), reg r37:V, reg spineplot2:cls, reg marginSums1:cls, reg UCBAdmissions2:*, reg UCBAdmissions3:V, reg p10:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg c5:cls, reg r41:V, reg p11:p(V +), reg r43:V, reg p12:p(V +), reg r45:V, reg factor2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg c6:cls, reg r48:V, reg p13:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg c7:cls, reg r52:V, reg p14:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg c8:cls, reg r56:V, reg p15:p(V +), reg r58:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg r60:V, reg c9:cls, reg r61:V, reg spineplot3:cls, reg __1:cls, reg r62:V, reg p16:p(V +), reg r64:V, reg spineplot4:cls, reg __2:cls, reg r65:V, reg p17:p(V +), reg r67:V, reg spineplot5:cls, reg __3:cls, reg r68:V, reg p18:p(V +), reg quantile:cls, reg temperature:*, reg temperature1:V, reg p19:p(V +), reg r71:V, reg p20:p(V +), reg r73:V, reg spineplot6:cls, reg __4:cls, reg r74:V, reg p21:p(V +), reg p22:p(V +), reg r77:V |
    mkenv;
    r = clos inner2044426018;
    st spineplot = r;
    factor = ldf factor;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      rep = ldf rep in base;
      r3 = dyn rep(<lang c(1.0, 2.0)>, <lang c(43.0, 41.0)>);
      goto L0(r3);
    L2():
      r1 = dyn base(<lang c(1.0, 2.0)>, <lang c(43.0, 41.0)>);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c(1.0, 2.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(1.0, 2.0);
      goto L0(r5);
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c1 = ldf c in base;
      r11 = dyn c1("placebo", "treated");
      goto L0(r11);
    L2():
      r9 = dyn base2("placebo", "treated");
      goto L0(r9);
    };
    r13 = dyn factor[, levels, labels](p, p1, p2);
    check L2() else D1();
  D1():
    deopt 10 [r13];
  L2():
    st treatment = r13;
    factor1 = ldf factor;
    check L3() else D2();
  D2():
    deopt 13 [];
  L3():
    p3 = prom<V +>{
      sym3 = ldf rep;
      base3 = ldf rep in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      rep1 = ldf rep in base;
      r16 = dyn rep1(<lang c(1.0, 2.0, 3.0, 1.0, 2.0, 3.0)>, <lang c(29.0, 7.0, 7.0, 13.0, 7.0, 21.0)>);
      goto L0(r16);
    L2():
      r14 = dyn base3(<lang c(1.0, 2.0, 3.0, 1.0, 2.0, 3.0)>, <lang c(29.0, 7.0, 7.0, 13.0, 7.0, 21.0)>);
      goto L0(r14);
    };
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c2 = ldf c in base;
      r20 = dyn c2(1.0, 2.0, 3.0);
      goto L0(r20);
    L2():
      r18 = dyn base4(1.0, 2.0, 3.0);
      goto L0(r18);
    };
    p5 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c3 = ldf c in base;
      r24 = dyn c3("none", "some", "marked");
      goto L0(r24);
    L2():
      r22 = dyn base5("none", "some", "marked");
      goto L0(r22);
    };
    r26 = dyn factor1[, levels, labels](p3, p4, p5);
    check L4() else D3();
  D3():
    deopt 19 [r26];
  L4():
    st improved = r26;
    spineplot = ldf spineplot;
    check L5() else D4();
  D4():
    deopt 22 [];
  L5():
    p6 = prom<V +>{
      __ = ldf `~` in base;
      r27 = dyn __(<sym improved>, <sym treatment>);
      return r27;
    };
    r29 = dyn spineplot(p6);
    check L6() else D5();
  D5():
    deopt 24 [r29];
  L6():
    spineplot1 = ldf spineplot;
    check L7() else D6();
  D6():
    deopt 26 [];
  L7():
    p9 = prom<V +>{
      marginSums = ldf marginSums;
      p7 = prom<V +>{
        UCBAdmissions = ld UCBAdmissions;
        UCBAdmissions1 = force? UCBAdmissions;
        checkMissing(UCBAdmissions1);
        return UCBAdmissions1;
      };
      p8 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r32):
        return r32;
      L1():
        c4 = ldf c in base;
        r33 = dyn c4(3.0, 2.0);
        goto L0(r33);
      L2():
        r31 = dyn base6(3.0, 2.0);
        goto L0(r31);
      };
      r35 = dyn marginSums(p7, p8);
      return r35;
    };
    r37 = dyn spineplot1[, main](p9, "Applications at UCB");
    check L8() else D7();
  D7():
    deopt 30 [r37];
  L8():
    spineplot2 = ldf spineplot;
    check L9() else D8();
  D8():
    deopt 32 [];
  L9():
    p12 = prom<V +>{
      marginSums1 = ldf marginSums;
      p10 = prom<V +>{
        UCBAdmissions2 = ld UCBAdmissions;
        UCBAdmissions3 = force? UCBAdmissions2;
        checkMissing(UCBAdmissions3);
        return UCBAdmissions3;
      };
      p11 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r40):
        return r40;
      L1():
        c5 = ldf c in base;
        r41 = dyn c5(3.0, 1.0);
        goto L0(r41);
      L2():
        r39 = dyn base7(3.0, 1.0);
        goto L0(r39);
      };
      r43 = dyn marginSums1(p10, p11);
      return r43;
    };
    r45 = dyn spineplot2[, main](p12, "Admissions at UCB");
    check L10() else D9();
  D9():
    deopt 36 [r45];
  L10():
    factor2 = ldf factor;
    check L11() else D10();
  D10():
    deopt 38 [];
  L11():
    p13 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      c6 = ldf c in base;
      r48 = dyn c6(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0);
      goto L0(r48);
    L2():
      r46 = dyn base8(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0);
      goto L0(r46);
    };
    p14 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      c7 = ldf c in base;
      r52 = dyn c7(1.0, 2.0);
      goto L0(r52);
    L2():
      r50 = dyn base9(1.0, 2.0);
      goto L0(r50);
    };
    p15 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      c8 = ldf c in base;
      r56 = dyn c8("no", "yes");
      goto L0(r56);
    L2():
      r54 = dyn base10("no", "yes");
      goto L0(r54);
    };
    r58 = dyn factor2[, levels, labels](p13, p14, p15);
    check L12() else D11();
  D11():
    deopt 44 [r58];
  L12():
    st fail = r58;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L13() else L14();
  L0(r60):
    st temperature = r60;
    spineplot3 = ldf spineplot;
    check L16() else D13();
  L13():
    c9 = ldf c in base;
    r61 = dyn c9(53.0, 57.0, 58.0, 63.0, 66.0, 67.0, 67.0, 67.0, 68.0, 69.0, 70.0, 70.0, 70.0, 70.0, 72.0, 73.0, 75.0, 75.0, 76.0, 76.0, 78.0, 79.0, 81.0);
    check L15() else D12();
  L14():
    r59 = dyn base11(53.0, 57.0, 58.0, 63.0, 66.0, 67.0, 67.0, 67.0, 68.0, 69.0, 70.0, 70.0, 70.0, 70.0, 72.0, 73.0, 75.0, 75.0, 76.0, 76.0, 78.0, 79.0, 81.0);
    goto L0(r59);
  D12():
    deopt 72 [r61];
  D13():
    deopt 75 [];
  L15():
    goto L0(r61);
  L16():
    p16 = prom<V +>{
      __1 = ldf `~` in base;
      r62 = dyn __1(<sym fail>, <sym temperature>);
      return r62;
    };
    r64 = dyn spineplot3(p16);
    check L17() else D14();
  D14():
    deopt 77 [r64];
  L17():
    spineplot4 = ldf spineplot;
    check L18() else D15();
  D15():
    deopt 79 [];
  L18():
    p17 = prom<V +>{
      __2 = ldf `~` in base;
      r65 = dyn __2(<sym fail>, <sym temperature>);
      return r65;
    };
    r67 = dyn spineplot4[, breaks](p17, 3.0);
    check L19() else D16();
  D16():
    deopt 83 [r67];
  L19():
    spineplot5 = ldf spineplot;
    check L20() else D17();
  D17():
    deopt 85 [];
  L20():
    p18 = prom<V +>{
      __3 = ldf `~` in base;
      r68 = dyn __3(<sym fail>, <sym temperature>);
      return r68;
    };
    p20 = prom<V +>{
      quantile = ldf quantile;
      p19 = prom<V +>{
        temperature = ld temperature;
        temperature1 = force? temperature;
        checkMissing(temperature1);
        return temperature1;
      };
      r71 = dyn quantile(p19);
      return r71;
    };
    r73 = dyn spineplot5[, breaks](p18, p20);
    check L21() else D18();
  D18():
    deopt 89 [r73];
  L21():
    spineplot6 = ldf spineplot;
    check L22() else D19();
  D19():
    deopt 91 [];
  L22():
    p21 = prom<V +>{
      __4 = ldf `~` in base;
      r74 = dyn __4(<sym fail>, <sym temperature>);
      return r74;
    };
    p22 = prom<V +>{
      return <int 2, 1>;
    };
    r77 = dyn spineplot6[, ylevels](p21, p22);
    check L23() else D20();
  D20():
    deopt 95 [r77];
  L23():
    popenv;
    return r77;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
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
    r2 = dyn UseMethod("spineplot");
    goto L0(r2);
  L2():
    r = dyn base("spineplot");
    goto L0(r);
  }
}