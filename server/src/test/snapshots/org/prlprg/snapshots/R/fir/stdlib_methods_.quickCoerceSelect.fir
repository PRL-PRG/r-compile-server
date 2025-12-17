fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3501095553;
    st `.quickCoerceSelect` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3501095553(from, to, fdef, methods, where) {
  (reg from:*, reg to:*, reg fdef:*, reg methods:*, reg where:*) -+> V { var from:*, var to:*, var fdef:*, var methods:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg methods1:*, reg methods2:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg methods3:*, reg methods4:V, reg is_environment:cls, reg r4:V, reg c2:L, reg _findMethodInTable:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg from1:*, reg from2:V, reg to1:*, reg to2:V, reg c3:cls, reg r7:V, reg p:p(V +), reg methods5:*, reg methods6:V, reg p1:p(V +), reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg method:*, reg method1:V, reg is_environment1:cls, reg r13:V, reg c4:L, reg method2:*, reg method3:V, reg __:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg from3:*, reg from4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r17:V, reg r18:V, reg allMethods:*, reg allMethods1:V, reg names:cls, reg r19:V, reg match:cls, reg r20:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r21:V, reg r22:V, reg i:*, reg i1:V, reg is_na:cls, reg r23:V, reg c5:L, reg allMethods2:*, reg allMethods3:V, reg c6:L, reg allMethods5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i2:*, reg i3:V, reg __1:cls, reg r24:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg r26:V, reg to3:*, reg to4:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r27:V, reg r28:V, reg methodsi:*, reg methodsi1:V, reg names1:cls, reg r29:V, reg match1:cls, reg r30:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r31:V, reg r32:V, reg j:*, reg j1:V, reg is_na1:cls, reg r33:V, reg c7:L, reg methodsi2:*, reg methodsi3:V, reg c8:L, reg methodsi5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j2:*, reg j3:V, reg __2:cls, reg r34:V |
    mkenv;
    st from = from;
    st to = to;
    st fdef = fdef;
    st methods = methods;
    st where = where;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L19() else L1();
  L16():
    methods1 = ld methods;
    check L18() else D0();
  L17():
    r = dyn base(<sym methods>);
    goto L0(r);
  D0():
    deopt 1 [methods1];
  L1():
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L18():
    methods2 = force? methods1;
    checkMissing(methods2);
    c = `==`(methods2, NULL);
    goto L0(c);
  L19():
    popenv;
    return NULL;
  L2(r3):
    c2 = `as.logical`(r3);
    if c2 then L25() else L3();
  L21():
    methods3 = ld methods;
    check L23() else D1();
  L22():
    r2 = dyn base1(<sym methods>);
    goto L2(r2);
  D1():
    deopt 8 [methods3];
  L3():
    __ = ldf `@` in base;
    r14 = dyn __(<sym methods>, <sym allMethods>);
    st allMethods = r14;
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L36() else L37();
  L23():
    methods4 = force? methods3;
    checkMissing(methods4);
    is_environment = ldf `is.environment` in base;
    r4 = dyn is_environment(methods4);
    check L24() else D2();
  L25():
    _findMethodInTable = ldf `.findMethodInTable`;
    check L26() else D3();
  D2():
    deopt 11 [r4];
  D3():
    deopt 13 [];
  L6(r16):
    st i = r16;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L44() else L45();
  L24():
    goto L2(r4);
  L26():
    p = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      from1 = ld from;
      from2 = force? from1;
      checkMissing(from2);
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      c3 = ldf c in base;
      r7 = dyn c3(from2, to2);
      goto L0(r7);
    L2():
      r5 = dyn base2(<sym from>, <sym to>);
      goto L0(r5);
    };
    p1 = prom<V +>{
      methods5 = ld methods;
      methods6 = force? methods5;
      checkMissing(methods6);
      return methods6;
    };
    r10 = dyn _findMethodInTable(p, p1);
    check L27() else D4();
  L36():
    from3 = ld from;
    check L38() else D8();
  L37():
    r15 = dyn base4(<sym from>, <lang names(allMethods)>);
    goto L6(r15);
  D4():
    deopt 16 [r10];
  D8():
    deopt 33 [from3];
  L8(r22):
    c5 = `as.logical`(r22);
    if c5 then L48() else L9();
  L27():
    st method = r10;
    sym3 = ldf `is.environment`;
    base3 = ldf `is.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L38():
    from4 = force? from3;
    checkMissing(from4);
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L44():
    i = ld i;
    check L46() else D12();
  L45():
    r21 = dyn base6(<sym i>);
    goto L8(r21);
  D12():
    deopt 48 [i];
  L4(r12):
    c4 = `as.logical`(r12);
    if c4 then L32() else L5();
  L7(r18):
    match = ldf match in base;
    r20 = dyn match(from4, r18, NA_INT, NULL);
    check L43() else D11();
  L9():
    allMethods2 = ld allMethods;
    check L50() else D14();
  L28():
    method = ld method;
    check L30() else D5();
  L29():
    r11 = dyn base3(<sym method>);
    goto L4(r11);
  L39():
    allMethods = ld allMethods;
    check L41() else D9();
  L40():
    r17 = dyn base5(<sym allMethods>);
    goto L7(r17);
  L46():
    i1 = force? i;
    checkMissing(i1);
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(i1);
    check L47() else D13();
  L48():
    popenv;
    return NULL;
  D5():
    deopt 20 [method];
  D9():
    deopt 37 [allMethods];
  D11():
    deopt 44 [r20];
  D13():
    deopt 51 [r23];
  D14():
    deopt 54 [allMethods2];
  L5():
    method2 = ld method;
    check L34() else D7();
  L30():
    method1 = force? method;
    checkMissing(method1);
    is_environment1 = ldf `is.environment` in base;
    r13 = dyn is_environment1(method1);
    check L31() else D6();
  L32():
    popenv;
    return NULL;
  L41():
    allMethods1 = force? allMethods;
    checkMissing(allMethods1);
    names = ldf names in base;
    r19 = dyn names(allMethods1);
    check L42() else D10();
  L43():
    goto L6(r20);
  L47():
    goto L8(r23);
  L50():
    allMethods3 = force? allMethods2;
    checkMissing(allMethods3);
    c6 = `is.object`(allMethods3);
    if c6 then L51() else L52(allMethods3);
  D6():
    deopt 23 [r13];
  D7():
    deopt 26 [method2];
  D10():
    deopt 40 [r19];
  L10(dx1):
    st methodsi = dx1;
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L55() else L56();
  L31():
    goto L4(r13);
  L34():
    method3 = force? method2;
    checkMissing(method3);
    popenv;
    return method3;
  L42():
    goto L7(r19);
  L51():
    dr = tryDispatchBuiltin.1("[[", allMethods3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L53() else L52(dr);
  L52(allMethods5):
    i2 = ld i;
    check L54() else D15();
  D15():
    deopt 56 [allMethods5, i2];
  L11(r26):
    st j = r26;
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L63() else L64();
  L53():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L54():
    i3 = force? i2;
    __1 = ldf `[[` in base;
    r24 = dyn __1(allMethods5, i3);
    goto L10(r24);
  L55():
    to3 = ld to;
    check L57() else D16();
  L56():
    r25 = dyn base7(<sym to>, <lang names(methodsi)>);
    goto L11(r25);
  D16():
    deopt 62 [to3];
  L13(r32):
    c7 = `as.logical`(r32);
    if c7 then L67() else L14();
  L57():
    to4 = force? to3;
    checkMissing(to4);
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L58() else L59();
  L63():
    j = ld j;
    check L65() else D20();
  L64():
    r31 = dyn base9(<sym j>);
    goto L13(r31);
  D20():
    deopt 77 [j];
  L12(r28):
    match1 = ldf match in base;
    r30 = dyn match1(to4, r28, NA_INT, NULL);
    check L62() else D19();
  L14():
    methodsi2 = ld methodsi;
    check L69() else D22();
  L58():
    methodsi = ld methodsi;
    check L60() else D17();
  L59():
    r27 = dyn base8(<sym methodsi>);
    goto L12(r27);
  L65():
    j1 = force? j;
    checkMissing(j1);
    is_na1 = ldf `is.na` in base;
    r33 = dyn is_na1(j1);
    check L66() else D21();
  L67():
    popenv;
    return NULL;
  D17():
    deopt 66 [methodsi];
  D19():
    deopt 73 [r30];
  D21():
    deopt 80 [r33];
  D22():
    deopt 83 [methodsi2];
  L60():
    methodsi1 = force? methodsi;
    checkMissing(methodsi1);
    names1 = ldf names in base;
    r29 = dyn names1(methodsi1);
    check L61() else D18();
  L62():
    goto L11(r30);
  L66():
    goto L13(r33);
  L69():
    methodsi3 = force? methodsi2;
    checkMissing(methodsi3);
    c8 = `is.object`(methodsi3);
    if c8 then L70() else L71(methodsi3);
  D18():
    deopt 69 [r29];
  L15(dx3):
    popenv;
    return dx3;
  L61():
    goto L12(r29);
  L70():
    dr2 = tryDispatchBuiltin.1("[[", methodsi3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L72() else L71(dr2);
  L71(methodsi5):
    j2 = ld j;
    check L73() else D23();
  D23():
    deopt 85 [methodsi5, j2];
  L72():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L73():
    j3 = force? j2;
    __2 = ldf `[[` in base;
    r34 = dyn __2(methodsi5, j3);
    goto L15(r34);
  }
}