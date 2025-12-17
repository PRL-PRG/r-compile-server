fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.packageIQR` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg nrow:cls, reg db:*, reg db1:V, reg p:p(V +), reg r2:V, reg r3:V, reg c1:L, reg lapply:cls, reg split:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg nrow1:cls, reg db2:*, reg db3:V, reg p1:p(V +), reg r7:V, reg r8:I, reg p2:p(V +), reg db4:*, reg db5:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:cls, reg p5:p(V +), reg r16:V, reg r17:V, reg tempfile:cls, reg r18:V, reg file:cls, reg outFile:*, reg outFile1:V, reg p6:p(V +), reg r20:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg out:*, reg out1:V, reg names:cls, reg r23:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x5:V, reg writeLines:cls, reg paste0:cls, reg ifelse:cls, reg first:*, reg first1:V, reg p7:p(V +), reg r25:V, reg p8:p(V +), reg x6:*, reg x7:V, reg c4:L, reg x9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r27:V, reg p9:p(V +), reg sQuote:cls, reg pkg:*, reg pkg1:V, reg p10:p(V +), reg r30:V, reg p11:p(V +), reg r32:V, reg p12:p(V +), reg outConn:*, reg outConn1:V, reg p13:p(V +), reg r35:V, reg writeLines1:cls, reg formatDL:cls, reg out2:*, reg out3:V, reg c5:L, reg out5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg pkg2:*, reg pkg3:V, reg __1:cls, reg r36:V, reg c6:L, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r37:V, reg p14:p(V +), reg out6:*, reg out7:V, reg c7:L, reg out9:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg pkg4:*, reg pkg5:V, reg __3:cls, reg r39:V, reg c8:L, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg __4:cls, reg r40:V, reg p15:p(V +), reg r42:V, reg p16:p(V +), reg outConn2:*, reg outConn3:V, reg p17:p(V +), reg r45:V, reg first2:*, reg first3:V, reg c9:L, reg close:cls, reg outConn4:*, reg outConn5:V, reg p18:p(V +), reg r47:V, reg unlink:cls, reg outFile2:*, reg outFile3:V, reg p19:p(V +), reg r49:V, reg writeLines2:cls, reg paste1:cls, reg tolower:cls, reg x10:*, reg x11:V, reg c10:L, reg x13:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg r50:V, reg p20:p(V +), reg r52:V, reg p21:p(V +), reg r54:V, reg p22:p(V +), reg r56:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r57:V, reg r58:V, reg x14:*, reg x15:V, reg c11:L, reg x17:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r59:V, reg c12:V, reg r60:V, reg c13:L, reg writeLines3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r61:V, reg r62:V, reg x18:*, reg x19:V, reg c14:L, reg x21:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r63:V, reg c15:cls, reg r64:V, reg p23:p(V +), reg r66:V, reg r67:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r69:V, reg r70:V, reg x22:*, reg x23:V, reg c16:L, reg x25:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg r71:V, reg c17:V, reg r72:V, reg c18:L, reg writeLines4:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r73:V, reg r74:V, reg x26:*, reg x27:V, reg c19:L, reg x29:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg r75:V, reg c20:cls, reg r76:V, reg p24:p(V +), reg outConn6:*, reg outConn7:V, reg p25:p(V +), reg r79:V, reg close1:cls, reg outConn8:*, reg outConn9:V, reg p26:p(V +), reg r82:V, reg file_show:cls, reg outFile4:*, reg outFile5:V, reg p27:p(V +), reg paste2:cls, reg tolower1:cls, reg x30:*, reg x31:V, reg c21:L, reg x33:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r84:V, reg p28:p(V +), reg r86:V, reg p29:p(V +), reg r88:V, reg p30:p(V +), reg r90:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r91:V, reg r92:V, reg x34:*, reg x35:V, reg invisible:cls, reg r93:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L14() else D0();
  D0():
    deopt 0 [x1];
  L14():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L16() else L17(x2);
  L15(dx1):
    st db = dx1;
    nrow = ldf nrow;
    check L19() else D1();
  L16():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(x4):
    r = `$`(x4, <sym results>);
    goto L15(r);
  D1():
    deopt 5 [];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L19():
    p = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r2 = dyn nrow(p);
    check L20() else D2();
  D2():
    deopt 7 [r2];
  L20():
    r3 = `>`(r2, 0);
    c1 = `as.logical`(r3);
    if c1 then L21() else L0();
  L0():
    goto L1(NULL);
  L1(r17):
    st out = r17;
    tempfile = ldf tempfile;
    check L25() else D5();
  L21():
    lapply = ldf lapply;
    check L22() else D3();
  D3():
    deopt 11 [];
  D5():
    deopt 19 [];
  L22():
    p4 = prom<V +>{
      split = ldf split;
      p2 = prom<V +>{
        sym = ldf seq_len;
        base = ldf seq_len in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r5):
        return r5;
      L1():
        nrow1 = ldf nrow;
        p1 = prom<V +>{
          db2 = ld db;
          db3 = force? db2;
          checkMissing(db3);
          return db3;
        };
        r7 = dyn nrow1(p1);
        r8 = seq_len(r7);
        goto L0(r8);
      L2():
        r4 = dyn base(<lang nrow(db)>);
        goto L0(r4);
      };
      p3 = prom<V +>{
        db4 = ld db;
        db5 = force? db4;
        checkMissing(db5);
        c2 = `is.object`(db5);
        if c2 then L1() else L2();
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", db5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2();
      L2():
        __ = ldf `[` in base;
        r10 = dyn __(db5, <missing>, "Package");
        goto L0(r10);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r12 = dyn split(p2, p3);
      return r12;
    };
    p5 = prom<V +>{
      r14 = clos inner1768509083;
      return r14;
    };
    r16 = dyn lapply(p4, p5);
    check L23() else D4();
  L25():
    r18 = dyn tempfile("RpackageIQR");
    check L26() else D6();
  D4():
    deopt 14 [r16];
  D6():
    deopt 21 [r18];
  L23():
    goto L1(r16);
  L26():
    st outFile = r18;
    file = ldf file;
    check L27() else D7();
  D7():
    deopt 24 [];
  L27():
    p6 = prom<V +>{
      outFile = ld outFile;
      outFile1 = force? outFile;
      checkMissing(outFile1);
      return outFile1;
    };
    r20 = dyn file[, open](p6, "w");
    check L28() else D8();
  D8():
    deopt 28 [r20];
  L28():
    st outConn = r20;
    st first = TRUE;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L2(r22):
    s = toForSeq(r22);
    l = length(s);
    i = 0;
    goto L3(i);
  L29():
    out = ld out;
    check L31() else D9();
  L30():
    r21 = dyn base1(<sym out>);
    goto L2(r21);
  D9():
    deopt 35 [out];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L33() else L4();
  L31():
    out1 = force? out;
    checkMissing(out1);
    names = ldf names in base;
    r23 = dyn names(out1);
    check L32() else D10();
  D10():
    deopt 38 [r23];
  L4():
    x5 = `[[`(s, i2, NULL, TRUE);
    st pkg = x5;
    writeLines = ldf writeLines;
    check L34() else D11();
  L32():
    goto L2(r23);
  L33():
    first2 = ld first;
    check L38() else D15();
  D11():
    deopt 40 [i2];
  D15():
    deopt 55 [first2];
  L34():
    p12 = prom<V +>{
      paste0 = ldf paste0;
      p8 = prom<V +>{
        ifelse = ldf ifelse;
        p7 = prom<V +>{
          first = ld first;
          first1 = force? first;
          checkMissing(first1);
          return first1;
        };
        r25 = dyn ifelse(p7, "", "\n");
        return r25;
      };
      p9 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        c4 = `is.object`(x7);
        if c4 then L1() else L2(x7);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x7);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x9):
        r27 = `$`(x9, <sym title>);
        goto L0(r27);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p11 = prom<V +>{
        sQuote = ldf sQuote;
        p10 = prom<V +>{
          pkg = ld pkg;
          pkg1 = force? pkg;
          checkMissing(pkg1);
          return pkg1;
        };
        r30 = dyn sQuote(p10);
        return r30;
      };
      r32 = dyn paste0(p8, p9, " in package ", p11, ":\n");
      return r32;
    };
    p13 = prom<V +>{
      outConn = ld outConn;
      outConn1 = force? outConn;
      checkMissing(outConn1);
      return outConn1;
    };
    r35 = dyn writeLines(p12, p13);
    check L35() else D12();
  L38():
    first3 = force? first2;
    checkMissing(first3);
    c9 = `as.logical`(first3);
    if c9 then L39() else L5();
  D12():
    deopt 43 [i2, r35];
  L5():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L9():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L35():
    writeLines1 = ldf writeLines;
    check L36() else D13();
  L39():
    close = ldf close;
    check L40() else D16();
  D13():
    deopt 45 [i2];
  D16():
    deopt 58 [];
  L10(r70):
    r72 = `!`(r70);
    c18 = `as.logical`(r72);
    if c18 then L65() else L11();
  L13(r92):
    popenv;
    return r92;
  L36():
    p16 = prom<V +>{
      formatDL = ldf formatDL;
      p14 = prom<V +>{
        out2 = ld out;
        out3 = force? out2;
        checkMissing(out3);
        c5 = `is.object`(out3);
        if c5 then L2() else L3(out3);
      L0(dx7):
        c6 = `is.object`(dx7);
        if c6 then L5() else L6();
      L2():
        dr6 = tryDispatchBuiltin.1("[[", out3);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L4() else L3(dr6);
      L3(out5):
        pkg2 = ld pkg;
        pkg3 = force? pkg2;
        __1 = ldf `[[` in base;
        r36 = dyn __1(out5, pkg3);
        goto L0(r36);
      L1(dx11):
        return dx11;
      L4():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      L5():
        dr8 = tryDispatchBuiltin.1("[", dx7);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L7() else L6();
      L6():
        __2 = ldf `[` in base;
        r37 = dyn __2(dx7, <missing>, "Item");
        goto L1(r37);
      L7():
        dx10 = getTryDispatchBuiltinValue(dr8);
        goto L1(dx10);
      };
      p15 = prom<V +>{
        out6 = ld out;
        out7 = force? out6;
        checkMissing(out7);
        c7 = `is.object`(out7);
        if c7 then L2() else L3(out7);
      L0(dx13):
        c8 = `is.object`(dx13);
        if c8 then L5() else L6();
      L2():
        dr10 = tryDispatchBuiltin.1("[[", out7);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L4() else L3(dr10);
      L3(out9):
        pkg4 = ld pkg;
        pkg5 = force? pkg4;
        __3 = ldf `[[` in base;
        r39 = dyn __3(out9, pkg5);
        goto L0(r39);
      L1(dx17):
        return dx17;
      L4():
        dx12 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx12);
      L5():
        dr12 = tryDispatchBuiltin.1("[", dx13);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L7() else L6();
      L6():
        __4 = ldf `[` in base;
        r40 = dyn __4(dx13, <missing>, "Title");
        goto L1(r40);
      L7():
        dx16 = getTryDispatchBuiltinValue(dr12);
        goto L1(dx16);
      };
      r42 = dyn formatDL(p14, p15);
      return r42;
    };
    p17 = prom<V +>{
      outConn2 = ld outConn;
      outConn3 = force? outConn2;
      checkMissing(outConn3);
      return outConn3;
    };
    r45 = dyn writeLines1(p16, p17);
    check L37() else D14();
  L40():
    p18 = prom<V +>{
      outConn4 = ld outConn;
      outConn5 = force? outConn4;
      checkMissing(outConn5);
      return outConn5;
    };
    r47 = dyn close(p18);
    check L41() else D17();
  L58():
    x22 = ld x;
    check L60() else D25();
  L59():
    r69 = dyn base4(<lang `$`(x, footer)>);
    goto L10(r69);
  L73():
    x34 = ld x;
    check L75() else D32();
  L74():
    r91 = dyn base6(<sym x>);
    goto L13(r91);
  D14():
    deopt 48 [i2, r45];
  D17():
    deopt 60 [r47];
  D25():
    deopt 82 [x22];
  D32():
    deopt 108 [x34];
  L11():
    goto L12();
  L12():
    close1 = ldf close;
    check L69() else D28();
  L37():
    st first = FALSE;
    goto L3(i2);
  L41():
    unlink = ldf unlink;
    check L42() else D18();
  L60():
    x23 = force? x22;
    checkMissing(x23);
    c16 = `is.object`(x23);
    if c16 then L62() else L63(x23);
  L65():
    writeLines4 = ldf writeLines;
    check L66() else D26();
  L75():
    x35 = force? x34;
    checkMissing(x35);
    invisible = ldf invisible in base;
    r93 = dyn invisible(x35);
    check L76() else D33();
  D18():
    deopt 62 [];
  D26():
    deopt 88 [];
  D28():
    deopt 95 [];
  D33():
    deopt 111 [r93];
  L42():
    p19 = prom<V +>{
      outFile2 = ld outFile;
      outFile3 = force? outFile2;
      checkMissing(outFile3);
      return outFile3;
    };
    r49 = dyn unlink(p19);
    check L43() else D19();
  L61(dx25):
    c17 = `==`(dx25, NULL);
    goto L10(c17);
  L62():
    dr20 = tryDispatchBuiltin.1("$", x23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L64() else L63(dr20);
  L63(x25):
    r71 = `$`(x25, <sym footer>);
    goto L61(r71);
  L66():
    p24 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r74):
      return r74;
    L1():
      x26 = ld x;
      x27 = force? x26;
      checkMissing(x27);
      c19 = `is.object`(x27);
      if c19 then L4() else L5(x27);
    L2():
      r73 = dyn base5("\n", <lang `$`(x, footer)>);
      goto L0(r73);
    L3(dx27):
      c20 = ldf c in base;
      r76 = dyn c20("\n", dx27);
      goto L0(r76);
    L4():
      dr22 = tryDispatchBuiltin.1("$", x27);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L6() else L5(dr22);
    L5(x29):
      r75 = `$`(x29, <sym footer>);
      goto L3(r75);
    L6():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L3(dx26);
    };
    p25 = prom<V +>{
      outConn6 = ld outConn;
      outConn7 = force? outConn6;
      checkMissing(outConn7);
      return outConn7;
    };
    r79 = dyn writeLines4(p24, p25);
    check L67() else D27();
  L69():
    p26 = prom<V +>{
      outConn8 = ld outConn;
      outConn9 = force? outConn8;
      checkMissing(outConn9);
      return outConn9;
    };
    r82 = dyn close1(p26);
    check L70() else D29();
  L76():
    goto L13(r93);
  D19():
    deopt 64 [r49];
  D27():
    deopt 91 [r79];
  D29():
    deopt 97 [r82];
  L43():
    writeLines2 = ldf writeLines;
    check L44() else D20();
  L64():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L61(dx24);
  L67():
    goto L12();
  L70():
    file_show = ldf `file.show`;
    check L71() else D30();
  D20():
    deopt 66 [];
  D30():
    deopt 99 [];
  L44():
    p22 = prom<V +>{
      paste1 = ldf paste;
      p21 = prom<V +>{
        tolower = ldf tolower;
        p20 = prom<V +>{
          x10 = ld x;
          x11 = force? x10;
          checkMissing(x11);
          c10 = `is.object`(x11);
          if c10 then L1() else L2(x11);
        L0(dx19):
          return dx19;
        L1():
          dr14 = tryDispatchBuiltin.1("$", x11);
          dc7 = getTryDispatchBuiltinDispatched(dr14);
          if dc7 then L3() else L2(dr14);
        L2(x13):
          r50 = `$`(x13, <sym title>);
          goto L0(r50);
        L3():
          dx18 = getTryDispatchBuiltinValue(dr14);
          goto L0(dx18);
        };
        r52 = dyn tolower(p20);
        return r52;
      };
      r54 = dyn paste1("no", p21, "found");
      return r54;
    };
    r56 = dyn writeLines2(p22);
    check L45() else D21();
  L71():
    p27 = prom<V +>{
      outFile4 = ld outFile;
      outFile5 = force? outFile4;
      checkMissing(outFile5);
      return outFile5;
    };
    p30 = prom<V +>{
      paste2 = ldf paste;
      p29 = prom<V +>{
        tolower1 = ldf tolower;
        p28 = prom<V +>{
          x30 = ld x;
          x31 = force? x30;
          checkMissing(x31);
          c21 = `is.object`(x31);
          if c21 then L1() else L2(x31);
        L0(dx29):
          return dx29;
        L1():
          dr24 = tryDispatchBuiltin.1("$", x31);
          dc12 = getTryDispatchBuiltinDispatched(dr24);
          if dc12 then L3() else L2(dr24);
        L2(x33):
          r84 = `$`(x33, <sym title>);
          goto L0(r84);
        L3():
          dx28 = getTryDispatchBuiltinValue(dr24);
          goto L0(dx28);
        };
        r86 = dyn tolower1(p28);
        return r86;
      };
      r88 = dyn paste2("R", p29);
      return r88;
    };
    r90 = dyn file_show[, `delete.file`, title](p27, TRUE, p30);
    check L72() else D31();
  D21():
    deopt 68 [r56];
  D31():
    deopt 105 [r90];
  L45():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L72():
    goto L9();
  L6(r58):
    r60 = `!`(r58);
    c13 = `as.logical`(r60);
    if c13 then L53() else L7();
  L46():
    x14 = ld x;
    check L48() else D22();
  L47():
    r57 = dyn base2(<lang `$`(x, footer)>);
    goto L6(r57);
  D22():
    deopt 70 [x14];
  L7():
    goto L8(NULL);
  L8(r67):
    goto L9();
  L48():
    x15 = force? x14;
    checkMissing(x15);
    c11 = `is.object`(x15);
    if c11 then L50() else L51(x15);
  L53():
    writeLines3 = ldf writeLines;
    check L54() else D23();
  D23():
    deopt 76 [];
  L49(dx21):
    c12 = `==`(dx21, NULL);
    goto L6(c12);
  L50():
    dr16 = tryDispatchBuiltin.1("$", x15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L52() else L51(dr16);
  L51(x17):
    r59 = `$`(x17, <sym footer>);
    goto L49(r59);
  L54():
    p23 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r62):
      return r62;
    L1():
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      c14 = `is.object`(x19);
      if c14 then L4() else L5(x19);
    L2():
      r61 = dyn base3("", <lang `$`(x, footer)>);
      goto L0(r61);
    L3(dx23):
      c15 = ldf c in base;
      r64 = dyn c15("", dx23);
      goto L0(r64);
    L4():
      dr18 = tryDispatchBuiltin.1("$", x19);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L6() else L5(dr18);
    L5(x21):
      r63 = `$`(x21, <sym footer>);
      goto L3(r63);
    L6():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L3(dx22);
    };
    r66 = dyn writeLines3(p23);
    check L55() else D24();
  D24():
    deopt 78 [r66];
  L52():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L49(dx20);
  L55():
    goto L8(r66);
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