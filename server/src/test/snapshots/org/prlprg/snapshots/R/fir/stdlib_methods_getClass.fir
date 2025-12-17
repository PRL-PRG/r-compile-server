fun main() {
  () -+> V { reg r:cls, reg getClass:cls, reg r1:V, reg getClass1:cls, reg r2:V, reg cld:*, reg cld1:V, reg __:cls, reg r3:V, reg r4:cls, reg cld2:*, reg cld3:V, reg p:p(V +), reg r6:V, reg try:cls, reg getClass2:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg try1:cls, reg getClassDef:cls, reg r10:V, reg p2:p(V +), reg r12:V |
    mkenv;
    r = clos inner2431373493;
    st getClass = r;
    getClass = ldf getClass;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn getClass("numeric");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    getClass1 = ldf getClass;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r2 = dyn getClass1[, `.Force`]("thisIsAnUndefinedClass", TRUE);
    check L3() else D3();
  D3():
    deopt 12 [r2];
  L3():
    st cld = r2;
    cld = ld cld;
    check L4() else D4();
  D4():
    deopt 14 [cld];
  L4():
    cld1 = force? cld;
    checkMissing(cld1);
    __ = ldf `::`;
    check L5() else D5();
  D5():
    deopt 17 [];
  L5():
    r3 = dyn __("utils", "str");
    check L6() else D6();
  D6():
    deopt 20 [r3];
  L6():
    checkFun.0(r3);
    r4 = r3 as cls;
    p = prom<V +>{
      cld2 = ld cld;
      cld3 = force? cld2;
      checkMissing(cld3);
      return cld3;
    };
    r6 = dyn r4(p);
    check L7() else D7();
  D7():
    deopt 23 [r6];
  L7():
    try = ldf try;
    check L8() else D8();
  D8():
    deopt 25 [];
  L8():
    p1 = prom<V +>{
      getClass2 = ldf getClass;
      r7 = dyn getClass2("thisIsAnUndefinedClass");
      return r7;
    };
    r9 = dyn try(p1);
    check L9() else D9();
  D9():
    deopt 27 [r9];
  L9():
    try1 = ldf try;
    check L10() else D10();
  D10():
    deopt 29 [];
  L10():
    p2 = prom<V +>{
      getClassDef = ldf getClassDef;
      r10 = dyn getClassDef("thisIsAnUndefinedClass");
      return r10;
    };
    r12 = dyn try1(p2);
    check L11() else D11();
  D11():
    deopt 31 [r12];
  L11():
    popenv;
    return r12;
  }
}
fun inner2431373493(Class, `.Force`, where) {
  (reg Class:*, reg _Force:*, reg where:*) -+> V { var Class:*, var `.Force`:*, reg _Force_isMissing:L, reg _Force_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg _classEnv:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg topenv:cls, reg parent_frame:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg getClassDef:cls, reg Class3:*, reg Class4:V, reg p4:p(V +), reg where1:*, reg where2:V, reg p5:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg value:*, reg value1:V, reg c:V, reg c1:L, reg _Force1:*, reg _Force2:V, reg r12:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg Class5:*, reg Class6:V, reg p6:p(V +), reg r14:V, reg p7:p(V +), reg r16:V, reg p8:p(V +), reg r18:V, reg r19:V, reg makeClassRepresentation:cls, reg Class7:*, reg Class8:V, reg p9:p(V +), reg where3:*, reg where4:V, reg p10:p(V +), reg r22:V, reg value2:*, reg value3:V |
    mkenv;
    st Class = Class;
    _Force_isMissing = missing.0(_Force);
    if _Force_isMissing then L0(FALSE) else L0(_Force);
  L0(_Force_orDefault):
    st `.Force` = _Force_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
    p3 = prom<V +>{
      _classEnv = ldf `.classEnv`;
      p = prom<V +>{
        Class1 = ld Class;
        Class2 = force? Class1;
        checkMissing(Class2);
        return Class2;
      };
      p2 = prom<V +>{
        topenv = ldf topenv;
        p1 = prom<V +>{
          parent_frame = ldf `parent.frame`;
          r1 = dyn parent_frame();
          return r1;
        };
        r3 = dyn topenv(p1);
        return r3;
      };
      r5 = dyn _classEnv(p, p2, FALSE);
      return r5;
    };
    goto L2(p3);
  L2(where_orDefault):
    st where = where_orDefault;
    getClassDef = ldf getClassDef;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p4 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p5 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r9 = dyn getClassDef(p4, p5);
    check L9() else D1();
  D1():
    deopt 4 [r9];
  L9():
    st value = r9;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L3(r11):
    c1 = `as.logical`(r11);
    if c1 then L13() else L4();
  L10():
    value = ld value;
    check L12() else D2();
  L11():
    r10 = dyn base(<sym value>);
    goto L3(r10);
  D2():
    deopt 7 [value];
  L4():
    goto L7();
  L7():
    value2 = ld value;
    check L22() else D8();
  L12():
    value1 = force? value;
    checkMissing(value1);
    c = `==`(value1, NULL);
    goto L3(c);
  L13():
    _Force1 = ld `.Force`;
    check L14() else D3();
  D3():
    deopt 10 [_Force1];
  D8():
    deopt 32 [value2];
  L14():
    _Force2 = force? _Force1;
    checkMissing(_Force2);
    r12 = `!`(_Force2);
    c2 = `as.logical`(r12);
    if c2 then L15() else L5();
  L22():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  L5():
    makeClassRepresentation = ldf makeClassRepresentation;
    check L19() else D6();
  L6(r19):
    goto L7();
  L15():
    stop = ldf stop;
    check L16() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 20 [];
  L16():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          Class5 = ld Class;
          Class6 = force? Class5;
          checkMissing(Class6);
          return Class6;
        };
        r14 = dyn dQuote(p6);
        return r14;
      };
      r16 = dyn gettextf("%s is not a defined class", p7);
      return r16;
    };
    r18 = dyn stop[, domain](p8, NA_LGL);
    check L17() else D5();
  L19():
    p9 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p10 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r22 = dyn makeClassRepresentation[, package, virtual, where](p9, "base", TRUE, p10);
    check L20() else D7();
  D5():
    deopt 18 [r18];
  D7():
    deopt 28 [r22];
  L17():
    goto L6(r18);
  L20():
    st value = r22;
    goto L6(r22);
  }
}