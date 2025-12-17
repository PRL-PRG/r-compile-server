fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3836830771;
    st `.getGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3836830771(f, where, package) {
  (reg f:*, reg where:*, reg package:*) -+> V { var f:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p:p(V +), var package:*, reg package_isMissing:L, reg package_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg _getGenericFromCache:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg where1:*, reg where2:V, reg p2:p(V +), reg package1:*, reg package2:V, reg p3:p(V +), reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg value:*, reg value1:V, reg c1:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg f3:*, reg f4:V, reg c3:L, reg c4:L, reg c6:V, reg _in_:cls, reg f5:*, reg f6:V, reg p4:p(V +), reg r14:V, reg c7:L, reg c8:V, reg c10:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg f7:*, reg f8:V, reg c11:L, reg c12:L, reg c14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg c17:L, reg r19:V, reg f9:*, reg f10:V, reg nzchar:cls, reg r20:V, reg r21:V, reg c18:L, reg c19:V, reg c21:L, reg message:cls, reg r22:V, reg dput:cls, reg sys_calls:cls, reg r23:V, reg p5:p(V +), reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg C_R_getGeneric:*, reg C_R_getGeneric1:V, reg f11:*, reg f12:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg C_R_getGeneric4:V, reg f15:V, reg r32:L, reg r33:V, reg where3:*, reg where4:V, reg as_environment:cls, reg r34:V, reg package3:*, reg package4:V, reg vargs:dots, reg r35:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r36:V, reg r37:V, reg value2:*, reg value3:V, reg c22:V, reg r38:V, reg c23:L, reg c25:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg c28:L, reg r40:V, reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg c29:L, reg c31:L, reg _GlobalEnv5:V, reg dr:V, reg dc:L, reg dx:V, reg c33:L, reg dx1:V, reg f16:*, reg f17:V, reg __:cls, reg r41:V, reg c34:V, reg r42:V, reg c35:L, reg c36:V, reg c38:L, reg c40:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg c43:L, reg r44:V, reg vv:*, reg vv1:V, reg value4:*, reg value5:V, reg identical:cls, reg r45:V, reg c44:L, reg c45:V, reg c47:L, reg _cacheGeneric:cls, reg f18:*, reg f19:V, reg p6:p(V +), reg value6:*, reg value7:V, reg p7:p(V +), reg r48:V, reg r49:V, reg value8:*, reg value9:V |
    mkenv;
    st f = f;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    goto L1(p);
  L1(where_orDefault):
    st where = where_orDefault;
    package_isMissing = missing.0(package);
    if package_isMissing then L2("") else L2(package);
  L2(package_orDefault):
    st package = package_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L3(r2):
    c = `as.logical`(r2);
    if c then L30() else L4();
  L28():
    missing = ldf missing in base;
    r3 = dyn missing(<sym where>);
    goto L3(r3);
  L29():
    r1 = dyn base(<sym where>);
    goto L3(r1);
  L4():
    goto L5(NULL);
  L5(r8):
    st value = r8;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L30():
    _getGenericFromCache = ldf `.getGenericFromCache`;
    check L31() else D0();
  D0():
    deopt 4 [];
  L6(r10):
    c2 = `as.logical`(r10);
    if c2 then L37() else L7();
  L31():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p2 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p3 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r7 = dyn _getGenericFromCache(p1, p2, p3);
    check L32() else D1();
  L34():
    value = ld value;
    check L36() else D2();
  L35():
    r9 = dyn base1(<sym value>);
    goto L6(r9);
  D1():
    deopt 8 [r7];
  D2():
    deopt 13 [value];
  L7():
    goto L27();
  L27():
    value8 = ld value;
    check L95() else D26();
  L32():
    goto L5(r7);
  L36():
    value1 = force? value;
    checkMissing(value1);
    c1 = `==`(value1, NULL);
    goto L6(c1);
  L37():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D26():
    deopt 106 [value8];
  L8(r12):
    c4 = `as.logical`(r12);
    if c4 then L41() else L9(c4);
  L38():
    f3 = ld f;
    check L40() else D3();
  L39():
    r11 = dyn base2(<sym f>);
    goto L8(r11);
  L95():
    value9 = force? value8;
    checkMissing(value9);
    popenv;
    return value9;
  D3():
    deopt 17 [f3];
  L9(c6):
    c10 = `as.logical`(c6);
    if c10 then L45() else L10();
  L40():
    f4 = force? f3;
    checkMissing(f4);
    c3 = `is.character`(f4);
    goto L8(c3);
  L41():
    _in_ = ldf `%in%`;
    check L42() else D4();
  D4():
    deopt 21 [c4];
  L10():
    goto L11();
  L11():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L42():
    p4 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r14 = dyn _in_(p4, "as.double");
    check L43() else D5();
  L45():
    st f = "as.numeric";
    goto L11();
  D5():
    deopt 24 [c4, r14];
  L12(r17):
    c12 = `as.logical`(r17);
    if c12 then L50() else L13(c12);
  L43():
    c7 = `as.logical`(r14);
    c8 = `&&`(c4, c7);
    goto L9(c8);
  L47():
    f7 = ld f;
    check L49() else D6();
  L48():
    r16 = dyn base3(<sym f>);
    goto L12(r16);
  D6():
    deopt 32 [f7];
  L13(c14):
    c21 = `as.logical`(c14);
    if c21 then L56() else L15();
  L49():
    f8 = force? f7;
    checkMissing(f8);
    c11 = `is.character`(f8);
    goto L12(c11);
  L50():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L14(c17, r19):
    r21 = `!`(r19);
    c18 = `as.logical`(r21);
    c19 = `&&`(c17, c18);
    goto L13(c19);
  L15():
    goto L16();
  L16():
    sym5 = ldf `.Call`;
    base5 = ldf `.Call` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L51():
    f9 = ld f;
    check L53() else D7();
  L52():
    r18 = dyn base4(<sym f>);
    goto L14(c12, r18);
  L56():
    message = ldf message;
    check L57() else D9();
  D7():
    deopt 37 [c12, f9];
  D9():
    deopt 44 [];
  L17(r28):
    st value = r28;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  L53():
    f10 = force? f9;
    checkMissing(f10);
    nzchar = ldf nzchar in base;
    r20 = dyn nzchar(f10);
    check L54() else D8();
  L57():
    r22 = dyn message("Empty function name in .getGeneric");
    check L58() else D10();
  L62():
    C_R_getGeneric = ld C_R_getGeneric;
    check L64() else D13();
  L63():
    r27 = dyn base5(<sym C_R_getGeneric>, <sym f>, FALSE, <lang as.environment(where)>, <sym package>);
    goto L17(r27);
  D8():
    deopt 40 [c12, r20];
  D10():
    deopt 46 [r22];
  D13():
    deopt 54 [C_R_getGeneric];
  L19(r37):
    r38 = `!`(r37);
    c23 = `as.logical`(r38);
    if c23 then L74() else L20(c23);
  L54():
    goto L14(c12, r20);
  L58():
    dput = ldf dput;
    check L59() else D11();
  L64():
    C_R_getGeneric1 = force? C_R_getGeneric;
    checkMissing(C_R_getGeneric1);
    f11 = ld f;
    check L65() else D14();
  L71():
    value2 = ld value;
    check L73() else D18();
  L72():
    r36 = dyn base7(<sym value>);
    goto L19(r36);
  D11():
    deopt 48 [];
  D14():
    deopt 55 [C_R_getGeneric1, f11];
  D18():
    deopt 67 [value2];
  L20(c25):
    c38 = `as.logical`(c25);
    if c38 then L83() else L23(c38);
  L59():
    p5 = prom<V +>{
      sys_calls = ldf `sys.calls`;
      r23 = dyn sys_calls();
      return r23;
    };
    r25 = dyn dput(p5);
    check L60() else D12();
  L65():
    f12 = force? f11;
    checkMissing(f12);
    sym6 = ldf `as.environment`;
    base6 = ldf `as.environment` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L73():
    value3 = force? value2;
    checkMissing(value3);
    c22 = `==`(value3, NULL);
    goto L19(c22);
  L74():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L75() else L76();
  D12():
    deopt 50 [r25];
  L18(C_R_getGeneric4, f15, r32, r33):
    package3 = ld package;
    check L70() else D17();
  L21(c28, r40):
    r42 = `!`(r40);
    c35 = `as.logical`(r42);
    c36 = `&&`(c28, c35);
    goto L20(c36);
  L23(c40):
    c47 = `as.logical`(c40);
    if c47 then L90() else L25();
  L60():
    goto L16();
  L66():
    where3 = ld where;
    check L68() else D15();
  L67():
    r31 = dyn base6(<sym where>);
    goto L18(C_R_getGeneric1, f12, FALSE, r31);
  L75():
    _GlobalEnv2 = ld `.GlobalEnv`;
    check L77() else D19();
  L76():
    r39 = dyn base8(<lang `<-`(vv, `[[`(.GlobalEnv, f))>);
    goto L21(c23, r39);
  L83():
    sym9 = ldf identical;
    base9 = ldf identical in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  D15():
    deopt 59 [C_R_getGeneric1, f12, FALSE, where3];
  D17():
    deopt 62 [C_R_getGeneric4, f15, r32, r33, package3];
  D19():
    deopt 72 [c23, _GlobalEnv2];
  L24(c43, r44):
    c44 = `as.logical`(r44);
    c45 = `&&`(c43, c44);
    goto L23(c45);
  L25():
    goto L26(NULL);
  L26(r49):
    goto L27();
  L68():
    where4 = force? where3;
    checkMissing(where4);
    as_environment = ldf `as.environment` in base;
    r34 = dyn as_environment(where4);
    check L69() else D16();
  L70():
    package4 = force? package3;
    checkMissing(package4);
    vargs = dots[f15, r32, r33, package4];
    r35 = `.Call`(C_R_getGeneric4, vargs, <missing>);
    goto L17(r35);
  L77():
    _GlobalEnv3 = force? _GlobalEnv2;
    checkMissing(_GlobalEnv3);
    c29 = `is.object`(_GlobalEnv3);
    if c29 then L78() else L79(c23, _GlobalEnv3);
  L84():
    vv = ld vv;
    check L86() else D21();
  L85():
    r43 = dyn base9(<sym vv>, <sym value>);
    goto L24(c38, r43);
  L90():
    _cacheGeneric = ldf `.cacheGeneric`;
    check L91() else D24();
  D16():
    deopt 62 [C_R_getGeneric1, f12, FALSE, r34];
  D21():
    deopt 83 [c38, vv];
  D24():
    deopt 98 [];
  L22(c33, dx1):
    st vv = dx1;
    c34 = `==`(dx1, NULL);
    goto L21(c33, c34);
  L69():
    goto L18(C_R_getGeneric1, f12, FALSE, r34);
  L78():
    dr = tryDispatchBuiltin.1("[[", _GlobalEnv3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L80() else L79(c23, dr);
  L79(c31, _GlobalEnv5):
    f16 = ld f;
    check L81() else D20();
  L86():
    vv1 = force? vv;
    checkMissing(vv1);
    value4 = ld value;
    check L87() else D22();
  L91():
    p6 = prom<V +>{
      f18 = ld f;
      f19 = force? f18;
      checkMissing(f19);
      return f19;
    };
    p7 = prom<V +>{
      value6 = ld value;
      value7 = force? value6;
      checkMissing(value7);
      return value7;
    };
    r48 = dyn _cacheGeneric(p6, p7);
    check L92() else D25();
  D20():
    deopt 74 [c31, _GlobalEnv5, f16];
  D22():
    deopt 85 [c38, value4];
  D25():
    deopt 101 [r48];
  L80():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(c23, dx);
  L81():
    f17 = force? f16;
    __ = ldf `[[` in base;
    r41 = dyn __(_GlobalEnv5, f17);
    goto L22(c31, r41);
  L87():
    value5 = force? value4;
    checkMissing(value5);
    identical = ldf identical in base;
    r45 = dyn identical(vv1, value5, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L88() else D23();
  L92():
    goto L26(r48);
  D23():
    deopt 95 [c38, r45];
  L88():
    goto L24(c38, r45);
  }
}