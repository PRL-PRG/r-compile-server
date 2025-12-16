fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `format.libraryIQR` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg nrow:cls, reg db:*, reg db1:V, reg p:p(V +), reg r2:V, reg r3:V, reg c1:L, reg character:cls, reg r4:V, reg db2:*, reg db3:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r7:V, reg factor:cls, reg libs:*, reg libs1:V, reg p1:p(V +), reg unique:cls, reg libs2:*, reg libs3:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg lapply:cls, reg split:cls, reg nrow1:cls, reg db6:*, reg db7:V, reg p4:p(V +), reg r14:V, reg r15:V, reg p5:p(V +), reg libs4:*, reg libs5:V, reg p6:p(V +), reg r18:V, reg p7:p(V +), reg r20:cls, reg p8:p(V +), reg r22:V, reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg unlist:cls, reg Map:cls, reg r25:cls, reg p9:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg out:*, reg out1:V, reg names:cls, reg r29:V, reg p10:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg out2:*, reg out3:V, reg length:cls, reg r37:V, reg r38:V, reg rep_int:cls, reg r39:V, reg c3:cls, reg r40:V, reg p11:p(V +), reg r42:V, reg p12:p(V +), reg r44:V, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r45:V, reg c5:cls, reg r46:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L4() else D0();
  D0():
    deopt 0 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L6() else L7(x2);
  L5(dx1):
    st db = dx1;
    nrow = ldf nrow;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(x4):
    r = `$`(x4, <sym results>);
    goto L5(r);
  D1():
    deopt 5 [];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    p = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r2 = dyn nrow(p);
    check L10() else D2();
  D2():
    deopt 7 [r2];
  L10():
    r3 = `!`(r2);
    c1 = `as.logical`(r3);
    if c1 then L11() else L0();
  L0():
    db2 = ld db;
    check L16() else D5();
  L11():
    character = ldf character;
    check L12() else D3();
  D3():
    deopt 10 [];
  D5():
    deopt 15 [db2];
  L12():
    r4 = dyn character();
    check L13() else D4();
  L16():
    db3 = force? db2;
    checkMissing(db3);
    c2 = `is.object`(db3);
    if c2 then L17() else L18();
  D4():
    deopt 11 [r4];
  L2(dx3):
    st libs = dx3;
    factor = ldf factor;
    check L20() else D6();
  L13():
    popenv;
    return r4;
  L17():
    dr2 = tryDispatchBuiltin.1("[", db3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18();
  L18():
    __ = ldf `[` in base;
    r7 = dyn __(db3, <missing>, "LibPath");
    goto L2(r7);
  D6():
    deopt 23 [];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L20():
    p1 = prom<V +>{
      libs = ld libs;
      libs1 = force? libs;
      checkMissing(libs1);
      return libs1;
    };
    p3 = prom<V +>{
      unique = ldf unique;
      p2 = prom<V +>{
        libs2 = ld libs;
        libs3 = force? libs2;
        checkMissing(libs3);
        return libs3;
      };
      r10 = dyn unique(p2);
      return r10;
    };
    r12 = dyn factor[, levels](p1, p3);
    check L21() else D7();
  D7():
    deopt 27 [r12];
  L21():
    st libs = r12;
    lapply = ldf lapply;
    check L22() else D8();
  D8():
    deopt 30 [];
  L22():
    p7 = prom<V +>{
      split = ldf split;
      p5 = prom<V +>{
        nrow1 = ldf nrow;
        p4 = prom<V +>{
          db6 = ld db;
          db7 = force? db6;
          checkMissing(db7);
          return db7;
        };
        r14 = dyn nrow1(p4);
        r15 = `:`(1.0, r14);
        return r15;
      };
      p6 = prom<V +>{
        libs4 = ld libs;
        libs5 = force? libs4;
        checkMissing(libs5);
        return libs5;
      };
      r18 = dyn split(p5, p6);
      return r18;
    };
    p8 = prom<V +>{
      r20 = clos `inner-378974564`;
      return r20;
    };
    r22 = dyn lapply(p7, p8);
    check L23() else D9();
  D9():
    deopt 33 [r22];
  L23():
    st out = r22;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L3(r24):
    popenv;
    return r24;
  L24():
    unlist = ldf unlist;
    check L26() else D10();
  L25():
    r23 = dyn base(<lang unlist(Map(function((lib=, sep=), {
            c(gettextf("%sPackages in library %s:\n", sep, sQuote(lib)), formatDL(`[`(`[[`(out, lib), , "Package"), `[`(`[[`(out, lib), , "Title")))
          }, NULL), names(out), c("", rep.int("\n", `-`(length(out), 1)))))>, <lang `$`(x, footer)>);
    goto L3(r23);
  D10():
    deopt 38 [];
  L26():
    p12 = prom<V +>{
      Map = ldf Map;
      p9 = prom<V +>{
        r25 = clos inner1971215718;
        return r25;
      };
      p10 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r28):
        return r28;
      L1():
        out = ld out;
        out1 = force? out;
        checkMissing(out1);
        names = ldf names in base;
        r29 = dyn names(out1);
        goto L0(r29);
      L2():
        r27 = dyn base1(<sym out>);
        goto L0(r27);
      };
      p11 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L3() else L4();
      L0(r32):
        return r32;
      L3():
        sym3 = ldf `rep.int`;
        base3 = ldf `rep.int` in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L5() else L6();
      L4():
        r31 = dyn base2("", <lang rep.int("\n", `-`(length(out), 1))>);
        goto L0(r31);
      L1(r34):
        c3 = ldf c in base;
        r40 = dyn c3("", r34);
        goto L0(r40);
      L5():
        sym4 = ldf length;
        base4 = ldf length in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L7() else L8();
      L6():
        r33 = dyn base3("\n", <lang `-`(length(out), 1)>);
        goto L1(r33);
      L2(r36):
        r38 = `-`(r36, 1);
        rep_int = ldf `rep.int` in base;
        r39 = dyn rep_int("\n", r38);
        goto L1(r39);
      L7():
        out2 = ld out;
        out3 = force? out2;
        checkMissing(out3);
        length = ldf length in base;
        r37 = dyn length(out3);
        goto L2(r37);
      L8():
        r35 = dyn base4(<sym out>);
        goto L2(r35);
      };
      r42 = dyn Map(p9, p10, p11);
      return r42;
    };
    r44 = dyn unlist(p12);
    check L27() else D11();
  D11():
    deopt 40 [r44];
  L27():
    x5 = ld x;
    check L28() else D12();
  D12():
    deopt 41 [x5];
  L28():
    x6 = force? x5;
    checkMissing(x6);
    c4 = `is.object`(x6);
    if c4 then L30() else L31(x6);
  L29(dx5):
    c5 = ldf c in base;
    r46 = dyn c5(r44, dx5);
    check L33() else D13();
  L30():
    dr4 = tryDispatchBuiltin.1("$", x6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(dr4);
  L31(x8):
    r45 = `$`(x8, <sym footer>);
    goto L29(r45);
  D13():
    deopt 45 [r46];
  L32():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L29(dx4);
  L33():
    goto L3(r46);
  }
}
fun `inner-378974564`(ind) {
  (reg ind:*) -+> V { var ind:*, reg db:*, reg db1:V, reg c:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind1:*, reg ind2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c1:cls, reg r2:V, reg __:cls, reg r3:V |
    mkenv;
    st ind = ind;
    db = ld db;
    check L2() else D0();
  D0():
    deopt 0 [db];
  L2():
    db1 = force? db;
    checkMissing(db1);
    c = `is.object`(db1);
    if c then L3() else L4(db1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(db3):
    ind1 = ld ind;
    check L6() else D1();
  D1():
    deopt 2 [db3, ind1];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    ind2 = force? ind1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r1):
    __ = ldf `[` in base;
    r3 = dyn __(db1, ind2, r1, FALSE);
    goto L0(r3);
  L7():
    c1 = ldf c in base;
    r2 = dyn c1("Package", "Title");
    check L9() else D2();
  L8():
    r = dyn base("Package", "Title");
    goto L1(r);
  D2():
    deopt 9 [db3, r2];
  L9():
    goto L1(r2);
  }
}
fun inner1971215718(lib, sep) {
  (reg lib:*, reg sep:*) -+> V { var lib:*, var sep:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg gettextf:cls, reg sep1:*, reg sep2:V, reg p:p(V +), reg sQuote:cls, reg lib1:*, reg lib2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg formatDL:cls, reg out:*, reg out1:V, reg c:L, reg out3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lib3:*, reg lib4:V, reg __:cls, reg r7:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r8:V, reg p3:p(V +), reg out4:*, reg out5:V, reg c2:L, reg out7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg lib5:*, reg lib6:V, reg __2:cls, reg r10:V, reg c3:L, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg c4:cls, reg r14:V |
    mkenv;
    st lib = lib;
    st sep = sep;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    gettextf = ldf gettextf;
    check L3() else D0();
  L2():
    r = dyn base(<lang gettextf("%sPackages in library %s:\n", sep, sQuote(lib))>, <lang formatDL(`[`(`[[`(out, lib), , "Package"), `[`(`[[`(out, lib), , "Title"))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      return sep2;
    };
    p2 = prom<V +>{
      sQuote = ldf sQuote;
      p1 = prom<V +>{
        lib1 = ld lib;
        lib2 = force? lib1;
        checkMissing(lib2);
        return lib2;
      };
      r4 = dyn sQuote(p1);
      return r4;
    };
    r6 = dyn gettextf("%sPackages in library %s:\n", p, p2);
    check L4() else D1();
  D1():
    deopt 7 [r6];
  L4():
    formatDL = ldf formatDL;
    check L5() else D2();
  D2():
    deopt 9 [];
  L5():
    p3 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      c = `is.object`(out1);
      if c then L2() else L3(out1);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6();
    L2():
      dr = tryDispatchBuiltin.1("[[", out1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(out3):
      lib3 = ld lib;
      lib4 = force? lib3;
      __ = ldf `[[` in base;
      r7 = dyn __(out3, lib4);
      goto L0(r7);
    L1(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6();
    L6():
      __1 = ldf `[` in base;
      r8 = dyn __1(dx1, <missing>, "Package");
      goto L1(r8);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx4);
    };
    p4 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      c2 = `is.object`(out5);
      if c2 then L2() else L3(out5);
    L0(dx7):
      c3 = `is.object`(dx7);
      if c3 then L5() else L6();
    L2():
      dr4 = tryDispatchBuiltin.1("[[", out5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(out7):
      lib5 = ld lib;
      lib6 = force? lib5;
      __2 = ldf `[[` in base;
      r10 = dyn __2(out7, lib6);
      goto L0(r10);
    L1(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    L5():
      dr6 = tryDispatchBuiltin.1("[", dx7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6();
    L6():
      __3 = ldf `[` in base;
      r11 = dyn __3(dx7, <missing>, "Title");
      goto L1(r11);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx10);
    };
    r13 = dyn formatDL(p3, p4);
    check L6() else D3();
  D3():
    deopt 12 [r13];
  L6():
    c4 = ldf c in base;
    r14 = dyn c4(r6, r13);
    check L7() else D4();
  D4():
    deopt 14 [r14];
  L7():
    goto L0(r14);
  }
}