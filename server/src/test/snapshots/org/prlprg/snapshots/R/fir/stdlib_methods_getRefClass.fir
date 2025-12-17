fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1266124685;
    st getRefClass = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1266124685(Class, where) {
  (reg Class:*, reg where:*) -+> V { var Class:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg is:cls, reg Class1:*, reg Class2:V, reg p2:p(V +), reg r5:V, reg c:L, reg Class3:*, reg Class4:V, reg __:cls, reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg Class5:*, reg Class6:V, reg c1:L, reg c2:L, reg getClass:cls, reg Class7:*, reg Class8:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r12:V, reg is1:cls, reg classDef:*, reg classDef1:V, reg p5:p(V +), reg r14:V, reg r15:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg Class9:*, reg Class10:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg r19:V, reg p8:p(V +), reg r21:V, reg r22:V, reg stop1:cls, reg gettextf1:cls, reg dQuote1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg Class11:*, reg Class12:V, reg class:cls, reg r25:V, reg p9:p(V +), reg r27:V, reg p10:p(V +), reg r29:V, reg p11:p(V +), reg r31:V, reg new:cls, reg r32:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg generator:*, reg generator1:V, reg as_environment:cls, reg r35:V, reg Class13:*, reg Class14:V, reg l:*, reg c4:L, reg Class16:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r36:V, reg classDef2:*, reg classDef3:V, reg l3:*, reg c5:L, reg classDef5:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r37:V, reg classGeneratorFunction:cls, reg Class19:*, reg Class20:V, reg p12:p(V +), reg where3:*, reg where4:V, reg p13:p(V +), reg r40:V, reg __1:cls, reg r41:V, reg l6:*, reg ___:cls, reg r42:V, reg new1:cls, reg classFun:*, reg classFun1:V, reg p14:p(V +), reg generator2:*, reg generator3:V, reg p15:p(V +), reg r45:V |
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
    is = ldf is;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p2 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r5 = dyn is(p2, "refClassRepresentation");
    check L10() else D1();
  D1():
    deopt 4 [r5];
  L10():
    c = `as.logical`(r5);
    if c then L11() else L2();
  L2():
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L3():
    new = ldf new;
    check L29() else D12();
  L11():
    Class3 = ld Class;
    check L12() else D2();
  D2():
    deopt 5 [Class3];
  D12():
    deopt 43 [];
  L4(r9):
    c2 = `as.logical`(r9);
    if c2 then L17() else L5();
  L12():
    Class4 = force? Class3;
    checkMissing(Class4);
    st classDef = Class4;
    __ = ldf `@` in base;
    r6 = dyn __(<sym classDef>, <sym className>);
    st Class = r6;
    goto L3();
  L14():
    Class5 = ld Class;
    check L16() else D3();
  L15():
    r8 = dyn base(<sym Class>);
    goto L4(r8);
  L29():
    r32 = dyn new("refGeneratorSlot");
    check L30() else D13();
  D3():
    deopt 12 [Class5];
  D13():
    deopt 45 [r32];
  L5():
    stop1 = ldf stop;
    check L27() else D10();
  L16():
    Class6 = force? Class5;
    checkMissing(Class6);
    c1 = `is.character`(Class6);
    goto L4(c1);
  L17():
    getClass = ldf getClass;
    check L18() else D4();
  L30():
    st generator = r32;
    sym2 = ldf `as.environment`;
    base2 = ldf `as.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D4():
    deopt 16 [];
  D10():
    deopt 37 [];
  L8(r34):
    st env = r34;
    Class13 = ld Class;
    check L35() else D16();
  L18():
    p3 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r12 = dyn getClass[, where](p3, p4);
    check L19() else D5();
  L27():
    p11 = prom<V +>{
      gettextf1 = ldf gettextf;
      p10 = prom<V +>{
        dQuote1 = ldf dQuote;
        p9 = prom<V +>{
          sym1 = ldf class;
          base1 = ldf class in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r24):
          return r24;
        L1():
          Class11 = ld Class;
          Class12 = force? Class11;
          checkMissing(Class12);
          class = ldf class in base;
          r25 = dyn class(Class12);
          goto L0(r25);
        L2():
          r23 = dyn base1(<sym Class>);
          goto L0(r23);
        };
        r27 = dyn dQuote1(p9);
        return r27;
      };
      r29 = dyn gettextf1("class must be a reference class representation or a character string; got an object of class %s", p10);
      return r29;
    };
    r31 = dyn stop1[, domain](p11, NA_LGL);
    check L28() else D11();
  L31():
    generator = ld generator;
    check L33() else D14();
  L32():
    r33 = dyn base2(<sym generator>);
    goto L8(r33);
  D5():
    deopt 20 [r12];
  D11():
    deopt 41 [r31];
  D14():
    deopt 49 [generator];
  D16():
    deopt 54 [Class13];
  L19():
    st classDef = r12;
    is1 = ldf is;
    check L20() else D6();
  L28():
    goto L3();
  L33():
    generator1 = force? generator;
    checkMissing(generator1);
    as_environment = ldf `as.environment` in base;
    r35 = dyn as_environment(generator1);
    check L34() else D15();
  L35():
    Class14 = force? Class13;
    checkMissing(Class14);
    l = ld env;
    c4 = `is.object`(l);
    if c4 then L37() else L38(Class14, l);
  D6():
    deopt 23 [];
  D15():
    deopt 52 [r35];
  L20():
    p5 = prom<V +>{
      classDef = ld classDef;
      classDef1 = force? classDef;
      checkMissing(classDef1);
      return classDef1;
    };
    r14 = dyn is1(p5, "refClassRepresentation");
    check L21() else D7();
  L34():
    goto L8(r35);
  L36(dx1):
    st env = dx1;
    classDef2 = ld classDef;
    check L40() else D17();
  L37():
    dr = tryDispatchBuiltin.0("$<-", l, Class14);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(Class14, dr);
  L38(Class16, l2):
    r36 = `$<-`(l2, <sym className>, Class14);
    goto L36(r36);
  D7():
    deopt 26 [r14];
  D17():
    deopt 59 [classDef2];
  L21():
    r15 = `!`(r14);
    c3 = `as.logical`(r15);
    if c3 then L22() else L6();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L36(dx);
  L40():
    classDef3 = force? classDef2;
    checkMissing(classDef3);
    l3 = ld env;
    c5 = `is.object`(l3);
    if c5 then L42() else L43(classDef3, l3);
  L6():
    goto L7(NULL);
  L7(r22):
    goto L3();
  L22():
    stop = ldf stop;
    check L23() else D8();
  L41(dx3):
    st env = dx3;
    classGeneratorFunction = ldf classGeneratorFunction;
    check L45() else D18();
  L42():
    dr2 = tryDispatchBuiltin.0("$<-", l3, classDef3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(classDef3, dr2);
  L43(classDef5, l5):
    r37 = `$<-`(l5, <sym def>, classDef3);
    goto L41(r37);
  D8():
    deopt 29 [];
  D18():
    deopt 65 [];
  L23():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          Class9 = ld Class;
          Class10 = force? Class9;
          checkMissing(Class10);
          return Class10;
        };
        r17 = dyn dQuote(p6);
        return r17;
      };
      r19 = dyn gettextf("class %s is defined but is not a reference class", p7);
      return r19;
    };
    r21 = dyn stop[, domain](p8, NA_LGL);
    check L24() else D9();
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L41(dx2);
  L45():
    p12 = prom<V +>{
      Class19 = ld Class;
      Class20 = force? Class19;
      checkMissing(Class20);
      return Class20;
    };
    p13 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r40 = dyn classGeneratorFunction(p12, p13);
    check L46() else D19();
  D9():
    deopt 33 [r21];
  D19():
    deopt 68 [r40];
  L24():
    goto L7(r21);
  L46():
    st classFun = r40;
    __1 = ldf `@` in base;
    r41 = dyn __1(<sym classDef>, <sym package>);
    l6 = ld classFun;
    ___ = ldf `@<-`;
    check L47() else D20();
  D20():
    deopt 73 [r41, l6, r41];
  L47():
    r42 = dyn ___(l6, NULL, "package", r41);
    check L48() else D21();
  D21():
    deopt 76 [r41, r42];
  L48():
    st classFun = r42;
    new1 = ldf new;
    check L49() else D22();
  D22():
    deopt 79 [];
  L49():
    p14 = prom<V +>{
      classFun = ld classFun;
      classFun1 = force? classFun;
      checkMissing(classFun1);
      return classFun1;
    };
    p15 = prom<V +>{
      generator2 = ld generator;
      generator3 = force? generator2;
      checkMissing(generator3);
      return generator3;
    };
    r45 = dyn new1[, , generator]("refObjectGenerator", p14, p15);
    check L50() else D23();
  D23():
    deopt 84 [r45];
  L50():
    popenv;
    return r45;
  }
}