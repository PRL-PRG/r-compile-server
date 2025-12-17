fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4097787089;
    st `.S4methodsForClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4097787089(`generic.function`, class) {
  (reg generic_function:*, reg class:*) -+> V { var `generic.function`:*, var class:*, reg tryCatch:cls, reg getClass:cls, reg class1:*, reg class2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:cls, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg def:*, reg def1:V, reg c:V, reg c1:L, reg _methods_info:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg class3:*, reg class4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg __:cls, reg r15:V, reg names:cls, reg r16:V, reg c2:cls, reg r17:V, reg as_vector:cls, reg getGenerics:cls, reg search:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg setNames:cls, reg generics:*, reg generics1:V, reg p5:p(V +), reg generics2:*, reg generics3:V, reg p6:p(V +), reg r25:V, reg lapply:cls, reg nms:*, reg nms1:V, reg p7:p(V +), reg r27:cls, reg p8:p(V +), reg r29:V, reg lapply1:cls, reg nms2:*, reg nms3:V, reg p9:p(V +), reg r31:cls, reg p10:p(V +), reg r33:V, reg lapply2:cls, reg methods:*, reg methods1:V, reg p11:p(V +), reg r35:cls, reg p12:p(V +), reg r37:V, reg r38:cls, reg Map:cls, reg filter:*, reg filter1:V, reg p13:p(V +), reg packages:*, reg packages1:V, reg p14:p(V +), reg geom:*, reg geom1:V, reg p15:p(V +), reg r42:V, reg Map1:cls, reg filter2:*, reg filter3:V, reg p16:p(V +), reg methods2:*, reg methods3:V, reg p17:p(V +), reg geom2:*, reg geom3:V, reg p18:p(V +), reg r46:V, reg lengths:cls, reg methods4:*, reg methods5:V, reg p19:p(V +), reg r48:V, reg r49:V, reg packages2:*, reg packages3:V, reg c3:L, reg packages5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg non0:*, reg non1:V, reg __1:cls, reg r50:V, reg methods6:*, reg methods7:V, reg c4:L, reg methods9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg non2:*, reg non3:V, reg __2:cls, reg r51:V, reg lapply3:cls, reg methods10:*, reg methods11:V, reg p20:p(V +), reg r53:cls, reg p21:p(V +), reg classes:*, reg classes1:V, reg p22:p(V +), reg r56:V, reg Map2:cls, reg filter4:*, reg filter5:V, reg p23:p(V +), reg packages6:*, reg packages7:V, reg p24:p(V +), reg geom4:*, reg geom5:V, reg p25:p(V +), reg r60:V, reg Map3:cls, reg filter6:*, reg filter7:V, reg p26:p(V +), reg methods12:*, reg methods13:V, reg p27:p(V +), reg geom6:*, reg geom7:V, reg p28:p(V +), reg r64:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r65:V, reg r66:V, reg rep:cls, reg r67:V, reg unlist:cls, reg lapply4:cls, reg methods14:*, reg methods15:V, reg p29:p(V +), reg r69:cls, reg p30:p(V +), reg r71:V, reg p31:p(V +), reg r73:V, reg unlist1:cls, reg packages8:*, reg packages9:V, reg p32:p(V +), reg r75:V, reg _methods_info1:cls, reg generic:*, reg generic1:V, reg p33:p(V +), reg signature:*, reg signature1:V, reg p34:p(V +), reg package:*, reg package1:V, reg p35:p(V +), reg r79:V |
    mkenv;
    st `generic.function` = generic_function;
    st class = class;
    tryCatch = ldf tryCatch;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p1 = prom<V +>{
      getClass = ldf getClass;
      p = prom<V +>{
        class1 = ld class;
        class2 = force? class1;
        checkMissing(class2);
        return class2;
      };
      r1 = dyn getClass(p);
      return r1;
    };
    p2 = prom<V +>{
      r3 = clos inner1246119658;
      return r3;
    };
    r5 = dyn tryCatch[, error](p1, p2);
    check L9() else D1();
  D1():
    deopt 5 [r5];
  L9():
    st def = r5;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r7):
    c1 = `as.logical`(r7);
    if c1 then L13() else L1();
  L10():
    def = ld def;
    check L12() else D2();
  L11():
    r6 = dyn base(<sym def>);
    goto L0(r6);
  D2():
    deopt 8 [def];
  L1():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L12():
    def1 = force? def;
    checkMissing(def1);
    c = `==`(def1, NULL);
    goto L0(c);
  L13():
    _methods_info = ldf `.methods_info`;
    check L14() else D3();
  D3():
    deopt 12 [];
  L3(r12):
    st classes = r12;
    as_vector = ldf `as.vector`;
    check L25() else D8();
  L14():
    r8 = dyn _methods_info();
    check L15() else D4();
  L18():
    class3 = ld class;
    check L20() else D5();
  L19():
    r11 = dyn base1(<sym class>, <lang names(`@`(getClass(class), contains))>);
    goto L3(r11);
  D4():
    deopt 13 [r8];
  D5():
    deopt 19 [class3];
  D8():
    deopt 31 [];
  L15():
    popenv;
    return r8;
  L20():
    class4 = force? class3;
    checkMissing(class4);
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L25():
    p4 = prom<V +>{
      getGenerics = ldf getGenerics;
      p3 = prom<V +>{
        search = ldf search;
        r18 = dyn search();
        return r18;
      };
      r20 = dyn getGenerics[where](p3);
      return r20;
    };
    r22 = dyn as_vector(p4);
    check L26() else D9();
  D9():
    deopt 33 [r22];
  L4(r14):
    c2 = ldf c in base;
    r17 = dyn c2(class4, r14);
    check L24() else D7();
  L21():
    __ = ldf `@` in base;
    r15 = dyn __(<lang getClass(class)>, <sym contains>);
    names = ldf names in base;
    r16 = dyn names(r15);
    check L23() else D6();
  L22():
    r13 = dyn base2(<lang `@`(getClass(class), contains)>);
    goto L4(r13);
  L26():
    st generics = r22;
    setNames = ldf setNames;
    check L27() else D10();
  D6():
    deopt 26 [r16];
  D7():
    deopt 28 [r17];
  D10():
    deopt 36 [];
  L23():
    goto L4(r16);
  L24():
    goto L3(r17);
  L27():
    p5 = prom<V +>{
      generics = ld generics;
      generics1 = force? generics;
      checkMissing(generics1);
      return generics1;
    };
    p6 = prom<V +>{
      generics2 = ld generics;
      generics3 = force? generics2;
      checkMissing(generics3);
      return generics3;
    };
    r25 = dyn setNames(p5, p6);
    check L28() else D11();
  D11():
    deopt 39 [r25];
  L28():
    st nms = r25;
    lapply = ldf lapply;
    check L29() else D12();
  D12():
    deopt 42 [];
  L29():
    p7 = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    p8 = prom<V +>{
      r27 = clos inner2915219347;
      return r27;
    };
    r29 = dyn lapply(p7, p8);
    check L30() else D13();
  D13():
    deopt 45 [r29];
  L30():
    st packages = r29;
    lapply1 = ldf lapply;
    check L31() else D14();
  D14():
    deopt 48 [];
  L31():
    p9 = prom<V +>{
      nms2 = ld nms;
      nms3 = force? nms2;
      checkMissing(nms3);
      return nms3;
    };
    p10 = prom<V +>{
      r31 = clos inner2915219347;
      return r31;
    };
    r33 = dyn lapply1(p9, p10);
    check L32() else D15();
  D15():
    deopt 51 [r33];
  L32():
    st methods = r33;
    lapply2 = ldf lapply;
    check L33() else D16();
  D16():
    deopt 54 [];
  L33():
    p11 = prom<V +>{
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      return methods1;
    };
    p12 = prom<V +>{
      r35 = clos inner815072961;
      return r35;
    };
    r37 = dyn lapply2(p11, p12);
    check L34() else D17();
  D17():
    deopt 57 [r37];
  L34():
    st geom = r37;
    r38 = clos inner1144897881;
    st filter = r38;
    Map = ldf Map;
    check L35() else D18();
  D18():
    deopt 63 [];
  L35():
    p13 = prom<V +>{
      filter = ld filter;
      filter1 = force? filter;
      checkMissing(filter1);
      return filter1;
    };
    p14 = prom<V +>{
      packages = ld packages;
      packages1 = force? packages;
      checkMissing(packages1);
      return packages1;
    };
    p15 = prom<V +>{
      geom = ld geom;
      geom1 = force? geom;
      checkMissing(geom1);
      return geom1;
    };
    r42 = dyn Map(p13, p14, p15);
    check L36() else D19();
  D19():
    deopt 67 [r42];
  L36():
    st packages = r42;
    Map1 = ldf Map;
    check L37() else D20();
  D20():
    deopt 70 [];
  L37():
    p16 = prom<V +>{
      filter2 = ld filter;
      filter3 = force? filter2;
      checkMissing(filter3);
      return filter3;
    };
    p17 = prom<V +>{
      methods2 = ld methods;
      methods3 = force? methods2;
      checkMissing(methods3);
      return methods3;
    };
    p18 = prom<V +>{
      geom2 = ld geom;
      geom3 = force? geom2;
      checkMissing(geom3);
      return geom3;
    };
    r46 = dyn Map1(p16, p17, p18);
    check L38() else D21();
  D21():
    deopt 74 [r46];
  L38():
    st methods = r46;
    lengths = ldf lengths;
    check L39() else D22();
  D22():
    deopt 77 [];
  L39():
    p19 = prom<V +>{
      methods4 = ld methods;
      methods5 = force? methods4;
      checkMissing(methods5);
      return methods5;
    };
    r48 = dyn lengths(p19);
    check L40() else D23();
  D23():
    deopt 79 [r48];
  L40():
    r49 = `!=`(r48, 0);
    st non0 = r49;
    packages2 = ld packages;
    check L41() else D24();
  D24():
    deopt 83 [packages2];
  L41():
    packages3 = force? packages2;
    checkMissing(packages3);
    c3 = `is.object`(packages3);
    if c3 then L42() else L43(packages3);
  L5(dx1):
    st packages = dx1;
    methods6 = ld methods;
    check L46() else D26();
  L42():
    dr = tryDispatchBuiltin.1("[", packages3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(dr);
  L43(packages5):
    non0 = ld non0;
    check L45() else D25();
  D25():
    deopt 85 [packages5, non0];
  D26():
    deopt 89 [methods6];
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L45():
    non1 = force? non0;
    __1 = ldf `[` in base;
    r50 = dyn __1(packages5, non1);
    goto L5(r50);
  L46():
    methods7 = force? methods6;
    checkMissing(methods7);
    c4 = `is.object`(methods7);
    if c4 then L47() else L48(methods7);
  L6(dx3):
    st methods = dx3;
    lapply3 = ldf lapply;
    check L51() else D28();
  L47():
    dr2 = tryDispatchBuiltin.1("[", methods7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48(dr2);
  L48(methods9):
    non2 = ld non0;
    check L50() else D27();
  D27():
    deopt 91 [methods9, non2];
  D28():
    deopt 96 [];
  L49():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L50():
    non3 = force? non2;
    __2 = ldf `[` in base;
    r51 = dyn __2(methods9, non3);
    goto L6(r51);
  L51():
    p20 = prom<V +>{
      methods10 = ld methods;
      methods11 = force? methods10;
      checkMissing(methods11);
      return methods11;
    };
    p21 = prom<V +>{
      r53 = clos inner1740211885;
      return r53;
    };
    p22 = prom<V +>{
      classes = ld classes;
      classes1 = force? classes;
      checkMissing(classes1);
      return classes1;
    };
    r56 = dyn lapply3(p20, p21, p22);
    check L52() else D29();
  D29():
    deopt 100 [r56];
  L52():
    st geom = r56;
    Map2 = ldf Map;
    check L53() else D30();
  D30():
    deopt 103 [];
  L53():
    p23 = prom<V +>{
      filter4 = ld filter;
      filter5 = force? filter4;
      checkMissing(filter5);
      return filter5;
    };
    p24 = prom<V +>{
      packages6 = ld packages;
      packages7 = force? packages6;
      checkMissing(packages7);
      return packages7;
    };
    p25 = prom<V +>{
      geom4 = ld geom;
      geom5 = force? geom4;
      checkMissing(geom5);
      return geom5;
    };
    r60 = dyn Map2(p23, p24, p25);
    check L54() else D31();
  D31():
    deopt 107 [r60];
  L54():
    st packages = r60;
    Map3 = ldf Map;
    check L55() else D32();
  D32():
    deopt 110 [];
  L55():
    p26 = prom<V +>{
      filter6 = ld filter;
      filter7 = force? filter6;
      checkMissing(filter7);
      return filter7;
    };
    p27 = prom<V +>{
      methods12 = ld methods;
      methods13 = force? methods12;
      checkMissing(methods13);
      return methods13;
    };
    p28 = prom<V +>{
      geom6 = ld geom;
      geom7 = force? geom6;
      checkMissing(geom7);
      return geom7;
    };
    r64 = dyn Map3(p26, p27, p28);
    check L56() else D33();
  D33():
    deopt 114 [r64];
  L56():
    st methods = r64;
    sym3 = ldf rep;
    base3 = ldf rep in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L57() else L58();
  L7(r66):
    st generic = r66;
    unlist = ldf unlist;
    check L59() else D34();
  L57():
    rep = ldf rep in base;
    r67 = dyn rep(<lang names(methods)>, <lang lengths(methods)>);
    goto L7(r67);
  L58():
    r65 = dyn base3(<lang names(methods)>, <lang lengths(methods)>);
    goto L7(r65);
  D34():
    deopt 121 [];
  L59():
    p31 = prom<V +>{
      lapply4 = ldf lapply;
      p29 = prom<V +>{
        methods14 = ld methods;
        methods15 = force? methods14;
        checkMissing(methods15);
        return methods15;
      };
      p30 = prom<V +>{
        r69 = clos inner815072961;
        return r69;
      };
      r71 = dyn lapply4(p29, p30);
      return r71;
    };
    r73 = dyn unlist[, `use.names`](p31, FALSE);
    check L60() else D35();
  D35():
    deopt 125 [r73];
  L60():
    st signature = r73;
    unlist1 = ldf unlist;
    check L61() else D36();
  D36():
    deopt 128 [];
  L61():
    p32 = prom<V +>{
      packages8 = ld packages;
      packages9 = force? packages8;
      checkMissing(packages9);
      return packages9;
    };
    r75 = dyn unlist1[, `use.names`](p32, FALSE);
    check L62() else D37();
  D37():
    deopt 132 [r75];
  L62():
    st package = r75;
    _methods_info1 = ldf `.methods_info`;
    check L63() else D38();
  D38():
    deopt 135 [];
  L63():
    p33 = prom<V +>{
      generic = ld generic;
      generic1 = force? generic;
      checkMissing(generic1);
      return generic1;
    };
    p34 = prom<V +>{
      signature = ld signature;
      signature1 = force? signature;
      checkMissing(signature1);
      return signature1;
    };
    p35 = prom<V +>{
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      return package1;
    };
    r79 = dyn _methods_info1[generic, signature, from](p33, p34, p35);
    check L64() else D39();
  D39():
    deopt 142 [r79];
  L64():
    popenv;
    return r79;
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
fun inner2915219347(generic) {
  (reg generic:*) -+> V { var generic:*, reg environment:cls, reg getGeneric:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg lapply:cls, reg table:*, reg table1:V, reg p2:p(V +), reg r8:cls, reg p3:p(V +), reg r10:V |
    mkenv;
    st generic = generic;
    environment = ldf environment;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      getGeneric = ldf getGeneric;
      p = prom<V +>{
        generic1 = ld generic;
        generic2 = force? generic1;
        checkMissing(generic2);
        return generic2;
      };
      r1 = dyn getGeneric(p);
      return r1;
    };
    r3 = dyn environment(p1);
    check L2() else D1();
  D1():
    deopt 3 [r3];
  L2():
    c = `is.object`(r3);
    if c then L3() else L4(r3);
  L0(dx1):
    st table = dx1;
    lapply = ldf lapply;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.1("[[", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r5):
    __ = ldf `[[` in base;
    r6 = dyn __(r5, ".MTable");
    goto L0(r6);
  D2():
    deopt 9 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    p2 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    p3 = prom<V +>{
      r8 = clos inner2296048169;
      return r8;
    };
    r10 = dyn lapply(p2, p3);
    check L7() else D3();
  D3():
    deopt 12 [r10];
  L7():
    popenv;
    return r10;
  }
}
fun inner2296048169(m) {
  (reg m:*) -+> V { var m:*, reg environmentName:cls, reg environment:cls, reg m1:*, reg m2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st m = m;
    environmentName = ldf environmentName;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      environment = ldf environment;
      p = prom<V +>{
        m1 = ld m;
        m2 = force? m1;
        checkMissing(m2);
        return m2;
      };
      r1 = dyn environment(p);
      return r1;
    };
    r3 = dyn environmentName(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner815072961(method) {
  (reg method:*) -+> V { var method:*, reg vapply:cls, reg method1:*, reg method2:V, reg p:p(V +), reg is_null:*, reg is_null1:V, reg p1:p(V +), reg logical:cls, reg r2:V, reg p2:p(V +), reg r4:V, reg r5:V |
    mkenv;
    st method = method;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    p1 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    p2 = prom<V +>{
      logical = ldf logical;
      r2 = dyn logical(1.0);
      return r2;
    };
    r4 = dyn vapply(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    r5 = `!`(r4);
    popenv;
    return r5;
  }
}
fun inner1144897881(elt, geom) {
  (reg elt:*, reg geom:*) -+> V { var elt:*, var geom:*, reg elt1:*, reg elt2:V, reg c:L, reg elt4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg geom1:*, reg geom2:V, reg __:cls, reg r:V |
    mkenv;
    st elt = elt;
    st geom = geom;
    elt1 = ld elt;
    check L1() else D0();
  D0():
    deopt 0 [elt1];
  L1():
    elt2 = force? elt1;
    checkMissing(elt2);
    c = `is.object`(elt2);
    if c then L2() else L3(elt2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", elt2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(elt4):
    geom1 = ld geom;
    check L5() else D1();
  D1():
    deopt 2 [elt4, geom1];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    geom2 = force? geom1;
    __ = ldf `[` in base;
    r = dyn __(elt4, geom2);
    goto L0(r);
  }
}
fun inner1740211885(method, classes) {
  (reg method:*, reg classes:*) -+> V { var method:*, var classes:*, reg simplify2array:cls, reg method1:*, reg method2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sig:*, reg sig1:V, reg is_matrix:cls, reg r4:V, reg r5:V, reg c:L, reg matrix:cls, reg sig2:*, reg sig3:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg method3:*, reg method4:V, reg length:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg apply:cls, reg sig4:*, reg sig5:V, reg p3:p(V +), reg match:*, reg match1:V, reg p4:p(V +), reg classes1:*, reg classes2:V, reg p5:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg idx:*, reg idx1:V, reg is_matrix1:cls, reg r19:V, reg r20:V, reg c1:L, reg matrix1:cls, reg idx2:*, reg idx3:V, reg p6:p(V +), reg ncol:cls, reg sig6:*, reg sig7:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg colSums:cls, reg idx4:*, reg idx5:V, reg r27:V, reg p9:p(V +), reg r29:V, reg r30:V, reg idx6:*, reg idx7:V, reg c2:L, reg idx9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg keep:*, reg keep1:V, reg __:cls, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg pmax:cls, reg apply1:cls, reg sidx:*, reg sidx1:V, reg p10:p(V +), reg max:*, reg max1:V, reg p11:p(V +), reg r38:V, reg p12:p(V +), reg r40:V, reg cumprod:cls, reg r41:V, reg c3:L, reg r43:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nrow:cls, reg sidx2:*, reg sidx3:V, reg p13:p(V +), reg r45:V, reg r46:V, reg __1:cls, reg r47:V, reg c4:cls, reg r48:V, reg colSums1:cls, reg sidx4:*, reg sidx5:V, reg shift:*, reg shift1:V, reg r49:V, reg p14:p(V +), reg r51:V, reg sig8:*, reg sig9:V, reg c5:L, reg sig11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg keep2:*, reg keep3:V, reg __2:cls, reg r52:V, reg l:*, reg c6:L, reg r54:S, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sidx6:*, reg sidx7:V, reg r57:V, reg ___:cls, reg r58:V, reg apply2:cls, reg sig12:*, reg sig13:V, reg p15:p(V +), reg paste:*, reg paste1:V, reg p16:p(V +), reg r61:V, reg lapply:cls, reg split:cls, reg score:*, reg score1:V, reg p17:p(V +), reg sig14:*, reg sig15:V, reg p18:p(V +), reg r64:V, reg p19:p(V +), reg r66:cls, reg p20:p(V +), reg r68:V, reg l3:*, reg split__:cls, reg sig16:*, reg sig17:V, reg p21:p(V +), reg r70:V, reg score2:*, reg score3:V, reg r71:V |
    mkenv;
    st method = method;
    st classes = classes;
    simplify2array = ldf simplify2array;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r1 = dyn simplify2array(p);
    check L13() else D1();
  D1():
    deopt 3 [r1];
  L13():
    st sig = r1;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L18() else L1();
  L14():
    sig = ld sig;
    check L16() else D2();
  L15():
    r2 = dyn base(<sym sig>);
    goto L0(r2);
  D2():
    deopt 7 [sig];
  L1():
    goto L2();
  L2():
    apply = ldf apply;
    check L22() else D6();
  L16():
    sig1 = force? sig;
    checkMissing(sig1);
    is_matrix = ldf `is.matrix` in base;
    r4 = dyn is_matrix(sig1);
    check L17() else D3();
  L18():
    matrix = ldf matrix;
    check L19() else D4();
  D3():
    deopt 10 [r4];
  D4():
    deopt 13 [];
  D6():
    deopt 22 [];
  L17():
    goto L0(r4);
  L19():
    p1 = prom<V +>{
      sig2 = ld sig;
      sig3 = force? sig2;
      checkMissing(sig3);
      return sig3;
    };
    p2 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      length = ldf length in base;
      r9 = dyn length(method4);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym method>);
      goto L0(r7);
    };
    r11 = dyn matrix[, ncol](p1, p2);
    check L20() else D5();
  L22():
    p3 = prom<V +>{
      sig4 = ld sig;
      sig5 = force? sig4;
      checkMissing(sig5);
      return sig5;
    };
    p4 = prom<V +>{
      match = ld match;
      match1 = force? match;
      checkMissing(match1);
      return match1;
    };
    p5 = prom<V +>{
      classes1 = ld classes;
      classes2 = force? classes1;
      checkMissing(classes2);
      return classes2;
    };
    r16 = dyn apply(p3, 2.0, p4, p5, 0);
    check L23() else D7();
  D5():
    deopt 17 [r11];
  D7():
    deopt 28 [r16];
  L20():
    st sig = r11;
    goto L2();
  L23():
    st idx = r16;
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L3(r18):
    r20 = `!`(r18);
    c1 = `as.logical`(r20);
    if c1 then L28() else L4();
  L24():
    idx = ld idx;
    check L26() else D8();
  L25():
    r17 = dyn base2(<sym idx>);
    goto L3(r17);
  D8():
    deopt 32 [idx];
  L4():
    goto L5();
  L5():
    colSums = ldf colSums;
    check L32() else D12();
  L26():
    idx1 = force? idx;
    checkMissing(idx1);
    is_matrix1 = ldf `is.matrix` in base;
    r19 = dyn is_matrix1(idx1);
    check L27() else D9();
  L28():
    matrix1 = ldf matrix;
    check L29() else D10();
  D9():
    deopt 35 [r19];
  D10():
    deopt 38 [];
  D12():
    deopt 47 [];
  L27():
    goto L3(r19);
  L29():
    p6 = prom<V +>{
      idx2 = ld idx;
      idx3 = force? idx2;
      checkMissing(idx3);
      return idx3;
    };
    p8 = prom<V +>{
      ncol = ldf ncol;
      p7 = prom<V +>{
        sig6 = ld sig;
        sig7 = force? sig6;
        checkMissing(sig7);
        return sig7;
      };
      r23 = dyn ncol(p7);
      return r23;
    };
    r25 = dyn matrix1[, ncol](p6, p8);
    check L30() else D11();
  L32():
    p9 = prom<V +>{
      idx4 = ld idx;
      idx5 = force? idx4;
      checkMissing(idx5);
      r27 = `!=`(idx5, 0.0);
      return r27;
    };
    r29 = dyn colSums(p9);
    check L33() else D13();
  D11():
    deopt 42 [r25];
  D13():
    deopt 49 [r29];
  L30():
    st idx = r25;
    goto L5();
  L33():
    r30 = `!=`(r29, 0.0);
    st keep = r30;
    idx6 = ld idx;
    check L34() else D14();
  D14():
    deopt 53 [idx6];
  L34():
    idx7 = force? idx6;
    checkMissing(idx7);
    c2 = `is.object`(idx7);
    if c2 then L35() else L36(idx7);
  L6(dx1):
    st sidx = dx1;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L35():
    dr = tryDispatchBuiltin.1("[", idx7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(idx9):
    keep = ld keep;
    check L38() else D15();
  D15():
    deopt 56 [idx9, keep];
  L7(r33):
    st shift = r33;
    colSums1 = ldf colSums;
    check L52() else D22();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L38():
    keep1 = force? keep;
    __ = ldf `[` in base;
    r31 = dyn __(idx7, <missing>, keep1, FALSE);
    goto L6(r31);
  L39():
    sym4 = ldf cumprod;
    base4 = ldf cumprod in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L40():
    r32 = dyn base3(0.0, <lang `[`(cumprod(pmax(1.0, apply(sidx, 1.0, max))), `-`(nrow(sidx)))>);
    goto L7(r32);
  D22():
    deopt 85 [];
  L8(r35):
    c3 = `is.object`(r35);
    if c3 then L46() else L47(r35);
  L41():
    pmax = ldf pmax;
    check L43() else D16();
  L42():
    r34 = dyn base4(<lang pmax(1.0, apply(sidx, 1.0, max))>);
    goto L8(r34);
  L52():
    p14 = prom<V +>{
      sidx4 = ld sidx;
      sidx5 = force? sidx4;
      checkMissing(sidx5);
      shift = ld shift;
      shift1 = force? shift;
      checkMissing(shift1);
      r49 = `+`(sidx5, shift1);
      return r49;
    };
    r51 = dyn colSums1(p14);
    check L53() else D23();
  D16():
    deopt 69 [];
  D23():
    deopt 87 [r51];
  L9(dx3):
    c4 = ldf c in base;
    r48 = dyn c4(0.0, dx3);
    check L51() else D21();
  L43():
    p12 = prom<V +>{
      apply1 = ldf apply;
      p10 = prom<V +>{
        sidx = ld sidx;
        sidx1 = force? sidx;
        checkMissing(sidx1);
        return sidx1;
      };
      p11 = prom<V +>{
        max = ld max;
        max1 = force? max;
        checkMissing(max1);
        return max1;
      };
      r38 = dyn apply1(p10, 1.0, p11);
      return r38;
    };
    r40 = dyn pmax(1.0, p12);
    check L44() else D17();
  L46():
    dr2 = tryDispatchBuiltin.1("[", r35);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(dr2);
  L47(r43):
    nrow = ldf nrow;
    check L49() else D19();
  L53():
    st score = r51;
    sig8 = ld sig;
    check L54() else D24();
  D17():
    deopt 72 [r40];
  D19():
    deopt 76 [r43];
  D21():
    deopt 82 [r48];
  D24():
    deopt 89 [sig8];
  L44():
    cumprod = ldf cumprod in base;
    r41 = dyn cumprod(r40);
    check L45() else D18();
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L49():
    p13 = prom<V +>{
      sidx2 = ld sidx;
      sidx3 = force? sidx2;
      checkMissing(sidx3);
      return sidx3;
    };
    r45 = dyn nrow(p13);
    check L50() else D20();
  L51():
    goto L7(r48);
  L54():
    sig9 = force? sig8;
    checkMissing(sig9);
    c5 = `is.object`(sig9);
    if c5 then L55() else L56(sig9);
  D18():
    deopt 74 [r41];
  D20():
    deopt 78 [r43, r45];
  L10(dx5):
    st sig = dx5;
    st sig0 = dx5;
    l = ld sig0;
    c6 = `is.object`(l);
    if c6 then L59() else L60("*", l);
  L45():
    goto L8(r41);
  L50():
    r46 = `-`(<missing>, r45);
    __1 = ldf `[` in base;
    r47 = dyn __1(r43, r46);
    goto L9(r47);
  L55():
    dr4 = tryDispatchBuiltin.1("[", sig9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L57() else L56(dr4);
  L56(sig11):
    keep2 = ld keep;
    check L58() else D25();
  D25():
    deopt 92 [sig11, keep2];
  L11(dx7):
    st sig0 = dx7;
    apply2 = ldf apply;
    check L63() else D27();
  L57():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L58():
    keep3 = force? keep2;
    __2 = ldf `[` in base;
    r52 = dyn __2(sig9, <missing>, keep3, FALSE);
    goto L10(r52);
  L59():
    dr6 = tryDispatchBuiltin.0("[<-", l, "*");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60("*", dr6);
  L60(r54, l2):
    sidx6 = ld sidx;
    check L62() else D26();
  D26():
    deopt 103 [r54, l2, "*", sidx6];
  D27():
    deopt 110 [];
  L61():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L62():
    sidx7 = force? sidx6;
    checkMissing(sidx7);
    r57 = `!=`(sidx7, 0.0);
    ___ = ldf `[<-` in base;
    r58 = dyn ___(l2, "*", r57);
    goto L11(r58);
  L63():
    p15 = prom<V +>{
      sig12 = ld sig0;
      sig13 = force? sig12;
      checkMissing(sig13);
      return sig13;
    };
    p16 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r61 = dyn apply2[, , , collapse](p15, 2.0, p16, "#");
    check L64() else D28();
  D28():
    deopt 116 [r61];
  L64():
    st sig0 = r61;
    lapply = ldf lapply;
    check L65() else D29();
  D29():
    deopt 119 [];
  L65():
    p19 = prom<V +>{
      split = ldf split;
      p17 = prom<V +>{
        score = ld score;
        score1 = force? score;
        checkMissing(score1);
        return score1;
      };
      p18 = prom<V +>{
        sig14 = ld sig0;
        sig15 = force? sig14;
        checkMissing(sig15);
        return sig15;
      };
      r64 = dyn split(p17, p18);
      return r64;
    };
    p20 = prom<V +>{
      r66 = clos inner1330644713;
      return r66;
    };
    r68 = dyn lapply(p19, p20);
    check L66() else D30();
  D30():
    deopt 122 [r68];
  L66():
    l3 = ld score;
    split__ = ldf `split<-`;
    check L67() else D31();
  D31():
    deopt 124 [r68, l3, r68];
  L67():
    p21 = prom<V +>{
      sig16 = ld sig0;
      sig17 = force? sig16;
      checkMissing(sig17);
      return sig17;
    };
    r70 = dyn split__(l3, NULL, p21, r68);
    check L68() else D32();
  D32():
    deopt 127 [r68, r70];
  L68():
    st score = r70;
    score2 = ld score;
    check L69() else D33();
  D33():
    deopt 129 [score2];
  L69():
    score3 = force? score2;
    checkMissing(score3);
    r71 = `==`(score3, 1.0);
    popenv;
    return r71;
  }
}
fun inner1330644713(elt) {
  (reg elt:*) -+> V { var elt:*, reg elt1:*, reg elt2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg elt5:V, reg r1:V, reg elt6:*, reg elt7:V, reg min:cls, reg r2:V, reg r3:V |
    mkenv;
    st elt = elt;
    elt1 = ld elt;
    check L1() else D0();
  D0():
    deopt 0 [elt1];
  L1():
    elt2 = force? elt1;
    checkMissing(elt2);
    sym = ldf min;
    base = ldf min in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(elt5, r1):
    r3 = `==`(elt5, r1);
    popenv;
    return r3;
  L2():
    elt6 = ld elt;
    check L4() else D1();
  L3():
    r = dyn base(<sym elt>);
    goto L0(elt2, r);
  D1():
    deopt 3 [elt2, elt6];
  L4():
    elt7 = force? elt6;
    checkMissing(elt7);
    min = ldf min in base;
    r2 = dyn min(elt7);
    check L5() else D2();
  D2():
    deopt 6 [elt2, r2];
  L5():
    goto L0(elt2, r2);
  }
}