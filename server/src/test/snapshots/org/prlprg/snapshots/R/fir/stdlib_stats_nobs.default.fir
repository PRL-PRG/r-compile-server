fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2393742836;
    st `nobs.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2393742836(object, `use.fallback`, `...`) {
  (reg object:*, reg use_fallback:*, reg ddd:dots) -+> V { var object:*, var `use.fallback`:*, reg use_fallback_isMissing:L, reg use_fallback_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg is_list:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg object3:*, reg object4:V, reg c6:L, reg c8:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg c10:L, reg dx1:V, reg __:cls, reg r5:V, reg c11:V, reg r6:V, reg c12:L, reg c13:V, reg c15:L, reg n:*, reg n1:V, reg is_L:*, reg is_L1:V, reg c16:L, reg c18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c21:L, reg r8:V, reg object7:*, reg object8:V, reg c22:L, reg c24:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c26:L, reg dx3:V, reg __1:cls, reg r9:V, reg c27:V, reg r10:V, reg c28:L, reg c29:V, reg c31:L, reg n2:*, reg n3:V, reg use_fallback1:*, reg use_fallback2:V, reg c32:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg object11:*, reg object12:V, reg c33:L, reg object14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r13:V, reg c34:V, reg r14:V, reg c35:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg w:*, reg w1:V, reg r17:V, reg sum:cls, reg r18:V, reg _in_:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg object15:*, reg object16:V, reg names:cls, reg r21:V, reg p:p(V +), reg r23:V, reg c36:L, reg NROW:cls, reg object17:*, reg object18:V, reg c37:L, reg object20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r24:V, reg p1:p(V +), reg r26:V, reg warning:cls, reg r27:V, reg stop:cls, reg r28:V |
    mkenv;
    st object = object;
    use_fallback_isMissing = missing.0(use_fallback);
    if use_fallback_isMissing then L0(FALSE) else L0(use_fallback);
  L0(use_fallback_orDefault):
    st `use.fallback` = use_fallback_orDefault;
    st `...` = ddd;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r1):
    st `is.L` = r1;
    c = `as.logical`(r1);
    if c then L20() else L2(c);
  L16():
    object1 = ld object;
    check L18() else D0();
  L17():
    r = dyn base(<sym object>);
    goto L1(r);
  D0():
    deopt 2 [object1];
  L2(c2):
    c15 = `as.logical`(c2);
    if c15 then L28() else L5();
  L18():
    object2 = force? object1;
    checkMissing(object2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(object2);
    check L19() else D1();
  L20():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  D1():
    deopt 5 [r2];
  L3(c5, r4):
    r6 = `!`(r4);
    c12 = `as.logical`(r6);
    c13 = `&&`(c5, c12);
    goto L2(c13);
  L5():
    is_L = ld `is.L`;
    check L31() else D4();
  L19():
    goto L1(r2);
  L21():
    object3 = ld object;
    check L23() else D2();
  L22():
    r3 = dyn base1(<lang `<-`(n, `[[`(object, "nobs"))>);
    goto L3(c, r3);
  L28():
    n = ld n;
    check L29() else D3();
  D2():
    deopt 8 [c, object3];
  D3():
    deopt 17 [n];
  D4():
    deopt 19 [is_L];
  L23():
    object4 = force? object3;
    checkMissing(object4);
    c6 = `is.object`(object4);
    if c6 then L24() else L25(c, object4);
  L29():
    n1 = force? n;
    checkMissing(n1);
    popenv;
    return n1;
  L31():
    is_L1 = force? is_L;
    checkMissing(is_L1);
    c16 = `as.logical`(is_L1);
    if c16 then L32() else L6(c16);
  L4(c10, dx1):
    st n = dx1;
    c11 = `==`(dx1, NULL);
    goto L3(c10, c11);
  L6(c18):
    c31 = `as.logical`(c18);
    if c31 then L40() else L9();
  L24():
    dr = tryDispatchBuiltin.1("[[", object4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(c, dr);
  L25(c8, object6):
    __ = ldf `[[` in base;
    r5 = dyn __(object6, "nobs");
    goto L4(c8, r5);
  L32():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L7(c21, r8):
    r10 = `!`(r8);
    c28 = `as.logical`(r10);
    c29 = `&&`(c21, c28);
    goto L6(c29);
  L9():
    use_fallback1 = ld `use.fallback`;
    check L43() else D7();
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(c, dx);
  L33():
    object7 = ld object;
    check L35() else D5();
  L34():
    r7 = dyn base2(<lang `<-`(n, `[[`(object, "n.obs"))>);
    goto L7(c16, r7);
  L40():
    n2 = ld n;
    check L41() else D6();
  D5():
    deopt 22 [c16, object7];
  D6():
    deopt 31 [n2];
  D7():
    deopt 33 [use_fallback1];
  L35():
    object8 = force? object7;
    checkMissing(object8);
    c22 = `is.object`(object8);
    if c22 then L36() else L37(c16, object8);
  L41():
    n3 = force? n2;
    checkMissing(n3);
    popenv;
    return n3;
  L43():
    use_fallback2 = force? use_fallback1;
    checkMissing(use_fallback2);
    c32 = `as.logical`(use_fallback2);
    if c32 then L44() else L10();
  L8(c26, dx3):
    st n = dx3;
    c27 = `==`(dx3, NULL);
    goto L7(c26, c27);
  L10():
    stop = ldf stop;
    check L66() else D17();
  L36():
    dr2 = tryDispatchBuiltin.1("[[", object8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(c16, dr2);
  L37(c24, object10):
    __1 = ldf `[[` in base;
    r9 = dyn __1(object10, "n.obs");
    goto L8(c24, r9);
  L44():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  D17():
    deopt 68 [];
  L11(r12):
    r14 = `!`(r12);
    c35 = `as.logical`(r14);
    if c35 then L51() else L13();
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(c16, dx2);
  L45():
    object11 = ld object;
    check L47() else D8();
  L46():
    r11 = dyn base3(<lang `<-`(w, `[[`(object, "weights"))>);
    goto L11(r11);
  L66():
    r28 = dyn stop("no 'nobs' method is available");
    check L67() else D18();
  D8():
    deopt 36 [object11];
  D18():
    deopt 70 [r28];
  L13():
    _in_ = ldf `%in%`;
    check L57() else D11();
  L47():
    object12 = force? object11;
    checkMissing(object12);
    c33 = `is.object`(object12);
    if c33 then L48() else L49(object12);
  L51():
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L67():
    popenv;
    return r28;
  D11():
    deopt 53 [];
  L12(dx5):
    st w = dx5;
    c34 = `==`(dx5, NULL);
    goto L11(c34);
  L14(r16):
    popenv;
    return r16;
  L48():
    dr4 = tryDispatchBuiltin.1("[[", object12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(dr4);
  L49(object14):
    __2 = ldf `[[` in base;
    r13 = dyn __2(object14, "weights");
    goto L12(r13);
  L52():
    w = ld w;
    check L54() else D9();
  L53():
    r15 = dyn base4(<lang `!=`(w, 0.0)>);
    goto L14(r15);
  L57():
    p = prom<V +>{
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      names = ldf names in base;
      r21 = dyn names(object16);
      goto L0(r21);
    L2():
      r19 = dyn base5(<sym object>);
      goto L0(r19);
    };
    r23 = dyn _in_("residuals", p);
    check L58() else D12();
  D9():
    deopt 46 [w];
  D12():
    deopt 56 [r23];
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L54():
    w1 = force? w;
    checkMissing(w1);
    r17 = `!=`(w1, 0.0);
    sum = ldf sum in base;
    r18 = dyn sum(r17);
    check L55() else D10();
  L58():
    c36 = `as.logical`(r23);
    if c36 then L59() else L15();
  D10():
    deopt 51 [r18];
  L15():
    warning = ldf warning;
    check L63() else D15();
  L55():
    goto L14(r18);
  L59():
    NROW = ldf NROW;
    check L60() else D13();
  D13():
    deopt 58 [];
  D15():
    deopt 62 [];
  L60():
    p1 = prom<V +>{
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c37 = `is.object`(object18);
      if c37 then L1() else L2(object18);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object20):
      r24 = `$`(object20, <sym residuals>);
      goto L0(r24);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r26 = dyn NROW(p1);
    check L61() else D14();
  L63():
    r27 = dyn warning("no 'nobs' method is available");
    check L64() else D16();
  D14():
    deopt 60 [r26];
  D16():
    deopt 64 [r27];
  L61():
    popenv;
    return r26;
  L64():
    popenv;
    return 0;
  }
}