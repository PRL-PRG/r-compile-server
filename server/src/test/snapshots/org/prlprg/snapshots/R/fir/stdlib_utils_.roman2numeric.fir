fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.roman2numeric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg integer:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg p:p(V +), reg r4:V, reg l:*, reg c:L, reg r6:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:L, reg l5:*, reg r15:L, reg r16:V, reg x3:*, reg x4:V, reg is_na:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:L, reg l8:*, reg r26:L, reg r27:V, reg r28:V, reg x5:*, reg x6:V, reg nzchar:cls, reg r29:V, reg r30:V, reg r31:V, reg ___:cls, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg ina:*, reg ina1:V, reg r35:V, reg any:cls, reg r36:V, reg c1:L, reg toupper:cls, reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind:*, reg ind1:V, reg __:cls, reg r37:V, reg p1:p(V +), reg r39:V, reg gsub:cls, reg y:*, reg y1:V, reg p2:p(V +), reg r41:V, reg gsub1:cls, reg y2:*, reg y3:V, reg p3:p(V +), reg r43:V, reg gsub2:cls, reg y4:*, reg y5:V, reg p4:p(V +), reg r45:V, reg gsub3:cls, reg y6:*, reg y7:V, reg p5:p(V +), reg r47:V, reg gsub4:cls, reg y8:*, reg y9:V, reg p6:p(V +), reg r49:V, reg gsub5:cls, reg y10:*, reg y11:V, reg p7:p(V +), reg r51:V, reg grepl:cls, reg y12:*, reg y13:V, reg p8:p(V +), reg r53:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg ok:*, reg ok1:V, reg r56:V, reg any1:cls, reg r57:V, reg c3:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r58:V, reg r59:V, reg ok2:*, reg ok3:V, reg r60:V, reg sum:cls, reg r61:V, reg p9:p(V +), reg r63:V, reg p10:p(V +), reg paste:cls, reg x11:*, reg x12:V, reg c4:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r65:V, reg c5:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg ok4:*, reg ok5:V, reg r66:V, reg __2:cls, reg r67:V, reg p11:p(V +), reg r69:V, reg p12:p(V +), reg r71:V, reg p13:p(V +), reg r73:V, reg l9:*, reg c6:L, reg r76:L, reg l12:*, reg r77:L, reg l13:*, reg dr8:V, reg dc4:L, reg dx10:V, reg r80:L, reg l15:*, reg r81:L, reg dx11:V, reg ind4:*, reg ind5:V, reg __3:cls, reg r82:V, reg c7:L, reg r84:L, reg l17:*, reg dx13:V, reg dr10:V, reg dc5:L, reg dx14:V, reg r86:L, reg l19:*, reg dx15:V, reg ok6:*, reg ok7:V, reg r87:V, reg ___1:cls, reg r88:V, reg c8:L, reg r90:L, reg l21:*, reg dr12:V, reg dc6:L, reg dx16:V, reg r92:L, reg dx17:V, reg ind6:*, reg ind7:V, reg ___2:cls, reg r93:V, reg vapply:cls, reg strsplit:cls, reg y14:*, reg y15:V, reg c9:L, reg y17:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg ok8:*, reg ok9:V, reg __4:cls, reg r95:V, reg p14:p(V +), reg r97:V, reg p15:p(V +), reg r99:cls, reg p16:p(V +), reg integer1:cls, reg r101:V, reg p17:p(V +), reg r103:V, reg l22:*, reg c10:L, reg r106:V, reg l25:*, reg r107:V, reg l26:*, reg dr16:V, reg dc8:L, reg dx20:V, reg r110:V, reg l28:*, reg r111:V, reg dx21:V, reg ind8:*, reg ind9:V, reg __5:cls, reg r112:V, reg c11:L, reg r114:V, reg l30:*, reg dx23:V, reg dr18:V, reg dc9:L, reg dx24:V, reg r116:V, reg l32:*, reg dx25:V, reg ok10:*, reg ok11:V, reg ___3:cls, reg r117:V, reg c12:L, reg r119:V, reg l34:*, reg dr20:V, reg dc10:L, reg dx26:V, reg r121:V, reg dx27:V, reg ind10:*, reg ind11:V, reg ___4:cls, reg r122:V, reg out:*, reg out1:V |
    mkenv;
    st x = x;
    integer = ldf integer;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      length = ldf length in base;
      r2 = dyn length(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    r4 = dyn integer(p);
    check L16() else D1();
  D1():
    deopt 3 [r4];
  L16():
    st out = r4;
    l = ld out;
    c = `is.object`(l);
    if c then L17() else L18(NA_LGL, l);
  L0(dx1):
    st out = dx1;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L17():
    dr = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(NA_LGL, dr);
  L18(r6, l2):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L1(r14, l5, r15, r16):
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L3(r34):
    c1 = `as.logical`(r34);
    if c1 then L32() else L4();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L20():
    x3 = ld x;
    check L22() else D2();
  L21():
    r13 = dyn base1(<sym x>);
    goto L1(r6, l2, NA_LGL, r13);
  L28():
    ina = ld ina;
    check L30() else D6();
  L29():
    r33 = dyn base3(<lang `<-`(ind, `!`(ina))>);
    goto L3(r33);
  D2():
    deopt 10 [r6, l2, NA_LGL, x3];
  D6():
    deopt 26 [ina];
  L2(r25, l8, r26, r27, r28):
    r30 = `!`(r28);
    r31 = `||`(r27, r30);
    st ina = r31;
    ___ = ldf `[<-` in base;
    r32 = dyn ___(l8, r26, r31);
    goto L0(r32);
  L4():
    goto L14();
  L14():
    out = ld out;
    check L84() else D36();
  L22():
    x4 = force? x3;
    checkMissing(x4);
    is_na = ldf `is.na` in base;
    r17 = dyn is_na(x4);
    check L23() else D3();
  L24():
    x5 = ld x;
    check L26() else D4();
  L25():
    r24 = dyn base2(<sym x>);
    goto L2(r14, l5, r15, r16, r24);
  L30():
    ina1 = force? ina;
    checkMissing(ina1);
    r35 = `!`(ina1);
    st ind = r35;
    any = ldf any in base;
    r36 = dyn any(r35);
    check L31() else D7();
  L32():
    toupper = ldf toupper;
    check L33() else D8();
  D3():
    deopt 13 [r6, l2, NA_LGL, r17];
  D4():
    deopt 15 [r14, l5, r15, r16, x5];
  D7():
    deopt 31 [r36];
  D8():
    deopt 33 [];
  D36():
    deopt 137 [out];
  L23():
    goto L1(r6, l2, NA_LGL, r17);
  L26():
    x6 = force? x5;
    checkMissing(x6);
    nzchar = ldf nzchar in base;
    r29 = dyn nzchar(x6);
    check L27() else D5();
  L31():
    goto L3(r36);
  L33():
    p1 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c2 = `is.object`(x8);
      if c2 then L1() else L2(x8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r37 = dyn __(x10, ind1);
      goto L0(r37);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r39 = dyn toupper(p1);
    check L34() else D9();
  L84():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D5():
    deopt 18 [r14, l5, r15, r16, r29];
  D9():
    deopt 35 [r39];
  L27():
    goto L2(r14, l5, r15, r16, r29);
  L34():
    st y = r39;
    gsub = ldf gsub;
    check L35() else D10();
  D10():
    deopt 38 [];
  L35():
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r41 = dyn gsub("CM", "DCCCC", p2);
    check L36() else D11();
  D11():
    deopt 42 [r41];
  L36():
    st y = r41;
    gsub1 = ldf gsub;
    check L37() else D12();
  D12():
    deopt 45 [];
  L37():
    p3 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r43 = dyn gsub1("CD", "CCCC", p3);
    check L38() else D13();
  D13():
    deopt 49 [r43];
  L38():
    st y = r43;
    gsub2 = ldf gsub;
    check L39() else D14();
  D14():
    deopt 52 [];
  L39():
    p4 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r45 = dyn gsub2("XC", "LXXXX", p4);
    check L40() else D15();
  D15():
    deopt 56 [r45];
  L40():
    st y = r45;
    gsub3 = ldf gsub;
    check L41() else D16();
  D16():
    deopt 59 [];
  L41():
    p5 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r47 = dyn gsub3("XL", "XXXX", p5);
    check L42() else D17();
  D17():
    deopt 63 [r47];
  L42():
    st y = r47;
    gsub4 = ldf gsub;
    check L43() else D18();
  D18():
    deopt 66 [];
  L43():
    p6 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    r49 = dyn gsub4("IX", "VIIII", p6);
    check L44() else D19();
  D19():
    deopt 70 [r49];
  L44():
    st y = r49;
    gsub5 = ldf gsub;
    check L45() else D20();
  D20():
    deopt 73 [];
  L45():
    p7 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      return y11;
    };
    r51 = dyn gsub5("IV", "IIII", p7);
    check L46() else D21();
  D21():
    deopt 77 [r51];
  L46():
    st y = r51;
    grepl = ldf grepl;
    check L47() else D22();
  D22():
    deopt 80 [];
  L47():
    p8 = prom<V +>{
      y12 = ld y;
      y13 = force? y12;
      checkMissing(y13);
      return y13;
    };
    r53 = dyn grepl("^M{,3}D?C{,4}L?X{,4}V?I{,4}$", p8);
    check L48() else D23();
  D23():
    deopt 83 [r53];
  L48():
    st ok = r53;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L5(r55):
    c3 = `as.logical`(r55);
    if c3 then L53() else L6();
  L49():
    ok = ld ok;
    check L51() else D24();
  L50():
    r54 = dyn base4(<lang `!`(ok)>);
    goto L5(r54);
  D24():
    deopt 87 [ok];
  L6():
    goto L10();
  L10():
    vapply = ldf vapply;
    check L69() else D31();
  L51():
    ok1 = force? ok;
    checkMissing(ok1);
    r56 = `!`(ok1);
    any1 = ldf any in base;
    r57 = dyn any1(r56);
    check L52() else D25();
  L53():
    warning = ldf warning;
    check L54() else D26();
  D25():
    deopt 91 [r57];
  D26():
    deopt 93 [];
  D31():
    deopt 117 [];
  L52():
    goto L5(r57);
  L54():
    p13 = prom<V +>{
      sprintf = ldf sprintf;
      p10 = prom<V +>{
        ngettext = ldf ngettext;
        p9 = prom<V +>{
          sym5 = ldf sum;
          base5 = ldf sum in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r59):
          return r59;
        L1():
          ok2 = ld ok;
          ok3 = force? ok2;
          checkMissing(ok3);
          r60 = `!`(ok3);
          sum = ldf sum in base;
          r61 = dyn sum(r60);
          goto L0(r61);
        L2():
          r58 = dyn base5(<lang `!`(ok)>);
          goto L0(r58);
        };
        r63 = dyn ngettext(p9, "invalid roman numeral: %s", "invalid roman numerals: %s");
        return r63;
      };
      p12 = prom<V +>{
        paste = ldf paste;
        p11 = prom<V +>{
          x11 = ld x;
          x12 = force? x11;
          checkMissing(x12);
          c4 = `is.object`(x12);
          if c4 then L2() else L3(x12);
        L0(dx5):
          c5 = `is.object`(dx5);
          if c5 then L5() else L6(dx5);
        L2():
          dr4 = tryDispatchBuiltin.1("[", x12);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L4() else L3(dr4);
        L3(x14):
          ind2 = ld ind;
          ind3 = force? ind2;
          __1 = ldf `[` in base;
          r65 = dyn __1(x14, ind3);
          goto L0(r65);
        L1(dx9):
          return dx9;
        L4():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        L5():
          dr6 = tryDispatchBuiltin.1("[", dx5);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L7() else L6(dr6);
        L6(dx7):
          ok4 = ld ok;
          ok5 = force? ok4;
          checkMissing(ok5);
          r66 = `!`(ok5);
          __2 = ldf `[` in base;
          r67 = dyn __2(dx7, r66);
          goto L1(r67);
        L7():
          dx8 = getTryDispatchBuiltinValue(dr6);
          goto L1(dx8);
        };
        r69 = dyn paste[, collapse](p11, " ");
        return r69;
      };
      r71 = dyn sprintf(p10, p12);
      return r71;
    };
    r73 = dyn warning[, domain](p13, NA_LGL);
    check L55() else D27();
  L69():
    p15 = prom<V +>{
      strsplit = ldf strsplit;
      p14 = prom<V +>{
        y14 = ld y;
        y15 = force? y14;
        checkMissing(y15);
        c9 = `is.object`(y15);
        if c9 then L1() else L2(y15);
      L0(dx19):
        return dx19;
      L1():
        dr14 = tryDispatchBuiltin.1("[", y15);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(y17):
        ok8 = ld ok;
        ok9 = force? ok8;
        __4 = ldf `[` in base;
        r95 = dyn __4(y17, ok9);
        goto L0(r95);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx18);
      };
      r97 = dyn strsplit(p14, "");
      return r97;
    };
    p16 = prom<V +>{
      r99 = clos inner2148457334;
      return r99;
    };
    p17 = prom<V +>{
      integer1 = ldf integer;
      r101 = dyn integer1(1);
      return r101;
    };
    r103 = dyn vapply(p15, p16, p17);
    check L70() else D32();
  D27():
    deopt 97 [r73];
  D32():
    deopt 121 [r103];
  L55():
    l9 = ld out;
    c6 = `is.object`(l9);
    if c6 then L56() else L57(NA_LGL, l9, NA_LGL, l9);
  L70():
    l22 = ld out;
    c10 = `is.object`(l22);
    if c10 then L71() else L72(r103, l22, r103, l22);
  L7(r80, l15, r81, dx11):
    c7 = `is.object`(dx11);
    if c7 then L60() else L61(r80, l15, dx11);
  L11(r110, l28, r111, dx21):
    c11 = `is.object`(dx21);
    if c11 then L75() else L76(r110, l28, dx21);
  L56():
    dr8 = tryDispatchBuiltin.1("[", l9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L58() else L57(NA_LGL, l9, NA_LGL, dr8);
  L57(r76, l12, r77, l13):
    ind4 = ld ind;
    check L59() else D28();
  L71():
    dr16 = tryDispatchBuiltin.1("[", l22);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L73() else L72(r103, l22, r103, dr16);
  L72(r106, l25, r107, l26):
    ind8 = ld ind;
    check L74() else D33();
  D28():
    deopt 102 [r76, l12, r77, l13, ind4];
  D33():
    deopt 124 [r106, l25, r107, l26, ind8];
  L8(r86, l19, dx15):
    c8 = `is.object`(l19);
    if c8 then L64() else L65(r86, l19);
  L12(r116, l32, dx25):
    c12 = `is.object`(l32);
    if c12 then L79() else L80(r116, l32);
  L58():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L7(NA_LGL, l9, NA_LGL, dx10);
  L59():
    ind5 = force? ind4;
    __3 = ldf `[` in base;
    r82 = dyn __3(l13, ind5);
    goto L7(r76, l12, r77, r82);
  L60():
    dr10 = tryDispatchBuiltin.0("[<-", dx11, r81);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L62() else L61(r80, l15, dr10);
  L61(r84, l17, dx13):
    ok6 = ld ok;
    check L63() else D29();
  L73():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L11(r103, l22, r103, dx20);
  L74():
    ind9 = force? ind8;
    __5 = ldf `[` in base;
    r112 = dyn __5(l26, ind9);
    goto L11(r106, l25, r107, r112);
  L75():
    dr18 = tryDispatchBuiltin.0("[<-", dx21, r111);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L77() else L76(r110, l28, dr18);
  L76(r114, l30, dx23):
    ok10 = ld ok;
    check L78() else D34();
  D29():
    deopt 106 [r84, l17, dx13, r81, ok6];
  D34():
    deopt 128 [r114, l30, dx23, r111, ok10];
  L9(r92, dx17):
    st out = dx17;
    goto L10();
  L13(r121, dx27):
    st out = dx27;
    goto L14();
  L62():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L8(r80, l15, dx14);
  L63():
    ok7 = force? ok6;
    checkMissing(ok7);
    r87 = `!`(ok7);
    ___1 = ldf `[<-` in base;
    r88 = dyn ___1(dx13, r81, r87);
    goto L8(r84, l17, r88);
  L64():
    dr12 = tryDispatchBuiltin.0("[<-", l19, dx15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L66() else L65(r86, dr12);
  L65(r90, l21):
    ind6 = ld ind;
    check L67() else D30();
  L77():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L12(r110, l28, dx24);
  L78():
    ok11 = force? ok10;
    ___3 = ldf `[<-` in base;
    r117 = dyn ___3(dx23, r111, ok11);
    goto L12(r114, l30, r117);
  L79():
    dr20 = tryDispatchBuiltin.0("[<-", l32, dx25);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L81() else L80(r116, dr20);
  L80(r119, l34):
    ind10 = ld ind;
    check L82() else D35();
  D30():
    deopt 110 [r90, l21, dx15, ind6];
  D35():
    deopt 131 [r119, l34, dx25, ind10];
  L66():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L9(r86, dx16);
  L67():
    ind7 = force? ind6;
    ___2 = ldf `[<-` in base;
    r93 = dyn ___2(l21, dx15, ind7);
    goto L9(r90, r93);
  L81():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L13(r116, dx26);
  L82():
    ind11 = force? ind10;
    ___4 = ldf `[<-` in base;
    r122 = dyn ___4(l34, dx25, ind11);
    goto L13(r119, r122);
  }
}
fun inner2148457334(z) {
  (reg z:*) -+> V { var z:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg _romans:*, reg _romans1:V, reg c:L, reg _romans3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg _romans6:V, reg r5:V, reg z1:*, reg z2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r6:V, reg _romans9:V, reg r7:V, reg _romans10:*, reg _romans11:V, reg names:cls, reg r8:V, reg match:cls, reg r9:V, reg __:cls, reg r10:V, reg sum:cls, reg r11:V, reg as_integer:cls, reg r12:V |
    mkenv;
    st z = z;
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    popenv;
    return r1;
  L5():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang sum(`[`(.romans, match(z, names(.romans))))>);
    goto L0(r);
  L1(r3):
    as_integer = ldf `as.integer` in base;
    r12 = dyn as_integer(r3);
    check L22() else D6();
  L7():
    _romans = ld `.romans`;
    check L9() else D0();
  L8():
    r2 = dyn base1(<lang `[`(.romans, match(z, names(.romans)))>);
    goto L1(r2);
  D0():
    deopt 4 [_romans];
  D6():
    deopt 24 [r12];
  L9():
    _romans1 = force? _romans;
    checkMissing(_romans1);
    c = `is.object`(_romans1);
    if c then L10() else L11(_romans1);
  L22():
    goto L0(r12);
  L2(dx1):
    sum = ldf sum in base;
    r11 = dyn sum(dx1);
    check L21() else D5();
  L10():
    dr = tryDispatchBuiltin.1("[", _romans1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(_romans3):
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  D5():
    deopt 22 [r11];
  L3(_romans6, r5):
    __ = ldf `[` in base;
    r10 = dyn __(_romans6, r5);
    goto L2(r10);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    z1 = ld z;
    check L15() else D1();
  L14():
    r4 = dyn base2(<sym z>, <lang names(.romans)>);
    goto L3(_romans3, r4);
  L21():
    goto L1(r11);
  D1():
    deopt 8 [_romans3, z1];
  L15():
    z2 = force? z1;
    checkMissing(z2);
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L16() else L17();
  L4(_romans9, r7):
    match = ldf match in base;
    r9 = dyn match(z2, r7, NA_INT, NULL);
    check L20() else D4();
  L16():
    _romans10 = ld `.romans`;
    check L18() else D2();
  L17():
    r6 = dyn base3(<sym .romans>);
    goto L4(_romans3, r6);
  D2():
    deopt 12 [_romans3, _romans10];
  D4():
    deopt 19 [_romans9, r9];
  L18():
    _romans11 = force? _romans10;
    checkMissing(_romans11);
    names = ldf names in base;
    r8 = dyn names(_romans11);
    check L19() else D3();
  L20():
    goto L3(_romans9, r9);
  D3():
    deopt 15 [_romans3, r8];
  L19():
    goto L4(_romans3, r8);
  }
}