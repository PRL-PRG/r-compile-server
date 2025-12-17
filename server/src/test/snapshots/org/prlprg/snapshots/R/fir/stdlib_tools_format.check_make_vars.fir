fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_make_vars` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg character:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg length:cls, reg r8:V, reg c1:L, reg _fmt:cls, reg bad:*, reg bad1:V, reg p:p(V +), reg r10:V, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r14:V, reg length1:cls, reg r15:V, reg c3:L, reg _fmt2:cls, reg bad2:*, reg bad3:V, reg p1:p(V +), reg r17:V, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg length2:cls, reg r22:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg gettextf:cls, reg r25:V, reg sprintf:cls, reg bad4:*, reg bad5:V, reg p2:p(V +), reg r27:V, reg c6:cls, reg r28:V, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg x13:*, reg x14:V, reg c7:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r32:V, reg length3:cls, reg r33:V, reg r34:V, reg c8:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg sprintf1:cls, reg sQuote:cls, reg r37:V, reg p3:p(V +), reg sQuote1:cls, reg r39:V, reg p4:p(V +), reg r41:V, reg strwrap:cls, reg sprintf2:cls, reg sQuote2:cls, reg r42:V, reg p5:p(V +), reg sQuote3:cls, reg r44:V, reg p6:p(V +), reg sQuote4:cls, reg r46:V, reg p7:p(V +), reg sQuote5:cls, reg r48:V, reg p8:p(V +), reg sQuote6:cls, reg r50:V, reg p9:p(V +), reg r52:V, reg p10:p(V +), reg r54:V, reg c9:cls, reg r55:V, reg r56:V, reg c10:cls, reg r57:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner2501545716;
    st `.fmt` = r;
    r1 = clos inner2501545716;
    st `.fmt2` = r1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r3):
    popenv;
    return r3;
  L15():
    character = ldf character;
    check L17() else D0();
  L16():
    r2 = dyn base(<lang character()>, <lang if(length(`<-`(bad, `$`(x, pflags))), .fmt(bad))>, <lang if(length(`<-`(bad, `$`(x, p2flags))), .fmt2(bad))>, <lang if(length(`<-`(bad, `$`(x, uflags))), {
        c(gettextf("Variables overriding user/site settings:"), sprintf("  %s", bad))
      })>, <lang if(`>`(length(`$`(x, paths)), 1), {
        c(sprintf("Package has both %s and %s.", sQuote("src/Makevars.in"), sQuote("src/Makevars")), strwrap(sprintf("Installation with --no-configure' is unlikely to work.  If you intended %s to be used on Windows, rename it to %s otherwise remove it.  If %s created %s, you need a %s script.", sQuote("src/Makevars"), sQuote("src/Makevars.win"), sQuote("configure"), sQuote("src/Makevars"), sQuote("cleanup"))))
      })>);
    goto L0(r2);
  D0():
    deopt 9 [];
  L17():
    r4 = dyn character();
    check L18() else D1();
  D1():
    deopt 10 [r4];
  L18():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L1(r6):
    c1 = `as.logical`(r6);
    if c1 then L27() else L2();
  L19():
    x1 = ld x;
    check L21() else D2();
  L20():
    r5 = dyn base1(<lang `<-`(bad, `$`(x, pflags))>);
    goto L1(r5);
  D2():
    deopt 13 [x1];
  L2():
    goto L3(NULL);
  L3(r11):
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L21():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L23() else L24(x2);
  L27():
    _fmt = ldf `.fmt`;
    check L28() else D4();
  D4():
    deopt 20 [];
  L4(r13):
    c3 = `as.logical`(r13);
    if c3 then L39() else L5();
  L22(dx1):
    st bad = dx1;
    length = ldf length in base;
    r8 = dyn length(dx1);
    check L26() else D3();
  L23():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(x4):
    r7 = `$`(x4, <sym pflags>);
    goto L22(r7);
  L28():
    p = prom<V +>{
      bad = ld bad;
      bad1 = force? bad;
      checkMissing(bad1);
      return bad1;
    };
    r10 = dyn _fmt(p);
    check L29() else D5();
  L31():
    x5 = ld x;
    check L33() else D6();
  L32():
    r12 = dyn base2(<lang `<-`(bad, `$`(x, p2flags))>);
    goto L4(r12);
  D3():
    deopt 18 [r8];
  D5():
    deopt 22 [r10];
  D6():
    deopt 27 [x5];
  L5():
    goto L6(NULL);
  L6(r18):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L22(dx);
  L26():
    goto L1(r8);
  L29():
    goto L3(r10);
  L33():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L35() else L36(x6);
  L39():
    _fmt2 = ldf `.fmt2`;
    check L40() else D8();
  D8():
    deopt 34 [];
  L7(r20):
    c5 = `as.logical`(r20);
    if c5 then L51() else L8();
  L34(dx3):
    st bad = dx3;
    length1 = ldf length in base;
    r15 = dyn length1(dx3);
    check L38() else D7();
  L35():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(dr2);
  L36(x8):
    r14 = `$`(x8, <sym p2flags>);
    goto L34(r14);
  L40():
    p1 = prom<V +>{
      bad2 = ld bad;
      bad3 = force? bad2;
      checkMissing(bad3);
      return bad3;
    };
    r17 = dyn _fmt2(p1);
    check L41() else D9();
  L43():
    x9 = ld x;
    check L45() else D10();
  L44():
    r19 = dyn base3(<lang `<-`(bad, `$`(x, uflags))>);
    goto L7(r19);
  D7():
    deopt 32 [r15];
  D9():
    deopt 36 [r17];
  D10():
    deopt 41 [x9];
  L8():
    goto L10(NULL);
  L10(r29):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L60() else L61();
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L34(dx2);
  L38():
    goto L4(r15);
  L41():
    goto L6(r17);
  L45():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L47() else L48(x10);
  L51():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L9(r24):
    goto L10(r24);
  L11(r31):
    r34 = `>`(r31, 1);
    c8 = `as.logical`(r34);
    if c8 then L68() else L12();
  L46(dx5):
    st bad = dx5;
    length2 = ldf length in base;
    r22 = dyn length2(dx5);
    check L50() else D11();
  L47():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L49() else L48(dr4);
  L48(x12):
    r21 = `$`(x12, <sym uflags>);
    goto L46(r21);
  L52():
    gettextf = ldf gettextf;
    check L54() else D12();
  L53():
    r23 = dyn base4(<lang gettextf("Variables overriding user/site settings:")>, <lang sprintf("  %s", bad)>);
    goto L9(r23);
  L60():
    x13 = ld x;
    check L62() else D17();
  L61():
    r30 = dyn base5(<lang `$`(x, paths)>);
    goto L11(r30);
  D11():
    deopt 46 [r22];
  D12():
    deopt 50 [];
  D17():
    deopt 64 [x13];
  L12():
    goto L14(NULL);
  L14(r56):
    c10 = ldf c in base;
    r57 = dyn c10(r4, r11, r18, r29, r56);
    check L77() else D24();
  L49():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L46(dx4);
  L50():
    goto L7(r22);
  L54():
    r25 = dyn gettextf("Variables overriding user/site settings:");
    check L55() else D13();
  L62():
    x14 = force? x13;
    checkMissing(x14);
    c7 = `is.object`(x14);
    if c7 then L64() else L65(x14);
  L68():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L69() else L70();
  D13():
    deopt 52 [r25];
  D24():
    deopt 88 [r57];
  L13(r36):
    goto L14(r36);
  L55():
    sprintf = ldf sprintf;
    check L56() else D14();
  L63(dx7):
    length3 = ldf length in base;
    r33 = dyn length3(dx7);
    check L67() else D18();
  L64():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(dr6);
  L65(x16):
    r32 = `$`(x16, <sym paths>);
    goto L63(r32);
  L69():
    sprintf1 = ldf sprintf;
    check L71() else D19();
  L70():
    r35 = dyn base6(<lang sprintf("Package has both %s and %s.", sQuote("src/Makevars.in"), sQuote("src/Makevars"))>, <lang strwrap(sprintf("Installation with --no-configure' is unlikely to work.  If you intended %s to be used on Windows, rename it to %s otherwise remove it.  If %s created %s, you need a %s script.", sQuote("src/Makevars"), sQuote("src/Makevars.win"), sQuote("configure"), sQuote("src/Makevars"), sQuote("cleanup")))>);
    goto L13(r35);
  L77():
    goto L0(r57);
  D14():
    deopt 54 [];
  D18():
    deopt 68 [r33];
  D19():
    deopt 74 [];
  L56():
    p2 = prom<V +>{
      bad4 = ld bad;
      bad5 = force? bad4;
      checkMissing(bad5);
      return bad5;
    };
    r27 = dyn sprintf("  %s", p2);
    check L57() else D15();
  L66():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L63(dx6);
  L67():
    goto L11(r33);
  L71():
    p3 = prom<V +>{
      sQuote = ldf sQuote;
      r37 = dyn sQuote("src/Makevars.in");
      return r37;
    };
    p4 = prom<V +>{
      sQuote1 = ldf sQuote;
      r39 = dyn sQuote1("src/Makevars");
      return r39;
    };
    r41 = dyn sprintf1("Package has both %s and %s.", p3, p4);
    check L72() else D20();
  D15():
    deopt 57 [r27];
  D20():
    deopt 78 [r41];
  L57():
    c6 = ldf c in base;
    r28 = dyn c6(r25, r27);
    check L58() else D16();
  L72():
    strwrap = ldf strwrap;
    check L73() else D21();
  D16():
    deopt 59 [r28];
  D21():
    deopt 80 [];
  L58():
    goto L9(r28);
  L73():
    p10 = prom<V +>{
      sprintf2 = ldf sprintf;
      p5 = prom<V +>{
        sQuote2 = ldf sQuote;
        r42 = dyn sQuote2("src/Makevars");
        return r42;
      };
      p6 = prom<V +>{
        sQuote3 = ldf sQuote;
        r44 = dyn sQuote3("src/Makevars.win");
        return r44;
      };
      p7 = prom<V +>{
        sQuote4 = ldf sQuote;
        r46 = dyn sQuote4("configure");
        return r46;
      };
      p8 = prom<V +>{
        sQuote5 = ldf sQuote;
        r48 = dyn sQuote5("src/Makevars");
        return r48;
      };
      p9 = prom<V +>{
        sQuote6 = ldf sQuote;
        r50 = dyn sQuote6("cleanup");
        return r50;
      };
      r52 = dyn sprintf2("Installation with --no-configure' is unlikely to work.  If you intended %s to be used on Windows, rename it to %s otherwise remove it.  If %s created %s, you need a %s script.", p5, p6, p7, p8, p9);
      return r52;
    };
    r54 = dyn strwrap(p10);
    check L74() else D22();
  D22():
    deopt 82 [r54];
  L74():
    c9 = ldf c in base;
    r55 = dyn c9(r41, r54);
    check L75() else D23();
  D23():
    deopt 84 [r55];
  L75():
    goto L13(r55);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg Map:cls, reg c:*, reg c1:V, reg p:p(V +), reg gettextf:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg names:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg sprintf:cls, reg lapply:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg paste:*, reg paste1:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg unlist:cls, reg s:*, reg s1:V, reg p7:p(V +), reg r17:V, reg as_character:cls, reg r18:V |
    mkenv;
    st x = x;
    Map = ldf Map;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      c = ld c;
      c1 = force? c;
      checkMissing(c1);
      return c1;
    };
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        names = ldf names in base;
        r3 = dyn names(x2);
        goto L0(r3);
      L2():
        r1 = dyn base(<sym x>);
        goto L0(r1);
      };
      r5 = dyn gettextf("Non-portable flags in variable '%s':", p1);
      return r5;
    };
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p5 = prom<V +>{
        lapply = ldf lapply;
        p3 = prom<V +>{
          x3 = ld x;
          x4 = force? x3;
          checkMissing(x4);
          return x4;
        };
        p4 = prom<V +>{
          paste = ld paste;
          paste1 = force? paste;
          checkMissing(paste1);
          return paste1;
        };
        r9 = dyn lapply[, , collapse](p3, p4, " ");
        return r9;
      };
      r11 = dyn sprintf("  %s", p5);
      return r11;
    };
    r13 = dyn Map(p, p2, p6);
    check L2() else D1();
  D1():
    deopt 5 [r13];
  L2():
    st s = r13;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L3() else L4();
  L0(r15):
    popenv;
    return r15;
  L3():
    unlist = ldf unlist;
    check L5() else D2();
  L4():
    r14 = dyn base1(<lang unlist(s)>);
    goto L0(r14);
  D2():
    deopt 10 [];
  L5():
    p7 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    r17 = dyn unlist(p7);
    check L6() else D3();
  D3():
    deopt 12 [r17];
  L6():
    as_character = ldf `as.character` in base;
    r18 = dyn as_character(r17);
    check L7() else D4();
  D4():
    deopt 14 [r18];
  L7():
    goto L0(r18);
  }
}