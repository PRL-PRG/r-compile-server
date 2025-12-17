fun main() {
  () -+> V { reg r:cls, reg make_unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg make_unique1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg make_unique2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg make_unique3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg make_unique4:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg make_unique5:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg c4:cls, reg r25:V, reg p4:p(V +), reg r27:V, reg c5:cls, reg r28:V, reg p5:p(V +), reg r30:V, reg trace:cls, reg make_unique6:*, reg make_unique7:V, reg p6:p(V +), reg r32:V, reg data_frame:cls, reg r33:V, reg data_frame1:cls, reg data_frame2:cls, reg r34:V, reg p7:p(V +), reg r36:V, reg stopifnot:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg d1:*, reg d2:V, reg d3:*, reg d4:V, reg identical:cls, reg r39:V, reg p8:p(V +), reg colnames:cls, reg d5:*, reg d6:V, reg p9:p(V +), reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg r46:V, reg r47:V, reg c6:cls, reg r48:V, reg r49:V, reg p10:p(V +), reg r51:V, reg untrace:cls, reg make_unique8:*, reg make_unique9:V, reg p11:p(V +), reg r53:V |
    mkenv;
    r = clos inner955676027;
    st `make.unique` = r;
    make_unique = ldf `make.unique`;
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
      r3 = dyn c("a", "a", "a");
      goto L0(r3);
    L2():
      r1 = dyn base("a", "a", "a");
      goto L0(r1);
    };
    r5 = dyn make_unique(p);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    make_unique1 = ldf `make.unique`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      make_unique2 = ldf `make.unique`;
      p1 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        c1 = ldf c in base;
        r10 = dyn c1("a", "a");
        goto L0(r10);
      L2():
        r8 = dyn base2("a", "a");
        goto L0(r8);
      };
      r12 = dyn make_unique2(p1);
      c2 = ldf c in base;
      r13 = dyn c2(r12, "a");
      goto L0(r13);
    L2():
      r6 = dyn base1(<lang make.unique(c("a", "a"))>, "a");
      goto L0(r6);
    };
    r15 = dyn make_unique1(p2);
    check L3() else D3();
  D3():
    deopt 10 [r15];
  L3():
    make_unique3 = ldf `make.unique`;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c3 = ldf c in base;
      r18 = dyn c3("a", "a", "a.2", "a");
      goto L0(r18);
    L2():
      r16 = dyn base3("a", "a", "a.2", "a");
      goto L0(r16);
    };
    r20 = dyn make_unique3(p3);
    check L5() else D5();
  D5():
    deopt 14 [r20];
  L5():
    make_unique4 = ldf `make.unique`;
    check L6() else D6();
  D6():
    deopt 16 [];
  L6():
    p5 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      make_unique5 = ldf `make.unique`;
      p4 = prom<V +>{
        sym5 = ldf c;
        base5 = ldf c in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r24):
        return r24;
      L1():
        c4 = ldf c in base;
        r25 = dyn c4("a", "a");
        goto L0(r25);
      L2():
        r23 = dyn base5("a", "a");
        goto L0(r23);
      };
      r27 = dyn make_unique5(p4);
      c5 = ldf c in base;
      r28 = dyn c5(r27, "a.2", "a");
      goto L0(r28);
    L2():
      r21 = dyn base4(<lang make.unique(c("a", "a"))>, "a.2", "a");
      goto L0(r21);
    };
    r30 = dyn make_unique4(p5);
    check L7() else D7();
  D7():
    deopt 18 [r30];
  L7():
    trace = ldf trace;
    check L8() else D8();
  D8():
    deopt 20 [];
  L8():
    p6 = prom<V +>{
      make_unique6 = ld `make.unique`;
      make_unique7 = force? make_unique6;
      checkMissing(make_unique7);
      return make_unique7;
    };
    r32 = dyn trace(p6);
    check L9() else D9();
  D9():
    deopt 22 [r32];
  L9():
    data_frame = ldf `data.frame`;
    check L10() else D10();
  D10():
    deopt 24 [];
  L10():
    r33 = dyn data_frame[x, x, x](1.0, 2.0, 3.0);
    check L11() else D11();
  D11():
    deopt 31 [r33];
  L11():
    st d1 = r33;
    data_frame1 = ldf `data.frame`;
    check L12() else D12();
  D12():
    deopt 34 [];
  L12():
    p7 = prom<V +>{
      data_frame2 = ldf `data.frame`;
      r34 = dyn data_frame2[x, x](1.0, 2.0);
      return r34;
    };
    r36 = dyn data_frame1[, x](p7, 3.0);
    check L13() else D13();
  D13():
    deopt 38 [r36];
  L13():
    st d2 = r36;
    stopifnot = ldf stopifnot;
    check L14() else D14();
  D14():
    deopt 41 [];
  L14():
    p8 = prom<V +>{
      sym6 = ldf identical;
      base6 = ldf identical in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      d1 = ld d1;
      d2 = force? d1;
      checkMissing(d2);
      d3 = ld d2;
      d4 = force? d3;
      checkMissing(d4);
      identical = ldf identical in base;
      r39 = dyn identical(d2, d4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r39);
    L2():
      r37 = dyn base6(<sym d1>, <sym d2>);
      goto L0(r37);
    };
    p10 = prom<V +>{
      colnames = ldf colnames;
      p9 = prom<V +>{
        d5 = ld d1;
        d6 = force? d5;
        checkMissing(d6);
        return d6;
      };
      r42 = dyn colnames(p9);
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r46, r47):
      r49 = `==`(r46, r47);
      return r49;
    L1():
      c6 = ldf c in base;
      r48 = dyn c6("x", "x.1", "x.2");
      goto L0(r42, r48);
    L2():
      r45 = dyn base7("x", "x.1", "x.2");
      goto L0(r42, r45);
    };
    r51 = dyn stopifnot(p8, p10);
    check L15() else D15();
  D15():
    deopt 44 [r51];
  L15():
    untrace = ldf untrace;
    check L16() else D16();
  D16():
    deopt 46 [];
  L16():
    p11 = prom<V +>{
      make_unique8 = ld `make.unique`;
      make_unique9 = force? make_unique8;
      checkMissing(make_unique9);
      return make_unique9;
    };
    r53 = dyn untrace(p11);
    check L17() else D17();
  D17():
    deopt 48 [r53];
  L17():
    popenv;
    return r53;
  }
}
fun inner955676027(names, sep) {
  (reg names:*, reg sep:*) -+> V { var names:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg names1:*, reg names2:V, reg sep1:*, reg sep2:V, reg make_unique:cls, reg r2:V |
    mkenv;
    st names = names;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0(".") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    names1 = ld names;
    check L4() else D0();
  L3():
    r = dyn base(<lang make.unique(names, sep)>);
    goto L1(r);
  D0():
    deopt 2 [names1];
  L4():
    names2 = force? names1;
    checkMissing(names2);
    sep1 = ld sep;
    check L5() else D1();
  D1():
    deopt 4 [sep1];
  L5():
    sep2 = force? sep1;
    checkMissing(sep2);
    make_unique = ldf `make.unique` in base;
    r2 = dyn make_unique(names2, sep2);
    check L6() else D2();
  D2():
    deopt 7 [r2];
  L6():
    goto L1(r2);
  }
}