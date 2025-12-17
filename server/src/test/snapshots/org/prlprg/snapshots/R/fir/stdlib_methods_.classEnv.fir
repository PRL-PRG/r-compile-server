fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner400929565;
    st `.classEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner400929565(Class, default, mustFind) {
  (reg Class:*, reg default:*, reg mustFind:*) -+> V { var Class:*, var default:*, reg default_isMissing:L, reg default_orDefault:*, reg _requirePackage:cls, reg r:V, reg p:p(V +), var mustFind:*, reg mustFind_isMissing:L, reg mustFind_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg Class1:*, reg Class2:V, reg c:L, reg c1:L, reg packageSlot:cls, reg Class3:*, reg Class4:V, reg p1:p(V +), reg r5:V, reg r6:V, reg __:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg package:*, reg package1:V, reg c2:V, reg c3:L, reg default1:*, reg default2:V, reg getClassDef:cls, reg Class5:*, reg Class6:V, reg p2:p(V +), reg value:*, reg value1:V, reg p3:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg def:*, reg def1:V, reg c4:V, reg c5:L, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg getClassDef1:cls, reg Class7:*, reg Class8:V, reg p4:p(V +), reg value2:*, reg value3:V, reg p5:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg def2:*, reg def3:V, reg c6:V, reg c7:L, reg _requirePackage1:cls, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg default3:*, reg default4:V, reg value4:*, reg value5:V, reg identical:cls, reg r23:V, reg r24:V, reg c8:L, reg getClassDef2:cls, reg Class9:*, reg Class10:V, reg p6:p(V +), reg value6:*, reg value7:V, reg p7:p(V +), reg r27:V, reg r28:V, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg def4:*, reg def5:V, reg c9:V, reg c10:L, reg c12:V, reg mustFind1:*, reg mustFind2:V, reg c13:L, reg c14:V, reg c16:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg Class11:*, reg Class12:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg r36:V, reg p10:p(V +), reg r38:V, reg value8:*, reg value9:V, reg _requirePackage2:cls, reg package2:*, reg package3:V, reg p11:p(V +), reg r41:V |
    mkenv;
    st Class = Class;
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
    mustFind_isMissing = missing.0(mustFind);
    if mustFind_isMissing then L2(TRUE) else L2(mustFind);
  L2(mustFind_orDefault):
    st mustFind = mustFind_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L3(r3):
    c1 = `as.logical`(r3);
    if c1 then L24() else L4();
  L21():
    Class1 = ld Class;
    check L23() else D0();
  L22():
    r2 = dyn base(<sym Class>);
    goto L3(r2);
  D0():
    deopt 1 [Class1];
  L4():
    __ = ldf `@` in base;
    r7 = dyn __(<sym Class>, <sym package>);
    goto L5(r7);
  L5(r6):
    st package = r6;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L23():
    Class2 = force? Class1;
    checkMissing(Class2);
    c = `is.character`(Class2);
    goto L3(c);
  L24():
    packageSlot = ldf packageSlot;
    check L25() else D1();
  D1():
    deopt 5 [];
  L6(r9):
    c3 = `as.logical`(r9);
    if c3 then L31() else L7();
  L25():
    p1 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    r5 = dyn packageSlot(p1);
    check L26() else D2();
  L28():
    package = ld package;
    check L30() else D3();
  L29():
    r8 = dyn base1(<sym package>);
    goto L6(r8);
  D2():
    deopt 7 [r5];
  D3():
    deopt 12 [package];
  L7():
    _requirePackage2 = ldf `.requirePackage`;
    check L71() else D24();
  L26():
    goto L5(r5);
  L30():
    package1 = force? package;
    checkMissing(package1);
    c2 = `==`(package1, NULL);
    goto L6(c2);
  L31():
    default1 = ld default;
    check L32() else D4();
  D4():
    deopt 15 [default1];
  D24():
    deopt 95 [];
  L32():
    default2 = force? default1;
    checkMissing(default2);
    st value = default2;
    getClassDef = ldf getClassDef;
    check L33() else D5();
  L71():
    p11 = prom<V +>{
      package2 = ld package;
      package3 = force? package2;
      checkMissing(package3);
      return package3;
    };
    r41 = dyn _requirePackage2(p11);
    check L72() else D25();
  D5():
    deopt 19 [];
  D25():
    deopt 97 [r41];
  L33():
    p2 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    p3 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r12 = dyn getClassDef(p2, p3, NULL);
    check L34() else D6();
  L72():
    popenv;
    return r41;
  D6():
    deopt 23 [r12];
  L34():
    st def = r12;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L8(r14):
    c5 = `as.logical`(r14);
    if c5 then L38() else L9();
  L35():
    def = ld def;
    check L37() else D7();
  L36():
    r13 = dyn base2(<sym def>);
    goto L8(r13);
  D7():
    deopt 26 [def];
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
    c4 = `==`(def1, NULL);
    goto L8(c4);
  L38():
    _GlobalEnv = ld `.GlobalEnv`;
    check L39() else D8();
  D8():
    deopt 29 [_GlobalEnv];
  L17(r32):
    c10 = `as.logical`(r32);
    if c10 then L62() else L18(c10);
  L39():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    st value = _GlobalEnv1;
    getClassDef1 = ldf getClassDef;
    check L40() else D9();
  L59():
    def4 = ld def;
    check L61() else D19();
  L60():
    r31 = dyn base5(<sym def>);
    goto L17(r31);
  D9():
    deopt 33 [];
  D19():
    deopt 78 [def4];
  L18(c12):
    c16 = `as.logical`(c12);
    if c16 then L65() else L19();
  L40():
    p4 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p5 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    r17 = dyn getClassDef1(p4, p5, NULL);
    check L41() else D10();
  L61():
    def5 = force? def4;
    checkMissing(def5);
    c9 = `==`(def5, NULL);
    goto L17(c9);
  L62():
    mustFind1 = ld mustFind;
    check L63() else D20();
  D10():
    deopt 37 [r17];
  D20():
    deopt 81 [c10, mustFind1];
  L19():
    goto L20();
  L20():
    value8 = ld value;
    check L69() else D23();
  L41():
    st def = r17;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L63():
    mustFind2 = force? mustFind1;
    checkMissing(mustFind2);
    c13 = `as.logical`(mustFind2);
    c14 = `&&`(c10, c13);
    goto L18(c14);
  L65():
    stop = ldf stop;
    check L66() else D21();
  D21():
    deopt 85 [];
  D23():
    deopt 92 [value8];
  L10(r19):
    c7 = `as.logical`(r19);
    if c7 then L45() else L11();
  L42():
    def2 = ld def;
    check L44() else D11();
  L43():
    r18 = dyn base3(<sym def>);
    goto L10(r18);
  L66():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p9 = prom<V +>{
        dQuote = ldf dQuote;
        p8 = prom<V +>{
          Class11 = ld Class;
          Class12 = force? Class11;
          checkMissing(Class12);
          return Class12;
        };
        r34 = dyn dQuote(p8);
        return r34;
      };
      r36 = dyn gettextf("unable to find an environment containing class %s", p9);
      return r36;
    };
    r38 = dyn stop[, domain](p10, NA_LGL);
    check L67() else D22();
  L69():
    value9 = force? value8;
    checkMissing(value9);
    popenv;
    return value9;
  D11():
    deopt 40 [def2];
  D22():
    deopt 89 [r38];
  L11():
    goto L15(NULL);
  L15(r29):
    goto L16();
  L44():
    def3 = force? def2;
    checkMissing(def3);
    c6 = `==`(def3, NULL);
    goto L10(c6);
  L45():
    _requirePackage1 = ldf `.requirePackage`;
    check L46() else D12();
  L67():
    goto L20();
  D12():
    deopt 44 [];
  L46():
    r20 = dyn _requirePackage1("methods");
    check L47() else D13();
  D13():
    deopt 46 [r20];
  L47():
    st value = r20;
    sym4 = ldf identical;
    base4 = ldf identical in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L12(r22):
    r24 = `!`(r22);
    c8 = `as.logical`(r24);
    if c8 then L53() else L13();
  L48():
    default3 = ld default;
    check L50() else D14();
  L49():
    r21 = dyn base4(<sym default>, <sym value>);
    goto L12(r21);
  D14():
    deopt 50 [default3];
  L13():
    goto L14(NULL);
  L14(r28):
    goto L15(r28);
  L50():
    default4 = force? default3;
    checkMissing(default4);
    value4 = ld value;
    check L51() else D15();
  L53():
    getClassDef2 = ldf getClassDef;
    check L54() else D17();
  D15():
    deopt 52 [value4];
  D17():
    deopt 65 [];
  L51():
    value5 = force? value4;
    checkMissing(value5);
    identical = ldf identical in base;
    r23 = dyn identical(default4, value5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L52() else D16();
  L54():
    p6 = prom<V +>{
      Class9 = ld Class;
      Class10 = force? Class9;
      checkMissing(Class10);
      return Class10;
    };
    p7 = prom<V +>{
      value6 = ld value;
      value7 = force? value6;
      checkMissing(value7);
      return value7;
    };
    r27 = dyn getClassDef2(p6, p7, NULL);
    check L55() else D18();
  D16():
    deopt 62 [r23];
  D18():
    deopt 69 [r27];
  L52():
    goto L12(r23);
  L55():
    st def = r27;
    goto L14(r27);
  }
}