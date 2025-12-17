fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2363178285;
    st `.bibentry_canonicalize_bibtype_value` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2363178285(value) {
  (reg value:*) -+> V { var value:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg lengths:cls, reg value1:*, reg value2:V, reg p:p(V +), reg r3:V, reg r4:V, reg all:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg ___:cls, reg r10:V, reg names:cls, reg r11:V, reg unlist:cls, reg value3:*, reg value4:V, reg p2:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg tolower:cls, reg value5:*, reg value6:V, reg p3:p(V +), reg r17:V, reg tolower1:cls, reg BibTeX_names:*, reg BibTeX_names1:V, reg p4:p(V +), reg r19:V, reg match:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg pos:*, reg pos1:V, reg anyNA:cls, reg r23:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r24:V, reg p5:p(V +), reg paste:cls, reg BibTeX_names2:*, reg BibTeX_names3:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg r29:V, reg p8:p(V +), reg r31:V, reg as_list:cls, reg BibTeX_names4:*, reg BibTeX_names5:V, reg c1:L, reg BibTeX_names7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos2:*, reg pos3:V, reg __:cls, reg r33:V, reg p9:p(V +), reg r35:V |
    mkenv;
    st value = value;
    stopifnot = ldf stopifnot;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      sym = ldf all;
      base = ldf all in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      lengths = ldf lengths;
      p = prom<V +>{
        value1 = ld value;
        value2 = force? value1;
        checkMissing(value2);
        return value2;
      };
      r3 = dyn lengths(p);
      r4 = `==`(r3, 1);
      all = ldf all in base;
      r5 = dyn all(r4);
      goto L0(r5);
    L2():
      r = dyn base(<lang `==`(lengths(value), 1)>);
      goto L0(r);
    };
    r7 = dyn stopifnot(p1);
    check L6() else D1();
  D1():
    deopt 3 [r7];
  L6():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L0(r9):
    st BibTeX_names = r9;
    unlist = ldf unlist;
    check L12() else D5();
  L7():
    ___ = ldf `:::`;
    check L9() else D2();
  L8():
    r8 = dyn base1(<lang `:::`(tools, BibTeX_entry_field_db)>);
    goto L0(r8);
  D2():
    deopt 7 [];
  D5():
    deopt 15 [];
  L9():
    r10 = dyn ___("tools", "BibTeX_entry_field_db");
    check L10() else D3();
  L12():
    p2 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    r13 = dyn unlist(p2);
    check L13() else D6();
  D3():
    deopt 10 [r10];
  D6():
    deopt 17 [r13];
  L10():
    names = ldf names in base;
    r11 = dyn names(r10);
    check L11() else D4();
  L13():
    st value = r13;
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  D4():
    deopt 12 [r11];
  L1(r15):
    st pos = r15;
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L11():
    goto L0(r11);
  L14():
    tolower = ldf tolower;
    check L16() else D7();
  L15():
    r14 = dyn base2(<lang tolower(value)>, <lang tolower(BibTeX_names)>);
    goto L1(r14);
  D7():
    deopt 22 [];
  L2(r22):
    c = `as.logical`(r22);
    if c then L25() else L3();
  L16():
    p3 = prom<V +>{
      value5 = ld value;
      value6 = force? value5;
      checkMissing(value6);
      return value6;
    };
    r17 = dyn tolower(p3);
    check L17() else D8();
  L21():
    pos = ld pos;
    check L23() else D12();
  L22():
    r21 = dyn base3(<sym pos>);
    goto L2(r21);
  D8():
    deopt 24 [r17];
  D12():
    deopt 36 [pos];
  L3():
    goto L4();
  L4():
    as_list = ldf `as.list`;
    check L29() else D16();
  L17():
    tolower1 = ldf tolower;
    check L18() else D9();
  L23():
    pos1 = force? pos;
    checkMissing(pos1);
    anyNA = ldf anyNA in base;
    r23 = dyn anyNA(pos1);
    check L24() else D13();
  L25():
    stop = ldf stop;
    check L26() else D14();
  D9():
    deopt 26 [];
  D13():
    deopt 39 [r23];
  D14():
    deopt 41 [];
  D16():
    deopt 49 [];
  L18():
    p4 = prom<V +>{
      BibTeX_names = ld BibTeX_names;
      BibTeX_names1 = force? BibTeX_names;
      checkMissing(BibTeX_names1);
      return BibTeX_names1;
    };
    r19 = dyn tolower1(p4);
    check L19() else D10();
  L24():
    goto L2(r23);
  L26():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        r24 = dyn sQuote("bibtype");
        return r24;
      };
      p7 = prom<V +>{
        paste = ldf paste;
        p6 = prom<V +>{
          BibTeX_names2 = ld BibTeX_names;
          BibTeX_names3 = force? BibTeX_names2;
          checkMissing(BibTeX_names3);
          return BibTeX_names3;
        };
        r27 = dyn paste[, collapse](p6, ", ");
        return r27;
      };
      r29 = dyn gettextf("%s has to be one of %s", p5, p7);
      return r29;
    };
    r31 = dyn stop[, domain](p8, NA_LGL);
    check L27() else D15();
  L29():
    p9 = prom<V +>{
      BibTeX_names4 = ld BibTeX_names;
      BibTeX_names5 = force? BibTeX_names4;
      checkMissing(BibTeX_names5);
      c1 = `is.object`(BibTeX_names5);
      if c1 then L1() else L2(BibTeX_names5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", BibTeX_names5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(BibTeX_names7):
      pos2 = ld pos;
      pos3 = force? pos2;
      __ = ldf `[` in base;
      r33 = dyn __(BibTeX_names7, pos3);
      goto L0(r33);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r35 = dyn as_list(p9);
    check L30() else D17();
  D10():
    deopt 28 [r19];
  D15():
    deopt 45 [r31];
  D17():
    deopt 51 [r35];
  L19():
    match = ldf match in base;
    r20 = dyn match(r17, r19, NA_INT, NULL);
    check L20() else D11();
  L27():
    goto L4();
  L30():
    popenv;
    return r35;
  D11():
    deopt 32 [r20];
  L20():
    goto L1(r20);
  }
}