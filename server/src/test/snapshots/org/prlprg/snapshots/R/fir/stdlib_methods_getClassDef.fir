fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner575520046;
    st getClassDef = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner575520046(Class, where, package, inherits) {
  (reg Class:*, reg where:*, reg package:*, reg inherits:*) -+> V { var Class:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var package:*, reg package_isMissing:L, reg package_orDefault:*, reg packageSlot:cls, reg Class1:*, reg Class2:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, reg inherits1:*, reg inherits2:V, reg c:L, reg _getClassesFromCache:cls, reg Class3:*, reg Class4:V, reg p4:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg value:*, reg value1:V, reg is_list:cls, reg r11:V, reg c1:L, reg _resolveClassList:cls, reg value2:*, reg value3:V, reg p5:p(V +), reg where1:*, reg where2:V, reg p6:p(V +), reg package1:*, reg package2:V, reg p7:p(V +), reg r15:V, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg value4:*, reg value5:V, reg c2:V, reg c3:L, reg classMetaName:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg Class5:*, reg Class6:V, reg length:cls, reg r22:V, reg r23:V, reg c4:L, reg Class7:*, reg Class8:V, reg c5:L, reg Class10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r24:V, reg Class11:*, reg Class12:V, reg p8:p(V +), reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg where3:*, reg where4:V, reg c6:L, reg c7:L, reg where5:*, reg where6:V, reg isTRUE:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg package3:*, reg package4:V, reg nzchar:cls, reg r31:V, reg p9:p(V +), reg r33:V, reg c8:L, reg _requirePackage:cls, reg package5:*, reg package6:V, reg p10:p(V +), reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg package7:*, reg package8:V, reg is_environment:cls, reg r39:V, reg c9:L, reg get0:cls, reg cname:*, reg cname1:V, reg p11:p(V +), reg package9:*, reg package10:V, reg p12:p(V +), reg inherits3:*, reg inherits4:V, reg p13:p(V +), reg r43:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg value6:*, reg value7:V, reg c10:V, reg c11:L, reg get1:cls, reg cname2:*, reg cname3:V, reg p14:p(V +), reg where8:*, reg where9:V, reg p15:p(V +), reg inherits5:*, reg inherits6:V, reg p16:p(V +), reg r50:V, reg r51:V, reg value8:*, reg value9:V |
    mkenv;
    st Class = Class;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    package_isMissing = missing.0(package);
    if package_isMissing then L2() else L3(package);
  L2():
    p3 = prom<V +>{
      packageSlot = ldf packageSlot;
      p2 = prom<V +>{
        Class1 = ld Class;
        Class2 = force? Class1;
        checkMissing(Class2);
        return Class2;
      };
      r5 = dyn packageSlot(p2);
      return r5;
    };
    goto L3(p3);
  L3(package_orDefault):
    st package = package_orDefault;
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L4(TRUE) else L4(inherits);
  L4(inherits_orDefault):
    st inherits = inherits_orDefault;
    inherits1 = ld inherits;
    check L24() else D0();
  D0():
    deopt 0 [inherits1];
  L24():
    inherits2 = force? inherits1;
    checkMissing(inherits2);
    c = `as.logical`(inherits2);
    if c then L25() else L5();
  L5():
    st value = NULL;
    goto L9();
  L9():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L25():
    _getClassesFromCache = ldf `.getClassesFromCache`;
    check L26() else D1();
  D1():
    deopt 3 [];
  L10(r19):
    c3 = `as.logical`(r19);
    if c3 then L40() else L11();
  L26():
    p4 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    r8 = dyn _getClassesFromCache(p4);
    check L27() else D2();
  L37():
    value4 = ld value;
    check L39() else D7();
  L38():
    r18 = dyn base1(<sym value>);
    goto L10(r18);
  D2():
    deopt 5 [r8];
  D7():
    deopt 26 [value4];
  L11():
    goto L23();
  L23():
    value8 = ld value;
    check L71() else D23();
  L27():
    st value = r8;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L39():
    value5 = force? value4;
    checkMissing(value5);
    c2 = `==`(value5, NULL);
    goto L10(c2);
  L40():
    classMetaName = ldf classMetaName;
    check L41() else D8();
  D8():
    deopt 30 [];
  D23():
    deopt 86 [value8];
  L6(r10):
    c1 = `as.logical`(r10);
    if c1 then L32() else L7();
  L28():
    value = ld value;
    check L30() else D3();
  L29():
    r9 = dyn base(<sym value>);
    goto L6(r9);
  L41():
    p8 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r21):
      r23 = `>`(r21, 1);
      c4 = `as.logical`(r23);
      if c4 then L5() else L1();
    L3():
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      length = ldf length in base;
      r22 = dyn length(Class6);
      goto L0(r22);
    L4():
      r20 = dyn base2(<sym Class>);
      goto L0(r20);
    L1():
      Class11 = ld Class;
      Class12 = force? Class11;
      checkMissing(Class12);
      return Class12;
    L5():
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      c5 = `is.object`(Class8);
      if c5 then L6() else L7(Class8);
    L2(dx1):
      return dx1;
    L6():
      dr = tryDispatchBuiltin.1("[[", Class8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L8() else L7(dr);
    L7(Class10):
      __ = ldf `[[` in base;
      r24 = dyn __(Class10, 1);
      goto L2(r24);
    L8():
      dx = getTryDispatchBuiltinValue(dr);
      goto L2(dx);
    };
    r26 = dyn classMetaName(p8);
    check L42() else D9();
  L71():
    value9 = force? value8;
    checkMissing(value9);
    popenv;
    return value9;
  D3():
    deopt 9 [value];
  D9():
    deopt 32 [r26];
  L7():
    goto L8(NULL);
  L8(r16):
    goto L9();
  L30():
    value1 = force? value;
    checkMissing(value1);
    is_list = ldf `is.list` in base;
    r11 = dyn is_list(value1);
    check L31() else D4();
  L32():
    _resolveClassList = ldf `.resolveClassList`;
    check L33() else D5();
  L42():
    st cname = r26;
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  D4():
    deopt 12 [r11];
  D5():
    deopt 14 [];
  L12(r28):
    c7 = `as.logical`(r28);
    if c7 then L46() else L13();
  L31():
    goto L6(r11);
  L33():
    p5 = prom<V +>{
      value2 = ld value;
      value3 = force? value2;
      checkMissing(value3);
      return value3;
    };
    p6 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p7 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r15 = dyn _resolveClassList(p5, p6, p7);
    check L34() else D6();
  L43():
    where3 = ld where;
    check L45() else D10();
  L44():
    r27 = dyn base3(<sym where>);
    goto L12(r27);
  D6():
    deopt 18 [r15];
  D10():
    deopt 35 [where3];
  L13():
    goto L14();
  L14():
    isTRUE = ldf isTRUE;
    check L49() else D12();
  L34():
    st value = r15;
    goto L8(r15);
  L45():
    where4 = force? where3;
    checkMissing(where4);
    c6 = `is.character`(where4);
    goto L12(c6);
  L46():
    where5 = ld where;
    check L47() else D11();
  D11():
    deopt 38 [where5];
  D12():
    deopt 44 [];
  L47():
    where6 = force? where5;
    checkMissing(where6);
    st package = where6;
    goto L14();
  L49():
    p9 = prom<V +>{
      sym4 = ldf nzchar;
      base4 = ldf nzchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      nzchar = ldf nzchar in base;
      r31 = dyn nzchar(package4);
      goto L0(r31);
    L2():
      r29 = dyn base4(<sym package>);
      goto L0(r29);
    };
    r33 = dyn isTRUE(p9);
    check L50() else D13();
  D13():
    deopt 46 [r33];
  L50():
    c8 = `as.logical`(r33);
    if c8 then L51() else L15();
  L15():
    goto L16();
  L16():
    sym5 = ldf `is.environment`;
    base5 = ldf `is.environment` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L51():
    _requirePackage = ldf `.requirePackage`;
    check L52() else D14();
  D14():
    deopt 48 [];
  L17(r38):
    c9 = `as.logical`(r38);
    if c9 then L59() else L18();
  L52():
    p10 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r35 = dyn _requirePackage(p10);
    check L53() else D15();
  L55():
    package7 = ld package;
    check L57() else D16();
  L56():
    r37 = dyn base5(<sym package>);
    goto L17(r37);
  D15():
    deopt 50 [r35];
  D16():
    deopt 56 [package7];
  L18():
    goto L19();
  L19():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L63() else L64();
  L53():
    st package = r35;
    goto L16();
  L57():
    package8 = force? package7;
    checkMissing(package8);
    is_environment = ldf `is.environment` in base;
    r39 = dyn is_environment(package8);
    check L58() else D17();
  L59():
    get0 = ldf get0;
    check L60() else D18();
  D17():
    deopt 59 [r39];
  D18():
    deopt 61 [];
  L20(r46):
    c11 = `as.logical`(r46);
    if c11 then L66() else L21();
  L58():
    goto L17(r39);
  L60():
    p11 = prom<V +>{
      cname = ld cname;
      cname1 = force? cname;
      checkMissing(cname1);
      return cname1;
    };
    p12 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    p13 = prom<V +>{
      inherits3 = ld inherits;
      inherits4 = force? inherits3;
      checkMissing(inherits4);
      return inherits4;
    };
    r43 = dyn get0[, , inherits](p11, p12, p13);
    check L61() else D19();
  L63():
    value6 = ld value;
    check L65() else D20();
  L64():
    r45 = dyn base6(<sym value>);
    goto L20(r45);
  D19():
    deopt 66 [r43];
  D20():
    deopt 71 [value6];
  L21():
    goto L22(NULL);
  L22(r51):
    goto L23();
  L61():
    st value = r43;
    goto L19();
  L65():
    value7 = force? value6;
    checkMissing(value7);
    c10 = `==`(value7, NULL);
    goto L20(c10);
  L66():
    get1 = ldf get0;
    check L67() else D21();
  D21():
    deopt 75 [];
  L67():
    p14 = prom<V +>{
      cname2 = ld cname;
      cname3 = force? cname2;
      checkMissing(cname3);
      return cname3;
    };
    p15 = prom<V +>{
      where8 = ld where;
      where9 = force? where8;
      checkMissing(where9);
      return where9;
    };
    p16 = prom<V +>{
      inherits5 = ld inherits;
      inherits6 = force? inherits5;
      checkMissing(inherits6);
      return inherits6;
    };
    r50 = dyn get1[, , inherits](p14, p15, p16);
    check L68() else D22();
  D22():
    deopt 80 [r50];
  L68():
    st value = r50;
    goto L22(r50);
  }
}