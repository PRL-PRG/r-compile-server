fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2616807308;
    st `.genericOrImplicit` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2616807308(name, pkg, env) {
  (reg name:*, reg pkg:*, reg env:*) -+> V { var name:*, var pkg:*, var env:*, reg _getGenericFromCache:cls, reg name1:*, reg name2:V, reg p:p(V +), reg env1:*, reg env2:V, reg p1:p(V +), reg pkg1:*, reg pkg2:V, reg p2:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg fdef:*, reg fdef1:V, reg c:V, reg c1:L, reg tryCatch:cls, reg getNamespace:cls, reg pkg3:*, reg pkg4:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg r9:cls, reg p5:p(V +), reg r11:V, reg isNamespace:cls, reg penv:*, reg penv1:V, reg p6:p(V +), reg r13:V, reg r14:V, reg c2:L, reg paste0:cls, reg pkg5:*, reg pkg6:V, reg p7:p(V +), reg r16:V, reg _in_:cls, reg pname:*, reg pname1:V, reg p8:p(V +), reg search:cls, reg r18:V, reg p9:p(V +), reg r20:V, reg c3:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg pname2:*, reg pname3:V, reg as_environment:cls, reg r23:V, reg r24:V, reg env3:*, reg env4:V, reg getFunction:cls, reg name3:*, reg name4:V, reg p10:p(V +), reg penv2:*, reg penv3:V, reg p11:p(V +), reg r28:V, reg is:cls, reg fdef2:*, reg fdef3:V, reg p12:p(V +), reg r30:V, reg r31:V, reg c4:L, reg is_primitive:cls, reg fdef4:*, reg fdef5:V, reg p13:p(V +), reg r33:V, reg c5:L, reg genericForBasic:cls, reg name5:*, reg name6:V, reg p14:p(V +), reg penv4:*, reg penv5:V, reg p15:p(V +), reg r36:V, reg r37:V, reg implicitGeneric:cls, reg name7:*, reg name8:V, reg p16:p(V +), reg penv6:*, reg penv7:V, reg p17:p(V +), reg r40:V, reg r41:V, reg fdef6:*, reg fdef7:V |
    mkenv;
    st name = name;
    st pkg = pkg;
    st env = env;
    _getGenericFromCache = ldf `.getGenericFromCache`;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    p2 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r3 = dyn _getGenericFromCache(p, p1, p2);
    check L13() else D1();
  D1():
    deopt 5 [r3];
  L13():
    st fdef = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r5):
    c1 = `as.logical`(r5);
    if c1 then L17() else L1();
  L14():
    fdef = ld fdef;
    check L16() else D2();
  L15():
    r4 = dyn base(<sym fdef>);
    goto L0(r4);
  D2():
    deopt 8 [fdef];
  L1():
    goto L11();
  L11():
    fdef6 = ld fdef;
    check L50() else D24();
  L16():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c = `==`(fdef1, NULL);
    goto L0(c);
  L17():
    tryCatch = ldf tryCatch;
    check L18() else D3();
  D3():
    deopt 12 [];
  D24():
    deopt 79 [fdef6];
  L18():
    p4 = prom<V +>{
      getNamespace = ldf getNamespace;
      p3 = prom<V +>{
        pkg3 = ld pkg;
        pkg4 = force? pkg3;
        checkMissing(pkg4);
        return pkg4;
      };
      r7 = dyn getNamespace(p3);
      return r7;
    };
    p5 = prom<V +>{
      r9 = clos inner3708401697;
      return r9;
    };
    r11 = dyn tryCatch[, error](p4, p5);
    check L19() else D4();
  L50():
    fdef7 = force? fdef6;
    checkMissing(fdef7);
    popenv;
    return fdef7;
  D4():
    deopt 16 [r11];
  L19():
    st penv = r11;
    isNamespace = ldf isNamespace;
    check L20() else D5();
  D5():
    deopt 19 [];
  L20():
    p6 = prom<V +>{
      penv = ld penv;
      penv1 = force? penv;
      checkMissing(penv1);
      return penv1;
    };
    r13 = dyn isNamespace(p6);
    check L21() else D6();
  D6():
    deopt 21 [r13];
  L21():
    r14 = `!`(r13);
    c2 = `as.logical`(r14);
    if c2 then L22() else L2();
  L2():
    goto L6();
  L6():
    getFunction = ldf getFunction;
    check L35() else D14();
  L22():
    paste0 = ldf paste0;
    check L23() else D7();
  D7():
    deopt 24 [];
  D14():
    deopt 46 [];
  L23():
    p7 = prom<V +>{
      pkg5 = ld pkg;
      pkg6 = force? pkg5;
      checkMissing(pkg6);
      return pkg6;
    };
    r16 = dyn paste0("package:", p7);
    check L24() else D8();
  L35():
    p10 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p11 = prom<V +>{
      penv2 = ld penv;
      penv3 = force? penv2;
      checkMissing(penv3);
      return penv3;
    };
    r28 = dyn getFunction(p10, TRUE, FALSE, p11);
    check L36() else D15();
  D8():
    deopt 27 [r16];
  D15():
    deopt 51 [r28];
  L24():
    st pname = r16;
    _in_ = ldf `%in%`;
    check L25() else D9();
  L36():
    st fdef = r28;
    is = ldf is;
    check L37() else D16();
  D9():
    deopt 30 [];
  D16():
    deopt 54 [];
  L25():
    p8 = prom<V +>{
      pname = ld pname;
      pname1 = force? pname;
      checkMissing(pname1);
      return pname1;
    };
    p9 = prom<V +>{
      search = ldf search;
      r18 = dyn search();
      return r18;
    };
    r20 = dyn _in_(p8, p9);
    check L26() else D10();
  L37():
    p12 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r30 = dyn is(p12, "genericFunction");
    check L38() else D17();
  D10():
    deopt 33 [r20];
  D17():
    deopt 57 [r30];
  L26():
    c3 = `as.logical`(r20);
    if c3 then L27() else L3();
  L38():
    r31 = `!`(r30);
    c4 = `as.logical`(r31);
    if c4 then L39() else L7();
  L3():
    env3 = ld env;
    check L33() else D13();
  L5(r24):
    st penv = r24;
    goto L6();
  L7():
    goto L10(NULL);
  L10(r41):
    goto L11();
  L27():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L39():
    is_primitive = ldf `is.primitive`;
    check L40() else D18();
  D13():
    deopt 40 [env3];
  D18():
    deopt 60 [];
  L4(r22):
    goto L5(r22);
  L28():
    pname2 = ld pname;
    check L30() else D11();
  L29():
    r21 = dyn base1(<sym pname>);
    goto L4(r21);
  L33():
    env4 = force? env3;
    checkMissing(env4);
    goto L5(env4);
  L40():
    p13 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    r33 = dyn is_primitive(p13);
    check L41() else D19();
  D11():
    deopt 36 [pname2];
  D19():
    deopt 62 [r33];
  L30():
    pname3 = force? pname2;
    checkMissing(pname3);
    as_environment = ldf `as.environment` in base;
    r23 = dyn as_environment(pname3);
    check L31() else D12();
  L41():
    c5 = `as.logical`(r33);
    if c5 then L42() else L8();
  D12():
    deopt 39 [r23];
  L8():
    implicitGeneric = ldf implicitGeneric;
    check L46() else D22();
  L9(r37):
    goto L10(r37);
  L31():
    goto L4(r23);
  L42():
    genericForBasic = ldf genericForBasic;
    check L43() else D20();
  D20():
    deopt 64 [];
  D22():
    deopt 70 [];
  L43():
    p14 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p15 = prom<V +>{
      penv4 = ld penv;
      penv5 = force? penv4;
      checkMissing(penv5);
      return penv5;
    };
    r36 = dyn genericForBasic(p14, p15);
    check L44() else D21();
  L46():
    p16 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p17 = prom<V +>{
      penv6 = ld penv;
      penv7 = force? penv6;
      checkMissing(penv7);
      return penv7;
    };
    r40 = dyn implicitGeneric(p16, p17);
    check L47() else D23();
  D21():
    deopt 67 [r36];
  D23():
    deopt 73 [r40];
  L44():
    st fdef = r36;
    goto L9(r36);
  L47():
    st fdef = r40;
    goto L9(r40);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L0() else D0();
  D0():
    deopt 0 [e1];
  L0():
    e2 = force? e1;
    checkMissing(e2);
    popenv;
    return e2;
  }
}