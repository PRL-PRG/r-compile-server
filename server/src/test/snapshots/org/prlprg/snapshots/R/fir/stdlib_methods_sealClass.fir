fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1266124685;
    st sealClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1266124685(Class, where) {
  (reg Class:*, reg where:*) -+> V { var Class:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c:L, reg findClass:cls, reg Class1:*, reg Class2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r9:V, reg c1:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r12:V, reg getClassDef:cls, reg Class3:*, reg Class4:V, reg p4:p(V +), reg where3:*, reg where4:V, reg p5:p(V +), reg r15:V, reg __1:cls, reg r16:V, reg r17:V, reg c2:L, reg l:*, reg ___:cls, reg r18:V, reg assignClassDef:cls, reg Class5:*, reg Class6:V, reg p6:p(V +), reg classDef:*, reg classDef1:V, reg p7:p(V +), reg where5:*, reg where6:V, reg p8:p(V +), reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg classDef2:*, reg classDef3:V, reg invisible:cls, reg r26:V |
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
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L2(r5):
    c = `as.logical`(r5);
    if c then L11() else L3();
  L9():
    missing = ldf missing in base;
    r6 = dyn missing(<sym where>);
    goto L2(r6);
  L10():
    r4 = dyn base(<sym where>);
    goto L2(r4);
  L3():
    goto L5();
  L5():
    getClassDef = ldf getClassDef;
    check L18() else D2();
  L11():
    findClass = ldf findClass;
    check L12() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 18 [];
  L12():
    p2 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r9 = dyn findClass[, unique, where](p2, "sealing the class", p3);
    check L13() else D1();
  L18():
    p4 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p5 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r15 = dyn getClassDef(p4, p5);
    check L19() else D3();
  D1():
    deopt 10 [r9];
  D3():
    deopt 21 [r15];
  L13():
    c1 = `is.object`(r9);
    if c1 then L14() else L15(r9);
  L19():
    st classDef = r15;
    __1 = ldf `@` in base;
    r16 = dyn __1(<sym classDef>, <sym sealed>);
    r17 = `!`(r16);
    c2 = `as.logical`(r17);
    if c2 then L20() else L6();
  L4(dx1):
    st where = dx1;
    goto L5();
  L6():
    goto L7();
  L7():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L14():
    dr = tryDispatchBuiltin.1("[[", r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(r11):
    __ = ldf `[[` in base;
    r12 = dyn __(r11, 1);
    goto L4(r12);
  L20():
    l = ld classDef;
    ___ = ldf `@<-`;
    check L21() else D4();
  D4():
    deopt 29 [TRUE, l, TRUE];
  L8(r25):
    popenv;
    return r25;
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L21():
    r18 = dyn ___(l, NULL, "sealed", TRUE);
    check L22() else D5();
  L26():
    classDef2 = ld classDef;
    check L28() else D8();
  L27():
    r24 = dyn base1(<sym classDef>);
    goto L8(r24);
  D5():
    deopt 32 [TRUE, r18];
  D8():
    deopt 44 [classDef2];
  L22():
    st classDef = r18;
    assignClassDef = ldf assignClassDef;
    check L23() else D6();
  L28():
    classDef3 = force? classDef2;
    checkMissing(classDef3);
    invisible = ldf invisible in base;
    r26 = dyn invisible(classDef3);
    check L29() else D9();
  D6():
    deopt 35 [];
  D9():
    deopt 47 [r26];
  L23():
    p6 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    p7 = prom<V +>{
      classDef = ld classDef;
      classDef1 = force? classDef;
      checkMissing(classDef1);
      return classDef1;
    };
    p8 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r22 = dyn assignClassDef(p6, p7, p8);
    check L24() else D7();
  L29():
    goto L8(r26);
  D7():
    deopt 39 [r22];
  L24():
    goto L7();
  }
}