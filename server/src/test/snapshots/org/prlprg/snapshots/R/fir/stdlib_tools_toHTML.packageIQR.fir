fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `toHTML.packageIQR` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg iconv:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg p:p(V +), reg r3:V, reg l:*, reg c2:L, reg r5:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg iconv1:cls, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r9:V, reg p1:p(V +), reg r11:V, reg l3:*, reg c4:L, reg r13:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r16:V, reg iconv2:cls, reg db:*, reg db1:V, reg p2:p(V +), reg r18:V, reg nrow:cls, reg db2:*, reg db3:V, reg p3:p(V +), reg r20:V, reg r21:V, reg c5:L, reg r22:V, reg lapply:cls, reg split:cls, reg nrow1:cls, reg db4:*, reg db5:V, reg p4:p(V +), reg r24:V, reg r25:V, reg p5:p(V +), reg db6:*, reg db7:V, reg c6:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __:cls, reg r27:V, reg p6:p(V +), reg r29:V, reg p7:p(V +), reg r31:cls, reg p8:p(V +), reg r33:V, reg HTMLheader:cls, reg ddd1:dots?, reg r34:V, reg sym:cls, reg base:cls, reg guard:L, reg r35:V, reg r36:V, reg out:*, reg out1:V, reg names:cls, reg r37:V, reg s:V, reg l6:I, reg i:I, reg i1:I, reg i2:I, reg c7:L, reg x13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r38:V, reg i7:I, reg r39:V, reg result:*, reg result1:V, reg paste0:cls, reg htmlify:cls, reg x14:*, reg x15:V, reg c8:L, reg x17:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r40:V, reg p9:p(V +), reg r42:V, reg p10:p(V +), reg htmlify1:cls, reg pkg:*, reg pkg1:V, reg p11:p(V +), reg r45:V, reg p12:p(V +), reg r47:V, reg paste1:cls, reg htmlify2:cls, reg out2:*, reg out3:V, reg c9:L, reg out5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg pkg2:*, reg pkg3:V, reg __1:cls, reg r48:V, reg c10:L, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __2:cls, reg r49:V, reg p13:p(V +), reg r51:V, reg p14:p(V +), reg htmlify3:cls, reg out6:*, reg out7:V, reg c11:L, reg out9:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg pkg4:*, reg pkg5:V, reg __3:cls, reg r53:V, reg c12:L, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg __4:cls, reg r54:V, reg p15:p(V +), reg r56:V, reg p16:p(V +), reg r58:V, reg c13:cls, reg r59:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r60:V, reg r61:V, reg x18:*, reg x19:V, reg c14:L, reg x21:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg r62:V, reg c15:V, reg r63:V, reg c16:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r64:V, reg r65:V, reg result2:*, reg result3:V, reg htmlify4:cls, reg x22:*, reg x23:V, reg c17:L, reg x25:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r66:V, reg p17:p(V +), reg r68:V, reg c18:cls, reg r69:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r71:V, reg r72:V, reg result4:*, reg result5:V, reg c19:cls, reg r73:V, reg result6:*, reg result7:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L11() else D0();
  D0():
    deopt 0 [x1];
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L13() else L14(x2);
  L12(dx1):
    st db = dx1;
    iconv = ldf iconv;
    check L16() else D1();
  L13():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(x4):
    r = `$`(x4, <sym results>);
    goto L12(r);
  D1():
    deopt 5 [];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L16():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r1 = `$`(x8, <sym title>);
      goto L0(r1);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r3 = dyn iconv[, to](p, "UTF-8");
    check L17() else D2();
  D2():
    deopt 9 [r3];
  L17():
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L19() else L20(r3, l);
  L18(dx5):
    st x = dx5;
    iconv1 = ldf iconv;
    check L22() else D3();
  L19():
    dr4 = tryDispatchBuiltin.0("$<-", l, r3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L21() else L20(r3, dr4);
  L20(r5, l2):
    r8 = `$<-`(l2, <sym title>, r3);
    goto L18(r8);
  D3():
    deopt 14 [];
  L21():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L22():
    p1 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c3 = `is.object`(x10);
      if c3 then L1() else L2(x10);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x12):
      r9 = `$`(x12, <sym footer>);
      goto L0(r9);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r11 = dyn iconv1[, to](p1, "UTF-8");
    check L23() else D4();
  D4():
    deopt 18 [r11];
  L23():
    l3 = ld x;
    c4 = `is.object`(l3);
    if c4 then L25() else L26(r11, l3);
  L24(dx9):
    st x = dx9;
    iconv2 = ldf iconv;
    check L28() else D5();
  L25():
    dr8 = tryDispatchBuiltin.0("$<-", l3, r11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L27() else L26(r11, dr8);
  L26(r13, l5):
    r16 = `$<-`(l5, <sym footer>, r11);
    goto L24(r16);
  D5():
    deopt 23 [];
  L27():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx8);
  L28():
    p2 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r18 = dyn iconv2[, to](p2, "UTF-8");
    check L29() else D6();
  D6():
    deopt 27 [r18];
  L29():
    st db = r18;
    nrow = ldf nrow;
    check L30() else D7();
  D7():
    deopt 30 [];
  L30():
    p3 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    r20 = dyn nrow(p3);
    check L31() else D8();
  D8():
    deopt 32 [r20];
  L31():
    r21 = `==`(r20, 0);
    c5 = `as.logical`(r21);
    if c5 then L32() else L0();
  L0():
    lapply = ldf lapply;
    check L34() else D9();
  L1(r22):
    st out = r22;
    HTMLheader = ldf HTMLheader;
    check L36() else D11();
  L32():
    goto L1(NULL);
  D9():
    deopt 38 [];
  D11():
    deopt 44 [];
  L34():
    p7 = prom<V +>{
      split = ldf split;
      p5 = prom<V +>{
        nrow1 = ldf nrow;
        p4 = prom<V +>{
          db4 = ld db;
          db5 = force? db4;
          checkMissing(db5);
          return db5;
        };
        r24 = dyn nrow1(p4);
        r25 = `:`(1.0, r24);
        return r25;
      };
      p6 = prom<V +>{
        db6 = ld db;
        db7 = force? db6;
        checkMissing(db7);
        c6 = `is.object`(db7);
        if c6 then L1() else L2();
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", db7);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2();
      L2():
        __ = ldf `[` in base;
        r27 = dyn __(db7, <missing>, "Package");
        goto L0(r27);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r29 = dyn split(p5, p6);
      return r29;
    };
    p8 = prom<V +>{
      r31 = clos inner1768509083;
      return r31;
    };
    r33 = dyn lapply(p7, p8);
    check L35() else D10();
  L36():
    ddd1 = ld `...`;
    r34 = dyn HTMLheader[`...`](ddd1);
    check L37() else D12();
  D10():
    deopt 41 [r33];
  D12():
    deopt 46 [r34];
  L35():
    goto L1(r33);
  L37():
    st result = r34;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L2(r36):
    s = toForSeq(r36);
    l6 = length(s);
    i = 0;
    goto L3(i);
  L38():
    out = ld out;
    check L40() else D13();
  L39():
    r35 = dyn base(<sym out>);
    goto L2(r35);
  D13():
    deopt 50 [out];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c7 = `<`.1(l6, i2);
    if c7 then L42() else L5();
  L40():
    out1 = force? out;
    checkMissing(out1);
    names = ldf names in base;
    r37 = dyn names(out1);
    check L41() else D14();
  D14():
    deopt 53 [r37];
  L5():
    x13 = `[[`(s, i2, NULL, TRUE);
    st pkg = x13;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L41():
    goto L2(r37);
  L42():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L4(i7, r39):
    st result = r39;
    goto L3(i7);
  L6(r61):
    r63 = `!`(r61);
    c16 = `as.logical`(r63);
    if c16 then L58() else L7();
  L43():
    result = ld result;
    check L45() else D15();
  L44():
    r38 = dyn base1(<sym result>, <lang paste0("<h2>", htmlify(`$`(x, title)), " in package &lsquo;", htmlify(pkg), "&rsquo;</h2>")>, "<table cols=\"2\" style=\"width: 100%;\">", <lang paste0("<tr>\n", " <td style=\"text-align: left; vertical-align: top; width: 10%;\">\n", htmlify(`[`(`[[`(out, pkg), , "Item")), "\n </td>\n", " <td style=\"text-align: left; vertical-align: top; width: 90%;\">\n", htmlify(`[`(`[[`(out, pkg), , "Title")), "\n </td>\n</tr>\n")>, "</table>");
    goto L4(i2, r38);
  L51():
    x18 = ld x;
    check L53() else D21();
  L52():
    r60 = dyn base2(<lang `$`(x, footer)>);
    goto L6(r60);
  D15():
    deopt 56 [i2, result];
  D21():
    deopt 85 [x18];
  L7():
    goto L9();
  L9():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L66() else L67();
  L45():
    result1 = force? result;
    checkMissing(result1);
    paste0 = ldf paste0;
    check L46() else D16();
  L53():
    x19 = force? x18;
    checkMissing(x19);
    c14 = `is.object`(x19);
    if c14 then L55() else L56(x19);
  L58():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  D16():
    deopt 59 [i2];
  L8(r65):
    st result = r65;
    goto L9();
  L10(r72):
    st result = r72;
    result6 = ld result;
    check L70() else D28();
  L46():
    p10 = prom<V +>{
      htmlify = ldf htmlify;
      p9 = prom<V +>{
        x14 = ld x;
        x15 = force? x14;
        checkMissing(x15);
        c8 = `is.object`(x15);
        if c8 then L1() else L2(x15);
      L0(dx13):
        return dx13;
      L1():
        dr12 = tryDispatchBuiltin.1("$", x15);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L3() else L2(dr12);
      L2(x17):
        r40 = `$`(x17, <sym title>);
        goto L0(r40);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr12);
        goto L0(dx12);
      };
      r42 = dyn htmlify(p9);
      return r42;
    };
    p12 = prom<V +>{
      htmlify1 = ldf htmlify;
      p11 = prom<V +>{
        pkg = ld pkg;
        pkg1 = force? pkg;
        checkMissing(pkg1);
        return pkg1;
      };
      r45 = dyn htmlify1(p11);
      return r45;
    };
    r47 = dyn paste0("<h2>", p10, " in package &lsquo;", p12, "&rsquo;</h2>");
    check L47() else D17();
  L54(dx27):
    c15 = `==`(dx27, NULL);
    goto L6(c15);
  L55():
    dr22 = tryDispatchBuiltin.1("$", x19);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L57() else L56(dr22);
  L56(x21):
    r62 = `$`(x21, <sym footer>);
    goto L54(r62);
  L59():
    result2 = ld result;
    check L61() else D22();
  L60():
    r64 = dyn base3(<sym result>, "<p>", <lang htmlify(`$`(x, footer))>, "</p>");
    goto L8(r64);
  L66():
    result4 = ld result;
    check L68() else D26();
  L67():
    r71 = dyn base4(<sym result>, "</div></body></html>");
    goto L10(r71);
  D17():
    deopt 65 [i2, r47];
  D22():
    deopt 92 [result2];
  D26():
    deopt 107 [result4];
  D28():
    deopt 113 [result6];
  L47():
    paste1 = ldf paste0;
    check L48() else D18();
  L57():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L54(dx26);
  L61():
    result3 = force? result2;
    checkMissing(result3);
    htmlify4 = ldf htmlify;
    check L62() else D23();
  L68():
    result5 = force? result4;
    checkMissing(result5);
    c19 = ldf c in base;
    r73 = dyn c19(result5, "</div></body></html>");
    check L69() else D27();
  L70():
    result7 = force? result6;
    checkMissing(result7);
    popenv;
    return result7;
  D18():
    deopt 68 [i2];
  D23():
    deopt 96 [];
  D27():
    deopt 111 [r73];
  L48():
    p14 = prom<V +>{
      htmlify2 = ldf htmlify;
      p13 = prom<V +>{
        out2 = ld out;
        out3 = force? out2;
        checkMissing(out3);
        c9 = `is.object`(out3);
        if c9 then L2() else L3(out3);
      L0(dx15):
        c10 = `is.object`(dx15);
        if c10 then L5() else L6();
      L2():
        dr14 = tryDispatchBuiltin.1("[[", out3);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L4() else L3(dr14);
      L3(out5):
        pkg2 = ld pkg;
        pkg3 = force? pkg2;
        __1 = ldf `[[` in base;
        r48 = dyn __1(out5, pkg3);
        goto L0(r48);
      L1(dx19):
        return dx19;
      L4():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      L5():
        dr16 = tryDispatchBuiltin.1("[", dx15);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L7() else L6();
      L6():
        __2 = ldf `[` in base;
        r49 = dyn __2(dx15, <missing>, "Item");
        goto L1(r49);
      L7():
        dx18 = getTryDispatchBuiltinValue(dr16);
        goto L1(dx18);
      };
      r51 = dyn htmlify2(p13);
      return r51;
    };
    p16 = prom<V +>{
      htmlify3 = ldf htmlify;
      p15 = prom<V +>{
        out6 = ld out;
        out7 = force? out6;
        checkMissing(out7);
        c11 = `is.object`(out7);
        if c11 then L2() else L3(out7);
      L0(dx21):
        c12 = `is.object`(dx21);
        if c12 then L5() else L6();
      L2():
        dr18 = tryDispatchBuiltin.1("[[", out7);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L4() else L3(dr18);
      L3(out9):
        pkg4 = ld pkg;
        pkg5 = force? pkg4;
        __3 = ldf `[[` in base;
        r53 = dyn __3(out9, pkg5);
        goto L0(r53);
      L1(dx25):
        return dx25;
      L4():
        dx20 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx20);
      L5():
        dr20 = tryDispatchBuiltin.1("[", dx21);
        dc10 = getTryDispatchBuiltinDispatched(dr20);
        if dc10 then L7() else L6();
      L6():
        __4 = ldf `[` in base;
        r54 = dyn __4(dx21, <missing>, "Title");
        goto L1(r54);
      L7():
        dx24 = getTryDispatchBuiltinValue(dr20);
        goto L1(dx24);
      };
      r56 = dyn htmlify3(p15);
      return r56;
    };
    r58 = dyn paste1("<tr>\n", " <td style=\"text-align: left; vertical-align: top; width: 10%;\">\n", p14, "\n </td>\n", " <td style=\"text-align: left; vertical-align: top; width: 90%;\">\n", p16, "\n </td>\n</tr>\n");
    check L49() else D19();
  L62():
    p17 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      c17 = `is.object`(x23);
      if c17 then L1() else L2(x23);
    L0(dx29):
      return dx29;
    L1():
      dr24 = tryDispatchBuiltin.1("$", x23);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(x25):
      r66 = `$`(x25, <sym footer>);
      goto L0(r66);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx28);
    };
    r68 = dyn htmlify4(p17);
    check L63() else D24();
  L69():
    goto L10(r73);
  D19():
    deopt 76 [i2, r58];
  D24():
    deopt 98 [r68];
  L49():
    c13 = ldf c in base;
    r59 = dyn c13(result1, r47, "<table cols=\"2\" style=\"width: 100%;\">", r58, "</table>");
    check L50() else D20();
  L63():
    c18 = ldf c in base;
    r69 = dyn c18(result3, "<p>", r68, "</p>");
    check L64() else D25();
  D20():
    deopt 79 [i2, r59];
  D25():
    deopt 101 [r69];
  L50():
    goto L4(i2, r59);
  L64():
    goto L8(r69);
  }
}
fun inner1768509083(ind) {
  (reg ind:*) -+> V { var ind:*, reg db:*, reg db1:V, reg c:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind1:*, reg ind2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c1:cls, reg r2:V, reg __:cls, reg r3:V |
    mkenv;
    st ind = ind;
    db = ld db;
    check L2() else D0();
  D0():
    deopt 0 [db];
  L2():
    db1 = force? db;
    checkMissing(db1);
    c = `is.object`(db1);
    if c then L3() else L4(db1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(db3):
    ind1 = ld ind;
    check L6() else D1();
  D1():
    deopt 2 [db3, ind1];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    ind2 = force? ind1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    __ = ldf `[` in base;
    r3 = dyn __(db1, ind2, r1, FALSE);
    goto L0(r3);
  L7():
    c1 = ldf c in base;
    r2 = dyn c1("Item", "Title");
    check L9() else D2();
  L8():
    r = dyn base("Item", "Title");
    goto L1(r);
  D2():
    deopt 9 [db3, r2];
  L9():
    goto L1(r2);
  }
}