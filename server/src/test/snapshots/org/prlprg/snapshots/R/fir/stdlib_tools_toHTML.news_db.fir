fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `toHTML.news_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg _news_db_has_no_bad_entries:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg r7:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg c2:V, reg c3:L, reg htmlify2:cls, reg iconv:cls, reg x7:*, reg x8:V, reg c4:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg l:*, reg c5:L, reg r17:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r19:V, reg dx5:V, reg r20:V, reg split:cls, reg x11:*, reg x12:V, reg p3:p(V +), reg x13:*, reg x14:V, reg c6:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r23:V, reg p4:p(V +), reg r25:V, reg vchunks:*, reg vchunks1:V, reg c7:L, reg vchunks3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg order:cls, reg numeric_version:cls, reg sub:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg vchunks4:*, reg vchunks5:V, reg names:cls, reg r28:V, reg p5:p(V +), reg r30:V, reg p6:p(V +), reg r32:V, reg p7:p(V +), reg r34:V, reg __:cls, reg r35:V, reg vapply:cls, reg vchunks6:*, reg vchunks7:V, reg p8:p(V +), reg r37:cls, reg p9:p(V +), reg r39:V, reg sprintf:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg vchunks8:*, reg vchunks9:V, reg names1:cls, reg r42:V, reg p10:p(V +), reg ifelse:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg dates:*, reg dates1:V, reg is_na:cls, reg r46:V, reg p11:p(V +), reg sprintf1:cls, reg dates2:*, reg dates3:V, reg p12:p(V +), reg r49:V, reg p13:p(V +), reg r51:V, reg p14:p(V +), reg r53:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg HTMLheader:cls, reg ddd1:dots?, reg r56:V, reg unlist:cls, reg lapply:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg vchunks10:*, reg vchunks11:V, reg r59:I, reg p15:p(V +), reg r61:cls, reg p16:p(V +), reg r63:V, reg p17:p(V +), reg r65:V, reg c8:cls, reg r66:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner2501545716;
    st htmlify2 = r;
    _news_db_has_no_bad_entries = ldf `.news_db_has_no_bad_entries`;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn _news_db_has_no_bad_entries(p);
    check L8() else D1();
  D1():
    deopt 6 [r2];
  L8():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L9() else L0();
  L0():
    r7 = clos inner2501545716;
    st print_items = r7;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L9():
    character = ldf character;
    check L10() else D2();
  D2():
    deopt 9 [];
  L2(r9):
    c3 = `as.logical`(r9);
    if c3 then L21() else L3();
  L10():
    r4 = dyn character();
    check L11() else D3();
  L14():
    x3 = ld x;
    check L16() else D4();
  L15():
    r8 = dyn base(<lang `$`(x, HTML)>);
    goto L2(r8);
  D3():
    deopt 10 [r4];
  D4():
    deopt 18 [x3];
  L3():
    goto L4();
  L4():
    split = ldf split;
    check L29() else D7();
  L11():
    popenv;
    return r4;
  L16():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L18() else L19(x4);
  L21():
    htmlify2 = ldf htmlify2;
    check L22() else D5();
  D5():
    deopt 23 [];
  D7():
    deopt 32 [];
  L17(dx1):
    c2 = `==`(dx1, NULL);
    goto L2(c2);
  L18():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(x6):
    r10 = `$`(x6, <sym HTML>);
    goto L17(r10);
  L22():
    p2 = prom<V +>{
      iconv = ldf iconv;
      p1 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        c4 = `is.object`(x8);
        if c4 then L1() else L2(x8);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x8);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x10):
        r11 = `$`(x10, <sym Text>);
        goto L0(r11);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r13 = dyn iconv[, to](p1, "UTF-8");
      return r13;
    };
    r15 = dyn htmlify2(p2);
    check L23() else D6();
  L29():
    p3 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p4 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c6 = `is.object`(x14);
      if c6 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r23 = `$`(x16, <sym Version>);
      goto L0(r23);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r25 = dyn split(p3, p4);
    check L30() else D8();
  D6():
    deopt 25 [r15];
  D8():
    deopt 35 [r25];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L23():
    l = ld x;
    c5 = `is.object`(l);
    if c5 then L25() else L26(r15, l);
  L30():
    st vchunks = r25;
    vchunks = ld vchunks;
    check L31() else D9();
  D9():
    deopt 37 [vchunks];
  L24(r19, dx5):
    st x = dx5;
    goto L4();
  L25():
    dr4 = tryDispatchBuiltin.0("$<-", l, r15);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L27() else L26(r15, dr4);
  L26(r17, l2):
    r20 = `$<-`(l2, <sym HTML>, r15);
    goto L24(r17, r20);
  L31():
    vchunks1 = force? vchunks;
    checkMissing(vchunks1);
    c7 = `is.object`(vchunks1);
    if c7 then L32() else L33(vchunks1);
  L5(dx9):
    st vchunks = dx9;
    vapply = ldf vapply;
    check L37() else D12();
  L27():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L24(r15, dx4);
  L32():
    dr8 = tryDispatchBuiltin.1("[", vchunks1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L34() else L33(dr8);
  L33(vchunks3):
    order = ldf order;
    check L35() else D10();
  D10():
    deopt 40 [vchunks3];
  D12():
    deopt 50 [];
  L34():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx8);
  L35():
    p7 = prom<V +>{
      numeric_version = ldf numeric_version;
      p6 = prom<V +>{
        sub = ldf sub;
        p5 = prom<V +>{
          sym1 = ldf names;
          base1 = ldf names in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r27):
          return r27;
        L1():
          vchunks4 = ld vchunks;
          vchunks5 = force? vchunks4;
          checkMissing(vchunks5);
          names = ldf names in base;
          r28 = dyn names(vchunks5);
          goto L0(r28);
        L2():
          r26 = dyn base1(<sym vchunks>);
          goto L0(r26);
        };
        r30 = dyn sub(" *patched", ".1", p5);
        return r30;
      };
      r32 = dyn numeric_version[, strict](p6, FALSE);
      return r32;
    };
    r34 = dyn order[, `na.last`, decreasing](p7, FALSE, TRUE);
    check L36() else D11();
  L37():
    p8 = prom<V +>{
      vchunks6 = ld vchunks;
      vchunks7 = force? vchunks6;
      checkMissing(vchunks7);
      return vchunks7;
    };
    p9 = prom<V +>{
      r37 = clos inner2854634098;
      return r37;
    };
    r39 = dyn vapply(p8, p9, "");
    check L38() else D13();
  D11():
    deopt 46 [vchunks3, r34];
  D13():
    deopt 54 [r39];
  L36():
    __ = ldf `[` in base;
    r35 = dyn __(vchunks3, r34);
    goto L5(r35);
  L38():
    st dates = r39;
    sprintf = ldf sprintf;
    check L39() else D14();
  D14():
    deopt 57 [];
  L39():
    p10 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      vchunks8 = ld vchunks;
      vchunks9 = force? vchunks8;
      checkMissing(vchunks9);
      names1 = ldf names in base;
      r42 = dyn names1(vchunks9);
      goto L0(r42);
    L2():
      r40 = dyn base2(<sym vchunks>);
      goto L0(r40);
    };
    p14 = prom<V +>{
      ifelse = ldf ifelse;
      p11 = prom<V +>{
        sym3 = ldf `is.na`;
        base3 = ldf `is.na` in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r45):
        return r45;
      L1():
        dates = ld dates;
        dates1 = force? dates;
        checkMissing(dates1);
        is_na = ldf `is.na` in base;
        r46 = dyn is_na(dates1);
        goto L0(r46);
      L2():
        r44 = dyn base3(<sym dates>);
        goto L0(r44);
      };
      p13 = prom<V +>{
        sprintf1 = ldf sprintf;
        p12 = prom<V +>{
          dates2 = ld dates;
          dates3 = force? dates2;
          checkMissing(dates3);
          return dates3;
        };
        r49 = dyn sprintf1(" (%s)", p12);
        return r49;
      };
      r51 = dyn ifelse(p11, "", p13);
      return r51;
    };
    r53 = dyn sprintf("<h2>Changes in version %s%s</h2>", p10, p14);
    check L40() else D15();
  D15():
    deopt 61 [r53];
  L40():
    st vheaders = r53;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L6(r55):
    popenv;
    return r55;
  L41():
    HTMLheader = ldf HTMLheader;
    check L43() else D16();
  L42():
    r54 = dyn base4(<lang HTMLheader(...)>, <lang unlist(lapply(seq_along(vchunks), function((i=), {
            `<-`(vchunk, `[[`(vchunks, i));
            if(all(`&`(`!`(is.na(`<-`(category, `$`(vchunk, Category)))), nzchar(category))), {
                `<-`(cchunks, split(vchunk, factor(category, levels=unique(category))));
                c(`[`(vheaders, i), Map(function((h=, t=), c(h, print_items(`$`(t, HTML))), NULL), sprintf("<h3>%s</h3>", htmlify2(names(cchunks))), cchunks))
              }, {
                c(`[`(vheaders, i), print_items(`$`(vchunk, HTML)))
              })
          }, NULL)))>, "</div></body></html>");
    goto L6(r54);
  D16():
    deopt 66 [];
  L43():
    ddd1 = ld `...`;
    r56 = dyn HTMLheader[`...`](ddd1);
    check L44() else D17();
  D17():
    deopt 68 [r56];
  L44():
    unlist = ldf unlist;
    check L45() else D18();
  D18():
    deopt 70 [];
  L45():
    p17 = prom<V +>{
      lapply = ldf lapply;
      p15 = prom<V +>{
        sym5 = ldf seq_along;
        base5 = ldf seq_along in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r58):
        return r58;
      L1():
        vchunks10 = ld vchunks;
        vchunks11 = force? vchunks10;
        checkMissing(vchunks11);
        r59 = seq_along(vchunks11);
        goto L0(r59);
      L2():
        r57 = dyn base5(<sym vchunks>);
        goto L0(r57);
      };
      p16 = prom<V +>{
        r61 = clos inner3002224933;
        return r61;
      };
      r63 = dyn lapply(p15, p16);
      return r63;
    };
    r65 = dyn unlist(p17);
    check L46() else D19();
  D19():
    deopt 72 [r65];
  L46():
    c8 = ldf c in base;
    r66 = dyn c8(r56, r65, "</div></body></html>");
    check L47() else D20();
  D20():
    deopt 75 [r66];
  L47():
    goto L6(r66);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg psub:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg fsub:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg fsub1:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r5:V, reg fsub2:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r7:V, reg fsub3:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg r9:V, reg psub1:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg r11:V, reg fsub4:cls, reg x13:*, reg x14:V, reg p6:p(V +), reg r13:V, reg fsub5:cls, reg x15:*, reg x16:V, reg p7:p(V +), reg r15:V, reg fsub6:cls, reg x17:*, reg x18:V, reg p8:p(V +), reg r17:V, reg fsub7:cls, reg x19:*, reg x20:V, reg p9:p(V +), reg r19:V, reg fsub8:cls, reg x21:*, reg x22:V, reg p10:p(V +), reg r21:V, reg x23:*, reg x24:V |
    mkenv;
    st x = x;
    psub = ldf psub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn psub("<([[:alnum:]._]+)>", "@VAR@\\1@EVAR@", p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    st x = r1;
    fsub = ldf fsub;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn fsub("&", "&amp;", p1);
    check L3() else D3();
  D3():
    deopt 12 [r3];
  L3():
    st x = r3;
    fsub1 = ldf fsub;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r5 = dyn fsub1("---", "&mdash;", p2);
    check L5() else D5();
  D5():
    deopt 19 [r5];
  L5():
    st x = r5;
    fsub2 = ldf fsub;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r7 = dyn fsub2("``", "&ldquo;", p3);
    check L7() else D7();
  D7():
    deopt 26 [r7];
  L7():
    st x = r7;
    fsub3 = ldf fsub;
    check L8() else D8();
  D8():
    deopt 29 [];
  L8():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r9 = dyn fsub3("''", "&rdquo;", p4);
    check L9() else D9();
  D9():
    deopt 33 [r9];
  L9():
    st x = r9;
    psub1 = ldf psub;
    check L10() else D10();
  D10():
    deopt 36 [];
  L10():
    p5 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r11 = dyn psub1("`([^']+)'", "&lsquo;\\1&rsquo;", p5);
    check L11() else D11();
  D11():
    deopt 40 [r11];
  L11():
    st x = r11;
    fsub4 = ldf fsub;
    check L12() else D12();
  D12():
    deopt 43 [];
  L12():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r13 = dyn fsub4("`", "'", p6);
    check L13() else D13();
  D13():
    deopt 47 [r13];
  L13():
    st x = r13;
    fsub5 = ldf fsub;
    check L14() else D14();
  D14():
    deopt 50 [];
  L14():
    p7 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r15 = dyn fsub5("<", "&lt;", p7);
    check L15() else D15();
  D15():
    deopt 54 [r15];
  L15():
    st x = r15;
    fsub6 = ldf fsub;
    check L16() else D16();
  D16():
    deopt 57 [];
  L16():
    p8 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r17 = dyn fsub6(">", "&gt;", p8);
    check L17() else D17();
  D17():
    deopt 61 [r17];
  L17():
    st x = r17;
    fsub7 = ldf fsub;
    check L18() else D18();
  D18():
    deopt 64 [];
  L18():
    p9 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r19 = dyn fsub7("@VAR@", "<var>", p9);
    check L19() else D19();
  D19():
    deopt 68 [r19];
  L19():
    st x = r19;
    fsub8 = ldf fsub;
    check L20() else D20();
  D20():
    deopt 71 [];
  L20():
    p10 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r21 = dyn fsub8("@EVAR@", "</var>", p10);
    check L21() else D21();
  D21():
    deopt 75 [r21];
  L21():
    st x = r21;
    x23 = ld x;
    check L22() else D22();
  D22():
    deopt 77 [x23];
  L22():
    x24 = force? x23;
    checkMissing(x24);
    popenv;
    return x24;
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
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg vchunks:*, reg vchunks1:V, reg c:L, reg vchunks3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg vchunk:*, reg vchunk1:V, reg c1:L, reg vchunk3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg is_na:cls, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg r12:V, reg category:*, reg category1:V, reg nzchar:cls, reg r13:V, reg r14:V, reg all:cls, reg r15:V, reg c2:L, reg split:cls, reg vchunk4:*, reg vchunk5:V, reg p:p(V +), reg factor:cls, reg category2:*, reg category3:V, reg p1:p(V +), reg unique:cls, reg category4:*, reg category5:V, reg p2:p(V +), reg r19:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg vheaders:*, reg vheaders1:V, reg c3:L, reg vheaders3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i3:*, reg i4:V, reg __1:cls, reg r26:V, reg Map:cls, reg r27:cls, reg p5:p(V +), reg sprintf:cls, reg htmlify2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg cchunks:*, reg cchunks1:V, reg names:cls, reg r31:V, reg p6:p(V +), reg r33:V, reg p7:p(V +), reg r35:V, reg p8:p(V +), reg cchunks2:*, reg cchunks3:V, reg p9:p(V +), reg r38:V, reg c4:cls, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg vheaders4:*, reg vheaders5:V, reg c5:L, reg vheaders7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i5:*, reg i6:V, reg __2:cls, reg r42:V, reg print_items:cls, reg vchunk6:*, reg vchunk7:V, reg c6:L, reg vchunk9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r43:V, reg p10:p(V +), reg r45:V, reg c7:cls, reg r46:V |
    mkenv;
    st i = i;
    vchunks = ld vchunks;
    check L9() else D0();
  D0():
    deopt 0 [vchunks];
  L9():
    vchunks1 = force? vchunks;
    checkMissing(vchunks1);
    c = `is.object`(vchunks1);
    if c then L10() else L11(vchunks1);
  L0(dx1):
    st vchunk = dx1;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L10():
    dr = tryDispatchBuiltin.1("[[", vchunks1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(vchunks3):
    i1 = ld i;
    check L13() else D1();
  D1():
    deopt 2 [vchunks3, i1];
  L1(r2):
    c2 = `as.logical`(r2);
    if c2 then L29() else L4();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    i2 = force? i1;
    __ = ldf `[[` in base;
    r = dyn __(vchunks3, i2);
    goto L0(r);
  L14():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L15():
    r1 = dyn base(<lang `&`(`!`(is.na(`<-`(category, `$`(vchunk, Category)))), nzchar(category))>);
    goto L1(r1);
  L2(r4):
    r7 = `!`(r4);
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L4():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L16():
    vchunk = ld vchunk;
    check L18() else D2();
  L17():
    r3 = dyn base1(<lang `<-`(category, `$`(vchunk, Category))>);
    goto L2(r3);
  L29():
    split = ldf split;
    check L30() else D7();
  D2():
    deopt 10 [vchunk];
  D7():
    deopt 26 [];
  L3(r11, r12):
    r14 = `&&`(r11, r12);
    all = ldf all in base;
    r15 = dyn all(r14);
    check L28() else D6();
  L7(r41):
    popenv;
    return r41;
  L18():
    vchunk1 = force? vchunk;
    checkMissing(vchunk1);
    c1 = `is.object`(vchunk1);
    if c1 then L20() else L21(vchunk1);
  L24():
    category = ld category;
    check L26() else D4();
  L25():
    r10 = dyn base2(<sym category>);
    goto L3(r7, r10);
  L30():
    p = prom<V +>{
      vchunk4 = ld vchunk;
      vchunk5 = force? vchunk4;
      checkMissing(vchunk5);
      return vchunk5;
    };
    p4 = prom<V +>{
      factor = ldf factor;
      p1 = prom<V +>{
        category2 = ld category;
        category3 = force? category2;
        checkMissing(category3);
        return category3;
      };
      p3 = prom<V +>{
        unique = ldf unique;
        p2 = prom<V +>{
          category4 = ld category;
          category5 = force? category4;
          checkMissing(category5);
          return category5;
        };
        r19 = dyn unique(p2);
        return r19;
      };
      r21 = dyn factor[, levels](p1, p3);
      return r21;
    };
    r23 = dyn split(p, p4);
    check L31() else D8();
  L43():
    vheaders4 = ld vheaders;
    check L45() else D14();
  L44():
    r40 = dyn base5(<lang `[`(vheaders, i)>, <lang print_items(`$`(vchunk, HTML))>);
    goto L7(r40);
  D4():
    deopt 18 [r7, category];
  D6():
    deopt 24 [r15];
  D8():
    deopt 29 [r23];
  D14():
    deopt 48 [vheaders4];
  L19(dx3):
    st category = dx3;
    is_na = ldf `is.na` in base;
    r6 = dyn is_na(dx3);
    check L23() else D3();
  L20():
    dr2 = tryDispatchBuiltin.1("$", vchunk1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(vchunk3):
    r5 = `$`(vchunk3, <sym Category>);
    goto L19(r5);
  L26():
    category1 = force? category;
    checkMissing(category1);
    nzchar = ldf nzchar in base;
    r13 = dyn nzchar(category1);
    check L27() else D5();
  L28():
    goto L1(r15);
  L31():
    st cchunks = r23;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L32() else L33();
  L45():
    vheaders5 = force? vheaders4;
    checkMissing(vheaders5);
    c5 = `is.object`(vheaders5);
    if c5 then L46() else L47(vheaders5);
  D3():
    deopt 15 [r6];
  D5():
    deopt 21 [r7, r13];
  L5(r25):
    popenv;
    return r25;
  L8(dx7):
    print_items = ldf print_items;
    check L50() else D16();
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L23():
    goto L2(r6);
  L27():
    goto L3(r7, r13);
  L32():
    vheaders = ld vheaders;
    check L34() else D9();
  L33():
    r24 = dyn base3(<lang `[`(vheaders, i)>, <lang Map(function((h=, t=), c(h, print_items(`$`(t, HTML))), NULL), sprintf("<h3>%s</h3>", htmlify2(names(cchunks))), cchunks)>);
    goto L5(r24);
  L46():
    dr6 = tryDispatchBuiltin.1("[", vheaders5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L48() else L47(dr6);
  L47(vheaders7):
    i5 = ld i;
    check L49() else D15();
  D9():
    deopt 33 [vheaders];
  D15():
    deopt 50 [vheaders7, i5];
  D16():
    deopt 54 [];
  L34():
    vheaders1 = force? vheaders;
    checkMissing(vheaders1);
    c3 = `is.object`(vheaders1);
    if c3 then L35() else L36(vheaders1);
  L48():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx6);
  L49():
    i6 = force? i5;
    __2 = ldf `[` in base;
    r42 = dyn __2(vheaders7, i6);
    goto L8(r42);
  L50():
    p10 = prom<V +>{
      vchunk6 = ld vchunk;
      vchunk7 = force? vchunk6;
      checkMissing(vchunk7);
      c6 = `is.object`(vchunk7);
      if c6 then L1() else L2(vchunk7);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", vchunk7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(vchunk9):
      r43 = `$`(vchunk9, <sym HTML>);
      goto L0(r43);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r45 = dyn print_items(p10);
    check L51() else D17();
  D17():
    deopt 56 [r45];
  L6(dx5):
    Map = ldf Map;
    check L39() else D11();
  L35():
    dr4 = tryDispatchBuiltin.1("[", vheaders1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L37() else L36(dr4);
  L36(vheaders3):
    i3 = ld i;
    check L38() else D10();
  L51():
    c7 = ldf c in base;
    r46 = dyn c7(dx7, r45);
    check L52() else D18();
  D10():
    deopt 35 [vheaders3, i3];
  D11():
    deopt 39 [];
  D18():
    deopt 58 [r46];
  L37():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L38():
    i4 = force? i3;
    __1 = ldf `[` in base;
    r26 = dyn __1(vheaders3, i4);
    goto L6(r26);
  L39():
    p5 = prom<V +>{
      r27 = clos inner3383456312;
      return r27;
    };
    p8 = prom<V +>{
      sprintf = ldf sprintf;
      p7 = prom<V +>{
        htmlify2 = ldf htmlify2;
        p6 = prom<V +>{
          sym4 = ldf names;
          base4 = ldf names in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r30):
          return r30;
        L1():
          cchunks = ld cchunks;
          cchunks1 = force? cchunks;
          checkMissing(cchunks1);
          names = ldf names in base;
          r31 = dyn names(cchunks1);
          goto L0(r31);
        L2():
          r29 = dyn base4(<sym cchunks>);
          goto L0(r29);
        };
        r33 = dyn htmlify2(p6);
        return r33;
      };
      r35 = dyn sprintf("<h3>%s</h3>", p7);
      return r35;
    };
    p9 = prom<V +>{
      cchunks2 = ld cchunks;
      cchunks3 = force? cchunks2;
      checkMissing(cchunks3);
      return cchunks3;
    };
    r38 = dyn Map(p5, p8, p9);
    check L40() else D12();
  L52():
    goto L7(r46);
  D12():
    deopt 43 [r38];
  L40():
    c4 = ldf c in base;
    r39 = dyn c4(dx5, r38);
    check L41() else D13();
  D13():
    deopt 45 [r39];
  L41():
    goto L5(r39);
  }
}
fun inner3383456312(h, t) {
  (reg h:*, reg t:*) -+> V { var h:*, var t:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg h1:*, reg h2:V, reg print_items:cls, reg t1:*, reg t2:V, reg c:L, reg t4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p:p(V +), reg r4:V, reg c1:cls, reg r5:V |
    mkenv;
    st h = h;
    st t = t;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    h1 = ld h;
    check L3() else D0();
  L2():
    r = dyn base(<sym h>, <lang print_items(`$`(t, HTML))>);
    goto L0(r);
  D0():
    deopt 2 [h1];
  L3():
    h2 = force? h1;
    checkMissing(h2);
    print_items = ldf print_items;
    check L4() else D1();
  D1():
    deopt 5 [];
  L4():
    p = prom<V +>{
      t1 = ld t;
      t2 = force? t1;
      checkMissing(t2);
      c = `is.object`(t2);
      if c then L1() else L2(t2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", t2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(t4):
      r2 = `$`(t4, <sym HTML>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn print_items(p);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    c1 = ldf c in base;
    r5 = dyn c1(h2, r4);
    check L6() else D3();
  D3():
    deopt 9 [r5];
  L6():
    goto L0(r5);
  }
}