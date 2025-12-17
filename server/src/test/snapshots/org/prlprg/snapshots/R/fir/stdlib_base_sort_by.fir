fun main() {
  () -+> V { reg r:cls, reg mtcars:*, reg mtcars1:V, reg c:L, reg mtcars3:V, reg dr:V, reg dc:L, reg dx:V, reg r1:V, reg mtcars4:*, reg mtcars5:V, reg c1:L, reg mtcars7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg with:cls, reg mtcars8:*, reg mtcars9:V, reg p:p(V +), reg sort_by:cls, reg mpg:*, reg mpg1:V, reg p1:p(V +), reg am:*, reg am1:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg sort_by1:cls, reg mtcars10:*, reg mtcars11:V, reg p4:p(V +), reg runif:cls, reg nrow:cls, reg mtcars12:*, reg mtcars13:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg r17:V, reg sort_by2:cls, reg mtcars14:*, reg mtcars15:V, reg p8:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg mtcars16:*, reg mtcars17:V, reg c2:L, reg mtcars19:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg mtcars20:*, reg mtcars21:V, reg c3:L, reg mtcars23:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r22:V, reg list:cls, reg r23:V, reg p9:p(V +), reg r25:V, reg subset:cls, reg sort_by3:cls, reg mtcars24:*, reg mtcars25:V, reg p10:p(V +), reg __:cls, reg r27:V, reg p11:p(V +), reg r29:V, reg p12:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg am2:*, reg am3:V, reg mpg2:*, reg mpg3:V, reg c4:cls, reg r33:V, reg p13:p(V +), reg r35:V, reg subset1:cls, reg sort_by_data_frame:cls, reg mtcars26:*, reg mtcars27:V, reg p14:p(V +), reg __1:cls, reg r37:V, reg p15:p(V +), reg r39:V, reg p16:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg am4:*, reg am5:V, reg mpg4:*, reg mpg5:V, reg c5:cls, reg r43:V, reg p17:p(V +), reg r45:V |
    mkenv;
    r = clos inner3924448841;
    st sort_by = r;
    mtcars = ld mtcars;
    check L1() else D0();
  D0():
    deopt 3 [mtcars];
  L1():
    mtcars1 = force? mtcars;
    checkMissing(mtcars1);
    c = `is.object`(mtcars1);
    if c then L3() else L4(mtcars1);
  L2():
    mtcars4 = ld mtcars;
    check L6() else D1();
  L3():
    dr = tryDispatchBuiltin.1("$", mtcars1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(mtcars3):
    r1 = `$`(mtcars3, <sym am>);
    goto L2();
  D1():
    deopt 6 [mtcars4];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2();
  L6():
    mtcars5 = force? mtcars4;
    checkMissing(mtcars5);
    c1 = `is.object`(mtcars5);
    if c1 then L8() else L9(mtcars5);
  L7():
    sym = ldf with;
    base = ldf with in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L8():
    dr2 = tryDispatchBuiltin.1("$", mtcars5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L10() else L9(dr2);
  L9(mtcars7):
    r2 = `$`(mtcars7, <sym mpg>);
    goto L7();
  L0():
    sort_by1 = ldf sort_by;
    check L15() else D4();
  L10():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7();
  L11():
    with = ldf with;
    check L13() else D2();
  L12():
    r3 = dyn base(<sym mtcars>, <lang sort_by(mpg, am)>);
    goto L0();
  D2():
    deopt 11 [];
  D4():
    deopt 16 [];
  L13():
    p = prom<V +>{
      mtcars8 = ld mtcars;
      mtcars9 = force? mtcars8;
      checkMissing(mtcars9);
      return mtcars9;
    };
    p3 = prom<V +>{
      sort_by = ldf sort_by;
      p1 = prom<V +>{
        mpg = ld mpg;
        mpg1 = force? mpg;
        checkMissing(mpg1);
        return mpg1;
      };
      p2 = prom<V +>{
        am = ld am;
        am1 = force? am;
        checkMissing(am1);
        return am1;
      };
      r8 = dyn sort_by(p1, p2);
      return r8;
    };
    r10 = dyn with(p, p3);
    check L14() else D3();
  L15():
    p4 = prom<V +>{
      mtcars10 = ld mtcars;
      mtcars11 = force? mtcars10;
      checkMissing(mtcars11);
      return mtcars11;
    };
    p7 = prom<V +>{
      runif = ldf runif;
      p6 = prom<V +>{
        nrow = ldf nrow;
        p5 = prom<V +>{
          mtcars12 = ld mtcars;
          mtcars13 = force? mtcars12;
          checkMissing(mtcars13);
          return mtcars13;
        };
        r13 = dyn nrow(p5);
        return r13;
      };
      r15 = dyn runif(p6);
      return r15;
    };
    r17 = dyn sort_by1(p4, p7);
    check L16() else D5();
  D3():
    deopt 14 [r10];
  D5():
    deopt 19 [r17];
  L14():
    goto L0();
  L16():
    sort_by2 = ldf sort_by;
    check L17() else D6();
  D6():
    deopt 21 [];
  L17():
    p8 = prom<V +>{
      mtcars14 = ld mtcars;
      mtcars15 = force? mtcars14;
      checkMissing(mtcars15);
      return mtcars15;
    };
    p9 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      mtcars16 = ld mtcars;
      mtcars17 = force? mtcars16;
      checkMissing(mtcars17);
      c2 = `is.object`(mtcars17);
      if c2 then L4() else L5(mtcars17);
    L2():
      r19 = dyn base1(<lang `$`(mtcars, am)>, <lang `$`(mtcars, mpg)>);
      goto L0(r19);
    L3(dx5):
      mtcars20 = ld mtcars;
      mtcars21 = force? mtcars20;
      checkMissing(mtcars21);
      c3 = `is.object`(mtcars21);
      if c3 then L8() else L9(mtcars21);
    L4():
      dr4 = tryDispatchBuiltin.1("$", mtcars17);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(mtcars19):
      r21 = `$`(mtcars19, <sym am>);
      goto L3(r21);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L3(dx4);
    L7(dx7):
      list = ldf list in base;
      r23 = dyn list(dx5, dx7);
      goto L0(r23);
    L8():
      dr6 = tryDispatchBuiltin.1("$", mtcars21);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L10() else L9(dr6);
    L9(mtcars23):
      r22 = `$`(mtcars23, <sym mpg>);
      goto L7(r22);
    L10():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L7(dx6);
    };
    r25 = dyn sort_by2(p8, p9);
    check L18() else D7();
  D7():
    deopt 24 [r25];
  L18():
    subset = ldf subset;
    check L19() else D8();
  D8():
    deopt 26 [];
  L19():
    p12 = prom<V +>{
      sort_by3 = ldf sort_by;
      p10 = prom<V +>{
        mtcars24 = ld mtcars;
        mtcars25 = force? mtcars24;
        checkMissing(mtcars25);
        return mtcars25;
      };
      p11 = prom<V +>{
        __ = ldf `~` in base;
        r27 = dyn __(<lang `+`(am, mpg)>);
        return r27;
      };
      r29 = dyn sort_by3(p10, p11);
      return r29;
    };
    p13 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r32):
      return r32;
    L1():
      am2 = ld am;
      am3 = force? am2;
      checkMissing(am3);
      mpg2 = ld mpg;
      mpg3 = force? mpg2;
      checkMissing(mpg3);
      c4 = ldf c in base;
      r33 = dyn c4(am3, mpg3);
      goto L0(r33);
    L2():
      r31 = dyn base2(<sym am>, <sym mpg>);
      goto L0(r31);
    };
    r35 = dyn subset[, select](p12, p13);
    check L20() else D9();
  D9():
    deopt 30 [r35];
  L20():
    subset1 = ldf subset;
    check L21() else D10();
  D10():
    deopt 32 [];
  L21():
    p16 = prom<V +>{
      sort_by_data_frame = ldf `sort_by.data.frame`;
      p14 = prom<V +>{
        mtcars26 = ld mtcars;
        mtcars27 = force? mtcars26;
        checkMissing(mtcars27);
        return mtcars27;
      };
      p15 = prom<V +>{
        __1 = ldf `~` in base;
        r37 = dyn __1(<lang list(am, `-`(mpg))>);
        return r37;
      };
      r39 = dyn sort_by_data_frame(p14, p15);
      return r39;
    };
    p17 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      am4 = ld am;
      am5 = force? am4;
      checkMissing(am5);
      mpg4 = ld mpg;
      mpg5 = force? mpg4;
      checkMissing(mpg5);
      c5 = ldf c in base;
      r43 = dyn c5(am5, mpg5);
      goto L0(r43);
    L2():
      r41 = dyn base3(<sym am>, <sym mpg>);
      goto L0(r41);
    };
    r45 = dyn subset1[, select](p16, p17);
    check L22() else D11();
  D11():
    deopt 36 [r45];
  L22():
    popenv;
    return r45;
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
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
    r2 = dyn UseMethod("sort_by");
    goto L0(r2);
  L2():
    r = dyn base("sort_by");
    goto L0(r);
  }
}