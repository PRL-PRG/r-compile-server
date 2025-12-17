fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3502704708;
    st `.find_install_order` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3502704708(pkgs, dependencyList) {
  (reg pkgs:*, reg dependencyList:*) -+> V { var pkgs:*, var dependencyList:*, reg dependencyList1:*, reg dependencyList2:V, reg c:L, reg dependencyList4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pkgs1:*, reg pkgs2:V, reg __:cls, reg r:V, reg lapply:cls, reg DL:*, reg DL1:V, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg r4:V, reg lengths:cls, reg DL2:*, reg DL3:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg lens:*, reg lens1:V, reg r9:V, reg all:cls, reg r10:V, reg c1:L, reg warning:cls, reg r11:V, reg pkgs3:*, reg pkgs4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg DL4:*, reg DL5:V, reg c2:L, reg DL7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg lens2:*, reg lens3:V, reg r16:V, reg __1:cls, reg r17:V, reg names:cls, reg r18:V, reg DL8:*, reg DL9:V, reg c3:L, reg DL11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg lens4:*, reg lens5:V, reg r19:V, reg __2:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg DL12:*, reg DL13:V, reg length:cls, reg r23:V, reg c4:L, reg vapply:cls, reg DL14:*, reg DL15:V, reg p3:p(V +), reg r25:cls, reg p4:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg OK:*, reg OK1:V, reg any:cls, reg r30:V, reg r31:V, reg c5:L, reg warning1:cls, reg gettextf:cls, reg paste:cls, reg sQuote:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg DL16:*, reg DL17:V, reg names1:cls, reg r34:V, reg p5:p(V +), reg r36:V, reg p6:p(V +), reg r38:V, reg p7:p(V +), reg r40:V, reg p8:p(V +), reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg done:*, reg done1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg DL18:*, reg DL19:V, reg names2:cls, reg r47:V, reg c6:cls, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r51:V, reg r52:V, reg done2:*, reg done3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg DL20:*, reg DL21:V, reg c7:L, reg DL23:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg OK2:*, reg OK3:V, reg __3:cls, reg r55:V, reg names3:cls, reg r56:V, reg c8:cls, reg r57:V, reg DL24:*, reg DL25:V, reg c9:L, reg DL27:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg OK4:*, reg OK5:V, reg r58:V, reg __4:cls, reg r59:V, reg done4:*, reg done5:V |
    mkenv;
    st pkgs = pkgs;
    st dependencyList = dependencyList;
    dependencyList1 = ld dependencyList;
    check L19() else D0();
  D0():
    deopt 0 [dependencyList1];
  L19():
    dependencyList2 = force? dependencyList1;
    checkMissing(dependencyList2);
    c = `is.object`(dependencyList2);
    if c then L20() else L21(dependencyList2);
  L0(dx1):
    st DL = dx1;
    lapply = ldf lapply;
    check L24() else D2();
  L20():
    dr = tryDispatchBuiltin.1("[", dependencyList2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(dependencyList4):
    pkgs1 = ld pkgs;
    check L23() else D1();
  D1():
    deopt 2 [dependencyList4, pkgs1];
  D2():
    deopt 7 [];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L23():
    pkgs2 = force? pkgs1;
    __ = ldf `[` in base;
    r = dyn __(dependencyList4, pkgs2);
    goto L0(r);
  L24():
    p = prom<V +>{
      DL = ld DL;
      DL1 = force? DL;
      checkMissing(DL1);
      return DL1;
    };
    p1 = prom<V +>{
      r2 = clos inner2501545716;
      return r2;
    };
    r4 = dyn lapply(p, p1);
    check L25() else D3();
  D3():
    deopt 10 [r4];
  L25():
    st DL = r4;
    lengths = ldf lengths;
    check L26() else D4();
  D4():
    deopt 13 [];
  L26():
    p2 = prom<V +>{
      DL2 = ld DL;
      DL3 = force? DL2;
      checkMissing(DL3);
      return DL3;
    };
    r6 = dyn lengths(p2);
    check L27() else D5();
  D5():
    deopt 15 [r6];
  L27():
    st lens = r6;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L1(r8):
    c1 = `as.logical`(r8);
    if c1 then L32() else L2();
  L28():
    lens = ld lens;
    check L30() else D6();
  L29():
    r7 = dyn base(<lang `>`(lens, 0)>);
    goto L1(r7);
  D6():
    deopt 19 [lens];
  L2():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L30():
    lens1 = force? lens;
    checkMissing(lens1);
    r9 = `>`(lens1, 0);
    all = ldf all in base;
    r10 = dyn all(r9);
    check L31() else D7();
  L32():
    warning = ldf warning;
    check L33() else D8();
  D7():
    deopt 24 [r10];
  D8():
    deopt 26 [];
  L4(r15):
    st done = r15;
    DL8 = ld DL;
    check L46() else D14();
  L31():
    goto L1(r10);
  L33():
    r11 = dyn warning("every package depends on at least one other");
    check L34() else D9();
  L38():
    DL4 = ld DL;
    check L40() else D11();
  L39():
    r14 = dyn base1(<lang `[`(DL, `==`(lens, 0))>);
    goto L4(r14);
  D9():
    deopt 28 [r11];
  D11():
    deopt 36 [DL4];
  D14():
    deopt 46 [DL8];
  L34():
    pkgs3 = ld pkgs;
    check L35() else D10();
  L40():
    DL5 = force? DL4;
    checkMissing(DL5);
    c2 = `is.object`(DL5);
    if c2 then L41() else L42(DL5);
  L46():
    DL9 = force? DL8;
    checkMissing(DL9);
    c3 = `is.object`(DL9);
    if c3 then L47() else L48(DL9);
  D10():
    deopt 29 [pkgs3];
  L5(dx3):
    names = ldf names in base;
    r18 = dyn names(dx3);
    check L45() else D13();
  L6(dx5):
    st DL = dx5;
    goto L18();
  L35():
    pkgs4 = force? pkgs3;
    checkMissing(pkgs4);
    popenv;
    return pkgs4;
  L41():
    dr2 = tryDispatchBuiltin.1("[", DL5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(DL7):
    lens2 = ld lens;
    check L44() else D12();
  L47():
    dr4 = tryDispatchBuiltin.1("[", DL9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(dr4);
  L48(DL11):
    lens4 = ld lens;
    check L50() else D15();
  D12():
    deopt 38 [DL7, lens2];
  D13():
    deopt 44 [r18];
  D15():
    deopt 48 [DL11, lens4];
  L18():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L44():
    lens3 = force? lens2;
    checkMissing(lens3);
    r16 = `==`(lens3, 0);
    __1 = ldf `[` in base;
    r17 = dyn __1(DL7, r16);
    goto L5(r17);
  L45():
    goto L4(r18);
  L49():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L50():
    lens5 = force? lens4;
    checkMissing(lens5);
    r19 = `>`(lens5, 0);
    __2 = ldf `[` in base;
    r20 = dyn __2(DL11, r19);
    goto L6(r20);
  L7(r22):
    c4 = `as.logical`(r22);
    if c4 then L55() else L8();
  L51():
    DL12 = ld DL;
    check L53() else D16();
  L52():
    r21 = dyn base2(<sym DL>);
    goto L7(r21);
  D16():
    deopt 56 [DL12];
  L8():
    done4 = ld done;
    check L93() else D35();
  L53():
    DL13 = force? DL12;
    checkMissing(DL13);
    length = ldf length in base;
    r23 = dyn length(DL13);
    check L54() else D17();
  L55():
    vapply = ldf vapply;
    check L56() else D18();
  D17():
    deopt 59 [r23];
  D18():
    deopt 61 [];
  D35():
    deopt 121 [done4];
  L54():
    goto L7(r23);
  L56():
    p3 = prom<V +>{
      DL14 = ld DL;
      DL15 = force? DL14;
      checkMissing(DL15);
      return DL15;
    };
    p4 = prom<V +>{
      r25 = clos inner2501545716;
      return r25;
    };
    r27 = dyn vapply(p3, p4, NA_LGL);
    check L57() else D19();
  L93():
    done5 = force? done4;
    checkMissing(done5);
    popenv;
    return done5;
  D19():
    deopt 65 [r27];
  L57():
    st OK = r27;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L9(r29):
    r31 = `!`(r29);
    c5 = `as.logical`(r31);
    if c5 then L62() else L10();
  L58():
    OK = ld OK;
    check L60() else D20();
  L59():
    r28 = dyn base3(<sym OK>);
    goto L9(r28);
  D20():
    deopt 69 [OK];
  L10():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  L60():
    OK1 = force? OK;
    checkMissing(OK1);
    any = ldf any in base;
    r30 = dyn any(OK1);
    check L61() else D21();
  L62():
    warning1 = ldf warning;
    check L63() else D22();
  D21():
    deopt 72 [r30];
  D22():
    deopt 75 [];
  L14(r52):
    st done = r52;
    DL24 = ld DL;
    check L87() else D33();
  L61():
    goto L9(r30);
  L63():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        paste = ldf paste;
        p6 = prom<V +>{
          sQuote = ldf sQuote;
          p5 = prom<V +>{
            sym4 = ldf names;
            base4 = ldf names in base;
            guard4 = `==`.4(sym4, base4);
            if guard4 then L1() else L2();
          L0(r33):
            return r33;
          L1():
            DL16 = ld DL;
            DL17 = force? DL16;
            checkMissing(DL17);
            names1 = ldf names in base;
            r34 = dyn names1(DL17);
            goto L0(r34);
          L2():
            r32 = dyn base4(<sym DL>);
            goto L0(r32);
          };
          r36 = dyn sQuote(p5);
          return r36;
        };
        r38 = dyn paste[, collapse](p6, ", ");
        return r38;
      };
      r40 = dyn gettextf("packages %s are mutually dependent", p7);
      return r40;
    };
    r42 = dyn warning1[, domain](p8, NA_LGL);
    check L64() else D23();
  L75():
    done2 = ld done;
    check L77() else D28();
  L76():
    r51 = dyn base7(<sym done>, <lang names(`[`(DL, OK))>);
    goto L14(r51);
  D23():
    deopt 79 [r42];
  D28():
    deopt 97 [done2];
  D33():
    deopt 111 [DL24];
  L64():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L65() else L66();
  L77():
    done3 = force? done2;
    checkMissing(done3);
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L78() else L79();
  L87():
    DL25 = force? DL24;
    checkMissing(DL25);
    c9 = `is.object`(DL25);
    if c9 then L88() else L89(DL25);
  L11(r44):
    popenv;
    return r44;
  L15(r54):
    c8 = ldf c in base;
    r57 = dyn c8(done3, r54);
    check L86() else D32();
  L17(dx9):
    st DL = dx9;
    goto L18();
  L65():
    done = ld done;
    check L67() else D24();
  L66():
    r43 = dyn base5(<sym done>, <lang names(DL)>);
    goto L11(r43);
  L78():
    DL20 = ld DL;
    check L80() else D29();
  L79():
    r53 = dyn base8(<lang `[`(DL, OK)>);
    goto L15(r53);
  L88():
    dr8 = tryDispatchBuiltin.1("[", DL25);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L90() else L89(dr8);
  L89(DL27):
    OK4 = ld OK;
    check L91() else D34();
  D24():
    deopt 82 [done];
  D29():
    deopt 101 [DL20];
  D32():
    deopt 109 [r57];
  D34():
    deopt 113 [DL27, OK4];
  L67():
    done1 = force? done;
    checkMissing(done1);
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L80():
    DL21 = force? DL20;
    checkMissing(DL21);
    c7 = `is.object`(DL21);
    if c7 then L81() else L82(DL21);
  L86():
    goto L14(r57);
  L90():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L17(dx8);
  L91():
    OK5 = force? OK4;
    checkMissing(OK5);
    r58 = `!`(OK5);
    __4 = ldf `[` in base;
    r59 = dyn __4(DL27, r58);
    goto L17(r59);
  L12(r46):
    c6 = ldf c in base;
    r48 = dyn c6(done1, r46);
    check L72() else D27();
  L16(dx7):
    names3 = ldf names in base;
    r56 = dyn names3(dx7);
    check L85() else D31();
  L68():
    DL18 = ld DL;
    check L70() else D25();
  L69():
    r45 = dyn base6(<sym DL>);
    goto L12(r45);
  L81():
    dr6 = tryDispatchBuiltin.1("[", DL21);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L83() else L82(dr6);
  L82(DL23):
    OK2 = ld OK;
    check L84() else D30();
  D25():
    deopt 86 [DL18];
  D27():
    deopt 91 [r48];
  D30():
    deopt 103 [DL23, OK2];
  D31():
    deopt 107 [r56];
  L70():
    DL19 = force? DL18;
    checkMissing(DL19);
    names2 = ldf names in base;
    r47 = dyn names2(DL19);
    check L71() else D26();
  L72():
    goto L11(r48);
  L83():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(dx6);
  L84():
    OK3 = force? OK2;
    __3 = ldf `[` in base;
    r55 = dyn __3(DL23, OK3);
    goto L16(r55);
  L85():
    goto L15(r56);
  D26():
    deopt 89 [r47];
  L71():
    goto L12(r47);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg x5:*, reg x6:V, reg p:p(V +), reg pkgs:*, reg pkgs1:V, reg p1:p(V +), reg r2:V, reg __:cls, reg r3:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    _in_ = ldf `%in%`;
    check L5() else D1();
  D1():
    deopt 3 [x4];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p1 = prom<V +>{
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      return pkgs1;
    };
    r2 = dyn _in_(p, p1);
    check L6() else D2();
  D2():
    deopt 6 [x4, r2];
  L6():
    __ = ldf `[` in base;
    r3 = dyn __(x4, r2);
    goto L0(r3);
  }
}