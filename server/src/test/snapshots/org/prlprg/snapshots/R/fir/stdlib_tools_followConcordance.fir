fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1673683481;
    st followConcordance = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1673683481(concordance, prevConcordance) {
  (reg concordance:*, reg prevConcordance:*) -+> V { var concordance:*, var prevConcordance:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg prevConcordance1:*, reg prevConcordance2:V, reg c:V, reg r2:V, reg c1:L, reg concordance1:*, reg concordance2:V, reg c2:L, reg concordance4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg concordance5:*, reg concordance6:V, reg c3:L, reg concordance8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg curLines:*, reg curLines1:V, reg length:cls, reg r9:V, reg rep_len:cls, reg r10:V, reg concordance9:*, reg concordance10:V, reg c4:L, reg concordance12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg prevConcordance3:*, reg prevConcordance4:V, reg c5:L, reg prevConcordance6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg prevConcordance7:*, reg prevConcordance8:V, reg c6:L, reg prevConcordance10:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg prevLines:*, reg prevLines1:V, reg length1:cls, reg r18:V, reg rep_len1:cls, reg r19:V, reg prevConcordance11:*, reg prevConcordance12:V, reg c7:L, reg prevConcordance14:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r20:V, reg prevOfs:*, reg prevOfs1:V, reg c8:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg r24:V, reg rep:cls, reg r25:V, reg prevLines2:*, reg prevLines3:V, reg c9:cls, reg r26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r29:V, reg r30:V, reg rep1:cls, reg r31:V, reg prevFile:*, reg prevFile1:V, reg c10:cls, reg r32:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r34:V, reg r35:V, reg curLines2:*, reg curLines3:V, reg max:cls, reg r36:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r37:V, reg r38:V, reg prevLines4:*, reg prevLines5:V, reg length2:cls, reg r39:V, reg n1:*, reg n2:V, reg n3:*, reg n4:V, reg r40:V, reg c11:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r41:V, reg r42:V, reg prevLines6:*, reg prevLines7:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r43:V, reg r44:V, reg rep2:cls, reg r45:V, reg c12:cls, reg r46:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r47:V, reg r48:V, reg prevFile2:*, reg prevFile3:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r49:V, reg r50:V, reg rep3:cls, reg r51:V, reg c13:cls, reg r52:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r54:V, reg r55:V, reg prevLines8:*, reg prevLines9:V, reg c14:L, reg prevLines11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg curLines4:*, reg curLines5:V, reg __:cls, reg r56:V, reg is_na:cls, reg r57:V, reg ifelse:cls, reg new:*, reg new1:V, reg p:p(V +), reg curFile:*, reg curFile1:V, reg p1:p(V +), reg prevFile4:*, reg prevFile5:V, reg c15:L, reg prevFile7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg curLines6:*, reg curLines7:V, reg __1:cls, reg r60:V, reg p2:p(V +), reg r62:V, reg l:*, reg c16:L, reg r64:V, reg l2:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r67:V, reg ifelse1:cls, reg new2:*, reg new3:V, reg p3:p(V +), reg curLines8:*, reg curLines9:V, reg p4:p(V +), reg prevLines12:*, reg prevLines13:V, reg c17:L, reg prevLines15:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg curLines10:*, reg curLines11:V, reg __2:cls, reg r70:V, reg p5:p(V +), reg r72:V, reg l3:*, reg c18:L, reg r74:V, reg l5:*, reg dr20:V, reg dc10:L, reg dx20:V, reg r76:V, reg dx21:V, reg r77:V, reg concordance13:*, reg concordance14:V |
    mkenv;
    st concordance = concordance;
    st prevConcordance = prevConcordance;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L26() else L1();
  L23():
    prevConcordance1 = ld prevConcordance;
    check L25() else D0();
  L24():
    r = dyn base(<sym prevConcordance>);
    goto L0(r);
  D0():
    deopt 1 [prevConcordance1];
  L1():
    goto L22();
  L22():
    concordance13 = ld concordance;
    check L131() else D35();
  L25():
    prevConcordance2 = force? prevConcordance1;
    checkMissing(prevConcordance2);
    c = `==`(prevConcordance2, NULL);
    goto L0(c);
  L26():
    concordance1 = ld concordance;
    check L27() else D1();
  D1():
    deopt 5 [concordance1];
  D35():
    deopt 146 [concordance13];
  L27():
    concordance2 = force? concordance1;
    checkMissing(concordance2);
    c2 = `is.object`(concordance2);
    if c2 then L29() else L30(concordance2);
  L131():
    concordance14 = force? concordance13;
    checkMissing(concordance14);
    popenv;
    return concordance14;
  L28(dx1):
    st curLines = dx1;
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L29():
    dr = tryDispatchBuiltin.1("$", concordance2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(concordance4):
    r3 = `$`(concordance4, <sym srcLine>);
    goto L28(r3);
  L2(r5):
    st curFile = r5;
    concordance9 = ld concordance;
    check L44() else D6();
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L28(dx);
  L32():
    concordance5 = ld concordance;
    check L34() else D2();
  L33():
    r4 = dyn base1(<lang `$`(concordance, srcFile)>, <lang length(curLines)>);
    goto L2(r4);
  D2():
    deopt 11 [concordance5];
  D6():
    deopt 23 [concordance9];
  L34():
    concordance6 = force? concordance5;
    checkMissing(concordance6);
    c3 = `is.object`(concordance6);
    if c3 then L36() else L37(concordance6);
  L44():
    concordance10 = force? concordance9;
    checkMissing(concordance10);
    c4 = `is.object`(concordance10);
    if c4 then L46() else L47(concordance10);
  L35(dx3):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L36():
    dr2 = tryDispatchBuiltin.1("$", concordance6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(dr2);
  L37(concordance8):
    r6 = `$`(concordance8, <sym srcFile>);
    goto L35(r6);
  L45(dx5):
    st curOfs = dx5;
    prevConcordance3 = ld prevConcordance;
    check L49() else D7();
  L46():
    dr4 = tryDispatchBuiltin.1("$", concordance10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(dr4);
  L47(concordance12):
    r11 = `$`(concordance12, <sym offset>);
    goto L45(r11);
  D7():
    deopt 27 [prevConcordance3];
  L3(r8):
    rep_len = ldf rep_len in base;
    r10 = dyn rep_len(dx3, r8);
    check L43() else D5();
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(dx2);
  L39():
    curLines = ld curLines;
    check L41() else D3();
  L40():
    r7 = dyn base2(<sym curLines>);
    goto L3(r7);
  L48():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L45(dx4);
  L49():
    prevConcordance4 = force? prevConcordance3;
    checkMissing(prevConcordance4);
    c5 = `is.object`(prevConcordance4);
    if c5 then L51() else L52(prevConcordance4);
  D3():
    deopt 16 [curLines];
  D5():
    deopt 21 [r10];
  L41():
    curLines1 = force? curLines;
    checkMissing(curLines1);
    length = ldf length in base;
    r9 = dyn length(curLines1);
    check L42() else D4();
  L43():
    goto L2(r10);
  L50(dx7):
    st prevLines = dx7;
    sym3 = ldf rep_len;
    base3 = ldf rep_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L51():
    dr6 = tryDispatchBuiltin.1("$", prevConcordance4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L53() else L52(dr6);
  L52(prevConcordance6):
    r12 = `$`(prevConcordance6, <sym srcLine>);
    goto L50(r12);
  D4():
    deopt 19 [r9];
  L4(r14):
    st prevFile = r14;
    prevConcordance11 = ld prevConcordance;
    check L66() else D12();
  L42():
    goto L3(r9);
  L53():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L50(dx6);
  L54():
    prevConcordance7 = ld prevConcordance;
    check L56() else D8();
  L55():
    r13 = dyn base3(<lang `$`(prevConcordance, srcFile)>, <lang length(prevLines)>);
    goto L4(r13);
  D8():
    deopt 33 [prevConcordance7];
  D12():
    deopt 45 [prevConcordance11];
  L56():
    prevConcordance8 = force? prevConcordance7;
    checkMissing(prevConcordance8);
    c6 = `is.object`(prevConcordance8);
    if c6 then L58() else L59(prevConcordance8);
  L66():
    prevConcordance12 = force? prevConcordance11;
    checkMissing(prevConcordance12);
    c7 = `is.object`(prevConcordance12);
    if c7 then L68() else L69(prevConcordance12);
  L57(dx9):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L58():
    dr8 = tryDispatchBuiltin.1("$", prevConcordance8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L60() else L59(dr8);
  L59(prevConcordance10):
    r15 = `$`(prevConcordance10, <sym srcFile>);
    goto L57(r15);
  L67(dx11):
    st prevOfs = dx11;
    prevOfs = ld prevOfs;
    check L71() else D13();
  L68():
    dr10 = tryDispatchBuiltin.1("$", prevConcordance12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L70() else L69(dr10);
  L69(prevConcordance14):
    r20 = `$`(prevConcordance14, <sym offset>);
    goto L67(r20);
  D13():
    deopt 49 [prevOfs];
  L5(r17):
    rep_len1 = ldf rep_len in base;
    r19 = dyn rep_len1(dx9, r17);
    check L65() else D11();
  L60():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L57(dx8);
  L61():
    prevLines = ld prevLines;
    check L63() else D9();
  L62():
    r16 = dyn base4(<sym prevLines>);
    goto L5(r16);
  L70():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L67(dx10);
  L71():
    prevOfs1 = force? prevOfs;
    checkMissing(prevOfs1);
    c8 = `as.logical`(prevOfs1);
    if c8 then L72() else L6();
  D9():
    deopt 38 [prevLines];
  D11():
    deopt 43 [r19];
  L6():
    goto L11();
  L11():
    sym9 = ldf max;
    base9 = ldf max in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L86() else L87();
  L63():
    prevLines1 = force? prevLines;
    checkMissing(prevLines1);
    length1 = ldf length in base;
    r18 = dyn length1(prevLines1);
    check L64() else D10();
  L65():
    goto L4(r19);
  L72():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  D10():
    deopt 41 [r18];
  L7(r22):
    st prevLines = r22;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L12(r35):
    st n0 = r35;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L90() else L91();
  L64():
    goto L5(r18);
  L73():
    sym6 = ldf rep;
    base6 = ldf rep in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L75() else L76();
  L74():
    r21 = dyn base5(<lang rep(NA_INT, prevOfs)>, <sym prevLines>);
    goto L7(r21);
  L86():
    curLines2 = ld curLines;
    check L88() else D18();
  L87():
    r34 = dyn base9(<sym curLines>);
    goto L12(r34);
  D18():
    deopt 78 [curLines2];
  L8(r24):
    prevLines2 = ld prevLines;
    check L77() else D14();
  L9(r28):
    st prevFile = r28;
    st prevOfs = 0.0;
    goto L11();
  L13(r38):
    st n1 = r38;
    n1 = ld n1;
    check L94() else D22();
  L75():
    rep = ldf rep in base;
    r25 = dyn rep(NA_INT, <sym prevOfs>);
    goto L8(r25);
  L76():
    r23 = dyn base6(NA_INT, <sym prevOfs>);
    goto L8(r23);
  L79():
    sym8 = ldf rep;
    base8 = ldf rep in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L80():
    r27 = dyn base7(<lang rep(NA_STR, prevOfs)>, <sym prevFile>);
    goto L9(r27);
  L88():
    curLines3 = force? curLines2;
    checkMissing(curLines3);
    max = ldf max in base;
    r36 = dyn max(curLines3);
    check L89() else D19();
  L90():
    prevLines4 = ld prevLines;
    check L92() else D20();
  L91():
    r37 = dyn base10(<sym prevLines>);
    goto L13(r37);
  D14():
    deopt 56 [prevLines2];
  D19():
    deopt 81 [r36];
  D20():
    deopt 85 [prevLines4];
  D22():
    deopt 90 [n1];
  L10(r30):
    prevFile = ld prevFile;
    check L83() else D16();
  L77():
    prevLines3 = force? prevLines2;
    checkMissing(prevLines3);
    c9 = ldf c in base;
    r26 = dyn c9(r24, prevLines3);
    check L78() else D15();
  L81():
    rep1 = ldf rep in base;
    r31 = dyn rep1(NA_STR, <sym prevOfs>);
    goto L10(r31);
  L82():
    r29 = dyn base8(NA_STR, <sym prevOfs>);
    goto L10(r29);
  L89():
    goto L12(r36);
  L92():
    prevLines5 = force? prevLines4;
    checkMissing(prevLines5);
    length2 = ldf length in base;
    r39 = dyn length2(prevLines5);
    check L93() else D21();
  L94():
    n2 = force? n1;
    checkMissing(n2);
    n3 = ld n0;
    check L95() else D23();
  D15():
    deopt 59 [r26];
  D16():
    deopt 66 [prevFile];
  D21():
    deopt 88 [r39];
  D23():
    deopt 91 [n2, n3];
  L78():
    goto L7(r26);
  L83():
    prevFile1 = force? prevFile;
    checkMissing(prevFile1);
    c10 = ldf c in base;
    r32 = dyn c10(r30, prevFile1);
    check L84() else D17();
  L93():
    goto L13(r39);
  L95():
    n4 = force? n3;
    checkMissing(n4);
    r40 = `<`(n2, n4);
    c11 = `as.logical`(r40);
    if c11 then L96() else L14();
  D17():
    deopt 69 [r32];
  L14():
    goto L19();
  L19():
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L110() else L111();
  L84():
    goto L9(r32);
  L96():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L97() else L98();
  L15(r42):
    st prevLines = r42;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L103() else L104();
  L20(r55):
    st new = r55;
    ifelse = ldf ifelse;
    check L118() else D31();
  L97():
    prevLines6 = ld prevLines;
    check L99() else D24();
  L98():
    r41 = dyn base11(<sym prevLines>, <lang rep(NA_INT, `-`(n0, n1))>);
    goto L15(r41);
  L110():
    prevLines8 = ld prevLines;
    check L112() else D28();
  L111():
    r54 = dyn base15(<lang `[`(prevLines, curLines)>);
    goto L20(r54);
  D24():
    deopt 96 [prevLines6];
  D28():
    deopt 118 [prevLines8];
  D31():
    deopt 127 [];
  L17(r48):
    st prevFile = r48;
    goto L19();
  L99():
    prevLines7 = force? prevLines6;
    checkMissing(prevLines7);
    sym12 = ldf rep;
    base12 = ldf rep in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L100() else L101();
  L103():
    prevFile2 = ld prevFile;
    check L105() else D26();
  L104():
    r47 = dyn base13(<sym prevFile>, <lang rep(NA_STR, `-`(n0, n1))>);
    goto L17(r47);
  L112():
    prevLines9 = force? prevLines8;
    checkMissing(prevLines9);
    c14 = `is.object`(prevLines9);
    if c14 then L113() else L114(prevLines9);
  L118():
    p = prom<V +>{
      new = ld new;
      new1 = force? new;
      checkMissing(new1);
      return new1;
    };
    p1 = prom<V +>{
      curFile = ld curFile;
      curFile1 = force? curFile;
      checkMissing(curFile1);
      return curFile1;
    };
    p2 = prom<V +>{
      prevFile4 = ld prevFile;
      prevFile5 = force? prevFile4;
      checkMissing(prevFile5);
      c15 = `is.object`(prevFile5);
      if c15 then L1() else L2(prevFile5);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", prevFile5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(prevFile7):
      curLines6 = ld curLines;
      curLines7 = force? curLines6;
      __1 = ldf `[` in base;
      r60 = dyn __1(prevFile7, curLines7);
      goto L0(r60);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r62 = dyn ifelse(p, p1, p2);
    check L119() else D32();
  D26():
    deopt 106 [prevFile2];
  D32():
    deopt 131 [r62];
  L16(r44):
    c12 = ldf c in base;
    r46 = dyn c12(prevLines7, r44);
    check L102() else D25();
  L21(dx13):
    is_na = ldf `is.na` in base;
    r57 = dyn is_na(dx13);
    check L117() else D30();
  L100():
    rep2 = ldf rep in base;
    r45 = dyn rep2(NA_INT, <lang `-`(n0, n1)>);
    goto L16(r45);
  L101():
    r43 = dyn base12(NA_INT, <lang `-`(n0, n1)>);
    goto L16(r43);
  L105():
    prevFile3 = force? prevFile2;
    checkMissing(prevFile3);
    sym14 = ldf rep;
    base14 = ldf rep in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L106() else L107();
  L113():
    dr12 = tryDispatchBuiltin.1("[", prevLines9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L115() else L114(dr12);
  L114(prevLines11):
    curLines4 = ld curLines;
    check L116() else D29();
  L119():
    l = ld concordance;
    c16 = `is.object`(l);
    if c16 then L121() else L122(r62, l);
  D25():
    deopt 102 [r46];
  D29():
    deopt 120 [prevLines11, curLines4];
  D30():
    deopt 124 [r57];
  L18(r50):
    c13 = ldf c in base;
    r52 = dyn c13(prevFile3, r50);
    check L108() else D27();
  L102():
    goto L15(r46);
  L106():
    rep3 = ldf rep in base;
    r51 = dyn rep3(NA_STR, <lang `-`(n0, n1)>);
    goto L18(r51);
  L107():
    r49 = dyn base14(NA_STR, <lang `-`(n0, n1)>);
    goto L18(r49);
  L115():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L21(dx12);
  L116():
    curLines5 = force? curLines4;
    __ = ldf `[` in base;
    r56 = dyn __(prevLines11, curLines5);
    goto L21(r56);
  L117():
    goto L20(r57);
  L120(dx17):
    st concordance = dx17;
    ifelse1 = ldf ifelse;
    check L124() else D33();
  L121():
    dr16 = tryDispatchBuiltin.0("$<-", l, r62);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L123() else L122(r62, dr16);
  L122(r64, l2):
    r67 = `$<-`(l2, <sym srcFile>, r62);
    goto L120(r67);
  D27():
    deopt 112 [r52];
  D33():
    deopt 136 [];
  L108():
    goto L17(r52);
  L123():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L120(dx16);
  L124():
    p3 = prom<V +>{
      new2 = ld new;
      new3 = force? new2;
      checkMissing(new3);
      return new3;
    };
    p4 = prom<V +>{
      curLines8 = ld curLines;
      curLines9 = force? curLines8;
      checkMissing(curLines9);
      return curLines9;
    };
    p5 = prom<V +>{
      prevLines12 = ld prevLines;
      prevLines13 = force? prevLines12;
      checkMissing(prevLines13);
      c17 = `is.object`(prevLines13);
      if c17 then L1() else L2(prevLines13);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[", prevLines13);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(prevLines15):
      curLines10 = ld curLines;
      curLines11 = force? curLines10;
      __2 = ldf `[` in base;
      r70 = dyn __2(prevLines15, curLines11);
      goto L0(r70);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r72 = dyn ifelse1(p3, p4, p5);
    check L125() else D34();
  D34():
    deopt 140 [r72];
  L125():
    l3 = ld concordance;
    c18 = `is.object`(l3);
    if c18 then L127() else L128(r72, l3);
  L126(r76, dx21):
    st concordance = dx21;
    goto L22();
  L127():
    dr20 = tryDispatchBuiltin.0("$<-", l3, r72);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L129() else L128(r72, dr20);
  L128(r74, l5):
    r77 = `$<-`(l5, <sym srcLine>, r72);
    goto L126(r74, r77);
  L129():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L126(r72, dx20);
  }
}