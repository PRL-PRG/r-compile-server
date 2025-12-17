fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2923942208;
    st classGeneratorFunction = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2923942208(classDef, env) {
  (reg classDef:*, reg env:*) -+> V { var classDef:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg is:cls, reg classDef1:*, reg classDef2:V, reg p2:p(V +), reg r5:V, reg c:L, reg is1:cls, reg classDef3:*, reg classDef4:V, reg p3:p(V +), reg r8:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg packageSlot:cls, reg classDef5:*, reg classDef6:V, reg p4:p(V +), reg r12:V, reg c2:V, reg c3:L, reg getClass:cls, reg classDef7:*, reg classDef8:V, reg p5:p(V +), reg env1:*, reg env2:V, reg p6:p(V +), reg r15:V, reg r16:V, reg getClass1:cls, reg classDef9:*, reg classDef10:V, reg p7:p(V +), reg r18:V, reg stop:cls, reg r19:V, reg r20:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg substitute:cls, reg r23:V, reg l:*, reg body__:cls, reg r24:V, reg env3:*, reg env4:V, reg l1:*, reg environment__:cls, reg r25:V, reg as:cls, reg fun:*, reg fun1:V, reg p8:p(V +), reg r27:V, reg __:cls, reg r28:V, reg l2:*, reg ___:cls, reg r29:V, reg __1:cls, reg r30:V, reg l3:*, reg ___1:cls, reg r31:V, reg fun2:*, reg fun3:V |
    mkenv;
    st classDef = classDef;
    env_isMissing = missing.0(env);
    if env_isMissing then L0() else L1(env);
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
  L1(env_orDefault):
    st env = env_orDefault;
    is = ldf is;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p2 = prom<V +>{
      classDef1 = ld classDef;
      classDef2 = force? classDef1;
      checkMissing(classDef2);
      return classDef2;
    };
    r5 = dyn is(p2, "classRepresentation");
    check L10() else D1();
  D1():
    deopt 4 [r5];
  L10():
    c = `as.logical`(r5);
    if c then L11() else L2();
  L2():
    is1 = ldf is;
    check L13() else D2();
  L3():
    r20 = clos inner1246119658;
    st fun = r20;
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L11():
    goto L3();
  D2():
    deopt 8 [];
  L8(r22):
    l = ld fun;
    body__ = ldf `body<-`;
    check L31() else D12();
  L13():
    p3 = prom<V +>{
      classDef3 = ld classDef;
      classDef4 = force? classDef3;
      checkMissing(classDef4);
      return classDef4;
    };
    r8 = dyn is1(p3, "character");
    check L14() else D3();
  L29():
    substitute = ldf substitute in base;
    r23 = dyn substitute(<lang new(CLASS, ...)>, <lang list(CLASS=`@`(classDef, className))>);
    goto L8(r23);
  L30():
    r21 = dyn base1(<lang new(CLASS, ...)>, <lang list(CLASS=`@`(classDef, className))>);
    goto L8(r21);
  D3():
    deopt 11 [r8];
  D12():
    deopt 41 [r22, l, r22];
  L14():
    c1 = `as.logical`(r8);
    if c1 then L15() else L4();
  L31():
    r24 = dyn body__(l, NULL, r22);
    check L32() else D13();
  D13():
    deopt 43 [r22, r24];
  L4():
    stop = ldf stop;
    check L27() else D10();
  L15():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L32():
    st fun = r24;
    env3 = ld env;
    check L33() else D14();
  D10():
    deopt 31 [];
  D14():
    deopt 45 [env3];
  L5(r10):
    c3 = `as.logical`(r10);
    if c3 then L20() else L6();
  L16():
    packageSlot = ldf packageSlot;
    check L18() else D4();
  L17():
    r9 = dyn base(<lang packageSlot(classDef)>);
    goto L5(r9);
  L27():
    r19 = dyn stop("argument 'classDef' must be a class definition or the name of a class");
    check L28() else D11();
  L33():
    env4 = force? env3;
    checkMissing(env4);
    l1 = ld fun;
    environment__ = ldf `environment<-`;
    check L34() else D15();
  D4():
    deopt 14 [];
  D11():
    deopt 33 [r19];
  D15():
    deopt 48 [env4, l1, env4];
  L6():
    getClass1 = ldf getClass;
    check L24() else D8();
  L7(r16):
    goto L3();
  L18():
    p4 = prom<V +>{
      classDef5 = ld classDef;
      classDef6 = force? classDef5;
      checkMissing(classDef6);
      return classDef6;
    };
    r12 = dyn packageSlot(p4);
    check L19() else D5();
  L20():
    getClass = ldf getClass;
    check L21() else D6();
  L28():
    goto L3();
  L34():
    r25 = dyn environment__(l1, NULL, env4);
    check L35() else D16();
  D5():
    deopt 16 [r12];
  D6():
    deopt 19 [];
  D8():
    deopt 26 [];
  D16():
    deopt 50 [env4, r25];
  L19():
    c2 = `==`(r12, NULL);
    goto L5(c2);
  L21():
    p5 = prom<V +>{
      classDef7 = ld classDef;
      classDef8 = force? classDef7;
      checkMissing(classDef8);
      return classDef8;
    };
    p6 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r15 = dyn getClass[, where](p5, p6);
    check L22() else D7();
  L24():
    p7 = prom<V +>{
      classDef9 = ld classDef;
      classDef10 = force? classDef9;
      checkMissing(classDef10);
      return classDef10;
    };
    r18 = dyn getClass1(p7);
    check L25() else D9();
  L35():
    st fun = r25;
    as = ldf as;
    check L36() else D17();
  D7():
    deopt 23 [r15];
  D9():
    deopt 28 [r18];
  D17():
    deopt 53 [];
  L22():
    st classDef = r15;
    goto L7(r15);
  L25():
    st classDef = r18;
    goto L7(r18);
  L36():
    p8 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    r27 = dyn as(p8, "classGeneratorFunction");
    check L37() else D18();
  D18():
    deopt 56 [r27];
  L37():
    st fun = r27;
    __ = ldf `@` in base;
    r28 = dyn __(<sym classDef>, <sym className>);
    l2 = ld fun;
    ___ = ldf `@<-`;
    check L38() else D19();
  D19():
    deopt 61 [r28, l2, r28];
  L38():
    r29 = dyn ___(l2, NULL, "className", r28);
    check L39() else D20();
  D20():
    deopt 64 [r28, r29];
  L39():
    st fun = r29;
    __1 = ldf `@` in base;
    r30 = dyn __1(<sym classDef>, <sym package>);
    l3 = ld fun;
    ___1 = ldf `@<-`;
    check L40() else D21();
  D21():
    deopt 69 [r30, l3, r30];
  L40():
    r31 = dyn ___1(l3, NULL, "package", r30);
    check L41() else D22();
  D22():
    deopt 72 [r30, r31];
  L41():
    st fun = r31;
    fun2 = ld fun;
    check L42() else D23();
  D23():
    deopt 74 [fun2];
  L42():
    fun3 = force? fun2;
    checkMissing(fun3);
    popenv;
    return fun3;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots? |
    mkenv;
    st `...` = ddd;
    popenv;
    return NULL;
  }
}