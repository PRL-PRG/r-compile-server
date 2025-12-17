fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg LETTERS:*, reg LETTERS1:V, reg c:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg list:cls, reg r7:V, reg L0:*, reg L1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c2:cls, reg r10:V, reg l:*, reg names__:cls, reg r11:V, reg as_data_frame:cls, reg L2:*, reg L3:V, reg p:p(V +), reg nms:*, reg nms1:V, reg p1:p(V +), reg r14:V, reg as_data_frame1:cls, reg L4:*, reg L5:V, reg p2:p(V +), reg r16:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg d0:*, reg d1:V, reg d2:*, reg d3:V, reg identical:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg list1:cls, reg r24:V, reg l1:*, reg names__1:cls, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg as_data_frame2:cls, reg L6:*, reg L7:V, reg p4:p(V +), reg r29:V, reg names:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg as_data_frame3:cls, reg L8:*, reg L9:V, reg p5:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg L10:*, reg L11:V, reg names1:cls, reg r36:V, reg p6:p(V +), reg r38:V, reg names2:cls, reg r39:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg as_data_frame4:cls, reg L12:*, reg L13:V, reg p7:p(V +), reg r43:V, reg names3:cls, reg r44:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r45:V, reg as_data_frame5:cls, reg L14:*, reg L15:V, reg p8:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg r49:V, reg L16:*, reg L17:V, reg names4:cls, reg r50:V, reg p9:p(V +), reg r52:V, reg names5:cls, reg r53:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r54:V, reg r55:V, reg as_data_frame6:cls, reg L18:*, reg L19:V, reg p10:p(V +), reg r57:V, reg names6:cls, reg r58:V |
    mkenv;
    r = clos inner3069603236;
    st `as.data.frame` = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r2):
    st L0 = r2;
    L0 = ld L0;
    check L20() else D3();
  L10():
    LETTERS = ld LETTERS;
    check L12() else D0();
  L11():
    r1 = dyn base(<lang `[`(LETTERS, `:`(1.0, 7.0))>, <lang c(4, `:`(2.0, 3.0), `:`(5.0, 7.0), 1)>);
    goto L0(r1);
  D0():
    deopt 5 [LETTERS];
  D3():
    deopt 23 [L0];
  L12():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c = `is.object`(LETTERS1);
    if c then L13() else L14(LETTERS1);
  L20():
    L1 = force? L0;
    checkMissing(L1);
    st L = L1;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L1(dx1):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L3(r9):
    st nms = r9;
    l = ld L;
    names__ = ldf `names<-`;
    check L24() else D5();
  L13():
    dr = tryDispatchBuiltin.1("[", LETTERS1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(LETTERS3):
    __ = ldf `[` in base;
    r3 = dyn __(LETTERS3, <int 1, 2, 3, 4, 5, 6, 7>);
    goto L1(r3);
  L21():
    c2 = ldf c in base;
    r10 = dyn c2("nam", "age");
    check L23() else D4();
  L22():
    r8 = dyn base2("nam", "age");
    goto L3(r8);
  D4():
    deopt 31 [r10];
  D5():
    deopt 34 [r9, l, r9];
  L2(r5):
    list = ldf list in base;
    r7 = dyn list(dx1, r5);
    check L19() else D2();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L16():
    c1 = ldf c in base;
    r6 = dyn c1(4, <int 2, 3>, <int 5, 6, 7>, 1);
    check L18() else D1();
  L17():
    r4 = dyn base1(4, <lang `:`(2.0, 3.0)>, <lang `:`(5.0, 7.0)>, 1);
    goto L2(r4);
  L23():
    goto L3(r10);
  L24():
    r11 = dyn names__(l, NULL, r9);
    check L25() else D6();
  D1():
    deopt 19 [r6];
  D2():
    deopt 21 [r7];
  D6():
    deopt 36 [r9, r11];
  L18():
    goto L2(r6);
  L19():
    goto L0(r7);
  L25():
    st L = r11;
    as_data_frame = ldf `as.data.frame`;
    check L26() else D7();
  D7():
    deopt 39 [];
  L26():
    p = prom<V +>{
      L2 = ld L0;
      L3 = force? L2;
      checkMissing(L3);
      return L3;
    };
    p1 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r14 = dyn as_data_frame[, `col.names`](p, p1);
    check L27() else D8();
  D8():
    deopt 43 [r14];
  L27():
    st d0 = r14;
    as_data_frame1 = ldf `as.data.frame`;
    check L28() else D9();
  D9():
    deopt 46 [];
  L28():
    p2 = prom<V +>{
      L4 = ld L;
      L5 = force? L4;
      checkMissing(L5);
      return L5;
    };
    r16 = dyn as_data_frame1(p2);
    check L29() else D10();
  D10():
    deopt 48 [r16];
  L29():
    st d1 = r16;
    stopifnot = ldf stopifnot;
    check L30() else D11();
  D11():
    deopt 51 [];
  L30():
    p3 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      d0 = ld d0;
      d1 = force? d0;
      checkMissing(d1);
      d2 = ld d1;
      d3 = force? d2;
      checkMissing(d3);
      identical = ldf identical in base;
      r19 = dyn identical(d1, d3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r19);
    L2():
      r17 = dyn base3(<sym d0>, <sym d1>);
      goto L0(r17);
    };
    r21 = dyn stopifnot(p3);
    check L31() else D12();
  D12():
    deopt 53 [r21];
  L31():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  L4(r23):
    st L = r23;
    l1 = ld L;
    names__1 = ldf `names<-`;
    check L35() else D14();
  L32():
    list1 = ldf list in base;
    r24 = dyn list1(<int 1, 2, 3, 4>);
    check L34() else D13();
  L33():
    r22 = dyn base4[A](<lang `:`(1.0, 4.0)>);
    goto L4(r22);
  D13():
    deopt 60 [r24];
  D14():
    deopt 65 [NA_LGL, l1, NA_LGL];
  L34():
    goto L4(r24);
  L35():
    r25 = dyn names__1(l1, NULL, NA_LGL);
    check L36() else D15();
  D15():
    deopt 67 [NA_LGL, r25];
  L36():
    st L = r25;
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L37() else L38();
  L5():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L42() else L43();
  L37():
    as_data_frame2 = ldf `as.data.frame`;
    check L39() else D16();
  L38():
    r26 = dyn base5(<lang `<-`(dL, as.data.frame(L))>);
    goto L5();
  D16():
    deopt 72 [];
  L6():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L47() else L48();
  L39():
    p4 = prom<V +>{
      L6 = ld L;
      L7 = force? L6;
      checkMissing(L7);
      return L7;
    };
    r29 = dyn as_data_frame2(p4);
    check L40() else D17();
  L42():
    as_data_frame3 = ldf `as.data.frame`;
    check L44() else D19();
  L43():
    r31 = dyn base6(<lang `<-`(dL1, as.data.frame(L, col.names=names(L)))>);
    goto L6();
  D17():
    deopt 74 [r29];
  D19():
    deopt 81 [];
  L7():
    sym9 = ldf names;
    base9 = ldf names in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L52() else L53();
  L40():
    st dL = r29;
    names = ldf names in base;
    r30 = dyn names(r29);
    check L41() else D18();
  L44():
    p5 = prom<V +>{
      L8 = ld L;
      L9 = force? L8;
      checkMissing(L9);
      return L9;
    };
    p6 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      L10 = ld L;
      L11 = force? L10;
      checkMissing(L11);
      names1 = ldf names in base;
      r36 = dyn names1(L11);
      goto L0(r36);
    L2():
      r34 = dyn base7(<sym L>);
      goto L0(r34);
    };
    r38 = dyn as_data_frame3[, `col.names`](p5, p6);
    check L45() else D20();
  L47():
    as_data_frame4 = ldf `as.data.frame`;
    check L49() else D22();
  L48():
    r40 = dyn base8(<lang `<-`(dL1., as.data.frame(L, check.names=FALSE))>);
    goto L7();
  D18():
    deopt 77 [r30];
  D20():
    deopt 85 [r38];
  D22():
    deopt 92 [];
  L8():
    sym11 = ldf names;
    base11 = ldf names in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L57() else L58();
  L41():
    goto L5();
  L45():
    st dL1 = r38;
    names2 = ldf names in base;
    r39 = dyn names2(r38);
    check L46() else D21();
  L49():
    p7 = prom<V +>{
      L12 = ld L;
      L13 = force? L12;
      checkMissing(L13);
      return L13;
    };
    r43 = dyn as_data_frame4[, `check.names`](p7, FALSE);
    check L50() else D23();
  L52():
    as_data_frame5 = ldf `as.data.frame`;
    check L54() else D25();
  L53():
    r45 = dyn base9(<lang `<-`(dL2, as.data.frame(L, col.names=names(L), check.names=FALSE))>);
    goto L8();
  D21():
    deopt 88 [r39];
  D23():
    deopt 96 [r43];
  D25():
    deopt 103 [];
  L9(r55):
    popenv;
    return r55;
  L46():
    goto L6();
  L50():
    st `dL1.` = r43;
    names3 = ldf names in base;
    r44 = dyn names3(r43);
    check L51() else D24();
  L54():
    p8 = prom<V +>{
      L14 = ld L;
      L15 = force? L14;
      checkMissing(L15);
      return L15;
    };
    p9 = prom<V +>{
      sym10 = ldf names;
      base10 = ldf names in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      L16 = ld L;
      L17 = force? L16;
      checkMissing(L17);
      names4 = ldf names in base;
      r50 = dyn names4(L17);
      goto L0(r50);
    L2():
      r48 = dyn base10(<sym L>);
      goto L0(r48);
    };
    r52 = dyn as_data_frame5[, `col.names`, `check.names`](p8, p9, FALSE);
    check L55() else D26();
  L57():
    as_data_frame6 = ldf `as.data.frame`;
    check L59() else D28();
  L58():
    r54 = dyn base11(<lang `<-`(dLn, as.data.frame(L, new.names=TRUE, check.names=FALSE))>);
    goto L9(r54);
  D24():
    deopt 99 [r44];
  D26():
    deopt 109 [r52];
  D28():
    deopt 116 [];
  L51():
    goto L7();
  L55():
    st dL2 = r52;
    names5 = ldf names in base;
    r53 = dyn names5(r52);
    check L56() else D27();
  L59():
    p10 = prom<V +>{
      L18 = ld L;
      L19 = force? L18;
      checkMissing(L19);
      return L19;
    };
    r57 = dyn as_data_frame6[, `new.names`, `check.names`](p10, TRUE, FALSE);
    check L60() else D29();
  D27():
    deopt 112 [r53];
  D29():
    deopt 122 [r57];
  L56():
    goto L8();
  L60():
    st dLn = r57;
    names6 = ldf names in base;
    r58 = dyn names6(r57);
    check L61() else D30();
  D30():
    deopt 125 [r58];
  L61():
    goto L9(r58);
  }
}
fun inner3069603236(x, `row.names`, optional, `...`) {
  (reg x:*, reg row_names:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var `row.names`:*, reg row_names_isMissing:L, reg row_names_orDefault:*, var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg c1:L, reg as_data_frame:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg UseMethod:cls, reg r11:V |
    mkenv;
    st x = x;
    row_names_isMissing = missing.0(row_names);
    if row_names_isMissing then L0(NULL) else L0(row_names);
  L0(row_names_orDefault):
    st `row.names` = row_names_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L1(FALSE) else L1(optional);
  L1(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L9() else L3();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 1 [x1];
  L3():
    sym2 = ldf UseMethod;
    base2 = ldf UseMethod in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L2(c);
  L9():
    as_data_frame = ldf `as.data.frame`;
    check L10() else D1();
  D1():
    deopt 5 [];
  L5(r10):
    popenv;
    return r10;
  L10():
    p = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      list = ldf list in base;
      r4 = dyn list();
      goto L0(r4);
    L2():
      r2 = dyn base1();
      goto L0(r2);
    };
    r6 = dyn as_data_frame(p);
    check L11() else D2();
  L14():
    UseMethod = ldf UseMethod in base;
    r11 = dyn UseMethod("as.data.frame");
    goto L5(r11);
  L15():
    r9 = dyn base2("as.data.frame");
    goto L5(r9);
  D2():
    deopt 7 [r6];
  L11():
    popenv;
    return r6;
  }
}