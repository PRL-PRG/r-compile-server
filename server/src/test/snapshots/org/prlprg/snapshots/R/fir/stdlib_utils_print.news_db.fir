fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1117498176;
    st `print.news_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1117498176(x, doBrowse, browser, `...`) {
  (reg x:*, reg doBrowse:*, reg browser:*, reg ddd:dots) -+> V { var x:*, var doBrowse:*, reg doBrowse_isMissing:L, reg doBrowse_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg interactive:cls, reg r2:V, reg p:p(V +), var browser:*, reg browser_isMissing:L, reg browser_orDefault:*, reg getOption:cls, reg r4:V, reg p1:p(V +), var `...`:dots?, reg doBrowse1:*, reg doBrowse2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c5:L, reg r7:V, reg browser1:*, reg browser2:V, reg identical:cls, reg r8:V, reg r9:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c14:L, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg c17:L, reg r13:V, reg x1:*, reg x2:V, reg attr:cls, reg r14:V, reg c18:L, reg c19:L, reg c20:V, reg c22:L, reg c24:V, reg ___:cls, reg r15:V, reg r16:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r18:V, reg c25:L, reg c26:V, reg c28:L, reg __:cls, reg r19:V, reg r20:cls, reg r21:V, reg r22:V, reg port:*, reg port1:V, reg r23:V, reg c29:L, reg ___1:cls, reg r24:V, reg r25:cls, reg port2:*, reg port3:V, reg p3:p(V +), reg x5:*, reg x6:V, reg p4:p(V +), reg r28:V, reg pkg:*, reg pkg1:V, reg r29:V, reg c30:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg x7:*, reg x8:V, reg attr1:cls, reg r34:V, reg c31:V, reg c32:L, reg sprintf:cls, reg port4:*, reg port5:V, reg p5:p(V +), reg r36:V, reg r37:V, reg sprintf1:cls, reg port6:*, reg port7:V, reg p6:p(V +), reg port8:*, reg port9:V, reg p7:p(V +), reg r40:V, reg r41:V, reg sprintf2:cls, reg port10:*, reg port11:V, reg p8:p(V +), reg pkg2:*, reg pkg3:V, reg p9:p(V +), reg port12:*, reg port13:V, reg p10:p(V +), reg r45:V, reg browseURL:cls, reg url:*, reg url1:V, reg p11:p(V +), reg r47:V, reg writeLines:cls, reg paste:cls, reg unlist:cls, reg format:cls, reg x9:*, reg x10:V, reg p12:p(V +), reg ddd1:dots?, reg r50:V, reg p13:p(V +), reg r52:V, reg p14:p(V +), reg r54:V, reg p15:p(V +), reg r56:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg x11:*, reg x12:V, reg invisible:cls, reg r59:V |
    mkenv;
    st x = x;
    doBrowse_isMissing = missing.0(doBrowse);
    if doBrowse_isMissing then L0() else L1(doBrowse);
  L0():
    p = prom<V +>{
      sym = ldf interactive;
      base = ldf interactive in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      interactive = ldf interactive in base;
      r2 = dyn interactive();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(doBrowse_orDefault):
    st doBrowse = doBrowse_orDefault;
    browser_isMissing = missing.0(browser);
    if browser_isMissing then L2() else L3(browser);
  L2():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r4 = dyn getOption("browser");
      return r4;
    };
    goto L3(p1);
  L3(browser_orDefault):
    st browser = browser_orDefault;
    st `...` = ddd;
    doBrowse1 = ld doBrowse;
    check L21() else D0();
  D0():
    deopt 0 [doBrowse1];
  L21():
    doBrowse2 = force? doBrowse1;
    checkMissing(doBrowse2);
    c = `as.logical`(doBrowse2);
    if c then L22() else L4(c);
  L4(c2):
    c9 = `as.logical`(c2);
    if c9 then L28() else L6(c9);
  L22():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L5(c5, r7):
    r9 = `!`(r7);
    c6 = `as.logical`(r9);
    c7 = `&&`(c5, c6);
    goto L4(c7);
  L6(c11):
    c22 = `as.logical`(c11);
    if c22 then L36() else L9(c22);
  L23():
    browser1 = ld browser;
    check L25() else D1();
  L24():
    r6 = dyn base1("false", <sym browser>);
    goto L5(c, r6);
  L28():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  D1():
    deopt 5 [c, browser1];
  L7(c14, r11):
    c19 = `as.logical`(r11);
    c20 = `&&`(c14, c19);
    goto L6(c20);
  L9(c24):
    c28 = `as.logical`(c24);
    if c28 then L41() else L10();
  L25():
    browser2 = force? browser1;
    checkMissing(browser2);
    identical = ldf identical in base;
    r8 = dyn identical("false", browser2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L26() else D2();
  L29():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L30():
    r10 = dyn base2(<lang `<-`(pkg, attr(x, "package"))>);
    goto L7(c9, r10);
  L36():
    ___ = ldf `:::`;
    check L37() else D5();
  D2():
    deopt 15 [c, r8];
  D5():
    deopt 30 [c22];
  L8(c17, r13):
    st pkg = r13;
    c18 = `is.character`(r13);
    goto L7(c17, c18);
  L10():
    goto L11(0);
  L11(r22):
    st port = r22;
    port = ld port;
    check L46() else D11();
  L26():
    goto L5(c, r8);
  L31():
    x1 = ld x;
    check L33() else D3();
  L32():
    r12 = dyn base3(<sym x>, "package");
    goto L8(c9, r12);
  L37():
    r15 = dyn ___("tools", ".news_db_has_no_bad_entries");
    check L38() else D6();
  L41():
    __ = ldf `::`;
    check L42() else D8();
  D3():
    deopt 21 [c9, x1];
  D6():
    deopt 33 [c22, r15];
  D8():
    deopt 39 [];
  D11():
    deopt 49 [port];
  L33():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r14 = dyn attr(x2, "package");
    check L34() else D4();
  L38():
    checkFun.0(r15);
    r16 = r15 as cls;
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r18 = dyn r16(p2);
    check L39() else D7();
  L42():
    r19 = dyn __("tools", "startDynamicHelp");
    check L43() else D9();
  L46():
    port1 = force? port;
    checkMissing(port1);
    r23 = `>`(port1, 0);
    c29 = `as.logical`(r23);
    if c29 then L47() else L12();
  D4():
    deopt 25 [c9, r14];
  D7():
    deopt 36 [c22, r18];
  D9():
    deopt 42 [r19];
  L12():
    writeLines = ldf writeLines;
    check L71() else D26();
  L19():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L34():
    goto L8(c9, r14);
  L39():
    c25 = `as.logical`(r18);
    c26 = `&&`(c22, c25);
    goto L9(c26);
  L43():
    checkFun.0(r19);
    r20 = r19 as cls;
    r21 = dyn r20(NA_LGL);
    check L44() else D10();
  L47():
    ___1 = ldf `:::`;
    check L48() else D12();
  D10():
    deopt 45 [r21];
  D12():
    deopt 54 [];
  D26():
    deopt 99 [];
  L20(r58):
    popenv;
    return r58;
  L44():
    goto L11(r21);
  L48():
    r24 = dyn ___1("tools", ".httpd_objects");
    check L49() else D13();
  L71():
    p15 = prom<V +>{
      paste = ldf paste;
      p14 = prom<V +>{
        unlist = ldf unlist;
        p13 = prom<V +>{
          format = ldf format;
          p12 = prom<V +>{
            x9 = ld x;
            x10 = force? x9;
            checkMissing(x10);
            return x10;
          };
          ddd1 = ld `...`;
          r50 = dyn format[, `...`](p12, ddd1);
          return r50;
        };
        r52 = dyn unlist(p13);
        return r52;
      };
      r54 = dyn paste[, collapse](p14, "\n\n");
      return r54;
    };
    r56 = dyn writeLines(p15);
    check L72() else D27();
  L73():
    x11 = ld x;
    check L75() else D28();
  L74():
    r57 = dyn base6(<sym x>);
    goto L20(r57);
  D13():
    deopt 57 [r24];
  D27():
    deopt 101 [r56];
  D28():
    deopt 104 [x11];
  L49():
    checkFun.0(r24);
    r25 = r24 as cls;
    p3 = prom<V +>{
      port2 = ld port;
      port3 = force? port2;
      checkMissing(port3);
      return port3;
    };
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r28 = dyn r25(p3, p4);
    check L50() else D14();
  L72():
    goto L19();
  L75():
    x12 = force? x11;
    checkMissing(x12);
    invisible = ldf invisible in base;
    r59 = dyn invisible(x12);
    check L76() else D29();
  D14():
    deopt 61 [r28];
  D29():
    deopt 107 [r59];
  L50():
    pkg = ld pkg;
    check L51() else D15();
  L76():
    goto L20(r59);
  D15():
    deopt 62 [pkg];
  L51():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    r29 = `==`(pkg1, "R");
    c30 = `as.logical`(r29);
    if c30 then L52() else L13();
  L13():
    sprintf2 = ldf sprintf;
    check L66() else D22();
  L18(r41):
    st url = r41;
    browseURL = ldf browseURL;
    check L68() else D24();
  L52():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  D22():
    deopt 87 [];
  D24():
    deopt 95 [];
  L14(r31):
    c32 = `as.logical`(r31);
    if c32 then L59() else L16();
  L53():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L54():
    r30 = dyn base4(<lang attr(x, "subset")>);
    goto L14(r30);
  L66():
    p8 = prom<V +>{
      port10 = ld port;
      port11 = force? port10;
      checkMissing(port11);
      return port11;
    };
    p9 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    p10 = prom<V +>{
      port12 = ld port;
      port13 = force? port12;
      checkMissing(port13);
      return port13;
    };
    r45 = dyn sprintf2("http://127.0.0.1:%d/library/%s/NEWS?objects=1&port=%d", p8, p9, p10);
    check L67() else D23();
  L68():
    p11 = prom<V +>{
      url = ld url;
      url1 = force? url;
      checkMissing(url1);
      return url1;
    };
    r47 = dyn browseURL(p11);
    check L69() else D25();
  D23():
    deopt 92 [r45];
  D25():
    deopt 97 [r47];
  L15(r33):
    c31 = `==`(r33, NULL);
    goto L14(c31);
  L16():
    sprintf1 = ldf sprintf;
    check L63() else D20();
  L17(r37):
    goto L18(r37);
  L55():
    x7 = ld x;
    check L57() else D16();
  L56():
    r32 = dyn base5(<sym x>, "subset");
    goto L15(r32);
  L59():
    sprintf = ldf sprintf;
    check L60() else D18();
  L67():
    goto L18(r45);
  L69():
    goto L19();
  D16():
    deopt 69 [x7];
  D18():
    deopt 76 [];
  D20():
    deopt 81 [];
  L57():
    x8 = force? x7;
    checkMissing(x8);
    attr1 = ldf attr in base;
    r34 = dyn attr1(x8, "subset");
    check L58() else D17();
  L60():
    p5 = prom<V +>{
      port4 = ld port;
      port5 = force? port4;
      checkMissing(port5);
      return port5;
    };
    r36 = dyn sprintf("http://127.0.0.1:%d/doc/html/NEWS.html", p5);
    check L61() else D19();
  L63():
    p6 = prom<V +>{
      port6 = ld port;
      port7 = force? port6;
      checkMissing(port7);
      return port7;
    };
    p7 = prom<V +>{
      port8 = ld port;
      port9 = force? port8;
      checkMissing(port9);
      return port9;
    };
    r40 = dyn sprintf1("http://127.0.0.1:%d/doc/html/NEWS.html?objects=1&port=%d", p6, p7);
    check L64() else D21();
  D17():
    deopt 73 [r34];
  D19():
    deopt 79 [r36];
  D21():
    deopt 85 [r40];
  L58():
    goto L15(r34);
  L61():
    goto L17(r36);
  L64():
    goto L17(r40);
  }
}