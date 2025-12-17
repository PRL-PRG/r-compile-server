fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg nchar:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg nchar1:cls, reg deparse:cls, reg mean:*, reg mean1:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg setNames:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg sapply:cls, reg logi:*, reg logi1:V, reg p4:p(V +), reg r16:cls, reg p5:p(V +), reg r18:V, reg l:*, reg c2:L, reg r20:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r23:V, reg x2:*, reg x3:V, reg nchar2:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg r25:V, reg nchar3:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg r27:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg nchar4:cls, reg x8:*, reg x9:V, reg p8:p(V +), reg r31:V, reg nchar5:cls, reg x10:*, reg x11:V, reg p9:p(V +), reg r33:V, reg identical:cls, reg r34:V, reg p10:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg nchar6:cls, reg x12:*, reg x13:V, reg p11:p(V +), reg r39:V, reg nchar7:cls, reg x14:*, reg x15:V, reg p12:p(V +), reg r41:V, reg identical1:cls, reg r42:V, reg p13:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg x16:*, reg x17:V, reg is_na:cls, reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg nchar8:cls, reg x18:*, reg x19:V, reg p14:p(V +), reg r52:V, reg is_na1:cls, reg r53:V, reg identical2:cls, reg r54:V, reg p15:p(V +), reg r56:V, reg r57:cls, reg nchars:cls, reg r58:V, reg data_frame:cls, reg x20:*, reg x21:V, reg p16:p(V +), reg nchars1:cls, reg x22:*, reg x23:V, reg p17:p(V +), reg r61:V, reg p18:p(V +), reg r63:V, reg nchars2:cls, reg x24:*, reg x25:V, reg p19:p(V +), reg r65:V, reg nchars3:cls, reg x26:*, reg x27:V, reg p20:p(V +), reg r67:V, reg stopifnot1:cls, reg apply:cls, reg ncT:*, reg ncT1:V, reg p21:p(V +), reg r69:cls, reg p22:p(V +), reg r71:V, reg r72:V, reg p23:p(V +), reg apply1:cls, reg ncF:*, reg ncF1:V, reg p24:p(V +), reg r75:cls, reg p25:p(V +), reg r77:V, reg r78:V, reg p26:p(V +), reg r80:V |
    mkenv;
    r = clos inner2370619156;
    st nchar = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st x = r2;
    nchar = ldf nchar;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r3 = dyn c("asfef", "qwerty", "yuiop[", "b", "stuff.blah.yech");
    check L4() else D0();
  L3():
    r1 = dyn base("asfef", "qwerty", "yuiop[", "b", "stuff.blah.yech");
    goto L0(r1);
  D0():
    deopt 11 [r3];
  D1():
    deopt 14 [];
  L4():
    goto L0(r3);
  L5():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r5 = dyn nchar(p);
    check L6() else D2();
  D2():
    deopt 16 [r5];
  L6():
    nchar1 = ldf nchar;
    check L7() else D3();
  D3():
    deopt 18 [];
  L7():
    p2 = prom<V +>{
      deparse = ldf deparse;
      p1 = prom<V +>{
        mean = ld mean;
        mean1 = force? mean;
        checkMissing(mean1);
        return mean1;
      };
      r7 = dyn deparse(p1);
      return r7;
    };
    r9 = dyn nchar1(p2);
    check L8() else D4();
  D4():
    deopt 20 [r9];
  L8():
    setNames = ldf setNames;
    check L9() else D5();
  D5():
    deopt 22 [];
  L9():
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c1 = ldf c in base;
      r12 = dyn c1(FALSE, NA_LGL, TRUE);
      goto L0(r12);
    L2():
      r10 = dyn base1(FALSE, NA_LGL, TRUE);
      goto L0(r10);
    };
    r14 = dyn setNames(<missing>, p3);
    check L10() else D6();
  D6():
    deopt 25 [r14];
  L10():
    st logi = r14;
    sapply = ldf sapply;
    check L11() else D7();
  D7():
    deopt 28 [];
  L11():
    p4 = prom<V +>{
      logi = ld logi;
      logi1 = force? logi;
      checkMissing(logi1);
      return logi1;
    };
    p5 = prom<V +>{
      r16 = clos inner2649136551;
      return r16;
    };
    r18 = dyn sapply(p4, p5);
    check L12() else D8();
  D8():
    deopt 31 [r18];
  L12():
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L13() else L14(NA_LGL, l);
  L1(dx1):
    st x = dx1;
    x2 = ld x;
    check L16() else D9();
  L13():
    dr = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(NA_LGL, dr);
  L14(r20, l2):
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l2, NA_LGL, 3.0);
    goto L1(r23);
  D9():
    deopt 39 [x2];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L16():
    x3 = force? x2;
    checkMissing(x3);
    nchar2 = ldf nchar;
    check L17() else D10();
  D10():
    deopt 42 [];
  L17():
    p6 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r25 = dyn nchar2[, keepNA](p6, TRUE);
    check L18() else D11();
  D11():
    deopt 46 [r25];
  L18():
    nchar3 = ldf nchar;
    check L19() else D12();
  D12():
    deopt 48 [];
  L19():
    p7 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r27 = dyn nchar3[, keepNA](p7, FALSE);
    check L20() else D13();
  D13():
    deopt 52 [r27];
  L20():
    stopifnot = ldf stopifnot;
    check L21() else D14();
  D14():
    deopt 54 [];
  L21():
    p10 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      nchar4 = ldf nchar;
      p8 = prom<V +>{
        x8 = ld x;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      r31 = dyn nchar4(p8);
      nchar5 = ldf nchar;
      p9 = prom<V +>{
        x10 = ld x;
        x11 = force? x10;
        checkMissing(x11);
        return x11;
      };
      r33 = dyn nchar5[, keepNA](p9, TRUE);
      identical = ldf identical in base;
      r34 = dyn identical(r31, r33, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r34);
    L2():
      r28 = dyn base2(<lang nchar(x)>, <lang nchar(x, keepNA=TRUE)>);
      goto L0(r28);
    };
    p13 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      nchar6 = ldf nchar;
      p11 = prom<V +>{
        x12 = ld x;
        x13 = force? x12;
        checkMissing(x13);
        return x13;
      };
      r39 = dyn nchar6(p11, "w");
      nchar7 = ldf nchar;
      p12 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        return x15;
      };
      r41 = dyn nchar7[, keepNA](p12, FALSE);
      identical1 = ldf identical in base;
      r42 = dyn identical1(r39, r41, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r42);
    L2():
      r36 = dyn base3(<lang nchar(x, "w")>, <lang nchar(x, keepNA=FALSE)>);
      goto L0(r36);
    };
    p15 = prom<V +>{
      sym4 = ldf identical;
      base4 = ldf identical in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0(r45):
      return r45;
    L3():
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L4():
      r44 = dyn base4(<lang is.na(x)>, <lang is.na(nchar(x))>);
      goto L0(r44);
    L1(r47):
      sym6 = ldf `is.na`;
      base6 = ldf `is.na` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L7() else L8();
    L5():
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      is_na = ldf `is.na` in base;
      r48 = dyn is_na(x17);
      goto L1(r48);
    L6():
      r46 = dyn base5(<sym x>);
      goto L1(r46);
    L2(r50):
      identical2 = ldf identical in base;
      r54 = dyn identical2(r47, r50, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r54);
    L7():
      nchar8 = ldf nchar;
      p14 = prom<V +>{
        x18 = ld x;
        x19 = force? x18;
        checkMissing(x19);
        return x19;
      };
      r52 = dyn nchar8(p14);
      is_na1 = ldf `is.na` in base;
      r53 = dyn is_na1(r52);
      goto L2(r53);
    L8():
      r49 = dyn base6(<lang nchar(x)>);
      goto L2(r49);
    };
    r56 = dyn stopifnot(p10, p13, p15);
    check L22() else D15();
  D15():
    deopt 58 [r56];
  L22():
    r57 = clos inner2044426018;
    st nchars = r57;
    nchars = ldf nchars;
    check L23() else D16();
  D16():
    deopt 63 [];
  L23():
    r58 = dyn nchars("\u200b");
    check L24() else D17();
  D17():
    deopt 65 [r58];
  L24():
    data_frame = ldf `data.frame`;
    check L25() else D18();
  D18():
    deopt 67 [];
  L25():
    p16 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    p18 = prom<V +>{
      nchars1 = ldf nchars;
      p17 = prom<V +>{
        x22 = ld x;
        x23 = force? x22;
        checkMissing(x23);
        return x23;
      };
      r61 = dyn nchars1(p17);
      return r61;
    };
    r63 = dyn data_frame(p16, p18);
    check L26() else D19();
  D19():
    deopt 70 [r63];
  L26():
    nchars2 = ldf nchars;
    check L27() else D20();
  D20():
    deopt 72 [];
  L27():
    p19 = prom<V +>{
      x24 = ld x;
      x25 = force? x24;
      checkMissing(x25);
      return x25;
    };
    r65 = dyn nchars2[, keepNA](p19, TRUE);
    check L28() else D21();
  D21():
    deopt 76 [r65];
  L28():
    st ncT = r65;
    nchars3 = ldf nchars;
    check L29() else D22();
  D22():
    deopt 79 [];
  L29():
    p20 = prom<V +>{
      x26 = ld x;
      x27 = force? x26;
      checkMissing(x27);
      return x27;
    };
    r67 = dyn nchars3[, keepNA](p20, FALSE);
    check L30() else D23();
  D23():
    deopt 83 [r67];
  L30():
    st ncF = r67;
    stopifnot1 = ldf stopifnot;
    check L31() else D24();
  D24():
    deopt 86 [];
  L31():
    p23 = prom<V +>{
      apply = ldf apply;
      p21 = prom<V +>{
        ncT = ld ncT;
        ncT1 = force? ncT;
        checkMissing(ncT1);
        return ncT1;
      };
      p22 = prom<V +>{
        r69 = clos inner2680913962;
        return r69;
      };
      r71 = dyn apply(p21, 1.0, p22);
      r72 = `==`(r71, 1.0);
      return r72;
    };
    p26 = prom<V +>{
      apply1 = ldf apply;
      p24 = prom<V +>{
        ncF = ld ncF;
        ncF1 = force? ncF;
        checkMissing(ncF1);
        return ncF1;
      };
      p25 = prom<V +>{
        r75 = clos inner2680913962;
        return r75;
      };
      r77 = dyn apply1(p24, 1.0, p25);
      r78 = `==`(r77, 1.0);
      return r78;
    };
    r80 = dyn stopifnot1(p23, p26);
    check L32() else D25();
  D25():
    deopt 89 [r80];
  L32():
    popenv;
    return r80;
  }
}
fun inner2370619156(x, type, allowNA, keepNA) {
  (reg x:*, reg type:*, reg allowNA:*, reg keepNA:*) -+> V { var x:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var allowNA:*, reg allowNA_isMissing:L, reg allowNA_orDefault:*, var keepNA:*, reg keepNA_isMissing:L, reg keepNA_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg type1:*, reg type2:V, reg allowNA1:*, reg allowNA2:V, reg keepNA1:*, reg keepNA2:V, reg nchar:cls, reg r2:V |
    mkenv;
    st x = x;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("chars") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    allowNA_isMissing = missing.0(allowNA);
    if allowNA_isMissing then L1(FALSE) else L1(allowNA);
  L1(allowNA_orDefault):
    st allowNA = allowNA_orDefault;
    keepNA_isMissing = missing.0(keepNA);
    if keepNA_isMissing then L2(NA_LGL) else L2(keepNA);
  L2(keepNA_orDefault):
    st keepNA = keepNA_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<lang nchar(x, type, allowNA, keepNA)>);
    goto L3(r);
  D0():
    deopt 2 [x1];
  L6():
    x2 = force? x1;
    checkMissing(x2);
    type1 = ld type;
    check L7() else D1();
  D1():
    deopt 4 [type1];
  L7():
    type2 = force? type1;
    checkMissing(type2);
    allowNA1 = ld allowNA;
    check L8() else D2();
  D2():
    deopt 6 [allowNA1];
  L8():
    allowNA2 = force? allowNA1;
    checkMissing(allowNA2);
    keepNA1 = ld keepNA;
    check L9() else D3();
  D3():
    deopt 8 [keepNA1];
  L9():
    keepNA2 = force? keepNA1;
    checkMissing(keepNA2);
    nchar = ldf nchar in base;
    r2 = dyn nchar(x2, type2, allowNA2, keepNA2);
    check L10() else D4();
  D4():
    deopt 11 [r2];
  L10():
    goto L3(r2);
  }
}
fun inner2649136551(k) {
  (reg k:*) -+> V { var k:*, reg data_frame:cls, reg nchar:cls, reg k1:*, reg k2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg k3:*, reg k4:V, reg nzchar:cls, reg r5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st k = k;
    data_frame = ldf `data.frame`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      nchar = ldf nchar;
      p = prom<V +>{
        k1 = ld k;
        k2 = force? k1;
        checkMissing(k2);
        return k2;
      };
      r1 = dyn nchar[, keepNA](NA_LGL, p);
      return r1;
    };
    p2 = prom<V +>{
      sym = ldf nzchar;
      base = ldf nzchar in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      k3 = ld k;
      k4 = force? k3;
      checkMissing(k4);
      nzchar = ldf nzchar in base;
      r5 = dyn nzchar(NA_LGL, k4);
      goto L0(r5);
    L2():
      r3 = dyn base[, keepNA](NA_LGL, <sym k>);
      goto L0(r3);
    };
    r7 = dyn data_frame[nchar, nzchar](p1, p2);
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    popenv;
    return r7;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg vapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg integer:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg length:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("chars", "bytes", "width");
      goto L0(r2);
    L2():
      r = dyn base("chars", "bytes", "width");
      goto L0(r);
    };
    p1 = prom<V +>{
      r4 = clos inner2214950428;
      return r4;
    };
    p3 = prom<V +>{
      integer = ldf integer;
      p2 = prom<V +>{
        sym1 = ldf length;
        base1 = ldf length in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r7):
        return r7;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        length = ldf length in base;
        r8 = dyn length(x2);
        goto L0(r8);
      L2():
        r6 = dyn base1(<sym x>);
        goto L0(r6);
      };
      r10 = dyn integer(p2);
      return r10;
    };
    r12 = dyn vapply(p, p1, p3);
    check L1() else D1();
  D1():
    deopt 5 [r12];
  L1():
    popenv;
    return r12;
  }
}
fun inner2214950428(tp) {
  (reg tp:*) -+> V { var tp:*, reg nchar:cls, reg x:*, reg x1:V, reg p:p(V +), reg tp1:*, reg tp2:V, reg p1:p(V +), reg ddd:*, reg r2:V |
    mkenv;
    st tp = tp;
    nchar = ldf nchar;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      tp1 = ld tp;
      tp2 = force? tp1;
      checkMissing(tp2);
      return tp2;
    };
    ddd = ld `...`;
    r2 = dyn nchar[, , `...`](p, p1, ddd);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner2680913962(`.`) {
  (reg __:*) -+> V { var `.`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg unique:cls, reg __1:*, reg __2:V, reg p:p(V +), reg r3:V, reg length:cls, reg r4:V |
    mkenv;
    st `.` = __;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    unique = ldf unique;
    check L3() else D0();
  L2():
    r = dyn base(<lang unique(.)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      __1 = ld `.`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    r3 = dyn unique(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    length = ldf length in base;
    r4 = dyn length(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}