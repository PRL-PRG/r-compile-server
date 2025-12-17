fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2300815290;
    st resetClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2300815290(Class, classDef, where) {
  (reg Class:*, reg classDef:*, reg where:*) -+> V { var Class:*, var classDef:*, var where:*, reg is:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg r1:V, reg c:L, reg Class3:*, reg Class4:V, reg __:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg missing:cls, reg r5:V, reg c1:L, reg _classDefEnv:cls, reg classDef1:*, reg classDef2:V, reg p1:p(V +), reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg missing1:cls, reg r12:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg missing2:cls, reg r15:V, reg c3:L, reg findClass:cls, reg Class5:*, reg Class6:V, reg p2:p(V +), reg r17:V, reg c4:L, reg r19:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r20:V, reg dx2:V, reg _classDefEnv1:cls, reg classDef3:*, reg classDef4:V, reg p3:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg missing3:cls, reg r25:V, reg c5:L, reg getClassDef:cls, reg Class7:*, reg Class8:V, reg p4:p(V +), reg where1:*, reg where2:V, reg p5:p(V +), reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg classDef5:*, reg classDef6:V, reg c6:V, reg c7:L, reg warning:cls, reg gettextf:cls, reg dQuote:cls, reg Class9:*, reg Class10:V, reg p6:p(V +), reg r32:V, reg p7:p(V +), reg sQuote:cls, reg getPackageName:cls, reg where3:*, reg where4:V, reg p8:p(V +), reg r35:V, reg p9:p(V +), reg r37:V, reg p10:p(V +), reg r39:V, reg p11:p(V +), reg r41:V, reg classDef7:*, reg classDef8:V, reg is1:cls, reg classDef9:*, reg classDef10:V, reg p12:p(V +), reg r45:V, reg r46:V, reg c8:L, reg stop:cls, reg gettextf1:cls, reg dQuote1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r47:V, reg r48:V, reg classDef11:*, reg classDef12:V, reg class:cls, reg r49:V, reg p13:p(V +), reg r51:V, reg p14:p(V +), reg r53:V, reg p15:p(V +), reg r55:V, reg __2:cls, reg r56:V, reg c9:L, reg warning1:cls, reg gettextf2:cls, reg dQuote2:cls, reg Class11:*, reg Class12:V, reg p16:p(V +), reg r58:V, reg p17:p(V +), reg r60:V, reg p18:p(V +), reg r62:V, reg _uncompleteClassDefinition:cls, reg classDef13:*, reg classDef14:V, reg p19:p(V +), reg r65:V, reg completeClassDefinition:cls, reg Class13:*, reg Class14:V, reg p20:p(V +), reg classDef15:*, reg classDef16:V, reg p21:p(V +), reg where5:*, reg where6:V, reg p22:p(V +), reg r69:V, reg assignClassDef:cls, reg Class15:*, reg Class16:V, reg p23:p(V +), reg classDef17:*, reg classDef18:V, reg p24:p(V +), reg where7:*, reg where8:V, reg p25:p(V +), reg r73:V, reg classDef19:*, reg classDef20:V |
    mkenv;
    st Class = Class;
    st classDef = classDef;
    st where = where;
    is = ldf is;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r1 = dyn is(p, "classRepresentation");
    check L21() else D1();
  D1():
    deopt 4 [r1];
  L21():
    c = `as.logical`(r1);
    if c then L22() else L0();
  L0():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L4():
    __2 = ldf `@` in base;
    r56 = dyn __2(<sym classDef>, <sym sealed>);
    c9 = `as.logical`(r56);
    if c9 then L67() else L18();
  L22():
    Class3 = ld Class;
    check L23() else D2();
  D2():
    deopt 5 [Class3];
  L5(r11):
    c2 = `as.logical`(r11);
    if c2 then L33() else L6();
  L18():
    _uncompleteClassDefinition = ldf `.uncompleteClassDefinition`;
    check L71() else D21();
  L19():
    classDef19 = ld classDef;
    check L77() else D27();
  L23():
    Class4 = force? Class3;
    checkMissing(Class4);
    st classDef = Class4;
    __ = ldf `@` in base;
    r2 = dyn __(<sym Class>, <sym className>);
    st Class = r2;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L31():
    missing1 = ldf missing in base;
    r12 = dyn missing1(<sym where>);
    goto L5(r12);
  L32():
    r10 = dyn base1(<sym where>);
    goto L5(r10);
  L67():
    warning1 = ldf warning;
    check L68() else D19();
  D19():
    deopt 85 [];
  D21():
    deopt 91 [];
  D27():
    deopt 108 [classDef19];
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L26() else L2();
  L6():
    goto L11();
  L11():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L24():
    missing = ldf missing in base;
    r5 = dyn missing(<sym where>);
    goto L1(r5);
  L25():
    r3 = dyn base(<sym where>);
    goto L1(r3);
  L33():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L68():
    p18 = prom<V +>{
      gettextf2 = ldf gettextf;
      p17 = prom<V +>{
        dQuote2 = ldf dQuote;
        p16 = prom<V +>{
          Class11 = ld Class;
          Class12 = force? Class11;
          checkMissing(Class12);
          return Class12;
        };
        r58 = dyn dQuote2(p16);
        return r58;
      };
      r60 = dyn gettextf2("class %s is sealed; 'resetClass' will have no effect", p17);
      return r60;
    };
    r62 = dyn warning1[, domain](p18, NA_LGL);
    check L69() else D20();
  L71():
    p19 = prom<V +>{
      classDef13 = ld classDef;
      classDef14 = force? classDef13;
      checkMissing(classDef14);
      return classDef14;
    };
    r65 = dyn _uncompleteClassDefinition(p19);
    check L72() else D22();
  L77():
    classDef20 = force? classDef19;
    checkMissing(classDef20);
    popenv;
    return classDef20;
  D20():
    deopt 89 [r62];
  D22():
    deopt 93 [r65];
  L2():
    goto L3(NULL);
  L3(r8):
    goto L4();
  L7(r14):
    c3 = `as.logical`(r14);
    if c3 then L36() else L8();
  L12(r24):
    c5 = `as.logical`(r24);
    if c5 then L48() else L13();
  L26():
    _classDefEnv = ldf `.classDefEnv`;
    check L27() else D3();
  L34():
    missing2 = ldf missing in base;
    r15 = dyn missing2(<sym classDef>);
    goto L7(r15);
  L35():
    r13 = dyn base2(<sym classDef>);
    goto L7(r13);
  L46():
    missing3 = ldf missing in base;
    r25 = dyn missing3(<sym classDef>);
    goto L12(r25);
  L47():
    r23 = dyn base3(<sym classDef>);
    goto L12(r23);
  L69():
    goto L19();
  L72():
    st classDef = r65;
    completeClassDefinition = ldf completeClassDefinition;
    check L73() else D23();
  D3():
    deopt 15 [];
  D23():
    deopt 96 [];
  L8():
    _classDefEnv1 = ldf `.classDefEnv`;
    check L43() else D7();
  L10(dx2):
    goto L11();
  L13():
    is1 = ldf is;
    check L61() else D15();
  L27():
    p1 = prom<V +>{
      classDef1 = ld classDef;
      classDef2 = force? classDef1;
      checkMissing(classDef2);
      return classDef2;
    };
    r7 = dyn _classDefEnv(p1);
    check L28() else D4();
  L36():
    findClass = ldf findClass;
    check L37() else D5();
  L48():
    getClassDef = ldf getClassDef;
    check L49() else D9();
  L73():
    p20 = prom<V +>{
      Class13 = ld Class;
      Class14 = force? Class13;
      checkMissing(Class14);
      return Class14;
    };
    p21 = prom<V +>{
      classDef15 = ld classDef;
      classDef16 = force? classDef15;
      checkMissing(classDef16);
      return classDef16;
    };
    p22 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r69 = dyn completeClassDefinition(p20, p21, p22);
    check L74() else D24();
  D4():
    deopt 17 [r7];
  D5():
    deopt 28 [];
  D7():
    deopt 38 [];
  D9():
    deopt 48 [];
  D15():
    deopt 69 [];
  D24():
    deopt 100 [r69];
  L28():
    st where = r7;
    goto L3(r7);
  L37():
    p2 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    r17 = dyn findClass[, unique](p2, "resetting the definition");
    check L38() else D6();
  L43():
    p3 = prom<V +>{
      classDef3 = ld classDef;
      classDef4 = force? classDef3;
      checkMissing(classDef4);
      return classDef4;
    };
    r22 = dyn _classDefEnv1(p3);
    check L44() else D8();
  L49():
    p4 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p5 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r28 = dyn getClassDef(p4, p5);
    check L50() else D10();
  L61():
    p12 = prom<V +>{
      classDef9 = ld classDef;
      classDef10 = force? classDef9;
      checkMissing(classDef10);
      return classDef10;
    };
    r45 = dyn is1(p12, "classRepresentation");
    check L62() else D16();
  L74():
    st classDef = r69;
    assignClassDef = ldf assignClassDef;
    check L75() else D25();
  D6():
    deopt 32 [r17];
  D8():
    deopt 40 [r22];
  D10():
    deopt 51 [r28];
  D16():
    deopt 72 [r45];
  D25():
    deopt 103 [];
  L38():
    c4 = `is.object`(r17);
    if c4 then L39() else L40(r17);
  L44():
    st where = r22;
    goto L10(r22);
  L50():
    st classDef = r28;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L62():
    r46 = `!`(r45);
    c8 = `as.logical`(r46);
    if c8 then L63() else L17();
  L75():
    p23 = prom<V +>{
      Class15 = ld Class;
      Class16 = force? Class15;
      checkMissing(Class16);
      return Class16;
    };
    p24 = prom<V +>{
      classDef17 = ld classDef;
      classDef18 = force? classDef17;
      checkMissing(classDef18);
      return classDef18;
    };
    p25 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r73 = dyn assignClassDef(p23, p24, p25);
    check L76() else D26();
  D26():
    deopt 107 [r73];
  L9(dx1):
    st where = dx1;
    goto L10(dx1);
  L14(r30):
    c7 = `as.logical`(r30);
    if c7 then L54() else L15();
  L17():
    goto L4();
  L39():
    dr = tryDispatchBuiltin.1("[[", r17);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(dr);
  L40(r19):
    __1 = ldf `[[` in base;
    r20 = dyn __1(r19, 1);
    goto L9(r20);
  L51():
    classDef5 = ld classDef;
    check L53() else D11();
  L52():
    r29 = dyn base4(<sym classDef>);
    goto L14(r29);
  L63():
    stop = ldf stop;
    check L64() else D17();
  L76():
    goto L19();
  D11():
    deopt 54 [classDef5];
  D17():
    deopt 75 [];
  L15():
    goto L4();
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L53():
    classDef6 = force? classDef5;
    checkMissing(classDef6);
    c6 = `==`(classDef6, NULL);
    goto L14(c6);
  L54():
    warning = ldf warning;
    check L55() else D12();
  L64():
    p15 = prom<V +>{
      gettextf1 = ldf gettextf;
      p14 = prom<V +>{
        dQuote1 = ldf dQuote;
        p13 = prom<V +>{
          sym5 = ldf class;
          base5 = ldf class in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r48):
          return r48;
        L1():
          classDef11 = ld classDef;
          classDef12 = force? classDef11;
          checkMissing(classDef12);
          class = ldf class in base;
          r49 = dyn class(classDef12);
          goto L0(r49);
        L2():
          r47 = dyn base5(<sym classDef>);
          goto L0(r47);
        };
        r51 = dyn dQuote1(p13);
        return r51;
      };
      r53 = dyn gettextf1("argument 'classDef' must be a string or a class representation; got an object of class %s", p14);
      return r53;
    };
    r55 = dyn stop[, domain](p15, NA_LGL);
    check L65() else D18();
  D12():
    deopt 58 [];
  D18():
    deopt 79 [r55];
  L55():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          Class9 = ld Class;
          Class10 = force? Class9;
          checkMissing(Class10);
          return Class10;
        };
        r32 = dyn dQuote(p6);
        return r32;
      };
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        p9 = prom<V +>{
          getPackageName = ldf getPackageName;
          p8 = prom<V +>{
            where3 = ld where;
            where4 = force? where3;
            checkMissing(where4);
            return where4;
          };
          r35 = dyn getPackageName(p8);
          return r35;
        };
        r37 = dyn sQuote(p9);
        return r37;
      };
      r39 = dyn gettextf("class %s not found on %s; 'resetClass' will have no effect", p7, p10);
      return r39;
    };
    r41 = dyn warning[, domain](p11, NA_LGL);
    check L56() else D13();
  L65():
    goto L4();
  D13():
    deopt 62 [r41];
  L56():
    classDef7 = ld classDef;
    check L57() else D14();
  D14():
    deopt 63 [classDef7];
  L57():
    classDef8 = force? classDef7;
    checkMissing(classDef8);
    popenv;
    return classDef8;
  }
}