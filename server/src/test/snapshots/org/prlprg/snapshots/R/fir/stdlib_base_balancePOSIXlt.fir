fun main() {
  () -+> V { reg r:cls, reg Sys_getenv:cls, reg r1:V, reg Sys_setenv:cls, reg r2:V, reg as_POSIXlt:cls, reg r3:V, reg d1:*, reg d2:V, reg c:L, reg d4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg r5:V, reg r6:V, reg r7:V, reg l:*, reg c1:L, reg r9:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg format:cls, reg d5:*, reg d6:V, reg p:p(V +), reg r14:V, reg str:cls, reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg d7:*, reg d8:V, reg unclass:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg balancePOSIXlt:cls, reg d9:*, reg d10:V, reg p2:p(V +), reg r21:V, reg str1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg df:*, reg df1:V, reg unclass1:cls, reg r24:V, reg p3:p(V +), reg r26:V, reg balancePOSIXlt1:cls, reg d11:*, reg d12:V, reg p4:p(V +), reg r28:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg d13:*, reg d14:V, reg unCfillPOSIXlt:cls, reg r33:V, reg balancePOSIXlt2:cls, reg d15:*, reg d16:V, reg p5:p(V +), reg r35:V, reg identical:cls, reg r36:V, reg p6:p(V +), reg r38:V, reg str2:cls, reg db:*, reg db1:V, reg p7:p(V +), reg r40:V, reg stopifnot1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg f1:*, reg f2:V, reg format1:cls, reg df2:*, reg df3:V, reg p8:p(V +), reg r44:V, reg identical1:cls, reg r45:V, reg all_equal:cls, reg as_POSIXct:cls, reg d17:*, reg d18:V, reg p9:p(V +), reg r47:V, reg p10:p(V +), reg as_POSIXct1:cls, reg df4:*, reg df5:V, reg p11:p(V +), reg r50:V, reg p12:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r53:V, reg f3:*, reg f4:V, reg format2:cls, reg _POSIXlt:cls, reg db2:*, reg db3:V, reg p13:p(V +), reg r56:V, reg p14:p(V +), reg r58:V, reg identical2:cls, reg r59:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg as_POSIXct2:cls, reg d19:*, reg d20:V, reg p15:p(V +), reg TZ:*, reg TZ1:V, reg p16:p(V +), reg r64:V, reg as_POSIXct3:cls, reg _POSIXlt1:cls, reg db4:*, reg db5:V, reg p17:p(V +), reg TZ2:*, reg TZ3:V, reg p18:p(V +), reg r67:V, reg p19:p(V +), reg r69:V, reg identical3:cls, reg r70:V, reg p20:p(V +), reg r72:V, reg oldTZ:*, reg oldTZ1:V, reg r73:V, reg c2:L, reg Sys_unsetenv:cls, reg r74:V, reg Sys_setenv1:cls, reg oldTZ2:*, reg oldTZ3:V, reg p21:p(V +), reg r76:V |
    mkenv;
    r = clos inner983313946;
    st balancePOSIXlt = r;
    st TZ = "UTC";
    Sys_getenv = ldf `Sys.getenv`;
    check L1() else D0();
  D0():
    deopt 7 [];
  L1():
    r1 = dyn Sys_getenv[, unset]("TZ", "unset");
    check L2() else D1();
  D1():
    deopt 11 [r1];
  L2():
    st oldTZ = r1;
    Sys_setenv = ldf `Sys.setenv`;
    check L3() else D2();
  D2():
    deopt 14 [];
  L3():
    r2 = dyn Sys_setenv[TZ]("UTC");
    check L4() else D3();
  D3():
    deopt 17 [r2];
  L4():
    as_POSIXlt = ldf `as.POSIXlt`;
    check L5() else D4();
  D4():
    deopt 19 [];
  L5():
    r3 = dyn as_POSIXlt("2000-01-02 3:45");
    check L6() else D5();
  D5():
    deopt 21 [r3];
  L6():
    st d1 = r3;
    d1 = ld d1;
    check L7() else D6();
  D6():
    deopt 23 [d1];
  L7():
    d2 = force? d1;
    checkMissing(d2);
    c = `is.object`(d2);
    if c then L9() else L10(d2);
  L8(dx1):
    r5 = `:`(0.0, 16.0);
    r6 = `*`(r5, 20);
    r7 = `+`(dx1, r6);
    l = ld d1;
    c1 = `is.object`(l);
    if c1 then L13() else L14(r7, l);
  L9():
    dr = tryDispatchBuiltin.1("$", d2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(d4):
    r4 = `$`(d4, <sym min>);
    goto L8(r4);
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12(dx3):
    st d1 = dx3;
    format = ldf format;
    check L16() else D7();
  L13():
    dr2 = tryDispatchBuiltin.0("$<-", l, r7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(r7, dr2);
  L14(r9, l2):
    r12 = `$<-`(l2, <sym min>, r7);
    goto L12(r12);
  D7():
    deopt 36 [];
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L16():
    p = prom<V +>{
      d5 = ld d1;
      d6 = force? d5;
      checkMissing(d6);
      return d6;
    };
    r14 = dyn format(p);
    check L17() else D8();
  D8():
    deopt 38 [r14];
  L17():
    st f1 = r14;
    str = ldf str;
    check L18() else D9();
  D9():
    deopt 41 [];
  L18():
    p1 = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r16):
      return r16;
    L1():
      d7 = ld d1;
      d8 = force? d7;
      checkMissing(d8);
      unclass = ldf unclass in base;
      r17 = dyn unclass(d8);
      goto L0(r17);
    L2():
      r15 = dyn base(<sym d1>);
      goto L0(r15);
    };
    r19 = dyn str(p1);
    check L19() else D10();
  D10():
    deopt 43 [r19];
  L19():
    balancePOSIXlt = ldf balancePOSIXlt;
    check L20() else D11();
  D11():
    deopt 45 [];
  L20():
    p2 = prom<V +>{
      d9 = ld d1;
      d10 = force? d9;
      checkMissing(d10);
      return d10;
    };
    r21 = dyn balancePOSIXlt[, `fill.only`](p2, TRUE);
    check L21() else D12();
  D12():
    deopt 49 [r21];
  L21():
    st df = r21;
    str1 = ldf str;
    check L22() else D13();
  D13():
    deopt 52 [];
  L22():
    p3 = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      df = ld df;
      df1 = force? df;
      checkMissing(df1);
      unclass1 = ldf unclass in base;
      r24 = dyn unclass1(df1);
      goto L0(r24);
    L2():
      r22 = dyn base1(<sym df>);
      goto L0(r22);
    };
    r26 = dyn str1(p3);
    check L23() else D14();
  D14():
    deopt 54 [r26];
  L23():
    balancePOSIXlt1 = ldf balancePOSIXlt;
    check L24() else D15();
  D15():
    deopt 56 [];
  L24():
    p4 = prom<V +>{
      d11 = ld d1;
      d12 = force? d11;
      checkMissing(d12);
      return d12;
    };
    r28 = dyn balancePOSIXlt1[, classed](p4, FALSE);
    check L25() else D16();
  D16():
    deopt 60 [r28];
  L25():
    st db = r28;
    stopifnot = ldf stopifnot;
    check L26() else D17();
  D17():
    deopt 63 [];
  L26():
    p6 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r30):
      return r30;
    L2():
      sym3 = ldf unCfillPOSIXlt;
      base3 = ldf unCfillPOSIXlt in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r29 = dyn base2(<lang unCfillPOSIXlt(d1)>, <lang balancePOSIXlt(d1, fill.only=TRUE, classed=FALSE)>);
      goto L0(r29);
    L1(r32):
      balancePOSIXlt2 = ldf balancePOSIXlt;
      p5 = prom<V +>{
        d15 = ld d1;
        d16 = force? d15;
        checkMissing(d16);
        return d16;
      };
      r35 = dyn balancePOSIXlt2[, `fill.only`, classed](p5, TRUE, FALSE);
      identical = ldf identical in base;
      r36 = dyn identical(r32, r35, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r36);
    L4():
      d13 = ld d1;
      d14 = force? d13;
      checkMissing(d14);
      unCfillPOSIXlt = ldf unCfillPOSIXlt in base;
      r33 = dyn unCfillPOSIXlt(d14);
      goto L1(r33);
    L5():
      r31 = dyn base3(<sym d1>);
      goto L1(r31);
    };
    r38 = dyn stopifnot(p6);
    check L27() else D18();
  D18():
    deopt 65 [r38];
  L27():
    str2 = ldf str;
    check L28() else D19();
  D19():
    deopt 67 [];
  L28():
    p7 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r40 = dyn str2(p7);
    check L29() else D20();
  D20():
    deopt 69 [r40];
  L29():
    stopifnot1 = ldf stopifnot;
    check L30() else D21();
  D21():
    deopt 71 [];
  L30():
    p20 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0():
      all_equal = ldf `all.equal`;
      p10 = prom<V +>{
        as_POSIXct = ldf `as.POSIXct`;
        p9 = prom<V +>{
          d17 = ld d1;
          d18 = force? d17;
          checkMissing(d18);
          return d18;
        };
        r47 = dyn as_POSIXct(p9);
        return r47;
      };
      p12 = prom<V +>{
        as_POSIXct1 = ldf `as.POSIXct`;
        p11 = prom<V +>{
          df4 = ld df;
          df5 = force? df4;
          checkMissing(df5);
          return df5;
        };
        r50 = dyn as_POSIXct1(p11);
        return r50;
      };
      dyn all_equal(p10, p12);
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L3():
      f1 = ld f1;
      f2 = force? f1;
      checkMissing(f2);
      format1 = ldf format;
      p8 = prom<V +>{
        df2 = ld df;
        df3 = force? df2;
        checkMissing(df3);
        return df3;
      };
      r44 = dyn format1(p8);
      identical1 = ldf identical in base;
      r45 = dyn identical1(f2, r44, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0();
    L4():
      r41 = dyn base4(<sym f1>, <lang format(df)>);
      goto L0();
    L1():
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L7() else L8();
    L5():
      f3 = ld f1;
      f4 = force? f3;
      checkMissing(f4);
      format2 = ldf format;
      p14 = prom<V +>{
        _POSIXlt = ldf `.POSIXlt`;
        p13 = prom<V +>{
          db2 = ld db;
          db3 = force? db2;
          checkMissing(db3);
          return db3;
        };
        r56 = dyn _POSIXlt(p13);
        return r56;
      };
      r58 = dyn format2(p14);
      identical2 = ldf identical in base;
      r59 = dyn identical2(f4, r58, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L1();
    L6():
      r53 = dyn base5(<sym f1>, <lang format(.POSIXlt(db))>);
      goto L1();
    L2(r61):
      return r61;
    L7():
      as_POSIXct2 = ldf `as.POSIXct`;
      p15 = prom<V +>{
        d19 = ld d1;
        d20 = force? d19;
        checkMissing(d20);
        return d20;
      };
      p16 = prom<V +>{
        TZ = ld TZ;
        TZ1 = force? TZ;
        checkMissing(TZ1);
        return TZ1;
      };
      r64 = dyn as_POSIXct2(p15, p16);
      as_POSIXct3 = ldf `as.POSIXct`;
      p19 = prom<V +>{
        _POSIXlt1 = ldf `.POSIXlt`;
        p17 = prom<V +>{
          db4 = ld db;
          db5 = force? db4;
          checkMissing(db5);
          return db5;
        };
        p18 = prom<V +>{
          TZ2 = ld TZ;
          TZ3 = force? TZ2;
          checkMissing(TZ3);
          return TZ3;
        };
        r67 = dyn _POSIXlt1(p17, p18);
        return r67;
      };
      r69 = dyn as_POSIXct3(p19);
      identical3 = ldf identical in base;
      r70 = dyn identical3(r64, r69, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L2(r70);
    L8():
      r60 = dyn base6(<lang as.POSIXct(d1, TZ)>, <lang as.POSIXct(.POSIXlt(db, TZ))>);
      goto L2(r60);
    };
    r72 = dyn stopifnot1[exprs](p20);
    check L31() else D22();
  D22():
    deopt 74 [r72];
  L31():
    oldTZ = ld oldTZ;
    check L32() else D23();
  D23():
    deopt 75 [oldTZ];
  L32():
    oldTZ1 = force? oldTZ;
    checkMissing(oldTZ1);
    r73 = `==`(oldTZ1, "unset");
    c2 = `as.logical`(r73);
    if c2 then L33() else L0();
  L0():
    Sys_setenv1 = ldf `Sys.setenv`;
    check L37() else D26();
  L33():
    Sys_unsetenv = ldf `Sys.unsetenv`;
    check L34() else D24();
  D24():
    deopt 80 [];
  D26():
    deopt 84 [];
  L34():
    r74 = dyn Sys_unsetenv("TZ");
    check L35() else D25();
  L37():
    p21 = prom<V +>{
      oldTZ2 = ld oldTZ;
      oldTZ3 = force? oldTZ2;
      checkMissing(oldTZ3);
      return oldTZ3;
    };
    r76 = dyn Sys_setenv1[TZ](p21);
    check L38() else D27();
  D25():
    deopt 82 [r74];
  D27():
    deopt 87 [r76];
  L35():
    popenv;
    return r74;
  L38():
    popenv;
    return r76;
  }
}
fun inner983313946(x, `fill.only`, classed) {
  (reg x:*, reg fill_only:*, reg classed:*) -+> V { var x:*, var `fill.only`:*, reg fill_only_isMissing:L, reg fill_only_orDefault:*, var classed:*, reg classed_isMissing:L, reg classed_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg fill_only1:*, reg fill_only2:V, reg classed1:*, reg classed2:V, reg balancePOSIXlt:cls, reg r2:V |
    mkenv;
    st x = x;
    fill_only_isMissing = missing.0(fill_only);
    if fill_only_isMissing then L0(FALSE) else L0(fill_only);
  L0(fill_only_orDefault):
    st `fill.only` = fill_only_orDefault;
    classed_isMissing = missing.0(classed);
    if classed_isMissing then L1(TRUE) else L1(classed);
  L1(classed_orDefault):
    st classed = classed_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang balancePOSIXlt(x, fill.only, classed)>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    fill_only1 = ld `fill.only`;
    check L6() else D1();
  D1():
    deopt 4 [fill_only1];
  L6():
    fill_only2 = force? fill_only1;
    checkMissing(fill_only2);
    classed1 = ld classed;
    check L7() else D2();
  D2():
    deopt 6 [classed1];
  L7():
    classed2 = force? classed1;
    checkMissing(classed2);
    balancePOSIXlt = ldf balancePOSIXlt in base;
    r2 = dyn balancePOSIXlt(x2, fill_only2, classed2);
    check L8() else D3();
  D3():
    deopt 9 [r2];
  L8():
    goto L2(r2);
  }
}