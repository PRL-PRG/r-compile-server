fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `toHTML.news_db_from_md` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg split:cls, reg x1:*, reg x2:V, reg p:p(V +), reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p1:p(V +), reg r4:V, reg vchunks:*, reg vchunks1:V, reg c1:L, reg vchunks3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order:cls, reg numeric_version:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg vchunks4:*, reg vchunks5:V, reg names:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg __:cls, reg r12:V, reg vapply:cls, reg vchunks6:*, reg vchunks7:V, reg p4:p(V +), reg r14:cls, reg p5:p(V +), reg r16:V, reg sprintf:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg vchunks8:*, reg vchunks9:V, reg names1:cls, reg r19:V, reg p6:p(V +), reg ifelse:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg dates:*, reg dates1:V, reg is_na:cls, reg r23:V, reg p7:p(V +), reg sprintf1:cls, reg dates2:*, reg dates3:V, reg p8:p(V +), reg r26:V, reg p9:p(V +), reg r28:V, reg p10:p(V +), reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg HTMLheader:cls, reg ddd1:dots?, reg r33:V, reg unlist:cls, reg Map:cls, reg c2:*, reg c3:V, reg p11:p(V +), reg vheaders:*, reg vheaders1:V, reg p12:p(V +), reg lapply:cls, reg vchunks10:*, reg vchunks11:V, reg p13:p(V +), reg do_vchunk:*, reg do_vchunk1:V, reg p14:p(V +), reg r38:V, reg p15:p(V +), reg r40:V, reg p16:p(V +), reg r42:V, reg c4:cls, reg r43:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner3903957783;
    st do_vchunk = r;
    split = ldf split;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c = `is.object`(x4);
      if c then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      r2 = `$`(x6, <sym Version>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn split(p, p1);
    check L3() else D1();
  D1():
    deopt 7 [r4];
  L3():
    st vchunks = r4;
    vchunks = ld vchunks;
    check L4() else D2();
  D2():
    deopt 9 [vchunks];
  L4():
    vchunks1 = force? vchunks;
    checkMissing(vchunks1);
    c1 = `is.object`(vchunks1);
    if c1 then L5() else L6(vchunks1);
  L0(dx3):
    st vchunks = dx3;
    vapply = ldf vapply;
    check L10() else D5();
  L5():
    dr2 = tryDispatchBuiltin.1("[", vchunks1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L7() else L6(dr2);
  L6(vchunks3):
    order = ldf order;
    check L8() else D3();
  D3():
    deopt 12 [vchunks3];
  D5():
    deopt 20 [];
  L7():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L8():
    p3 = prom<V +>{
      numeric_version = ldf numeric_version;
      p2 = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r6):
        return r6;
      L1():
        vchunks4 = ld vchunks;
        vchunks5 = force? vchunks4;
        checkMissing(vchunks5);
        names = ldf names in base;
        r7 = dyn names(vchunks5);
        goto L0(r7);
      L2():
        r5 = dyn base(<sym vchunks>);
        goto L0(r5);
      };
      r9 = dyn numeric_version[, strict](p2, FALSE);
      return r9;
    };
    r11 = dyn order[, decreasing](p3, TRUE);
    check L9() else D4();
  L10():
    p4 = prom<V +>{
      vchunks6 = ld vchunks;
      vchunks7 = force? vchunks6;
      checkMissing(vchunks7);
      return vchunks7;
    };
    p5 = prom<V +>{
      r14 = clos inner2854634098;
      return r14;
    };
    r16 = dyn vapply(p4, p5, "");
    check L11() else D6();
  D4():
    deopt 16 [vchunks3, r11];
  D6():
    deopt 24 [r16];
  L9():
    __ = ldf `[` in base;
    r12 = dyn __(vchunks3, r11);
    goto L0(r12);
  L11():
    st dates = r16;
    sprintf = ldf sprintf;
    check L12() else D7();
  D7():
    deopt 27 [];
  L12():
    p6 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      vchunks8 = ld vchunks;
      vchunks9 = force? vchunks8;
      checkMissing(vchunks9);
      names1 = ldf names in base;
      r19 = dyn names1(vchunks9);
      goto L0(r19);
    L2():
      r17 = dyn base1(<sym vchunks>);
      goto L0(r17);
    };
    p10 = prom<V +>{
      ifelse = ldf ifelse;
      p7 = prom<V +>{
        sym2 = ldf `is.na`;
        base2 = ldf `is.na` in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r22):
        return r22;
      L1():
        dates = ld dates;
        dates1 = force? dates;
        checkMissing(dates1);
        is_na = ldf `is.na` in base;
        r23 = dyn is_na(dates1);
        goto L0(r23);
      L2():
        r21 = dyn base2(<sym dates>);
        goto L0(r21);
      };
      p9 = prom<V +>{
        sprintf1 = ldf sprintf;
        p8 = prom<V +>{
          dates2 = ld dates;
          dates3 = force? dates2;
          checkMissing(dates3);
          return dates3;
        };
        r26 = dyn sprintf1(" (%s)", p8);
        return r26;
      };
      r28 = dyn ifelse(p7, "", p9);
      return r28;
    };
    r30 = dyn sprintf("<h2>Changes in version %s%s</h2>", p6, p10);
    check L13() else D8();
  D8():
    deopt 31 [r30];
  L13():
    st vheaders = r30;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L14() else L15();
  L1(r32):
    popenv;
    return r32;
  L14():
    HTMLheader = ldf HTMLheader;
    check L16() else D9();
  L15():
    r31 = dyn base3(<lang HTMLheader(...)>, <lang unlist(Map(c, vheaders, lapply(vchunks, do_vchunk)))>, "</div></body></html>");
    goto L1(r31);
  D9():
    deopt 36 [];
  L16():
    ddd1 = ld `...`;
    r33 = dyn HTMLheader[`...`](ddd1);
    check L17() else D10();
  D10():
    deopt 38 [r33];
  L17():
    unlist = ldf unlist;
    check L18() else D11();
  D11():
    deopt 40 [];
  L18():
    p16 = prom<V +>{
      Map = ldf Map;
      p11 = prom<V +>{
        c2 = ld c;
        c3 = force? c2;
        checkMissing(c3);
        return c3;
      };
      p12 = prom<V +>{
        vheaders = ld vheaders;
        vheaders1 = force? vheaders;
        checkMissing(vheaders1);
        return vheaders1;
      };
      p15 = prom<V +>{
        lapply = ldf lapply;
        p13 = prom<V +>{
          vchunks10 = ld vchunks;
          vchunks11 = force? vchunks10;
          checkMissing(vchunks11);
          return vchunks11;
        };
        p14 = prom<V +>{
          do_vchunk = ld do_vchunk;
          do_vchunk1 = force? do_vchunk;
          checkMissing(do_vchunk1);
          return do_vchunk1;
        };
        r38 = dyn lapply(p13, p14);
        return r38;
      };
      r40 = dyn Map(p11, p12, p15);
      return r40;
    };
    r42 = dyn unlist(p16);
    check L19() else D12();
  D12():
    deopt 42 [r42];
  L19():
    c4 = ldf c in base;
    r43 = dyn c4(r33, r42, "</div></body></html>");
    check L20() else D13();
  D13():
    deopt 45 [r43];
  L20():
    goto L1(r43);
  }
}
fun inner3903957783(vchunk) {
  (reg vchunk:*) -+> V { var vchunk:*, reg vchunk1:*, reg vchunk2:V, reg c:L, reg vchunk4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg cheaders:*, reg cheaders1:V, reg nzchar:cls, reg r3:V, reg paste0:cls, reg cheaders2:*, reg cheaders3:V, reg c1:L, reg cheaders5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind:*, reg ind1:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V, reg l:*, reg c2:L, reg r8:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r11:V, reg unlist:cls, reg Map:cls, reg c3:*, reg c4:V, reg p1:p(V +), reg cheaders6:*, reg cheaders7:V, reg p2:p(V +), reg vchunk5:*, reg vchunk6:V, reg c5:L, reg vchunk8:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r14:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg z:*, reg z1:V, reg c6:L, reg z3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg z6:V, reg r20:V, reg z7:*, reg z8:V, reg nzchar1:cls, reg r21:V, reg __1:cls, reg r22:V |
    mkenv;
    st vchunk = vchunk;
    vchunk1 = ld vchunk;
    check L4() else D0();
  D0():
    deopt 0 [vchunk1];
  L4():
    vchunk2 = force? vchunk1;
    checkMissing(vchunk2);
    c = `is.object`(vchunk2);
    if c then L6() else L7(vchunk2);
  L5(dx1):
    st cheaders = dx1;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L6():
    dr = tryDispatchBuiltin.1("$", vchunk2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(vchunk4):
    r = `$`(vchunk4, <sym Category>);
    goto L5(r);
  L0(r2):
    st ind = r2;
    paste0 = ldf paste0;
    check L13() else D3();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    cheaders = ld cheaders;
    check L11() else D1();
  L10():
    r1 = dyn base(<sym cheaders>);
    goto L0(r1);
  D1():
    deopt 6 [cheaders];
  D3():
    deopt 12 [];
  L11():
    cheaders1 = force? cheaders;
    checkMissing(cheaders1);
    nzchar = ldf nzchar in base;
    r3 = dyn nzchar(cheaders1);
    check L12() else D2();
  L13():
    p = prom<V +>{
      cheaders2 = ld cheaders;
      cheaders3 = force? cheaders2;
      checkMissing(cheaders3);
      c1 = `is.object`(cheaders3);
      if c1 then L1() else L2(cheaders3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", cheaders3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(cheaders5):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r4 = dyn __(cheaders5, ind1);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r6 = dyn paste0("<h3>", p, "</h3>");
    check L14() else D4();
  D2():
    deopt 9 [r3];
  D4():
    deopt 16 [r6];
  L12():
    goto L0(r3);
  L14():
    l = ld cheaders;
    c2 = `is.object`(l);
    if c2 then L15() else L16(r6, l);
  L1(dx5):
    st cheaders = dx5;
    unlist = ldf unlist;
    check L19() else D6();
  L15():
    dr4 = tryDispatchBuiltin.0("[<-", l, r6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L17() else L16(r6, dr4);
  L16(r8, l2):
    ind2 = ld ind;
    check L18() else D5();
  D5():
    deopt 18 [r8, l2, r6, ind2];
  D6():
    deopt 23 [];
  L17():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L1(dx4);
  L18():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r11 = dyn ___(l2, r6, ind3);
    goto L1(r11);
  L19():
    p4 = prom<V +>{
      Map = ldf Map;
      p1 = prom<V +>{
        c3 = ld c;
        c4 = force? c3;
        checkMissing(c4);
        return c4;
      };
      p2 = prom<V +>{
        cheaders6 = ld cheaders;
        cheaders7 = force? cheaders6;
        checkMissing(cheaders7);
        return cheaders7;
      };
      p3 = prom<V +>{
        vchunk5 = ld vchunk;
        vchunk6 = force? vchunk5;
        checkMissing(vchunk6);
        c5 = `is.object`(vchunk6);
        if c5 then L1() else L2(vchunk6);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", vchunk6);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(vchunk8):
        r14 = `$`(vchunk8, <sym HTML>);
        goto L0(r14);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r16 = dyn Map(p1, p2, p3);
      return r16;
    };
    r18 = dyn unlist[, `use.names`](p4, FALSE);
    check L20() else D7();
  D7():
    deopt 27 [r18];
  L20():
    st z = r18;
    z = ld z;
    check L21() else D8();
  D8():
    deopt 29 [z];
  L21():
    z1 = force? z;
    checkMissing(z1);
    c6 = `is.object`(z1);
    if c6 then L22() else L23(z1);
  L2(dx9):
    popenv;
    return dx9;
  L22():
    dr8 = tryDispatchBuiltin.1("[", z1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L24() else L23(dr8);
  L23(z3):
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L3(z6, r20):
    __1 = ldf `[` in base;
    r22 = dyn __1(z6, r20);
    goto L2(r22);
  L24():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L2(dx8);
  L25():
    z7 = ld z;
    check L27() else D9();
  L26():
    r19 = dyn base1(<sym z>);
    goto L3(z3, r19);
  D9():
    deopt 33 [z3, z7];
  L27():
    z8 = force? z7;
    checkMissing(z8);
    nzchar1 = ldf nzchar in base;
    r21 = dyn nzchar1(z8);
    check L28() else D10();
  D10():
    deopt 36 [z3, r21];
  L28():
    goto L3(z3, r21);
  }
}
fun inner2854634098(v) {
  (reg v:*) -+> V { var v:*, reg v1:*, reg v2:V, reg c:L, reg v4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r1:V |
    mkenv;
    st v = v;
    v1 = ld v;
    check L1() else D0();
  D0():
    deopt 0 [v1];
  L1():
    v2 = force? v1;
    checkMissing(v2);
    c = `is.object`(v2);
    if c then L3() else L4(v2);
  L2(dx1):
    c1 = `is.object`(dx1);
    if c1 then L6() else L7(dx1);
  L3():
    dr = tryDispatchBuiltin.1("$", v2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(v4):
    r = `$`(v4, <sym Date>);
    goto L2(r);
  L0(dx5):
    popenv;
    return dx5;
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L8() else L7(dr2);
  L7(dx3):
    __ = ldf `[` in base;
    r1 = dyn __(dx3, 1);
    goto L0(r1);
  L8():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx4);
  }
}