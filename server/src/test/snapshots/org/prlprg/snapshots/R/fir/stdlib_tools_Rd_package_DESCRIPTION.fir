fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2015501410;
    st Rd_package_DESCRIPTION = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2015501410(pkg, `lib.loc`) {
  (reg pkg:*, reg lib_loc:*) -+> V { var pkg:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg find_package:cls, reg pkg1:*, reg pkg2:V, reg p1:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p2:p(V +), reg r6:V, reg length:cls, reg r7:V, reg r8:V, reg c:L, reg r9:cls, reg __:cls, reg r10:V, reg r11:cls, reg pkg3:*, reg pkg4:V, reg p3:p(V +), reg lib_loc3:*, reg lib_loc4:V, reg p4:p(V +), reg r14:V, reg pkg5:*, reg pkg6:V, reg desc:*, reg desc1:V, reg c1:L, reg pkg8:V, reg desc3:V, reg dr:V, reg dc:L, reg dx:V, reg pkg10:V, reg dx1:V, reg __1:cls, reg r15:V, reg r16:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg desc4:*, reg desc5:V, reg c3:L, reg desc7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __2:cls, reg r17:V, reg p5:p(V +), reg pkg11:*, reg pkg12:V, reg p6:p(V +), reg r20:V, reg p7:p(V +), reg r22:V, reg desc8:*, reg desc9:V, reg c4:L, reg desc11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg desc14:V, reg r25:V, reg desc15:*, reg desc16:V, reg names:cls, reg r26:V, reg r27:V, reg __3:cls, reg r28:V, reg tabular:cls, reg paste0:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg desc17:*, reg desc18:V, reg names1:cls, reg r31:V, reg p8:p(V +), reg r33:V, reg p9:p(V +), reg Rd_escape_specials:cls, reg unlist:cls, reg desc19:*, reg desc20:V, reg p10:p(V +), reg r36:V, reg p11:p(V +), reg r38:V, reg p12:p(V +), reg r40:V |
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
    if guard then L9() else L10();
  L2(r3):
    r8 = `!`(r3);
    c = `as.logical`(r8);
    if c then L14() else L3();
  L9():
    find_package = ldf `find.package`;
    check L11() else D0();
  L10():
    r2 = dyn base(<lang find.package(pkg, lib.loc=lib.loc, quiet=TRUE)>);
    goto L2(r2);
  D0():
    deopt 3 [];
  L3():
    r9 = clos inner3844849271;
    st tabular = r9;
    __ = ldf `::`;
    check L16() else D3();
  L11():
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
    check L12() else D1();
  L14():
    popenv;
    return "This package was not yet installed at build time.\\cr";
  D1():
    deopt 9 [r6];
  D3():
    deopt 19 [];
  L12():
    length = ldf length in base;
    r7 = dyn length(r6);
    check L13() else D2();
  L16():
    r10 = dyn __("utils", "packageDescription");
    check L17() else D4();
  D2():
    deopt 11 [r7];
  D4():
    deopt 22 [r10];
  L13():
    goto L2(r7);
  L17():
    checkFun.0(r10);
    r11 = r10 as cls;
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
    r14 = dyn r11[, `lib.loc`](p3, p4);
    check L18() else D5();
  D5():
    deopt 27 [r14];
  L18():
    st desc = r14;
    pkg5 = ld pkg;
    check L19() else D6();
  D6():
    deopt 29 [pkg5];
  L19():
    pkg6 = force? pkg5;
    checkMissing(pkg6);
    desc = ld desc;
    check L20() else D7();
  D7():
    deopt 30 [pkg6, desc];
  L20():
    desc1 = force? desc;
    checkMissing(desc1);
    c1 = `is.object`(desc1);
    if c1 then L21() else L22(pkg6, desc1);
  L4(pkg10, dx1):
    r16 = `!=`(pkg10, dx1);
    c2 = `as.logical`(r16);
    if c2 then L24() else L5();
  L21():
    dr = tryDispatchBuiltin.1("[[", desc1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(pkg6, dr);
  L22(pkg8, desc3):
    __1 = ldf `[[` in base;
    r15 = dyn __1(desc3, "Package");
    goto L4(pkg8, r15);
  L5():
    goto L6();
  L6():
    desc8 = ld desc;
    check L28() else D10();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(pkg6, dx);
  L24():
    stop = ldf stop;
    check L25() else D8();
  D8():
    deopt 37 [];
  D10():
    deopt 42 [desc8];
  L25():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        desc4 = ld desc;
        desc5 = force? desc4;
        checkMissing(desc5);
        c3 = `is.object`(desc5);
        if c3 then L1() else L2(desc5);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", desc5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(desc7):
        __2 = ldf `[` in base;
        r17 = dyn __2(desc7, "Package");
        goto L0(r17);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p6 = prom<V +>{
        pkg11 = ld pkg;
        pkg12 = force? pkg11;
        checkMissing(pkg12);
        return pkg12;
      };
      r20 = dyn gettextf("DESCRIPTION file is for package '%s', not '%s'", p5, p6);
      return r20;
    };
    r22 = dyn stop(p7);
    check L26() else D9();
  L28():
    desc9 = force? desc8;
    checkMissing(desc9);
    c4 = `is.object`(desc9);
    if c4 then L29() else L30(desc9);
  D9():
    deopt 39 [r22];
  L7(dx5):
    st desc = dx5;
    tabular = ldf tabular;
    check L36() else D13();
  L26():
    goto L6();
  L29():
    dr4 = tryDispatchBuiltin.1("[", desc9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(dr4);
  L30(desc11):
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  D13():
    deopt 55 [];
  L8(desc14, r25):
    r27 = `!=`(r25, "Built");
    __3 = ldf `[` in base;
    r28 = dyn __3(desc14, r27);
    goto L7(r28);
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L32():
    desc15 = ld desc;
    check L34() else D11();
  L33():
    r24 = dyn base1(<sym desc>);
    goto L8(desc11, r24);
  L36():
    p9 = prom<V +>{
      paste0 = ldf paste0;
      p8 = prom<V +>{
        sym2 = ldf names;
        base2 = ldf names in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r30):
        return r30;
      L1():
        desc17 = ld desc;
        desc18 = force? desc17;
        checkMissing(desc18);
        names1 = ldf names in base;
        r31 = dyn names1(desc18);
        goto L0(r31);
      L2():
        r29 = dyn base2(<sym desc>);
        goto L0(r29);
      };
      r33 = dyn paste0(p8, ":");
      return r33;
    };
    p12 = prom<V +>{
      Rd_escape_specials = ldf Rd_escape_specials;
      p11 = prom<V +>{
        unlist = ldf unlist;
        p10 = prom<V +>{
          desc19 = ld desc;
          desc20 = force? desc19;
          checkMissing(desc20);
          return desc20;
        };
        r36 = dyn unlist(p10);
        return r36;
      };
      r38 = dyn Rd_escape_specials(p11);
      return r38;
    };
    r40 = dyn tabular(p9, p12);
    check L37() else D14();
  D11():
    deopt 46 [desc11, desc15];
  D14():
    deopt 58 [r40];
  L34():
    desc16 = force? desc15;
    checkMissing(desc16);
    names = ldf names in base;
    r26 = dyn names(desc16);
    check L35() else D12();
  L37():
    popenv;
    return r40;
  D12():
    deopt 49 [desc11, r26];
  L35():
    goto L8(desc11, r26);
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