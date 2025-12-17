fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3353358520;
    st `print.sessionInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3353358520(x, locale, tzone, RNG, `...`) {
  (reg x:*, reg locale:*, reg tzone:*, reg RNG:*, reg ddd:dots) -+> V { var x:*, var locale:*, reg locale_isMissing:L, reg locale_orDefault:*, var tzone:*, reg tzone_isMissing:L, reg tzone_orDefault:*, reg locale1:*, reg locale2:V, reg p:p(V +), var RNG:*, reg RNG_isMissing:L, reg RNG_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg _RNGdefaults:*, reg _RNGdefaults1:V, reg identical:cls, reg r4:V, reg r5:V, reg p1:p(V +), var `...`:dots?, reg r7:cls, reg cat:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r9:V, reg p2:p(V +), reg r11:V, reg cat1:cls, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r12:V, reg p3:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r17:V, reg c5:V, reg r18:V, reg c6:L, reg cat2:cls, reg x17:*, reg x18:V, reg c7:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r19:V, reg p4:p(V +), reg r21:V, reg cat3:cls, reg r23:V, reg cat4:cls, reg x21:*, reg x22:V, reg c8:L, reg x24:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r24:V, reg p5:p(V +), reg r26:V, reg x25:*, reg x26:V, reg c9:L, reg x28:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg blas:*, reg blas1:V, reg c10:V, reg c11:L, reg x29:*, reg x30:V, reg c12:L, reg x32:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg lapack:*, reg lapack1:V, reg c13:V, reg c14:L, reg blas2:*, reg blas3:V, reg lapack2:*, reg lapack3:V, reg r35:V, reg c15:L, reg c17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg c20:L, reg r37:V, reg blas4:*, reg blas5:V, reg nzchar:cls, reg r38:V, reg c21:L, reg c22:V, reg c24:L, reg cat5:cls, reg blas6:*, reg blas7:V, reg p6:p(V +), reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg blas8:*, reg blas9:V, reg nzchar1:cls, reg r44:V, reg c25:L, reg cat6:cls, reg blas10:*, reg blas11:V, reg p7:p(V +), reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg lapack4:*, reg lapack5:V, reg nzchar2:cls, reg r50:V, reg c26:L, reg cat7:cls, reg lapack6:*, reg lapack7:V, reg p8:p(V +), reg r52:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg lapack8:*, reg lapack9:V, reg nzchar3:cls, reg r55:V, reg c27:L, reg c29:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg c32:L, reg r57:V, reg x33:*, reg x34:V, reg c33:L, reg c35:L, reg x36:V, reg dr18:V, reg dc9:L, reg dx20:V, reg c37:L, reg dx21:V, reg r58:V, reg nzchar4:cls, reg r59:V, reg c38:L, reg c39:V, reg c41:L, reg c43:V, reg grepl:cls, reg LAver:*, reg LAver1:V, reg p9:p(V +), reg lapack10:*, reg lapack11:V, reg p10:p(V +), reg r62:V, reg r63:V, reg c44:L, reg c45:V, reg c47:L, reg cat8:cls, reg LAver2:*, reg LAver3:V, reg p11:p(V +), reg r65:V, reg cat9:cls, reg r67:V, reg RNG1:*, reg RNG2:V, reg c48:L, reg cat10:cls, reg x37:*, reg x38:V, reg c49:L, reg x40:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg r68:V, reg c50:L, reg dx25:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg __:cls, reg r69:V, reg p12:p(V +), reg x41:*, reg x42:V, reg c51:L, reg x44:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r71:V, reg c52:L, reg dx31:V, reg dr26:V, reg dc13:L, reg dx32:V, reg dx33:V, reg __1:cls, reg r72:V, reg p13:p(V +), reg x45:*, reg x46:V, reg c53:L, reg x48:V, reg dr28:V, reg dc14:L, reg dx34:V, reg dx35:V, reg r74:V, reg c54:L, reg dx37:V, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg __2:cls, reg r75:V, reg p14:p(V +), reg r77:V, reg locale3:*, reg locale4:V, reg c55:L, reg cat11:cls, reg r79:V, reg print:cls, reg strsplit:cls, reg x49:*, reg x50:V, reg c56:L, reg x52:V, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg r80:V, reg p15:p(V +), reg r82:V, reg c57:L, reg r84:V, reg dr34:V, reg dc17:L, reg dx42:V, reg dx43:V, reg __3:cls, reg r85:V, reg p16:p(V +), reg ddd1:dots?, reg r87:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r88:V, reg r89:V, reg x53:*, reg x54:V, reg c58:L, reg x56:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg r90:V, reg c59:V, reg r91:V, reg c60:L, reg c62:V, reg x57:*, reg x58:V, reg c63:L, reg c65:L, reg x60:V, reg dr38:V, reg dc19:L, reg dx46:V, reg c67:L, reg dx47:V, reg r92:V, reg x61:*, reg x62:V, reg c68:L, reg c70:L, reg dx49:V, reg x64:V, reg dr40:V, reg dc20:L, reg dx51:V, reg c72:L, reg dx52:V, reg dx53:V, reg r93:V, reg r94:V, reg c73:L, reg c74:V, reg c76:L, reg cat12:cls, reg x65:*, reg x66:V, reg c77:L, reg x68:V, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg r95:V, reg p17:p(V +), reg r97:V, reg cat13:cls, reg r99:V, reg tzone1:*, reg tzone2:V, reg c78:L, reg cat14:cls, reg x69:*, reg x70:V, reg c79:L, reg x72:V, reg dr44:V, reg dc22:L, reg dx56:V, reg dx57:V, reg r101:V, reg p18:p(V +), reg r103:V, reg cat15:cls, reg x73:*, reg x74:V, reg c80:L, reg x76:V, reg dr46:V, reg dc23:L, reg dx58:V, reg dx59:V, reg r104:V, reg p19:p(V +), reg r106:V, reg cat16:cls, reg r107:V, reg cat17:cls, reg r109:V, reg print1:cls, reg x77:*, reg x78:V, reg c81:L, reg x80:V, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg r110:V, reg p20:p(V +), reg ddd2:dots?, reg r112:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r113:V, reg r114:V, reg x81:*, reg x82:V, reg c82:L, reg x84:V, reg dr50:V, reg dc25:L, reg dx62:V, reg dx63:V, reg r115:V, reg c83:V, reg r116:V, reg c84:L, reg cat18:cls, reg r117:V, reg print2:cls, reg mkLabel:cls, reg x85:*, reg x86:V, reg p21:p(V +), reg r119:V, reg p22:p(V +), reg ddd3:dots?, reg r121:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r123:V, reg r124:V, reg x87:*, reg x88:V, reg c85:L, reg x90:V, reg dr52:V, reg dc26:L, reg dx64:V, reg dx65:V, reg r125:V, reg c86:V, reg r126:V, reg c87:L, reg cat19:cls, reg r127:V, reg print3:cls, reg mkLabel1:cls, reg x91:*, reg x92:V, reg p23:p(V +), reg r129:V, reg p24:p(V +), reg ddd4:dots?, reg r131:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r133:V, reg r134:V, reg x93:*, reg x94:V, reg invisible:cls, reg r135:V |
    mkenv;
    st x = x;
    locale_isMissing = missing.0(locale);
    if locale_isMissing then L0(TRUE) else L0(locale);
  L0(locale_orDefault):
    st locale = locale_orDefault;
    tzone_isMissing = missing.0(tzone);
    if tzone_isMissing then L1() else L2(tzone);
  L1():
    p = prom<V +>{
      locale1 = ld locale;
      locale2 = force? locale1;
      checkMissing(locale2);
      return locale2;
    };
    goto L2(p);
  L2(tzone_orDefault):
    st tzone = tzone_orDefault;
    RNG_isMissing = missing.0(RNG);
    if RNG_isMissing then L3() else L4(RNG);
  L3():
    p1 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      r5 = `!`(r2);
      return r5;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L4() else L5(x2);
    L2():
      r1 = dyn base(<lang `$`(x, RNGkind)>, <sym .RNGdefaults>);
      goto L0(r1);
    L3(dx1):
      _RNGdefaults = ld `.RNGdefaults`;
      _RNGdefaults1 = force? _RNGdefaults;
      checkMissing(_RNGdefaults1);
      identical = ldf identical in base;
      r4 = dyn identical(dx1, _RNGdefaults1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r4);
    L4():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(x4):
      r3 = `$`(x4, <sym RNGkind>);
      goto L3(r3);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    goto L4(p1);
  L4(RNG_orDefault):
    st RNG = RNG_orDefault;
    st `...` = ddd;
    r7 = clos inner2587910478;
    st mkLabel = r7;
    cat = ldf cat;
    check L46() else D0();
  D0():
    deopt 4 [];
  L46():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      c2 = `is.object`(dx3);
      if c2 then L5() else L6(dx3);
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r8 = `$`(x8, <sym R.version>);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L4(dx7):
      return dx7;
    L5():
      dr4 = tryDispatchBuiltin.1("$", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      r9 = `$`(dx5, <sym version.string>);
      goto L4(r9);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L4(dx6);
    };
    r11 = dyn cat[, , sep](p2, "\n", "");
    check L47() else D1();
  D1():
    deopt 9 [r11];
  L47():
    cat1 = ldf cat;
    check L48() else D2();
  D2():
    deopt 11 [];
  L48():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c3 = `is.object`(x10);
      if c3 then L1() else L2(x10);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x12):
      r12 = `$`(x12, <sym platform>);
      goto L0(r12);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r14 = dyn cat1[, , , sep]("Platform: ", p3, "\n", "");
    check L49() else D3();
  D3():
    deopt 17 [r14];
  L49():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L50() else L51();
  L5(r16):
    r18 = `!`(r16);
    c6 = `as.logical`(r18);
    if c6 then L57() else L6();
  L50():
    x13 = ld x;
    check L52() else D4();
  L51():
    r15 = dyn base1(<lang `$`(x, running)>);
    goto L5(r15);
  D4():
    deopt 19 [x13];
  L6():
    goto L7();
  L7():
    cat3 = ldf cat;
    check L61() else D7();
  L52():
    x14 = force? x13;
    checkMissing(x14);
    c4 = `is.object`(x14);
    if c4 then L54() else L55(x14);
  L57():
    cat2 = ldf cat;
    check L58() else D5();
  D5():
    deopt 25 [];
  D7():
    deopt 35 [];
  L53(dx11):
    c5 = `==`(dx11, NULL);
    goto L5(c5);
  L54():
    dr8 = tryDispatchBuiltin.1("$", x14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L56() else L55(dr8);
  L55(x16):
    r17 = `$`(x16, <sym running>);
    goto L53(r17);
  L58():
    p4 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c7 = `is.object`(x18);
      if c7 then L1() else L2(x18);
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x20):
      r19 = `$`(x20, <sym running>);
      goto L0(r19);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    r21 = dyn cat2[, , , sep]("Running under: ", p4, "\n", "");
    check L59() else D6();
  L61():
    r23 = dyn cat3("\n");
    check L62() else D8();
  D6():
    deopt 31 [r21];
  D8():
    deopt 37 [r23];
  L56():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L53(dx10);
  L59():
    goto L7();
  L62():
    cat4 = ldf cat;
    check L63() else D9();
  D9():
    deopt 39 [];
  L63():
    p5 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c8 = `is.object`(x22);
      if c8 then L1() else L2(x22);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("$", x22);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x24):
      r24 = `$`(x24, <sym matprod>);
      goto L0(r24);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    r26 = dyn cat4[, , , sep]("Matrix products: ", p5, "\n", "");
    check L64() else D10();
  D10():
    deopt 45 [r26];
  L64():
    x25 = ld x;
    check L65() else D11();
  D11():
    deopt 46 [x25];
  L65():
    x26 = force? x25;
    checkMissing(x26);
    c9 = `is.object`(x26);
    if c9 then L67() else L68(x26);
  L66(dx17):
    st blas = dx17;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L70() else L71();
  L67():
    dr14 = tryDispatchBuiltin.1("$", x26);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L69() else L68(dr14);
  L68(x28):
    r27 = `$`(x28, <sym BLAS>);
    goto L66(r27);
  L8(r29):
    c11 = `as.logical`(r29);
    if c11 then L73() else L9();
  L69():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L66(dx16);
  L70():
    blas = ld blas;
    check L72() else D12();
  L71():
    r28 = dyn base2(<sym blas>);
    goto L8(r28);
  D12():
    deopt 51 [blas];
  L9():
    goto L10();
  L10():
    x29 = ld x;
    check L75() else D13();
  L72():
    blas1 = force? blas;
    checkMissing(blas1);
    c10 = `==`(blas1, NULL);
    goto L8(c10);
  L73():
    st blas = "";
    goto L10();
  D13():
    deopt 59 [x29];
  L75():
    x30 = force? x29;
    checkMissing(x30);
    c12 = `is.object`(x30);
    if c12 then L77() else L78(x30);
  L76(dx19):
    st lapack = dx19;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L80() else L81();
  L77():
    dr16 = tryDispatchBuiltin.1("$", x30);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L79() else L78(dr16);
  L78(x32):
    r31 = `$`(x32, <sym LAPACK>);
    goto L76(r31);
  L11(r33):
    c14 = `as.logical`(r33);
    if c14 then L83() else L12();
  L79():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L76(dx18);
  L80():
    lapack = ld lapack;
    check L82() else D14();
  L81():
    r32 = dyn base3(<sym lapack>);
    goto L11(r32);
  D14():
    deopt 64 [lapack];
  L12():
    goto L13();
  L13():
    blas2 = ld blas;
    check L85() else D15();
  L82():
    lapack1 = force? lapack;
    checkMissing(lapack1);
    c13 = `==`(lapack1, NULL);
    goto L11(c13);
  L83():
    st lapack = "";
    goto L13();
  D15():
    deopt 72 [blas2];
  L85():
    blas3 = force? blas2;
    checkMissing(blas3);
    lapack2 = ld lapack;
    check L86() else D16();
  D16():
    deopt 73 [blas3, lapack2];
  L86():
    lapack3 = force? lapack2;
    checkMissing(lapack3);
    r35 = `==`(blas3, lapack3);
    c15 = `as.logical`(r35);
    if c15 then L87() else L14(c15);
  L14(c17):
    c24 = `as.logical`(c17);
    if c24 then L93() else L16();
  L87():
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L88() else L89();
  L15(c20, r37):
    c21 = `as.logical`(r37);
    c22 = `&&`(c20, c21);
    goto L14(c22);
  L16():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L97() else L98();
  L17():
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  L88():
    blas4 = ld blas;
    check L90() else D17();
  L89():
    r36 = dyn base4(<sym blas>);
    goto L15(c15, r36);
  L93():
    cat5 = ldf cat;
    check L94() else D19();
  D17():
    deopt 78 [c15, blas4];
  D19():
    deopt 84 [];
  L18(r43):
    c25 = `as.logical`(r43);
    if c25 then L101() else L19();
  L23(r54):
    c27 = `as.logical`(r54);
    if c27 then L117() else L24(c27);
  L90():
    blas5 = force? blas4;
    checkMissing(blas5);
    nzchar = ldf nzchar in base;
    r38 = dyn nzchar(blas5);
    check L91() else D18();
  L94():
    p6 = prom<V +>{
      blas6 = ld blas;
      blas7 = force? blas6;
      checkMissing(blas7);
      return blas7;
    };
    r40 = dyn cat5("BLAS/LAPACK:", p6);
    check L95() else D20();
  L97():
    blas8 = ld blas;
    check L99() else D21();
  L98():
    r42 = dyn base5(<sym blas>);
    goto L18(r42);
  L113():
    lapack8 = ld lapack;
    check L115() else D29();
  L114():
    r53 = dyn base7(<sym lapack>);
    goto L23(r53);
  D18():
    deopt 81 [c15, r38];
  D20():
    deopt 87 [r40];
  D21():
    deopt 90 [blas8];
  D29():
    deopt 117 [lapack8];
  L19():
    goto L20();
  L20():
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L105() else L106();
  L24(c29):
    c41 = `as.logical`(c29);
    if c41 then L127() else L26(c41);
  L91():
    goto L15(c15, r38);
  L95():
    goto L17();
  L99():
    blas9 = force? blas8;
    checkMissing(blas9);
    nzchar1 = ldf nzchar in base;
    r44 = dyn nzchar1(blas9);
    check L100() else D22();
  L101():
    cat6 = ldf cat;
    check L102() else D23();
  L115():
    lapack9 = force? lapack8;
    checkMissing(lapack9);
    nzchar3 = ldf nzchar in base;
    r55 = dyn nzchar3(lapack9);
    check L116() else D30();
  L117():
    sym8 = ldf nzchar;
    base8 = ldf nzchar in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L118() else L119();
  D22():
    deopt 93 [r44];
  D23():
    deopt 95 [];
  D30():
    deopt 120 [r55];
  L21(r49):
    c26 = `as.logical`(r49);
    if c26 then L109() else L22();
  L25(c32, r57):
    c38 = `as.logical`(r57);
    c39 = `&&`(c32, c38);
    goto L24(c39);
  L26(c43):
    c47 = `as.logical`(c43);
    if c47 then L131() else L27();
  L100():
    goto L18(r44);
  L102():
    p7 = prom<V +>{
      blas10 = ld blas;
      blas11 = force? blas10;
      checkMissing(blas11);
      return blas11;
    };
    r46 = dyn cat6("BLAS:  ", p7, "\n");
    check L103() else D24();
  L105():
    lapack4 = ld lapack;
    check L107() else D25();
  L106():
    r48 = dyn base6(<sym lapack>);
    goto L21(r48);
  L116():
    goto L23(r55);
  L118():
    x33 = ld x;
    check L120() else D31();
  L119():
    r56 = dyn base8(<lang `<-`(LAver, `$`(x, LA_version))>);
    goto L25(c27, r56);
  L127():
    grepl = ldf grepl;
    check L128() else D33();
  D24():
    deopt 99 [r46];
  D25():
    deopt 104 [lapack4];
  D31():
    deopt 123 [c27, x33];
  D33():
    deopt 131 [c41];
  L22():
    goto L17();
  L27():
    goto L28();
  L28():
    cat9 = ldf cat;
    check L135() else D37();
  L103():
    goto L20();
  L107():
    lapack5 = force? lapack4;
    checkMissing(lapack5);
    nzchar2 = ldf nzchar in base;
    r50 = dyn nzchar2(lapack5);
    check L108() else D26();
  L109():
    cat7 = ldf cat;
    check L110() else D27();
  L120():
    x34 = force? x33;
    checkMissing(x34);
    c33 = `is.object`(x34);
    if c33 then L122() else L123(c27, x34);
  L128():
    p9 = prom<V +>{
      LAver = ld LAver;
      LAver1 = force? LAver;
      checkMissing(LAver1);
      return LAver1;
    };
    p10 = prom<V +>{
      lapack10 = ld lapack;
      lapack11 = force? lapack10;
      checkMissing(lapack11);
      return lapack11;
    };
    r62 = dyn grepl[, , fixed](p9, p10, TRUE);
    check L129() else D34();
  L131():
    cat8 = ldf cat;
    check L132() else D35();
  D26():
    deopt 107 [r50];
  D27():
    deopt 109 [];
  D34():
    deopt 136 [c41, r62];
  D35():
    deopt 140 [];
  D37():
    deopt 147 [];
  L108():
    goto L21(r50);
  L110():
    p8 = prom<V +>{
      lapack6 = ld lapack;
      lapack7 = force? lapack6;
      checkMissing(lapack7);
      return lapack7;
    };
    r52 = dyn cat7("LAPACK:", p8);
    check L111() else D28();
  L121(c37, dx21):
    st LAver = dx21;
    nzchar4 = ldf nzchar in base;
    r59 = dyn nzchar4(dx21);
    check L125() else D32();
  L122():
    dr18 = tryDispatchBuiltin.1("$", x34);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L124() else L123(c27, dr18);
  L123(c35, x36):
    r58 = `$`(x36, <sym LA_version>);
    goto L121(c35, r58);
  L129():
    r63 = `!`(r62);
    c44 = `as.logical`(r63);
    c45 = `&&`(c41, c44);
    goto L26(c45);
  L132():
    p11 = prom<V +>{
      LAver2 = ld LAver;
      LAver3 = force? LAver2;
      checkMissing(LAver3);
      return LAver3;
    };
    r65 = dyn cat8(";  LAPACK version", p11);
    check L133() else D36();
  L135():
    r67 = dyn cat9("\n\n");
    check L136() else D38();
  D28():
    deopt 112 [r52];
  D32():
    deopt 128 [c37, r59];
  D36():
    deopt 143 [r65];
  D38():
    deopt 149 [r67];
  L111():
    goto L17();
  L124():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L121(c27, dx20);
  L125():
    goto L25(c37, r59);
  L133():
    goto L28();
  L136():
    RNG1 = ld RNG;
    check L137() else D39();
  D39():
    deopt 150 [RNG1];
  L137():
    RNG2 = force? RNG1;
    checkMissing(RNG2);
    c48 = `as.logical`(RNG2);
    if c48 then L138() else L29();
  L29():
    goto L30();
  L30():
    locale3 = ld locale;
    check L142() else D42();
  L138():
    cat10 = ldf cat;
    check L139() else D40();
  D40():
    deopt 153 [];
  D42():
    deopt 168 [locale3];
  L139():
    p12 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      c49 = `is.object`(x38);
      if c49 then L2() else L3(x38);
    L1(dx23):
      c50 = `is.object`(dx23);
      if c50 then L5() else L6(dx23);
    L2():
      dr20 = tryDispatchBuiltin.1("$", x38);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(x40):
      r68 = `$`(x40, <sym RNGkind>);
      goto L1(r68);
    L0(dx27):
      return dx27;
    L4():
      dx22 = getTryDispatchBuiltinValue(dr20);
      goto L1(dx22);
    L5():
      dr22 = tryDispatchBuiltin.1("[", dx23);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(dr22);
    L6(dx25):
      __ = ldf `[` in base;
      r69 = dyn __(dx25, 1.0);
      goto L0(r69);
    L7():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx26);
    };
    p13 = prom<V +>{
      x41 = ld x;
      x42 = force? x41;
      checkMissing(x42);
      c51 = `is.object`(x42);
      if c51 then L2() else L3(x42);
    L1(dx29):
      c52 = `is.object`(dx29);
      if c52 then L5() else L6(dx29);
    L2():
      dr24 = tryDispatchBuiltin.1("$", x42);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L4() else L3(dr24);
    L3(x44):
      r71 = `$`(x44, <sym RNGkind>);
      goto L1(r71);
    L0(dx33):
      return dx33;
    L4():
      dx28 = getTryDispatchBuiltinValue(dr24);
      goto L1(dx28);
    L5():
      dr26 = tryDispatchBuiltin.1("[", dx29);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L7() else L6(dr26);
    L6(dx31):
      __1 = ldf `[` in base;
      r72 = dyn __1(dx31, 2.0);
      goto L0(r72);
    L7():
      dx32 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx32);
    };
    p14 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      c53 = `is.object`(x46);
      if c53 then L2() else L3(x46);
    L1(dx35):
      c54 = `is.object`(dx35);
      if c54 then L5() else L6(dx35);
    L2():
      dr28 = tryDispatchBuiltin.1("$", x46);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L4() else L3(dr28);
    L3(x48):
      r74 = `$`(x48, <sym RNGkind>);
      goto L1(r74);
    L0(dx39):
      return dx39;
    L4():
      dx34 = getTryDispatchBuiltinValue(dr28);
      goto L1(dx34);
    L5():
      dr30 = tryDispatchBuiltin.1("[", dx35);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L7() else L6(dr30);
    L6(dx37):
      __2 = ldf `[` in base;
      r75 = dyn __2(dx37, 3.0);
      goto L0(r75);
    L7():
      dx38 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx38);
    };
    r77 = dyn cat10("Random number generation:\n", "RNG:    ", p12, "\n", "Normal: ", p13, "\n", "Sample: ", p14, "\n", "\n");
    check L140() else D41();
  L142():
    locale4 = force? locale3;
    checkMissing(locale4);
    c55 = `as.logical`(locale4);
    if c55 then L143() else L31();
  D41():
    deopt 165 [r77];
  L31():
    goto L36();
  L36():
    tzone1 = ld tzone;
    check L174() else D54();
  L140():
    goto L30();
  L143():
    cat11 = ldf cat;
    check L144() else D43();
  D43():
    deopt 171 [];
  D54():
    deopt 210 [tzone1];
  L144():
    r79 = dyn cat11("locale:\n");
    check L145() else D44();
  L174():
    tzone2 = force? tzone1;
    checkMissing(tzone2);
    c78 = `as.logical`(tzone2);
    if c78 then L175() else L37();
  D44():
    deopt 173 [r79];
  L37():
    goto L38();
  L38():
    cat17 = ldf cat;
    check L183() else D61();
  L145():
    print = ldf print;
    check L146() else D45();
  L175():
    cat14 = ldf cat;
    check L176() else D55();
  D45():
    deopt 175 [];
  D55():
    deopt 213 [];
  D61():
    deopt 235 [];
  L146():
    p16 = prom<V +>{
      strsplit = ldf strsplit;
      p15 = prom<V +>{
        x49 = ld x;
        x50 = force? x49;
        checkMissing(x50);
        c56 = `is.object`(x50);
        if c56 then L1() else L2(x50);
      L0(dx41):
        return dx41;
      L1():
        dr32 = tryDispatchBuiltin.1("$", x50);
        dc16 = getTryDispatchBuiltinDispatched(dr32);
        if dc16 then L3() else L2(dr32);
      L2(x52):
        r80 = `$`(x52, <sym locale>);
        goto L0(r80);
      L3():
        dx40 = getTryDispatchBuiltinValue(dr32);
        goto L0(dx40);
      };
      r82 = dyn strsplit[, , fixed](p15, ";", TRUE);
      c57 = `is.object`(r82);
      if c57 then L1() else L2(r82);
    L0(dx43):
      return dx43;
    L1():
      dr34 = tryDispatchBuiltin.1("[[", r82);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(r84):
      __3 = ldf `[[` in base;
      r85 = dyn __3(r84, 1.0);
      goto L0(r85);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx42);
    };
    ddd1 = ld `...`;
    r87 = dyn print[, quote, `...`](p16, FALSE, ddd1);
    check L147() else D46();
  L176():
    p18 = prom<V +>{
      x69 = ld x;
      x70 = force? x69;
      checkMissing(x70);
      c79 = `is.object`(x70);
      if c79 then L1() else L2(x70);
    L0(dx57):
      return dx57;
    L1():
      dr44 = tryDispatchBuiltin.1("$", x70);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(x72):
      r101 = `$`(x72, <sym tzone>);
      goto L0(r101);
    L3():
      dx56 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx56);
    };
    r103 = dyn cat14[, , , sep]("time zone: ", p18, "\n", "");
    check L177() else D56();
  L183():
    r109 = dyn cat17("attached base packages:\n");
    check L184() else D62();
  D46():
    deopt 180 [r87];
  D56():
    deopt 219 [r103];
  D62():
    deopt 237 [r109];
  L147():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L148() else L149();
  L177():
    cat15 = ldf cat;
    check L178() else D57();
  L184():
    print1 = ldf print;
    check L185() else D63();
  D57():
    deopt 221 [];
  D63():
    deopt 239 [];
  L32(r89):
    r91 = `!`(r89);
    c60 = `as.logical`(r91);
    if c60 then L155() else L33(c60);
  L148():
    x53 = ld x;
    check L150() else D47();
  L149():
    r88 = dyn base9(<lang `$`(x, system.codepage)>);
    goto L32(r88);
  L178():
    p19 = prom<V +>{
      x73 = ld x;
      x74 = force? x73;
      checkMissing(x74);
      c80 = `is.object`(x74);
      if c80 then L1() else L2(x74);
    L0(dx59):
      return dx59;
    L1():
      dr46 = tryDispatchBuiltin.1("$", x74);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(x76):
      r104 = `$`(x76, <sym tzcode_type>);
      goto L0(r104);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx58);
    };
    r106 = dyn cat15[, , , sep]("tzcode source: ", p19, "\n", "");
    check L179() else D58();
  L185():
    p20 = prom<V +>{
      x77 = ld x;
      x78 = force? x77;
      checkMissing(x78);
      c81 = `is.object`(x78);
      if c81 then L1() else L2(x78);
    L0(dx61):
      return dx61;
    L1():
      dr48 = tryDispatchBuiltin.1("$", x78);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(x80):
      r110 = `$`(x80, <sym basePkgs>);
      goto L0(r110);
    L3():
      dx60 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx60);
    };
    ddd2 = ld `...`;
    r112 = dyn print1[, quote, `...`](p20, FALSE, ddd2);
    check L186() else D64();
  D47():
    deopt 182 [x53];
  D58():
    deopt 227 [r106];
  D64():
    deopt 244 [r112];
  L33(c62):
    c76 = `as.logical`(c62);
    if c76 then L167() else L34();
  L150():
    x54 = force? x53;
    checkMissing(x54);
    c58 = `is.object`(x54);
    if c58 then L152() else L153(x54);
  L155():
    x57 = ld x;
    check L156() else D48();
  L179():
    cat16 = ldf cat;
    check L180() else D59();
  L186():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L187() else L188();
  D48():
    deopt 187 [c60, x57];
  D59():
    deopt 229 [];
  L34():
    goto L35();
  L35():
    cat13 = ldf cat;
    check L171() else D52();
  L39(r114):
    r116 = `!`(r114);
    c84 = `as.logical`(r116);
    if c84 then L194() else L40();
  L151(dx45):
    c59 = `==`(dx45, NULL);
    goto L32(c59);
  L152():
    dr36 = tryDispatchBuiltin.1("$", x54);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L154() else L153(dr36);
  L153(x56):
    r90 = `$`(x56, <sym system.codepage>);
    goto L151(r90);
  L156():
    x58 = force? x57;
    checkMissing(x58);
    c63 = `is.object`(x58);
    if c63 then L158() else L159(c60, x58);
  L167():
    cat12 = ldf cat;
    check L168() else D50();
  L180():
    r107 = dyn cat16("\n");
    check L181() else D60();
  L187():
    x81 = ld x;
    check L189() else D65();
  L188():
    r113 = dyn base10(<lang `$`(x, otherPkgs)>);
    goto L39(r113);
  D50():
    deopt 195 [];
  D52():
    deopt 205 [];
  D60():
    deopt 231 [r107];
  D65():
    deopt 246 [x81];
  L40():
    goto L41();
  L41():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L200() else L201();
  L154():
    dx44 = getTryDispatchBuiltinValue(dr36);
    goto L151(dx44);
  L157(c67, dx47):
    x61 = ld x;
    check L161() else D49();
  L158():
    dr38 = tryDispatchBuiltin.1("$", x58);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L160() else L159(c60, dr38);
  L159(c65, x60):
    r92 = `$`(x60, <sym system.codepage>);
    goto L157(c65, r92);
  L168():
    p17 = prom<V +>{
      x65 = ld x;
      x66 = force? x65;
      checkMissing(x66);
      c77 = `is.object`(x66);
      if c77 then L1() else L2(x66);
    L0(dx55):
      return dx55;
    L1():
      dr42 = tryDispatchBuiltin.1("$", x66);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(x68):
      r95 = `$`(x68, <sym system.codepage>);
      goto L0(r95);
    L3():
      dx54 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx54);
    };
    r97 = dyn cat12[, , , sep]("system code page: ", p17, "\n", "");
    check L169() else D51();
  L171():
    r99 = dyn cat13("\n");
    check L172() else D53();
  L181():
    goto L38();
  L189():
    x82 = force? x81;
    checkMissing(x82);
    c82 = `is.object`(x82);
    if c82 then L191() else L192(x82);
  L194():
    cat18 = ldf cat;
    check L195() else D66();
  D49():
    deopt 189 [c67, dx47, x61];
  D51():
    deopt 201 [r97];
  D53():
    deopt 207 [r99];
  D66():
    deopt 252 [];
  L42(r124):
    r126 = `!`(r124);
    c87 = `as.logical`(r126);
    if c87 then L207() else L43();
  L160():
    dx46 = getTryDispatchBuiltinValue(dr38);
    goto L157(c60, dx46);
  L161():
    x62 = force? x61;
    checkMissing(x62);
    c68 = `is.object`(x62);
    if c68 then L163() else L164(c67, dx47, x62);
  L169():
    goto L35();
  L172():
    goto L36();
  L190(dx63):
    c83 = `==`(dx63, NULL);
    goto L39(c83);
  L191():
    dr50 = tryDispatchBuiltin.1("$", x82);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L193() else L192(dr50);
  L192(x84):
    r115 = `$`(x84, <sym otherPkgs>);
    goto L190(r115);
  L195():
    r117 = dyn cat18("\nother attached packages:\n");
    check L196() else D67();
  L200():
    x87 = ld x;
    check L202() else D70();
  L201():
    r123 = dyn base11(<lang `$`(x, loadedOnly)>);
    goto L42(r123);
  D67():
    deopt 254 [r117];
  D70():
    deopt 265 [x87];
  L43():
    goto L44();
  L44():
    sym12 = ldf invisible;
    base12 = ldf invisible in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L213() else L214();
  L162(c72, dx52, dx53):
    r94 = `!=`(dx52, dx53);
    c73 = `as.logical`(r94);
    c74 = `&&`(c72, c73);
    goto L33(c74);
  L163():
    dr40 = tryDispatchBuiltin.1("$", x62);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L165() else L164(c67, dx47, dr40);
  L164(c70, dx49, x64):
    r93 = `$`(x64, <sym codepage>);
    goto L162(c70, dx49, r93);
  L193():
    dx62 = getTryDispatchBuiltinValue(dr50);
    goto L190(dx62);
  L196():
    print2 = ldf print;
    check L197() else D68();
  L202():
    x88 = force? x87;
    checkMissing(x88);
    c85 = `is.object`(x88);
    if c85 then L204() else L205(x88);
  L207():
    cat19 = ldf cat;
    check L208() else D71();
  D68():
    deopt 256 [];
  D71():
    deopt 271 [];
  L45(r134):
    popenv;
    return r134;
  L165():
    dx51 = getTryDispatchBuiltinValue(dr40);
    goto L162(c67, dx47, dx51);
  L197():
    p22 = prom<V +>{
      mkLabel = ldf mkLabel;
      p21 = prom<V +>{
        x85 = ld x;
        x86 = force? x85;
        checkMissing(x86);
        return x86;
      };
      r119 = dyn mkLabel(p21, "otherPkgs");
      return r119;
    };
    ddd3 = ld `...`;
    r121 = dyn print2[, quote, `...`](p22, FALSE, ddd3);
    check L198() else D69();
  L203(dx65):
    c86 = `==`(dx65, NULL);
    goto L42(c86);
  L204():
    dr52 = tryDispatchBuiltin.1("$", x88);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L206() else L205(dr52);
  L205(x90):
    r125 = `$`(x90, <sym loadedOnly>);
    goto L203(r125);
  L208():
    r127 = dyn cat19("\nloaded via a namespace (and not attached):\n");
    check L209() else D72();
  L213():
    x93 = ld x;
    check L215() else D75();
  L214():
    r133 = dyn base12(<sym x>);
    goto L45(r133);
  D69():
    deopt 261 [r121];
  D72():
    deopt 273 [r127];
  D75():
    deopt 285 [x93];
  L198():
    goto L41();
  L206():
    dx64 = getTryDispatchBuiltinValue(dr52);
    goto L203(dx64);
  L209():
    print3 = ldf print;
    check L210() else D73();
  L215():
    x94 = force? x93;
    checkMissing(x94);
    invisible = ldf invisible in base;
    r135 = dyn invisible(x94);
    check L216() else D76();
  D73():
    deopt 275 [];
  D76():
    deopt 288 [r135];
  L210():
    p24 = prom<V +>{
      mkLabel1 = ldf mkLabel;
      p23 = prom<V +>{
        x91 = ld x;
        x92 = force? x91;
        checkMissing(x92);
        return x92;
      };
      r129 = dyn mkLabel1(p23, "loadedOnly");
      return r129;
    };
    ddd4 = ld `...`;
    r131 = dyn print3[, quote, `...`](p24, FALSE, ddd4);
    check L211() else D74();
  L216():
    goto L45(r135);
  D74():
    deopt 280 [r131];
  L211():
    goto L44();
  }
}
fun inner2587910478(L, n) {
  (reg L:*, reg n:*) -+> V { var L:*, var n:*, reg sapply:cls, reg L1:*, reg L2:V, reg c:L, reg L4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n1:*, reg n2:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg r4:V, reg sapply1:cls, reg L5:*, reg L6:V, reg c1:L, reg L8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg n3:*, reg n4:V, reg __1:cls, reg r5:V, reg p2:p(V +), reg r7:cls, reg p3:p(V +), reg r9:V, reg paste:cls, reg pkg:*, reg pkg1:V, reg p4:p(V +), reg vers:*, reg vers1:V, reg p5:p(V +), reg r12:V |
    mkenv;
    st L = L;
    st n = n;
    sapply = ldf sapply;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      L1 = ld L;
      L2 = force? L1;
      checkMissing(L2);
      c = `is.object`(L2);
      if c then L1() else L2(L2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", L2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(L4):
      n1 = ld n;
      n2 = force? n1;
      __ = ldf `[[` in base;
      r = dyn __(L4, n2);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      r2 = clos inner2501545716;
      return r2;
    };
    r4 = dyn sapply(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    st vers = r4;
    sapply1 = ldf sapply;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p2 = prom<V +>{
      L5 = ld L;
      L6 = force? L5;
      checkMissing(L6);
      c1 = `is.object`(L6);
      if c1 then L1() else L2(L6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", L6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(L8):
      n3 = ld n;
      n4 = force? n3;
      __1 = ldf `[[` in base;
      r5 = dyn __1(L8, n4);
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      r7 = clos inner2501545716;
      return r7;
    };
    r9 = dyn sapply1(p2, p3);
    check L3() else D3();
  D3():
    deopt 10 [r9];
  L3():
    st pkg = r9;
    paste = ldf paste;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p4 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    p5 = prom<V +>{
      vers = ld vers;
      vers1 = force? vers;
      checkMissing(vers1);
      return vers1;
    };
    r12 = dyn paste[, , sep](p4, p5, "_");
    check L5() else D5();
  D5():
    deopt 18 [r12];
  L5():
    popenv;
    return r12;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V |
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
    dr = tryDispatchBuiltin.1("[[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    __ = ldf `[[` in base;
    r = dyn __(x4, "Version");
    goto L0(r);
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}