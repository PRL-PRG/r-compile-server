fun main() {
  () -+> V { reg r:cls, reg system_file:cls, reg r1:V, reg setwd:cls, reg tempdir:cls, reg r2:V, reg p:p(V +), reg r4:V, reg SweaveSyntConv:cls, reg testfile:*, reg testfile1:V, reg p1:p(V +), reg SweaveSyntaxLatex:*, reg SweaveSyntaxLatex1:V, reg p2:p(V +), reg r7:V, reg Sweave:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg interactive:cls, reg r11:V, reg r12:V, reg c:L, reg unlink:cls, reg r13:V, reg setwd1:cls, reg oldwd:*, reg oldwd1:V, reg p3:p(V +), reg r16:V |
    mkenv;
    r = clos inner1994295672;
    st SweaveSyntConv = r;
    system_file = ldf `system.file`;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    r1 = dyn system_file[, , package]("Sweave", "Sweave-test-1.Rnw", "utils");
    check L4() else D1();
  D1():
    deopt 9 [r1];
  L4():
    st testfile = r1;
    setwd = ldf setwd;
    check L5() else D2();
  D2():
    deopt 12 [];
  L5():
    p = prom<V +>{
      tempdir = ldf tempdir;
      r2 = dyn tempdir();
      return r2;
    };
    r4 = dyn setwd(p);
    check L6() else D3();
  D3():
    deopt 14 [r4];
  L6():
    st oldwd = r4;
    SweaveSyntConv = ldf SweaveSyntConv;
    check L7() else D4();
  D4():
    deopt 17 [];
  L7():
    p1 = prom<V +>{
      testfile = ld testfile;
      testfile1 = force? testfile;
      checkMissing(testfile1);
      return testfile1;
    };
    p2 = prom<V +>{
      SweaveSyntaxLatex = ld SweaveSyntaxLatex;
      SweaveSyntaxLatex1 = force? SweaveSyntaxLatex;
      checkMissing(SweaveSyntaxLatex1);
      return SweaveSyntaxLatex1;
    };
    r7 = dyn SweaveSyntConv(p1, p2);
    check L8() else D5();
  D5():
    deopt 20 [r7];
  L8():
    Sweave = ldf Sweave;
    check L9() else D6();
  D6():
    deopt 22 [];
  L9():
    r8 = dyn Sweave("Sweave-test-1.Stex");
    check L10() else D7();
  D7():
    deopt 24 [r8];
  L10():
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r10):
    r12 = `!`(r10);
    c = `as.logical`(r12);
    if c then L14() else L1();
  L11():
    interactive = ldf interactive in base;
    r11 = dyn interactive();
    check L13() else D8();
  L12():
    r9 = dyn base();
    goto L0(r9);
  D8():
    deopt 28 [r11];
  L1():
    goto L2();
  L2():
    setwd1 = ldf setwd;
    check L18() else D11();
  L13():
    goto L0(r11);
  L14():
    unlink = ldf unlink;
    check L15() else D9();
  D9():
    deopt 31 [];
  D11():
    deopt 37 [];
  L15():
    r13 = dyn unlink("Sweave-test-1*");
    check L16() else D10();
  L18():
    p3 = prom<V +>{
      oldwd = ld oldwd;
      oldwd1 = force? oldwd;
      checkMissing(oldwd1);
      return oldwd1;
    };
    r16 = dyn setwd1(p3);
    check L19() else D12();
  D10():
    deopt 33 [r13];
  D12():
    deopt 39 [r16];
  L16():
    goto L2();
  L19():
    popenv;
    return r16;
  }
}
fun inner1994295672(file, syntax, output) {
  (reg file:*, reg syntax:*, reg output:*) -+> V { var file:*, var syntax:*, var output:*, reg output_isMissing:L, reg output_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg syntax1:*, reg syntax2:V, reg c:L, reg c1:L, reg get:cls, reg syntax3:*, reg syntax4:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg syntax5:*, reg syntax6:V, reg class:cls, reg r9:V, reg identical:cls, reg r10:V, reg r11:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg p2:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg syntax7:*, reg syntax8:V, reg c3:L, reg syntax10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg c4:V, reg c5:L, reg stop1:cls, reg r21:V, reg SweaveGetSyntax:cls, reg file1:*, reg file2:V, reg p3:p(V +), reg r24:V, reg readLines:cls, reg file3:*, reg file4:V, reg p4:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg output1:*, reg output2:V, reg c6:V, reg c7:L, reg sub:cls, reg insynt:*, reg insynt1:V, reg c8:L, reg insynt3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r29:V, reg p5:p(V +), reg syntax11:*, reg syntax12:V, reg c9:L, reg syntax14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r31:V, reg c10:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r32:V, reg p6:p(V +), reg basename:cls, reg file5:*, reg file6:V, reg p7:p(V +), reg r35:V, reg p8:p(V +), reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg syntax15:*, reg syntax16:V, reg c11:L, reg syntax18:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r41:V, reg names:cls, reg r42:V, reg TN:*, reg TN1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c12:L, reg x:V, reg n:*, reg n1:V, reg r43:V, reg c13:L, reg gsub:cls, reg insynt4:*, reg insynt5:V, reg c14:L, reg insynt7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg n2:*, reg n3:V, reg __:cls, reg r44:V, reg p9:p(V +), reg syntax19:*, reg syntax20:V, reg c15:L, reg syntax22:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r46:V, reg c16:L, reg dx17:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg n4:*, reg n5:V, reg __1:cls, reg r47:V, reg p10:p(V +), reg text:*, reg text1:V, reg p11:p(V +), reg r50:V, reg i7:I, reg cat:cls, reg text2:*, reg text3:V, reg p12:p(V +), reg output3:*, reg output4:V, reg p13:p(V +), reg r54:V, reg cat1:cls, reg output5:*, reg output6:V, reg p14:p(V +), reg r56:V |
    mkenv;
    st file = file;
    st syntax = syntax;
    output_isMissing = missing.0(output);
    if output_isMissing then L0(NULL) else L0(output);
  L0(output_orDefault):
    st output = output_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L22() else L2();
  L19():
    syntax1 = ld syntax;
    check L21() else D0();
  L20():
    r = dyn base(<sym syntax>);
    goto L1(r);
  D0():
    deopt 1 [syntax1];
  L2():
    goto L3();
  L3():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L21():
    syntax2 = force? syntax1;
    checkMissing(syntax2);
    c = `is.character`(syntax2);
    goto L1(c);
  L22():
    get = ldf get;
    check L23() else D1();
  D1():
    deopt 5 [];
  L4(r6):
    r11 = `!`(r6);
    c2 = `as.logical`(r11);
    if c2 then L33() else L6();
  L23():
    p = prom<V +>{
      syntax3 = ld syntax;
      syntax4 = force? syntax3;
      checkMissing(syntax4);
      return syntax4;
    };
    r3 = dyn get(p);
    check L24() else D2();
  L26():
    sym2 = ldf class;
    base2 = ldf class in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L27():
    r5 = dyn base1(<lang class(syntax)>, "SweaveSyntax");
    goto L4(r5);
  D2():
    deopt 7 [r3];
  L5(r8):
    identical = ldf identical in base;
    r10 = dyn identical(r8, "SweaveSyntax", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L32() else D5();
  L6():
    goto L7();
  L7():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L24():
    st syntax = r3;
    goto L3();
  L28():
    syntax5 = ld syntax;
    check L30() else D3();
  L29():
    r7 = dyn base2(<sym syntax>);
    goto L5(r7);
  L33():
    stop = ldf stop;
    check L34() else D6();
  D3():
    deopt 15 [syntax5];
  D5():
    deopt 28 [r10];
  D6():
    deopt 31 [];
  L8(r19):
    c5 = `as.logical`(r19);
    if c5 then L44() else L9();
  L30():
    syntax6 = force? syntax5;
    checkMissing(syntax6);
    class = ldf class in base;
    r9 = dyn class(syntax6);
    check L31() else D4();
  L32():
    goto L4(r10);
  L34():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        dQuote = ldf dQuote;
        r12 = dyn dQuote("SweaveSyntax");
        return r12;
      };
      r14 = dyn gettextf("target syntax not of class %s", p1);
      return r14;
    };
    r16 = dyn stop[, domain](p2, NA_LGL);
    check L35() else D7();
  L37():
    syntax7 = ld syntax;
    check L39() else D8();
  L38():
    r18 = dyn base3(<lang `$`(syntax, trans)>);
    goto L8(r18);
  D4():
    deopt 18 [r9];
  D7():
    deopt 35 [r16];
  D8():
    deopt 39 [syntax7];
  L9():
    goto L10();
  L10():
    SweaveGetSyntax = ldf SweaveGetSyntax;
    check L48() else D11();
  L31():
    goto L5(r9);
  L35():
    goto L7();
  L39():
    syntax8 = force? syntax7;
    checkMissing(syntax8);
    c3 = `is.object`(syntax8);
    if c3 then L41() else L42(syntax8);
  L44():
    stop1 = ldf stop;
    check L45() else D9();
  D9():
    deopt 44 [];
  D11():
    deopt 50 [];
  L40(dx1):
    c4 = `==`(dx1, NULL);
    goto L8(c4);
  L41():
    dr = tryDispatchBuiltin.1("$", syntax8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(dr);
  L42(syntax10):
    r20 = `$`(syntax10, <sym trans>);
    goto L40(r20);
  L45():
    r21 = dyn stop1("target syntax contains no translation table");
    check L46() else D10();
  L48():
    p3 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r24 = dyn SweaveGetSyntax(p3);
    check L49() else D12();
  D10():
    deopt 46 [r21];
  D12():
    deopt 52 [r24];
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L40(dx);
  L46():
    goto L10();
  L49():
    st insynt = r24;
    readLines = ldf readLines;
    check L50() else D13();
  D13():
    deopt 55 [];
  L50():
    p4 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r26 = dyn readLines(p4);
    check L51() else D14();
  D14():
    deopt 57 [r26];
  L51():
    st text = r26;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L11(r28):
    c7 = `as.logical`(r28);
    if c7 then L55() else L12();
  L52():
    output1 = ld output;
    check L54() else D15();
  L53():
    r27 = dyn base4(<sym output>);
    goto L11(r27);
  D15():
    deopt 60 [output1];
  L12():
    goto L13();
  L13():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L54():
    output2 = force? output1;
    checkMissing(output2);
    c6 = `==`(output2, NULL);
    goto L11(c6);
  L55():
    sub = ldf sub;
    check L56() else D16();
  D16():
    deopt 64 [];
  L14(r40):
    st TN = r40;
    TN = ld TN;
    check L67() else D20();
  L56():
    p5 = prom<V +>{
      insynt = ld insynt;
      insynt1 = force? insynt;
      checkMissing(insynt1);
      c8 = `is.object`(insynt1);
      if c8 then L1() else L2(insynt1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", insynt1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(insynt3):
      r29 = `$`(insynt3, <sym extension>);
      goto L0(r29);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      syntax11 = ld syntax;
      syntax12 = force? syntax11;
      checkMissing(syntax12);
      c9 = `is.object`(syntax12);
      if c9 then L1() else L2(syntax12);
    L0(dx5):
      c10 = `is.object`(dx5);
      if c10 then L5() else L6(dx5);
    L1():
      dr4 = tryDispatchBuiltin.1("$", syntax12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(syntax14):
      r31 = `$`(syntax14, <sym trans>);
      goto L0(r31);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L4(dx9):
      return dx9;
    L5():
      dr6 = tryDispatchBuiltin.1("$", dx5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(dx7):
      r32 = `$`(dx7, <sym extension>);
      goto L4(r32);
    L7():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L4(dx8);
    };
    p8 = prom<V +>{
      basename = ldf basename;
      p7 = prom<V +>{
        file5 = ld file;
        file6 = force? file5;
        checkMissing(file6);
        return file6;
      };
      r35 = dyn basename(p7);
      return r35;
    };
    r37 = dyn sub(p5, p6, p8);
    check L57() else D17();
  L59():
    syntax15 = ld syntax;
    check L61() else D18();
  L60():
    r39 = dyn base5(<lang `$`(syntax, trans)>);
    goto L14(r39);
  D17():
    deopt 68 [r37];
  D18():
    deopt 74 [syntax15];
  D20():
    deopt 80 [TN];
  L57():
    st output = r37;
    goto L13();
  L61():
    syntax16 = force? syntax15;
    checkMissing(syntax16);
    c11 = `is.object`(syntax16);
    if c11 then L63() else L64(syntax16);
  L67():
    TN1 = force? TN;
    checkMissing(TN1);
    s = toForSeq(TN1);
    l = length(s);
    i = 0;
    goto L15(i);
  L15(i1):
    i2 = `+`.1(i1, 1);
    c12 = `<`.1(l, i2);
    if c12 then L68() else L18();
  L62(dx11):
    names = ldf names in base;
    r42 = dyn names(dx11);
    check L66() else D19();
  L63():
    dr8 = tryDispatchBuiltin.1("$", syntax16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L65() else L64(dr8);
  L64(syntax18):
    r41 = `$`(syntax18, <sym trans>);
    goto L62(r41);
  D19():
    deopt 78 [r42];
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st n = x;
    n = ld n;
    check L69() else D21();
  L65():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L62(dx10);
  L66():
    goto L14(r42);
  L68():
    cat = ldf cat;
    check L74() else D24();
  D21():
    deopt 82 [i2, n];
  D24():
    deopt 99 [];
  L69():
    n1 = force? n;
    checkMissing(n1);
    r43 = `!=`(n1, "extension");
    c13 = `as.logical`(r43);
    if c13 then L70() else L16();
  L74():
    p12 = prom<V +>{
      text2 = ld text;
      text3 = force? text2;
      checkMissing(text3);
      return text3;
    };
    p13 = prom<V +>{
      output3 = ld output;
      output4 = force? output3;
      checkMissing(output4);
      return output4;
    };
    r54 = dyn cat[, file, sep](p12, p13, "\n");
    check L75() else D25();
  D25():
    deopt 105 [r54];
  L16():
    goto L17(i2);
  L17(i7):
    goto L15(i7);
  L70():
    gsub = ldf gsub;
    check L71() else D22();
  L75():
    cat1 = ldf cat;
    check L76() else D26();
  D22():
    deopt 87 [i2];
  D26():
    deopt 107 [];
  L71():
    p9 = prom<V +>{
      insynt4 = ld insynt;
      insynt5 = force? insynt4;
      checkMissing(insynt5);
      c14 = `is.object`(insynt5);
      if c14 then L1() else L2(insynt5);
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", insynt5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(insynt7):
      n2 = ld n;
      n3 = force? n2;
      __ = ldf `[[` in base;
      r44 = dyn __(insynt7, n3);
      goto L0(r44);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    p10 = prom<V +>{
      syntax19 = ld syntax;
      syntax20 = force? syntax19;
      checkMissing(syntax20);
      c15 = `is.object`(syntax20);
      if c15 then L2() else L3(syntax20);
    L1(dx15):
      c16 = `is.object`(dx15);
      if c16 then L5() else L6(dx15);
    L2():
      dr12 = tryDispatchBuiltin.1("$", syntax20);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(syntax22):
      r46 = `$`(syntax22, <sym trans>);
      goto L1(r46);
    L0(dx19):
      return dx19;
    L4():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx14);
    L5():
      dr14 = tryDispatchBuiltin.1("[[", dx15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(dx17):
      n4 = ld n;
      n5 = force? n4;
      __1 = ldf `[[` in base;
      r47 = dyn __1(dx17, n5);
      goto L0(r47);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    p11 = prom<V +>{
      text = ld text;
      text1 = force? text;
      checkMissing(text1);
      return text1;
    };
    r50 = dyn gsub(p9, p10, p11);
    check L72() else D23();
  L76():
    p14 = prom<V +>{
      output5 = ld output;
      output6 = force? output5;
      checkMissing(output6);
      return output6;
    };
    r56 = dyn cat1("Wrote file", p14, "\n");
    check L77() else D27();
  D23():
    deopt 91 [i2, r50];
  D27():
    deopt 111 [r56];
  L72():
    st text = r50;
    goto L17(i2);
  L77():
    popenv;
    return r56;
  }
}