fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1563741242;
    st addConcordance = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1563741242(conc, s) {
  (reg conc:*, reg s:*) -+> V { var conc:*, var s:*, reg stringToConcordance:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg prev:*, reg prev1:V, reg c:V, reg r4:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg conc1:*, reg conc2:V, reg c2:L, reg conc4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg conc5:*, reg conc6:V, reg c3:L, reg conc8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg length:cls, reg r11:V, reg rep_len:cls, reg r12:V, reg l:*, reg c4:L, reg r14:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg prev2:*, reg prev3:V, reg c5:L, reg prev5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r20:V, reg r21:I, reg prev6:*, reg prev7:V, reg c6:L, reg prev9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r22:V, reg l3:*, reg c7:L, reg dx12:V, reg l6:*, reg dx13:V, reg l7:*, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg l9:*, reg dx18:V, reg dx19:V, reg r23:V, reg c8:L, reg dx22:V, reg l11:*, reg dx23:V, reg dr12:V, reg dc6:L, reg dx25:V, reg dx26:V, reg l13:*, reg dx27:V, reg prev10:*, reg prev11:V, reg c9:L, reg dx31:V, reg l15:*, reg dx32:V, reg dx33:V, reg prev13:V, reg dr14:V, reg dc7:L, reg dx37:V, reg dx38:V, reg l17:*, reg dx39:V, reg dx40:V, reg dx41:V, reg r24:V, reg i:*, reg i1:V, reg r25:V, reg ___:cls, reg r26:V, reg c10:L, reg dx43:V, reg l19:*, reg dr16:V, reg dc8:L, reg dx45:V, reg dx47:V, reg r27:V, reg prev14:*, reg prev15:V, reg c11:L, reg prev17:V, reg dr18:V, reg dc9:L, reg dx48:V, reg dx49:V, reg r28:V, reg l20:*, reg c12:L, reg dx52:V, reg l23:*, reg dx53:V, reg l24:*, reg dr20:V, reg dc10:L, reg dx56:V, reg dx57:V, reg l26:*, reg dx58:V, reg dx59:V, reg r29:V, reg c13:L, reg dx62:V, reg l28:*, reg dx63:V, reg dr22:V, reg dc11:L, reg dx65:V, reg dx66:V, reg l30:*, reg dx67:V, reg prev18:*, reg prev19:V, reg c14:L, reg dx71:V, reg l32:*, reg dx72:V, reg dx73:V, reg prev21:V, reg dr24:V, reg dc12:L, reg dx77:V, reg dx78:V, reg l34:*, reg dx79:V, reg dx80:V, reg dx81:V, reg r30:V, reg i2:*, reg i3:V, reg r31:V, reg ___1:cls, reg r32:V, reg c15:L, reg dx83:V, reg l36:*, reg dr26:V, reg dc13:L, reg dx85:V, reg dx86:V, reg dx87:V, reg r33:V, reg conc9:*, reg conc10:V |
    mkenv;
    st conc = conc;
    st s = s;
    stringToConcordance = ldf stringToConcordance;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn stringToConcordance(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    st prev = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L13() else L1();
  L10():
    prev = ld prev;
    check L12() else D2();
  L11():
    r2 = dyn base(<sym prev>);
    goto L0(r2);
  D2():
    deopt 6 [prev];
  L1():
    goto L7();
  L7():
    conc9 = ld conc;
    check L86() else D14();
  L12():
    prev1 = force? prev;
    checkMissing(prev1);
    c = `==`(prev1, NULL);
    goto L0(c);
  L13():
    sym1 = ldf rep_len;
    base1 = ldf rep_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D14():
    deopt 65 [conc9];
  L2(r6):
    l = ld conc;
    c4 = `is.object`(l);
    if c4 then L31() else L32(r6, l);
  L14():
    conc1 = ld conc;
    check L16() else D3();
  L15():
    r5 = dyn base1(<lang `$`(conc, srcFile)>, <lang length(`$`(conc, srcLine))>);
    goto L2(r5);
  L86():
    conc10 = force? conc9;
    checkMissing(conc10);
    popenv;
    return conc10;
  D3():
    deopt 12 [conc1];
  L16():
    conc2 = force? conc1;
    checkMissing(conc2);
    c2 = `is.object`(conc2);
    if c2 then L18() else L19(conc2);
  L30(dx5):
    st conc = dx5;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L31():
    dr4 = tryDispatchBuiltin.0("$<-", l, r6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L33() else L32(r6, dr4);
  L32(r14, l2):
    r17 = `$<-`(l2, <sym srcFile>, r6);
    goto L30(r17);
  L4(r19):
    st i = r19;
    prev6 = ld prev;
    check L41() else D8();
  L17(dx1):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L18():
    dr = tryDispatchBuiltin.1("$", conc2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(conc4):
    r7 = `$`(conc4, <sym srcFile>);
    goto L17(r7);
  L33():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L30(dx4);
  L34():
    prev2 = ld prev;
    check L36() else D7();
  L35():
    r18 = dyn base3(<lang `$`(prev, srcLine)>);
    goto L4(r18);
  D7():
    deopt 28 [prev2];
  D8():
    deopt 33 [prev6];
  L3(r9):
    rep_len = ldf rep_len in base;
    r12 = dyn rep_len(dx1, r9);
    check L29() else D6();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L21():
    conc5 = ld conc;
    check L23() else D4();
  L22():
    r8 = dyn base2(<lang `$`(conc, srcLine)>);
    goto L3(r8);
  L36():
    prev3 = force? prev2;
    checkMissing(prev3);
    c5 = `is.object`(prev3);
    if c5 then L38() else L39(prev3);
  L41():
    prev7 = force? prev6;
    checkMissing(prev7);
    c6 = `is.object`(prev7);
    if c6 then L43() else L44(prev7);
  D4():
    deopt 17 [conc5];
  D6():
    deopt 23 [r12];
  L23():
    conc6 = force? conc5;
    checkMissing(conc6);
    c3 = `is.object`(conc6);
    if c3 then L25() else L26(conc6);
  L29():
    goto L2(r12);
  L37(dx7):
    r21 = seq_along(dx7);
    goto L4(r21);
  L38():
    dr6 = tryDispatchBuiltin.1("$", prev3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L40() else L39(dr6);
  L39(prev5):
    r20 = `$`(prev5, <sym srcLine>);
    goto L37(r20);
  L42(dx9):
    l3 = ld conc;
    c7 = `is.object`(l3);
    if c7 then L47() else L48(dx9, l3, dx9, l3);
  L43():
    dr8 = tryDispatchBuiltin.1("$", prev7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L45() else L44(dr8);
  L44(prev9):
    r22 = `$`(prev9, <sym srcFile>);
    goto L42(r22);
  L24(dx3):
    length = ldf length in base;
    r11 = dyn length(dx3);
    check L28() else D5();
  L25():
    dr2 = tryDispatchBuiltin.1("$", conc6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dr2);
  L26(conc8):
    r10 = `$`(conc8, <sym srcLine>);
    goto L24(r10);
  L40():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L37(dx6);
  L45():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L42(dx8);
  L46(dx17, l9, dx18, dx19):
    c8 = `is.object`(dx19);
    if c8 then L50() else L51(dx17, l9, dx19);
  L47():
    dr10 = tryDispatchBuiltin.1("$", l3);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L49() else L48(dx9, l3, dx9, dr10);
  L48(dx12, l6, dx13, l7):
    r23 = `$`(l7, <sym srcFile>);
    goto L46(dx12, l6, dx13, r23);
  D5():
    deopt 21 [r11];
  L5(dx26, l13, dx27):
    c10 = `is.object`(l13);
    if c10 then L60() else L61(dx26, l13);
  L27():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L24(dx2);
  L28():
    goto L3(r11);
  L49():
    dx16 = getTryDispatchBuiltinValue(dr10);
    goto L46(dx9, l3, dx9, dx16);
  L50():
    dr12 = tryDispatchBuiltin.0("[<-", dx19, dx18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L52() else L51(dx17, l9, dr12);
  L51(dx22, l11, dx23):
    prev10 = ld prev;
    check L53() else D9();
  D9():
    deopt 40 [dx22, l11, dx23, dx18, prev10];
  L52():
    dx25 = getTryDispatchBuiltinValue(dr12);
    goto L5(dx17, l9, dx25);
  L53():
    prev11 = force? prev10;
    checkMissing(prev11);
    c9 = `is.object`(prev11);
    if c9 then L55() else L56(dx22, l11, dx23, dx18, prev11);
  L59(dx47):
    st conc = dx47;
    prev14 = ld prev;
    check L63() else D11();
  L60():
    dr16 = tryDispatchBuiltin.0("$<-", l13, dx27);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L62() else L61(dx26, dr16);
  L61(dx43, l19):
    r27 = `$<-`(l19, <sym srcFile>, dx27);
    goto L59(r27);
  D11():
    deopt 48 [prev14];
  L54(dx38, l17, dx39, dx40, dx41):
    i = ld i;
    check L58() else D10();
  L55():
    dr14 = tryDispatchBuiltin.1("$", prev11);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L57() else L56(dx22, l11, dx23, dx18, dr14);
  L56(dx31, l15, dx32, dx33, prev13):
    r24 = `$`(prev13, <sym offset>);
    goto L54(dx31, l15, dx32, dx33, r24);
  L62():
    dx45 = getTryDispatchBuiltinValue(dr16);
    goto L59(dx45);
  L63():
    prev15 = force? prev14;
    checkMissing(prev15);
    c11 = `is.object`(prev15);
    if c11 then L65() else L66(prev15);
  D10():
    deopt 42 [dx38, l17, dx39, dx40, dx41, i];
  L57():
    dx37 = getTryDispatchBuiltinValue(dr14);
    goto L54(dx22, l11, dx23, dx18, dx37);
  L58():
    i1 = force? i;
    checkMissing(i1);
    r25 = `+`(dx41, i1);
    ___ = ldf `[<-` in base;
    r26 = dyn ___(dx39, dx40, r25);
    goto L5(dx38, l17, r26);
  L64(dx49):
    l20 = ld conc;
    c12 = `is.object`(l20);
    if c12 then L69() else L70(dx49, l20, dx49, l20);
  L65():
    dr18 = tryDispatchBuiltin.1("$", prev15);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L67() else L66(dr18);
  L66(prev17):
    r28 = `$`(prev17, <sym srcLine>);
    goto L64(r28);
  L67():
    dx48 = getTryDispatchBuiltinValue(dr18);
    goto L64(dx48);
  L68(dx57, l26, dx58, dx59):
    c13 = `is.object`(dx59);
    if c13 then L72() else L73(dx57, l26, dx59);
  L69():
    dr20 = tryDispatchBuiltin.1("$", l20);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L71() else L70(dx49, l20, dx49, dr20);
  L70(dx52, l23, dx53, l24):
    r29 = `$`(l24, <sym srcLine>);
    goto L68(dx52, l23, dx53, r29);
  L6(dx66, l30, dx67):
    c15 = `is.object`(l30);
    if c15 then L82() else L83(dx66, l30);
  L71():
    dx56 = getTryDispatchBuiltinValue(dr20);
    goto L68(dx49, l20, dx49, dx56);
  L72():
    dr22 = tryDispatchBuiltin.0("[<-", dx59, dx58);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L74() else L73(dx57, l26, dr22);
  L73(dx62, l28, dx63):
    prev18 = ld prev;
    check L75() else D12();
  D12():
    deopt 55 [dx62, l28, dx63, dx58, prev18];
  L74():
    dx65 = getTryDispatchBuiltinValue(dr22);
    goto L6(dx57, l26, dx65);
  L75():
    prev19 = force? prev18;
    checkMissing(prev19);
    c14 = `is.object`(prev19);
    if c14 then L77() else L78(dx62, l28, dx63, dx58, prev19);
  L81(dx86, dx87):
    st conc = dx87;
    goto L7();
  L82():
    dr26 = tryDispatchBuiltin.0("$<-", l30, dx67);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L84() else L83(dx66, dr26);
  L83(dx83, l36):
    r33 = `$<-`(l36, <sym srcLine>, dx67);
    goto L81(dx83, r33);
  L76(dx78, l34, dx79, dx80, dx81):
    i2 = ld i;
    check L80() else D13();
  L77():
    dr24 = tryDispatchBuiltin.1("$", prev19);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L79() else L78(dx62, l28, dx63, dx58, dr24);
  L78(dx71, l32, dx72, dx73, prev21):
    r30 = `$`(prev21, <sym offset>);
    goto L76(dx71, l32, dx72, dx73, r30);
  L84():
    dx85 = getTryDispatchBuiltinValue(dr26);
    goto L81(dx66, dx85);
  D13():
    deopt 57 [dx78, l34, dx79, dx80, dx81, i2];
  L79():
    dx77 = getTryDispatchBuiltinValue(dr24);
    goto L76(dx62, l28, dx63, dx58, dx77);
  L80():
    i3 = force? i2;
    checkMissing(i3);
    r31 = `+`(dx81, i3);
    ___1 = ldf `[<-` in base;
    r32 = dyn ___1(dx79, dx80, r31);
    goto L6(dx78, l34, r32);
  }
}