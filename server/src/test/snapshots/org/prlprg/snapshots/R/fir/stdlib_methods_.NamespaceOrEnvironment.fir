fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3253127715;
    st `.NamespaceOrEnvironment` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3253127715(where) {
  (reg where:*) -+> V { var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg where1:*, reg where2:V, reg is_environment:cls, reg r2:V, reg c:L, reg where3:*, reg where4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg where6:*, reg where7:V, reg c1:L, reg c2:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c7:L, reg r6:V, reg where8:*, reg where9:V, reg nzchar:cls, reg r7:V, reg c8:L, reg c9:V, reg c11:L, reg _getNamespace:cls, reg where10:*, reg where11:V, reg p:p(V +), reg r9:V, reg isNamespace:cls, reg ns:*, reg ns1:V, reg p1:p(V +), reg r11:V, reg c12:L, reg ns2:*, reg ns3:V, reg ns4:V, reg _in_:cls, reg where12:*, reg where13:V, reg p2:p(V +), reg search:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg c13:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg where14:*, reg where15:V, reg as_environment:cls, reg r18:V, reg paste0:cls, reg where16:*, reg where17:V, reg p4:p(V +), reg r20:V, reg _in_1:cls, reg where18:*, reg where19:V, reg p5:p(V +), reg search1:cls, reg r22:V, reg p6:p(V +), reg r24:V, reg c14:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg where20:*, reg where21:V, reg as_environment1:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg where22:*, reg where23:V, reg is_numeric:cls, reg r30:V, reg c15:L, reg c17:V, reg _in_2:cls, reg where24:*, reg where25:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg search2:cls, reg r34:V, reg r35:I, reg p8:p(V +), reg r37:V, reg c18:L, reg c19:V, reg c21:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg where26:*, reg where27:V, reg as_environment2:cls, reg r40:V, reg value:*, reg value1:V |
    mkenv;
    st where = where;
    st value = NULL;
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    c = `as.logical`(r1);
    if c then L21() else L1();
  L17():
    where1 = ld where;
    check L19() else D0();
  L18():
    r = dyn base(<sym where>);
    goto L0(r);
  D0():
    deopt 5 [where1];
  L1():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L2():
    value = ld value;
    check L74() else D27();
  L19():
    where2 = force? where1;
    checkMissing(where2);
    is_environment = ldf `is.environment` in base;
    r2 = dyn is_environment(where2);
    check L20() else D1();
  L21():
    where3 = ld where;
    check L22() else D2();
  D1():
    deopt 8 [r2];
  D2():
    deopt 9 [where3];
  D27():
    deopt 88 [value];
  L3(r4):
    c2 = `as.logical`(r4);
    if c2 then L27() else L4(c2);
  L20():
    goto L0(r2);
  L22():
    where4 = force? where3;
    checkMissing(where4);
    st value = where4;
    goto L2();
  L24():
    where6 = ld where;
    check L26() else D3();
  L25():
    r3 = dyn base1(<sym where>);
    goto L3(r3);
  L74():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  D3():
    deopt 13 [where6];
  L4(c4):
    c11 = `as.logical`(c4);
    if c11 then L33() else L6();
  L26():
    where7 = force? where6;
    checkMissing(where7);
    c1 = `is.character`(where7);
    goto L3(c1);
  L27():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L5(c7, r6):
    c8 = `as.logical`(r6);
    c9 = `&&`(c7, c8);
    goto L4(c9);
  L6():
    sym5 = ldf `is.numeric`;
    base5 = ldf `is.numeric` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L28():
    where8 = ld where;
    check L30() else D4();
  L29():
    r5 = dyn base2(<sym where>);
    goto L5(c2, r5);
  L33():
    _getNamespace = ldf `.getNamespace`;
    check L34() else D6();
  D4():
    deopt 18 [c2, where8];
  D6():
    deopt 24 [];
  L13(r29):
    c15 = `as.logical`(r29);
    if c15 then L64() else L14(c15);
  L30():
    where9 = force? where8;
    checkMissing(where9);
    nzchar = ldf nzchar in base;
    r7 = dyn nzchar(where9);
    check L31() else D5();
  L34():
    p = prom<V +>{
      where10 = ld where;
      where11 = force? where10;
      checkMissing(where11);
      return where11;
    };
    r9 = dyn _getNamespace(p);
    check L35() else D7();
  L60():
    where22 = ld where;
    check L62() else D21();
  L61():
    r28 = dyn base5(<sym where>);
    goto L13(r28);
  D5():
    deopt 21 [c2, r7];
  D7():
    deopt 26 [r9];
  D21():
    deopt 69 [where22];
  L14(c17):
    c21 = `as.logical`(c17);
    if c21 then L68() else L15();
  L31():
    goto L5(c2, r7);
  L35():
    st ns = r9;
    isNamespace = ldf isNamespace;
    check L36() else D8();
  L62():
    where23 = force? where22;
    checkMissing(where23);
    is_numeric = ldf `is.numeric` in base;
    r30 = dyn is_numeric(where23);
    check L63() else D22();
  L64():
    _in_2 = ldf `%in%`;
    check L65() else D23();
  D8():
    deopt 29 [];
  D22():
    deopt 72 [r30];
  D23():
    deopt 74 [c15];
  L15():
    goto L2();
  L36():
    p1 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      return ns1;
    };
    r11 = dyn isNamespace(p1);
    check L37() else D9();
  L63():
    goto L13(r30);
  L65():
    p7 = prom<V +>{
      where24 = ld where;
      where25 = force? where24;
      checkMissing(where25);
      return where25;
    };
    p8 = prom<V +>{
      sym6 = ldf seq_along;
      base6 = ldf seq_along in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      search2 = ldf search;
      r34 = dyn search2();
      r35 = seq_along(r34);
      goto L0(r35);
    L2():
      r32 = dyn base6(<lang search()>);
      goto L0(r32);
    };
    r37 = dyn _in_2(p7, p8);
    check L66() else D24();
  L68():
    sym7 = ldf `as.environment`;
    base7 = ldf `as.environment` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  D9():
    deopt 31 [r11];
  D24():
    deopt 77 [c15, r37];
  L16(r39):
    st value = r39;
    goto L2();
  L37():
    c12 = `as.logical`(r11);
    if c12 then L38() else L7();
  L66():
    c18 = `as.logical`(r37);
    c19 = `&&`(c15, c18);
    goto L14(c19);
  L69():
    where26 = ld where;
    check L71() else D25();
  L70():
    r38 = dyn base7(<sym where>);
    goto L16(r38);
  D25():
    deopt 81 [where26];
  L7():
    _in_ = ldf `%in%`;
    check L41() else D11();
  L8(ns4):
    goto L2();
  L38():
    ns2 = ld ns;
    check L39() else D10();
  L71():
    where27 = force? where26;
    checkMissing(where27);
    as_environment2 = ldf `as.environment` in base;
    r40 = dyn as_environment2(where27);
    check L72() else D26();
  D10():
    deopt 32 [ns2];
  D11():
    deopt 36 [];
  D26():
    deopt 84 [r40];
  L39():
    ns3 = force? ns2;
    checkMissing(ns3);
    st value = ns3;
    goto L8(ns3);
  L41():
    p2 = prom<V +>{
      where12 = ld where;
      where13 = force? where12;
      checkMissing(where13);
      return where13;
    };
    p3 = prom<V +>{
      search = ldf search;
      r13 = dyn search();
      return r13;
    };
    r15 = dyn _in_(p2, p3);
    check L42() else D12();
  L72():
    goto L16(r40);
  D12():
    deopt 39 [r15];
  L42():
    c13 = `as.logical`(r15);
    if c13 then L43() else L9();
  L9():
    paste0 = ldf paste0;
    check L49() else D15();
  L43():
    sym3 = ldf `as.environment`;
    base3 = ldf `as.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  D15():
    deopt 48 [];
  L10(r17):
    st value = r17;
    goto L8(r17);
  L44():
    where14 = ld where;
    check L46() else D13();
  L45():
    r16 = dyn base3(<sym where>);
    goto L10(r16);
  L49():
    p4 = prom<V +>{
      where16 = ld where;
      where17 = force? where16;
      checkMissing(where17);
      return where17;
    };
    r20 = dyn paste0("package:", p4);
    check L50() else D16();
  D13():
    deopt 42 [where14];
  D16():
    deopt 51 [r20];
  L46():
    where15 = force? where14;
    checkMissing(where15);
    as_environment = ldf `as.environment` in base;
    r18 = dyn as_environment(where15);
    check L47() else D14();
  L50():
    st where = r20;
    _in_1 = ldf `%in%`;
    check L51() else D17();
  D14():
    deopt 45 [r18];
  D17():
    deopt 54 [];
  L47():
    goto L10(r18);
  L51():
    p5 = prom<V +>{
      where18 = ld where;
      where19 = force? where18;
      checkMissing(where19);
      return where19;
    };
    p6 = prom<V +>{
      search1 = ldf search;
      r22 = dyn search1();
      return r22;
    };
    r24 = dyn _in_1(p5, p6);
    check L52() else D18();
  D18():
    deopt 57 [r24];
  L52():
    c14 = `as.logical`(r24);
    if c14 then L53() else L11();
  L11():
    goto L8(NULL);
  L53():
    sym4 = ldf `as.environment`;
    base4 = ldf `as.environment` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L54() else L55();
  L12(r26):
    st value = r26;
    goto L8(r26);
  L54():
    where20 = ld where;
    check L56() else D19();
  L55():
    r25 = dyn base4(<sym where>);
    goto L12(r25);
  D19():
    deopt 60 [where20];
  L56():
    where21 = force? where20;
    checkMissing(where21);
    as_environment1 = ldf `as.environment` in base;
    r27 = dyn as_environment1(where21);
    check L57() else D20();
  D20():
    deopt 63 [r27];
  L57():
    goto L12(r27);
  }
}