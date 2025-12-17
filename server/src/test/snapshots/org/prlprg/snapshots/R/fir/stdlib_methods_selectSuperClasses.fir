fun main() {
  () -+> V { reg r:cls, reg setClass:cls, reg r1:V, reg setClass1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg r6:V, reg setClass2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg setClass3:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg c2:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg setClass4:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg c3:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg extends:cls, reg r22:V, reg selectSuperClasses:cls, reg r23:V, reg selectSuperClasses1:cls, reg r24:V, reg selectSuperClasses2:cls, reg r25:V |
    mkenv;
    r = clos inner1166355896;
    st selectSuperClasses = r;
    setClass = ldf setClass;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn setClass("Root");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    setClass1 = ldf setClass;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("integer");
      goto L0(r4);
    L2():
      r2 = dyn base[length]("integer");
      goto L0(r2);
    };
    r6 = dyn setClass1[, contains, slots]("Base", "Root", p);
    check L3() else D3();
  D3():
    deopt 14 [r6];
  L3():
    setClass2 = ldf setClass;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("numeric");
      goto L0(r9);
    L2():
      r7 = dyn base1[x]("numeric");
      goto L0(r7);
    };
    r11 = dyn setClass2[, contains, slots]("A", "Base", p1);
    check L5() else D5();
  D5():
    deopt 22 [r11];
  L5():
    setClass3 = ldf setClass;
    check L6() else D6();
  D6():
    deopt 24 [];
  L6():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c2 = ldf c in base;
      r14 = dyn c2("character");
      goto L0(r14);
    L2():
      r12 = dyn base2[y]("character");
      goto L0(r12);
    };
    r16 = dyn setClass3[, contains, slots]("B", "Base", p2);
    check L7() else D7();
  D7():
    deopt 30 [r16];
  L7():
    setClass4 = ldf setClass;
    check L8() else D8();
  D8():
    deopt 32 [];
  L8():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      c3 = ldf c in base;
      r19 = dyn c3("A", "B");
      goto L0(r19);
    L2():
      r17 = dyn base3("A", "B");
      goto L0(r17);
    };
    r21 = dyn setClass4[, contains]("C", p3);
    check L9() else D9();
  D9():
    deopt 36 [r21];
  L9():
    extends = ldf extends;
    check L10() else D10();
  D10():
    deopt 38 [];
  L10():
    r22 = dyn extends("C");
    check L11() else D11();
  D11():
    deopt 40 [r22];
  L11():
    selectSuperClasses = ldf selectSuperClasses;
    check L12() else D12();
  D12():
    deopt 42 [];
  L12():
    r23 = dyn selectSuperClasses("C");
    check L13() else D13();
  D13():
    deopt 44 [r23];
  L13():
    selectSuperClasses1 = ldf selectSuperClasses;
    check L14() else D14();
  D14():
    deopt 46 [];
  L14():
    r24 = dyn selectSuperClasses1[, directOnly]("C", FALSE);
    check L15() else D15();
  D15():
    deopt 50 [r24];
  L15():
    selectSuperClasses2 = ldf selectSuperClasses;
    check L16() else D16();
  D16():
    deopt 52 [];
  L16():
    r25 = dyn selectSuperClasses2[, dropVirtual, directOnly]("C", TRUE, FALSE);
    check L17() else D17();
  D17():
    deopt 58 [r25];
  L17():
    popenv;
    return r25;
  }
}
fun inner1166355896(Class, dropVirtual, namesOnly, directOnly, simpleOnly, where) {
  (reg Class:*, reg dropVirtual:*, reg namesOnly:*, reg directOnly:*, reg simpleOnly:*, reg where:*) -+> V { var Class:*, var dropVirtual:*, reg dropVirtual_isMissing:L, reg dropVirtual_orDefault:*, var namesOnly:*, reg namesOnly_isMissing:L, reg namesOnly_orDefault:*, var directOnly:*, reg directOnly_isMissing:L, reg directOnly_orDefault:*, var simpleOnly:*, reg simpleOnly_isMissing:L, reg simpleOnly_orDefault:*, reg directOnly1:*, reg directOnly2:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg isClassDef:cls, reg Class1:*, reg Class2:V, reg p3:p(V +), reg r6:V, reg c:L, reg __:cls, reg r7:V, reg r8:V, reg isClass:cls, reg Class3:*, reg Class4:V, reg p4:p(V +), reg where1:*, reg where2:V, reg p5:p(V +), reg r11:V, reg c1:L, reg __1:cls, reg r12:V, reg stop:cls, reg r13:V, reg _selectSuperClasses:cls, reg ext:*, reg ext1:V, reg p6:p(V +), reg dropVirtual1:*, reg dropVirtual2:V, reg p7:p(V +), reg namesOnly1:*, reg namesOnly2:V, reg p8:p(V +), reg directOnly3:*, reg directOnly4:V, reg p9:p(V +), reg simpleOnly1:*, reg simpleOnly2:V, reg p10:p(V +), reg r19:V |
    mkenv;
    st Class = Class;
    dropVirtual_isMissing = missing.0(dropVirtual);
    if dropVirtual_isMissing then L0(FALSE) else L0(dropVirtual);
  L0(dropVirtual_orDefault):
    st dropVirtual = dropVirtual_orDefault;
    namesOnly_isMissing = missing.0(namesOnly);
    if namesOnly_isMissing then L1(TRUE) else L1(namesOnly);
  L1(namesOnly_orDefault):
    st namesOnly = namesOnly_orDefault;
    directOnly_isMissing = missing.0(directOnly);
    if directOnly_isMissing then L2(TRUE) else L2(directOnly);
  L2(directOnly_orDefault):
    st directOnly = directOnly_orDefault;
    simpleOnly_isMissing = missing.0(simpleOnly);
    if simpleOnly_isMissing then L3() else L4(simpleOnly);
  L3():
    p = prom<V +>{
      directOnly1 = ld directOnly;
      directOnly2 = force? directOnly1;
      checkMissing(directOnly2);
      return directOnly2;
    };
    goto L4(p);
  L4(simpleOnly_orDefault):
    st simpleOnly = simpleOnly_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L5() else L6(where);
  L5():
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
    goto L6(p2);
  L6(where_orDefault):
    st where = where_orDefault;
    isClassDef = ldf isClassDef;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p3 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r6 = dyn isClassDef(p3);
    check L11() else D1();
  D1():
    deopt 3 [r6];
  L11():
    c = `as.logical`(r6);
    if c then L12() else L7();
  L7():
    isClass = ldf isClass;
    check L14() else D2();
  L8(r8):
    st ext = r8;
    _selectSuperClasses = ldf `.selectSuperClasses`;
    check L20() else D6();
  L12():
    __ = ldf `@` in base;
    r7 = dyn __(<sym Class>, <sym contains>);
    goto L8(r7);
  D2():
    deopt 7 [];
  D6():
    deopt 20 [];
  L14():
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
    r11 = dyn isClass[, where](p4, p5);
    check L15() else D3();
  L20():
    p6 = prom<V +>{
      ext = ld ext;
      ext1 = force? ext;
      checkMissing(ext1);
      return ext1;
    };
    p7 = prom<V +>{
      dropVirtual1 = ld dropVirtual;
      dropVirtual2 = force? dropVirtual1;
      checkMissing(dropVirtual2);
      return dropVirtual2;
    };
    p8 = prom<V +>{
      namesOnly1 = ld namesOnly;
      namesOnly2 = force? namesOnly1;
      checkMissing(namesOnly2);
      return namesOnly2;
    };
    p9 = prom<V +>{
      directOnly3 = ld directOnly;
      directOnly4 = force? directOnly3;
      checkMissing(directOnly4);
      return directOnly4;
    };
    p10 = prom<V +>{
      simpleOnly1 = ld simpleOnly;
      simpleOnly2 = force? simpleOnly1;
      checkMissing(simpleOnly2);
      return simpleOnly2;
    };
    r19 = dyn _selectSuperClasses[, dropVirtual, namesOnly, directOnly, simpleOnly](p6, p7, p8, p9, p10);
    check L21() else D7();
  D3():
    deopt 11 [r11];
  D7():
    deopt 30 [r19];
  L15():
    c1 = `as.logical`(r11);
    if c1 then L16() else L9();
  L21():
    popenv;
    return r19;
  L9():
    stop = ldf stop;
    check L18() else D4();
  L16():
    __1 = ldf `@` in base;
    r12 = dyn __1(<lang getClass(Class, where=where)>, <sym contains>);
    goto L8(r12);
  D4():
    deopt 15 [];
  L18():
    r13 = dyn stop("'Class' must be a valid class definition or class");
    check L19() else D5();
  D5():
    deopt 17 [r13];
  L19():
    goto L8(r13);
  }
}