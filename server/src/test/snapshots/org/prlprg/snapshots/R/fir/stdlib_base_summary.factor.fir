fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1286473096;
    st `summary.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1286473096(object, maxsum, `...`) {
  (reg object:*, reg maxsum:*, reg ddd:dots) -+> V { var object:*, var maxsum:*, reg maxsum_isMissing:L, reg maxsum_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg is_na:cls, reg r2:V, reg levels:cls, reg object3:*, reg object4:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg nas:*, reg nas1:V, reg any:cls, reg r7:V, reg c:L, reg maxsum1:*, reg maxsum2:V, reg r8:V, reg table:cls, reg object5:*, reg object6:V, reg p1:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg tbl:*, reg tbl1:V, reg c1:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg tbl2:*, reg tbl3:V, reg dimnames:cls, reg r17:V, reg c2:L, reg r19:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r20:V, reg l:*, reg names__:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg ll:*, reg ll1:V, reg length:cls, reg r24:V, reg maxsum3:*, reg maxsum4:V, reg r25:V, reg c3:L, reg maxsum5:*, reg maxsum6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg maxsum9:V, reg r27:V, reg ll2:*, reg ll3:V, reg length1:cls, reg r28:V, reg r29:V, reg sort_list:cls, reg tt:*, reg tt1:V, reg p2:p(V +), reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg tt2:*, reg tt3:V, reg c4:L, reg tt5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg o:*, reg o1:V, reg c5:L, reg tt7:V, reg o3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg tt9:V, reg dx5:V, reg drop:*, reg drop1:V, reg r34:V, reg __1:cls, reg r35:V, reg __2:cls, reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg tt10:*, reg tt11:V, reg c6:L, reg tt13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg o4:*, reg o5:V, reg c7:L, reg tt15:V, reg o7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg tt17:V, reg dx9:V, reg drop2:*, reg drop3:V, reg __3:cls, reg r39:V, reg __4:cls, reg r40:V, reg sum:cls, reg r41:V, reg c8:cls, reg r42:V, reg ana:*, reg ana1:V, reg c9:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r44:V, reg r45:V, reg tt18:*, reg tt19:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r46:V, reg r47:V, reg nas2:*, reg nas3:V, reg sum1:cls, reg r48:V, reg c10:cls, reg r49:V, reg tt20:*, reg tt21:V |
    mkenv;
    st object = object;
    maxsum_isMissing = missing.0(maxsum);
    if maxsum_isMissing then L0(100) else L0(maxsum);
  L0(maxsum_orDefault):
    st maxsum = maxsum_orDefault;
    st `...` = ddd;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L1(r1):
    st nas = r1;
    levels = ldf levels;
    check L25() else D2();
  L21():
    object1 = ld object;
    check L23() else D0();
  L22():
    r = dyn base(<sym object>);
    goto L1(r);
  D0():
    deopt 2 [object1];
  D2():
    deopt 8 [];
  L23():
    object2 = force? object1;
    checkMissing(object2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(object2);
    check L24() else D1();
  L25():
    p = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r4 = dyn levels(p);
    check L26() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r4];
  L24():
    goto L1(r2);
  L26():
    st ll = r4;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L2(r6):
    st ana = r6;
    c = `as.logical`(r6);
    if c then L31() else L3();
  L27():
    nas = ld nas;
    check L29() else D4();
  L28():
    r5 = dyn base1(<sym nas>);
    goto L2(r5);
  D4():
    deopt 14 [nas];
  L3():
    goto L4();
  L4():
    table = ldf table;
    check L34() else D7();
  L29():
    nas1 = force? nas;
    checkMissing(nas1);
    any = ldf any in base;
    r7 = dyn any(nas1);
    check L30() else D5();
  L31():
    maxsum1 = ld maxsum;
    check L32() else D6();
  D5():
    deopt 17 [r7];
  D6():
    deopt 19 [maxsum1];
  D7():
    deopt 27 [];
  L30():
    goto L2(r7);
  L32():
    maxsum2 = force? maxsum1;
    checkMissing(maxsum2);
    r8 = `-`(maxsum2, 1);
    st maxsum = r8;
    goto L4();
  L34():
    p1 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r11 = dyn table(p1);
    check L35() else D8();
  D8():
    deopt 29 [r11];
  L35():
    st tbl = r11;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L5(r13):
    st tt = r13;
    sym3 = ldf dimnames;
    base3 = ldf dimnames in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L36():
    tbl = ld tbl;
    check L38() else D9();
  L37():
    r12 = dyn base2(<sym tbl>);
    goto L5(r12);
  D9():
    deopt 33 [tbl];
  L6(r16):
    c2 = `is.object`(r16);
    if c2 then L44() else L45(r16);
  L38():
    tbl1 = force? tbl;
    checkMissing(tbl1);
    c1 = ldf c in base;
    r14 = dyn c1(tbl1);
    check L39() else D10();
  L40():
    tbl2 = ld tbl;
    check L42() else D11();
  L41():
    r15 = dyn base3(<sym tbl>);
    goto L6(r15);
  D10():
    deopt 36 [r14];
  D11():
    deopt 40 [tbl2];
  L7(dx1):
    l = ld tt;
    names__ = ldf `names<-`;
    check L47() else D13();
  L39():
    goto L5(r14);
  L42():
    tbl3 = force? tbl2;
    checkMissing(tbl3);
    dimnames = ldf dimnames in base;
    r17 = dyn dimnames(tbl3);
    check L43() else D12();
  L44():
    dr = tryDispatchBuiltin.1("[[", r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(r19):
    __ = ldf `[[` in base;
    r20 = dyn __(r19, 1);
    goto L7(r20);
  D12():
    deopt 43 [r17];
  D13():
    deopt 48 [dx1, l, dx1];
  L43():
    goto L6(r17);
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L47():
    r21 = dyn names__(l, NULL, dx1);
    check L48() else D14();
  D14():
    deopt 50 [dx1, r21];
  L48():
    st tt = r21;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L8(r23):
    maxsum3 = ld maxsum;
    check L53() else D17();
  L49():
    ll = ld ll;
    check L51() else D15();
  L50():
    r22 = dyn base4(<sym ll>);
    goto L8(r22);
  D15():
    deopt 54 [ll];
  D17():
    deopt 57 [r23, maxsum3];
  L51():
    ll1 = force? ll;
    checkMissing(ll1);
    length = ldf length in base;
    r24 = dyn length(ll1);
    check L52() else D16();
  L53():
    maxsum4 = force? maxsum3;
    checkMissing(maxsum4);
    r25 = `>`(r23, maxsum4);
    c3 = `as.logical`(r25);
    if c3 then L54() else L9();
  D16():
    deopt 57 [r24];
  L9():
    goto L17();
  L17():
    ana = ld ana;
    check L87() else D31();
  L52():
    goto L8(r24);
  L54():
    maxsum5 = ld maxsum;
    check L55() else D18();
  D18():
    deopt 60 [maxsum5];
  D31():
    deopt 105 [ana];
  L55():
    maxsum6 = force? maxsum5;
    checkMissing(maxsum6);
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L87():
    ana1 = force? ana;
    checkMissing(ana1);
    c9 = `as.logical`(ana1);
    if c9 then L88() else L18();
  L10(maxsum9, r27):
    r29 = `:`(maxsum9, r27);
    st drop = r29;
    sort_list = ldf `sort.list`;
    check L60() else D21();
  L18():
    tt20 = ld tt;
    check L98() else D36();
  L56():
    ll2 = ld ll;
    check L58() else D19();
  L57():
    r26 = dyn base5(<sym ll>);
    goto L10(maxsum6, r26);
  L88():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L89() else L90();
  D19():
    deopt 63 [maxsum6, ll2];
  D21():
    deopt 70 [];
  D36():
    deopt 120 [tt20];
  L19(r45):
    popenv;
    return r45;
  L58():
    ll3 = force? ll2;
    checkMissing(ll3);
    length1 = ldf length in base;
    r28 = dyn length1(ll3);
    check L59() else D20();
  L60():
    p2 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    r31 = dyn sort_list[, decreasing](p2, TRUE);
    check L61() else D22();
  L89():
    tt18 = ld tt;
    check L91() else D32();
  L90():
    r44 = dyn base8[, `NA's`](<sym tt>, <lang sum(nas)>);
    goto L19(r44);
  L98():
    tt21 = force? tt20;
    checkMissing(tt21);
    popenv;
    return tt21;
  D20():
    deopt 66 [maxsum6, r28];
  D22():
    deopt 74 [r31];
  D32():
    deopt 109 [tt18];
  L59():
    goto L10(maxsum6, r28);
  L61():
    st o = r31;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L91():
    tt19 = force? tt18;
    checkMissing(tt19);
    sym9 = ldf sum;
    base9 = ldf sum in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L92() else L93();
  L11(r33):
    st tt = r33;
    goto L17();
  L20(r47):
    c10 = ldf c in base;
    r49 = dyn c10(tt19, r47);
    check L96() else D35();
  L62():
    tt2 = ld tt;
    check L64() else D23();
  L63():
    r32 = dyn base6[, `(Other)`](<lang `[`(tt, `[`(o, `-`(drop)))>, <lang sum(`[`(tt, `[`(o, drop)))>);
    goto L11(r32);
  L92():
    nas2 = ld nas;
    check L94() else D33();
  L93():
    r46 = dyn base9(<sym nas>);
    goto L20(r46);
  D23():
    deopt 78 [tt2];
  D33():
    deopt 113 [nas2];
  D35():
    deopt 119 [r49];
  L64():
    tt3 = force? tt2;
    checkMissing(tt3);
    c4 = `is.object`(tt3);
    if c4 then L65() else L66(tt3);
  L94():
    nas3 = force? nas2;
    checkMissing(nas3);
    sum1 = ldf sum in base;
    r48 = dyn sum1(nas3);
    check L95() else D34();
  L96():
    goto L19(r49);
  D34():
    deopt 116 [r48];
  L12(dx3):
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L73() else L74();
  L65():
    dr2 = tryDispatchBuiltin.1("[", tt3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L67() else L66(dr2);
  L66(tt5):
    o = ld o;
    check L68() else D24();
  L95():
    goto L20(r48);
  D24():
    deopt 80 [tt5, o];
  L14(r38):
    c8 = ldf c in base;
    r42 = dyn c8(dx3, r38);
    check L85() else D30();
  L67():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L68():
    o1 = force? o;
    checkMissing(o1);
    c5 = `is.object`(o1);
    if c5 then L69() else L70(tt5, o1);
  L73():
    tt10 = ld tt;
    check L75() else D26();
  L74():
    r37 = dyn base7(<lang `[`(tt, `[`(o, drop))>);
    goto L14(r37);
  D26():
    deopt 89 [tt10];
  D30():
    deopt 101 [r42];
  L13(tt9, dx5):
    __2 = ldf `[` in base;
    r36 = dyn __2(tt9, dx5);
    goto L12(r36);
  L69():
    dr4 = tryDispatchBuiltin.1("[", o1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L71() else L70(tt5, dr4);
  L70(tt7, o3):
    drop = ld drop;
    check L72() else D25();
  L75():
    tt11 = force? tt10;
    checkMissing(tt11);
    c6 = `is.object`(tt11);
    if c6 then L76() else L77(tt11);
  L85():
    goto L11(r42);
  D25():
    deopt 82 [tt7, o3, drop];
  L15(dx7):
    sum = ldf sum in base;
    r41 = dyn sum(dx7);
    check L84() else D29();
  L71():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(tt5, dx4);
  L72():
    drop1 = force? drop;
    checkMissing(drop1);
    r34 = `-`(<missing>, drop1);
    __1 = ldf `[` in base;
    r35 = dyn __1(o3, r34);
    goto L13(tt7, r35);
  L76():
    dr6 = tryDispatchBuiltin.1("[", tt11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(dr6);
  L77(tt13):
    o4 = ld o;
    check L79() else D27();
  D27():
    deopt 91 [tt13, o4];
  D29():
    deopt 98 [r41];
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx6);
  L79():
    o5 = force? o4;
    checkMissing(o5);
    c7 = `is.object`(o5);
    if c7 then L80() else L81(tt13, o5);
  L84():
    goto L14(r41);
  L16(tt17, dx9):
    __4 = ldf `[` in base;
    r40 = dyn __4(tt17, dx9);
    goto L15(r40);
  L80():
    dr8 = tryDispatchBuiltin.1("[", o5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L82() else L81(tt13, dr8);
  L81(tt15, o7):
    drop2 = ld drop;
    check L83() else D28();
  D28():
    deopt 93 [tt15, o7, drop2];
  L82():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L16(tt13, dx8);
  L83():
    drop3 = force? drop2;
    __3 = ldf `[` in base;
    r39 = dyn __3(o7, drop3);
    goto L16(tt15, r39);
  }
}