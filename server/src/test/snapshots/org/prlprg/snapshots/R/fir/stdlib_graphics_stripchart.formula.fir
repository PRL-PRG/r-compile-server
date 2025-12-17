fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2688457662;
    st `stripchart.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2688457662(x, data, dlab, `...`, subset, `na.action`) {
  (reg x:*, reg data:*, reg dlab:*, reg ddd:dots, reg subset:*, reg na_action:*) -+> V { var x:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var dlab:*, reg dlab_isMissing:L, reg dlab_orDefault:*, var `...`:dots?, var subset:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg x1:*, reg x2:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg match_call:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg eval:cls, reg m:*, reg m1:V, reg c10:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg p:p(V +), reg parent_frame:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg is_matrix:cls, reg r17:V, reg c11:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p2:p(V +), reg r19:V, reg l:*, reg c12:L, reg r21:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r23:V, reg dx3:V, reg r24:V, reg l3:*, reg ___:cls, reg ddd1:dots?, reg r26:V, reg m4:*, reg m5:V, reg c13:L, reg m7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r27:V, reg l4:*, reg c14:L, reg dx7:V, reg l6:*, reg dr6:V, reg dc3:L, reg dx9:V, reg dx11:V, reg r28:V, reg l7:*, reg c15:L, reg r30:dots, reg l9:*, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r33:V, reg na_action1:*, reg na_action2:V, reg l10:*, reg c16:L, reg na_action4:V, reg l12:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg quote:cls, reg r37:V, reg l13:*, reg c17:L, reg r39:V, reg l15:*, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg ____:cls, reg r42:V, reg eval1:cls, reg m8:*, reg m9:V, reg p3:p(V +), reg parent_frame1:cls, reg r44:V, reg p4:p(V +), reg r46:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg mf:*, reg mf1:V, reg attr:cls, reg r51:V, reg attr1:cls, reg r52:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r53:V, reg r54:V, reg dlab1:*, reg dlab2:V, reg c18:V, reg c19:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg mf2:*, reg mf3:V, reg names:cls, reg r57:V, reg c20:L, reg r59:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg response:*, reg response1:V, reg __:cls, reg r60:V, reg stripchart:cls, reg split:cls, reg mf4:*, reg mf5:V, reg c21:L, reg mf7:V, reg dr16:V, reg dc8:L, reg dx21:V, reg dx22:V, reg response2:*, reg response3:V, reg __1:cls, reg r61:V, reg p5:p(V +), reg mf8:*, reg mf9:V, reg c22:L, reg mf11:V, reg dr18:V, reg dc9:L, reg dx23:V, reg dx24:V, reg response4:*, reg response5:V, reg r63:V, reg __2:cls, reg r64:V, reg p6:p(V +), reg r66:V, reg p7:p(V +), reg dlab3:*, reg dlab4:V, reg p8:p(V +), reg ddd2:dots?, reg r69:V |
    mkenv;
    st x = x;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    dlab_isMissing = missing.0(dlab);
    if dlab_isMissing then L1(NULL) else L1(dlab);
  L1(dlab_orDefault):
    st dlab = dlab_orDefault;
    st `...` = ddd;
    st subset = subset;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L2(NULL) else L2(na_action);
  L2(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L3(r1):
    c = `as.logical`(r1);
    if c then L4(c) else L22();
  L20():
    missing = ldf missing in base;
    r2 = dyn missing(<sym x>);
    goto L3(r2);
  L21():
    r = dyn base(<sym x>);
    goto L3(r);
  L4(c1):
    c9 = `as.logical`(c1);
    if c9 then L28() else L6();
  L22():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L5(c5, r4):
    r6 = `!=`(r4, 3);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L4(c7);
  L6():
    goto L7();
  L7():
    match_call = ldf `match.call`;
    check L32() else D4();
  L23():
    x1 = ld x;
    check L25() else D0();
  L24():
    r3 = dyn base1(<sym x>);
    goto L5(c, r3);
  L28():
    stop = ldf stop;
    check L29() else D2();
  D0():
    deopt 5 [c, x1];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  L25():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r5 = dyn length(x2);
    check L26() else D1();
  L29():
    r7 = dyn stop("formula missing or incorrect");
    check L30() else D3();
  L32():
    r9 = dyn match_call[`expand.dots`](FALSE);
    check L33() else D5();
  D1():
    deopt 8 [c, r5];
  D3():
    deopt 15 [r7];
  D5():
    deopt 22 [r9];
  L26():
    goto L5(c, r5);
  L30():
    goto L7();
  L33():
    st m = r9;
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L8(r11):
    c11 = `as.logical`(r11);
    if c11 then L39() else L9();
  L34():
    eval = ldf eval;
    check L36() else D6();
  L35():
    r10 = dyn base2(<lang eval(`$`(m, data), parent.frame())>);
    goto L8(r10);
  D6():
    deopt 27 [];
  L9():
    goto L10();
  L10():
    l3 = ld m;
    ___ = ldf `$<-`;
    check L47() else D11();
  L36():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c10 = `is.object`(m1);
      if c10 then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r12 = `$`(m3, <sym data>);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r14 = dyn parent_frame();
      return r14;
    };
    r16 = dyn eval(p, p1);
    check L37() else D7();
  L39():
    as_data_frame = ldf `as.data.frame`;
    check L40() else D9();
  D7():
    deopt 30 [r16];
  D9():
    deopt 34 [];
  D11():
    deopt 45 [NULL, l3, NULL];
  L37():
    is_matrix = ldf `is.matrix` in base;
    r17 = dyn is_matrix(r16);
    check L38() else D8();
  L40():
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r19 = dyn as_data_frame(p2);
    check L41() else D10();
  L47():
    ddd1 = ld `...`;
    r26 = dyn ___[, , `...`, ](l3, NULL, ddd1, NULL);
    check L48() else D12();
  D8():
    deopt 32 [r17];
  D10():
    deopt 36 [r19];
  D12():
    deopt 48 [NULL, r26];
  L38():
    goto L8(r17);
  L41():
    l = ld m;
    c12 = `is.object`(l);
    if c12 then L43() else L44(r19, l);
  L48():
    st m = r26;
    m4 = ld m;
    check L49() else D13();
  D13():
    deopt 50 [m4];
  L42(r23, dx3):
    st m = dx3;
    goto L10();
  L43():
    dr2 = tryDispatchBuiltin.0("$<-", l, r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(r19, dr2);
  L44(r21, l2):
    r24 = `$<-`(l2, <sym data>, r19);
    goto L42(r21, r24);
  L49():
    m5 = force? m4;
    checkMissing(m5);
    c13 = `is.object`(m5);
    if c13 then L51() else L52(m5);
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L42(r19, dx2);
  L50(dx5):
    l4 = ld m;
    c14 = `is.object`(l4);
    if c14 then L55() else L56(dx5, l4);
  L51():
    dr4 = tryDispatchBuiltin.1("$", m5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L53() else L52(dr4);
  L52(m7):
    r27 = `$`(m7, <sym x>);
    goto L50(r27);
  L53():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L50(dx4);
  L54(dx11):
    st m = dx11;
    l7 = ld m;
    c15 = `is.object`(l7);
    if c15 then L59() else L60(NULL, l7);
  L55():
    dr6 = tryDispatchBuiltin.0("$<-", l4, dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(dx5, dr6);
  L56(dx7, l6):
    r28 = `$<-`(l6, <sym formula>, dx5);
    goto L54(r28);
  L57():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L54(dx9);
  L58(dx13):
    st m = dx13;
    na_action1 = ld `na.action`;
    check L62() else D14();
  L59():
    dr8 = tryDispatchBuiltin.0("$<-", l7, NULL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L61() else L60(NULL, dr8);
  L60(r30, l9):
    r33 = `$<-`(l9, <sym x>, NULL);
    goto L58(r33);
  D14():
    deopt 61 [na_action1];
  L61():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L58(dx12);
  L62():
    na_action2 = force? na_action1;
    checkMissing(na_action2);
    l10 = ld m;
    c16 = `is.object`(l10);
    if c16 then L64() else L65(na_action2, l10);
  L63(dx15):
    st m = dx15;
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L67() else L68();
  L64():
    dr10 = tryDispatchBuiltin.0("$<-", l10, na_action2);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L66() else L65(na_action2, dr10);
  L65(na_action4, l12):
    r34 = `$<-`(l12, <sym na.action>, na_action2);
    goto L63(r34);
  L11(r36):
    l13 = ld m;
    c17 = `is.object`(l13);
    if c17 then L69() else L70(r36, l13);
  L66():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L63(dx14);
  L67():
    quote = ldf quote in base;
    r37 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L11(r37);
  L68():
    r35 = dyn base3(<lang `::`(stats, model.frame)>);
    goto L11(r35);
  L12(dx17):
    st m = dx17;
    eval1 = ldf eval;
    check L72() else D15();
  L69():
    dr12 = tryDispatchBuiltin.0("[[<-", l13, r36);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L71() else L70(r36, dr12);
  L70(r39, l15):
    ____ = ldf `[[<-` in base;
    r42 = dyn ____(l15, r36, 1);
    goto L12(r42);
  D15():
    deopt 75 [];
  L71():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L12(dx16);
  L72():
    p3 = prom<V +>{
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      return m9;
    };
    p4 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r44 = dyn parent_frame1();
      return r44;
    };
    r46 = dyn eval1(p3, p4);
    check L73() else D16();
  D16():
    deopt 78 [r46];
  L73():
    st mf = r46;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L13(r48):
    st response = r48;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L74():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L75():
    r47 = dyn base4(<lang attr(mf, "terms")>, "response");
    goto L13(r47);
  L14(r50):
    attr1 = ldf attr in base;
    r52 = dyn attr1(r50, "response");
    check L80() else D19();
  L15(r54):
    c19 = `as.logical`(r54);
    if c19 then L84() else L16();
  L76():
    mf = ld mf;
    check L78() else D17();
  L77():
    r49 = dyn base5(<sym mf>, "terms");
    goto L14(r49);
  L81():
    dlab1 = ld dlab;
    check L83() else D20();
  L82():
    r53 = dyn base6(<sym dlab>);
    goto L15(r53);
  D17():
    deopt 84 [mf];
  D19():
    deopt 91 [r52];
  D20():
    deopt 94 [dlab1];
  L16():
    goto L19();
  L19():
    stripchart = ldf stripchart;
    check L94() else D24();
  L78():
    mf1 = force? mf;
    checkMissing(mf1);
    attr = ldf attr in base;
    r51 = dyn attr(mf1, "terms");
    check L79() else D18();
  L80():
    goto L13(r52);
  L83():
    dlab2 = force? dlab1;
    checkMissing(dlab2);
    c18 = `==`(dlab2, NULL);
    goto L15(c18);
  L84():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L85() else L86();
  D18():
    deopt 88 [r51];
  D24():
    deopt 110 [];
  L17(r56):
    c20 = `is.object`(r56);
    if c20 then L89() else L90(r56);
  L79():
    goto L14(r51);
  L85():
    mf2 = ld mf;
    check L87() else D21();
  L86():
    r55 = dyn base7(<sym mf>);
    goto L17(r55);
  L94():
    p7 = prom<V +>{
      split = ldf split;
      p5 = prom<V +>{
        mf4 = ld mf;
        mf5 = force? mf4;
        checkMissing(mf5);
        c21 = `is.object`(mf5);
        if c21 then L1() else L2(mf5);
      L0(dx22):
        return dx22;
      L1():
        dr16 = tryDispatchBuiltin.1("[[", mf5);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(mf7):
        response2 = ld response;
        response3 = force? response2;
        __1 = ldf `[[` in base;
        r61 = dyn __1(mf7, response3);
        goto L0(r61);
      L3():
        dx21 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx21);
      };
      p6 = prom<V +>{
        mf8 = ld mf;
        mf9 = force? mf8;
        checkMissing(mf9);
        c22 = `is.object`(mf9);
        if c22 then L1() else L2(mf9);
      L0(dx24):
        return dx24;
      L1():
        dr18 = tryDispatchBuiltin.1("[", mf9);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(mf11):
        response4 = ld response;
        response5 = force? response4;
        checkMissing(response5);
        r63 = `-`(<missing>, response5);
        __2 = ldf `[` in base;
        r64 = dyn __2(mf11, r63);
        goto L0(r64);
      L3():
        dx23 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx23);
      };
      r66 = dyn split(p5, p6);
      return r66;
    };
    p8 = prom<V +>{
      dlab3 = ld dlab;
      dlab4 = force? dlab3;
      checkMissing(dlab4);
      return dlab4;
    };
    ddd2 = ld `...`;
    r69 = dyn stripchart[, dlab, `...`](p7, p8, ddd2);
    check L95() else D25();
  D21():
    deopt 99 [mf2];
  D25():
    deopt 115 [r69];
  L18(dx19):
    st dlab = dx19;
    goto L19();
  L87():
    mf3 = force? mf2;
    checkMissing(mf3);
    names = ldf names in base;
    r57 = dyn names(mf3);
    check L88() else D22();
  L89():
    dr14 = tryDispatchBuiltin.1("[", r56);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L91() else L90(dr14);
  L90(r59):
    response = ld response;
    check L92() else D23();
  L95():
    popenv;
    return r69;
  D22():
    deopt 102 [r57];
  D23():
    deopt 103 [r59, response];
  L88():
    goto L17(r57);
  L91():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L18(dx18);
  L92():
    response1 = force? response;
    __ = ldf `[` in base;
    r60 = dyn __(r59, response1);
    goto L18(r60);
  }
}