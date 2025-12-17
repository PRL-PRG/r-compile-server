fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4097787089;
    st `.S4methodsForGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4097787089(`generic.function`, class) {
  (reg generic_function:*, reg class:*) -+> V { var `generic.function`:*, var class:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getGeneric:cls, reg generic_function1:*, reg generic_function2:V, reg p:p(V +), reg r3:V, reg c:V, reg c1:L, reg _methods_info:cls, reg r4:V, reg generic_function3:*, reg generic_function4:V, reg get:cls, reg mtable:*, reg mtable1:V, reg p1:p(V +), reg environment:cls, reg getGeneric1:cls, reg generic:*, reg generic1:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg sapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg table:*, reg table1:V, reg names:cls, reg r16:V, reg p5:p(V +), reg r18:cls, reg p6:p(V +), reg table2:*, reg table3:V, reg p7:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg table4:*, reg table5:V, reg names1:cls, reg r24:V, reg lapply:cls, reg methods:*, reg methods1:V, reg p8:p(V +), reg r26:cls, reg p9:p(V +), reg r28:V, reg vapply:cls, reg signatures:*, reg signatures1:V, reg p10:p(V +), reg Negate:cls, reg is_null:*, reg is_null1:V, reg p11:p(V +), reg r31:V, reg p12:p(V +), reg logical:cls, reg r33:V, reg p13:p(V +), reg r35:V, reg packages:*, reg packages1:V, reg c2:L, reg packages3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg geom:*, reg geom1:V, reg __:cls, reg r36:V, reg methods2:*, reg methods3:V, reg c3:L, reg methods5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg geom2:*, reg geom3:V, reg __1:cls, reg r37:V, reg sapply1:cls, reg signatures2:*, reg signatures3:V, reg c4:L, reg signatures5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg geom4:*, reg geom5:V, reg __2:cls, reg r38:V, reg p14:p(V +), reg r40:cls, reg p15:p(V +), reg r42:V, reg _methods_info1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg r44:V, reg rep:cls, reg r45:V, reg p16:p(V +), reg packages4:*, reg packages5:V, reg p17:p(V +), reg signatures6:*, reg signatures7:V, reg p18:p(V +), reg r49:V |
    mkenv;
    st `generic.function` = generic_function;
    st class = class;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L10() else L1();
  L6():
    getGeneric = ldf getGeneric;
    check L8() else D0();
  L7():
    r = dyn base(<lang getGeneric(generic.function)>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1():
    st mtable = ".MTable";
    generic_function3 = ld `generic.function`;
    check L15() else D4();
  L8():
    p = prom<V +>{
      generic_function1 = ld `generic.function`;
      generic_function2 = force? generic_function1;
      checkMissing(generic_function2);
      return generic_function2;
    };
    r3 = dyn getGeneric(p);
    check L9() else D1();
  L10():
    _methods_info = ldf `.methods_info`;
    check L11() else D2();
  D1():
    deopt 4 [r3];
  D2():
    deopt 7 [];
  D4():
    deopt 15 [generic_function3];
  L9():
    c = `==`(r3, NULL);
    goto L0(c);
  L11():
    r4 = dyn _methods_info();
    check L12() else D3();
  L15():
    generic_function4 = force? generic_function3;
    checkMissing(generic_function4);
    st generic = generic_function4;
    get = ldf get;
    check L16() else D5();
  D3():
    deopt 8 [r4];
  D5():
    deopt 19 [];
  L12():
    popenv;
    return r4;
  L16():
    p1 = prom<V +>{
      mtable = ld mtable;
      mtable1 = force? mtable;
      checkMissing(mtable1);
      return mtable1;
    };
    p4 = prom<V +>{
      environment = ldf environment;
      p3 = prom<V +>{
        getGeneric1 = ldf getGeneric;
        p2 = prom<V +>{
          generic = ld generic;
          generic1 = force? generic;
          checkMissing(generic1);
          return generic1;
        };
        r9 = dyn getGeneric1(p2);
        return r9;
      };
      r11 = dyn environment(p3);
      return r11;
    };
    r13 = dyn get(p1, p4);
    check L17() else D6();
  D6():
    deopt 22 [r13];
  L17():
    st table = r13;
    sapply = ldf sapply;
    check L18() else D7();
  D7():
    deopt 25 [];
  L18():
    p5 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      names = ldf names in base;
      r16 = dyn names(table1);
      goto L0(r16);
    L2():
      r14 = dyn base1(<sym table>);
      goto L0(r14);
    };
    p6 = prom<V +>{
      r18 = clos inner461705079;
      return r18;
    };
    p7 = prom<V +>{
      table2 = ld table;
      table3 = force? table2;
      checkMissing(table3);
      return table3;
    };
    r21 = dyn sapply(p5, p6, p7);
    check L19() else D8();
  D8():
    deopt 29 [r21];
  L19():
    st packages = r21;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L3(r23):
    st methods = r23;
    lapply = ldf lapply;
    check L24() else D11();
  L20():
    table4 = ld table;
    check L22() else D9();
  L21():
    r22 = dyn base2(<sym table>);
    goto L3(r22);
  D9():
    deopt 33 [table4];
  D11():
    deopt 39 [];
  L22():
    table5 = force? table4;
    checkMissing(table5);
    names1 = ldf names in base;
    r24 = dyn names1(table5);
    check L23() else D10();
  L24():
    p8 = prom<V +>{
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      return methods1;
    };
    p9 = prom<V +>{
      r26 = clos inner1740211885;
      return r26;
    };
    r28 = dyn lapply(p8, p9);
    check L25() else D12();
  D10():
    deopt 36 [r24];
  D12():
    deopt 42 [r28];
  L23():
    goto L3(r24);
  L25():
    st signatures = r28;
    vapply = ldf vapply;
    check L26() else D13();
  D13():
    deopt 45 [];
  L26():
    p10 = prom<V +>{
      signatures = ld signatures;
      signatures1 = force? signatures;
      checkMissing(signatures1);
      return signatures1;
    };
    p12 = prom<V +>{
      Negate = ldf Negate;
      p11 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r31 = dyn Negate(p11);
      return r31;
    };
    p13 = prom<V +>{
      logical = ldf logical;
      r33 = dyn logical(1.0);
      return r33;
    };
    r35 = dyn vapply(p10, p12, p13);
    check L27() else D14();
  D14():
    deopt 49 [r35];
  L27():
    st geom = r35;
    packages = ld packages;
    check L28() else D15();
  D15():
    deopt 51 [packages];
  L28():
    packages1 = force? packages;
    checkMissing(packages1);
    c2 = `is.object`(packages1);
    if c2 then L29() else L30(packages1);
  L4(dx1):
    st packages = dx1;
    methods2 = ld methods;
    check L33() else D17();
  L29():
    dr = tryDispatchBuiltin.1("[", packages1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(packages3):
    geom = ld geom;
    check L32() else D16();
  D16():
    deopt 53 [packages3, geom];
  D17():
    deopt 57 [methods2];
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L32():
    geom1 = force? geom;
    __ = ldf `[` in base;
    r36 = dyn __(packages3, geom1);
    goto L4(r36);
  L33():
    methods3 = force? methods2;
    checkMissing(methods3);
    c3 = `is.object`(methods3);
    if c3 then L34() else L35(methods3);
  L5(dx3):
    st methods = dx3;
    sapply1 = ldf sapply;
    check L38() else D19();
  L34():
    dr2 = tryDispatchBuiltin.1("[", methods3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(dr2);
  L35(methods5):
    geom2 = ld geom;
    check L37() else D18();
  D18():
    deopt 59 [methods5, geom2];
  D19():
    deopt 64 [];
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L37():
    geom3 = force? geom2;
    __1 = ldf `[` in base;
    r37 = dyn __1(methods5, geom3);
    goto L5(r37);
  L38():
    p14 = prom<V +>{
      signatures2 = ld signatures;
      signatures3 = force? signatures2;
      checkMissing(signatures3);
      c4 = `is.object`(signatures3);
      if c4 then L1() else L2(signatures3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", signatures3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(signatures5):
      geom4 = ld geom;
      geom5 = force? geom4;
      __2 = ldf `[` in base;
      r38 = dyn __2(signatures5, geom5);
      goto L0(r38);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p15 = prom<V +>{
      r40 = clos inner1330644713;
      return r40;
    };
    r42 = dyn sapply1(p14, p15);
    check L39() else D20();
  D20():
    deopt 67 [r42];
  L39():
    st signatures = r42;
    _methods_info1 = ldf `.methods_info`;
    check L40() else D21();
  D21():
    deopt 70 [];
  L40():
    p16 = prom<V +>{
      sym3 = ldf rep;
      base3 = ldf rep in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      rep = ldf rep in base;
      r45 = dyn rep(<sym generic.function>, <lang length(packages)>);
      goto L0(r45);
    L2():
      r43 = dyn base3(<sym generic.function>, <lang length(packages)>);
      goto L0(r43);
    };
    p17 = prom<V +>{
      packages4 = ld packages;
      packages5 = force? packages4;
      checkMissing(packages5);
      return packages5;
    };
    p18 = prom<V +>{
      signatures6 = ld signatures;
      signatures7 = force? signatures6;
      checkMissing(signatures7);
      return signatures7;
    };
    r49 = dyn _methods_info1[generic, from, signature](p16, p17, p18);
    check L41() else D22();
  D22():
    deopt 77 [r49];
  L41():
    popenv;
    return r49;
  }
}
fun inner461705079(nm, table) {
  (reg nm:*, reg table:*) -+> V { var nm:*, var table:*, reg environmentName:cls, reg environment:cls, reg table1:*, reg table2:V, reg c:L, reg table4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nm1:*, reg nm2:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st nm = nm;
    st table = table;
    environmentName = ldf environmentName;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        table1 = ld table;
        table2 = force? table1;
        checkMissing(table2);
        c = `is.object`(table2);
        if c then L1() else L2(table2);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", table2);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(table4):
        nm1 = ld nm;
        nm2 = force? nm1;
        __ = ldf `[[` in base;
        r = dyn __(table4, nm2);
        goto L0(r);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r2 = dyn environment(p);
      return r2;
    };
    r4 = dyn environmentName(p1);
    check L1() else D1();
  D1():
    deopt 3 [r4];
  L1():
    popenv;
    return r4;
  }
}
fun inner1740211885(method, classes) {
  (reg method:*, reg classes:*) -+> V { var method:*, var classes:*, reg table:*, reg table1:V, reg c:L, reg table3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg method1:*, reg method2:V, reg __:cls, reg r:V, reg is:cls, reg m:*, reg m1:V, reg p:p(V +), reg r2:V, reg c1:L, reg setNames:cls, reg as_vector:cls, reg __1:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg __2:cls, reg r9:V, reg names:cls, reg r10:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st method = method;
    st classes = classes;
    table = ld table;
    check L2() else D0();
  D0():
    deopt 0 [table];
  L2():
    table1 = force? table;
    checkMissing(table1);
    c = `is.object`(table1);
    if c then L3() else L4(table1);
  L0(dx1):
    st m = dx1;
    is = ldf is;
    check L7() else D2();
  L3():
    dr = tryDispatchBuiltin.1("[[", table1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(table3):
    method1 = ld method;
    check L6() else D1();
  D1():
    deopt 2 [table3, method1];
  D2():
    deopt 7 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    method2 = force? method1;
    __ = ldf `[[` in base;
    r = dyn __(table3, method2);
    goto L0(r);
  L7():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r2 = dyn is(p, "MethodDefinition");
    check L8() else D3();
  D3():
    deopt 10 [r2];
  L8():
    c1 = `as.logical`(r2);
    if c1 then L9() else L1();
  L1():
    popenv;
    return NULL;
  L9():
    setNames = ldf setNames;
    check L10() else D4();
  D4():
    deopt 12 [];
  L10():
    p2 = prom<V +>{
      as_vector = ldf `as.vector`;
      p1 = prom<V +>{
        __1 = ldf `@` in base;
        r3 = dyn __1(<sym m>, <sym defined>);
        return r3;
      };
      r5 = dyn as_vector(p1);
      return r5;
    };
    p3 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      __2 = ldf `@` in base;
      r9 = dyn __2(<sym m>, <sym defined>);
      names = ldf names in base;
      r10 = dyn names(r9);
      goto L0(r10);
    L2():
      r7 = dyn base(<lang `@`(m, defined)>);
      goto L0(r7);
    };
    r12 = dyn setNames(p2, p3);
    check L11() else D5();
  D5():
    deopt 15 [r12];
  L11():
    popenv;
    return r12;
  }
}
fun inner1330644713(elt) {
  (reg elt:*) -+> V { var elt:*, reg paste0:cls, reg as_vector:cls, reg elt1:*, reg elt2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st elt = elt;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_vector = ldf `as.vector`;
      p = prom<V +>{
        elt1 = ld elt;
        elt2 = force? elt1;
        checkMissing(elt2);
        return elt2;
      };
      r1 = dyn as_vector(p);
      return r1;
    };
    r3 = dyn paste0[, collapse](p1, ",");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}