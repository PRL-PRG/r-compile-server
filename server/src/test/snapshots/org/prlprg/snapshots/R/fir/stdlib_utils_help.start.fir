fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner413756308;
    st `help.start` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner413756308(update, gui, browser, remote) {
  (reg update:*, reg gui:*, reg browser:*, reg remote:*) -+> V { var update:*, reg update_isMissing:L, reg update_orDefault:*, var gui:*, reg gui_isMissing:L, reg gui_orDefault:*, var browser:*, reg browser_isMissing:L, reg browser_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var remote:*, reg remote_isMissing:L, reg remote_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:V, reg WINDOWS:*, reg WINDOWS1:V, reg r4:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg browser1:*, reg browser2:V, reg is_function:cls, reg r7:V, reg r8:V, reg c2:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c7:L, reg r10:V, reg browser3:*, reg browser4:V, reg length:cls, reg r11:V, reg r12:V, reg c8:L, reg c9:L, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg c17:L, reg c18:L, reg r14:V, reg browser5:*, reg browser6:V, reg c19:L, reg r15:V, reg c20:L, reg c21:V, reg c24:L, reg c25:L, reg c26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c33:L, reg c34:L, reg r17:V, reg browser7:*, reg browser8:V, reg nzchar:cls, reg r18:V, reg r19:V, reg c35:L, reg c36:V, reg c39:L, reg c40:V, reg c42:L, reg stop:cls, reg r20:V, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg remote1:*, reg remote2:V, reg c43:V, reg c44:L, reg __:cls, reg r25:V, reg r26:cls, reg r27:V, reg port:*, reg port1:V, reg r28:V, reg c45:L, reg update1:*, reg update2:V, reg c46:L, reg make_packages_html:cls, reg r29:V, reg paste0:cls, reg port2:*, reg port3:V, reg p1:p(V +), reg r32:V, reg r33:V, reg stop1:cls, reg r34:V, reg r35:V, reg remote3:*, reg remote4:V, reg paste1:cls, reg home:*, reg home1:V, reg p2:p(V +), reg r37:V, reg WINDOWS2:*, reg WINDOWS3:V, reg c47:L, reg cat:cls, reg gettextf:cls, reg sQuote:cls, reg url:*, reg url1:V, reg p3:p(V +), reg r39:V, reg p4:p(V +), reg r41:V, reg p5:p(V +), reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg browser9:*, reg browser10:V, reg c48:L, reg c49:L, reg writeLines:cls, reg strwrap:cls, reg gettextf1:cls, reg browser11:*, reg browser12:V, reg p6:p(V +), reg r48:V, reg p7:p(V +), reg r50:V, reg p8:p(V +), reg r52:V, reg writeLines1:cls, reg gettext:cls, reg r53:V, reg p9:p(V +), reg r55:V, reg browseURL:cls, reg url2:*, reg url3:V, reg p10:p(V +), reg browser13:*, reg browser14:V, reg p11:p(V +), reg r58:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r59:V, reg r60:V, reg invisible:cls, reg r61:V |
    mkenv;
    update_isMissing = missing.0(update);
    if update_isMissing then L0(FALSE) else L0(update);
  L0(update_orDefault):
    st update = update_orDefault;
    gui_isMissing = missing.0(gui);
    if gui_isMissing then L1("irrelevant") else L1(gui);
  L1(gui_orDefault):
    st gui = gui_orDefault;
    browser_isMissing = missing.0(browser);
    if browser_isMissing then L2() else L3(browser);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("browser");
      return r;
    };
    goto L3(p);
  L3(browser_orDefault):
    st browser = browser_orDefault;
    remote_isMissing = missing.0(remote);
    if remote_isMissing then L4(NULL) else L4(remote);
  L4(remote_orDefault):
    st remote = remote_orDefault;
    _Platform = ld `.Platform`;
    check L28() else D0();
  D0():
    deopt 0 [_Platform];
  L28():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L30() else L31(_Platform1);
  L29(dx1):
    r3 = `==`(dx1, "windows");
    st WINDOWS = r3;
    WINDOWS = ld WINDOWS;
    check L33() else D1();
  L30():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(_Platform3):
    r2 = `$`(_Platform3, <sym OS.type>);
    goto L29(r2);
  D1():
    deopt 6 [WINDOWS];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(dx);
  L33():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    r4 = `!`(WINDOWS1);
    c1 = `as.logical`(r4);
    if c1 then L34() else L5();
  L5():
    goto L15();
  L15():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L34():
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L6(r6):
    r8 = `!`(r6);
    c2 = `as.logical`(r8);
    if c2 then L39() else L7(c2);
  L16(r24):
    c44 = `as.logical`(r24);
    if c44 then L64() else L17();
  L35():
    browser1 = ld browser;
    check L37() else D2();
  L36():
    r5 = dyn base(<sym browser>);
    goto L6(r5);
  L61():
    remote1 = ld remote;
    check L63() else D11();
  L62():
    r23 = dyn base4(<sym remote>);
    goto L16(r23);
  D2():
    deopt 11 [browser1];
  D11():
    deopt 48 [remote1];
  L7(c4):
    c42 = `as.logical`(c4);
    if c42 then L56() else L13();
  L17():
    remote3 = ld remote;
    check L81() else D23();
  L22(r35):
    st home = r35;
    paste1 = ldf paste0;
    check L82() else D24();
  L37():
    browser2 = force? browser1;
    checkMissing(browser2);
    is_function = ldf `is.function` in base;
    r7 = dyn is_function(browser2);
    check L38() else D3();
  L39():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L63():
    remote2 = force? remote1;
    checkMissing(remote2);
    c43 = `==`(remote2, NULL);
    goto L16(c43);
  L64():
    __ = ldf `::`;
    check L65() else D12();
  D3():
    deopt 14 [r7];
  D12():
    deopt 52 [];
  D23():
    deopt 84 [remote3];
  D24():
    deopt 88 [];
  L8(c7, r10):
    r12 = `!=`(r10, 1);
    c8 = `as.logical`(r12);
    if c8 then L9(c7, c8) else L44();
  L13():
    goto L14(NULL);
  L14(r21):
    goto L15();
  L38():
    goto L6(r7);
  L40():
    browser3 = ld browser;
    check L42() else D4();
  L41():
    r9 = dyn base1(<sym browser>);
    goto L8(c2, r9);
  L56():
    stop = ldf stop;
    check L57() else D9();
  L65():
    r25 = dyn __("tools", "startDynamicHelp");
    check L66() else D13();
  L81():
    remote4 = force? remote3;
    checkMissing(remote4);
    goto L22(remote4);
  L82():
    p2 = prom<V +>{
      home = ld home;
      home1 = force? home;
      checkMissing(home1);
      return home1;
    };
    r37 = dyn paste1(p2, "/doc/html/index.html");
    check L83() else D25();
  D4():
    deopt 18 [c2, browser3];
  D9():
    deopt 40 [];
  D13():
    deopt 55 [r25];
  D25():
    deopt 91 [r37];
  L9(c9, c10):
    c24 = `as.logical`(c10);
    if c24 then L11(c9, c24) else L49();
  L42():
    browser4 = force? browser3;
    checkMissing(browser4);
    length = ldf length in base;
    r11 = dyn length(browser4);
    check L43() else D5();
  L44():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L57():
    r20 = dyn stop("invalid browser name, check options(\"browser\").");
    check L58() else D10();
  L66():
    checkFun.0(r25);
    r26 = r25 as cls;
    r27 = dyn r26(NA_LGL);
    check L67() else D14();
  L83():
    st url = r37;
    WINDOWS2 = ld WINDOWS;
    check L84() else D26();
  D5():
    deopt 21 [c2, r11];
  D10():
    deopt 42 [r20];
  D14():
    deopt 58 [r27];
  D26():
    deopt 93 [WINDOWS2];
  L10(c17, c18, r14):
    r15 = `!`(r14);
    c20 = `as.logical`(r15);
    c21 = `||`(c18, c20);
    goto L9(c17, c21);
  L11(c25, c26):
    c39 = `as.logical`(c26);
    c40 = `&&`(c25, c39);
    goto L7(c40);
  L43():
    goto L8(c2, r11);
  L45():
    browser5 = ld browser;
    check L47() else D6();
  L46():
    r13 = dyn base2(<sym browser>);
    goto L10(c7, c8, r13);
  L49():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L58():
    goto L14(r20);
  L67():
    st port = r27;
    port = ld port;
    check L68() else D15();
  L84():
    WINDOWS3 = force? WINDOWS2;
    checkMissing(WINDOWS3);
    c47 = `as.logical`(WINDOWS3);
    if c47 then L85() else L23();
  D6():
    deopt 25 [c7, c8, browser5];
  D15():
    deopt 60 [port];
  L12(c33, c34, r17):
    r19 = `!`(r17);
    c35 = `as.logical`(r19);
    c36 = `||`(c34, c35);
    goto L11(c33, c36);
  L23():
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L89() else L90();
  L24():
    browseURL = ldf browseURL;
    check L98() else D34();
  L47():
    browser6 = force? browser5;
    checkMissing(browser6);
    c19 = `is.character`(browser6);
    goto L10(c7, c8, c19);
  L50():
    browser7 = ld browser;
    check L52() else D7();
  L51():
    r16 = dyn base3(<sym browser>);
    goto L12(c9, c24, r16);
  L68():
    port1 = force? port;
    checkMissing(port1);
    r28 = `>`(port1, 0);
    c45 = `as.logical`(r28);
    if c45 then L69() else L18();
  L85():
    cat = ldf cat;
    check L86() else D27();
  D7():
    deopt 32 [c9, c24, browser7];
  D27():
    deopt 96 [];
  D34():
    deopt 114 [];
  L18():
    stop1 = ldf stop;
    check L78() else D21();
  L21(r33):
    goto L22(r33);
  L25(r46):
    c49 = `as.logical`(r46);
    if c49 then L92() else L26();
  L52():
    browser8 = force? browser7;
    checkMissing(browser8);
    nzchar = ldf nzchar in base;
    r18 = dyn nzchar(browser8);
    check L53() else D8();
  L69():
    update1 = ld update;
    check L70() else D16();
  L86():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        p3 = prom<V +>{
          url = ld url;
          url1 = force? url;
          checkMissing(url1);
          return url1;
        };
        r39 = dyn sQuote(p3);
        return r39;
      };
      r41 = dyn gettextf("If nothing happens, you should open\n%s yourself\n", p4);
      return r41;
    };
    r43 = dyn cat(p5);
    check L87() else D28();
  L89():
    browser9 = ld browser;
    check L91() else D29();
  L90():
    r45 = dyn base5(<sym browser>);
    goto L25(r45);
  L98():
    p10 = prom<V +>{
      url2 = ld url;
      url3 = force? url2;
      checkMissing(url3);
      return url3;
    };
    p11 = prom<V +>{
      browser13 = ld browser;
      browser14 = force? browser13;
      checkMissing(browser14);
      return browser14;
    };
    r58 = dyn browseURL[, browser](p10, p11);
    check L99() else D35();
  D8():
    deopt 35 [c9, c24, r18];
  D16():
    deopt 64 [update1];
  D21():
    deopt 79 [];
  D28():
    deopt 98 [r43];
  D29():
    deopt 100 [browser9];
  D35():
    deopt 118 [r58];
  L26():
    goto L24();
  L53():
    goto L12(c9, c24, r18);
  L70():
    update2 = force? update1;
    checkMissing(update2);
    c46 = `as.logical`(update2);
    if c46 then L71() else L19();
  L78():
    r34 = dyn stop1[, `call.`]("help.start() requires the HTTP server to be running", FALSE);
    check L79() else D22();
  L87():
    goto L24();
  L91():
    browser10 = force? browser9;
    checkMissing(browser10);
    c48 = `is.character`(browser10);
    goto L25(c48);
  L92():
    writeLines = ldf writeLines;
    check L93() else D30();
  L99():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L100() else L101();
  D22():
    deopt 83 [r34];
  D30():
    deopt 104 [];
  L19():
    goto L20();
  L20():
    paste0 = ldf paste0;
    check L75() else D19();
  L27(r60):
    popenv;
    return r60;
  L71():
    make_packages_html = ldf `make.packages.html`;
    check L72() else D17();
  L79():
    goto L21(r34);
  L93():
    p8 = prom<V +>{
      strwrap = ldf strwrap;
      p7 = prom<V +>{
        gettextf1 = ldf gettextf;
        p6 = prom<V +>{
          browser11 = ld browser;
          browser12 = force? browser11;
          checkMissing(browser12);
          return browser12;
        };
        r48 = dyn gettextf1("If the browser launched by '%s' is already running, it is *not* restarted, and you must switch to its window.", p6);
        return r48;
      };
      r50 = dyn strwrap[, exdent](p7, 4);
      return r50;
    };
    r52 = dyn writeLines(p8);
    check L94() else D31();
  L100():
    invisible = ldf invisible in base;
    r61 = dyn invisible();
    check L102() else D36();
  L101():
    r59 = dyn base6();
    goto L27(r59);
  D17():
    deopt 67 [];
  D19():
    deopt 74 [];
  D31():
    deopt 106 [r52];
  D36():
    deopt 122 [r61];
  L72():
    r29 = dyn make_packages_html[temp](TRUE);
    check L73() else D18();
  L75():
    p1 = prom<V +>{
      port2 = ld port;
      port3 = force? port2;
      checkMissing(port3);
      return port3;
    };
    r32 = dyn paste0("http://127.0.0.1:", p1);
    check L76() else D20();
  L94():
    writeLines1 = ldf writeLines;
    check L95() else D32();
  L102():
    goto L27(r61);
  D18():
    deopt 70 [r29];
  D20():
    deopt 77 [r32];
  D32():
    deopt 108 [];
  L73():
    goto L20();
  L76():
    goto L21(r32);
  L95():
    p9 = prom<V +>{
      gettext = ldf gettext;
      r53 = dyn gettext("Otherwise, be patient ...");
      return r53;
    };
    r55 = dyn writeLines1(p9);
    check L96() else D33();
  D33():
    deopt 110 [r55];
  L96():
    goto L24();
  }
}