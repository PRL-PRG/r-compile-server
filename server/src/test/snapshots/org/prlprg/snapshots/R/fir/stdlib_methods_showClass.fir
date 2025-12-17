fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner235245266;
    st showClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner235245266(Class, complete, propertiesAreCalled) {
  (reg Class:*, reg complete:*, reg propertiesAreCalled:*) -+> V { var Class:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, var propertiesAreCalled:*, reg propertiesAreCalled_isMissing:L, reg propertiesAreCalled_orDefault:*, reg isClassDef:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg r1:V, reg c:L, reg Class3:*, reg Class4:V, reg __:cls, reg r2:V, reg complete1:*, reg complete2:V, reg c1:L, reg getClass:cls, reg Class5:*, reg Class6:V, reg p1:p(V +), reg r5:V, reg getClassDef:cls, reg Class7:*, reg Class8:V, reg p2:p(V +), reg r7:V, reg cat:cls, reg isTRUE:cls, reg __1:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg c2:L, reg p4:p(V +), reg _dQ:cls, reg Class9:*, reg Class10:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r15:V, reg r16:V, reg __2:cls, reg r17:V, reg nzchar:cls, reg r18:V, reg c3:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg pkg:*, reg pkg1:V, reg r21:V, reg c4:L, reg r22:S, reg pkg2:*, reg pkg3:V, reg c5:cls, reg r23:V, reg p7:p(V +), reg r25:V, reg __3:cls, reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg x:*, reg x1:V, reg length:cls, reg r29:V, reg c6:L, reg printPropertiesList:cls, reg x2:*, reg x3:V, reg p8:p(V +), reg propertiesAreCalled1:*, reg propertiesAreCalled2:V, reg p9:p(V +), reg r32:V, reg cat1:cls, reg propertiesAreCalled3:*, reg propertiesAreCalled4:V, reg p10:p(V +), reg _class1:cls, reg __4:cls, reg r35:V, reg p11:p(V +), reg r37:V, reg p12:p(V +), reg r39:V, reg __5:cls, reg r40:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r41:V, reg r42:V, reg ext:*, reg ext1:V, reg length1:cls, reg r43:V, reg c7:L, reg cat2:cls, reg r44:V, reg showExtends:cls, reg ext2:*, reg ext3:V, reg p13:p(V +), reg r46:V, reg __6:cls, reg r48:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r49:V, reg r50:V, reg ext4:*, reg ext5:V, reg length2:cls, reg r51:V, reg c8:L, reg cat3:cls, reg r52:V, reg showExtends1:cls, reg ext6:*, reg ext7:V, reg p14:p(V +), reg r54:V |
    mkenv;
    st Class = Class;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(TRUE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    propertiesAreCalled_isMissing = missing.0(propertiesAreCalled);
    if propertiesAreCalled_isMissing then L1("Slots") else L1(propertiesAreCalled);
  L1(propertiesAreCalled_orDefault):
    st propertiesAreCalled = propertiesAreCalled_orDefault;
    isClassDef = ldf isClassDef;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r1 = dyn isClassDef(p);
    check L14() else D1();
  D1():
    deopt 3 [r1];
  L14():
    c = `as.logical`(r1);
    if c then L15() else L2();
  L2():
    complete1 = ld complete;
    check L18() else D3();
  L3():
    cat = ldf cat;
    check L25() else D8();
  L15():
    Class3 = ld Class;
    check L16() else D2();
  D2():
    deopt 4 [Class3];
  D3():
    deopt 10 [complete1];
  D8():
    deopt 23 [];
  L16():
    Class4 = force? Class3;
    checkMissing(Class4);
    st ClassDef = Class4;
    __ = ldf `@` in base;
    r2 = dyn __(<sym ClassDef>, <sym className>);
    st Class = r2;
    goto L3();
  L18():
    complete2 = force? complete1;
    checkMissing(complete2);
    c1 = `as.logical`(complete2);
    if c1 then L19() else L4();
  L25():
    p4 = prom<V +>{
      isTRUE = ldf isTRUE;
      p3 = prom<V +>{
        __1 = ldf `@` in base;
        r8 = dyn __1(<sym ClassDef>, <sym virtual>);
        return r8;
      };
      r10 = dyn isTRUE(p3);
      c2 = `as.logical`(r10);
      if c2 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "Virtual ";
    };
    p6 = prom<V +>{
      _dQ = ldf `.dQ`;
      p5 = prom<V +>{
        Class9 = ld Class;
        Class10 = force? Class9;
        checkMissing(Class10);
        return Class10;
      };
      r13 = dyn _dQ(p5);
      return r13;
    };
    p7 = prom<V +>{
      sym = ldf nzchar;
      base = ldf nzchar in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L0(r16):
      c3 = `as.logical`(r16);
      if c3 then L7() else L1();
    L5():
      __2 = ldf `@` in base;
      r17 = dyn __2(<sym ClassDef>, <sym package>);
      st pkg = r17;
      nzchar = ldf nzchar in base;
      r18 = dyn nzchar(r17);
      goto L0(r18);
    L6():
      r15 = dyn base(<lang `<-`(pkg, `@`(ClassDef, package))>);
      goto L0(r15);
    L1():
      invisible.0();
      return NULL;
    L7():
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L2(r20):
      return r20;
    L8():
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      r21 = `!=`(pkg1, ".GlobalEnv");
      c4 = `as.logical`(r21);
      if c4 then L10() else L3();
    L9():
      r19 = dyn base1(" [", <lang if(`!=`(pkg, ".GlobalEnv"), "package", "in")>, " \"", <sym pkg>, "\"]");
      goto L2(r19);
    L3():
      goto L4("in");
    L4(r22):
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      c5 = ldf c in base;
      r23 = dyn c5(" [", r22, " \"", pkg3, "\"]");
      goto L2(r23);
    L10():
      goto L4("package");
    };
    r25 = dyn cat[, , , , , sep](p4, "Class ", p6, p7, "\n", "");
    check L26() else D9();
  D9():
    deopt 31 [r25];
  L4():
    getClassDef = ldf getClassDef;
    check L23() else D6();
  L19():
    getClass = ldf getClass;
    check L20() else D4();
  L26():
    __3 = ldf `@` in base;
    r26 = dyn __3(<sym ClassDef>, <sym slots>);
    st x = r26;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  D4():
    deopt 13 [];
  D6():
    deopt 18 [];
  L5(r28):
    c6 = `as.logical`(r28);
    if c6 then L31() else L6();
  L20():
    p1 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    r5 = dyn getClass(p1);
    check L21() else D5();
  L23():
    p2 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    r7 = dyn getClassDef(p2);
    check L24() else D7();
  L27():
    x = ld x;
    check L29() else D10();
  L28():
    r27 = dyn base2(<sym x>);
    goto L5(r27);
  D5():
    deopt 15 [r5];
  D7():
    deopt 20 [r7];
  D10():
    deopt 37 [x];
  L6():
    cat1 = ldf cat;
    check L35() else D14();
  L7():
    __5 = ldf `@` in base;
    r40 = dyn __5(<sym ClassDef>, <sym contains>);
    st ext = r40;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L21():
    st ClassDef = r5;
    goto L3();
  L24():
    st ClassDef = r7;
    goto L3();
  L29():
    x1 = force? x;
    checkMissing(x1);
    length = ldf length in base;
    r29 = dyn length(x1);
    check L30() else D11();
  L31():
    printPropertiesList = ldf printPropertiesList;
    check L32() else D12();
  D11():
    deopt 40 [r29];
  D12():
    deopt 42 [];
  D14():
    deopt 47 [];
  L8(r42):
    c7 = `as.logical`(r42);
    if c7 then L41() else L9();
  L30():
    goto L5(r29);
  L32():
    p8 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p9 = prom<V +>{
      propertiesAreCalled1 = ld propertiesAreCalled;
      propertiesAreCalled2 = force? propertiesAreCalled1;
      checkMissing(propertiesAreCalled2);
      return propertiesAreCalled2;
    };
    r32 = dyn printPropertiesList(p8, p9);
    check L33() else D13();
  L35():
    p10 = prom<V +>{
      propertiesAreCalled3 = ld propertiesAreCalled;
      propertiesAreCalled4 = force? propertiesAreCalled3;
      checkMissing(propertiesAreCalled4);
      return propertiesAreCalled4;
    };
    p12 = prom<V +>{
      _class1 = ldf `.class1`;
      p11 = prom<V +>{
        __4 = ldf `@` in base;
        r35 = dyn __4(<sym ClassDef>, <sym prototype>);
        return r35;
      };
      r37 = dyn _class1(p11);
      return r37;
    };
    r39 = dyn cat1[, , , , , sep]("\nNo ", p10, ", prototype of class \"", p12, "\"\n", "");
    check L36() else D15();
  L37():
    ext = ld ext;
    check L39() else D16();
  L38():
    r41 = dyn base3(<sym ext>);
    goto L8(r41);
  D13():
    deopt 45 [r32];
  D15():
    deopt 55 [r39];
  D16():
    deopt 61 [ext];
  L9():
    goto L10();
  L10():
    __6 = ldf `@` in base;
    r48 = dyn __6(<sym ClassDef>, <sym subclasses>);
    st ext = r48;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L33():
    goto L7();
  L36():
    goto L7();
  L39():
    ext1 = force? ext;
    checkMissing(ext1);
    length1 = ldf length in base;
    r43 = dyn length1(ext1);
    check L40() else D17();
  L41():
    cat2 = ldf cat;
    check L42() else D18();
  D17():
    deopt 64 [r43];
  D18():
    deopt 66 [];
  L11(r50):
    c8 = `as.logical`(r50);
    if c8 then L51() else L12();
  L40():
    goto L8(r43);
  L42():
    r44 = dyn cat2("\nExtends: ");
    check L43() else D19();
  L47():
    ext4 = ld ext;
    check L49() else D22();
  L48():
    r49 = dyn base4(<sym ext>);
    goto L11(r49);
  D19():
    deopt 68 [r44];
  D22():
    deopt 80 [ext4];
  L12():
    invisible.0();
    popenv;
    return NULL;
  L43():
    showExtends = ldf showExtends;
    check L44() else D20();
  L49():
    ext5 = force? ext4;
    checkMissing(ext5);
    length2 = ldf length in base;
    r51 = dyn length2(ext5);
    check L50() else D23();
  L51():
    cat3 = ldf cat;
    check L52() else D24();
  D20():
    deopt 70 [];
  D23():
    deopt 83 [r51];
  D24():
    deopt 85 [];
  L44():
    p13 = prom<V +>{
      ext2 = ld ext;
      ext3 = force? ext2;
      checkMissing(ext3);
      return ext3;
    };
    r46 = dyn showExtends(p13);
    check L45() else D21();
  L50():
    goto L11(r51);
  L52():
    r52 = dyn cat3("\nKnown Subclasses: ");
    check L53() else D25();
  D21():
    deopt 72 [r46];
  D25():
    deopt 87 [r52];
  L45():
    goto L10();
  L53():
    showExtends1 = ldf showExtends;
    check L54() else D26();
  D26():
    deopt 89 [];
  L54():
    p14 = prom<V +>{
      ext6 = ld ext;
      ext7 = force? ext6;
      checkMissing(ext7);
      return ext7;
    };
    r54 = dyn showExtends1(p14);
    check L55() else D27();
  D27():
    deopt 91 [r54];
  L55():
    popenv;
    return r54;
  }
}