fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg with:cls, reg InsectSprays:*, reg InsectSprays1:V, reg p1:p(V +), reg reorder:cls, reg spray:*, reg spray1:V, reg p2:p(V +), reg count:*, reg count1:V, reg p3:p(V +), reg median:*, reg median1:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg boxplot:cls, reg __:cls, reg r14:V, reg p6:p(V +), reg InsectSprays2:*, reg InsectSprays3:V, reg p7:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg with1:cls, reg InsectSprays4:*, reg InsectSprays5:V, reg p8:p(V +), reg reorder1:cls, reg spray2:*, reg spray3:V, reg p9:p(V +), reg count2:*, reg count3:V, reg p10:p(V +), reg median2:*, reg median3:V, reg p11:p(V +), reg r24:V, reg p12:p(V +), reg r26:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg bymedian:*, reg bymedian1:V, reg attr:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg bymedianR:*, reg bymedianR1:V, reg attr1:cls, reg r34:V, reg identical:cls, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg sc:*, reg sc1:V, reg names:cls, reg r40:V, reg LETTERS:*, reg LETTERS1:V, reg c:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r41:V, reg identical1:cls, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg levels:cls, reg bymedian2:*, reg bymedian3:V, reg p13:p(V +), reg r46:V, reg nms:*, reg nms1:V, reg c1:L, reg nms3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order:cls, reg sc2:*, reg sc3:V, reg p14:p(V +), reg r48:V, reg __2:cls, reg r49:V, reg identical2:cls, reg r50:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r51:V, reg r52:V, reg levels1:cls, reg bymedianR2:*, reg bymedianR3:V, reg p15:p(V +), reg r54:V, reg nms4:*, reg nms5:V, reg c2:L, reg nms7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg rev:cls, reg isc:*, reg isc1:V, reg p16:p(V +), reg r56:V, reg __3:cls, reg r57:V, reg identical3:cls, reg r58:V, reg p17:p(V +), reg r60:V |
    mkenv;
    r = clos inner1618591243;
    st `reorder.default` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1(r6):
    st bymedian = r6;
    boxplot = ldf boxplot;
    check L11() else D4();
  L5():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    with = ldf with;
    check L9() else D2();
  L8():
    r5 = dyn base1(<sym InsectSprays>, <lang reorder(spray, count, median)>);
    goto L1(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  D4():
    deopt 16 [];
  L6():
    goto L0();
  L9():
    p1 = prom<V +>{
      InsectSprays = ld InsectSprays;
      InsectSprays1 = force? InsectSprays;
      checkMissing(InsectSprays1);
      return InsectSprays1;
    };
    p5 = prom<V +>{
      reorder = ldf reorder;
      p2 = prom<V +>{
        spray = ld spray;
        spray1 = force? spray;
        checkMissing(spray1);
        return spray1;
      };
      p3 = prom<V +>{
        count = ld count;
        count1 = force? count;
        checkMissing(count1);
        return count1;
      };
      p4 = prom<V +>{
        median = ld median;
        median1 = force? median;
        checkMissing(median1);
        return median1;
      };
      r11 = dyn reorder(p2, p3, p4);
      return r11;
    };
    r13 = dyn with(p1, p5);
    check L10() else D3();
  L11():
    p6 = prom<V +>{
      __ = ldf `~` in base;
      r14 = dyn __(<sym count>, <sym bymedian>);
      return r14;
    };
    p7 = prom<V +>{
      InsectSprays2 = ld InsectSprays;
      InsectSprays3 = force? InsectSprays2;
      checkMissing(InsectSprays3);
      return InsectSprays3;
    };
    r17 = dyn boxplot[, data, xlab, ylab, main, varwidth, col](p6, p7, "Type of spray", "Insect count", "InsectSprays data", TRUE, "lightgray");
    check L12() else D5();
  D3():
    deopt 13 [r13];
  D5():
    deopt 30 [r17];
  L10():
    goto L1(r13);
  L12():
    sym2 = ldf with;
    base2 = ldf with in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L2(r19):
    st bymedianR = r19;
    stopifnot = ldf stopifnot;
    check L17() else D8();
  L13():
    with1 = ldf with;
    check L15() else D6();
  L14():
    r18 = dyn base2(<sym InsectSprays>, <lang reorder(spray, count, median, decreasing=TRUE)>);
    goto L2(r18);
  D6():
    deopt 33 [];
  D8():
    deopt 39 [];
  L15():
    p8 = prom<V +>{
      InsectSprays4 = ld InsectSprays;
      InsectSprays5 = force? InsectSprays4;
      checkMissing(InsectSprays5);
      return InsectSprays5;
    };
    p12 = prom<V +>{
      reorder1 = ldf reorder;
      p9 = prom<V +>{
        spray2 = ld spray;
        spray3 = force? spray2;
        checkMissing(spray3);
        return spray3;
      };
      p10 = prom<V +>{
        count2 = ld count;
        count3 = force? count2;
        checkMissing(count3);
        return count3;
      };
      p11 = prom<V +>{
        median2 = ld median;
        median3 = force? median2;
        checkMissing(median3);
        return median3;
      };
      r24 = dyn reorder1[, , , decreasing](p9, p10, p11, TRUE);
      return r24;
    };
    r26 = dyn with1(p8, p12);
    check L16() else D7();
  L17():
    p17 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L10() else L11();
    L0():
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L16() else L17();
    L10():
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L12() else L13();
    L11():
      r27 = dyn base3(<lang `<-`(sc, attr(bymedian, "scores"))>, <lang attr(bymedianR, "scores")>);
      goto L0();
    L1(r30):
      st sc = r30;
      sym5 = ldf attr;
      base5 = ldf attr in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L14() else L15();
    L3():
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L23() else L24();
    L12():
      bymedian = ld bymedian;
      bymedian1 = force? bymedian;
      checkMissing(bymedian1);
      attr = ldf attr in base;
      r31 = dyn attr(bymedian1, "scores");
      goto L1(r31);
    L13():
      r29 = dyn base4(<sym bymedian>, "scores");
      goto L1(r29);
    L16():
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L18() else L19();
    L17():
      r36 = dyn base6(<lang `<-`(nms, names(sc))>, <lang `[`(LETTERS, `:`(1.0, 6.0))>);
      goto L3();
    L2(r33):
      identical = ldf identical in base;
      r35 = dyn identical(r30, r33, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0();
    L4(r39):
      st nms = r39;
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      c = `is.object`(LETTERS1);
      if c then L20() else L21(LETTERS1);
    L6():
      sym9 = ldf identical;
      base9 = ldf identical in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L28() else L29();
    L14():
      bymedianR = ld bymedianR;
      bymedianR1 = force? bymedianR;
      checkMissing(bymedianR1);
      attr1 = ldf attr in base;
      r34 = dyn attr1(bymedianR1, "scores");
      goto L2(r34);
    L15():
      r32 = dyn base5(<sym bymedianR>, "scores");
      goto L2(r32);
    L18():
      sc = ld sc;
      sc1 = force? sc;
      checkMissing(sc1);
      names = ldf names in base;
      r40 = dyn names(sc1);
      goto L4(r40);
    L19():
      r38 = dyn base7(<sym sc>);
      goto L4(r38);
    L23():
      levels = ldf levels;
      p13 = prom<V +>{
        bymedian2 = ld bymedian;
        bymedian3 = force? bymedian2;
        checkMissing(bymedian3);
        return bymedian3;
      };
      r46 = dyn levels(p13);
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      c1 = `is.object`(nms1);
      if c1 then L25() else L26(nms1);
    L24():
      r43 = dyn base8(<lang levels(bymedian)>, <lang `[`(nms, `<-`(isc, order(sc)))>);
      goto L6();
    L5(dx1):
      identical1 = ldf identical in base;
      r42 = dyn identical1(r39, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L3();
    L7(dx3):
      identical2 = ldf identical in base;
      r50 = dyn identical2(r46, dx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L6();
    L8(r52):
      return r52;
    L20():
      dr = tryDispatchBuiltin.1("[", LETTERS1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L22() else L21(dr);
    L21(LETTERS3):
      __1 = ldf `[` in base;
      r41 = dyn __1(LETTERS3, <int 1, 2, 3, 4, 5, 6>);
      goto L5(r41);
    L25():
      dr2 = tryDispatchBuiltin.1("[", nms1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L27() else L26(dr2);
    L26(nms3):
      order = ldf order;
      p14 = prom<V +>{
        sc2 = ld sc;
        sc3 = force? sc2;
        checkMissing(sc3);
        return sc3;
      };
      r48 = dyn order(p14);
      st isc = r48;
      __2 = ldf `[` in base;
      r49 = dyn __2(nms3, r48);
      goto L7(r49);
    L28():
      levels1 = ldf levels;
      p15 = prom<V +>{
        bymedianR2 = ld bymedianR;
        bymedianR3 = force? bymedianR2;
        checkMissing(bymedianR3);
        return bymedianR3;
      };
      r54 = dyn levels1(p15);
      nms4 = ld nms;
      nms5 = force? nms4;
      checkMissing(nms5);
      c2 = `is.object`(nms5);
      if c2 then L30() else L31(nms5);
    L29():
      r51 = dyn base9(<lang levels(bymedianR)>, <lang `[`(nms, rev(isc))>);
      goto L8(r51);
    L9(dx5):
      identical3 = ldf identical in base;
      r58 = dyn identical3(r54, dx5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L8(r58);
    L22():
      dx = getTryDispatchBuiltinValue(dr);
      goto L5(dx);
    L27():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L7(dx2);
    L30():
      dr4 = tryDispatchBuiltin.1("[", nms5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L32() else L31(dr4);
    L31(nms7):
      rev = ldf rev;
      p16 = prom<V +>{
        isc = ld isc;
        isc1 = force? isc;
        checkMissing(isc1);
        return isc1;
      };
      r56 = dyn rev(p16);
      __3 = ldf `[` in base;
      r57 = dyn __3(nms7, r56);
      goto L9(r57);
    L32():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L9(dx4);
    };
    r60 = dyn stopifnot[exprs](p17);
    check L18() else D9();
  D7():
    deopt 36 [r26];
  D9():
    deopt 42 [r60];
  L16():
    goto L2(r26);
  L18():
    popenv;
    return r60;
  }
}
fun inner1618591243(x, X, FUN, `...`, order, decreasing) {
  (reg x:*, reg X:*, reg FUN:*, reg ddd:dots, reg order:*, reg decreasing:*) -+> V { var x:*, var X:*, var FUN:*, reg FUN_isMissing:L, reg FUN_orDefault:*, reg mean:*, reg mean1:V, reg p:p(V +), var `...`:dots?, var order:*, reg order_isMissing:L, reg order_orDefault:*, reg is_ordered:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), var decreasing:*, reg decreasing_isMissing:L, reg decreasing_orDefault:*, reg tapply:cls, reg X1:*, reg X2:V, reg p3:p(V +), reg x3:*, reg x4:V, reg p4:p(V +), reg FUN1:*, reg FUN2:V, reg p5:p(V +), reg ddd1:dots?, reg r7:V, reg structure:cls, reg order1:*, reg order2:V, reg c:L, reg ordered:*, reg ordered1:V, reg ordered2:V, reg factor:*, reg factor1:V, reg ordered3:cls, reg x5:*, reg x6:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg sort:cls, reg scores:*, reg scores1:V, reg p7:p(V +), reg decreasing1:*, reg decreasing2:V, reg p8:p(V +), reg r13:V, reg names:cls, reg r14:V, reg p9:p(V +), reg r16:V, reg p10:p(V +), reg scores2:*, reg scores3:V, reg p11:p(V +), reg r19:V |
    mkenv;
    st x = x;
    st X = X;
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
    st `...` = ddd;
    order_isMissing = missing.0(order);
    if order_isMissing then L2() else L3(order);
  L2():
    p2 = prom<V +>{
      is_ordered = ldf `is.ordered`;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r2 = dyn is_ordered(p1);
      return r2;
    };
    goto L3(p2);
  L3(order_orDefault):
    st order = order_orDefault;
    decreasing_isMissing = missing.0(decreasing);
    if decreasing_isMissing then L4(FALSE) else L4(decreasing);
  L4(decreasing_orDefault):
    st decreasing = decreasing_orDefault;
    tapply = ldf tapply;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p3 = prom<V +>{
      X1 = ld X;
      X2 = force? X1;
      checkMissing(X2);
      return X2;
    };
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p5 = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    ddd1 = ld `...`;
    r7 = dyn tapply[X, INDEX, FUN, `...`](p3, p4, p5, ddd1);
    check L6() else D1();
  D1():
    deopt 9 [r7];
  L6():
    st scores = r7;
    structure = ldf structure;
    check L7() else D2();
  D2():
    deopt 12 [];
  L7():
    p10 = prom<V +>{
      order1 = ld order;
      order2 = force? order1;
      checkMissing(order2);
      c = `as.logical`(order2);
      if c then L2() else L0();
    L0():
      factor = ld factor;
      factor1 = force? factor;
      checkMissing(factor1);
      goto L1(factor1);
    L1(ordered2):
      checkFun.0(ordered2);
      ordered3 = ordered2 as cls;
      p6 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      p9 = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r10):
        return r10;
      L1():
        sort = ldf sort;
        p7 = prom<V +>{
          scores = ld scores;
          scores1 = force? scores;
          checkMissing(scores1);
          return scores1;
        };
        p8 = prom<V +>{
          decreasing1 = ld decreasing;
          decreasing2 = force? decreasing1;
          checkMissing(decreasing2);
          return decreasing2;
        };
        r13 = dyn sort[, decreasing, `na.last`](p7, p8, TRUE);
        names = ldf names in base;
        r14 = dyn names(r13);
        goto L0(r14);
      L2():
        r9 = dyn base(<lang sort(scores, decreasing=decreasing, na.last=TRUE)>);
        goto L0(r9);
      };
      r16 = dyn ordered3[, levels](p6, p9);
      return r16;
    L2():
      ordered = ld ordered;
      ordered1 = force? ordered;
      checkMissing(ordered1);
      goto L1(ordered1);
    };
    p11 = prom<V +>{
      scores2 = ld scores;
      scores3 = force? scores2;
      checkMissing(scores3);
      return scores3;
    };
    r19 = dyn structure[, scores](p10, p11);
    check L8() else D3();
  D3():
    deopt 16 [r19];
  L8():
    popenv;
    return r19;
  }
}