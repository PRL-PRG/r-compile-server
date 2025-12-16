fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg paste:cls, reg sQuote:cls, reg r2:V, reg p:p(V +), reg r4:V, reg options1:cls, reg r5:V, reg cat:cls, reg sQuote1:cls, reg r6:V, reg p1:p(V +), reg dQuote:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg options2:cls, reg r11:V, reg cat1:cls, reg sQuote2:cls, reg r12:V, reg p3:p(V +), reg dQuote1:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg options3:cls, reg r17:V, reg cat2:cls, reg sQuote3:cls, reg r18:V, reg p5:p(V +), reg dQuote2:cls, reg r20:V, reg p6:p(V +), reg r22:V, reg l10n_info:cls, reg r23:V, reg c:L, reg r25:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r26:V, reg c1:L, reg options4:cls, reg sym:cls, reg base:cls, reg guard:L, reg r27:V, reg r28:V, reg c2:cls, reg r29:V, reg p7:p(V +), reg r31:V, reg cat3:cls, reg sQuote4:cls, reg r32:V, reg p8:p(V +), reg dQuote3:cls, reg r34:V, reg p9:p(V +), reg r36:V, reg l10n_info1:cls, reg r38:V, reg c3:L, reg r40:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r41:V, reg c4:L, reg options5:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r42:V, reg r43:V, reg c5:cls, reg r44:V, reg p10:p(V +), reg r46:V, reg cat4:cls, reg sQuote5:cls, reg r47:V, reg p11:p(V +), reg dQuote4:cls, reg r49:V, reg p12:p(V +), reg r51:V, reg options6:cls, reg op:*, reg op1:V, reg p13:p(V +), reg r53:V |
    mkenv;
    r = clos `inner-1125460018`;
    st sQuote = r;
    options = ldf options;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    r1 = dyn options("useFancyQuotes");
    check L4() else D1();
  D1():
    deopt 6 [r1];
  L4():
    st op = r1;
    paste = ldf paste;
    check L5() else D2();
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      sQuote = ldf sQuote;
      r2 = dyn sQuote("x");
      return r2;
    };
    r4 = dyn paste("argument", p, "must be non-zero");
    check L6() else D3();
  D3():
    deopt 13 [r4];
  L6():
    options1 = ldf options;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    r5 = dyn options1[useFancyQuotes](FALSE);
    check L8() else D5();
  D5():
    deopt 18 [r5];
  L8():
    cat = ldf cat;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p1 = prom<V +>{
      sQuote1 = ldf sQuote;
      r6 = dyn sQuote1("single");
      return r6;
    };
    p2 = prom<V +>{
      dQuote = ldf dQuote;
      r8 = dyn dQuote("double");
      return r8;
    };
    r10 = dyn cat("\ndistinguish plain", p1, "and", p2, "quotes\n");
    check L10() else D7();
  D7():
    deopt 26 [r10];
  L10():
    options2 = ldf options;
    check L11() else D8();
  D8():
    deopt 28 [];
  L11():
    r11 = dyn options2[useFancyQuotes](TRUE);
    check L12() else D9();
  D9():
    deopt 31 [r11];
  L12():
    cat1 = ldf cat;
    check L13() else D10();
  D10():
    deopt 33 [];
  L13():
    p3 = prom<V +>{
      sQuote2 = ldf sQuote;
      r12 = dyn sQuote2("single");
      return r12;
    };
    p4 = prom<V +>{
      dQuote1 = ldf dQuote;
      r14 = dyn dQuote1("double");
      return r14;
    };
    r16 = dyn cat1("\ndistinguish fancy", p3, "and", p4, "quotes\n");
    check L14() else D11();
  D11():
    deopt 39 [r16];
  L14():
    options3 = ldf options;
    check L15() else D12();
  D12():
    deopt 41 [];
  L15():
    r17 = dyn options3[useFancyQuotes]("TeX");
    check L16() else D13();
  D13():
    deopt 44 [r17];
  L16():
    cat2 = ldf cat;
    check L17() else D14();
  D14():
    deopt 46 [];
  L17():
    p5 = prom<V +>{
      sQuote3 = ldf sQuote;
      r18 = dyn sQuote3("single");
      return r18;
    };
    p6 = prom<V +>{
      dQuote2 = ldf dQuote;
      r20 = dyn dQuote2("double");
      return r20;
    };
    r22 = dyn cat2("\ndistinguish TeX", p5, "and", p6, "quotes\n");
    check L18() else D15();
  D15():
    deopt 52 [r22];
  L18():
    l10n_info = ldf l10n_info;
    check L19() else D16();
  D16():
    deopt 54 [];
  L19():
    r23 = dyn l10n_info();
    check L20() else D17();
  D17():
    deopt 55 [r23];
  L20():
    c = `is.object`(r23);
    if c then L22() else L23(r23);
  L21(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L25() else L0();
  L22():
    dr = tryDispatchBuiltin.1("$", r23);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(r25):
    r26 = `$`(r25, <sym `Latin-1`>);
    goto L21(r26);
  L0():
    l10n_info1 = ldf l10n_info;
    check L31() else D22();
  L1():
    options6 = ldf options;
    check L43() else D28();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L25():
    options4 = ldf options;
    check L26() else D18();
  D18():
    deopt 58 [];
  D22():
    deopt 71 [];
  D28():
    deopt 90 [];
  L26():
    p7 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c2 = ldf c in base;
      r29 = dyn c2("\ufffd", "\ufffd", "\ufffd", "?");
      goto L0(r29);
    L2():
      r27 = dyn base("\ufffd", "\ufffd", "\ufffd", "?");
      goto L0(r27);
    };
    r31 = dyn options4[useFancyQuotes](p7);
    check L27() else D19();
  L31():
    r38 = dyn l10n_info1();
    check L32() else D23();
  L43():
    p13 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r53 = dyn options6(p13);
    check L44() else D29();
  D19():
    deopt 61 [r31];
  D23():
    deopt 72 [r38];
  D29():
    deopt 92 [r53];
  L27():
    cat3 = ldf cat;
    check L28() else D20();
  L32():
    c3 = `is.object`(r38);
    if c3 then L34() else L35(r38);
  L44():
    popenv;
    return r53;
  D20():
    deopt 63 [];
  L28():
    p8 = prom<V +>{
      sQuote4 = ldf sQuote;
      r32 = dyn sQuote4("guillemet");
      return r32;
    };
    p9 = prom<V +>{
      dQuote3 = ldf dQuote;
      r34 = dyn dQuote3("Spanish question");
      return r34;
    };
    r36 = dyn cat3("\n", p8, "and", p9, "styles\n");
    check L29() else D21();
  L33(dx3):
    c4 = `as.logical`(dx3);
    if c4 then L37() else L2();
  L34():
    dr2 = tryDispatchBuiltin.1("$", r38);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(dr2);
  L35(r40):
    r41 = `$`(r40, <sym `UTF-8`>);
    goto L33(r41);
  D21():
    deopt 69 [r36];
  L2():
    goto L1();
  L29():
    goto L1();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L33(dx2);
  L37():
    options5 = ldf options;
    check L38() else D24();
  D24():
    deopt 75 [];
  L38():
    p10 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      c5 = ldf c in base;
      r44 = dyn c5("\u00ab", "\u00bb", "\u00bf", "?");
      goto L0(r44);
    L2():
      r42 = dyn base1("\u00ab", "\u00bb", "\u00bf", "?");
      goto L0(r42);
    };
    r46 = dyn options5[useFancyQuotes](p10);
    check L39() else D25();
  D25():
    deopt 78 [r46];
  L39():
    cat4 = ldf cat;
    check L40() else D26();
  D26():
    deopt 80 [];
  L40():
    p11 = prom<V +>{
      sQuote5 = ldf sQuote;
      r47 = dyn sQuote5("guillemet");
      return r47;
    };
    p12 = prom<V +>{
      dQuote4 = ldf dQuote;
      r49 = dyn dQuote4("Spanish question");
      return r49;
    };
    r51 = dyn cat4("\n", p11, "and", p12, "styles\n");
    check L41() else D27();
  D27():
    deopt 86 [r51];
  L41():
    goto L1();
  }
}
fun `inner-1125460018`(x, q) {
  (reg x:*, reg q:*) -+> V { var x:*, var q:*, reg q_isMissing:L, reg q_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg character:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg q1:*, reg q2:V, reg c1:V, reg r11:V, reg c2:L, reg isTRUE:cls, reg q3:*, reg q4:V, reg p1:p(V +), reg r13:V, reg c3:L, reg l10n_info:cls, reg r14:V, reg li:*, reg li1:V, reg c4:L, reg li3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg c5:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg li4:*, reg li5:V, reg c6:L, reg li7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r19:V, reg c7:V, reg r20:V, reg c8:L, reg c10:V, reg li8:*, reg li9:V, reg c11:L, reg c13:L, reg li11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c15:L, reg dx5:V, reg r21:V, reg r22:V, reg c16:L, reg c17:V, reg c19:L, reg li12:*, reg li13:V, reg c20:L, reg li15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r23:V, reg r24:V, reg c21:L, reg c23:V, reg li16:*, reg li17:V, reg c24:L, reg c26:L, reg li19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c28:L, reg dx9:V, reg r25:V, reg r26:V, reg c29:L, reg c30:V, reg c32:L, reg c33:V, reg li20:*, reg li21:V, reg c35:L, reg c37:L, reg li23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c39:L, reg dx11:V, reg r27:V, reg r28:V, reg c40:L, reg c41:V, reg c43:L, reg rawToChar:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg as_raw:cls, reg r31:V, reg p2:p(V +), reg r33:V, reg rawToChar1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg as_raw1:cls, reg r36:V, reg p3:p(V +), reg r38:V, reg r39:V, reg iconv:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg c44:cls, reg r42:V, reg p4:p(V +), reg r44:V, reg z:*, reg z1:V, reg c45:L, reg z3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __:cls, reg r45:V, reg z4:*, reg z5:V, reg c46:L, reg z7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __1:cls, reg r46:V, reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg q5:*, reg q6:V, reg identical:cls, reg r51:V, reg c47:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg q7:*, reg q8:V, reg identical1:cls, reg r55:V, reg c48:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg q9:*, reg q10:V, reg c49:L, reg c50:L, reg c52:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg c55:L, reg r60:V, reg q11:*, reg q12:V, reg length1:cls, reg r61:V, reg r62:V, reg c56:L, reg c57:V, reg c59:L, reg q13:*, reg q14:V, reg c60:L, reg q16:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __2:cls, reg r63:V, reg q17:*, reg q18:V, reg c61:L, reg q20:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __3:cls, reg r64:V, reg dx20:V, reg paste0:cls, reg before:*, reg before1:V, reg p5:p(V +), reg x3:*, reg x4:V, reg p6:p(V +), reg after:*, reg after1:V, reg p7:p(V +), reg r68:V |
    mkenv;
    st x = x;
    q_isMissing = missing.0(q);
    if q_isMissing then L0() else L1(q);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("useFancyQuotes");
      return r;
    };
    goto L1(p);
  L1(q_orDefault):
    st q = q_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L35() else L36();
  L2(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L39() else L3();
  L35():
    x1 = ld x;
    check L37() else D0();
  L36():
    r2 = dyn base(<sym x>);
    goto L2(r2);
  D0():
    deopt 2 [x1];
  L3():
    st after = "'";
    st before = "'";
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L37():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r4 = dyn length(x2);
    check L38() else D1();
  L39():
    character = ldf character;
    check L40() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 8 [];
  L5(r10):
    r11 = `!`(r10);
    c2 = `as.logical`(r11);
    if c2 then L47() else L6();
  L38():
    goto L2(r4);
  L40():
    r6 = dyn character();
    check L41() else D3();
  L44():
    q1 = ld q;
    check L46() else D4();
  L45():
    r9 = dyn base1(<sym q>);
    goto L5(r9);
  D3():
    deopt 9 [r6];
  D4():
    deopt 18 [q1];
  L6():
    goto L34();
  L34():
    paste0 = ldf paste0;
    check L144() else D32();
  L41():
    popenv;
    return r6;
  L46():
    q2 = force? q1;
    checkMissing(q2);
    c1 = `==`(q2, NULL);
    goto L5(c1);
  L47():
    isTRUE = ldf isTRUE;
    check L48() else D5();
  D5():
    deopt 23 [];
  D32():
    deopt 174 [];
  L48():
    p1 = prom<V +>{
      q3 = ld q;
      q4 = force? q3;
      checkMissing(q4);
      return q4;
    };
    r13 = dyn isTRUE(p1);
    check L49() else D6();
  L144():
    p5 = prom<V +>{
      before = ld before;
      before1 = force? before;
      checkMissing(before1);
      return before1;
    };
    p6 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p7 = prom<V +>{
      after = ld after;
      after1 = force? after;
      checkMissing(after1);
      return after1;
    };
    r68 = dyn paste0(p5, p6, p7);
    check L145() else D33();
  D6():
    deopt 25 [r13];
  D33():
    deopt 178 [r68];
  L49():
    c3 = `as.logical`(r13);
    if c3 then L50() else L7();
  L145():
    popenv;
    return r68;
  L7():
    goto L20();
  L20():
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L112() else L113();
  L50():
    l10n_info = ldf l10n_info;
    check L51() else D7();
  D7():
    deopt 27 [];
  L21(r50):
    c47 = `as.logical`(r50);
    if c47 then L116() else L22();
  L51():
    r14 = dyn l10n_info();
    check L52() else D8();
  L112():
    q5 = ld q;
    check L114() else D23();
  L113():
    r49 = dyn base6(<sym q>, "TeX");
    goto L21(r49);
  D8():
    deopt 28 [r14];
  D23():
    deopt 102 [q5];
  L22():
    goto L23();
  L23():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L118() else L119();
  L52():
    st li = r14;
    li = ld li;
    check L53() else D9();
  L114():
    q6 = force? q5;
    checkMissing(q6);
    identical = ldf identical in base;
    r51 = dyn identical(q6, "TeX", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L115() else D24();
  L116():
    st before = "`";
    st after = "'";
    goto L23();
  D9():
    deopt 30 [li];
  D24():
    deopt 113 [r51];
  L24(r54):
    c48 = `as.logical`(r54);
    if c48 then L122() else L25();
  L53():
    li1 = force? li;
    checkMissing(li1);
    c4 = `is.object`(li1);
    if c4 then L55() else L56(li1);
  L115():
    goto L21(r51);
  L118():
    q7 = ld q;
    check L120() else D25();
  L119():
    r53 = dyn base7(<sym q>, "UTF-8");
    goto L24(r53);
  D25():
    deopt 124 [q7];
  L25():
    goto L26();
  L26():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L124() else L125();
  L54(dx1):
    c5 = `as.logical`(dx1);
    if c5 then L58() else L8();
  L55():
    dr = tryDispatchBuiltin.1("$", li1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L57() else L56(dr);
  L56(li3):
    r15 = `$`(li3, <sym `UTF-8`>);
    goto L54(r15);
  L120():
    q8 = force? q7;
    checkMissing(q8);
    identical1 = ldf identical in base;
    r55 = dyn identical1(q8, "UTF-8", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L121() else D26();
  L122():
    st before = "\u2018";
    st after = "\u2019";
    goto L26();
  D26():
    deopt 135 [r55];
  L8():
    goto L9();
  L9():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L27(r58):
    c50 = `as.logical`(r58);
    if c50 then L127() else L28(c50);
  L57():
    dx = getTryDispatchBuiltinValue(dr);
    goto L54(dx);
  L58():
    st q = "UTF-8";
    goto L9();
  L121():
    goto L24(r55);
  L124():
    q9 = ld q;
    check L126() else D27();
  L125():
    r57 = dyn base8(<sym q>);
    goto L27(r57);
  D27():
    deopt 145 [q9];
  L10(r18):
    r20 = `!`(r18);
    c8 = `as.logical`(r20);
    if c8 then L67() else L11(c8);
  L28(c52):
    c59 = `as.logical`(c52);
    if c59 then L133() else L30();
  L60():
    li4 = ld li;
    check L62() else D10();
  L61():
    r17 = dyn base2(<lang `$`(li, codepage)>);
    goto L10(r17);
  L126():
    q10 = force? q9;
    checkMissing(q10);
    c49 = `is.character`(q10);
    goto L27(c49);
  L127():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L128() else L129();
  D10():
    deopt 39 [li4];
  L11(c10):
    c19 = `as.logical`(c10);
    if c19 then L74() else L12();
  L29(c55, r60):
    r62 = `>=`(r60, 4);
    c56 = `as.logical`(r62);
    c57 = `&&`(c55, c56);
    goto L28(c57);
  L30():
    goto L33(NULL);
  L33(dx20):
    goto L34();
  L62():
    li5 = force? li4;
    checkMissing(li5);
    c6 = `is.object`(li5);
    if c6 then L64() else L65(li5);
  L67():
    li8 = ld li;
    check L68() else D11();
  L128():
    q11 = ld q;
    check L130() else D28();
  L129():
    r59 = dyn base9(<sym q>);
    goto L29(c50, r59);
  L133():
    q13 = ld q;
    check L134() else D30();
  D11():
    deopt 44 [c8, li8];
  D28():
    deopt 150 [c50, q11];
  D30():
    deopt 157 [q13];
  L12():
    goto L19(NULL);
  L19(r47):
    goto L20();
  L63(dx3):
    c7 = `==`(dx3, NULL);
    goto L10(c7);
  L64():
    dr2 = tryDispatchBuiltin.1("$", li5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(dr2);
  L65(li7):
    r19 = `$`(li7, <sym codepage>);
    goto L63(r19);
  L68():
    li9 = force? li8;
    checkMissing(li9);
    c11 = `is.object`(li9);
    if c11 then L70() else L71(c8, li9);
  L74():
    li12 = ld li;
    check L75() else D12();
  L130():
    q12 = force? q11;
    checkMissing(q12);
    length1 = ldf length in base;
    r61 = dyn length1(q12);
    check L131() else D29();
  L134():
    q14 = force? q13;
    checkMissing(q14);
    c60 = `is.object`(q14);
    if c60 then L135() else L136(q14);
  D12():
    deopt 50 [li12];
  D29():
    deopt 153 [c50, r61];
  L31(dx17):
    st before = dx17;
    q17 = ld q;
    check L138() else D31();
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L63(dx2);
  L69(c15, dx5):
    r22 = `>`(dx5, 0);
    c16 = `as.logical`(r22);
    c17 = `&&`(c15, c16);
    goto L11(c17);
  L70():
    dr4 = tryDispatchBuiltin.1("$", li9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L72() else L71(c8, dr4);
  L71(c13, li11):
    r21 = `$`(li11, <sym codepage>);
    goto L69(c13, r21);
  L75():
    li13 = force? li12;
    checkMissing(li13);
    c20 = `is.object`(li13);
    if c20 then L77() else L78(li13);
  L131():
    goto L29(c50, r61);
  L135():
    dr16 = tryDispatchBuiltin.1("[", q14);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L137() else L136(dr16);
  L136(q16):
    __2 = ldf `[` in base;
    r63 = dyn __2(q16, 1);
    goto L31(r63);
  D31():
    deopt 163 [q17];
  L72():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L69(c8, dx4);
  L76(dx7):
    r24 = `>=`(dx7, 1250);
    c21 = `as.logical`(r24);
    if c21 then L80() else L13(c21);
  L77():
    dr6 = tryDispatchBuiltin.1("$", li13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L79() else L78(dr6);
  L78(li15):
    r23 = `$`(li15, <sym codepage>);
    goto L76(r23);
  L137():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L31(dx16);
  L138():
    q18 = force? q17;
    checkMissing(q18);
    c61 = `is.object`(q18);
    if c61 then L139() else L140(q18);
  L13(c23):
    c32 = `as.logical`(c23);
    if c32 then L14(c32) else L87();
  L32(dx19):
    st after = dx19;
    goto L33(dx19);
  L79():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L76(dx6);
  L80():
    li16 = ld li;
    check L81() else D13();
  L139():
    dr18 = tryDispatchBuiltin.1("[", q18);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L141() else L140(dr18);
  L140(q20):
    __3 = ldf `[` in base;
    r64 = dyn __3(q20, 2);
    goto L32(r64);
  D13():
    deopt 55 [c21, li16];
  L14(c33):
    c43 = `as.logical`(c33);
    if c43 then L94() else L15();
  L81():
    li17 = force? li16;
    checkMissing(li17);
    c24 = `is.object`(li17);
    if c24 then L83() else L84(c21, li17);
  L87():
    li20 = ld li;
    check L88() else D14();
  L141():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L32(dx18);
  D14():
    deopt 61 [c32, li20];
  L15():
    iconv = ldf iconv;
    check L100() else D19();
  L16(r39):
    goto L19(r39);
  L82(c28, dx9):
    r26 = `<=`(dx9, 1258);
    c29 = `as.logical`(r26);
    c30 = `&&`(c28, c29);
    goto L13(c30);
  L83():
    dr8 = tryDispatchBuiltin.1("$", li17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L85() else L84(c21, dr8);
  L84(c26, li19):
    r25 = `$`(li19, <sym codepage>);
    goto L82(c26, r25);
  L88():
    li21 = force? li20;
    checkMissing(li21);
    c35 = `is.object`(li21);
    if c35 then L90() else L91(c32, li21);
  L94():
    rawToChar = ldf rawToChar;
    check L95() else D15();
  D15():
    deopt 68 [];
  D19():
    deopt 78 [];
  L85():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L82(c21, dx8);
  L89(c39, dx11):
    r28 = `==`(dx11, 874);
    c40 = `as.logical`(r28);
    c41 = `||`(c39, c40);
    goto L14(c41);
  L90():
    dr10 = tryDispatchBuiltin.1("$", li21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L92() else L91(c32, dr10);
  L91(c37, li23):
    r27 = `$`(li23, <sym codepage>);
    goto L89(c37, r27);
  L95():
    p2 = prom<V +>{
      sym3 = ldf `as.raw`;
      base3 = ldf `as.raw` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      as_raw = ldf `as.raw` in base;
      r31 = dyn as_raw(145.0);
      goto L0(r31);
    L2():
      r29 = dyn base3(145.0);
      goto L0(r29);
    };
    r33 = dyn rawToChar(p2);
    check L96() else D16();
  L100():
    p4 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      c44 = ldf c in base;
      r42 = dyn c44("\u2018", "\u2019");
      goto L0(r42);
    L2():
      r40 = dyn base5("\u2018", "\u2019");
      goto L0(r40);
    };
    r44 = dyn iconv(p4, "UTF-8", "");
    check L101() else D20();
  D16():
    deopt 70 [r33];
  D20():
    deopt 82 [r44];
  L92():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L89(c32, dx10);
  L96():
    st before = r33;
    rawToChar1 = ldf rawToChar;
    check L97() else D17();
  L101():
    st z = r44;
    z = ld z;
    check L102() else D21();
  D17():
    deopt 73 [];
  D21():
    deopt 84 [z];
  L97():
    p3 = prom<V +>{
      sym4 = ldf `as.raw`;
      base4 = ldf `as.raw` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      as_raw1 = ldf `as.raw` in base;
      r36 = dyn as_raw1(146.0);
      goto L0(r36);
    L2():
      r34 = dyn base4(146.0);
      goto L0(r34);
    };
    r38 = dyn rawToChar1(p3);
    check L98() else D18();
  L102():
    z1 = force? z;
    checkMissing(z1);
    c45 = `is.object`(z1);
    if c45 then L103() else L104(z1);
  D18():
    deopt 75 [r38];
  L17(dx13):
    st before = dx13;
    z4 = ld z;
    check L106() else D22();
  L98():
    st after = r38;
    goto L16(r38);
  L103():
    dr12 = tryDispatchBuiltin.1("[", z1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L105() else L104(dr12);
  L104(z3):
    __ = ldf `[` in base;
    r45 = dyn __(z3, 1);
    goto L17(r45);
  D22():
    deopt 90 [z4];
  L105():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L17(dx12);
  L106():
    z5 = force? z4;
    checkMissing(z5);
    c46 = `is.object`(z5);
    if c46 then L107() else L108(z5);
  L18(dx15):
    st after = dx15;
    goto L16(dx15);
  L107():
    dr14 = tryDispatchBuiltin.1("[", z5);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L109() else L108(dr14);
  L108(z7):
    __1 = ldf `[` in base;
    r46 = dyn __1(z7, 2);
    goto L18(r46);
  L109():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L18(dx14);
  }
}