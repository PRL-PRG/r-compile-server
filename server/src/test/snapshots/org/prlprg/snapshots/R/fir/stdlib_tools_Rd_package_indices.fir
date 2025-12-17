fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2015501410;
    st Rd_package_indices = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2015501410(pkg, `lib.loc`) {
  (reg pkg:*, reg lib_loc:*) -+> V { var pkg:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg find_package:cls, reg pkg1:*, reg pkg2:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r6:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg r13:cls, reg library:cls, reg pkg3:*, reg pkg4:V, reg p3:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p4:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg info:*, reg info1:V, reg c2:L, reg info3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r19:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r20:V, reg c4:V, reg r21:V, reg c5:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg info4:*, reg info5:V, reg c6:L, reg info7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r24:V, reg c7:L, reg dx9:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r25:V, reg c8:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg info8:*, reg info9:V, reg c9:L, reg info11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r30:V, reg c10:L, reg dx15:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg __2:cls, reg r31:V, reg c11:V, reg r32:V, reg c12:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg result:*, reg result1:V, reg tabular:cls, reg paste0:cls, reg info12:*, reg info13:V, reg c13:L, reg info15:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r35:V, reg c14:L, reg dx21:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg __3:cls, reg r36:V, reg c15:L, reg dr16:V, reg dc8:L, reg dx26:V, reg dx27:V, reg __4:cls, reg r37:V, reg p5:p(V +), reg r39:V, reg p6:p(V +), reg info16:*, reg info17:V, reg c16:L, reg info19:V, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg r41:V, reg c17:L, reg dx31:V, reg dr20:V, reg dc10:L, reg dx32:V, reg dx33:V, reg __5:cls, reg r42:V, reg c18:L, reg dr22:V, reg dc11:L, reg dx36:V, reg dx37:V, reg __6:cls, reg r43:V, reg p7:p(V +), reg r45:V, reg c19:cls, reg r46:V, reg result2:*, reg result3:V |
    mkenv;
    st pkg = pkg;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0() else L1(lib_loc);
  L0():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r = dyn Sys_getenv("R_BUILD_TEMPLIB");
      return r;
    };
    goto L1(p);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L2(r3):
    r8 = `!`(r3);
    c = `as.logical`(r8);
    if c then L21() else L3();
  L16():
    find_package = ldf `find.package`;
    check L18() else D0();
  L17():
    r2 = dyn base(<lang find.package(pkg, lib.loc=lib.loc, quiet=TRUE)>);
    goto L2(r2);
  D0():
    deopt 3 [];
  L3():
    r13 = clos inner3844849271;
    st tabular = r13;
    library = ldf library;
    check L26() else D4();
  L5():
    result2 = ld result;
    check L69() else D14();
  L18():
    p1 = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    p2 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r6 = dyn find_package[, `lib.loc`, quiet](p1, p2, TRUE);
    check L19() else D1();
  L21():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  D1():
    deopt 9 [r6];
  D4():
    deopt 24 [];
  D14():
    deopt 87 [result2];
  L4(r10):
    st result = r10;
    goto L5();
  L19():
    length = ldf length in base;
    r7 = dyn length(r6);
    check L20() else D2();
  L22():
    c1 = ldf c in base;
    r11 = dyn c1("", "Index:  This package was not yet installed at build time.\\cr");
    check L24() else D3();
  L23():
    r9 = dyn base1("", "Index:  This package was not yet installed at build time.\\cr");
    goto L4(r9);
  L26():
    p3 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    p4 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    r16 = dyn library[help, `lib.loc`, `character.only`](p3, p4, TRUE);
    check L27() else D5();
  L69():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D2():
    deopt 11 [r7];
  D3():
    deopt 18 [r11];
  D5():
    deopt 31 [r16];
  L20():
    goto L2(r7);
  L24():
    goto L4(r11);
  L27():
    st info = r16;
    st result = NULL;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L6(r18):
    r21 = `!`(r18);
    c5 = `as.logical`(r21);
    if c5 then L38() else L8();
  L28():
    info = ld info;
    check L30() else D6();
  L29():
    r17 = dyn base2(<lang `[[`(`$`(info, info), 2)>);
    goto L6(r17);
  D6():
    deopt 37 [info];
  L8():
    goto L11();
  L11():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L30():
    info1 = force? info;
    checkMissing(info1);
    c2 = `is.object`(info1);
    if c2 then L32() else L33(info1);
  L38():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L9(r23):
    st result = r23;
    goto L11();
  L12(r29):
    r32 = `!`(r29);
    c12 = `as.logical`(r32);
    if c12 then L61() else L14();
  L31(dx1):
    c3 = `is.object`(dx1);
    if c3 then L35() else L36(dx1);
  L32():
    dr = tryDispatchBuiltin.1("$", info1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(info3):
    r19 = `$`(info3, <sym info>);
    goto L31(r19);
  L39():
    info4 = ld info;
    check L41() else D7();
  L40():
    r22 = dyn base3("", "Index of help topics:", "\\preformatted{", <lang `[[`(`$`(info, info), 2)>, "}");
    goto L9(r22);
  L51():
    info8 = ld info;
    check L53() else D9();
  L52():
    r28 = dyn base4(<lang `[[`(`$`(info, info), 3)>);
    goto L12(r28);
  D7():
    deopt 50 [info4];
  D9():
    deopt 63 [info8];
  L7(dx5):
    c4 = `==`(dx5, NULL);
    goto L6(c4);
  L14():
    goto L5();
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L31(dx);
  L35():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(dr2);
  L36(dx3):
    __ = ldf `[[` in base;
    r20 = dyn __(dx3, 2);
    goto L7(r20);
  L41():
    info5 = force? info4;
    checkMissing(info5);
    c6 = `is.object`(info5);
    if c6 then L43() else L44(info5);
  L53():
    info9 = force? info8;
    checkMissing(info9);
    c9 = `is.object`(info9);
    if c9 then L55() else L56(info9);
  L61():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L15(r34):
    st result = r34;
    goto L5();
  L37():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx4);
  L42(dx7):
    c7 = `is.object`(dx7);
    if c7 then L46() else L47(dx7);
  L43():
    dr4 = tryDispatchBuiltin.1("$", info5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(dr4);
  L44(info7):
    r24 = `$`(info7, <sym info>);
    goto L42(r24);
  L54(dx13):
    c10 = `is.object`(dx13);
    if c10 then L58() else L59(dx13);
  L55():
    dr8 = tryDispatchBuiltin.1("$", info9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L57() else L56(dr8);
  L56(info11):
    r30 = `$`(info11, <sym info>);
    goto L54(r30);
  L62():
    result = ld result;
    check L64() else D10();
  L63():
    r33 = dyn base5(<sym result>, "", "Further information is available in the following vignettes:\\cr\\cr", <lang tabular(paste0("\\code{", `[`(`[[`(`$`(info, info), 3), , 1.0), "}"), `[`(`[[`(`$`(info, info), 3), , 2.0))>);
    goto L15(r33);
  D10():
    deopt 73 [result];
  L10(dx11):
    c8 = ldf c in base;
    r26 = dyn c8("", "Index of help topics:", "\\preformatted{", dx11, "}");
    check L49() else D8();
  L13(dx17):
    c11 = `==`(dx17, NULL);
    goto L12(c11);
  L45():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L42(dx6);
  L46():
    dr6 = tryDispatchBuiltin.1("[[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L48() else L47(dr6);
  L47(dx9):
    __1 = ldf `[[` in base;
    r25 = dyn __1(dx9, 2);
    goto L10(r25);
  L57():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L54(dx12);
  L58():
    dr10 = tryDispatchBuiltin.1("[[", dx13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L60() else L59(dr10);
  L59(dx15):
    __2 = ldf `[[` in base;
    r31 = dyn __2(dx15, 3);
    goto L13(r31);
  L64():
    result1 = force? result;
    checkMissing(result1);
    tabular = ldf tabular;
    check L65() else D11();
  D8():
    deopt 58 [r26];
  D11():
    deopt 78 [];
  L48():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx10);
  L49():
    goto L9(r26);
  L60():
    dx16 = getTryDispatchBuiltinValue(dr10);
    goto L13(dx16);
  L65():
    p6 = prom<V +>{
      paste0 = ldf paste0;
      p5 = prom<V +>{
        info12 = ld info;
        info13 = force? info12;
        checkMissing(info13);
        c13 = `is.object`(info13);
        if c13 then L3() else L4(info13);
      L2(dx19):
        c14 = `is.object`(dx19);
        if c14 then L6() else L7(dx19);
      L3():
        dr12 = tryDispatchBuiltin.1("$", info13);
        dc6 = getTryDispatchBuiltinDispatched(dr12);
        if dc6 then L5() else L4(dr12);
      L4(info15):
        r35 = `$`(info15, <sym info>);
        goto L2(r35);
      L0(dx23):
        c15 = `is.object`(dx23);
        if c15 then L9() else L10();
      L5():
        dx18 = getTryDispatchBuiltinValue(dr12);
        goto L2(dx18);
      L6():
        dr14 = tryDispatchBuiltin.1("[[", dx19);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L8() else L7(dr14);
      L7(dx21):
        __3 = ldf `[[` in base;
        r36 = dyn __3(dx21, 3);
        goto L0(r36);
      L1(dx27):
        return dx27;
      L8():
        dx22 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx22);
      L9():
        dr16 = tryDispatchBuiltin.1("[", dx23);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L11() else L10();
      L10():
        __4 = ldf `[` in base;
        r37 = dyn __4(dx23, <missing>, 1.0);
        goto L1(r37);
      L11():
        dx26 = getTryDispatchBuiltinValue(dr16);
        goto L1(dx26);
      };
      r39 = dyn paste0("\\code{", p5, "}");
      return r39;
    };
    p7 = prom<V +>{
      info16 = ld info;
      info17 = force? info16;
      checkMissing(info17);
      c16 = `is.object`(info17);
      if c16 then L3() else L4(info17);
    L2(dx29):
      c17 = `is.object`(dx29);
      if c17 then L6() else L7(dx29);
    L3():
      dr18 = tryDispatchBuiltin.1("$", info17);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L5() else L4(dr18);
    L4(info19):
      r41 = `$`(info19, <sym info>);
      goto L2(r41);
    L0(dx33):
      c18 = `is.object`(dx33);
      if c18 then L9() else L10();
    L5():
      dx28 = getTryDispatchBuiltinValue(dr18);
      goto L2(dx28);
    L6():
      dr20 = tryDispatchBuiltin.1("[[", dx29);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L8() else L7(dr20);
    L7(dx31):
      __5 = ldf `[[` in base;
      r42 = dyn __5(dx31, 3);
      goto L0(r42);
    L1(dx37):
      return dx37;
    L8():
      dx32 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx32);
    L9():
      dr22 = tryDispatchBuiltin.1("[", dx33);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L11() else L10();
    L10():
      __6 = ldf `[` in base;
      r43 = dyn __6(dx33, <missing>, 2.0);
      goto L1(r43);
    L11():
      dx36 = getTryDispatchBuiltinValue(dr22);
      goto L1(dx36);
    };
    r45 = dyn tabular(p6, p7);
    check L66() else D12();
  D12():
    deopt 81 [r45];
  L66():
    c19 = ldf c in base;
    r46 = dyn c19(result1, "", "Further information is available in the following vignettes:\\cr\\cr", r45);
    check L67() else D13();
  D13():
    deopt 83 [r46];
  L67():
    goto L15(r46);
  }
}
fun inner3844849271(col1, col2) {
  (reg col1:*, reg col2:*) -+> V { var col1:*, var col2:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paste0:cls, reg col3:*, reg col4:V, reg p:p(V +), reg col5:*, reg col6:V, reg p1:p(V +), reg r4:V, reg c:cls, reg r5:V |
    mkenv;
    st col1 = col1;
    st col2 = col2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    paste0 = ldf paste0;
    check L3() else D0();
  L2():
    r = dyn base("\\tabular{ll}{", <lang paste0(col1, " \\tab ", col2, "\\cr")>, "}");
    goto L0(r);
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      col3 = ld col1;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    p1 = prom<V +>{
      col5 = ld col2;
      col6 = force? col5;
      checkMissing(col6);
      return col6;
    };
    r4 = dyn paste0(p, " \\tab ", p1, "\\cr");
    check L4() else D1();
  D1():
    deopt 9 [r4];
  L4():
    c = ldf c in base;
    r5 = dyn c("\\tabular{ll}{", r4, "}");
    check L5() else D2();
  D2():
    deopt 12 [r5];
  L5():
    goto L0(r5);
  }
}