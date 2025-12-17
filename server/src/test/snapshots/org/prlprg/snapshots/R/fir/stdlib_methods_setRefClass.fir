fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1322852204;
    st setRefClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1322852204(Class, fields, contains, methods, where, inheritPackage, `...`) {
  (reg Class:*, reg fields:*, reg contains:*, reg methods:*, reg where:*, reg inheritPackage:*, reg ddd:dots) -+> V { var Class:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var contains:*, reg contains_isMissing:L, reg contains_orDefault:*, reg character1:cls, reg r2:V, reg p1:p(V +), var methods:*, reg methods_isMissing:L, reg methods_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg p2:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), var inheritPackage:*, reg inheritPackage_isMissing:L, reg inheritPackage_orDefault:*, var `...`:dots?, reg inferProperties:cls, reg fields1:*, reg fields2:V, reg p5:p(V +), reg r13:V, reg refClassInformation:cls, reg Class1:*, reg Class2:V, reg p6:p(V +), reg contains1:*, reg contains2:V, reg p7:p(V +), reg fields3:*, reg fields4:V, reg p8:p(V +), reg methods1:*, reg methods2:V, reg p9:p(V +), reg where1:*, reg where2:V, reg p10:p(V +), reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg c:cls, reg r22:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg assign:cls, reg what:*, reg what1:V, reg p11:p(V +), reg info:*, reg info1:V, reg c2:L, reg info3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg what2:*, reg what3:V, reg __:cls, reg r24:V, reg p12:p(V +), reg r26:V, reg setClass:cls, reg Class3:*, reg Class4:V, reg p13:p(V +), reg superClasses:*, reg superClasses1:V, reg p14:p(V +), reg where3:*, reg where4:V, reg p15:p(V +), reg ddd1:dots?, reg r30:V, reg new:cls, reg getClassDef:cls, reg Class5:*, reg Class6:V, reg p16:p(V +), reg where5:*, reg where6:V, reg p17:p(V +), reg r33:V, reg p18:p(V +), reg fieldClasses:*, reg fieldClasses1:V, reg p19:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg r37:V, reg refMethods:*, reg refMethods1:V, reg as_environment:cls, reg r38:V, reg p20:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg fieldPrototypes:*, reg fieldPrototypes1:V, reg as_environment1:cls, reg r42:V, reg p21:p(V +), reg refSuperClasses:*, reg refSuperClasses1:V, reg p22:p(V +), reg r45:V, reg _setObjectParent:cls, reg __1:cls, reg r46:V, reg p23:p(V +), reg inheritPackage1:*, reg inheritPackage2:V, reg c3:L, reg refSuperClasses2:*, reg refSuperClasses3:V, reg p24:p(V +), reg where7:*, reg where8:V, reg p25:p(V +), reg r50:V, reg assignClassDef:cls, reg Class7:*, reg Class8:V, reg p26:p(V +), reg classDef:*, reg classDef1:V, reg p27:p(V +), reg where9:*, reg where10:V, reg p28:p(V +), reg r54:V, reg new1:cls, reg r55:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r56:V, reg r57:V, reg generator:*, reg generator1:V, reg as_environment2:cls, reg r58:V, reg classDef2:*, reg classDef3:V, reg l1:*, reg c4:L, reg classDef5:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r59:V, reg Class9:*, reg Class10:V, reg l4:*, reg c5:L, reg Class12:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r60:V, reg _declareVariables:cls, reg classDef8:*, reg classDef9:V, reg p29:p(V +), reg where11:*, reg where12:V, reg p30:p(V +), reg r63:V, reg new2:cls, reg classFun:*, reg classFun1:V, reg p31:p(V +), reg generator2:*, reg generator3:V, reg p32:p(V +), reg r66:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r67:V, reg r68:V, reg value:*, reg value1:V, reg invisible:cls, reg r69:V |
    mkenv;
    st Class = Class;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L0() else L1(fields);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(fields_orDefault):
    st fields = fields_orDefault;
    contains_isMissing = missing.0(contains);
    if contains_isMissing then L2() else L3(contains);
  L2():
    p1 = prom<V +>{
      character1 = ldf character;
      r2 = dyn character1();
      return r2;
    };
    goto L3(p1);
  L3(contains_orDefault):
    st contains = contains_orDefault;
    methods_isMissing = missing.0(methods);
    if methods_isMissing then L4() else L5(methods);
  L4():
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      list = ldf list in base;
      r6 = dyn list();
      goto L0(r6);
    L2():
      r4 = dyn base();
      goto L0(r4);
    };
    goto L5(p2);
  L5(methods_orDefault):
    st methods = methods_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L6() else L7(where);
  L6():
    p4 = prom<V +>{
      topenv = ldf topenv;
      p3 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r8 = dyn parent_frame();
        return r8;
      };
      r10 = dyn topenv(p3);
      return r10;
    };
    goto L7(p4);
  L7(where_orDefault):
    st where = where_orDefault;
    inheritPackage_isMissing = missing.0(inheritPackage);
    if inheritPackage_isMissing then L8(FALSE) else L8(inheritPackage);
  L8(inheritPackage_orDefault):
    st inheritPackage = inheritPackage_orDefault;
    st `...` = ddd;
    inferProperties = ldf inferProperties;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p5 = prom<V +>{
      fields1 = ld fields;
      fields2 = force? fields1;
      checkMissing(fields2);
      return fields2;
    };
    r13 = dyn inferProperties(p5, "field");
    check L15() else D1();
  D1():
    deopt 4 [r13];
  L15():
    st fields = r13;
    refClassInformation = ldf refClassInformation;
    check L16() else D2();
  D2():
    deopt 7 [];
  L16():
    p6 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p7 = prom<V +>{
      contains1 = ld contains;
      contains2 = force? contains1;
      checkMissing(contains2);
      return contains2;
    };
    p8 = prom<V +>{
      fields3 = ld fields;
      fields4 = force? fields3;
      checkMissing(fields4);
      return fields4;
    };
    p9 = prom<V +>{
      methods1 = ld methods;
      methods2 = force? methods1;
      checkMissing(methods2);
      return methods2;
    };
    p10 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r19 = dyn refClassInformation(p6, p7, p8, p9, p10);
    check L17() else D3();
  D3():
    deopt 13 [r19];
  L17():
    st info = r19;
    st refMethods = NULL;
    st fieldPrototypes = NULL;
    st fieldClasses = NULL;
    st refSuperClasses = NULL;
    st superClasses = NULL;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L9(r21):
    s = toForSeq(r21);
    l = length(s);
    i = 0;
    goto L10(i);
  L18():
    c = ldf c in base;
    r22 = dyn c("superClasses", "refSuperClasses", "fieldClasses", "fieldPrototypes", "refMethods");
    check L20() else D4();
  L19():
    r20 = dyn base1("superClasses", "refSuperClasses", "fieldClasses", "fieldPrototypes", "refMethods");
    goto L9(r20);
  D4():
    deopt 30 [r22];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L21() else L11();
  L20():
    goto L9(r22);
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    assign = ldf assign;
    check L22() else D5();
  L21():
    setClass = ldf setClass;
    check L24() else D7();
  D5():
    deopt 32 [i2];
  D7():
    deopt 40 [];
  L22():
    p11 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p12 = prom<V +>{
      info = ld info;
      info1 = force? info;
      checkMissing(info1);
      c2 = `is.object`(info1);
      if c2 then L1() else L2(info1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", info1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(info3):
      what2 = ld what;
      what3 = force? what2;
      __ = ldf `[[` in base;
      r24 = dyn __(info3, what3);
      goto L0(r24);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r26 = dyn assign(p11, p12);
    check L23() else D6();
  L24():
    p13 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p14 = prom<V +>{
      superClasses = ld superClasses;
      superClasses1 = force? superClasses;
      checkMissing(superClasses1);
      return superClasses1;
    };
    p15 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    ddd1 = ld `...`;
    r30 = dyn setClass[, contains, where, `...`](p13, p14, p15, ddd1);
    check L25() else D8();
  D6():
    deopt 35 [i2, r26];
  D8():
    deopt 47 [r30];
  L23():
    goto L10(i2);
  L25():
    st classFun = r30;
    new = ldf new;
    check L26() else D9();
  D9():
    deopt 50 [];
  L26():
    p18 = prom<V +>{
      getClassDef = ldf getClassDef;
      p16 = prom<V +>{
        Class5 = ld Class;
        Class6 = force? Class5;
        checkMissing(Class6);
        return Class6;
      };
      p17 = prom<V +>{
        where5 = ld where;
        where6 = force? where5;
        checkMissing(where6);
        return where6;
      };
      r33 = dyn getClassDef[, where](p16, p17);
      return r33;
    };
    p19 = prom<V +>{
      fieldClasses = ld fieldClasses;
      fieldClasses1 = force? fieldClasses;
      checkMissing(fieldClasses1);
      return fieldClasses1;
    };
    p20 = prom<V +>{
      sym2 = ldf `as.environment`;
      base2 = ldf `as.environment` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      refMethods = ld refMethods;
      refMethods1 = force? refMethods;
      checkMissing(refMethods1);
      as_environment = ldf `as.environment` in base;
      r38 = dyn as_environment(refMethods1);
      goto L0(r38);
    L2():
      r36 = dyn base2(<sym refMethods>);
      goto L0(r36);
    };
    p21 = prom<V +>{
      sym3 = ldf `as.environment`;
      base3 = ldf `as.environment` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      fieldPrototypes = ld fieldPrototypes;
      fieldPrototypes1 = force? fieldPrototypes;
      checkMissing(fieldPrototypes1);
      as_environment1 = ldf `as.environment` in base;
      r42 = dyn as_environment1(fieldPrototypes1);
      goto L0(r42);
    L2():
      r40 = dyn base3(<sym fieldPrototypes>);
      goto L0(r40);
    };
    p22 = prom<V +>{
      refSuperClasses = ld refSuperClasses;
      refSuperClasses1 = force? refSuperClasses;
      checkMissing(refSuperClasses1);
      return refSuperClasses1;
    };
    r45 = dyn new[, , fieldClasses, refMethods, fieldPrototypes, refSuperClasses]("refClassRepresentation", p18, p19, p20, p21, p22);
    check L27() else D10();
  D10():
    deopt 61 [r45];
  L27():
    st classDef = r45;
    _setObjectParent = ldf `.setObjectParent`;
    check L28() else D11();
  D11():
    deopt 64 [];
  L28():
    p23 = prom<V +>{
      __1 = ldf `@` in base;
      r46 = dyn __1(<sym classDef>, <sym refMethods>);
      return r46;
    };
    p24 = prom<V +>{
      inheritPackage1 = ld inheritPackage;
      inheritPackage2 = force? inheritPackage1;
      checkMissing(inheritPackage2);
      c3 = `as.logical`(inheritPackage2);
      if c3 then L1() else L0();
    L0():
      return NULL;
    L1():
      refSuperClasses2 = ld refSuperClasses;
      refSuperClasses3 = force? refSuperClasses2;
      checkMissing(refSuperClasses3);
      return refSuperClasses3;
    };
    p25 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r50 = dyn _setObjectParent(p23, p24, p25);
    check L29() else D12();
  D12():
    deopt 68 [r50];
  L29():
    assignClassDef = ldf assignClassDef;
    check L30() else D13();
  D13():
    deopt 70 [];
  L30():
    p26 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p27 = prom<V +>{
      classDef = ld classDef;
      classDef1 = force? classDef;
      checkMissing(classDef1);
      return classDef1;
    };
    p28 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r54 = dyn assignClassDef(p26, p27, p28);
    check L31() else D14();
  D14():
    deopt 74 [r54];
  L31():
    new1 = ldf new;
    check L32() else D15();
  D15():
    deopt 76 [];
  L32():
    r55 = dyn new1("refGeneratorSlot");
    check L33() else D16();
  D16():
    deopt 78 [r55];
  L33():
    st generator = r55;
    sym4 = ldf `as.environment`;
    base4 = ldf `as.environment` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L12(r57):
    st env = r57;
    classDef2 = ld classDef;
    check L38() else D19();
  L34():
    generator = ld generator;
    check L36() else D17();
  L35():
    r56 = dyn base4(<sym generator>);
    goto L12(r56);
  D17():
    deopt 82 [generator];
  D19():
    deopt 87 [classDef2];
  L36():
    generator1 = force? generator;
    checkMissing(generator1);
    as_environment2 = ldf `as.environment` in base;
    r58 = dyn as_environment2(generator1);
    check L37() else D18();
  L38():
    classDef3 = force? classDef2;
    checkMissing(classDef3);
    l1 = ld env;
    c4 = `is.object`(l1);
    if c4 then L40() else L41(classDef3, l1);
  D18():
    deopt 85 [r58];
  L37():
    goto L12(r58);
  L39(dx3):
    st env = dx3;
    Class9 = ld Class;
    check L43() else D20();
  L40():
    dr2 = tryDispatchBuiltin.0("$<-", l1, classDef3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(classDef3, dr2);
  L41(classDef5, l3):
    r59 = `$<-`(l3, <sym def>, classDef3);
    goto L39(r59);
  D20():
    deopt 92 [Class9];
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(dx2);
  L43():
    Class10 = force? Class9;
    checkMissing(Class10);
    l4 = ld env;
    c5 = `is.object`(l4);
    if c5 then L45() else L46(Class10, l4);
  L44(dx5):
    st env = dx5;
    _declareVariables = ldf `.declareVariables`;
    check L48() else D21();
  L45():
    dr4 = tryDispatchBuiltin.0("$<-", l4, Class10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L47() else L46(Class10, dr4);
  L46(Class12, l6):
    r60 = `$<-`(l6, <sym className>, Class10);
    goto L44(r60);
  D21():
    deopt 98 [];
  L47():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L44(dx4);
  L48():
    p29 = prom<V +>{
      classDef8 = ld classDef;
      classDef9 = force? classDef8;
      checkMissing(classDef9);
      return classDef9;
    };
    p30 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r63 = dyn _declareVariables(p29, p30);
    check L49() else D22();
  D22():
    deopt 101 [r63];
  L49():
    new2 = ldf new;
    check L50() else D23();
  D23():
    deopt 103 [];
  L50():
    p31 = prom<V +>{
      classFun = ld classFun;
      classFun1 = force? classFun;
      checkMissing(classFun1);
      return classFun1;
    };
    p32 = prom<V +>{
      generator2 = ld generator;
      generator3 = force? generator2;
      checkMissing(generator3);
      return generator3;
    };
    r66 = dyn new2[, , generator]("refObjectGenerator", p31, p32);
    check L51() else D24();
  D24():
    deopt 108 [r66];
  L51():
    st value = r66;
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  L13(r68):
    popenv;
    return r68;
  L52():
    value = ld value;
    check L54() else D25();
  L53():
    r67 = dyn base5(<sym value>);
    goto L13(r67);
  D25():
    deopt 112 [value];
  L54():
    value1 = force? value;
    checkMissing(value1);
    invisible = ldf invisible in base;
    r69 = dyn invisible(value1);
    check L55() else D26();
  D26():
    deopt 115 [r69];
  L55():
    goto L13(r69);
  }
}