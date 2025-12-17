fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2605558301;
    st `axis.Date` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2605558301(side, x, at, format, labels, `...`) {
  (reg side:*, reg x:*, reg at:*, reg format:*, reg labels:*, reg ddd:dots) -+> V { var side:*, var x:*, var at:*, var format:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg at1:*, reg at2:V, reg c6:V, reg r6:V, reg c7:L, reg c8:V, reg sort:cls, reg par:cls, reg r7:V, reg c10:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg side1:*, reg side2:V, reg __:cls, reg r10:V, reg c11:L, reg r13:V, reg r14:v(I), reg __1:cls, reg r15:V, reg p:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg range:*, reg range1:V, reg c12:L, reg range3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r20:V, reg r21:V, reg l:*, reg c13:L, reg r23:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ___:cls, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg range4:*, reg range5:V, reg c14:L, reg range7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r29:V, reg r30:V, reg l3:*, reg c15:L, reg r32:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ___1:cls, reg r35:V, reg range8:*, reg range9:V, reg l6:*, reg class__:cls, reg r36:V, reg has_at:*, reg has_at1:V, reg c16:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg at3:*, reg at4:V, reg is_numeric:cls, reg r39:V, reg c17:L, reg l7:*, reg class__1:cls, reg r40:V, reg as_Date:cls, reg at5:*, reg at6:V, reg p1:p(V +), reg r43:V, reg at7:*, reg at8:V, reg c18:L, reg at10:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg at13:V, reg r45:V, reg at14:*, reg at15:V, reg is_finite:cls, reg r46:V, reg __4:cls, reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg missing1:cls, reg r50:V, reg c19:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg missing2:cls, reg r53:V, reg r54:V, reg c20:L, reg extendDateTimeFormat:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg z:*, reg z1:V, reg p3:p(V +), reg r57:V, reg r58:V, reg extendDateTimeFormat1:cls, reg rangeDate:*, reg rangeDate1:V, reg p4:p(V +), reg z2:*, reg z3:V, reg p5:p(V +), reg r61:V, reg r62:V, reg ___2:cls, reg r64:V, reg r65:cls, reg rangeDate2:*, reg rangeDate3:V, reg p6:p(V +), reg par1:cls, reg r67:V, reg c21:L, reg r69:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg side3:*, reg side4:V, reg __5:cls, reg r70:V, reg r71:V, reg __6:cls, reg r72:V, reg p7:p(V +), reg r74:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r75:V, reg r76:V, reg missing3:cls, reg r77:V, reg c22:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r78:V, reg r79:V, reg z4:*, reg z5:V, reg attr:cls, reg r80:V, reg z6:*, reg z7:V, reg range10:*, reg range11:V, reg c23:L, reg z9:V, reg range13:V, reg dr14:V, reg dc7:L, reg dx14:V, reg z11:V, reg dx15:V, reg __7:cls, reg r81:V, reg r82:V, reg z12:*, reg z13:V, reg range14:*, reg range15:V, reg c24:L, reg r84:V, reg z15:V, reg range17:V, reg dr16:V, reg dc8:L, reg dx16:V, reg r86:V, reg z17:V, reg dx17:V, reg __8:cls, reg r87:V, reg r88:V, reg r89:V, reg z18:*, reg z19:V, reg c25:L, reg z21:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg keep:*, reg keep1:V, reg __9:cls, reg r90:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r91:V, reg r92:V, reg labels1:*, reg labels2:V, reg c26:L, reg r93:V, reg c27:L, reg labels3:*, reg labels4:V, reg c28:L, reg labels6:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg keep2:*, reg keep3:V, reg __10:cls, reg r94:V, reg isTRUE:cls, reg labels7:*, reg labels8:V, reg p8:p(V +), reg r96:V, reg c29:L, reg format1:cls, reg z22:*, reg z23:V, reg p9:p(V +), reg format2:*, reg format3:V, reg p10:p(V +), reg r99:V, reg isFALSE:cls, reg labels9:*, reg labels10:V, reg p11:p(V +), reg r101:V, reg c30:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r102:V, reg r103:V, reg rep:cls, reg r104:V, reg axis:cls, reg side5:*, reg side6:V, reg p12:p(V +), reg z24:*, reg z25:V, reg p13:p(V +), reg labels11:*, reg labels12:V, reg p14:p(V +), reg ddd1:dots?, reg r108:V |
    mkenv;
    st side = side;
    st x = x;
    st at = at;
    st format = format;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0(TRUE) else L0(labels);
  L0(labels_orDefault):
    st labels = labels_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L38() else L2(c);
  L36():
    missing = ldf missing in base;
    r2 = dyn missing(<sym at>);
    goto L1(r2);
  L37():
    r = dyn base(<sym at>);
    goto L1(r);
  L2(c2):
    st `has.at` = c2;
    sort = ldf sort;
    check L43() else D1();
  L38():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  D1():
    deopt 12 [];
  L3(c5, r5):
    r6 = `!`(r5);
    c7 = `as.logical`(r6);
    c8 = `&&`(c5, c7);
    goto L2(c8);
  L39():
    at1 = ld at;
    check L41() else D0();
  L40():
    r4 = dyn base1(<sym at>);
    goto L3(c, r4);
  L43():
    p = prom<V +>{
      par = ldf par;
      r7 = dyn par("usr");
      c10 = `is.object`(r7);
      if c10 then L3() else L4(r7);
    L0(dx1):
      return dx1;
    L3():
      dr = tryDispatchBuiltin.1("[", r7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L5() else L4(dr);
    L4(r9):
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      __ = ldf `%%` in base;
      r10 = dyn __(side2, 2.0);
      c11 = `as.logical`(r10);
      if c11 then L6() else L1();
    L1():
      goto L2(r9, <int 3, 4>);
    L2(r13, r14):
      __1 = ldf `[` in base;
      r15 = dyn __1(r13, r14);
      goto L0(r15);
    L5():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L6():
      goto L2(r9, <int 1, 2>);
    };
    r17 = dyn sort(p);
    check L44() else D2();
  D0():
    deopt 5 [c, at1];
  D2():
    deopt 14 [r17];
  L41():
    at2 = force? at1;
    checkMissing(at2);
    c6 = `==`(at2, NULL);
    goto L3(c, c6);
  L44():
    st range = r17;
    sym2 = ldf ceiling;
    base2 = ldf ceiling in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L4(r19):
    l = ld range;
    c13 = `is.object`(l);
    if c13 then L51() else L52(r19, l);
  L45():
    range = ld range;
    check L47() else D3();
  L46():
    r18 = dyn base2(<lang `[`(range, 1)>);
    goto L4(r18);
  D3():
    deopt 17 [range];
  L6(dx5):
    st range = dx5;
    sym3 = ldf floor;
    base3 = ldf floor in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L47():
    range1 = force? range;
    checkMissing(range1);
    c12 = `is.object`(range1);
    if c12 then L48() else L49(range1);
  L51():
    dr4 = tryDispatchBuiltin.0("[<-", l, r19);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L53() else L52(r19, dr4);
  L52(r23, l2):
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l2, r19, 1);
    goto L6(r26);
  L5(dx3):
    r21 = ceiling(dx3);
    goto L4(r21);
  L7(r28):
    l3 = ld range;
    c15 = `is.object`(l3);
    if c15 then L60() else L61(r28, l3);
  L48():
    dr2 = tryDispatchBuiltin.1("[", range1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(dr2);
  L49(range3):
    __2 = ldf `[` in base;
    r20 = dyn __2(range3, 1);
    goto L5(r20);
  L53():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L54():
    range4 = ld range;
    check L56() else D4();
  L55():
    r27 = dyn base3(<lang `[`(range, 2)>);
    goto L7(r27);
  D4():
    deopt 29 [range4];
  L9(dx9):
    st range = dx9;
    range8 = ld range;
    check L63() else D5();
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L56():
    range5 = force? range4;
    checkMissing(range5);
    c14 = `is.object`(range5);
    if c14 then L57() else L58(range5);
  L60():
    dr8 = tryDispatchBuiltin.0("[<-", l3, r28);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L62() else L61(r28, dr8);
  L61(r32, l5):
    ___1 = ldf `[<-` in base;
    r35 = dyn ___1(l5, r28, 2);
    goto L9(r35);
  D5():
    deopt 40 [range8];
  L8(dx7):
    r30 = floor(dx7);
    goto L7(r30);
  L57():
    dr6 = tryDispatchBuiltin.1("[", range5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L59() else L58(dr6);
  L58(range7):
    __3 = ldf `[` in base;
    r29 = dyn __3(range7, 2);
    goto L8(r29);
  L62():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L9(dx8);
  L63():
    range9 = force? range8;
    checkMissing(range9);
    st rangeDate = range9;
    l6 = ld rangeDate;
    class__ = ldf `class<-`;
    check L64() else D6();
  D6():
    deopt 46 ["Date", l6, "Date"];
  L59():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx6);
  L64():
    r36 = dyn class__(l6, NULL, "Date");
    check L65() else D7();
  D7():
    deopt 48 ["Date", r36];
  L65():
    st rangeDate = r36;
    has_at = ld `has.at`;
    check L66() else D8();
  D8():
    deopt 50 [has_at];
  L66():
    has_at1 = force? has_at;
    checkMissing(has_at1);
    c16 = `as.logical`(has_at1);
    if c16 then L67() else L10();
  L10():
    ___2 = ldf `:::`;
    check L99() else D22();
  L22():
    z6 = ld z;
    check L110() else D27();
  L67():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L68() else L69();
  D22():
    deopt 101 [];
  D27():
    deopt 124 [z6];
  L11(r38):
    c17 = `as.logical`(r38);
    if c17 then L72() else L12();
  L68():
    at3 = ld at;
    check L70() else D9();
  L69():
    r37 = dyn base4(<sym at>);
    goto L11(r37);
  L99():
    r64 = dyn ___2("grDevices", "prettyDate");
    check L100() else D23();
  L110():
    z7 = force? z6;
    checkMissing(z7);
    range10 = ld range;
    check L111() else D28();
  D9():
    deopt 54 [at3];
  D23():
    deopt 104 [r64];
  D28():
    deopt 125 [z7, range10];
  L12():
    as_Date = ldf `as.Date`;
    check L76() else D13();
  L13():
    at7 = ld at;
    check L78() else D15();
  L70():
    at4 = force? at3;
    checkMissing(at4);
    is_numeric = ldf `is.numeric` in base;
    r39 = dyn is_numeric(at4);
    check L71() else D10();
  L72():
    l7 = ld at;
    class__1 = ldf `class<-`;
    check L73() else D11();
  L100():
    checkFun.0(r64);
    r65 = r64 as cls;
    p6 = prom<V +>{
      rangeDate2 = ld rangeDate;
      rangeDate3 = force? rangeDate2;
      checkMissing(rangeDate3);
      return rangeDate3;
    };
    p7 = prom<V +>{
      par1 = ldf par;
      r67 = dyn par1("lab");
      c21 = `is.object`(r67);
      if c21 then L1() else L2(r67);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", r67);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(r69):
      side3 = ld side;
      side4 = force? side3;
      checkMissing(side4);
      __5 = ldf `%%` in base;
      r70 = dyn __5(side4, 2.0);
      r71 = `-`(2.0, r70);
      __6 = ldf `[` in base;
      r72 = dyn __6(r69, r71);
      goto L0(r72);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r74 = dyn r65[, n](p6, p7);
    check L101() else D24();
  L111():
    range11 = force? range10;
    checkMissing(range11);
    c23 = `is.object`(range11);
    if c23 then L112() else L113(z7, range11);
  D10():
    deopt 57 [r39];
  D11():
    deopt 61 ["Date", l7, "Date"];
  D13():
    deopt 66 [];
  D15():
    deopt 70 [at7];
  D24():
    deopt 109 [r74];
  L26(z11, dx15):
    r82 = `>=`(z11, dx15);
    z12 = ld z;
    check L115() else D29();
  L71():
    goto L11(r39);
  L73():
    r40 = dyn class__1(l7, NULL, "Date");
    check L74() else D12();
  L76():
    p1 = prom<V +>{
      at5 = ld at;
      at6 = force? at5;
      checkMissing(at6);
      return at6;
    };
    r43 = dyn as_Date(p1);
    check L77() else D14();
  L78():
    at8 = force? at7;
    checkMissing(at8);
    c18 = `is.object`(at8);
    if c18 then L79() else L80(at8);
  L101():
    st z = r74;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L102() else L103();
  L112():
    dr14 = tryDispatchBuiltin.1("[", range11);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L114() else L113(z7, dr14);
  L113(z9, range13):
    __7 = ldf `[` in base;
    r81 = dyn __7(range13, 1);
    goto L26(z9, r81);
  D12():
    deopt 63 ["Date", r40];
  D14():
    deopt 68 [r43];
  D29():
    deopt 130 [r82, z12];
  L14(dx11):
    st z = dx11;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L86() else L87();
  L23(r76):
    c22 = `as.logical`(r76);
    if c22 then L104() else L24();
  L74():
    st at = r40;
    goto L13();
  L77():
    st at = r43;
    goto L13();
  L79():
    dr10 = tryDispatchBuiltin.1("[", at8);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80(dr10);
  L80(at10):
    sym5 = ldf `is.finite`;
    base5 = ldf `is.finite` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L102():
    missing3 = ldf missing in base;
    r77 = dyn missing3(<sym format>);
    goto L23(r77);
  L103():
    r75 = dyn base8(<sym format>);
    goto L23(r75);
  L114():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L26(z7, dx14);
  L115():
    z13 = force? z12;
    checkMissing(z13);
    range14 = ld range;
    check L116() else D30();
  D30():
    deopt 131 [r82, z13, range14];
  L15(at13, r45):
    __4 = ldf `[` in base;
    r47 = dyn __4(at13, r45);
    goto L14(r47);
  L16(r49):
    c19 = `as.logical`(r49);
    if c19 then L88() else L17();
  L24():
    goto L22();
  L81():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L14(dx10);
  L82():
    at14 = ld at;
    check L84() else D16();
  L83():
    r44 = dyn base5(<sym at>);
    goto L15(at10, r44);
  L86():
    missing1 = ldf missing in base;
    r50 = dyn missing1(<sym format>);
    goto L16(r50);
  L87():
    r48 = dyn base6(<sym format>);
    goto L16(r48);
  L104():
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L105() else L106();
  L116():
    range15 = force? range14;
    checkMissing(range15);
    c24 = `is.object`(range15);
    if c24 then L117() else L118(r82, z13, range15);
  D16():
    deopt 74 [at10, at14];
  L17():
    goto L21(NULL);
  L21(r62):
    goto L22();
  L25(r79):
    st format = r79;
    goto L22();
  L27(r86, z17, dx17):
    r88 = `<=`(z17, dx17);
    r89 = `&&`(r86, r88);
    st keep = r89;
    z18 = ld z;
    check L120() else D31();
  L84():
    at15 = force? at14;
    checkMissing(at15);
    is_finite = ldf `is.finite` in base;
    r46 = dyn is_finite(at15);
    check L85() else D17();
  L88():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L105():
    z4 = ld z;
    check L107() else D25();
  L106():
    r78 = dyn base9(<sym z>, "format");
    goto L25(r78);
  L117():
    dr16 = tryDispatchBuiltin.1("[", range15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L119() else L118(r82, z13, dr16);
  L118(r84, z15, range17):
    __8 = ldf `[` in base;
    r87 = dyn __8(range17, 2);
    goto L27(r84, z15, r87);
  D17():
    deopt 77 [at10, r46];
  D25():
    deopt 116 [z4];
  D31():
    deopt 139 [z18];
  L18(r52):
    r54 = `!`(r52);
    c20 = `as.logical`(r54);
    if c20 then L91() else L19();
  L85():
    goto L15(at10, r46);
  L89():
    missing2 = ldf missing in base;
    r53 = dyn missing2(<sym x>);
    goto L18(r53);
  L90():
    r51 = dyn base7(<sym x>);
    goto L18(r51);
  L107():
    z5 = force? z4;
    checkMissing(z5);
    attr = ldf attr in base;
    r80 = dyn attr(z5, "format");
    check L108() else D26();
  L119():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L27(r82, z13, dx16);
  L120():
    z19 = force? z18;
    checkMissing(z19);
    c25 = `is.object`(z19);
    if c25 then L121() else L122(z19);
  D26():
    deopt 120 [r80];
  L19():
    extendDateTimeFormat1 = ldf extendDateTimeFormat;
    check L95() else D20();
  L20(r58):
    st format = r58;
    goto L21(r58);
  L28(dx19):
    st z = dx19;
    sym10 = ldf `is.logical`;
    base10 = ldf `is.logical` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L125() else L126();
  L91():
    extendDateTimeFormat = ldf extendDateTimeFormat;
    check L92() else D18();
  L108():
    goto L25(r80);
  L121():
    dr18 = tryDispatchBuiltin.1("[", z19);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L123() else L122(dr18);
  L122(z21):
    keep = ld keep;
    check L124() else D32();
  D18():
    deopt 88 [];
  D20():
    deopt 93 [];
  D32():
    deopt 141 [z21, keep];
  L29(r92):
    r93 = `!`(r92);
    c27 = `as.logical`(r93);
    if c27 then L128() else L30();
  L92():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r57 = dyn extendDateTimeFormat(p2, p3);
    check L93() else D19();
  L95():
    p4 = prom<V +>{
      rangeDate = ld rangeDate;
      rangeDate1 = force? rangeDate;
      checkMissing(rangeDate1);
      return rangeDate1;
    };
    p5 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r61 = dyn extendDateTimeFormat1(p4, p5);
    check L96() else D21();
  L123():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L28(dx18);
  L124():
    keep1 = force? keep;
    __9 = ldf `[` in base;
    r90 = dyn __9(z21, keep1);
    goto L28(r90);
  L125():
    labels1 = ld labels;
    check L127() else D33();
  L126():
    r91 = dyn base10(<sym labels>);
    goto L29(r91);
  D19():
    deopt 91 [r57];
  D21():
    deopt 96 [r61];
  D33():
    deopt 146 [labels1];
  L30():
    isTRUE = ldf isTRUE;
    check L135() else D36();
  L32():
    axis = ldf axis;
    check L147() else D42();
  L93():
    goto L20(r57);
  L96():
    goto L20(r61);
  L127():
    labels2 = force? labels1;
    checkMissing(labels2);
    c26 = `is.logical`(labels2);
    goto L29(c26);
  L128():
    labels3 = ld labels;
    check L129() else D34();
  D34():
    deopt 150 [labels3];
  D36():
    deopt 157 [];
  D42():
    deopt 178 [];
  L129():
    labels4 = force? labels3;
    checkMissing(labels4);
    c28 = `is.object`(labels4);
    if c28 then L130() else L131(labels4);
  L135():
    p8 = prom<V +>{
      labels7 = ld labels;
      labels8 = force? labels7;
      checkMissing(labels8);
      return labels8;
    };
    r96 = dyn isTRUE(p8);
    check L136() else D37();
  L147():
    p12 = prom<V +>{
      side5 = ld side;
      side6 = force? side5;
      checkMissing(side6);
      return side6;
    };
    p13 = prom<V +>{
      z24 = ld z;
      z25 = force? z24;
      checkMissing(z25);
      return z25;
    };
    p14 = prom<V +>{
      labels11 = ld labels;
      labels12 = force? labels11;
      checkMissing(labels12);
      return labels12;
    };
    ddd1 = ld `...`;
    r108 = dyn axis[, at, labels, `...`](p12, p13, p14, ddd1);
    check L148() else D43();
  D37():
    deopt 159 [r96];
  D43():
    deopt 185 [r108];
  L31(dx21):
    st labels = dx21;
    goto L32();
  L130():
    dr20 = tryDispatchBuiltin.1("[", labels4);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L132() else L131(dr20);
  L131(labels6):
    keep2 = ld keep;
    check L133() else D35();
  L136():
    c29 = `as.logical`(r96);
    if c29 then L137() else L33();
  L148():
    popenv;
    return r108;
  D35():
    deopt 152 [labels6, keep2];
  L33():
    isFALSE = ldf isFALSE;
    check L141() else D40();
  L132():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L31(dx20);
  L133():
    keep3 = force? keep2;
    __10 = ldf `[` in base;
    r94 = dyn __10(labels6, keep3);
    goto L31(r94);
  L137():
    format1 = ldf format;
    check L138() else D38();
  D38():
    deopt 161 [];
  D40():
    deopt 168 [];
  L138():
    p9 = prom<V +>{
      z22 = ld z;
      z23 = force? z22;
      checkMissing(z23);
      return z23;
    };
    p10 = prom<V +>{
      format2 = ld format;
      format3 = force? format2;
      checkMissing(format3);
      return format3;
    };
    r99 = dyn format1[, format](p9, p10);
    check L139() else D39();
  L141():
    p11 = prom<V +>{
      labels9 = ld labels;
      labels10 = force? labels9;
      checkMissing(labels10);
      return labels10;
    };
    r101 = dyn isFALSE(p11);
    check L142() else D41();
  D39():
    deopt 165 [r99];
  D41():
    deopt 170 [r101];
  L139():
    st labels = r99;
    goto L32();
  L142():
    c30 = `as.logical`(r101);
    if c30 then L143() else L34();
  L34():
    goto L32();
  L143():
    sym11 = ldf rep;
    base11 = ldf rep in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L144() else L145();
  L35(r103):
    st labels = r103;
    goto L32();
  L144():
    rep = ldf rep in base;
    r104 = dyn rep("", <lang length(z)>);
    goto L35(r104);
  L145():
    r102 = dyn base11("", <lang length(z)>);
    goto L35(r102);
  }
}