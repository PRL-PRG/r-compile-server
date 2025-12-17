fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2149446420;
    st `effects.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2149446420(object, `set.sign`, `...`) {
  (reg object:*, reg set_sign:*, reg ddd:dots) -+> V { var object:*, var `set.sign`:*, reg set_sign_isMissing:L, reg set_sign_orDefault:*, var `...`:dots?, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg eff:*, reg eff1:V, reg c1:V, reg c2:L, reg stop:cls, reg r3:V, reg set_sign1:*, reg set_sign2:V, reg c3:L, reg coef:cls, reg object5:*, reg object6:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg eff2:*, reg eff3:V, reg is_matrix:cls, reg r9:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:I, reg r14:V, reg dd:*, reg dd1:V, reg dim:cls, reg r15:V, reg c5:L, reg r18:I, reg r19:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r21:I, reg dx3:V, reg __:cls, reg r22:V, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg dd2:*, reg dd3:V, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg r31:V, reg eff4:*, reg eff5:V, reg c6:L, reg r33:V, reg eff7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r35:V, reg dx5:V, reg r36:*, reg r37:V, reg __1:cls, reg r38:V, reg abs:cls, reg r39:V, reg r40:V, reg l:*, reg c7:L, reg r42:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r44:V, reg dx7:V, reg r45:*, reg r46:V, reg ___:cls, reg r47:V, reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg dd4:*, reg dd5:V, reg r51:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg dd6:*, reg dd7:V, reg r54:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r57:V, reg r58:V, reg r59:V, reg eff8:*, reg eff9:V, reg c8:L, reg r61:V, reg eff11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r63:V, reg dx9:V, reg r64:*, reg r65:V, reg __2:cls, reg r66:V, reg abs1:cls, reg r67:V, reg r68:V, reg l3:*, reg c9:L, reg r70:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r72:V, reg dx11:V, reg r73:*, reg r74:V, reg ___1:cls, reg r75:V, reg structure:cls, reg eff12:*, reg eff13:V, reg p1:p(V +), reg object7:*, reg object8:V, reg c10:L, reg object10:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r78:V, reg p2:p(V +), reg r80:V |
    mkenv;
    st object = object;
    set_sign_isMissing = missing.0(set_sign);
    if set_sign_isMissing then L0(FALSE) else L0(set_sign);
  L0(set_sign_orDefault):
    st `set.sign` = set_sign_orDefault;
    st `...` = ddd;
    object1 = ld object;
    check L20() else D0();
  D0():
    deopt 0 [object1];
  L20():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L22() else L23(object2);
  L21(dx1):
    st eff = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L22():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(object4):
    r = `$`(object4, <sym effects>);
    goto L21(r);
  L1(r2):
    c2 = `as.logical`(r2);
    if c2 then L28() else L2();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L25():
    eff = ld eff;
    check L27() else D1();
  L26():
    r1 = dyn base(<sym eff>);
    goto L1(r1);
  D1():
    deopt 5 [eff];
  L2():
    goto L3();
  L3():
    set_sign1 = ld `set.sign`;
    check L32() else D4();
  L27():
    eff1 = force? eff;
    checkMissing(eff1);
    c1 = `==`(eff1, NULL);
    goto L1(c1);
  L28():
    stop = ldf stop;
    check L29() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 14 [set_sign1];
  L29():
    r3 = dyn stop("'object' has no 'effects' component");
    check L30() else D3();
  L32():
    set_sign2 = force? set_sign1;
    checkMissing(set_sign2);
    c3 = `as.logical`(set_sign2);
    if c3 then L33() else L4();
  D3():
    deopt 11 [r3];
  L4():
    goto L19();
  L19():
    structure = ldf structure;
    check L83() else D22();
  L30():
    goto L3();
  L33():
    coef = ldf coef;
    check L34() else D5();
  D5():
    deopt 17 [];
  D22():
    deopt 87 [];
  L34():
    p = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      return object6;
    };
    r6 = dyn coef(p);
    check L35() else D6();
  L83():
    p1 = prom<V +>{
      eff12 = ld eff;
      eff13 = force? eff12;
      checkMissing(eff13);
      return eff13;
    };
    p2 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      c10 = `is.object`(object8);
      if c10 then L1() else L2(object8);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", object8);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object10):
      r78 = `$`(object10, <sym assign>);
      goto L0(r78);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r80 = dyn structure[, assign, class](p1, p2, "coef");
    check L84() else D23();
  D6():
    deopt 19 [r6];
  D23():
    deopt 93 [r80];
  L35():
    st dd = r6;
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L84():
    popenv;
    return r80;
  L5(r8):
    c4 = `as.logical`(r8);
    if c4 then L40() else L6();
  L36():
    eff2 = ld eff;
    check L38() else D7();
  L37():
    r7 = dyn base1(<sym eff>);
    goto L5(r7);
  D7():
    deopt 23 [eff2];
  L6():
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L13(r48):
    goto L19();
  L38():
    eff3 = force? eff2;
    checkMissing(eff3);
    is_matrix = ldf `is.matrix` in base;
    r9 = dyn is_matrix(eff3);
    check L39() else D8();
  L40():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  D8():
    deopt 26 [r9];
  L7(r13, r14):
    c5 = `is.object`(r14);
    if c5 then L45() else L46(r13, r14);
  L14(r50):
    st r = r50;
    sym6 = ldf sign;
    base6 = ldf sign in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  L39():
    goto L5(r9);
  L41():
    dd = ld dd;
    check L43() else D9();
  L42():
    r12 = dyn base2(<sym dd>);
    goto L7(1, r12);
  L64():
    dd4 = ld dd;
    check L66() else D16();
  L65():
    r49 = dyn base5(<sym dd>);
    goto L14(r49);
  D9():
    deopt 30 [1, dd];
  D16():
    deopt 62 [dd4];
  L8(r21, dx3):
    r23 = `:`(r21, dx3);
    st r = r23;
    sym3 = ldf sign;
    base3 = ldf sign in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L15(r53):
    sym7 = ldf abs;
    base7 = ldf abs in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L70() else L71();
  L43():
    dd1 = force? dd;
    checkMissing(dd1);
    dim = ldf dim in base;
    r15 = dyn dim(dd1);
    check L44() else D10();
  L45():
    dr2 = tryDispatchBuiltin.1("[", r14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L47() else L46(r13, dr2);
  L46(r18, r19):
    __ = ldf `[` in base;
    r22 = dyn __(r19, 1);
    goto L8(r18, r22);
  L66():
    dd5 = force? dd4;
    checkMissing(dd5);
    r51 = seq_along(dd5);
    goto L14(r51);
  L67():
    dd6 = ld dd;
    check L69() else D17();
  L68():
    r52 = dyn base6(<sym dd>);
    goto L15(r52);
  D10():
    deopt 33 [1, r15];
  D17():
    deopt 67 [dd6];
  L9(r25):
    sym4 = ldf abs;
    base4 = ldf abs in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L16(r58, r59):
    r68 = `*`(r58, r59);
    l3 = ld eff;
    c9 = `is.object`(l3);
    if c9 then L78() else L79(r68, l3);
  L44():
    goto L7(1, r15);
  L47():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(r13, dx2);
  L48():
    dd2 = ld dd;
    check L50() else D11();
  L49():
    r24 = dyn base3(<sym dd>);
    goto L9(r24);
  L69():
    dd7 = force? dd6;
    checkMissing(dd7);
    r54 = sign(dd7);
    goto L15(r54);
  L70():
    eff8 = ld eff;
    check L72() else D18();
  L71():
    r57 = dyn base7(<lang `[`(eff, r)>);
    goto L16(r53, r57);
  D11():
    deopt 40 [dd2];
  D18():
    deopt 71 [r53, eff8];
  L10(r30, r31):
    r40 = `*`(r30, r31);
    l = ld eff;
    c7 = `is.object`(l);
    if c7 then L59() else L60(r40, l);
  L18(r72, dx11):
    st eff = dx11;
    goto L13(r72);
  L50():
    dd3 = force? dd2;
    checkMissing(dd3);
    r26 = sign(dd3);
    goto L9(r26);
  L51():
    eff4 = ld eff;
    check L53() else D12();
  L52():
    r29 = dyn base4(<lang `[`(eff, r, )>);
    goto L10(r25, r29);
  L72():
    eff9 = force? eff8;
    checkMissing(eff9);
    c8 = `is.object`(eff9);
    if c8 then L73() else L74(r53, eff9);
  L78():
    dr10 = tryDispatchBuiltin.0("[<-", l3, r68);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L80() else L79(r68, dr10);
  L79(r70, l5):
    r73 = ld r;
    check L81() else D21();
  D12():
    deopt 44 [r25, eff4];
  D21():
    deopt 80 [r70, l5, r68, r73];
  L12(r44, dx7):
    st eff = dx7;
    goto L13(r44);
  L17(r63, dx9):
    abs1 = ldf abs in base;
    r67 = dyn abs1(dx9);
    check L77() else D20();
  L53():
    eff5 = force? eff4;
    checkMissing(eff5);
    c6 = `is.object`(eff5);
    if c6 then L54() else L55(r25, eff5);
  L59():
    dr6 = tryDispatchBuiltin.0("[<-", l, r40);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60(r40, dr6);
  L60(r42, l2):
    r45 = ld r;
    check L62() else D15();
  L73():
    dr8 = tryDispatchBuiltin.1("[", eff9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L75() else L74(r53, dr8);
  L74(r61, eff11):
    r64 = ld r;
    check L76() else D19();
  L80():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L18(r68, dx10);
  L81():
    r74 = force? r73;
    ___1 = ldf `[<-` in base;
    r75 = dyn ___1(l5, r68, r74);
    goto L18(r70, r75);
  D15():
    deopt 55 [r42, l2, r40, r45];
  D19():
    deopt 73 [r61, eff11, r64];
  D20():
    deopt 77 [r63, r67];
  L11(r35, dx5):
    abs = ldf abs in base;
    r39 = dyn abs(dx5);
    check L58() else D14();
  L54():
    dr4 = tryDispatchBuiltin.1("[", eff5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L56() else L55(r25, dr4);
  L55(r33, eff7):
    r36 = ld r;
    check L57() else D13();
  L61():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(r40, dx6);
  L62():
    r46 = force? r45;
    ___ = ldf `[<-` in base;
    r47 = dyn ___(l, r46, <missing>, r40);
    goto L12(r42, r47);
  L75():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(r53, dx8);
  L76():
    r65 = force? r64;
    __2 = ldf `[` in base;
    r66 = dyn __2(eff11, r65);
    goto L17(r61, r66);
  L77():
    goto L16(r63, r67);
  D13():
    deopt 46 [r33, eff7, r36];
  D14():
    deopt 52 [r35, r39];
  L56():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(r25, dx4);
  L57():
    r37 = force? r36;
    __1 = ldf `[` in base;
    r38 = dyn __1(eff5, r37, <missing>);
    goto L11(r33, r38);
  L58():
    goto L10(r35, r39);
  }
}