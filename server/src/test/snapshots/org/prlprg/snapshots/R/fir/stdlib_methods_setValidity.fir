fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner846459234;
    st setValidity = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner846459234(Class, method, where) {
  (reg Class:*, reg method:*, reg where:*) -+> V { var Class:*, var method:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg isClassDef:cls, reg Class1:*, reg Class2:V, reg p2:p(V +), reg r5:V, reg c:L, reg Class3:*, reg Class4:V, reg __:cls, reg r6:V, reg getClassDef:cls, reg Class5:*, reg Class6:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r10:V, reg _makeValidityMethod:cls, reg Class7:*, reg Class8:V, reg p5:p(V +), reg method1:*, reg method2:V, reg p6:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg method3:*, reg method4:V, reg c1:V, reg c2:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg c7:L, reg r17:V, reg method5:*, reg method6:V, reg is_function:cls, reg r18:V, reg c8:L, reg c11:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg c17:L, reg c18:L, reg r20:V, reg formalArgs:cls, reg method7:*, reg method8:V, reg p7:p(V +), reg r22:V, reg length:cls, reg r23:V, reg r24:V, reg c19:L, reg c20:V, reg c23:L, reg c24:V, reg c26:L, reg method9:*, reg method10:V, reg l:*, reg ___:cls, reg r25:V, reg stop:cls, reg r26:V, reg assignClassDef:cls, reg Class9:*, reg Class10:V, reg p8:p(V +), reg ClassDef:*, reg ClassDef1:V, reg p9:p(V +), reg where3:*, reg where4:V, reg p10:p(V +), reg r30:V, reg resetClass:cls, reg Class11:*, reg Class12:V, reg p11:p(V +), reg ClassDef2:*, reg ClassDef3:V, reg p12:p(V +), reg where5:*, reg where6:V, reg p13:p(V +), reg r34:V |
    mkenv;
    st Class = Class;
    st method = method;
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
    isClassDef = ldf isClassDef;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p2 = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    r5 = dyn isClassDef(p2);
    check L12() else D1();
  D1():
    deopt 3 [r5];
  L12():
    c = `as.logical`(r5);
    if c then L13() else L2();
  L2():
    getClassDef = ldf getClassDef;
    check L16() else D3();
  L3():
    _makeValidityMethod = ldf `.makeValidityMethod`;
    check L18() else D5();
  L13():
    Class3 = ld Class;
    check L14() else D2();
  D2():
    deopt 4 [Class3];
  D3():
    deopt 11 [];
  D5():
    deopt 17 [];
  L14():
    Class4 = force? Class3;
    checkMissing(Class4);
    st ClassDef = Class4;
    __ = ldf `@` in base;
    r6 = dyn __(<sym ClassDef>, <sym className>);
    st Class = r6;
    goto L3();
  L16():
    p3 = prom<V +>{
      Class5 = ld Class;
      Class6 = force? Class5;
      checkMissing(Class6);
      return Class6;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r10 = dyn getClassDef(p3, p4);
    check L17() else D4();
  L18():
    p5 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    p6 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r13 = dyn _makeValidityMethod(p5, p6);
    check L19() else D6();
  D4():
    deopt 14 [r10];
  D6():
    deopt 20 [r13];
  L17():
    st ClassDef = r10;
    goto L3();
  L19():
    st method = r13;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L4(r15):
    c2 = `as.logical`(r15);
    if c2 then L5(c2) else L23();
  L20():
    method3 = ld method;
    check L22() else D7();
  L21():
    r14 = dyn base(<sym method>);
    goto L4(r14);
  D7():
    deopt 23 [method3];
  L5(c3):
    c26 = `as.logical`(c3);
    if c26 then L36() else L9();
  L22():
    method4 = force? method3;
    checkMissing(method4);
    c1 = `==`(method4, NULL);
    goto L4(c1);
  L23():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L6(c7, r17):
    c8 = `as.logical`(r17);
    if c8 then L28() else L7(c7, c8);
  L9():
    stop = ldf stop;
    check L41() else D16();
  L10():
    assignClassDef = ldf assignClassDef;
    check L43() else D18();
  L24():
    method5 = ld method;
    check L26() else D8();
  L25():
    r16 = dyn base1(<sym method>);
    goto L6(c2, r16);
  L36():
    method9 = ld method;
    check L37() else D13();
  D8():
    deopt 28 [c2, method5];
  D13():
    deopt 44 [method9];
  D16():
    deopt 53 [];
  D18():
    deopt 57 [];
  L7(c11, c12):
    c23 = `as.logical`(c12);
    c24 = `||`(c11, c23);
    goto L5(c24);
  L26():
    method6 = force? method5;
    checkMissing(method6);
    is_function = ldf `is.function` in base;
    r18 = dyn is_function(method6);
    check L27() else D9();
  L28():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L37():
    method10 = force? method9;
    checkMissing(method10);
    l = ld ClassDef;
    ___ = ldf `@<-`;
    check L38() else D14();
  L41():
    r26 = dyn stop("validity method must be NULL or a function of one argument");
    check L42() else D17();
  L43():
    p8 = prom<V +>{
      Class9 = ld Class;
      Class10 = force? Class9;
      checkMissing(Class10);
      return Class10;
    };
    p9 = prom<V +>{
      ClassDef = ld ClassDef;
      ClassDef1 = force? ClassDef;
      checkMissing(ClassDef1);
      return ClassDef1;
    };
    p10 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r30 = dyn assignClassDef[, , where](p8, p9, p10);
    check L44() else D19();
  D9():
    deopt 31 [c2, r18];
  D14():
    deopt 47 [method10, l, method10];
  D17():
    deopt 55 [r26];
  D19():
    deopt 62 [r30];
  L8(c17, c18, r20):
    r24 = `==`(r20, 1);
    c19 = `as.logical`(r24);
    c20 = `&&`(c18, c19);
    goto L7(c17, c20);
  L27():
    goto L6(c2, r18);
  L29():
    formalArgs = ldf formalArgs;
    check L31() else D10();
  L30():
    r19 = dyn base2(<lang formalArgs(method)>);
    goto L8(c7, c8, r19);
  L38():
    r25 = dyn ___(l, NULL, "validity", method10);
    check L39() else D15();
  L42():
    goto L10();
  L44():
    resetClass = ldf resetClass;
    check L45() else D20();
  D10():
    deopt 35 [c7, c8];
  D15():
    deopt 50 [method10, r25];
  D20():
    deopt 64 [];
  L31():
    p7 = prom<V +>{
      method7 = ld method;
      method8 = force? method7;
      checkMissing(method8);
      return method8;
    };
    r22 = dyn formalArgs(p7);
    check L32() else D11();
  L39():
    st ClassDef = r25;
    goto L10();
  L45():
    p11 = prom<V +>{
      Class11 = ld Class;
      Class12 = force? Class11;
      checkMissing(Class12);
      return Class12;
    };
    p12 = prom<V +>{
      ClassDef2 = ld ClassDef;
      ClassDef3 = force? ClassDef2;
      checkMissing(ClassDef3);
      return ClassDef3;
    };
    p13 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r34 = dyn resetClass[, , where](p11, p12, p13);
    check L46() else D21();
  D11():
    deopt 37 [c7, c8, r22];
  D21():
    deopt 69 [r34];
  L32():
    length = ldf length in base;
    r23 = dyn length(r22);
    check L33() else D12();
  L46():
    popenv;
    return r34;
  D12():
    deopt 39 [c7, c8, r23];
  L33():
    goto L8(c7, c8, r23);
  }
}