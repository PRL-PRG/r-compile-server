fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3853165829;
    st assignMethodsMetaData = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3853165829(f, value, fdef, where) {
  (reg f:*, reg value:*, reg fdef:*, reg where:*) -+> V { var f:*, var value:*, var fdef:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r2:V, reg is:cls, reg value1:*, reg value2:V, reg p:p(V +), reg r4:V, reg c:L, reg _MlistDefunct:cls, reg r5:V, reg methodsPackageMetaName:cls, reg __:cls, reg r6:V, reg p1:p(V +), reg __1:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg exists:cls, reg mname:*, reg mname1:V, reg p3:p(V +), reg where3:*, reg where4:V, reg p4:p(V +), reg r13:V, reg c1:L, reg c3:V, reg bindingIsLocked:cls, reg mname2:*, reg mname3:V, reg p5:p(V +), reg where5:*, reg where6:V, reg p6:p(V +), reg r16:V, reg c4:L, reg c5:V, reg c7:L, reg r17:V, reg assign:cls, reg mname4:*, reg mname5:V, reg p7:p(V +), reg value3:*, reg value4:V, reg p8:p(V +), reg where7:*, reg where8:V, reg p9:p(V +), reg r21:V, reg dispatchIsInternal:cls, reg fdef1:*, reg fdef2:V, reg p10:p(V +), reg r24:V, reg c8:L, reg setPrimitiveMethods:cls, reg f1:*, reg f2:V, reg p11:p(V +), reg __2:cls, reg r26:V, reg p12:p(V +), reg fdef3:*, reg fdef4:V, reg p13:p(V +), reg r29:V, reg is1:cls, reg fdef5:*, reg fdef6:V, reg p14:p(V +), reg r32:V, reg c9:L, reg cacheGenericsMetaData:cls, reg f3:*, reg f4:V, reg p15:p(V +), reg fdef7:*, reg fdef8:V, reg p16:p(V +), reg where9:*, reg where10:V, reg p17:p(V +), reg __3:cls, reg r36:V, reg p18:p(V +), reg r38:V |
    mkenv;
    st f = f;
    st value = value;
    st fdef = fdef;
    st where = where;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    st where = r1;
    is = ldf is;
    check L13() else D2();
  L9():
    where1 = ld where;
    check L11() else D0();
  L10():
    r = dyn base(<sym where>);
    goto L0(r);
  D0():
    deopt 2 [where1];
  D2():
    deopt 8 [];
  L11():
    where2 = force? where1;
    checkMissing(where2);
    as_environment = ldf `as.environment` in base;
    r2 = dyn as_environment(where2);
    check L12() else D1();
  L13():
    p = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    r4 = dyn is(p, "MethodsList");
    check L14() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 11 [r4];
  L12():
    goto L0(r2);
  L14():
    c = `as.logical`(r4);
    if c then L15() else L1();
  L1():
    goto L5();
  L5():
    dispatchIsInternal = ldf dispatchIsInternal;
    check L31() else D14();
  L15():
    _MlistDefunct = ldf `.MlistDefunct`;
    check L16() else D4();
  D4():
    deopt 13 [];
  D14():
    deopt 47 [];
  L16():
    r5 = dyn _MlistDefunct();
    check L17() else D5();
  L31():
    p10 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r24 = dyn dispatchIsInternal(p10);
    check L32() else D15();
  D5():
    deopt 14 [r5];
  D15():
    deopt 49 [r24];
  L17():
    methodsPackageMetaName = ldf methodsPackageMetaName;
    check L18() else D6();
  L32():
    c8 = `as.logical`(r24);
    if c8 then L33() else L6();
  D6():
    deopt 16 [];
  L6():
    goto L7();
  L7():
    is1 = ldf is;
    check L37() else D18();
  L18():
    p1 = prom<V +>{
      __ = ldf `@` in base;
      r6 = dyn __(<sym fdef>, <sym generic>);
      return r6;
    };
    p2 = prom<V +>{
      __1 = ldf `@` in base;
      r8 = dyn __1(<sym fdef>, <sym package>);
      return r8;
    };
    r10 = dyn methodsPackageMetaName("M", p1, p2);
    check L19() else D7();
  L33():
    setPrimitiveMethods = ldf setPrimitiveMethods;
    check L34() else D16();
  D7():
    deopt 20 [r10];
  D16():
    deopt 51 [];
  D18():
    deopt 61 [];
  L19():
    st mname = r10;
    exists = ldf exists;
    check L20() else D8();
  L34():
    p11 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p12 = prom<V +>{
      __2 = ldf `@` in base;
      r26 = dyn __2(<sym fdef>, <sym default>);
      return r26;
    };
    p13 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r29 = dyn setPrimitiveMethods(p11, p12, "reset", p13, NULL);
    check L35() else D17();
  L37():
    p14 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    r32 = dyn is1(p14, "groupGenericFunction");
    check L38() else D19();
  D8():
    deopt 23 [];
  D17():
    deopt 57 [r29];
  D19():
    deopt 64 [r32];
  L20():
    p3 = prom<V +>{
      mname = ld mname;
      mname1 = force? mname;
      checkMissing(mname1);
      return mname1;
    };
    p4 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r13 = dyn exists[, envir, inherits](p3, p4, FALSE);
    check L21() else D9();
  L35():
    goto L7();
  L38():
    c9 = `as.logical`(r32);
    if c9 then L39() else L8();
  D9():
    deopt 29 [r13];
  L8():
    invisible.0();
    popenv;
    return NULL;
  L21():
    c1 = `as.logical`(r13);
    if c1 then L22() else L2(c1);
  L39():
    cacheGenericsMetaData = ldf cacheGenericsMetaData;
    check L40() else D20();
  D20():
    deopt 66 [];
  L2(c3):
    c7 = `as.logical`(c3);
    if c7 then L26() else L3();
  L22():
    bindingIsLocked = ldf bindingIsLocked;
    check L23() else D10();
  L40():
    p15 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p16 = prom<V +>{
      fdef7 = ld fdef;
      fdef8 = force? fdef7;
      checkMissing(fdef8);
      return fdef8;
    };
    p17 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    p18 = prom<V +>{
      __3 = ldf `@` in base;
      r36 = dyn __3(<sym fdef>, <sym package>);
      return r36;
    };
    r38 = dyn cacheGenericsMetaData[, , where, package](p15, p16, p17, p18);
    check L41() else D21();
  D10():
    deopt 31 [c1];
  D21():
    deopt 73 [r38];
  L3():
    assign = ldf assign;
    check L28() else D12();
  L4(r17):
    goto L5();
  L23():
    p5 = prom<V +>{
      mname2 = ld mname;
      mname3 = force? mname2;
      checkMissing(mname3);
      return mname3;
    };
    p6 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r16 = dyn bindingIsLocked(p5, p6);
    check L24() else D11();
  L26():
    goto L4(NULL);
  L41():
    popenv;
    return r38;
  D11():
    deopt 34 [c1, r16];
  D12():
    deopt 39 [];
  L24():
    c4 = `as.logical`(r16);
    c5 = `&&`(c1, c4);
    goto L2(c5);
  L28():
    p7 = prom<V +>{
      mname4 = ld mname;
      mname5 = force? mname4;
      checkMissing(mname5);
      return mname5;
    };
    p8 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p9 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r21 = dyn assign(p7, p8, p9);
    check L29() else D13();
  D13():
    deopt 43 [r21];
  L29():
    goto L4(r21);
  }
}