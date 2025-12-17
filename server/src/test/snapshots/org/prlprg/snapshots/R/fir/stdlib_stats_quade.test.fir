fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg as_character:cls, reg r9:V, reg LETTERS:*, reg LETTERS1:V, reg c1:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg list:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg y:*, reg y1:V, reg quade_test:cls, reg y2:*, reg y3:V, reg p2:p(V +), reg r15:V, reg __1:cls, reg r16:V, reg r17:cls, reg as_data_frame:cls, reg as_table:cls, reg y4:*, reg y5:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg p5:p(V +), reg r23:V, reg quade_test1:cls, reg __2:cls, reg r24:V, reg p6:p(V +), reg dy:*, reg dy1:V, reg p7:p(V +), reg r27:V, reg qTst:*, reg qTst1:V, reg c2:L, reg qTst3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r28:V, reg l:*, reg c3:L, reg dx5:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx7:V, reg dx9:V, reg r29:V, reg stopifnot:cls, reg all_equal:cls, reg qTst4:*, reg qTst5:V, reg p8:p(V +), reg qT_:*, reg qT_1:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg dy2:*, reg dy3:V, reg c4:L, reg dy5:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg order:cls, reg dy6:*, reg dy7:V, reg c5:L, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r35:V, reg p11:p(V +), reg r37:V, reg __4:cls, reg r38:V, reg quade_test2:cls, reg __5:cls, reg r39:V, reg p12:p(V +), reg dys:*, reg dys1:V, reg p13:p(V +), reg r42:V, reg qTst6:*, reg qTst7:V, reg c6:L, reg qTst9:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r43:V, reg l3:*, reg c7:L, reg dx17:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx19:V, reg dx21:V, reg r44:V, reg stopifnot1:cls, reg all_equal1:cls, reg qTst10:*, reg qTst11:V, reg p14:p(V +), reg qTs:*, reg qTs1:V, reg p15:p(V +), reg r47:V, reg p16:p(V +), reg r49:V |
    mkenv;
    r = clos inner2813596033;
    st `quade.test` = r;
    matrix = ldf matrix;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(5.0, 4.0, 7.0, 10.0, 12.0, 1.0, 3.0, 1.0, 0.0, 2.0, 16.0, 12.0, 22.0, 22.0, 35.0, 5.0, 4.0, 3.0, 5.0, 4.0, 10.0, 9.0, 7.0, 13.0, 10.0, 19.0, 18.0, 28.0, 37.0, 58.0, 10.0, 7.0, 6.0, 8.0, 7.0);
      goto L0(r3);
    L2():
      r1 = dyn base(5.0, 4.0, 7.0, 10.0, 12.0, 1.0, 3.0, 1.0, 0.0, 2.0, 16.0, 12.0, 22.0, 22.0, 35.0, 5.0, 4.0, 3.0, 5.0, 4.0, 10.0, 9.0, 7.0, 13.0, 10.0, 19.0, 18.0, 28.0, 37.0, 58.0, 10.0, 7.0, 6.0, 8.0, 7.0);
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r6):
      return r6;
    L3():
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r5 = dyn base1[Store, Brand](<lang as.character(`:`(1.0, 7.0))>, <lang `[`(LETTERS, `:`(1.0, 5.0))>);
      goto L0(r5);
    L1(r8):
      LETTERS = ld LETTERS;
      LETTERS1 = force? LETTERS;
      checkMissing(LETTERS1);
      c1 = `is.object`(LETTERS1);
      if c1 then L7() else L8(LETTERS1);
    L5():
      as_character = ldf `as.character` in base;
      r9 = dyn as_character(<int 1, 2, 3, 4, 5, 6, 7>);
      goto L1(r9);
    L6():
      r7 = dyn base2(<lang `:`(1.0, 7.0)>);
      goto L1(r7);
    L2(dx1):
      list = ldf list in base;
      r11 = dyn list(r8, dx1);
      goto L0(r11);
    L7():
      dr = tryDispatchBuiltin.1("[", LETTERS1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L9() else L8(dr);
    L8(LETTERS3):
      __ = ldf `[` in base;
      r10 = dyn __(LETTERS3, <int 1, 2, 3, 4, 5>);
      goto L2(r10);
    L9():
      dx = getTryDispatchBuiltinValue(dr);
      goto L2(dx);
    };
    r13 = dyn matrix[, nrow, byrow, dimnames](p, 7.0, TRUE, p1);
    check L2() else D1();
  D1():
    deopt 12 [r13];
  L2():
    st y = r13;
    y = ld y;
    check L3() else D2();
  D2():
    deopt 14 [y];
  L3():
    y1 = force? y;
    checkMissing(y1);
    quade_test = ldf `quade.test`;
    check L4() else D3();
  D3():
    deopt 17 [];
  L4():
    p2 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r15 = dyn quade_test(p2);
    check L5() else D4();
  D4():
    deopt 19 [r15];
  L5():
    st qTst = r15;
    __1 = ldf `::`;
    check L6() else D5();
  D5():
    deopt 22 [];
  L6():
    r16 = dyn __1("utils", "str");
    check L7() else D6();
  D6():
    deopt 25 [r16];
  L7():
    checkFun.0(r16);
    r17 = r16 as cls;
    p5 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p4 = prom<V +>{
        as_table = ldf `as.table`;
        p3 = prom<V +>{
          y4 = ld y;
          y5 = force? y4;
          checkMissing(y5);
          return y5;
        };
        r19 = dyn as_table(p3);
        return r19;
      };
      r21 = dyn as_data_frame(p4);
      st dy = r21;
      invisible.0();
      return r21;
    };
    r23 = dyn r17(p5);
    check L8() else D7();
  D7():
    deopt 28 [r23];
  L8():
    quade_test1 = ldf `quade.test`;
    check L9() else D8();
  D8():
    deopt 30 [];
  L9():
    p6 = prom<V +>{
      __2 = ldf `~` in base;
      r24 = dyn __2(<sym Freq>, <lang `|`(Brand, Store)>);
      return r24;
    };
    p7 = prom<V +>{
      dy = ld dy;
      dy1 = force? dy;
      checkMissing(dy1);
      return dy1;
    };
    r27 = dyn quade_test1[, data](p6, p7);
    check L10() else D9();
  D9():
    deopt 34 [r27];
  L10():
    st `qT.` = r27;
    qTst = ld qTst;
    check L11() else D10();
  D10():
    deopt 36 [qTst];
  L11():
    qTst1 = force? qTst;
    checkMissing(qTst1);
    c2 = `is.object`(qTst1);
    if c2 then L13() else L14(qTst1);
  L12(dx3):
    l = ld `qT.`;
    c3 = `is.object`(l);
    if c3 then L17() else L18(dx3, l);
  L13():
    dr2 = tryDispatchBuiltin.1("$", qTst1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(qTst3):
    r28 = `$`(qTst3, <sym data.name>);
    goto L12(r28);
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L16(dx9):
    st `qT.` = dx9;
    stopifnot = ldf stopifnot;
    check L20() else D11();
  L17():
    dr4 = tryDispatchBuiltin.0("$<-", l, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(dx3, dr4);
  L18(dx5, l2):
    r29 = `$<-`(l2, <sym data.name>, dx3);
    goto L16(r29);
  D11():
    deopt 43 [];
  L19():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx7);
  L20():
    p10 = prom<V +>{
      all_equal = ldf `all.equal`;
      p8 = prom<V +>{
        qTst4 = ld qTst;
        qTst5 = force? qTst4;
        checkMissing(qTst5);
        return qTst5;
      };
      p9 = prom<V +>{
        qT_ = ld `qT.`;
        qT_1 = force? qT_;
        checkMissing(qT_1);
        return qT_1;
      };
      r32 = dyn all_equal[, , tolerance](p8, p9, 1.0E-15);
      return r32;
    };
    r34 = dyn stopifnot(p10);
    check L21() else D12();
  D12():
    deopt 45 [r34];
  L21():
    dy2 = ld dy;
    check L22() else D13();
  D13():
    deopt 46 [dy2];
  L22():
    dy3 = force? dy2;
    checkMissing(dy3);
    c4 = `is.object`(dy3);
    if c4 then L23() else L24(dy3);
  L0(dx11):
    st dys = dx11;
    quade_test2 = ldf `quade.test`;
    check L28() else D16();
  L23():
    dr6 = tryDispatchBuiltin.1("[", dy3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L25() else L24(dr6);
  L24(dy5):
    order = ldf order;
    check L26() else D14();
  D14():
    deopt 49 [dy5];
  D16():
    deopt 57 [];
  L25():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L0(dx10);
  L26():
    p11 = prom<V +>{
      dy6 = ld dy;
      dy7 = force? dy6;
      checkMissing(dy7);
      c5 = `is.object`(dy7);
      if c5 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr8 = tryDispatchBuiltin.1("[", dy7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r35 = dyn __3(dy7, <missing>, "Freq");
      goto L0(r35);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    };
    r37 = dyn order(p11);
    check L27() else D15();
  L28():
    p12 = prom<V +>{
      __5 = ldf `~` in base;
      r39 = dyn __5(<sym Freq>, <lang `|`(Brand, Store)>);
      return r39;
    };
    p13 = prom<V +>{
      dys = ld dys;
      dys1 = force? dys;
      checkMissing(dys1);
      return dys1;
    };
    r42 = dyn quade_test2[, data](p12, p13);
    check L29() else D17();
  D15():
    deopt 51 [dy5, r37];
  D17():
    deopt 61 [r42];
  L27():
    __4 = ldf `[` in base;
    r38 = dyn __4(dy3, r37, <missing>);
    goto L0(r38);
  L29():
    st qTs = r42;
    qTst6 = ld qTst;
    check L30() else D18();
  D18():
    deopt 63 [qTst6];
  L30():
    qTst7 = force? qTst6;
    checkMissing(qTst7);
    c6 = `is.object`(qTst7);
    if c6 then L32() else L33(qTst7);
  L31(dx15):
    l3 = ld qTs;
    c7 = `is.object`(l3);
    if c7 then L36() else L37(dx15, l3);
  L32():
    dr10 = tryDispatchBuiltin.1("$", qTst7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L34() else L33(dr10);
  L33(qTst9):
    r43 = `$`(qTst9, <sym data.name>);
    goto L31(r43);
  L34():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L31(dx14);
  L35(dx21):
    st qTs = dx21;
    stopifnot1 = ldf stopifnot;
    check L39() else D19();
  L36():
    dr12 = tryDispatchBuiltin.0("$<-", l3, dx15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L38() else L37(dx15, dr12);
  L37(dx17, l5):
    r44 = `$<-`(l5, <sym data.name>, dx15);
    goto L35(r44);
  D19():
    deopt 70 [];
  L38():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L35(dx19);
  L39():
    p16 = prom<V +>{
      all_equal1 = ldf `all.equal`;
      p14 = prom<V +>{
        qTst10 = ld qTst;
        qTst11 = force? qTst10;
        checkMissing(qTst11);
        return qTst11;
      };
      p15 = prom<V +>{
        qTs = ld qTs;
        qTs1 = force? qTs;
        checkMissing(qTs1);
        return qTs1;
      };
      r47 = dyn all_equal1[, , tolerance](p14, p15, 1.0E-15);
      return r47;
    };
    r49 = dyn stopifnot1(p16);
    check L40() else D20();
  D20():
    deopt 72 [r49];
  L40():
    popenv;
    return r49;
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
    r2 = dyn UseMethod("quade.test");
    goto L0(r2);
  L2():
    r = dyn base("quade.test");
    goto L0(r);
  }
}