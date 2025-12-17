fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3333887956;
    st `.cacheGenericTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3333887956(name, def, table) {
  (reg name:*, reg def:*, reg table:*) -+> V { var name:*, var def:*, var table:*, reg def1:*, reg def2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg table1:*, reg table2:V, reg c:L, reg table4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg __:cls, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg __1:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg prev:*, reg prev1:V, reg is_function:cls, reg r7:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg prev2:*, reg prev3:V, reg def3:*, reg def4:V, reg identical:cls, reg r10:V, reg c4:L, reg fdef:*, reg fdef1:V, reg __2:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg pkg:*, reg pkg1:V, reg newpkg:*, reg newpkg1:V, reg identical1:cls, reg r16:V, reg c5:L, reg def5:*, reg def6:V, reg l:*, reg c6:L, reg def8:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg name3:*, reg name4:V, reg ____:cls, reg r17:V, reg fdef2:*, reg fdef3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg prev4:*, reg prev5:V, reg list:cls, reg r22:V, reg pkg2:*, reg pkg3:V, reg l3:*, reg names__:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg newpkg2:*, reg newpkg3:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg prev6:*, reg prev7:V, reg names:cls, reg r28:V, reg match:cls, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg i:*, reg i1:V, reg is_na:cls, reg r32:V, reg c7:L, reg def11:*, reg def12:V, reg l4:*, reg c8:L, reg def14:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg def16:V, reg dx5:V, reg newpkg4:*, reg newpkg5:V, reg ____1:cls, reg r33:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg def18:*, reg def19:V, reg prev8:*, reg prev9:V, reg c9:L, reg prev11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i2:*, reg i3:V, reg __3:cls, reg r36:V, reg identical2:cls, reg r37:V, reg c10:L, reg fdef4:*, reg fdef5:V, reg def20:*, reg def21:V, reg l7:*, reg c11:L, reg def23:V, reg l9:*, reg dr8:V, reg dc4:L, reg dx8:V, reg def25:V, reg dx9:V, reg i4:*, reg i5:V, reg ____2:cls, reg r39:V, reg prev12:*, reg prev13:V, reg _getMethodsTable:cls, reg fdef6:*, reg fdef7:V, reg p:p(V +), reg r41:V, reg def26:*, reg def27:V, reg l10:*, reg c12:L, reg def29:V, reg l12:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg name5:*, reg name6:V, reg ____3:cls, reg r42:V, reg fdef8:*, reg fdef9:V |
    mkenv;
    st name = name;
    st def = def;
    st table = table;
    def1 = ld def;
    check L26() else D0();
  D0():
    deopt 0 [def1];
  L26():
    def2 = force? def1;
    checkMissing(def2);
    st fdef = def2;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L34() else L2();
  L27():
    table1 = ld table;
    check L29() else D1();
  L28():
    r = dyn base(<lang `<-`(prev, `[[`(table, name))>);
    goto L0(r);
  D1():
    deopt 4 [table1];
  L2():
    goto L24();
  L24():
    _getMethodsTable = ldf `.getMethodsTable`;
    check L110() else D36();
  L29():
    table2 = force? table1;
    checkMissing(table2);
    c = `is.object`(table2);
    if c then L30() else L31(table2);
  L34():
    __1 = ldf `@` in base;
    r4 = dyn __1(<sym def>, <sym package>);
    st newpkg = r4;
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  D36():
    deopt 149 [];
  L1(dx1):
    st prev = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L3(r6):
    c3 = `as.logical`(r6);
    if c3 then L39() else L4();
  L30():
    dr = tryDispatchBuiltin.1("[[", table2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(table4):
    name1 = ld name;
    check L33() else D2();
  L35():
    prev = ld prev;
    check L37() else D3();
  L36():
    r5 = dyn base1(<sym prev>);
    goto L3(r5);
  L110():
    p = prom<V +>{
      fdef6 = ld fdef;
      fdef7 = force? fdef6;
      checkMissing(fdef7);
      return fdef7;
    };
    r41 = dyn _getMethodsTable(p);
    check L111() else D37();
  D2():
    deopt 6 [table4, name1];
  D3():
    deopt 17 [prev];
  D37():
    deopt 151 [r41];
  L4():
    goto L13();
  L13():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L33():
    name2 = force? name1;
    __ = ldf `[[` in base;
    r2 = dyn __(table4, name2);
    goto L1(r2);
  L37():
    prev1 = force? prev;
    checkMissing(prev1);
    is_function = ldf `is.function` in base;
    r7 = dyn is_function(prev1);
    check L38() else D4();
  L39():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L111():
    def26 = ld def;
    check L112() else D38();
  D4():
    deopt 20 [r7];
  D38():
    deopt 152 [def26];
  L5(r9):
    c4 = `as.logical`(r9);
    if c4 then L45() else L6();
  L14(r25):
    st i = r25;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L79() else L80();
  L38():
    goto L3(r7);
  L40():
    prev2 = ld prev;
    check L42() else D5();
  L41():
    r8 = dyn base2(<sym prev>, <sym def>);
    goto L5(r8);
  L71():
    newpkg2 = ld newpkg;
    check L73() else D20();
  L72():
    r24 = dyn base5(<sym newpkg>, <lang names(prev)>);
    goto L14(r24);
  L112():
    def27 = force? def26;
    checkMissing(def27);
    l10 = ld table;
    c12 = `is.object`(l10);
    if c12 then L113() else L114(def27, l10);
  D5():
    deopt 23 [prev2];
  D20():
    deopt 89 [newpkg2];
  L6():
    __2 = ldf `@` in base;
    r13 = dyn __2(<sym prev>, <sym package>);
    st pkg = r13;
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L16(r31):
    c7 = `as.logical`(r31);
    if c7 then L83() else L17();
  L25(dx11):
    st table = dx11;
    fdef8 = ld fdef;
    check L117() else D40();
  L42():
    prev3 = force? prev2;
    checkMissing(prev3);
    def3 = ld def;
    check L43() else D6();
  L45():
    fdef = ld fdef;
    check L46() else D8();
  L73():
    newpkg3 = force? newpkg2;
    checkMissing(newpkg3);
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L74() else L75();
  L79():
    i = ld i;
    check L81() else D24();
  L80():
    r30 = dyn base7(<sym i>);
    goto L16(r30);
  L113():
    dr10 = tryDispatchBuiltin.0("[[<-", l10, def27);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L115() else L114(def27, dr10);
  L114(def29, l12):
    name5 = ld name;
    check L116() else D39();
  D6():
    deopt 25 [def3];
  D8():
    deopt 36 [fdef];
  D24():
    deopt 104 [i];
  D39():
    deopt 155 [def29, l12, def27, name5];
  D40():
    deopt 159 [fdef8];
  L8(r15):
    c5 = `as.logical`(r15);
    if c5 then L54() else L9();
  L15(r27):
    match = ldf match in base;
    r29 = dyn match(newpkg3, r27, NA_INT, NULL);
    check L78() else D23();
  L17():
    sym8 = ldf identical;
    base8 = ldf identical in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L90() else L91();
  L19():
    prev12 = ld prev;
    check L108() else D35();
  L43():
    def4 = force? def3;
    checkMissing(def4);
    identical = ldf identical in base;
    r10 = dyn identical(prev3, def4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L44() else D7();
  L46():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    popenv;
    return fdef1;
  L49():
    pkg = ld pkg;
    check L51() else D9();
  L50():
    r14 = dyn base3(<sym pkg>, <sym newpkg>);
    goto L8(r14);
  L74():
    prev6 = ld prev;
    check L76() else D21();
  L75():
    r26 = dyn base6(<sym prev>);
    goto L15(r26);
  L81():
    i1 = force? i;
    checkMissing(i1);
    is_na = ldf `is.na` in base;
    r32 = dyn is_na(i1);
    check L82() else D25();
  L83():
    def11 = ld def;
    check L84() else D26();
  L115():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L25(dx10);
  L116():
    name6 = force? name5;
    ____3 = ldf `[[<-` in base;
    r42 = dyn ____3(l12, def27, name6);
    goto L25(r42);
  L117():
    fdef9 = force? fdef8;
    checkMissing(fdef9);
    popenv;
    return fdef9;
  D7():
    deopt 35 [r10];
  D9():
    deopt 46 [pkg];
  D21():
    deopt 93 [prev6];
  D23():
    deopt 100 [r29];
  D25():
    deopt 107 [r32];
  D26():
    deopt 108 [def11];
  D35():
    deopt 143 [prev12];
  L9():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L20(r35):
    c10 = `as.logical`(r35);
    if c10 then L99() else L22();
  L44():
    goto L5(r10);
  L51():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    newpkg = ld newpkg;
    check L52() else D10();
  L54():
    def5 = ld def;
    check L55() else D12();
  L76():
    prev7 = force? prev6;
    checkMissing(prev7);
    names = ldf names in base;
    r28 = dyn names(prev7);
    check L77() else D22();
  L78():
    goto L14(r29);
  L82():
    goto L16(r32);
  L84():
    def12 = force? def11;
    checkMissing(def12);
    l4 = ld prev;
    c8 = `is.object`(l4);
    if c8 then L85() else L86(def12, l4);
  L90():
    def18 = ld def;
    check L92() else D28();
  L91():
    r34 = dyn base8(<sym def>, <lang `[[`(prev, i)>);
    goto L20(r34);
  L108():
    prev13 = force? prev12;
    checkMissing(prev13);
    st def = prev13;
    goto L24();
  D10():
    deopt 48 [newpkg];
  D12():
    deopt 59 [def5];
  D22():
    deopt 96 [r28];
  D28():
    deopt 117 [def18];
  L12(r21):
    st prev = r21;
    pkg2 = ld pkg;
    check L67() else D17();
  L18(def16, dx5):
    st prev = dx5;
    goto L19();
  L22():
    def20 = ld def;
    check L103() else D33();
  L52():
    newpkg1 = force? newpkg;
    checkMissing(newpkg1);
    identical1 = ldf identical in base;
    r16 = dyn identical1(pkg1, newpkg1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L53() else D11();
  L55():
    def6 = force? def5;
    checkMissing(def6);
    l = ld table;
    c6 = `is.object`(l);
    if c6 then L56() else L57(def6, l);
  L63():
    prev4 = ld prev;
    check L65() else D15();
  L64():
    r20 = dyn base4(<sym prev>);
    goto L12(r20);
  L77():
    goto L15(r28);
  L85():
    dr4 = tryDispatchBuiltin.0("[[<-", l4, def12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L87() else L86(def12, dr4);
  L86(def14, l6):
    newpkg4 = ld newpkg;
    check L88() else D27();
  L92():
    def19 = force? def18;
    checkMissing(def19);
    prev8 = ld prev;
    check L93() else D29();
  L99():
    fdef4 = ld fdef;
    check L100() else D32();
  D11():
    deopt 58 [r16];
  D15():
    deopt 73 [prev4];
  D17():
    deopt 78 [pkg2];
  D27():
    deopt 111 [def14, l6, def12, newpkg4];
  D29():
    deopt 119 [prev8];
  D32():
    deopt 133 [fdef4];
  D33():
    deopt 136 [def20];
  L10(dx3):
    st table = dx3;
    fdef2 = ld fdef;
    check L60() else D14();
  L53():
    goto L8(r16);
  L56():
    dr2 = tryDispatchBuiltin.0("[[<-", l, def6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(def6, dr2);
  L57(def8, l2):
    name3 = ld name;
    check L59() else D13();
  L65():
    prev5 = force? prev4;
    checkMissing(prev5);
    list = ldf list in base;
    r22 = dyn list(prev5);
    check L66() else D16();
  L67():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    l3 = ld prev;
    names__ = ldf `names<-`;
    check L68() else D18();
  L87():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(def12, dx4);
  L88():
    newpkg5 = force? newpkg4;
    ____1 = ldf `[[<-` in base;
    r33 = dyn ____1(l6, def12, newpkg5);
    goto L18(def14, r33);
  L93():
    prev9 = force? prev8;
    checkMissing(prev9);
    c9 = `is.object`(prev9);
    if c9 then L94() else L95(prev9);
  L100():
    fdef5 = force? fdef4;
    checkMissing(fdef5);
    popenv;
    return fdef5;
  L103():
    def21 = force? def20;
    checkMissing(def21);
    l7 = ld prev;
    c11 = `is.object`(l7);
    if c11 then L104() else L105(def21, l7);
  D13():
    deopt 62 [def8, l2, def6, name3];
  D14():
    deopt 66 [fdef2];
  D16():
    deopt 76 [r22];
  D18():
    deopt 81 [pkg3, l3, pkg3];
  L21(dx7):
    identical2 = ldf identical in base;
    r37 = dyn identical2(def19, dx7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L98() else D31();
  L23(def25, dx9):
    st prev = dx9;
    goto L19();
  L58():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L59():
    name4 = force? name3;
    ____ = ldf `[[<-` in base;
    r17 = dyn ____(l2, def6, name4);
    goto L10(r17);
  L60():
    fdef3 = force? fdef2;
    checkMissing(fdef3);
    popenv;
    return fdef3;
  L66():
    goto L12(r22);
  L68():
    r23 = dyn names__(l3, NULL, pkg3);
    check L69() else D19();
  L94():
    dr6 = tryDispatchBuiltin.1("[[", prev9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L96() else L95(dr6);
  L95(prev11):
    i2 = ld i;
    check L97() else D30();
  L104():
    dr8 = tryDispatchBuiltin.0("[[<-", l7, def21);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L106() else L105(def21, dr8);
  L105(def23, l9):
    i4 = ld i;
    check L107() else D34();
  D19():
    deopt 83 [pkg3, r23];
  D30():
    deopt 121 [prev11, i2];
  D31():
    deopt 132 [r37];
  D34():
    deopt 139 [def23, l9, def21, i4];
  L69():
    st prev = r23;
    goto L13();
  L96():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx6);
  L97():
    i3 = force? i2;
    __3 = ldf `[[` in base;
    r36 = dyn __3(prev11, i3);
    goto L21(r36);
  L98():
    goto L20(r37);
  L106():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L23(def21, dx8);
  L107():
    i5 = force? i4;
    ____2 = ldf `[[<-` in base;
    r39 = dyn ____2(l9, def21, i5);
    goto L23(def23, r39);
  }
}