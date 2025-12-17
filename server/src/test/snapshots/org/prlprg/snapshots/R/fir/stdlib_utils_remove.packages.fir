fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner907399622;
    st `remove.packages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner907399622(pkgs, lib) {
  (reg pkgs:*, reg lib:*) -+> V { var pkgs:*, var lib:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pkgs1:*, reg pkgs2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg invisible:cls, reg r6:V, reg vapply:cls, reg pkgs3:*, reg pkgs4:V, reg p:p(V +), reg isBasePkg:*, reg isBasePkg1:V, reg p1:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg base3:*, reg base4:V, reg any:cls, reg r14:V, reg c1:L, reg sym3:cls, reg base5:cls, reg guard3:L, reg r15:V, reg r16:V, reg base6:*, reg base7:V, reg all:cls, reg r17:V, reg c2:L, reg stop:*, reg stop1:V, reg stop2:V, reg warning:*, reg warning1:V, reg stop3:cls, reg sprintf:cls, reg ngettext:cls, reg sym4:cls, reg base8:cls, reg guard4:L, reg r18:V, reg r19:V, reg base9:*, reg base10:V, reg sum:cls, reg r20:V, reg p2:p(V +), reg r22:V, reg p3:p(V +), reg paste:cls, reg sQuote:cls, reg pkgs5:*, reg pkgs6:V, reg c3:L, reg pkgs8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg base11:*, reg base12:V, reg __:cls, reg r24:V, reg p4:p(V +), reg r26:V, reg p5:p(V +), reg r28:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg r32:V, reg pkgs9:*, reg pkgs10:V, reg c4:L, reg pkgs12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg base13:*, reg base14:V, reg r33:V, reg __1:cls, reg r34:V, reg r35:cls, reg sym5:cls, reg base15:cls, reg guard5:L, reg r36:V, reg r37:V, reg missing:cls, reg r38:V, reg c5:L, reg c6:V, reg sym6:cls, reg base16:cls, reg guard6:L, reg r39:V, reg c10:L, reg r40:V, reg lib1:*, reg lib2:V, reg c11:V, reg c12:L, reg c13:V, reg c15:L, reg _libPaths:cls, reg r41:V, reg c16:L, reg r43:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r44:V, reg message:cls, reg sprintf1:cls, reg ngettext1:cls, reg sym7:cls, reg base17:cls, reg guard7:L, reg r45:V, reg r46:V, reg pkgs13:*, reg pkgs14:V, reg length1:cls, reg r47:V, reg p8:p(V +), reg r49:V, reg p9:p(V +), reg sQuote1:cls, reg lib3:*, reg lib4:V, reg p10:p(V +), reg r52:V, reg p11:p(V +), reg sQuote2:cls, reg r54:V, reg p12:p(V +), reg r56:V, reg p13:p(V +), reg r58:V, reg find_package:cls, reg pkgs15:*, reg pkgs16:V, reg p14:p(V +), reg lib5:*, reg lib6:V, reg p15:p(V +), reg r62:V, reg sym8:cls, reg base18:cls, reg guard8:L, reg r63:V, reg r64:V, reg paths:*, reg paths1:V, reg length2:cls, reg r65:V, reg c17:L, reg unlink:cls, reg paths2:*, reg paths3:V, reg p16:p(V +), reg r67:V, reg unique:cls, reg dirname:cls, reg paths4:*, reg paths5:V, reg p17:p(V +), reg r69:V, reg p18:p(V +), reg r71:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c18:L, reg x:V, reg updateIndices:cls, reg lib7:*, reg lib8:V, reg p19:p(V +), reg r73:V, reg sym9:cls, reg base19:cls, reg guard9:L, reg r74:V, reg r75:V, reg invisible1:cls, reg r76:V |
    mkenv;
    st pkgs = pkgs;
    st lib = lib;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L27() else L1();
  L23():
    pkgs1 = ld pkgs;
    check L25() else D0();
  L24():
    r = dyn base(<sym pkgs>);
    goto L0(r);
  D0():
    deopt 2 [pkgs1];
  L1():
    vapply = ldf vapply;
    check L33() else D3();
  L25():
    pkgs2 = force? pkgs1;
    checkMissing(pkgs2);
    length = ldf length in base;
    r2 = dyn length(pkgs2);
    check L26() else D1();
  L27():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  D1():
    deopt 5 [r2];
  D3():
    deopt 15 [];
  L2(r5):
    popenv;
    return r5;
  L26():
    goto L0(r2);
  L28():
    invisible = ldf invisible in base;
    r6 = dyn invisible();
    check L30() else D2();
  L29():
    r4 = dyn base1();
    goto L2(r4);
  L33():
    p = prom<V +>{
      pkgs3 = ld pkgs;
      pkgs4 = force? pkgs3;
      checkMissing(pkgs4);
      return pkgs4;
    };
    p1 = prom<V +>{
      isBasePkg = ld isBasePkg;
      isBasePkg1 = force? isBasePkg;
      checkMissing(isBasePkg1);
      return isBasePkg1;
    };
    r11 = dyn vapply(p, p1, FALSE);
    check L34() else D4();
  D2():
    deopt 10 [r6];
  D4():
    deopt 19 [r11];
  L30():
    goto L2(r6);
  L34():
    st base = r11;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L4(r13):
    c1 = `as.logical`(r13);
    if c1 then L39() else L5();
  L35():
    base3 = ld base;
    check L37() else D5();
  L36():
    r12 = dyn base2(<sym base>);
    goto L4(r12);
  D5():
    deopt 23 [base3];
  L5():
    goto L10();
  L10():
    r35 = clos inner1545381569;
    st updateIndices = r35;
    sym5 = ldf missing;
    base15 = ldf missing in base;
    guard5 = `==`.4(sym5, base15);
    if guard5 then L55() else L56();
  L37():
    base4 = force? base3;
    checkMissing(base4);
    any = ldf any in base;
    r14 = dyn any(base4);
    check L38() else D6();
  L39():
    sym3 = ldf all;
    base5 = ldf all in base;
    guard3 = `==`.4(sym3, base5);
    if guard3 then L40() else L41();
  D6():
    deopt 26 [r14];
  L6(r16):
    c2 = `as.logical`(r16);
    if c2 then L44() else L7();
  L11(r37):
    c5 = `as.logical`(r37);
    if c5 then L12(c5) else L57();
  L38():
    goto L4(r14);
  L40():
    base6 = ld base;
    check L42() else D7();
  L41():
    r15 = dyn base5(<sym base>);
    goto L6(r15);
  L55():
    missing = ldf missing in base;
    r38 = dyn missing(<sym lib>);
    goto L11(r38);
  L56():
    r36 = dyn base15(<sym lib>);
    goto L11(r36);
  D7():
    deopt 29 [base6];
  L7():
    warning = ld warning;
    check L47() else D10();
  L8(stop2):
    checkFun.0(stop2);
    stop3 = stop2 as cls;
    p7 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        ngettext = ldf ngettext;
        p2 = prom<V +>{
          sym4 = ldf sum;
          base8 = ldf sum in base;
          guard4 = `==`.4(sym4, base8);
          if guard4 then L1() else L2();
        L0(r19):
          return r19;
        L1():
          base9 = ld base;
          base10 = force? base9;
          checkMissing(base10);
          sum = ldf sum in base;
          r20 = dyn sum(base10);
          goto L0(r20);
        L2():
          r18 = dyn base8(<sym base>);
          goto L0(r18);
        };
        r22 = dyn ngettext(p2, "package %s is a base package, and cannot be removed", "packages %s are base packages, and cannot be removed");
        return r22;
      };
      p6 = prom<V +>{
        paste = ldf paste;
        p5 = prom<V +>{
          sQuote = ldf sQuote;
          p4 = prom<V +>{
            pkgs5 = ld pkgs;
            pkgs6 = force? pkgs5;
            checkMissing(pkgs6);
            c3 = `is.object`(pkgs6);
            if c3 then L1() else L2(pkgs6);
          L0(dx1):
            return dx1;
          L1():
            dr = tryDispatchBuiltin.1("[", pkgs6);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L3() else L2(dr);
          L2(pkgs8):
            base11 = ld base;
            base12 = force? base11;
            __ = ldf `[` in base;
            r24 = dyn __(pkgs8, base12);
            goto L0(r24);
          L3():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          };
          r26 = dyn sQuote(p4);
          return r26;
        };
        r28 = dyn paste[, collapse](p5, ", ");
        return r28;
      };
      r30 = dyn sprintf(p3, p6);
      return r30;
    };
    r32 = dyn stop3[, domain](p7, NA_LGL);
    check L48() else D11();
  L12(c6):
    c15 = `as.logical`(c6);
    if c15 then L62() else L14();
  L42():
    base7 = force? base6;
    checkMissing(base7);
    all = ldf all in base;
    r17 = dyn all(base7);
    check L43() else D8();
  L44():
    stop = ld stop;
    check L45() else D9();
  L57():
    sym6 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base16);
    if guard6 then L58() else L59();
  D8():
    deopt 32 [r17];
  D9():
    deopt 33 [stop];
  D10():
    deopt 35 [warning];
  D11():
    deopt 41 [r32];
  L13(c10, r40):
    c12 = `as.logical`(r40);
    c13 = `||`(c10, c12);
    goto L12(c13);
  L14():
    goto L16();
  L16():
    find_package = ldf `find.package`;
    check L71() else D19();
  L43():
    goto L6(r17);
  L45():
    stop1 = force? stop;
    checkMissing(stop1);
    goto L8(stop1);
  L47():
    warning1 = force? warning;
    checkMissing(warning1);
    goto L8(warning1);
  L48():
    pkgs9 = ld pkgs;
    check L49() else D12();
  L58():
    lib1 = ld lib;
    check L60() else D14();
  L59():
    r39 = dyn base16(<sym lib>);
    goto L13(c5, r39);
  L62():
    _libPaths = ldf `.libPaths`;
    check L63() else D15();
  D12():
    deopt 42 [pkgs9];
  D14():
    deopt 58 [c5, lib1];
  D15():
    deopt 63 [];
  D19():
    deopt 78 [];
  L49():
    pkgs10 = force? pkgs9;
    checkMissing(pkgs10);
    c4 = `is.object`(pkgs10);
    if c4 then L50() else L51(pkgs10);
  L60():
    lib2 = force? lib1;
    checkMissing(lib2);
    c11 = `==`(lib2, NULL);
    goto L13(c5, c11);
  L63():
    r41 = dyn _libPaths();
    check L64() else D16();
  L71():
    p14 = prom<V +>{
      pkgs15 = ld pkgs;
      pkgs16 = force? pkgs15;
      checkMissing(pkgs16);
      return pkgs16;
    };
    p15 = prom<V +>{
      lib5 = ld lib;
      lib6 = force? lib5;
      checkMissing(lib6);
      return lib6;
    };
    r62 = dyn find_package(p14, p15);
    check L72() else D20();
  D16():
    deopt 64 [r41];
  D20():
    deopt 81 [r62];
  L9(dx3):
    st pkgs = dx3;
    goto L10();
  L50():
    dr2 = tryDispatchBuiltin.1("[", pkgs10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(pkgs12):
    base13 = ld base;
    check L53() else D13();
  L64():
    c16 = `is.object`(r41);
    if c16 then L65() else L66(r41);
  L72():
    st paths = r62;
    sym8 = ldf length;
    base18 = ldf length in base;
    guard8 = `==`.4(sym8, base18);
    if guard8 then L73() else L74();
  D13():
    deopt 44 [pkgs12, base13];
  L15(dx6):
    st lib = dx6;
    message = ldf message;
    check L68() else D17();
  L17(r64):
    c17 = `as.logical`(r64);
    if c17 then L77() else L18();
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L53():
    base14 = force? base13;
    checkMissing(base14);
    r33 = `!`(base14);
    __1 = ldf `[` in base;
    r34 = dyn __1(pkgs12, r33);
    goto L9(r34);
  L65():
    dr4 = tryDispatchBuiltin.1("[", r41);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L67() else L66(dr4);
  L66(r43):
    __2 = ldf `[` in base;
    r44 = dyn __2(r43, 1);
    goto L15(r44);
  L73():
    paths = ld paths;
    check L75() else D21();
  L74():
    r63 = dyn base18(<sym paths>);
    goto L17(r63);
  D17():
    deopt 70 [];
  D21():
    deopt 85 [paths];
  L18():
    goto L21();
  L21():
    sym9 = ldf invisible;
    base19 = ldf invisible in base;
    guard9 = `==`.4(sym9, base19);
    if guard9 then L86() else L87();
  L67():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx5);
  L68():
    p13 = prom<V +>{
      sprintf1 = ldf sprintf;
      p9 = prom<V +>{
        ngettext1 = ldf ngettext;
        p8 = prom<V +>{
          sym7 = ldf length;
          base17 = ldf length in base;
          guard7 = `==`.4(sym7, base17);
          if guard7 then L1() else L2();
        L0(r46):
          return r46;
        L1():
          pkgs13 = ld pkgs;
          pkgs14 = force? pkgs13;
          checkMissing(pkgs14);
          length1 = ldf length in base;
          r47 = dyn length1(pkgs14);
          goto L0(r47);
        L2():
          r45 = dyn base17(<sym pkgs>);
          goto L0(r45);
        };
        r49 = dyn ngettext1(p8, "Removing package from %s\n(as %s is unspecified)", "Removing packages from %s\n(as %s is unspecified)");
        return r49;
      };
      p11 = prom<V +>{
        sQuote1 = ldf sQuote;
        p10 = prom<V +>{
          lib3 = ld lib;
          lib4 = force? lib3;
          checkMissing(lib4);
          return lib4;
        };
        r52 = dyn sQuote1(p10);
        return r52;
      };
      p12 = prom<V +>{
        sQuote2 = ldf sQuote;
        r54 = dyn sQuote2("lib");
        return r54;
      };
      r56 = dyn sprintf1(p9, p11, p12);
      return r56;
    };
    r58 = dyn message[, domain](p13, NA_LGL);
    check L69() else D18();
  L75():
    paths1 = force? paths;
    checkMissing(paths1);
    length2 = ldf length in base;
    r65 = dyn length2(paths1);
    check L76() else D22();
  L77():
    unlink = ldf unlink;
    check L78() else D23();
  D18():
    deopt 74 [r58];
  D22():
    deopt 88 [r65];
  D23():
    deopt 90 [];
  L22(r75):
    popenv;
    return r75;
  L69():
    goto L16();
  L76():
    goto L17(r65);
  L78():
    p16 = prom<V +>{
      paths2 = ld paths;
      paths3 = force? paths2;
      checkMissing(paths3);
      return paths3;
    };
    r67 = dyn unlink(p16, TRUE);
    check L79() else D24();
  L86():
    invisible1 = ldf invisible in base;
    r76 = dyn invisible1();
    check L88() else D29();
  L87():
    r74 = dyn base19();
    goto L22(r74);
  D24():
    deopt 93 [r67];
  D29():
    deopt 110 [r76];
  L79():
    unique = ldf unique;
    check L80() else D25();
  L88():
    goto L22(r76);
  D25():
    deopt 95 [];
  L80():
    p18 = prom<V +>{
      dirname = ldf dirname;
      p17 = prom<V +>{
        paths4 = ld paths;
        paths5 = force? paths4;
        checkMissing(paths5);
        return paths5;
      };
      r69 = dyn dirname(p17);
      return r69;
    };
    r71 = dyn unique(p18);
    check L81() else D26();
  D26():
    deopt 97 [r71];
  L81():
    s = toForSeq(r71);
    l = length(s);
    i = 0;
    goto L19(i);
  L19(i1):
    i2 = `+`.1(i1, 1);
    c18 = `<`.1(l, i2);
    if c18 then L82() else L20();
  L20():
    x = `[[`(s, i2, NULL, TRUE);
    st lib = x;
    updateIndices = ldf updateIndices;
    check L83() else D27();
  L82():
    goto L21();
  D27():
    deopt 99 [i2];
  L83():
    p19 = prom<V +>{
      lib7 = ld lib;
      lib8 = force? lib7;
      checkMissing(lib8);
      return lib8;
    };
    r73 = dyn updateIndices(p19);
    check L84() else D28();
  D28():
    deopt 101 [i2, r73];
  L84():
    goto L19(i2);
  }
}
fun inner1545381569(lib) {
  (reg lib:*) -+> V { var lib:*, reg lib1:*, reg lib2:V, reg _Library:*, reg _Library1:V, reg r:V, reg c:L, reg c2:V, reg _Platform:*, reg _Platform1:V, reg c3:L, reg c5:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg c7:L, reg dx1:V, reg r1:V, reg r2:V, reg c8:L, reg c9:V, reg c11:L, reg message:cls, reg r3:V, reg make_packages_html:cls, reg _Library2:*, reg _Library3:V, reg p:p(V +), reg r5:V |
    mkenv;
    st lib = lib;
    lib1 = ld lib;
    check L2() else D0();
  D0():
    deopt 0 [lib1];
  L2():
    lib2 = force? lib1;
    checkMissing(lib2);
    _Library = ld `.Library`;
    check L3() else D1();
  D1():
    deopt 1 [lib2, _Library];
  L3():
    _Library1 = force? _Library;
    checkMissing(_Library1);
    r = `==`(lib2, _Library1);
    c = `as.logical`(r);
    if c then L4() else L0(c);
  L0(c2):
    c11 = `as.logical`(c2);
    if c11 then L11() else L1();
  L4():
    _Platform = ld `.Platform`;
    check L5() else D2();
  D2():
    deopt 4 [c, _Platform];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L5():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c3 = `is.object`(_Platform1);
    if c3 then L7() else L8(c, _Platform1);
  L11():
    message = ldf message;
    check L12() else D3();
  D3():
    deopt 11 [];
  L6(c7, dx1):
    r2 = `==`(dx1, "unix");
    c8 = `as.logical`(r2);
    c9 = `&&`(c7, c8);
    goto L0(c9);
  L7():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(c, dr);
  L8(c5, _Platform3):
    r1 = `$`(_Platform3, <sym OS.type>);
    goto L6(c5, r1);
  L12():
    r3 = dyn message("Updating HTML index of packages in '.Library'");
    check L13() else D4();
  D4():
    deopt 13 [r3];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(c, dx);
  L13():
    make_packages_html = ldf `make.packages.html`;
    check L14() else D5();
  D5():
    deopt 15 [];
  L14():
    p = prom<V +>{
      _Library2 = ld `.Library`;
      _Library3 = force? _Library2;
      checkMissing(_Library3);
      return _Library3;
    };
    r5 = dyn make_packages_html(p);
    check L15() else D6();
  D6():
    deopt 17 [r5];
  L15():
    popenv;
    return r5;
  }
}