fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2786829008;
    st `predict.mlm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2786829008(object, newdata, `se.fit`, `na.action`, `...`) {
  (reg object:*, reg newdata:*, reg se_fit:*, reg na_action:*, reg ddd:dots) -+> V { var object:*, var newdata:*, var `se.fit`:*, reg se_fit_isMissing:L, reg se_fit_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_pass:*, reg na_pass1:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg object1:*, reg object2:V, reg c1:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg se_fit1:*, reg se_fit2:V, reg c2:L, reg stop:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg missing1:cls, reg r11:V, reg c3:L, reg model_matrix:cls, reg object5:*, reg object6:V, reg p1:p(V +), reg r13:V, reg object7:*, reg object8:V, reg c4:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r14:V, reg terms:cls, reg object11:*, reg object12:V, reg p2:p(V +), reg r16:V, reg delete_response:cls, reg tt:*, reg tt1:V, reg p3:p(V +), reg r18:V, reg model_frame:cls, reg Terms:*, reg Terms1:V, reg p4:p(V +), reg newdata1:*, reg newdata2:V, reg p5:p(V +), reg na_action1:*, reg na_action2:V, reg p6:p(V +), reg object13:*, reg object14:V, reg c5:L, reg object16:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r22:V, reg p7:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg Terms2:*, reg Terms3:V, reg attr:cls, reg r29:V, reg c6:V, reg r30:V, reg c7:L, reg _checkMFClasses:cls, reg cl:*, reg cl1:V, reg p8:p(V +), reg m:*, reg m1:V, reg p9:p(V +), reg r33:V, reg model_matrix1:cls, reg Terms4:*, reg Terms5:V, reg p10:p(V +), reg m2:*, reg m3:V, reg p11:p(V +), reg object17:*, reg object18:V, reg c8:L, reg object20:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r37:V, reg p12:p(V +), reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg tt2:*, reg tt3:V, reg attr1:cls, reg r44:V, reg c9:V, reg r45:V, reg c10:L, reg eval:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg tt4:*, reg tt5:V, reg attr2:cls, reg r48:V, reg c11:L, reg r50:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg off_num:*, reg off_num1:V, reg r51:V, reg __:cls, reg r52:V, reg p13:p(V +), reg newdata3:*, reg newdata4:V, reg p14:p(V +), reg r55:V, reg r56:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg object21:*, reg object22:V, reg c12:L, reg object24:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r59:V, reg c13:V, reg r60:V, reg c14:L, reg eval1:cls, reg object25:*, reg object26:V, reg c15:L, reg object28:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r61:V, reg c16:L, reg dx16:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg r62:V, reg p15:p(V +), reg newdata5:*, reg newdata6:V, reg p16:p(V +), reg r65:V, reg qr_lm:cls, reg object29:*, reg object30:V, reg p17:p(V +), reg r67:V, reg c17:L, reg r69:V, reg dr16:V, reg dc8:L, reg dx19:V, reg dx20:V, reg r70:V, reg c18:L, reg dx22:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg seq:cls, reg object31:*, reg object32:V, reg c19:L, reg object34:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg r71:V, reg p18:p(V +), reg r73:V, reg __1:cls, reg r74:V, reg X:*, reg X1:V, reg c20:L, reg X3:V, reg dr22:V, reg dc11:L, reg dx27:V, reg dx28:V, reg piv:*, reg piv1:V, reg __2:cls, reg r75:V, reg object35:*, reg object36:V, reg c21:L, reg object38:V, reg dr24:V, reg dc12:L, reg dx29:V, reg dx30:V, reg r76:V, reg c22:L, reg dx32:V, reg dr26:V, reg dc13:L, reg dx33:V, reg dx34:V, reg piv2:*, reg piv3:V, reg __3:cls, reg r77:V, reg ___:cls, reg r78:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r79:V, reg r80:V, reg offset:*, reg offset1:V, reg c23:V, reg r81:V, reg c24:L, reg pred:*, reg pred1:V, reg offset2:*, reg offset3:V, reg r82:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r84:V, reg r85:V, reg object39:*, reg object40:V, reg inherits:cls, reg r86:V, reg c25:L, reg pred2:*, reg pred3:V, reg pred4:*, reg pred5:V, reg c26:L, reg dr28:V, reg dc14:L, reg dx35:V, reg dx36:V, reg __4:cls, reg r87:V |
    mkenv;
    st object = object;
    st newdata = newdata;
    se_fit_isMissing = missing.0(se_fit);
    if se_fit_isMissing then L0(FALSE) else L0(se_fit);
  L0(se_fit_orDefault):
    st `se.fit` = se_fit_orDefault;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L1() else L2(na_action);
  L1():
    p = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    goto L2(p);
  L2(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L3(r2):
    c = `as.logical`(r2);
    if c then L32() else L4();
  L30():
    missing = ldf missing in base;
    r3 = dyn missing(<sym newdata>);
    goto L3(r3);
  L31():
    r1 = dyn base(<sym newdata>);
    goto L3(r1);
  L4():
    se_fit1 = ld `se.fit`;
    check L40() else D1();
  L32():
    object1 = ld object;
    check L33() else D0();
  D0():
    deopt 3 [object1];
  D1():
    deopt 9 [se_fit1];
  L33():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.object`(object2);
    if c1 then L35() else L36(object2);
  L40():
    se_fit2 = force? se_fit1;
    checkMissing(se_fit2);
    c2 = `as.logical`(se_fit2);
    if c2 then L41() else L6();
  L6():
    goto L7();
  L7():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L45() else L46();
  L34(dx1):
    popenv;
    return dx1;
  L35():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(object4):
    r4 = `$`(object4, <sym fitted.values>);
    goto L34(r4);
  L41():
    stop = ldf stop;
    check L42() else D2();
  D2():
    deopt 12 [];
  L8(r10):
    c3 = `as.logical`(r10);
    if c3 then L47() else L9();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L34(dx);
  L42():
    r7 = dyn stop("the 'se.fit' argument is not yet implemented for \"mlm\" objects");
    check L43() else D3();
  L45():
    missing1 = ldf missing in base;
    r11 = dyn missing1(<sym newdata>);
    goto L8(r11);
  L46():
    r9 = dyn base1(<sym newdata>);
    goto L8(r9);
  D3():
    deopt 14 [r7];
  L9():
    terms = ldf terms;
    check L56() else D7();
  L10():
    qr_lm = ldf `qr.lm`;
    check L95() else D26();
  L43():
    goto L7();
  L47():
    model_matrix = ldf `model.matrix`;
    check L48() else D4();
  D4():
    deopt 21 [];
  D7():
    deopt 30 [];
  D26():
    deopt 106 [];
  L48():
    p1 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r13 = dyn model_matrix(p1);
    check L49() else D5();
  L56():
    p2 = prom<V +>{
      object11 = ld object;
      object12 = force? object11;
      checkMissing(object12);
      return object12;
    };
    r16 = dyn terms(p2);
    check L57() else D8();
  L95():
    p17 = prom<V +>{
      object29 = ld object;
      object30 = force? object29;
      checkMissing(object30);
      return object30;
    };
    r67 = dyn qr_lm(p17);
    check L96() else D27();
  D5():
    deopt 23 [r13];
  D8():
    deopt 32 [r16];
  D27():
    deopt 108 [r67];
  L49():
    st X = r13;
    object7 = ld object;
    check L50() else D6();
  L57():
    st tt = r16;
    delete_response = ldf `delete.response`;
    check L58() else D9();
  L96():
    c17 = `is.object`(r67);
    if c17 then L98() else L99(r67);
  D6():
    deopt 25 [object7];
  D9():
    deopt 35 [];
  L50():
    object8 = force? object7;
    checkMissing(object8);
    c4 = `is.object`(object8);
    if c4 then L52() else L53(object8);
  L58():
    p3 = prom<V +>{
      tt = ld tt;
      tt1 = force? tt;
      checkMissing(tt1);
      return tt1;
    };
    r18 = dyn delete_response(p3);
    check L59() else D10();
  L97(dx20):
    c18 = `is.object`(dx20);
    if c18 then L101() else L102(dx20);
  L98():
    dr16 = tryDispatchBuiltin.1("$", r67);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L100() else L99(dr16);
  L99(r69):
    r70 = `$`(r69, <sym pivot>);
    goto L97(r70);
  D10():
    deopt 37 [r18];
  L21(dx24):
    st piv = dx24;
    X = ld X;
    check L106() else D30();
  L51(dx3):
    st offset = dx3;
    goto L10();
  L52():
    dr2 = tryDispatchBuiltin.1("$", object8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(object10):
    r14 = `$`(object10, <sym offset>);
    goto L51(r14);
  L59():
    st Terms = r18;
    model_frame = ldf `model.frame`;
    check L60() else D11();
  L100():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L97(dx19);
  L101():
    dr18 = tryDispatchBuiltin.1("[", dx20);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L103() else L102(dr18);
  L102(dx22):
    seq = ldf seq;
    check L104() else D28();
  D11():
    deopt 40 [];
  D28():
    deopt 111 [dx22];
  D30():
    deopt 117 [X];
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L51(dx2);
  L60():
    p4 = prom<V +>{
      Terms = ld Terms;
      Terms1 = force? Terms;
      checkMissing(Terms1);
      return Terms1;
    };
    p5 = prom<V +>{
      newdata1 = ld newdata;
      newdata2 = force? newdata1;
      checkMissing(newdata2);
      return newdata2;
    };
    p6 = prom<V +>{
      na_action1 = ld `na.action`;
      na_action2 = force? na_action1;
      checkMissing(na_action2);
      return na_action2;
    };
    p7 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c5 = `is.object`(object14);
      if c5 then L1() else L2(object14);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object16):
      r22 = `$`(object16, <sym xlevels>);
      goto L0(r22);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    r24 = dyn model_frame[, , `na.action`, xlev](p4, p5, p6, p7);
    check L61() else D12();
  L103():
    dx23 = getTryDispatchBuiltinValue(dr18);
    goto L21(dx23);
  L104():
    p18 = prom<V +>{
      object31 = ld object;
      object32 = force? object31;
      checkMissing(object32);
      c19 = `is.object`(object32);
      if c19 then L1() else L2(object32);
    L0(dx26):
      return dx26;
    L1():
      dr20 = tryDispatchBuiltin.1("$", object32);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(object34):
      r71 = `$`(object34, <sym rank>);
      goto L0(r71);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx25);
    };
    r73 = dyn seq(p18);
    check L105() else D29();
  L106():
    X1 = force? X;
    checkMissing(X1);
    c20 = `is.object`(X1);
    if c20 then L107() else L108(X1);
  D12():
    deopt 47 [r24];
  D29():
    deopt 113 [dx22, r73];
  L22(dx28):
    object35 = ld object;
    check L111() else D32();
  L61():
    st m = r24;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L62() else L63();
  L105():
    __1 = ldf `[` in base;
    r74 = dyn __1(dx22, r73);
    goto L21(r74);
  L107():
    dr22 = tryDispatchBuiltin.1("[", X1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L109() else L108(dr22);
  L108(X3):
    piv = ld piv;
    check L110() else D31();
  D31():
    deopt 120 [X3, piv];
  D32():
    deopt 126 [object35];
  L11(r26):
    r30 = `!`(r26);
    c7 = `as.logical`(r30);
    if c7 then L68() else L13();
  L62():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  L63():
    r25 = dyn base2(<lang `<-`(cl, attr(Terms, "dataClasses"))>);
    goto L11(r25);
  L109():
    dx27 = getTryDispatchBuiltinValue(dr22);
    goto L22(dx27);
  L110():
    piv1 = force? piv;
    __2 = ldf `[` in base;
    r75 = dyn __2(X1, <missing>, piv1, FALSE);
    goto L22(r75);
  L111():
    object36 = force? object35;
    checkMissing(object36);
    c21 = `is.object`(object36);
    if c21 then L113() else L114(object36);
  L12(r28):
    st cl = r28;
    c6 = `==`(r28, NULL);
    goto L11(c6);
  L13():
    goto L14();
  L14():
    model_matrix1 = ldf `model.matrix`;
    check L72() else D17();
  L64():
    Terms2 = ld Terms;
    check L66() else D13();
  L65():
    r27 = dyn base3(<sym Terms>, "dataClasses");
    goto L12(r27);
  L68():
    _checkMFClasses = ldf `.checkMFClasses`;
    check L69() else D15();
  L112(dx30):
    c22 = `is.object`(dx30);
    if c22 then L116() else L117(dx30);
  L113():
    dr24 = tryDispatchBuiltin.1("$", object36);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L115() else L114(dr24);
  L114(object38):
    r76 = `$`(object38, <sym coefficients>);
    goto L112(r76);
  D13():
    deopt 52 [Terms2];
  D15():
    deopt 61 [];
  D17():
    deopt 68 [];
  L23(dx34):
    ___ = ldf `%*%` in base;
    r78 = dyn ___(dx28, dx34);
    check L120() else D34();
  L66():
    Terms3 = force? Terms2;
    checkMissing(Terms3);
    attr = ldf attr in base;
    r29 = dyn attr(Terms3, "dataClasses");
    check L67() else D14();
  L69():
    p8 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p9 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r33 = dyn _checkMFClasses(p8, p9);
    check L70() else D16();
  L72():
    p10 = prom<V +>{
      Terms4 = ld Terms;
      Terms5 = force? Terms4;
      checkMissing(Terms5);
      return Terms5;
    };
    p11 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    p12 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c8 = `is.object`(object18);
      if c8 then L1() else L2(object18);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object20):
      r37 = `$`(object20, <sym contrasts>);
      goto L0(r37);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r39 = dyn model_matrix1[, , `contrasts.arg`](p10, p11, p12);
    check L73() else D18();
  L115():
    dx29 = getTryDispatchBuiltinValue(dr24);
    goto L112(dx29);
  L116():
    dr26 = tryDispatchBuiltin.1("[", dx30);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L118() else L117(dr26);
  L117(dx32):
    piv2 = ld piv;
    check L119() else D33();
  D14():
    deopt 56 [r29];
  D16():
    deopt 64 [r33];
  D18():
    deopt 73 [r39];
  D33():
    deopt 129 [dx32, piv2];
  D34():
    deopt 135 [r78];
  L67():
    goto L12(r29);
  L70():
    goto L14();
  L73():
    st X = r39;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L118():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L23(dx33);
  L119():
    piv3 = force? piv2;
    __3 = ldf `[` in base;
    r77 = dyn __3(dx30, piv3, <missing>);
    goto L23(r77);
  L120():
    st pred = r78;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L121() else L122();
  L15(r41):
    r45 = `!`(r41);
    c10 = `as.logical`(r45);
    if c10 then L80() else L17();
  L24(r80):
    r81 = `!`(r80);
    c24 = `as.logical`(r81);
    if c24 then L124() else L25();
  L74():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L75():
    r40 = dyn base4(<lang `<-`(off.num, attr(tt, "offset"))>);
    goto L15(r40);
  L121():
    offset = ld offset;
    check L123() else D35();
  L122():
    r79 = dyn base8(<sym offset>);
    goto L24(r79);
  D35():
    deopt 138 [offset];
  L16(r43):
    st `off.num` = r43;
    c9 = `==`(r43, NULL);
    goto L15(c9);
  L17():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L18(r56):
    st offset = r56;
    goto L10();
  L25():
    goto L26();
  L26():
    sym9 = ldf inherits;
    base9 = ldf inherits in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L128() else L129();
  L76():
    tt2 = ld tt;
    check L78() else D19();
  L77():
    r42 = dyn base5(<sym tt>, "offset");
    goto L16(r42);
  L80():
    eval = ldf eval;
    check L81() else D21();
  L123():
    offset1 = force? offset;
    checkMissing(offset1);
    c23 = `==`(offset1, NULL);
    goto L24(c23);
  L124():
    pred = ld pred;
    check L125() else D36();
  D19():
    deopt 78 [tt2];
  D21():
    deopt 87 [];
  D36():
    deopt 142 [pred];
  L19(r58):
    r60 = `!`(r58);
    c14 = `as.logical`(r60);
    if c14 then L91() else L20();
  L27(r85):
    c25 = `as.logical`(r85);
    if c25 then L132() else L28();
  L78():
    tt3 = force? tt2;
    checkMissing(tt3);
    attr1 = ldf attr in base;
    r44 = dyn attr1(tt3, "offset");
    check L79() else D20();
  L81():
    p13 = prom<V +>{
      sym6 = ldf attr;
      base6 = ldf attr in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r47):
      c11 = `is.object`(r47);
      if c11 then L4() else L5(r47);
    L2():
      tt4 = ld tt;
      tt5 = force? tt4;
      checkMissing(tt5);
      attr2 = ldf attr in base;
      r48 = dyn attr2(tt5, "variables");
      goto L0(r48);
    L3():
      r46 = dyn base6(<sym tt>, "variables");
      goto L0(r46);
    L1(dx10):
      return dx10;
    L4():
      dr8 = tryDispatchBuiltin.1("[[", r47);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(r50):
      off_num = ld `off.num`;
      off_num1 = force? off_num;
      checkMissing(off_num1);
      r51 = `+`(off_num1, 1.0);
      __ = ldf `[[` in base;
      r52 = dyn __(r50, r51);
      goto L1(r52);
    L6():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx9);
    };
    p14 = prom<V +>{
      newdata3 = ld newdata;
      newdata4 = force? newdata3;
      checkMissing(newdata4);
      return newdata4;
    };
    r55 = dyn eval(p13, p14);
    check L82() else D22();
  L84():
    object21 = ld object;
    check L86() else D23();
  L85():
    r57 = dyn base7(<lang `$`(object, offset)>);
    goto L19(r57);
  L125():
    pred1 = force? pred;
    checkMissing(pred1);
    offset2 = ld offset;
    check L126() else D37();
  L128():
    object39 = ld object;
    check L130() else D38();
  L129():
    r84 = dyn base9(<sym object>, "mlm");
    goto L27(r84);
  D20():
    deopt 82 [r44];
  D22():
    deopt 90 [r55];
  D23():
    deopt 92 [object21];
  D37():
    deopt 143 [pred1, offset2];
  D38():
    deopt 151 [object39];
  L20():
    goto L18(NULL);
  L28():
    pred4 = ld pred;
    check L135() else D41();
  L79():
    goto L16(r44);
  L82():
    goto L18(r55);
  L86():
    object22 = force? object21;
    checkMissing(object22);
    c12 = `is.object`(object22);
    if c12 then L88() else L89(object22);
  L91():
    eval1 = ldf eval;
    check L92() else D24();
  L126():
    offset3 = force? offset2;
    checkMissing(offset3);
    r82 = `+`(pred1, offset3);
    st pred = r82;
    goto L26();
  L130():
    object40 = force? object39;
    checkMissing(object40);
    inherits = ldf inherits in base;
    r86 = dyn inherits(object40, "mlm", FALSE);
    check L131() else D39();
  L132():
    pred2 = ld pred;
    check L133() else D40();
  D24():
    deopt 98 [];
  D39():
    deopt 156 [r86];
  D40():
    deopt 157 [pred2];
  D41():
    deopt 159 [pred4];
  L87(dx12):
    c13 = `==`(dx12, NULL);
    goto L19(c13);
  L88():
    dr10 = tryDispatchBuiltin.1("$", object22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L90() else L89(dr10);
  L89(object24):
    r59 = `$`(object24, <sym offset>);
    goto L87(r59);
  L92():
    p15 = prom<V +>{
      object25 = ld object;
      object26 = force? object25;
      checkMissing(object26);
      c15 = `is.object`(object26);
      if c15 then L1() else L2(object26);
    L0(dx14):
      c16 = `is.object`(dx14);
      if c16 then L5() else L6(dx14);
    L1():
      dr12 = tryDispatchBuiltin.1("$", object26);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object28):
      r61 = `$`(object28, <sym call>);
      goto L0(r61);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    L4(dx18):
      return dx18;
    L5():
      dr14 = tryDispatchBuiltin.1("$", dx14);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(dx16):
      r62 = `$`(dx16, <sym offset>);
      goto L4(r62);
    L7():
      dx17 = getTryDispatchBuiltinValue(dr14);
      goto L4(dx17);
    };
    p16 = prom<V +>{
      newdata5 = ld newdata;
      newdata6 = force? newdata5;
      checkMissing(newdata6);
      return newdata6;
    };
    r65 = dyn eval1(p15, p16);
    check L93() else D25();
  L131():
    goto L27(r86);
  L133():
    pred3 = force? pred2;
    checkMissing(pred3);
    popenv;
    return pred3;
  L135():
    pred5 = force? pred4;
    checkMissing(pred5);
    c26 = `is.object`(pred5);
    if c26 then L136() else L137();
  D25():
    deopt 101 [r65];
  L29(dx36):
    popenv;
    return dx36;
  L90():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L87(dx11);
  L93():
    goto L18(r65);
  L136():
    dr28 = tryDispatchBuiltin.1("[", pred5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L138() else L137();
  L137():
    __4 = ldf `[` in base;
    r87 = dyn __4(pred5, <missing>, 1);
    goto L29(r87);
  L138():
    dx35 = getTryDispatchBuiltinValue(dr28);
    goto L29(dx35);
  }
}