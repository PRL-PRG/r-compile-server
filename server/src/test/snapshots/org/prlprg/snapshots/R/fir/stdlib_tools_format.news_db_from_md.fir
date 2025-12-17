fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.news_db_from_md` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg split:cls, reg x1:*, reg x2:V, reg p:p(V +), reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p1:p(V +), reg r4:V, reg vchunks:*, reg vchunks1:V, reg c1:L, reg vchunks3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg order:cls, reg numeric_version:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg vchunks4:*, reg vchunks5:V, reg names:cls, reg r7:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg __:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg vchunks6:*, reg vchunks7:V, reg length:cls, reg r15:V, reg r16:V, reg c2:L, reg character:cls, reg r17:V, reg vapply:cls, reg vchunks8:*, reg vchunks9:V, reg p4:p(V +), reg r21:cls, reg p5:p(V +), reg r23:V, reg format:cls, reg sprintf:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg vchunks10:*, reg vchunks11:V, reg names1:cls, reg r26:V, reg p6:p(V +), reg ifelse:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg dates:*, reg dates1:V, reg is_na:cls, reg r30:V, reg p7:p(V +), reg sprintf1:cls, reg dates2:*, reg dates3:V, reg p8:p(V +), reg r33:V, reg p9:p(V +), reg r35:V, reg p10:p(V +), reg r37:V, reg p11:p(V +), reg r39:V, reg Map:cls, reg c3:*, reg c4:V, reg p12:p(V +), reg vheaders:*, reg vheaders1:V, reg p13:p(V +), reg lapply:cls, reg vchunks12:*, reg vchunks13:V, reg p14:p(V +), reg do_vchunk:*, reg do_vchunk1:V, reg p15:p(V +), reg r44:V, reg p16:p(V +), reg r46:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner3903957783;
    st do_vchunk = r;
    split = ldf split;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
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
    check L5() else D1();
  D1():
    deopt 7 [r4];
  L5():
    st vchunks = r4;
    vchunks = ld vchunks;
    check L6() else D2();
  D2():
    deopt 9 [vchunks];
  L6():
    vchunks1 = force? vchunks;
    checkMissing(vchunks1);
    c1 = `is.object`(vchunks1);
    if c1 then L7() else L8(vchunks1);
  L0(dx3):
    st vchunks = dx3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    dr2 = tryDispatchBuiltin.1("[", vchunks1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(dr2);
  L8(vchunks3):
    order = ldf order;
    check L10() else D3();
  D3():
    deopt 12 [vchunks3];
  L1(r14):
    r16 = `!`(r14);
    c2 = `as.logical`(r16);
    if c2 then L16() else L2();
  L9():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L10():
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
    check L11() else D4();
  L12():
    vchunks6 = ld vchunks;
    check L14() else D5();
  L13():
    r13 = dyn base1(<sym vchunks>);
    goto L1(r13);
  D4():
    deopt 16 [vchunks3, r11];
  D5():
    deopt 21 [vchunks6];
  L2():
    vapply = ldf vapply;
    check L21() else D9();
  L11():
    __ = ldf `[` in base;
    r12 = dyn __(vchunks3, r11);
    goto L0(r12);
  L14():
    vchunks7 = force? vchunks6;
    checkMissing(vchunks7);
    length = ldf length in base;
    r15 = dyn length(vchunks7);
    check L15() else D6();
  L16():
    character = ldf character;
    check L17() else D7();
  D6():
    deopt 24 [r15];
  D7():
    deopt 27 [];
  D9():
    deopt 33 [];
  L15():
    goto L1(r15);
  L17():
    r17 = dyn character();
    check L18() else D8();
  L21():
    p4 = prom<V +>{
      vchunks8 = ld vchunks;
      vchunks9 = force? vchunks8;
      checkMissing(vchunks9);
      return vchunks9;
    };
    p5 = prom<V +>{
      r21 = clos inner2854634098;
      return r21;
    };
    r23 = dyn vapply(p4, p5, "");
    check L22() else D10();
  D8():
    deopt 28 [r17];
  D10():
    deopt 37 [r23];
  L18():
    popenv;
    return r17;
  L22():
    st dates = r23;
    format = ldf format;
    check L23() else D11();
  D11():
    deopt 40 [];
  L23():
    p11 = prom<V +>{
      sprintf = ldf sprintf;
      p6 = prom<V +>{
        sym2 = ldf names;
        base2 = ldf names in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r25):
        return r25;
      L1():
        vchunks10 = ld vchunks;
        vchunks11 = force? vchunks10;
        checkMissing(vchunks11);
        names1 = ldf names in base;
        r26 = dyn names1(vchunks11);
        goto L0(r26);
      L2():
        r24 = dyn base2(<sym vchunks>);
        goto L0(r24);
      };
      p10 = prom<V +>{
        ifelse = ldf ifelse;
        p7 = prom<V +>{
          sym3 = ldf `is.na`;
          base3 = ldf `is.na` in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r29):
          return r29;
        L1():
          dates = ld dates;
          dates1 = force? dates;
          checkMissing(dates1);
          is_na = ldf `is.na` in base;
          r30 = dyn is_na(dates1);
          goto L0(r30);
        L2():
          r28 = dyn base3(<sym dates>);
          goto L0(r28);
        };
        p9 = prom<V +>{
          sprintf1 = ldf sprintf;
          p8 = prom<V +>{
            dates2 = ld dates;
            dates3 = force? dates2;
            checkMissing(dates3);
            return dates3;
          };
          r33 = dyn sprintf1(" (%s)", p8);
          return r33;
        };
        r35 = dyn ifelse(p7, "", p9);
        return r35;
      };
      r37 = dyn sprintf("Changes in version %s%s", p6, p10);
      return r37;
    };
    r39 = dyn format[, justify, width](p11, "centre", 72);
    check L24() else D12();
  D12():
    deopt 46 [r39];
  L24():
    st vheaders = r39;
    Map = ldf Map;
    check L25() else D13();
  D13():
    deopt 49 [];
  L25():
    p12 = prom<V +>{
      c3 = ld c;
      c4 = force? c3;
      checkMissing(c4);
      return c4;
    };
    p13 = prom<V +>{
      vheaders = ld vheaders;
      vheaders1 = force? vheaders;
      checkMissing(vheaders1);
      return vheaders1;
    };
    p16 = prom<V +>{
      lapply = ldf lapply;
      p14 = prom<V +>{
        vchunks12 = ld vchunks;
        vchunks13 = force? vchunks12;
        checkMissing(vchunks13);
        return vchunks13;
      };
      p15 = prom<V +>{
        do_vchunk = ld do_vchunk;
        do_vchunk1 = force? do_vchunk;
        checkMissing(do_vchunk1);
        return do_vchunk1;
      };
      r44 = dyn lapply(p14, p15);
      return r44;
    };
    r46 = dyn Map[, , , `USE.NAMES`](p12, p13, p16, FALSE);
    check L26() else D14();
  D14():
    deopt 55 [r46];
  L26():
    popenv;
    return r46;
  }
}
fun inner3903957783(vchunk) {
  (reg vchunk:*) -+> V { var vchunk:*, reg unlist:cls, reg Map:cls, reg c:*, reg c1:V, reg p:p(V +), reg vchunk1:*, reg vchunk2:V, reg c2:L, reg vchunk4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p1:p(V +), reg vchunk5:*, reg vchunk6:V, reg c3:L, reg vchunk8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg z:*, reg z1:V, reg c4:L, reg z3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg z6:V, reg r9:V, reg z7:*, reg z8:V, reg nzchar:cls, reg r10:V, reg __:cls, reg r11:V |
    mkenv;
    st vchunk = vchunk;
    unlist = ldf unlist;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p3 = prom<V +>{
      Map = ldf Map;
      p = prom<V +>{
        c = ld c;
        c1 = force? c;
        checkMissing(c1);
        return c1;
      };
      p1 = prom<V +>{
        vchunk1 = ld vchunk;
        vchunk2 = force? vchunk1;
        checkMissing(vchunk2);
        c2 = `is.object`(vchunk2);
        if c2 then L1() else L2(vchunk2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", vchunk2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(vchunk4):
        r1 = `$`(vchunk4, <sym Category>);
        goto L0(r1);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p2 = prom<V +>{
        vchunk5 = ld vchunk;
        vchunk6 = force? vchunk5;
        checkMissing(vchunk6);
        c3 = `is.object`(vchunk6);
        if c3 then L1() else L2(vchunk6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", vchunk6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(vchunk8):
        r3 = `$`(vchunk8, <sym Text>);
        goto L0(r3);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r5 = dyn Map(p, p1, p2);
      return r5;
    };
    r7 = dyn unlist[, `use.names`](p3, FALSE);
    check L3() else D1();
  D1():
    deopt 5 [r7];
  L3():
    st z = r7;
    z = ld z;
    check L4() else D2();
  D2():
    deopt 7 [z];
  L4():
    z1 = force? z;
    checkMissing(z1);
    c4 = `is.object`(z1);
    if c4 then L5() else L6(z1);
  L0(dx5):
    popenv;
    return dx5;
  L5():
    dr4 = tryDispatchBuiltin.1("[", z1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L7() else L6(dr4);
  L6(z3):
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(z6, r9):
    __ = ldf `[` in base;
    r11 = dyn __(z6, r9);
    goto L0(r11);
  L7():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L0(dx4);
  L8():
    z7 = ld z;
    check L10() else D3();
  L9():
    r8 = dyn base(<sym z>);
    goto L1(z3, r8);
  D3():
    deopt 11 [z3, z7];
  L10():
    z8 = force? z7;
    checkMissing(z8);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(z8);
    check L11() else D4();
  D4():
    deopt 14 [z3, r10];
  L11():
    goto L1(z3, r10);
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