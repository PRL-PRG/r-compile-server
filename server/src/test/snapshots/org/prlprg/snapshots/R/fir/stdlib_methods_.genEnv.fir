fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner763439085;
    st `.genEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner763439085(f, default, package) {
  (reg f:*, reg default:*, reg package:*) -+> V { var f:*, var default:*, reg default_isMissing:L, reg default_orDefault:*, reg _requirePackage:cls, reg r:V, reg p:p(V +), var package:*, reg package_isMissing:L, reg package_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg package1:*, reg package2:V, reg nzchar:cls, reg r4:V, reg r5:V, reg c:L, reg packageSlot:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg package3:*, reg package4:V, reg c1:V, reg c2:L, reg default1:*, reg default2:V, reg _getGeneric:cls, reg f3:*, reg f4:V, reg p2:p(V +), reg value:*, reg value1:V, reg p3:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg def:*, reg def1:V, reg c3:V, reg c4:L, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg _getGeneric1:cls, reg f5:*, reg f6:V, reg p4:p(V +), reg value2:*, reg value3:V, reg p5:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg def2:*, reg def3:V, reg c5:V, reg c6:L, reg _requirePackage1:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg default3:*, reg default4:V, reg value4:*, reg value5:V, reg identical:cls, reg r24:V, reg r25:V, reg c7:L, reg _getGeneric2:cls, reg f7:*, reg f8:V, reg p6:p(V +), reg value6:*, reg value7:V, reg p7:p(V +), reg r28:V, reg r29:V, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg def4:*, reg def5:V, reg c8:V, reg c9:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg baseenv:cls, reg r36:V, reg value8:*, reg value9:V, reg _requirePackage2:cls, reg package5:*, reg package6:V, reg p8:p(V +), reg r38:V |
    mkenv;
    st f = f;
    default_isMissing = missing.0(default);
    if default_isMissing then L0() else L1(default);
  L0():
    p = prom<V +>{
      _requirePackage = ldf `.requirePackage`;
      r = dyn _requirePackage("methods");
      return r;
    };
    goto L1(p);
  L1(default_orDefault):
    st default = default_orDefault;
    package_isMissing = missing.0(package);
    if package_isMissing then L2("") else L2(package);
  L2(package_orDefault):
    st package = package_orDefault;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L3(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L24() else L4();
  L20():
    package1 = ld package;
    check L22() else D0();
  L21():
    r2 = dyn base(<sym package>);
    goto L3(r2);
  D0():
    deopt 2 [package1];
  L4():
    goto L5();
  L5():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L22():
    package2 = force? package1;
    checkMissing(package2);
    nzchar = ldf nzchar in base;
    r4 = dyn nzchar(package2);
    check L23() else D1();
  L24():
    packageSlot = ldf packageSlot;
    check L25() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 8 [];
  L6(r10):
    c2 = `as.logical`(r10);
    if c2 then L31() else L7();
  L23():
    goto L3(r4);
  L25():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r7 = dyn packageSlot(p1);
    check L26() else D3();
  L28():
    package3 = ld package;
    check L30() else D4();
  L29():
    r9 = dyn base1(<sym package>);
    goto L6(r9);
  D3():
    deopt 10 [r7];
  D4():
    deopt 15 [package3];
  L7():
    _requirePackage2 = ldf `.requirePackage`;
    check L69() else D23();
  L26():
    st package = r7;
    goto L5();
  L30():
    package4 = force? package3;
    checkMissing(package4);
    c1 = `==`(package4, NULL);
    goto L6(c1);
  L31():
    default1 = ld default;
    check L32() else D5();
  D5():
    deopt 18 [default1];
  D23():
    deopt 88 [];
  L32():
    default2 = force? default1;
    checkMissing(default2);
    st value = default2;
    _getGeneric = ldf `.getGeneric`;
    check L33() else D6();
  L69():
    p8 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r38 = dyn _requirePackage2(p8);
    check L70() else D24();
  D6():
    deopt 22 [];
  D24():
    deopt 90 [r38];
  L33():
    p2 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p3 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r13 = dyn _getGeneric(p2, p3);
    check L34() else D7();
  L70():
    popenv;
    return r38;
  D7():
    deopt 25 [r13];
  L34():
    st def = r13;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L8(r15):
    c4 = `as.logical`(r15);
    if c4 then L38() else L9();
  L35():
    def = ld def;
    check L37() else D8();
  L36():
    r14 = dyn base2(<sym def>);
    goto L8(r14);
  D8():
    deopt 28 [def];
  L9():
    goto L16();
  L16():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L37():
    def1 = force? def;
    checkMissing(def1);
    c3 = `==`(def1, NULL);
    goto L8(c3);
  L38():
    _GlobalEnv = ld `.GlobalEnv`;
    check L39() else D9();
  D9():
    deopt 31 [_GlobalEnv];
  L17(r33):
    c9 = `as.logical`(r33);
    if c9 then L62() else L18();
  L39():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    st value = _GlobalEnv1;
    _getGeneric1 = ldf `.getGeneric`;
    check L40() else D10();
  L59():
    def4 = ld def;
    check L61() else D20();
  L60():
    r32 = dyn base5(<sym def>);
    goto L17(r32);
  D10():
    deopt 35 [];
  D20():
    deopt 78 [def4];
  L18():
    value8 = ld value;
    check L67() else D22();
  L40():
    p4 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p5 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r18 = dyn _getGeneric1(p4, p5);
    check L41() else D11();
  L61():
    def5 = force? def4;
    checkMissing(def5);
    c8 = `==`(def5, NULL);
    goto L17(c8);
  L62():
    sym6 = ldf baseenv;
    base6 = ldf baseenv in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L63() else L64();
  D11():
    deopt 38 [r18];
  D22():
    deopt 85 [value8];
  L19(r35):
    popenv;
    return r35;
  L41():
    st def = r18;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L63():
    baseenv = ldf baseenv in base;
    r36 = dyn baseenv();
    check L65() else D21();
  L64():
    r34 = dyn base6();
    goto L19(r34);
  L67():
    value9 = force? value8;
    checkMissing(value9);
    popenv;
    return value9;
  D21():
    deopt 84 [r36];
  L10(r20):
    c6 = `as.logical`(r20);
    if c6 then L45() else L11();
  L42():
    def2 = ld def;
    check L44() else D12();
  L43():
    r19 = dyn base3(<sym def>);
    goto L10(r19);
  L65():
    goto L19(r36);
  D12():
    deopt 41 [def2];
  L11():
    goto L15(NULL);
  L15(r30):
    goto L16();
  L44():
    def3 = force? def2;
    checkMissing(def3);
    c5 = `==`(def3, NULL);
    goto L10(c5);
  L45():
    _requirePackage1 = ldf `.requirePackage`;
    check L46() else D13();
  D13():
    deopt 45 [];
  L46():
    r21 = dyn _requirePackage1("methods");
    check L47() else D14();
  D14():
    deopt 47 [r21];
  L47():
    st value = r21;
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L12(r23):
    r25 = `!`(r23);
    c7 = `as.logical`(r25);
    if c7 then L53() else L13();
  L48():
    default3 = ld default;
    check L50() else D15();
  L49():
    r22 = dyn base4(<sym default>, <sym value>);
    goto L12(r22);
  D15():
    deopt 51 [default3];
  L13():
    goto L14(NULL);
  L14(r29):
    goto L15(r29);
  L50():
    default4 = force? default3;
    checkMissing(default4);
    value4 = ld value;
    check L51() else D16();
  L53():
    _getGeneric2 = ldf `.getGeneric`;
    check L54() else D18();
  D16():
    deopt 53 [value4];
  D18():
    deopt 66 [];
  L51():
    value5 = force? value4;
    checkMissing(value5);
    identical = ldf identical in base;
    r24 = dyn identical(default4, value5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L52() else D17();
  L54():
    p6 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p7 = prom<V +>{
      value6 = ld value;
      value7 = force? value6;
      checkMissing(value7);
      return value7;
    };
    r28 = dyn _getGeneric2(p6, p7);
    check L55() else D19();
  D17():
    deopt 63 [r24];
  D19():
    deopt 69 [r28];
  L52():
    goto L12(r24);
  L55():
    st def = r28;
    goto L14(r28);
  }
}