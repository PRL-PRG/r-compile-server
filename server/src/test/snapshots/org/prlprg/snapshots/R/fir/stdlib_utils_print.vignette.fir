fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.vignette` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg nzchar:cls, reg r3:V, reg c1:L, reg __:cls, reg r4:V, reg r5:cls, reg out:*, reg out1:V, reg p:p(V +), reg r7:V, reg tolower:cls, reg ext:*, reg ext1:V, reg p1:p(V +), reg r9:V, reg r10:V, reg c2:L, reg __1:cls, reg r11:V, reg r12:cls, reg r13:V, reg r14:V, reg port:*, reg port1:V, reg r15:V, reg c3:L, reg sprintf:cls, reg port2:*, reg port3:V, reg p2:p(V +), reg basename:cls, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r17:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg out2:*, reg out3:V, reg p5:p(V +), reg r22:V, reg r23:V, reg file_path:cls, reg x9:*, reg x10:V, reg c5:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r24:V, reg p6:p(V +), reg out4:*, reg out5:V, reg p7:p(V +), reg r27:V, reg tolower1:cls, reg ext2:*, reg ext3:V, reg p8:p(V +), reg r29:V, reg r30:V, reg c6:L, reg getOption:cls, reg r31:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r32:V, reg r33:V, reg pdfviewer:*, reg pdfviewer1:V, reg identical:cls, reg r34:V, reg c7:L, reg r35:V, reg _Platform:*, reg _Platform1:V, reg c8:L, reg _Platform3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r36:V, reg r37:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r38:V, reg c14:L, reg r39:V, reg pdfviewer2:*, reg pdfviewer3:V, reg file_path1:cls, reg R_home:cls, reg r40:V, reg p9:p(V +), reg r42:V, reg identical1:cls, reg r43:V, reg c15:L, reg c16:V, reg c18:L, reg shell_exec:cls, reg out6:*, reg out7:V, reg p10:p(V +), reg r45:V, reg system2:cls, reg pdfviewer4:*, reg pdfviewer5:V, reg p11:p(V +), reg shQuote:cls, reg out8:*, reg out9:V, reg p12:p(V +), reg r48:V, reg p13:p(V +), reg r50:V, reg r51:V, reg browseURL:cls, reg out10:*, reg out11:V, reg p14:p(V +), reg r53:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg x13:*, reg x14:V, reg c19:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r55:V, reg p15:p(V +), reg r57:V, reg p16:p(V +), reg r59:V, reg p17:p(V +), reg r61:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r62:V, reg r63:V, reg x17:*, reg x18:V, reg invisible:cls, reg r64:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L24() else L1();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<lang `<-`(out, `$`(x, PDF))>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    warning = ldf warning;
    check L76() else D32();
  L14():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L78() else L79();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L20() else L21(x2);
  L24():
    __ = ldf `::`;
    check L25() else D2();
  D2():
    deopt 9 [];
  D32():
    deopt 119 [];
  L15(r63):
    popenv;
    return r63;
  L19(dx1):
    st out = dx1;
    nzchar = ldf nzchar in base;
    r3 = dyn nzchar(dx1);
    check L23() else D1();
  L20():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(x4):
    r2 = `$`(x4, <sym PDF>);
    goto L19(r2);
  L25():
    r4 = dyn __("tools", "file_ext");
    check L26() else D3();
  L76():
    p17 = prom<V +>{
      gettextf = ldf gettextf;
      p16 = prom<V +>{
        sQuote = ldf sQuote;
        p15 = prom<V +>{
          x13 = ld x;
          x14 = force? x13;
          checkMissing(x14);
          c19 = `is.object`(x14);
          if c19 then L1() else L2(x14);
        L0(dx9):
          return dx9;
        L1():
          dr8 = tryDispatchBuiltin.1("$", x14);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2(dr8);
        L2(x16):
          r55 = `$`(x16, <sym Topic>);
          goto L0(r55);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        };
        r57 = dyn sQuote(p15);
        return r57;
      };
      r59 = dyn gettextf("vignette %s has no PDF/HTML", p16);
      return r59;
    };
    r61 = dyn warning[, `call.`, domain](p17, FALSE, NA_LGL);
    check L77() else D33();
  L78():
    x17 = ld x;
    check L80() else D34();
  L79():
    r62 = dyn base3(<sym x>);
    goto L15(r62);
  D1():
    deopt 7 [r3];
  D3():
    deopt 12 [r4];
  D33():
    deopt 125 [r61];
  D34():
    deopt 128 [x17];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L23():
    goto L0(r3);
  L26():
    checkFun.0(r4);
    r5 = r4 as cls;
    p = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r7 = dyn r5(p);
    check L27() else D4();
  L77():
    goto L14();
  L80():
    x18 = force? x17;
    checkMissing(x18);
    invisible = ldf invisible in base;
    r64 = dyn invisible(x18);
    check L81() else D35();
  D4():
    deopt 15 [r7];
  D35():
    deopt 131 [r64];
  L27():
    st ext = r7;
    tolower = ldf tolower;
    check L28() else D5();
  L81():
    goto L15(r64);
  D5():
    deopt 18 [];
  L28():
    p1 = prom<V +>{
      ext = ld ext;
      ext1 = force? ext;
      checkMissing(ext1);
      return ext1;
    };
    r9 = dyn tolower(p1);
    check L29() else D6();
  D6():
    deopt 20 [r9];
  L29():
    r10 = `==`(r9, "html");
    c2 = `as.logical`(r10);
    if c2 then L30() else L2();
  L2():
    goto L3(0);
  L3(r14):
    st port = r14;
    port = ld port;
    check L35() else D10();
  L30():
    __1 = ldf `::`;
    check L31() else D7();
  D7():
    deopt 24 [];
  D10():
    deopt 34 [port];
  L31():
    r11 = dyn __1("tools", "startDynamicHelp");
    check L32() else D8();
  L35():
    port1 = force? port;
    checkMissing(port1);
    r15 = `>`(port1, 0);
    c3 = `as.logical`(r15);
    if c3 then L36() else L4();
  D8():
    deopt 27 [r11];
  L4():
    file_path = ldf `file.path`;
    check L40() else D13();
  L5(r23):
    st out = r23;
    tolower1 = ldf tolower;
    check L42() else D15();
  L32():
    checkFun.0(r11);
    r12 = r11 as cls;
    r13 = dyn r12(NA_LGL);
    check L33() else D9();
  L36():
    sprintf = ldf sprintf;
    check L37() else D11();
  D9():
    deopt 30 [r13];
  D11():
    deopt 39 [];
  D13():
    deopt 46 [];
  D15():
    deopt 53 [];
  L33():
    goto L3(r13);
  L37():
    p2 = prom<V +>{
      port2 = ld port;
      port3 = force? port2;
      checkMissing(port3);
      return port3;
    };
    p4 = prom<V +>{
      basename = ldf basename;
      p3 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c4 = `is.object`(x6);
        if c4 then L1() else L2(x6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x8):
        r17 = `$`(x8, <sym Dir>);
        goto L0(r17);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r19 = dyn basename(p3);
      return r19;
    };
    p5 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r22 = dyn sprintf("http://127.0.0.1:%d/library/%s/doc/%s", p2, p4, p5);
    check L38() else D12();
  L40():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c5 = `is.object`(x10);
      if c5 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r24 = `$`(x12, <sym Dir>);
      goto L0(r24);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p7 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r27 = dyn file_path(p6, "doc", p7);
    check L41() else D14();
  L42():
    p8 = prom<V +>{
      ext2 = ld ext;
      ext3 = force? ext2;
      checkMissing(ext3);
      return ext3;
    };
    r29 = dyn tolower1(p8);
    check L43() else D16();
  D12():
    deopt 44 [r22];
  D14():
    deopt 50 [r27];
  D16():
    deopt 55 [r29];
  L38():
    goto L5(r22);
  L41():
    goto L5(r27);
  L43():
    r30 = `==`(r29, "pdf");
    c6 = `as.logical`(r30);
    if c6 then L44() else L6();
  L6():
    browseURL = ldf browseURL;
    check L73() else D30();
  L13(r51):
    goto L14();
  L44():
    getOption = ldf getOption;
    check L45() else D17();
  D17():
    deopt 59 [];
  D30():
    deopt 115 [];
  L45():
    r31 = dyn getOption("pdfviewer");
    check L46() else D18();
  L73():
    p14 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    r53 = dyn browseURL(p14);
    check L74() else D31();
  D18():
    deopt 61 [r31];
  D31():
    deopt 117 [r53];
  L46():
    st pdfviewer = r31;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L74():
    goto L13(r53);
  L7(r33):
    c7 = `as.logical`(r33);
    if c7 then L51() else L8();
  L47():
    pdfviewer = ld pdfviewer;
    check L49() else D19();
  L48():
    r32 = dyn base1(<sym pdfviewer>, "false");
    goto L7(r32);
  D19():
    deopt 65 [pdfviewer];
  L8():
    _Platform = ld `.Platform`;
    check L53() else D21();
  L9(r35):
    goto L13(r35);
  L49():
    pdfviewer1 = force? pdfviewer;
    checkMissing(pdfviewer1);
    identical = ldf identical in base;
    r34 = dyn identical(pdfviewer1, "false", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L50() else D20();
  L51():
    goto L9(NULL);
  D20():
    deopt 76 [r34];
  D21():
    deopt 79 [_Platform];
  L50():
    goto L7(r34);
  L53():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c8 = `is.object`(_Platform1);
    if c8 then L55() else L56(_Platform1);
  L54(dx7):
    r37 = `==`(dx7, "windows");
    c9 = `as.logical`(r37);
    if c9 then L58() else L10(c9);
  L55():
    dr6 = tryDispatchBuiltin.1("$", _Platform1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(dr6);
  L56(_Platform3):
    r36 = `$`(_Platform3, <sym OS.type>);
    goto L54(r36);
  L10(c11):
    c18 = `as.logical`(c11);
    if c18 then L66() else L12();
  L57():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L54(dx6);
  L58():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L59() else L60();
  L11(c14, r39):
    c15 = `as.logical`(r39);
    c16 = `&&`(c14, c15);
    goto L10(c16);
  L12():
    system2 = ldf system2;
    check L70() else D28();
  L59():
    pdfviewer2 = ld pdfviewer;
    check L61() else D22();
  L60():
    r38 = dyn base2(<sym pdfviewer>, <lang file.path(R.home("bin"), "open.exe")>);
    goto L11(c9, r38);
  L66():
    shell_exec = ldf `shell.exec`;
    check L67() else D26();
  D22():
    deopt 86 [c9, pdfviewer2];
  D26():
    deopt 104 [];
  D28():
    deopt 108 [];
  L61():
    pdfviewer3 = force? pdfviewer2;
    checkMissing(pdfviewer3);
    file_path1 = ldf `file.path`;
    check L62() else D23();
  L67():
    p10 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r45 = dyn shell_exec(p10);
    check L68() else D27();
  L70():
    p11 = prom<V +>{
      pdfviewer4 = ld pdfviewer;
      pdfviewer5 = force? pdfviewer4;
      checkMissing(pdfviewer5);
      return pdfviewer5;
    };
    p13 = prom<V +>{
      shQuote = ldf shQuote;
      p12 = prom<V +>{
        out8 = ld out;
        out9 = force? out8;
        checkMissing(out9);
        return out9;
      };
      r48 = dyn shQuote(p12);
      return r48;
    };
    r50 = dyn system2[, , wait](p11, p13, FALSE);
    check L71() else D29();
  D23():
    deopt 89 [c9];
  D27():
    deopt 106 [r45];
  D29():
    deopt 113 [r50];
  L62():
    p9 = prom<V +>{
      R_home = ldf `R.home`;
      r40 = dyn R_home("bin");
      return r40;
    };
    r42 = dyn file_path1(p9, "open.exe");
    check L63() else D24();
  L68():
    goto L9(r45);
  L71():
    goto L9(r50);
  D24():
    deopt 92 [c9, r42];
  L63():
    identical1 = ldf identical in base;
    r43 = dyn identical1(pdfviewer3, r42, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L64() else D25();
  D25():
    deopt 101 [c9, r43];
  L64():
    goto L11(c9, r43);
  }
}