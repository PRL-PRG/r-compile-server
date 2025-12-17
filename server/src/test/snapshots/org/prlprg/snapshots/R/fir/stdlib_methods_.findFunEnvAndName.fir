fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4009676651;
    st `.findFunEnvAndName` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4009676651(what, where, signature) {
  (reg what:*, reg where:*, reg signature:*) -+> V { var what:*, var where:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg signature1:*, reg signature2:V, reg c:V, reg c1:L, reg findFunction:cls, reg what1:*, reg what2:V, reg p:p(V +), reg where1:*, reg where2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg whereF:*, reg whereF1:V, reg length:cls, reg r8:V, reg r9:V, reg c2:L, reg whereF2:*, reg whereF3:V, reg c3:L, reg whereF5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg pname:*, reg pname1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg baseenv:cls, reg r15:V, reg list:cls, reg r16:V, reg _genEnv:cls, reg what3:*, reg what4:V, reg p2:p(V +), reg where3:*, reg where4:V, reg p3:p(V +), reg r19:V, reg _in_:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg whereF6:*, reg whereF7:V, reg attributes:cls, reg r24:V, reg names:cls, reg r25:V, reg p4:p(V +), reg r27:V, reg c4:L, reg gsub:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg whereF8:*, reg whereF9:V, reg attr:cls, reg r30:V, reg p5:p(V +), reg r32:V, reg isNamespace:cls, reg whereF10:*, reg whereF11:V, reg p6:p(V +), reg r35:V, reg c5:L, reg _searchNamespaceNames:cls, reg whereF12:*, reg whereF13:V, reg p7:p(V +), reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg pname2:*, reg pname3:V, reg whereF14:*, reg whereF15:V, reg list1:cls, reg r40:V |
    mkenv;
    st what = what;
    st where = where;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L0(NULL) else L0(signature);
  L0(signature_orDefault):
    st signature = signature_orDefault;
    character = ldf character;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    r = dyn character();
    check L15() else D1();
  D1():
    deopt 2 [r];
  L15():
    st pname = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r2):
    c1 = `as.logical`(r2);
    if c1 then L19() else L2();
  L16():
    signature1 = ld signature;
    check L18() else D2();
  L17():
    r1 = dyn base(<sym signature>);
    goto L1(r1);
  D2():
    deopt 5 [signature1];
  L2():
    _genEnv = ldf `.genEnv`;
    check L41() else D11();
  L9():
    _in_ = ldf `%in%`;
    check L43() else D13();
  L18():
    signature2 = force? signature1;
    checkMissing(signature2);
    c = `==`(signature2, NULL);
    goto L1(c);
  L19():
    findFunction = ldf findFunction;
    check L20() else D3();
  D3():
    deopt 9 [];
  D11():
    deopt 43 [];
  D13():
    deopt 49 [];
  L20():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    p1 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r5 = dyn findFunction[, where](p, p1);
    check L21() else D4();
  L41():
    p2 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p3 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r19 = dyn _genEnv(p2, p3);
    check L42() else D12();
  L43():
    p4 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r21):
      return r21;
    L2():
      sym5 = ldf attributes;
      base5 = ldf attributes in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r20 = dyn base4(<lang attributes(whereF)>);
      goto L0(r20);
    L1(r23):
      names = ldf names in base;
      r25 = dyn names(r23);
      goto L0(r25);
    L4():
      whereF6 = ld whereF;
      whereF7 = force? whereF6;
      checkMissing(whereF7);
      attributes = ldf attributes in base;
      r24 = dyn attributes(whereF7);
      goto L1(r24);
    L5():
      r22 = dyn base5(<sym whereF>);
      goto L1(r22);
    };
    r27 = dyn _in_("name", p4);
    check L44() else D14();
  D4():
    deopt 13 [r5];
  D12():
    deopt 46 [r19];
  D14():
    deopt 52 [r27];
  L21():
    st whereF = r5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L42():
    st whereF = r19;
    goto L9();
  L44():
    c4 = `as.logical`(r27);
    if c4 then L45() else L10();
  L3(r7):
    r9 = `>`(r7, 0.0);
    c2 = `as.logical`(r9);
    if c2 then L26() else L4();
  L10():
    isNamespace = ldf isNamespace;
    check L49() else D17();
  L11():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L55() else L56();
  L22():
    whereF = ld whereF;
    check L24() else D5();
  L23():
    r6 = dyn base1(<sym whereF>);
    goto L3(r6);
  L45():
    gsub = ldf gsub;
    check L46() else D15();
  D5():
    deopt 17 [whereF];
  D15():
    deopt 54 [];
  D17():
    deopt 61 [];
  L4():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L13(r39):
    popenv;
    return r39;
  L24():
    whereF1 = force? whereF;
    checkMissing(whereF1);
    length = ldf length in base;
    r8 = dyn length(whereF1);
    check L25() else D6();
  L26():
    whereF2 = ld whereF;
    check L27() else D7();
  L46():
    p5 = prom<V +>{
      sym6 = ldf attr;
      base6 = ldf attr in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      whereF8 = ld whereF;
      whereF9 = force? whereF8;
      checkMissing(whereF9);
      attr = ldf attr in base;
      r30 = dyn attr(whereF9, "name");
      goto L0(r30);
    L2():
      r28 = dyn base6(<sym whereF>, "name");
      goto L0(r28);
    };
    r32 = dyn gsub("^.*:", "", p5);
    check L47() else D16();
  L49():
    p6 = prom<V +>{
      whereF10 = ld whereF;
      whereF11 = force? whereF10;
      checkMissing(whereF11);
      return whereF11;
    };
    r35 = dyn isNamespace(p6);
    check L50() else D18();
  L55():
    pname2 = ld pname;
    check L57() else D21();
  L56():
    r38 = dyn base7[pname, whereF](<sym pname>, <sym whereF>);
    goto L13(r38);
  D6():
    deopt 20 [r8];
  D7():
    deopt 23 [whereF2];
  D16():
    deopt 58 [r32];
  D18():
    deopt 63 [r35];
  D21():
    deopt 73 [pname2];
  L7(r12):
    popenv;
    return r12;
  L25():
    goto L3(r8);
  L27():
    whereF3 = force? whereF2;
    checkMissing(whereF3);
    c3 = `is.object`(whereF3);
    if c3 then L28() else L29(whereF3);
  L32():
    pname = ld pname;
    check L34() else D8();
  L33():
    r11 = dyn base2[pname, whereF](<sym pname>, <lang baseenv()>);
    goto L7(r11);
  L47():
    st pname = r32;
    goto L11();
  L50():
    c5 = `as.logical`(r35);
    if c5 then L51() else L12();
  L57():
    pname3 = force? pname2;
    checkMissing(pname3);
    whereF14 = ld whereF;
    check L58() else D22();
  D8():
    deopt 31 [pname];
  D22():
    deopt 76 [whereF14];
  L5(dx1):
    st whereF = dx1;
    goto L9();
  L12():
    goto L11();
  L28():
    dr = tryDispatchBuiltin.1("[[", whereF3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(whereF5):
    __ = ldf `[[` in base;
    r10 = dyn __(whereF5, 1);
    goto L5(r10);
  L34():
    pname1 = force? pname;
    checkMissing(pname1);
    sym3 = ldf baseenv;
    base3 = ldf baseenv in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L51():
    _searchNamespaceNames = ldf `.searchNamespaceNames`;
    check L52() else D19();
  L58():
    whereF15 = force? whereF14;
    checkMissing(whereF15);
    list1 = ldf list in base;
    r40 = dyn list1(pname3, whereF15);
    check L59() else D23();
  D19():
    deopt 65 [];
  D23():
    deopt 80 [r40];
  L8(r14):
    list = ldf list in base;
    r16 = dyn list(pname1, r14);
    check L38() else D10();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L35():
    baseenv = ldf baseenv in base;
    r15 = dyn baseenv();
    check L37() else D9();
  L36():
    r13 = dyn base3();
    goto L8(r13);
  L52():
    p7 = prom<V +>{
      whereF12 = ld whereF;
      whereF13 = force? whereF12;
      checkMissing(whereF13);
      return whereF13;
    };
    r37 = dyn _searchNamespaceNames(p7);
    check L53() else D20();
  L59():
    goto L13(r40);
  D9():
    deopt 37 [r15];
  D10():
    deopt 40 [r16];
  D20():
    deopt 67 [r37];
  L37():
    goto L8(r15);
  L38():
    goto L7(r16);
  L53():
    st pname = r37;
    goto L11();
  }
}