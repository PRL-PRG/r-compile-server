fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1659586848;
    st `proj.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1659586848(object, onedf, `...`) {
  (reg object:*, reg onedf:*, reg ddd:dots) -+> V { var object:*, var onedf:*, reg onedf_isMissing:L, reg onedf_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg inherits:cls, reg r3:V, reg r4:V, reg c1:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg c3:V, reg c4:L, reg stop1:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg object9:*, reg object10:V, reg c5:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r14:V, reg c6:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg seq:cls, reg object13:*, reg object14:V, reg c7:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r15:V, reg p:p(V +), reg r17:V, reg __:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg nrow:cls, reg object17:*, reg object18:V, reg c8:L, reg object20:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r21:V, reg c9:L, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r22:V, reg p1:p(V +), reg r24:V, reg object21:*, reg object22:V, reg c10:L, reg r26:V, reg object24:V, reg dr14:V, reg dc7:L, reg dx18:V, reg r28:V, reg dx19:V, reg r29:V, reg r30:V, reg rep_int:cls, reg r31:V, reg c11:cls, reg r32:V, reg as_matrix:cls, reg qr_Q:cls, reg object25:*, reg object26:V, reg c12:L, reg object28:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r33:V, reg p2:p(V +), reg RB:*, reg RB1:V, reg p3:p(V +), reg r36:V, reg p4:p(V +), reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg object29:*, reg object30:V, reg c13:L, reg object32:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r41:V, reg c14:L, reg dx25:V, reg dr20:V, reg dc10:L, reg dx26:V, reg dx27:V, reg r42:V, reg dimnames:cls, reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg DN:*, reg DN1:V, reg c15:L, reg DN3:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg __1:cls, reg r46:V, reg DN4:*, reg DN5:V, reg c16:L, reg DN7:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg __2:cls, reg r47:V, reg c17:L, reg dx33:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg seq1:cls, reg ncol:cls, reg prj:*, reg prj1:V, reg p5:p(V +), reg r49:V, reg p6:p(V +), reg r51:V, reg __3:cls, reg r52:V, reg list:cls, reg r53:V, reg l:*, reg dimnames__:cls, reg r54:V, reg prj2:*, reg prj3:V |
    mkenv;
    st object = object;
    onedf_isMissing = missing.0(onedf);
    if onedf_isMissing then L0(TRUE) else L0(onedf);
  L0(onedf_orDefault):
    st onedf = onedf_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r1):
    r4 = `!`(r1);
    c1 = `as.logical`(r4);
    if c1 then L23() else L2();
  L15():
    object1 = ld object;
    check L17() else D0();
  L16():
    r = dyn base(<lang `$`(object, qr)>, "qr");
    goto L1(r);
  D0():
    deopt 2 [object1];
  L2():
    goto L3();
  L3():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L17():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L19() else L20(object2);
  L23():
    stop = ldf stop;
    check L24() else D2();
  D2():
    deopt 11 [];
  L4(r8):
    c4 = `as.logical`(r8);
    if c4 then L34() else L5();
  L18(dx1):
    inherits = ldf inherits in base;
    r3 = dyn inherits(dx1, "qr", FALSE);
    check L22() else D1();
  L19():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(object4):
    r2 = `$`(object4, <sym qr>);
    goto L18(r2);
  L24():
    r5 = dyn stop("argument does not include a 'qr' component");
    check L25() else D3();
  L27():
    object5 = ld object;
    check L29() else D4();
  L28():
    r7 = dyn base1(<lang `$`(object, effects)>);
    goto L4(r7);
  D1():
    deopt 8 [r3];
  D3():
    deopt 13 [r5];
  D4():
    deopt 17 [object5];
  L5():
    goto L6();
  L6():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    goto L1(r3);
  L25():
    goto L3();
  L29():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L31() else L32(object6);
  L34():
    stop1 = ldf stop;
    check L35() else D5();
  D5():
    deopt 22 [];
  L7(r13):
    st RB = r13;
    as_matrix = ldf `as.matrix`;
    check L61() else D15();
  L30(dx3):
    c3 = `==`(dx3, NULL);
    goto L4(c3);
  L31():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dr2);
  L32(object8):
    r9 = `$`(object8, <sym effects>);
    goto L30(r9);
  L35():
    r10 = dyn stop1("argument does not include an 'effects' component");
    check L36() else D6();
  L38():
    object9 = ld object;
    check L40() else D7();
  L39():
    r12 = dyn base2(<lang `[`(`$`(object, effects), seq(`$`(object, rank)))>, <lang rep.int(0.0, `-`(nrow(`$`(`$`(object, qr), qr)), `$`(object, rank)))>);
    goto L7(r12);
  D6():
    deopt 24 [r10];
  D7():
    deopt 29 [object9];
  D15():
    deopt 53 [];
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(dx2);
  L36():
    goto L6();
  L40():
    object10 = force? object9;
    checkMissing(object10);
    c5 = `is.object`(object10);
    if c5 then L42() else L43(object10);
  L61():
    p4 = prom<V +>{
      qr_Q = ldf `qr.Q`;
      p2 = prom<V +>{
        object25 = ld object;
        object26 = force? object25;
        checkMissing(object26);
        c12 = `is.object`(object26);
        if c12 then L1() else L2(object26);
      L0(dx21):
        return dx21;
      L1():
        dr16 = tryDispatchBuiltin.1("$", object26);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(object28):
        r33 = `$`(object28, <sym qr>);
        goto L0(r33);
      L3():
        dx20 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx20);
      };
      p3 = prom<V +>{
        RB = ld RB;
        RB1 = force? RB;
        checkMissing(RB1);
        return RB1;
      };
      r36 = dyn qr_Q[, Dvec](p2, p3);
      return r36;
    };
    r38 = dyn as_matrix(p4);
    check L62() else D16();
  D16():
    deopt 55 [r38];
  L41(dx5):
    c6 = `is.object`(dx5);
    if c6 then L45() else L46(dx5);
  L42():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(object12):
    r14 = `$`(object12, <sym effects>);
    goto L41(r14);
  L62():
    st prj = r38;
    sym4 = ldf dimnames;
    base4 = ldf dimnames in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L8(dx9):
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L10(r40):
    st DN = r40;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L75() else L76();
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L41(dx4);
  L45():
    dr6 = tryDispatchBuiltin.1("[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L47() else L46(dr6);
  L46(dx7):
    seq = ldf seq;
    check L48() else D8();
  L63():
    object29 = ld object;
    check L65() else D17();
  L64():
    r39 = dyn base4(<lang `$`(`$`(object, qr), qr)>);
    goto L10(r39);
  D8():
    deopt 33 [dx7];
  D17():
    deopt 59 [object29];
  L9(r20):
    c11 = ldf c in base;
    r32 = dyn c11(dx9, r20);
    check L60() else D14();
  L11(r45):
    l = ld prj;
    dimnames__ = ldf `dimnames<-`;
    check L91() else D24();
  L47():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx8);
  L48():
    p = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c7 = `is.object`(object14);
      if c7 then L1() else L2(object14);
    L0(dx11):
      return dx11;
    L1():
      dr8 = tryDispatchBuiltin.1("$", object14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object16):
      r15 = `$`(object16, <sym rank>);
      goto L0(r15);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    r17 = dyn seq(p);
    check L49() else D9();
  L50():
    nrow = ldf nrow;
    check L52() else D10();
  L51():
    r19 = dyn base3(0.0, <lang `-`(nrow(`$`(`$`(object, qr), qr)), `$`(object, rank))>);
    goto L9(r19);
  L65():
    object30 = force? object29;
    checkMissing(object30);
    c13 = `is.object`(object30);
    if c13 then L67() else L68(object30);
  L75():
    DN = ld DN;
    check L77() else D19();
  L76():
    r44 = dyn base5(<lang `[[`(DN, 1)>, <lang `[`(`[[`(DN, 2), seq(ncol(prj)))>);
    goto L11(r44);
  D9():
    deopt 35 [dx7, r17];
  D10():
    deopt 41 [];
  D14():
    deopt 50 [r32];
  D19():
    deopt 68 [DN];
  D24():
    deopt 86 [r45, l, r45];
  L49():
    __ = ldf `[` in base;
    r18 = dyn __(dx7, r17);
    goto L8(r18);
  L52():
    p1 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c8 = `is.object`(object18);
      if c8 then L1() else L2(object18);
    L0(dx13):
      c9 = `is.object`(dx13);
      if c9 then L5() else L6(dx13);
    L1():
      dr10 = tryDispatchBuiltin.1("$", object18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(object20):
      r21 = `$`(object20, <sym qr>);
      goto L0(r21);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    L4(dx17):
      return dx17;
    L5():
      dr12 = tryDispatchBuiltin.1("$", dx13);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx15):
      r22 = `$`(dx15, <sym qr>);
      goto L4(r22);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L4(dx16);
    };
    r24 = dyn nrow(p1);
    check L53() else D11();
  L60():
    goto L7(r32);
  L66(dx23):
    c14 = `is.object`(dx23);
    if c14 then L71() else L72(dx23);
  L67():
    dr18 = tryDispatchBuiltin.1("$", object30);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L69() else L68(dr18);
  L68(object32):
    r41 = `$`(object32, <sym qr>);
    goto L66(r41);
  L77():
    DN1 = force? DN;
    checkMissing(DN1);
    c15 = `is.object`(DN1);
    if c15 then L78() else L79(DN1);
  L91():
    r54 = dyn dimnames__(l, NULL, r45);
    check L92() else D25();
  D11():
    deopt 43 [r24];
  D25():
    deopt 88 [r45, r54];
  L12(dx29):
    DN4 = ld DN;
    check L81() else D20();
  L53():
    object21 = ld object;
    check L54() else D12();
  L69():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L66(dx22);
  L70(dx27):
    dimnames = ldf dimnames in base;
    r43 = dyn dimnames(dx27);
    check L74() else D18();
  L71():
    dr20 = tryDispatchBuiltin.1("$", dx23);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L73() else L72(dr20);
  L72(dx25):
    r42 = `$`(dx25, <sym qr>);
    goto L70(r42);
  L78():
    dr22 = tryDispatchBuiltin.1("[[", DN1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L80() else L79(dr22);
  L79(DN3):
    __1 = ldf `[[` in base;
    r46 = dyn __1(DN3, 1);
    goto L12(r46);
  L92():
    st prj = r54;
    prj2 = ld prj;
    check L93() else D26();
  D12():
    deopt 43 [r24, object21];
  D18():
    deopt 64 [r43];
  D20():
    deopt 73 [DN4];
  D26():
    deopt 90 [prj2];
  L54():
    object22 = force? object21;
    checkMissing(object22);
    c10 = `is.object`(object22);
    if c10 then L56() else L57(r24, object22);
  L73():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L70(dx26);
  L74():
    goto L10(r43);
  L80():
    dx28 = getTryDispatchBuiltinValue(dr22);
    goto L12(dx28);
  L81():
    DN5 = force? DN4;
    checkMissing(DN5);
    c16 = `is.object`(DN5);
    if c16 then L82() else L83(DN5);
  L93():
    prj3 = force? prj2;
    checkMissing(prj3);
    popenv;
    return prj3;
  L13(dx31):
    c17 = `is.object`(dx31);
    if c17 then L85() else L86(dx31);
  L55(r28, dx19):
    r30 = `-`(r28, dx19);
    rep_int = ldf `rep.int` in base;
    r31 = dyn rep_int(0.0, r30);
    check L59() else D13();
  L56():
    dr14 = tryDispatchBuiltin.1("$", object22);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L58() else L57(r24, dr14);
  L57(r26, object24):
    r29 = `$`(object24, <sym rank>);
    goto L55(r26, r29);
  L82():
    dr24 = tryDispatchBuiltin.1("[[", DN5);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L84() else L83(dr24);
  L83(DN7):
    __2 = ldf `[[` in base;
    r47 = dyn __2(DN7, 2);
    goto L13(r47);
  D13():
    deopt 48 [r31];
  L14(dx35):
    list = ldf list in base;
    r53 = dyn list(dx29, dx35);
    check L90() else D23();
  L58():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L55(r24, dx18);
  L59():
    goto L9(r31);
  L84():
    dx30 = getTryDispatchBuiltinValue(dr24);
    goto L13(dx30);
  L85():
    dr26 = tryDispatchBuiltin.1("[", dx31);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L87() else L86(dr26);
  L86(dx33):
    seq1 = ldf seq;
    check L88() else D21();
  D21():
    deopt 79 [dx33];
  D23():
    deopt 84 [r53];
  L87():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L14(dx34);
  L88():
    p6 = prom<V +>{
      ncol = ldf ncol;
      p5 = prom<V +>{
        prj = ld prj;
        prj1 = force? prj;
        checkMissing(prj1);
        return prj1;
      };
      r49 = dyn ncol(p5);
      return r49;
    };
    r51 = dyn seq1(p6);
    check L89() else D22();
  L90():
    goto L11(r53);
  D22():
    deopt 81 [dx33, r51];
  L89():
    __3 = ldf `[` in base;
    r52 = dyn __3(dx33, r51);
    goto L14(r52);
  }
}