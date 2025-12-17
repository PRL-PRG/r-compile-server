fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3569397244;
    st check_so_symbols = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3569397244(so) {
  (reg so:*) -+> V { var so:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg system_ABI:*, reg system_ABI1:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg read_symbols_from_object_file:cls, reg so1:*, reg so2:V, reg p:p(V +), reg r7:V, reg tab:*, reg tab1:V, reg c1:L, reg tab3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg tab4:*, reg tab5:V, reg c2:L, reg tab8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg tab11:V, reg dx3:V, reg __:cls, reg r8:V, reg r9:V, reg __1:cls, reg r10:V, reg tab12:*, reg tab13:V, reg c3:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r11:V, reg system_ABI2:*, reg system_ABI3:V, reg c4:L, reg system_ABI5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg so_symbol_names_handlers_db:*, reg so_symbol_names_handlers_db1:V, reg c5:L, reg so_symbol_names_handlers_db3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sys:*, reg sys1:V, reg __4:cls, reg r15:V, reg c6:V, reg r16:V, reg c7:L, reg snh:cls, reg nms:*, reg nms1:V, reg p1:p(V +), reg r18:V, reg _in_:cls, reg so_symbol_names_table:*, reg so_symbol_names_table1:V, reg c8:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r20:V, reg p2:p(V +), reg nms2:*, reg nms3:V, reg p3:p(V +), reg r23:V, reg so_symbol_names_table4:*, reg so_symbol_names_table5:V, reg c9:L, reg so_symbol_names_table7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ind:*, reg ind1:V, reg __6:cls, reg r24:V, reg so3:*, reg so4:V, reg l:*, reg attr__:cls, reg r25:V, reg sub:cls, reg tab16:*, reg tab17:V, reg p4:p(V +), reg r27:V, reg intersect:cls, reg tab18:*, reg tab19:V, reg p5:p(V +), reg nonAPI:*, reg nonAPI1:V, reg p6:p(V +), reg r30:V, reg _in_1:cls, reg tab2a:*, reg tab2a1:V, reg p7:p(V +), reg r32:V, reg c10:L, reg setdiff:cls, reg tab2a2:*, reg tab2a3:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg c11:cls, reg r36:V, reg p9:p(V +), reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg tab2a4:*, reg tab2a5:V, reg length1:cls, reg r42:V, reg c12:L, reg tab2a6:*, reg tab2a7:V, reg l1:*, reg attr__1:cls, reg r43:V, reg setdiff1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg c13:cls, reg r46:V, reg p10:p(V +), reg tab20:*, reg tab21:V, reg p11:p(V +), reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg tab2b:*, reg tab2b1:V, reg length2:cls, reg r52:V, reg c14:L, reg tab2b2:*, reg tab2b3:V, reg l2:*, reg attr__2:cls, reg r53:V, reg l3:*, reg class__:cls, reg r54:V, reg tab22:*, reg tab23:V |
    mkenv;
    st so = so;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L24() else L1();
  L20():
    system_ABI = ld system_ABI;
    check L22() else D0();
  L21():
    r = dyn base(<sym system_ABI>);
    goto L0(r);
  D0():
    deopt 2 [system_ABI];
  L1():
    read_symbols_from_object_file = ldf read_symbols_from_object_file;
    check L27() else D2();
  L22():
    system_ABI1 = force? system_ABI;
    checkMissing(system_ABI1);
    length = ldf length in base;
    r2 = dyn length(system_ABI1);
    check L23() else D1();
  L24():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [];
  L23():
    goto L0(r2);
  L27():
    p = prom<V +>{
      so1 = ld so;
      so2 = force? so1;
      checkMissing(so2);
      return so2;
    };
    r7 = dyn read_symbols_from_object_file(p);
    check L28() else D3();
  D3():
    deopt 15 [r7];
  L28():
    st tab = r7;
    tab = ld tab;
    check L29() else D4();
  D4():
    deopt 17 [tab];
  L29():
    tab1 = force? tab;
    checkMissing(tab1);
    c1 = `is.object`(tab1);
    if c1 then L30() else L31(tab1);
  L3(dx1):
    st tab2 = dx1;
    tab12 = ld tab;
    check L37() else D6();
  L30():
    dr = tryDispatchBuiltin.1("[", tab1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(tab3):
    tab4 = ld tab;
    check L33() else D5();
  D5():
    deopt 19 [tab3, tab4];
  D6():
    deopt 30 [tab12];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L33():
    tab5 = force? tab4;
    checkMissing(tab5);
    c2 = `is.object`(tab5);
    if c2 then L34() else L35(tab3);
  L37():
    tab13 = force? tab12;
    checkMissing(tab13);
    c3 = `is.object`(tab13);
    if c3 then L38() else L39();
  L4(tab11, dx3):
    r9 = `==`(dx3, "U");
    __1 = ldf `[` in base;
    r10 = dyn __1(tab11, r9, "name");
    goto L3(r10);
  L5(dx5):
    st nms = dx5;
    system_ABI2 = ld system_ABI;
    check L41() else D7();
  L34():
    dr2 = tryDispatchBuiltin.1("[", tab5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(tab3);
  L35(tab8):
    __ = ldf `[` in base;
    r8 = dyn __(tab5, <missing>, "type");
    goto L4(tab8, r8);
  L38():
    dr4 = tryDispatchBuiltin.1("[", tab13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L40() else L39();
  L39():
    __2 = ldf `[` in base;
    r11 = dyn __2(tab13, <missing>, "name");
    goto L5(r11);
  D7():
    deopt 37 [system_ABI2];
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(tab3, dx2);
  L40():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L41():
    system_ABI3 = force? system_ABI2;
    checkMissing(system_ABI3);
    c4 = `is.object`(system_ABI3);
    if c4 then L42() else L43(system_ABI3);
  L6(dx7):
    st sys = dx7;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  L42():
    dr6 = tryDispatchBuiltin.1("[", system_ABI3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L44() else L43(dr6);
  L43(system_ABI5):
    __3 = ldf `[` in base;
    r12 = dyn __3(system_ABI5, "system");
    goto L6(r12);
  L7(r14):
    r16 = `!`(r14);
    c7 = `as.logical`(r16);
    if c7 then L52() else L9();
  L44():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx6);
  L45():
    so_symbol_names_handlers_db = ld so_symbol_names_handlers_db;
    check L47() else D8();
  L46():
    r13 = dyn base1(<lang `<-`(snh, `[[`(so_symbol_names_handlers_db, sys))>);
    goto L7(r13);
  D8():
    deopt 44 [so_symbol_names_handlers_db];
  L9():
    goto L10();
  L10():
    _in_ = ldf `%in%`;
    check L56() else D12();
  L47():
    so_symbol_names_handlers_db1 = force? so_symbol_names_handlers_db;
    checkMissing(so_symbol_names_handlers_db1);
    c5 = `is.object`(so_symbol_names_handlers_db1);
    if c5 then L48() else L49(so_symbol_names_handlers_db1);
  L52():
    snh = ldf snh;
    check L53() else D10();
  D10():
    deopt 53 [];
  D12():
    deopt 60 [];
  L8(dx9):
    st snh = dx9;
    c6 = `==`(dx9, NULL);
    goto L7(c6);
  L48():
    dr8 = tryDispatchBuiltin.1("[[", so_symbol_names_handlers_db1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L50() else L49(dr8);
  L49(so_symbol_names_handlers_db3):
    sys = ld sys;
    check L51() else D9();
  L53():
    p1 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r18 = dyn snh(p1);
    check L54() else D11();
  L56():
    p2 = prom<V +>{
      so_symbol_names_table = ld so_symbol_names_table;
      so_symbol_names_table1 = force? so_symbol_names_table;
      checkMissing(so_symbol_names_table1);
      c8 = `is.object`(so_symbol_names_table1);
      if c8 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", so_symbol_names_table1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __5 = ldf `[` in base;
      r20 = dyn __5(so_symbol_names_table1, <missing>, "osname");
      goto L0(r20);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p3 = prom<V +>{
      nms2 = ld nms;
      nms3 = force? nms2;
      checkMissing(nms3);
      return nms3;
    };
    r23 = dyn _in_(p2, p3);
    check L57() else D13();
  D9():
    deopt 46 [so_symbol_names_handlers_db3, sys];
  D11():
    deopt 55 [r18];
  D13():
    deopt 63 [r23];
  L50():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L8(dx8);
  L51():
    sys1 = force? sys;
    __4 = ldf `[[` in base;
    r15 = dyn __4(so_symbol_names_handlers_db3, sys1);
    goto L8(r15);
  L54():
    st nms = r18;
    goto L10();
  L57():
    st ind = r23;
    so_symbol_names_table4 = ld so_symbol_names_table;
    check L58() else D14();
  D14():
    deopt 65 [so_symbol_names_table4];
  L58():
    so_symbol_names_table5 = force? so_symbol_names_table4;
    checkMissing(so_symbol_names_table5);
    c9 = `is.object`(so_symbol_names_table5);
    if c9 then L59() else L60(so_symbol_names_table5);
  L11(dx13):
    st tab = dx13;
    so3 = ld so;
    check L63() else D16();
  L59():
    dr12 = tryDispatchBuiltin.1("[", so_symbol_names_table5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L61() else L60(dr12);
  L60(so_symbol_names_table7):
    ind = ld ind;
    check L62() else D15();
  D15():
    deopt 67 [so_symbol_names_table7, ind];
  D16():
    deopt 75 [so3];
  L61():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L11(dx12);
  L62():
    ind1 = force? ind;
    __6 = ldf `[` in base;
    r24 = dyn __6(so_symbol_names_table5, ind1, <missing>, FALSE);
    goto L11(r24);
  L63():
    so4 = force? so3;
    checkMissing(so4);
    l = ld tab;
    attr__ = ldf `attr<-`;
    check L64() else D17();
  D17():
    deopt 78 [so4, l, so4];
  L64():
    r25 = dyn attr__(l, NULL, "file", so4);
    check L65() else D18();
  D18():
    deopt 81 [so4, r25];
  L65():
    st tab = r25;
    sub = ldf sub;
    check L66() else D19();
  D19():
    deopt 84 [];
  L66():
    p4 = prom<V +>{
      tab16 = ld tab2;
      tab17 = force? tab16;
      checkMissing(tab17);
      return tab17;
    };
    r27 = dyn sub("^_", "", p4);
    check L67() else D20();
  D20():
    deopt 88 [r27];
  L67():
    st tab2 = r27;
    intersect = ldf intersect;
    check L68() else D21();
  D21():
    deopt 91 [];
  L68():
    p5 = prom<V +>{
      tab18 = ld tab2;
      tab19 = force? tab18;
      checkMissing(tab19);
      return tab19;
    };
    p6 = prom<V +>{
      nonAPI = ld nonAPI;
      nonAPI1 = force? nonAPI;
      checkMissing(nonAPI1);
      return nonAPI1;
    };
    r30 = dyn intersect(p5, p6);
    check L69() else D22();
  D22():
    deopt 94 [r30];
  L69():
    st tab2a = r30;
    _in_1 = ldf `%in%`;
    check L70() else D23();
  D23():
    deopt 97 [];
  L70():
    p7 = prom<V +>{
      tab2a = ld tab2a;
      tab2a1 = force? tab2a;
      checkMissing(tab2a1);
      return tab2a1;
    };
    r32 = dyn _in_1("removeInputHandler", p7);
    check L71() else D24();
  D24():
    deopt 100 [r32];
  L71():
    c10 = `as.logical`(r32);
    if c10 then L72() else L12();
  L12():
    goto L13();
  L13():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L76() else L77();
  L72():
    setdiff = ldf setdiff;
    check L73() else D25();
  D25():
    deopt 102 [];
  L14(r41):
    c12 = `as.logical`(r41);
    if c12 then L80() else L15();
  L73():
    p8 = prom<V +>{
      tab2a2 = ld tab2a;
      tab2a3 = force? tab2a2;
      checkMissing(tab2a3);
      return tab2a3;
    };
    p9 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      c11 = ldf c in base;
      r36 = dyn c11("R_InputHandlers", "addInputHandler", "removeInputHandler");
      goto L0(r36);
    L2():
      r34 = dyn base2("R_InputHandlers", "addInputHandler", "removeInputHandler");
      goto L0(r34);
    };
    r38 = dyn setdiff(p8, p9);
    check L74() else D26();
  L76():
    tab2a4 = ld tab2a;
    check L78() else D27();
  L77():
    r40 = dyn base3(<sym tab2a>);
    goto L14(r40);
  D26():
    deopt 105 [r38];
  D27():
    deopt 111 [tab2a4];
  L15():
    goto L16();
  L16():
    setdiff1 = ldf setdiff;
    check L85() else D32();
  L74():
    st tab2a = r38;
    goto L13();
  L78():
    tab2a5 = force? tab2a4;
    checkMissing(tab2a5);
    length1 = ldf length in base;
    r42 = dyn length1(tab2a5);
    check L79() else D28();
  L80():
    tab2a6 = ld tab2a;
    check L81() else D29();
  D28():
    deopt 114 [r42];
  D29():
    deopt 115 [tab2a6];
  D32():
    deopt 126 [];
  L79():
    goto L14(r42);
  L81():
    tab2a7 = force? tab2a6;
    checkMissing(tab2a7);
    l1 = ld tab;
    attr__1 = ldf `attr<-`;
    check L82() else D30();
  L85():
    p10 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      c13 = ldf c in base;
      r46 = dyn c13("R_registerRoutines", "R_useDynamicSymbols");
      goto L0(r46);
    L2():
      r44 = dyn base4("R_registerRoutines", "R_useDynamicSymbols");
      goto L0(r44);
    };
    p11 = prom<V +>{
      tab20 = ld tab2;
      tab21 = force? tab20;
      checkMissing(tab21);
      return tab21;
    };
    r49 = dyn setdiff1(p10, p11);
    check L86() else D33();
  D30():
    deopt 118 [tab2a7, l1, tab2a7];
  D33():
    deopt 129 [r49];
  L82():
    r43 = dyn attr__1(l1, NULL, "nonAPI", tab2a7);
    check L83() else D31();
  L86():
    st tab2b = r49;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L87() else L88();
  D31():
    deopt 121 [tab2a7, r43];
  L17(r51):
    c14 = `as.logical`(r51);
    if c14 then L91() else L18();
  L83():
    st tab = r43;
    goto L16();
  L87():
    tab2b = ld tab2b;
    check L89() else D34();
  L88():
    r50 = dyn base5(<sym tab2b>);
    goto L17(r50);
  D34():
    deopt 133 [tab2b];
  L18():
    goto L19();
  L19():
    l3 = ld tab;
    class__ = ldf `class<-`;
    check L96() else D39();
  L89():
    tab2b1 = force? tab2b;
    checkMissing(tab2b1);
    length2 = ldf length in base;
    r52 = dyn length2(tab2b1);
    check L90() else D35();
  L91():
    tab2b2 = ld tab2b;
    check L92() else D36();
  D35():
    deopt 136 [r52];
  D36():
    deopt 137 [tab2b2];
  D39():
    deopt 150 ["check_so_symbols", l3, "check_so_symbols"];
  L90():
    goto L17(r52);
  L92():
    tab2b3 = force? tab2b2;
    checkMissing(tab2b3);
    l2 = ld tab;
    attr__2 = ldf `attr<-`;
    check L93() else D37();
  L96():
    r54 = dyn class__(l3, NULL, "check_so_symbols");
    check L97() else D40();
  D37():
    deopt 140 [tab2b3, l2, tab2b3];
  D40():
    deopt 152 ["check_so_symbols", r54];
  L93():
    r53 = dyn attr__2(l2, NULL, "RegSym", tab2b3);
    check L94() else D38();
  L97():
    st tab = r54;
    tab22 = ld tab;
    check L98() else D41();
  D38():
    deopt 143 [tab2b3, r53];
  D41():
    deopt 154 [tab22];
  L94():
    st tab = r53;
    goto L19();
  L98():
    tab23 = force? tab22;
    checkMissing(tab23);
    popenv;
    return tab23;
  }
}