fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.make_S3_methods_table_for_base` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg baseenv:cls, reg r2:V, reg ls:cls, reg env:*, reg env1:V, reg p:p(V +), reg r4:V, reg vapply:cls, reg objects:*, reg objects1:V, reg p1:p(V +), reg r6:cls, reg p2:p(V +), reg r8:V, reg sort:cls, reg unique:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg objects2:*, reg objects3:V, reg c:L, reg objects5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r11:V, reg _get_S3_group_generics:cls, reg r12:V, reg _get_internal_S3_generics:cls, reg r13:V, reg c1:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg grepl:cls, reg generics:*, reg generics1:V, reg p5:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg generics2:*, reg generics3:V, reg c2:L, reg generics5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg r23:V, reg __1:cls, reg r24:V, reg generics6:*, reg generics7:V, reg c3:L, reg generics9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind4:*, reg ind5:V, reg __2:cls, reg r25:V, reg c4:cls, reg r26:V, reg grep:cls, reg objects6:*, reg objects7:V, reg p6:p(V +), reg r28:V, reg setdiff:cls, reg objects8:*, reg objects9:V, reg p7:p(V +), reg nonS3methods:cls, reg r30:V, reg p8:p(V +), reg r32:V, reg lapply:cls, reg generics10:*, reg generics11:V, reg p9:p(V +), reg r34:cls, reg p10:p(V +), reg r36:V, reg generics12:*, reg generics13:V, reg l:*, reg names__:cls, reg r37:V, reg methods:*, reg methods1:V, reg c5:L, reg methods3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r38:V, reg c6:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg startsWith:cls, reg methods4:*, reg methods5:V, reg c7:L, reg methods7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r39:V, reg p11:p(V +), reg r41:V, reg r42:V, reg __3:cls, reg r43:V, reg l1:*, reg c8:L, reg dx15:V, reg l3:*, reg dr12:V, reg dc6:L, reg dx17:V, reg dx19:V, reg r44:V, reg Filter:cls, reg length:*, reg length1:V, reg p12:p(V +), reg methods8:*, reg methods9:V, reg p13:p(V +), reg r47:V, reg Map:cls, reg substring:*, reg substring1:V, reg p14:p(V +), reg methods10:*, reg methods11:V, reg p15:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r50:V, reg r51:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r52:V, reg r53:V, reg methods12:*, reg methods13:V, reg names:cls, reg r54:V, reg nchar:cls, reg r55:V, reg r56:V, reg p16:p(V +), reg r58:V, reg cbind:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r59:V, reg r60:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg r62:V, reg classes:*, reg classes1:V, reg names1:cls, reg r63:V, reg lengths:cls, reg classes2:*, reg classes3:V, reg p17:p(V +), reg r65:V, reg rep_int:cls, reg r66:V, reg p18:p(V +), reg unlist:cls, reg classes4:*, reg classes5:V, reg p19:p(V +), reg r69:V, reg p20:p(V +), reg r71:V |
    mkenv;
    sym = ldf baseenv;
    base = ldf baseenv in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st env = r1;
    ls = ldf ls;
    check L8() else D1();
  L5():
    baseenv = ldf baseenv in base;
    r2 = dyn baseenv();
    check L7() else D0();
  L6():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 6 [];
  L7():
    goto L0(r2);
  L8():
    p = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r4 = dyn ls[, `all.names`](p, TRUE);
    check L9() else D2();
  D2():
    deopt 10 [r4];
  L9():
    st objects = r4;
    vapply = ldf vapply;
    check L10() else D3();
  D3():
    deopt 13 [];
  L10():
    p1 = prom<V +>{
      objects = ld objects;
      objects1 = force? objects;
      checkMissing(objects1);
      return objects1;
    };
    p2 = prom<V +>{
      r6 = clos inner1942959787;
      return r6;
    };
    r8 = dyn vapply(p1, p2, FALSE);
    check L11() else D4();
  D4():
    deopt 17 [r8];
  L11():
    st ind = r8;
    sort = ldf sort;
    check L12() else D5();
  D5():
    deopt 20 [];
  L12():
    p4 = prom<V +>{
      unique = ldf unique;
      p3 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L2() else L3();
      L0(r10):
        return r10;
      L2():
        objects2 = ld objects;
        objects3 = force? objects2;
        checkMissing(objects3);
        c = `is.object`(objects3);
        if c then L4() else L5(objects3);
      L3():
        r9 = dyn base1(<lang `[`(objects, ind)>, <lang .get_S3_group_generics()>, <lang .get_internal_S3_generics()>);
        goto L0(r9);
      L1(dx1):
        _get_S3_group_generics = ldf `.get_S3_group_generics`;
        r12 = dyn _get_S3_group_generics();
        _get_internal_S3_generics = ldf `.get_internal_S3_generics`;
        r13 = dyn _get_internal_S3_generics();
        c1 = ldf c in base;
        r14 = dyn c1(dx1, r12, r13);
        goto L0(r14);
      L4():
        dr = tryDispatchBuiltin.1("[", objects3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(objects5):
        ind = ld ind;
        ind1 = force? ind;
        __ = ldf `[` in base;
        r11 = dyn __(objects5, ind1);
        goto L1(r11);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      r16 = dyn unique(p3);
      return r16;
    };
    r18 = dyn sort(p4);
    check L13() else D6();
  D6():
    deopt 22 [r18];
  L13():
    st generics = r18;
    grepl = ldf grepl;
    check L14() else D7();
  D7():
    deopt 25 [];
  L14():
    p5 = prom<V +>{
      generics = ld generics;
      generics1 = force? generics;
      checkMissing(generics1);
      return generics1;
    };
    r20 = dyn grepl("^[[:alpha:]]", p5);
    check L15() else D8();
  D8():
    deopt 28 [r20];
  L15():
    st ind = r20;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L1(r22):
    st generics = r22;
    grep = ldf grep;
    check L29() else D14();
  L16():
    generics2 = ld generics;
    check L18() else D9();
  L17():
    r21 = dyn base2(<lang `[`(generics, `!`(ind))>, <lang `[`(generics, ind)>);
    goto L1(r21);
  D9():
    deopt 32 [generics2];
  D14():
    deopt 47 [];
  L18():
    generics3 = force? generics2;
    checkMissing(generics3);
    c2 = `is.object`(generics3);
    if c2 then L19() else L20(generics3);
  L29():
    p6 = prom<V +>{
      objects6 = ld objects;
      objects7 = force? objects6;
      checkMissing(objects7);
      return objects7;
    };
    r28 = dyn grep[, , value]("[^.]+[.][[:alpha:]]", p6, TRUE);
    check L30() else D15();
  D15():
    deopt 52 [r28];
  L2(dx3):
    generics6 = ld generics;
    check L23() else D11();
  L19():
    dr2 = tryDispatchBuiltin.1("[", generics3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(dr2);
  L20(generics5):
    ind2 = ld ind;
    check L22() else D10();
  L30():
    st objects = r28;
    setdiff = ldf setdiff;
    check L31() else D16();
  D10():
    deopt 34 [generics5, ind2];
  D11():
    deopt 38 [generics6];
  D16():
    deopt 55 [];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L22():
    ind3 = force? ind2;
    checkMissing(ind3);
    r23 = `!`(ind3);
    __1 = ldf `[` in base;
    r24 = dyn __1(generics5, r23);
    goto L2(r24);
  L23():
    generics7 = force? generics6;
    checkMissing(generics7);
    c3 = `is.object`(generics7);
    if c3 then L24() else L25(generics7);
  L31():
    p7 = prom<V +>{
      objects8 = ld objects;
      objects9 = force? objects8;
      checkMissing(objects9);
      return objects9;
    };
    p8 = prom<V +>{
      nonS3methods = ldf nonS3methods;
      r30 = dyn nonS3methods("base");
      return r30;
    };
    r32 = dyn setdiff(p7, p8);
    check L32() else D17();
  D17():
    deopt 58 [r32];
  L3(dx5):
    c4 = ldf c in base;
    r26 = dyn c4(dx3, dx5);
    check L28() else D13();
  L24():
    dr4 = tryDispatchBuiltin.1("[", generics7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(dr4);
  L25(generics9):
    ind4 = ld ind;
    check L27() else D12();
  L32():
    st objects = r32;
    lapply = ldf lapply;
    check L33() else D18();
  D12():
    deopt 40 [generics9, ind4];
  D13():
    deopt 44 [r26];
  D18():
    deopt 61 [];
  L26():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx4);
  L27():
    ind5 = force? ind4;
    __2 = ldf `[` in base;
    r25 = dyn __2(generics9, ind5);
    goto L3(r25);
  L28():
    goto L1(r26);
  L33():
    p9 = prom<V +>{
      generics10 = ld generics;
      generics11 = force? generics10;
      checkMissing(generics11);
      return generics11;
    };
    p10 = prom<V +>{
      r34 = clos inner3708401697;
      return r34;
    };
    r36 = dyn lapply(p9, p10);
    check L34() else D19();
  D19():
    deopt 64 [r36];
  L34():
    st methods = r36;
    generics12 = ld generics;
    check L35() else D20();
  D20():
    deopt 66 [generics12];
  L35():
    generics13 = force? generics12;
    checkMissing(generics13);
    l = ld methods;
    names__ = ldf `names<-`;
    check L36() else D21();
  D21():
    deopt 69 [generics13, l, generics13];
  L36():
    r37 = dyn names__(l, NULL, generics13);
    check L37() else D22();
  D22():
    deopt 71 [generics13, r37];
  L37():
    st methods = r37;
    methods = ld methods;
    check L38() else D23();
  D23():
    deopt 73 [methods];
  L38():
    methods1 = force? methods;
    checkMissing(methods1);
    c5 = `is.object`(methods1);
    if c5 then L40() else L41(methods1);
  L39(dx7):
    c6 = `is.object`(dx7);
    if c6 then L43() else L44(dx7);
  L40():
    dr6 = tryDispatchBuiltin.1("$", methods1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L42() else L41(dr6);
  L41(methods3):
    r38 = `$`(methods3, <sym all>);
    goto L39(r38);
  L4(dx11):
    l1 = ld methods;
    c8 = `is.object`(l1);
    if c8 then L49() else L50(dx11, l1);
  L42():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L39(dx6);
  L43():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L45() else L44(dr8);
  L44(dx9):
    startsWith = ldf startsWith;
    check L46() else D24();
  D24():
    deopt 77 [dx9];
  L45():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx10);
  L46():
    p11 = prom<V +>{
      methods4 = ld methods;
      methods5 = force? methods4;
      checkMissing(methods5);
      c7 = `is.object`(methods5);
      if c7 then L1() else L2(methods5);
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("$", methods5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(methods7):
      r39 = `$`(methods7, <sym all>);
      goto L0(r39);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    r41 = dyn startsWith(p11, "all.equal");
    check L47() else D25();
  L48(dx19):
    st methods = dx19;
    Filter = ldf Filter;
    check L52() else D26();
  L49():
    dr12 = tryDispatchBuiltin.0("$<-", l1, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L51() else L50(dx11, dr12);
  L50(dx15, l3):
    r44 = `$<-`(l3, <sym all>, dx11);
    goto L48(r44);
  D25():
    deopt 80 [dx9, r41];
  D26():
    deopt 87 [];
  L47():
    r42 = `!`(r41);
    __3 = ldf `[` in base;
    r43 = dyn __3(dx9, r42);
    goto L4(r43);
  L51():
    dx17 = getTryDispatchBuiltinValue(dr12);
    goto L48(dx17);
  L52():
    p12 = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p13 = prom<V +>{
      methods8 = ld methods;
      methods9 = force? methods8;
      checkMissing(methods9);
      return methods9;
    };
    r47 = dyn Filter(p12, p13);
    check L53() else D27();
  D27():
    deopt 90 [r47];
  L53():
    st methods = r47;
    Map = ldf Map;
    check L54() else D28();
  D28():
    deopt 93 [];
  L54():
    p14 = prom<V +>{
      substring = ld substring;
      substring1 = force? substring;
      checkMissing(substring1);
      return substring1;
    };
    p15 = prom<V +>{
      methods10 = ld methods;
      methods11 = force? methods10;
      checkMissing(methods11);
      return methods11;
    };
    p16 = prom<V +>{
      sym3 = ldf nchar;
      base3 = ldf nchar in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r51):
      r56 = `+`(r51, 2);
      return r56;
    L2():
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r50 = dyn base3(<lang names(methods)>);
      goto L0(r50);
    L1(r53):
      nchar = ldf nchar in base;
      r55 = dyn nchar(r53, "chars", FALSE, NA_LGL);
      goto L0(r55);
    L4():
      methods12 = ld methods;
      methods13 = force? methods12;
      checkMissing(methods13);
      names = ldf names in base;
      r54 = dyn names(methods13);
      goto L1(r54);
    L5():
      r52 = dyn base4(<sym methods>);
      goto L1(r52);
    };
    r58 = dyn Map(p14, p15, p16);
    check L55() else D29();
  D29():
    deopt 97 [r58];
  L55():
    st classes = r58;
    cbind = ldf cbind;
    check L56() else D30();
  D30():
    deopt 100 [];
  L56():
    p18 = prom<V +>{
      sym5 = ldf `rep.int`;
      base5 = ldf `rep.int` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r60):
      return r60;
    L2():
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r59 = dyn base5(<lang names(classes)>, <lang lengths(classes)>);
      goto L0(r59);
    L1(r62):
      lengths = ldf lengths;
      p17 = prom<V +>{
        classes2 = ld classes;
        classes3 = force? classes2;
        checkMissing(classes3);
        return classes3;
      };
      r65 = dyn lengths(p17);
      rep_int = ldf `rep.int` in base;
      r66 = dyn rep_int(r62, r65);
      goto L0(r66);
    L4():
      classes = ld classes;
      classes1 = force? classes;
      checkMissing(classes1);
      names1 = ldf names in base;
      r63 = dyn names1(classes1);
      goto L1(r63);
    L5():
      r61 = dyn base6(<sym classes>);
      goto L1(r61);
    };
    p20 = prom<V +>{
      unlist = ldf unlist;
      p19 = prom<V +>{
        classes4 = ld classes;
        classes5 = force? classes4;
        checkMissing(classes5);
        return classes5;
      };
      r69 = dyn unlist[, `use.names`](p19, FALSE);
      return r69;
    };
    r71 = dyn cbind[generic, class](p18, p20);
    check L57() else D31();
  D31():
    deopt 105 [r71];
  L57():
    popenv;
    return r71;
  }
}
fun inner1942959787(o) {
  (reg o:*) -+> V { var o:*, reg _is_S3_generic:cls, reg o1:*, reg o2:V, reg p:p(V +), reg env:*, reg env1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st o = o;
    _is_S3_generic = ldf `.is_S3_generic`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      o1 = ld o;
      o2 = force? o1;
      checkMissing(o2);
      return o2;
    };
    p1 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r2 = dyn _is_S3_generic(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg objects:*, reg objects1:V, reg c:L, reg objects3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg startsWith:cls, reg objects4:*, reg objects5:V, reg p:p(V +), reg paste0:cls, reg e1:*, reg e2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg __:cls, reg r5:V |
    mkenv;
    st e = e;
    objects = ld objects;
    check L1() else D0();
  D0():
    deopt 0 [objects];
  L1():
    objects1 = force? objects;
    checkMissing(objects1);
    c = `is.object`(objects1);
    if c then L2() else L3(objects1);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", objects1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(objects3):
    startsWith = ldf startsWith;
    check L5() else D1();
  D1():
    deopt 3 [objects3];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      objects4 = ld objects;
      objects5 = force? objects4;
      checkMissing(objects5);
      return objects5;
    };
    p2 = prom<V +>{
      paste0 = ldf paste0;
      p1 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r2 = dyn paste0(p1, ".");
      return r2;
    };
    r4 = dyn startsWith(p, p2);
    check L6() else D2();
  D2():
    deopt 6 [objects3, r4];
  L6():
    __ = ldf `[` in base;
    r5 = dyn __(objects3, r4);
    goto L0(r5);
  }
}