fun main() {
  () -+> V { reg r:cls, reg cbind:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg rowSums:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r7:V, reg colSums:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg r9:V, reg letters:*, reg letters1:V, reg c1:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r10:V, reg l:*, reg dimnames:cls, reg r11:V, reg c2:L, reg dx3:V, reg l2:*, reg r13:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg l4:*, reg dx7:V, reg ____:cls, reg r14:V, reg dimnames__:cls, reg r15:V, reg rowSums1:cls, reg x4:*, reg x5:V, reg p3:p(V +), reg r17:V, reg colSums1:cls, reg x6:*, reg x7:V, reg p4:p(V +), reg r19:V, reg rowMeans:cls, reg x8:*, reg x9:V, reg p5:p(V +), reg r21:V, reg colMeans:cls, reg x10:*, reg x11:V, reg p6:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg x12:*, reg x13:V, reg as_integer:cls, reg r26:V, reg l5:*, reg c3:L, reg r28:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg ___:cls, reg r31:V, reg rowSums2:cls, reg x14:*, reg x15:V, reg p7:p(V +), reg r33:V, reg colSums2:cls, reg x16:*, reg x17:V, reg p8:p(V +), reg r35:V, reg x18:*, reg x19:V, reg r36:V, reg l8:*, reg c4:L, reg r38:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg ___1:cls, reg r41:V, reg rowSums3:cls, reg x20:*, reg x21:V, reg p9:p(V +), reg r43:V, reg colSums3:cls, reg x22:*, reg x23:V, reg p10:p(V +), reg r45:V, reg cbind1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r46:V, reg r47:V, reg c5:cls, reg r48:V, reg p11:p(V +), reg r50:V, reg l11:*, reg c6:L, reg r52:L, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg ___2:cls, reg r55:V, reg l14:*, reg c7:L, reg r57:L, reg l16:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg ___3:cls, reg r60:V, reg rowSums4:cls, reg x24:*, reg x25:V, reg p12:p(V +), reg r62:V, reg colSums4:cls, reg x26:*, reg x27:V, reg p13:p(V +), reg r64:V, reg rowMeans1:cls, reg x28:*, reg x29:V, reg p14:p(V +), reg r66:V, reg colMeans1:cls, reg x30:*, reg x31:V, reg p15:p(V +), reg r68:V, reg rowSums5:cls, reg x32:*, reg x33:V, reg p16:p(V +), reg r70:V, reg colSums5:cls, reg x34:*, reg x35:V, reg p17:p(V +), reg r72:V, reg rowMeans2:cls, reg x36:*, reg x37:V, reg p18:p(V +), reg r74:V, reg colMeans2:cls, reg x38:*, reg x39:V, reg p19:p(V +), reg r76:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r77:V, reg UCBAdmissions:*, reg UCBAdmissions1:V, reg dim:cls, reg r79:V, reg rowSums6:cls, reg UCBAdmissions2:*, reg UCBAdmissions3:V, reg p20:p(V +), reg r81:V, reg rowSums7:cls, reg UCBAdmissions4:*, reg UCBAdmissions5:V, reg p21:p(V +), reg r83:V, reg colSums6:cls, reg UCBAdmissions6:*, reg UCBAdmissions7:V, reg p22:p(V +), reg r85:V, reg colSums7:cls, reg UCBAdmissions8:*, reg UCBAdmissions9:V, reg p23:p(V +), reg r87:V, reg cbind2:cls, reg p24:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r89:V, reg r90:V, reg c8:cls, reg r91:V, reg r92:V, reg p25:p(V +), reg r94:V, reg l17:*, reg c9:L, reg r96:L, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg ___4:cls, reg r99:V, reg l20:*, reg c10:L, reg r101:L, reg l22:*, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg ___5:cls, reg r104:V, reg rowSums8:cls, reg x40:*, reg x41:V, reg p26:p(V +), reg r106:V, reg colSums8:cls, reg x42:*, reg x43:V, reg p27:p(V +), reg r108:V, reg rowMeans3:cls, reg x44:*, reg x45:V, reg p28:p(V +), reg r110:V, reg colMeans3:cls, reg x46:*, reg x47:V, reg p29:p(V +), reg r112:V, reg rowSums9:cls, reg x48:*, reg x49:V, reg p30:p(V +), reg r114:V, reg colSums9:cls, reg x50:*, reg x51:V, reg p31:p(V +), reg r116:V, reg rowMeans4:cls, reg x52:*, reg x53:V, reg p32:p(V +), reg r118:V, reg colMeans4:cls, reg x54:*, reg x55:V, reg p33:p(V +), reg r120:V |
    mkenv;
    r = clos inner1687091684;
    st colSums = r;
    cbind = ldf cbind;
    check L10() else D0();
  D0():
    deopt 4 [];
  L10():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(<int 4, 3, 2, 1>, <int 2, 3, 4, 5>);
      goto L0(r3);
    L2():
      r1 = dyn base(<lang `:`(4.0, 1.0)>, <lang `:`(2.0, 5.0)>);
      goto L0(r1);
    };
    r5 = dyn cbind[x1, x2](3.0, p);
    check L11() else D1();
  D1():
    deopt 9 [r5];
  L11():
    st x = r5;
    rowSums = ldf rowSums;
    check L12() else D2();
  D2():
    deopt 12 [];
  L12():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r7 = dyn rowSums(p1);
    check L13() else D3();
  D3():
    deopt 14 [r7];
  L13():
    colSums = ldf colSums;
    check L14() else D4();
  D4():
    deopt 16 [];
  L14():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r9 = dyn colSums(p2);
    check L15() else D5();
  D5():
    deopt 18 [r9];
  L15():
    letters = ld letters;
    check L16() else D6();
  D6():
    deopt 19 [letters];
  L16():
    letters1 = force? letters;
    checkMissing(letters1);
    c1 = `is.object`(letters1);
    if c1 then L17() else L18(letters1);
  L0(dx1):
    l = ld x;
    dimnames = ldf dimnames;
    check L20() else D7();
  L17():
    dr = tryDispatchBuiltin.1("[", letters1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(letters3):
    __ = ldf `[` in base;
    r10 = dyn __(letters3, <int 1, 2, 3, 4, 5, 6, 7, 8>);
    goto L0(r10);
  D7():
    deopt 25 [dx1, l, dx1];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L20():
    r11 = dyn dimnames(dx1, NULL);
    check L21() else D8();
  D8():
    deopt 27 [dx1, l, dx1, r11];
  L21():
    c2 = `is.object`(r11);
    if c2 then L22() else L23(dx1, l, r11);
  L1(dx6, l4, dx7):
    dimnames__ = ldf `dimnames<-`;
    check L25() else D9();
  L22():
    dr2 = tryDispatchBuiltin.0("[[<-", r11, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dx1, l, dr2);
  L23(dx3, l2, r13):
    ____ = ldf `[[<-` in base;
    r14 = dyn ____(r13, dx1, 1.0);
    goto L1(dx3, l2, r14);
  D9():
    deopt 32 [dx6, l4, dx7];
  L24():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx1, l, dx5);
  L25():
    r15 = dyn dimnames__(l4, NULL, dx7);
    check L26() else D10();
  D10():
    deopt 34 [dx6, r15];
  L26():
    st x = r15;
    rowSums1 = ldf rowSums;
    check L27() else D11();
  D11():
    deopt 37 [];
  L27():
    p3 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r17 = dyn rowSums1(p3);
    check L28() else D12();
  D12():
    deopt 39 [r17];
  L28():
    colSums1 = ldf colSums;
    check L29() else D13();
  D13():
    deopt 41 [];
  L29():
    p4 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r19 = dyn colSums1(p4);
    check L30() else D14();
  D14():
    deopt 43 [r19];
  L30():
    rowMeans = ldf rowMeans;
    check L31() else D15();
  D15():
    deopt 45 [];
  L31():
    p5 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r21 = dyn rowMeans(p5);
    check L32() else D16();
  D16():
    deopt 47 [r21];
  L32():
    colMeans = ldf colMeans;
    check L33() else D17();
  D17():
    deopt 49 [];
  L33():
    p6 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r23 = dyn colMeans(p6);
    check L34() else D18();
  D18():
    deopt 51 [r23];
  L34():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L2(r25):
    l5 = ld x;
    c3 = `is.object`(l5);
    if c3 then L39() else L40(r25);
  L35():
    x12 = ld x;
    check L37() else D19();
  L36():
    r24 = dyn base1(<sym x>);
    goto L2(r24);
  D19():
    deopt 54 [x12];
  L3(dx9):
    st x = dx9;
    rowSums2 = ldf rowSums;
    check L42() else D21();
  L37():
    x13 = force? x12;
    checkMissing(x13);
    as_integer = ldf `as.integer` in base;
    r26 = dyn as_integer(x13);
    check L38() else D20();
  L39():
    dr4 = tryDispatchBuiltin.0("[<-", l5, r25);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(r25);
  L40(r28):
    ___ = ldf `[<-` in base;
    r31 = dyn ___(l5, <missing>, r25);
    goto L3(r31);
  D20():
    deopt 57 [r26];
  D21():
    deopt 64 [];
  L38():
    goto L2(r26);
  L41():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx8);
  L42():
    p7 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r33 = dyn rowSums2(p7);
    check L43() else D22();
  D22():
    deopt 66 [r33];
  L43():
    colSums2 = ldf colSums;
    check L44() else D23();
  D23():
    deopt 68 [];
  L44():
    p8 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    r35 = dyn colSums2(p8);
    check L45() else D24();
  D24():
    deopt 70 [r35];
  L45():
    x18 = ld x;
    check L46() else D25();
  D25():
    deopt 71 [x18];
  L46():
    x19 = force? x18;
    checkMissing(x19);
    r36 = `<`(x19, 3.0);
    l8 = ld x;
    c4 = `is.object`(l8);
    if c4 then L47() else L48(r36);
  L4(dx11):
    st x = dx11;
    rowSums3 = ldf rowSums;
    check L50() else D26();
  L47():
    dr6 = tryDispatchBuiltin.0("[<-", l8, r36);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L49() else L48(r36);
  L48(r38):
    ___1 = ldf `[<-` in base;
    r41 = dyn ___1(l8, <missing>, r36);
    goto L4(r41);
  D26():
    deopt 81 [];
  L49():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx10);
  L50():
    p9 = prom<V +>{
      x20 = ld x;
      x21 = force? x20;
      checkMissing(x21);
      return x21;
    };
    r43 = dyn rowSums3(p9);
    check L51() else D27();
  D27():
    deopt 83 [r43];
  L51():
    colSums3 = ldf colSums;
    check L52() else D28();
  D28():
    deopt 85 [];
  L52():
    p10 = prom<V +>{
      x22 = ld x;
      x23 = force? x22;
      checkMissing(x23);
      return x23;
    };
    r45 = dyn colSums3(p10);
    check L53() else D29();
  D29():
    deopt 87 [r45];
  L53():
    cbind1 = ldf cbind;
    check L54() else D30();
  D30():
    deopt 89 [];
  L54():
    p11 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      c5 = ldf c in base;
      r48 = dyn c5(<int 4, 3, 2, 1>, <int 2, 3, 4, 5>);
      goto L0(r48);
    L2():
      r46 = dyn base2(<lang `:`(4.0, 1.0)>, <lang `:`(2.0, 5.0)>);
      goto L0(r46);
    };
    r50 = dyn cbind1[x1, x2](3.0, p11);
    check L55() else D31();
  D31():
    deopt 94 [r50];
  L55():
    st x = r50;
    l11 = ld x;
    c6 = `is.object`(l11);
    if c6 then L56() else L57(NA_LGL);
  L5(dx13):
    st x = dx13;
    l14 = ld x;
    c7 = `is.object`(l14);
    if c7 then L59() else L60(NA_LGL, l14);
  L56():
    dr8 = tryDispatchBuiltin.0("[<-", l11, NA_LGL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L58() else L57(NA_LGL);
  L57(r52):
    ___2 = ldf `[<-` in base;
    r55 = dyn ___2(l11, 3.0, <missing>, NA_LGL);
    goto L5(r55);
  L6(dx15):
    st x = dx15;
    rowSums4 = ldf rowSums;
    check L62() else D32();
  L58():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx12);
  L59():
    dr10 = tryDispatchBuiltin.0("[<-", l14, NA_LGL);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L61() else L60(NA_LGL, dr10);
  L60(r57, l16):
    ___3 = ldf `[<-` in base;
    r60 = dyn ___3(l16, NA_LGL, 4.0, 2.0);
    goto L6(r60);
  D32():
    deopt 113 [];
  L61():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L6(dx14);
  L62():
    p12 = prom<V +>{
      x24 = ld x;
      x25 = force? x24;
      checkMissing(x25);
      return x25;
    };
    r62 = dyn rowSums4(p12);
    check L63() else D33();
  D33():
    deopt 115 [r62];
  L63():
    colSums4 = ldf colSums;
    check L64() else D34();
  D34():
    deopt 117 [];
  L64():
    p13 = prom<V +>{
      x26 = ld x;
      x27 = force? x26;
      checkMissing(x27);
      return x27;
    };
    r64 = dyn colSums4(p13);
    check L65() else D35();
  D35():
    deopt 119 [r64];
  L65():
    rowMeans1 = ldf rowMeans;
    check L66() else D36();
  D36():
    deopt 121 [];
  L66():
    p14 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      return x29;
    };
    r66 = dyn rowMeans1(p14);
    check L67() else D37();
  D37():
    deopt 123 [r66];
  L67():
    colMeans1 = ldf colMeans;
    check L68() else D38();
  D38():
    deopt 125 [];
  L68():
    p15 = prom<V +>{
      x30 = ld x;
      x31 = force? x30;
      checkMissing(x31);
      return x31;
    };
    r68 = dyn colMeans1(p15);
    check L69() else D39();
  D39():
    deopt 127 [r68];
  L69():
    rowSums5 = ldf rowSums;
    check L70() else D40();
  D40():
    deopt 129 [];
  L70():
    p16 = prom<V +>{
      x32 = ld x;
      x33 = force? x32;
      checkMissing(x33);
      return x33;
    };
    r70 = dyn rowSums5[, `na.rm`](p16, TRUE);
    check L71() else D41();
  D41():
    deopt 133 [r70];
  L71():
    colSums5 = ldf colSums;
    check L72() else D42();
  D42():
    deopt 135 [];
  L72():
    p17 = prom<V +>{
      x34 = ld x;
      x35 = force? x34;
      checkMissing(x35);
      return x35;
    };
    r72 = dyn colSums5[, `na.rm`](p17, TRUE);
    check L73() else D43();
  D43():
    deopt 139 [r72];
  L73():
    rowMeans2 = ldf rowMeans;
    check L74() else D44();
  D44():
    deopt 141 [];
  L74():
    p18 = prom<V +>{
      x36 = ld x;
      x37 = force? x36;
      checkMissing(x37);
      return x37;
    };
    r74 = dyn rowMeans2[, `na.rm`](p18, TRUE);
    check L75() else D45();
  D45():
    deopt 145 [r74];
  L75():
    colMeans2 = ldf colMeans;
    check L76() else D46();
  D46():
    deopt 147 [];
  L76():
    p19 = prom<V +>{
      x38 = ld x;
      x39 = force? x38;
      checkMissing(x39);
      return x39;
    };
    r76 = dyn colMeans2[, `na.rm`](p19, TRUE);
    check L77() else D47();
  D47():
    deopt 151 [r76];
  L77():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L78() else L79();
  L7():
    rowSums6 = ldf rowSums;
    check L82() else D50();
  L78():
    UCBAdmissions = ld UCBAdmissions;
    check L80() else D48();
  L79():
    r77 = dyn base3(<sym UCBAdmissions>);
    goto L7();
  D48():
    deopt 154 [UCBAdmissions];
  D50():
    deopt 159 [];
  L80():
    UCBAdmissions1 = force? UCBAdmissions;
    checkMissing(UCBAdmissions1);
    dim = ldf dim in base;
    r79 = dyn dim(UCBAdmissions1);
    check L81() else D49();
  L82():
    p20 = prom<V +>{
      UCBAdmissions2 = ld UCBAdmissions;
      UCBAdmissions3 = force? UCBAdmissions2;
      checkMissing(UCBAdmissions3);
      return UCBAdmissions3;
    };
    r81 = dyn rowSums6(p20);
    check L83() else D51();
  D49():
    deopt 157 [r79];
  D51():
    deopt 161 [r81];
  L81():
    goto L7();
  L83():
    rowSums7 = ldf rowSums;
    check L84() else D52();
  D52():
    deopt 163 [];
  L84():
    p21 = prom<V +>{
      UCBAdmissions4 = ld UCBAdmissions;
      UCBAdmissions5 = force? UCBAdmissions4;
      checkMissing(UCBAdmissions5);
      return UCBAdmissions5;
    };
    r83 = dyn rowSums7[, dims](p21, 2.0);
    check L85() else D53();
  D53():
    deopt 167 [r83];
  L85():
    colSums6 = ldf colSums;
    check L86() else D54();
  D54():
    deopt 169 [];
  L86():
    p22 = prom<V +>{
      UCBAdmissions6 = ld UCBAdmissions;
      UCBAdmissions7 = force? UCBAdmissions6;
      checkMissing(UCBAdmissions7);
      return UCBAdmissions7;
    };
    r85 = dyn colSums6(p22);
    check L87() else D55();
  D55():
    deopt 171 [r85];
  L87():
    colSums7 = ldf colSums;
    check L88() else D56();
  D56():
    deopt 173 [];
  L88():
    p23 = prom<V +>{
      UCBAdmissions8 = ld UCBAdmissions;
      UCBAdmissions9 = force? UCBAdmissions8;
      checkMissing(UCBAdmissions9);
      return UCBAdmissions9;
    };
    r87 = dyn colSums7[, dims](p23, 2.0);
    check L89() else D57();
  D57():
    deopt 177 [r87];
  L89():
    cbind2 = ldf cbind;
    check L90() else D58();
  D58():
    deopt 179 [];
  L90():
    p24 = prom<V +>{
      return 3.0+2.0i;
    };
    p25 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r90):
      r92 = `-`(r90, 5.0i);
      return r92;
    L1():
      c8 = ldf c in base;
      r91 = dyn c8(<int 4, 3, 2, 1>, <int 2, 3, 4, 5>);
      goto L0(r91);
    L2():
      r89 = dyn base4(<lang `:`(4.0, 1.0)>, <lang `:`(2.0, 5.0)>);
      goto L0(r89);
    };
    r94 = dyn cbind2[x1, x2](p24, p25);
    check L91() else D59();
  D59():
    deopt 184 [r94];
  L91():
    st x = r94;
    l17 = ld x;
    c9 = `is.object`(l17);
    if c9 then L92() else L93(NA_LGL);
  L8(dx17):
    st x = dx17;
    l20 = ld x;
    c10 = `is.object`(l20);
    if c10 then L95() else L96(NA_LGL, l20);
  L92():
    dr12 = tryDispatchBuiltin.0("[<-", l17, NA_LGL);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L94() else L93(NA_LGL);
  L93(r96):
    ___4 = ldf `[<-` in base;
    r99 = dyn ___4(l17, 3.0, <missing>, NA_LGL);
    goto L8(r99);
  L9(dx19):
    st x = dx19;
    rowSums8 = ldf rowSums;
    check L98() else D60();
  L94():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L8(dx16);
  L95():
    dr14 = tryDispatchBuiltin.0("[<-", l20, NA_LGL);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L97() else L96(NA_LGL, dr14);
  L96(r101, l22):
    ___5 = ldf `[<-` in base;
    r104 = dyn ___5(l22, NA_LGL, 4.0, 2.0);
    goto L9(r104);
  D60():
    deopt 203 [];
  L97():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L9(dx18);
  L98():
    p26 = prom<V +>{
      x40 = ld x;
      x41 = force? x40;
      checkMissing(x41);
      return x41;
    };
    r106 = dyn rowSums8(p26);
    check L99() else D61();
  D61():
    deopt 205 [r106];
  L99():
    colSums8 = ldf colSums;
    check L100() else D62();
  D62():
    deopt 207 [];
  L100():
    p27 = prom<V +>{
      x42 = ld x;
      x43 = force? x42;
      checkMissing(x43);
      return x43;
    };
    r108 = dyn colSums8(p27);
    check L101() else D63();
  D63():
    deopt 209 [r108];
  L101():
    rowMeans3 = ldf rowMeans;
    check L102() else D64();
  D64():
    deopt 211 [];
  L102():
    p28 = prom<V +>{
      x44 = ld x;
      x45 = force? x44;
      checkMissing(x45);
      return x45;
    };
    r110 = dyn rowMeans3(p28);
    check L103() else D65();
  D65():
    deopt 213 [r110];
  L103():
    colMeans3 = ldf colMeans;
    check L104() else D66();
  D66():
    deopt 215 [];
  L104():
    p29 = prom<V +>{
      x46 = ld x;
      x47 = force? x46;
      checkMissing(x47);
      return x47;
    };
    r112 = dyn colMeans3(p29);
    check L105() else D67();
  D67():
    deopt 217 [r112];
  L105():
    rowSums9 = ldf rowSums;
    check L106() else D68();
  D68():
    deopt 219 [];
  L106():
    p30 = prom<V +>{
      x48 = ld x;
      x49 = force? x48;
      checkMissing(x49);
      return x49;
    };
    r114 = dyn rowSums9[, `na.rm`](p30, TRUE);
    check L107() else D69();
  D69():
    deopt 223 [r114];
  L107():
    colSums9 = ldf colSums;
    check L108() else D70();
  D70():
    deopt 225 [];
  L108():
    p31 = prom<V +>{
      x50 = ld x;
      x51 = force? x50;
      checkMissing(x51);
      return x51;
    };
    r116 = dyn colSums9[, `na.rm`](p31, TRUE);
    check L109() else D71();
  D71():
    deopt 229 [r116];
  L109():
    rowMeans4 = ldf rowMeans;
    check L110() else D72();
  D72():
    deopt 231 [];
  L110():
    p32 = prom<V +>{
      x52 = ld x;
      x53 = force? x52;
      checkMissing(x53);
      return x53;
    };
    r118 = dyn rowMeans4[, `na.rm`](p32, TRUE);
    check L111() else D73();
  D73():
    deopt 235 [r118];
  L111():
    colMeans4 = ldf colMeans;
    check L112() else D74();
  D74():
    deopt 237 [];
  L112():
    p33 = prom<V +>{
      x54 = ld x;
      x55 = force? x54;
      checkMissing(x55);
      return x55;
    };
    r120 = dyn colMeans4[, `na.rm`](p33, TRUE);
    check L113() else D75();
  D75():
    deopt 241 [r120];
  L113():
    popenv;
    return r120;
  }
}
fun inner1687091684(x, `na.rm`, dims) {
  (reg x:*, reg na_rm:*, reg dims:*) -+> V { var x:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, var dims:*, reg dims_isMissing:L, reg dims_orDefault:*, reg is_data_frame:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg as_matrix:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg is_array:cls, reg r7:V, reg r8:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c6:L, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c9:L, reg r12:V, reg x7:*, reg x8:V, reg dim:cls, reg r13:V, reg length:cls, reg r14:V, reg r15:V, reg c10:L, reg c11:V, reg c13:L, reg stop:cls, reg r16:V, reg dims1:*, reg dims2:V, reg r18:V, reg c14:L, reg c15:V, reg dims3:*, reg dims4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg c19:L, reg dims7:V, reg r20:V, reg dn:*, reg dn1:V, reg length1:cls, reg r21:V, reg r22:V, reg r23:V, reg c20:L, reg c21:V, reg c23:L, reg stop1:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg dn2:*, reg dn3:V, reg c24:L, reg dn5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg dn8:V, reg r29:V, reg dims8:*, reg dims9:V, reg r30:I, reg __:cls, reg r31:V, reg prod:cls, reg r32:V, reg dn9:*, reg dn10:V, reg c25:L, reg dn12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg id:*, reg id1:V, reg r33:V, reg __1:cls, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg x9:*, reg x10:V, reg c26:L, reg c27:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg r40:V, reg x11:*, reg x12:V, reg Re:cls, reg r41:V, reg n:*, reg n1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg dn13:*, reg dn14:V, reg prod1:cls, reg r44:V, reg na_rm1:*, reg na_rm2:V, reg colSums:cls, reg r45:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg r52:V, reg r53:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg r60:V, reg r61:V, reg x13:*, reg x14:V, reg Im:cls, reg r62:V, reg n2:*, reg n3:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg r68:V, reg r69:V, reg r70:V, reg dn15:*, reg dn16:V, reg prod2:cls, reg r71:V, reg na_rm3:*, reg na_rm4:V, reg colSums1:cls, reg r72:V, reg r73:V, reg r74:V, reg r75:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r76:V, reg x15:*, reg x16:V, reg n4:*, reg n5:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r77:V, reg r78:V, reg dn17:*, reg dn18:V, reg prod3:cls, reg r79:V, reg na_rm5:*, reg na_rm6:V, reg colSums2:cls, reg r80:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r81:V, reg r82:V, reg dn19:*, reg dn20:V, reg length2:cls, reg r83:V, reg r84:V, reg c28:L, reg dn21:*, reg dn22:V, reg l:*, reg dim__:cls, reg r85:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r86:V, reg r87:V, reg x17:*, reg x18:V, reg dimnames:cls, reg r88:V, reg c29:L, reg r90:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg id2:*, reg id3:V, reg r91:V, reg __2:cls, reg r92:V, reg l1:*, reg dimnames__:cls, reg r93:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r94:V, reg r95:V, reg x19:*, reg x20:V, reg dimnames1:cls, reg r96:V, reg c30:L, reg r98:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg dims10:*, reg dims11:V, reg r99:V, reg __3:cls, reg r100:V, reg l2:*, reg names__:cls, reg r101:V, reg z:*, reg z1:V |
    mkenv;
    st x = x;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(FALSE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    dims_isMissing = missing.0(dims);
    if dims_isMissing then L1(1) else L1(dims);
  L1(dims_orDefault):
    st dims = dims_orDefault;
    is_data_frame = ldf `is.data.frame`;
    check L35() else D0();
  D0():
    deopt 1 [];
  L35():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_data_frame(p);
    check L36() else D1();
  D1():
    deopt 3 [r1];
  L36():
    c = `as.logical`(r1);
    if c then L37() else L2();
  L2():
    goto L3();
  L3():
    sym = ldf `is.array`;
    base = ldf `is.array` in base;
    guard = `==`.4(sym, base);
    if guard then L41() else L42();
  L37():
    as_matrix = ldf `as.matrix`;
    check L38() else D2();
  D2():
    deopt 5 [];
  L4(r6):
    r8 = `!`(r6);
    c1 = `as.logical`(r8);
    if c1 then L5(c1) else L45();
  L38():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r3 = dyn as_matrix(p1);
    check L39() else D3();
  L41():
    x5 = ld x;
    check L43() else D4();
  L42():
    r5 = dyn base(<sym x>);
    goto L4(r5);
  D3():
    deopt 7 [r3];
  D4():
    deopt 13 [x5];
  L5(c2):
    c13 = `as.logical`(c2);
    if c13 then L54() else L8();
  L39():
    st x = r3;
    goto L3();
  L43():
    x6 = force? x5;
    checkMissing(x6);
    is_array = ldf `is.array` in base;
    r7 = dyn is_array(x6);
    check L44() else D5();
  L45():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  D5():
    deopt 16 [r7];
  L6(c6, r10):
    r15 = `<`(r10, 2);
    c10 = `as.logical`(r15);
    c11 = `||`(c6, c10);
    goto L5(c11);
  L8():
    goto L9();
  L9():
    dims1 = ld dims;
    check L58() else D11();
  L44():
    goto L4(r7);
  L46():
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L47():
    r9 = dyn base1(<lang `<-`(dn, dim(x))>);
    goto L6(c1, r9);
  L54():
    stop = ldf stop;
    check L55() else D9();
  D9():
    deopt 33 [];
  D11():
    deopt 38 [dims1];
  L7(c9, r12):
    st dn = r12;
    length = ldf length in base;
    r14 = dyn length(r12);
    check L52() else D8();
  L48():
    x7 = ld x;
    check L50() else D6();
  L49():
    r11 = dyn base2(<sym x>);
    goto L7(c1, r11);
  L55():
    r16 = dyn stop("'x' must be an array of at least two dimensions");
    check L56() else D10();
  L58():
    dims2 = force? dims1;
    checkMissing(dims2);
    r18 = `<`(dims2, 1);
    c14 = `as.logical`(r18);
    if c14 then L10(c14) else L59();
  D6():
    deopt 22 [c1, x7];
  D8():
    deopt 28 [c9, r14];
  D10():
    deopt 35 [r16];
  L10(c15):
    c23 = `as.logical`(c15);
    if c23 then L66() else L12();
  L50():
    x8 = force? x7;
    checkMissing(x8);
    dim = ldf dim in base;
    r13 = dyn dim(x8);
    check L51() else D7();
  L52():
    goto L6(c9, r14);
  L56():
    goto L9();
  L59():
    dims3 = ld dims;
    check L60() else D12();
  D7():
    deopt 25 [c1, r13];
  D12():
    deopt 42 [c14, dims3];
  L12():
    goto L13();
  L13():
    sym4 = ldf prod;
    base4 = ldf prod in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L51():
    goto L7(c1, r13);
  L60():
    dims4 = force? dims3;
    checkMissing(dims4);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  L66():
    stop1 = ldf stop;
    check L67() else D15();
  D15():
    deopt 54 [];
  L11(c19, dims7, r20):
    r22 = `-`(r20, 1);
    r23 = `>`(dims7, r22);
    c20 = `as.logical`(r23);
    c21 = `||`(c19, c20);
    goto L10(c21);
  L14(r27):
    st n = r27;
    dn9 = ld dn;
    check L80() else D20();
  L61():
    dn = ld dn;
    check L63() else D13();
  L62():
    r19 = dyn base3(<sym dn>);
    goto L11(c14, dims4, r19);
  L67():
    r24 = dyn stop1("invalid 'dims'");
    check L68() else D16();
  L70():
    dn2 = ld dn;
    check L72() else D17();
  L71():
    r26 = dyn base4(<lang `[`(dn, `<-`(id, seq_len(dims)))>);
    goto L14(r26);
  D13():
    deopt 45 [c14, dims4, dn];
  D16():
    deopt 56 [r24];
  D17():
    deopt 61 [dn2];
  D20():
    deopt 72 [dn9];
  L63():
    dn1 = force? dn;
    checkMissing(dn1);
    length1 = ldf length in base;
    r21 = dyn length1(dn1);
    check L64() else D14();
  L68():
    goto L13();
  L72():
    dn3 = force? dn2;
    checkMissing(dn3);
    c24 = `is.object`(dn3);
    if c24 then L73() else L74(dn3);
  L80():
    dn10 = force? dn9;
    checkMissing(dn10);
    c25 = `is.object`(dn10);
    if c25 then L81() else L82(dn10);
  D14():
    deopt 48 [c14, dims4, r21];
  L15(dx1):
    prod = ldf prod in base;
    r32 = dyn prod(dx1);
    check L79() else D19();
  L17(dx3):
    st dn = dx3;
    sym6 = ldf `is.complex`;
    base6 = ldf `is.complex` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L85() else L86();
  L64():
    goto L11(c14, dims4, r21);
  L73():
    dr = tryDispatchBuiltin.1("[", dn3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L75() else L74(dr);
  L74(dn5):
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L76() else L77();
  L81():
    dr2 = tryDispatchBuiltin.1("[", dn10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L83() else L82(dr2);
  L82(dn12):
    id = ld id;
    check L84() else D21();
  D19():
    deopt 70 [r32];
  D21():
    deopt 74 [dn12, id];
  L16(dn8, r29):
    st id = r29;
    __ = ldf `[` in base;
    r31 = dyn __(dn8, r29);
    goto L15(r31);
  L18(r36):
    c27 = `as.logical`(r36);
    if c27 then L88() else L19();
  L75():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L76():
    dims8 = ld dims;
    check L78() else D18();
  L77():
    r28 = dyn base5(<sym dims>);
    goto L16(dn5, r28);
  L79():
    goto L14(r32);
  L83():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L84():
    id1 = force? id;
    checkMissing(id1);
    r33 = `-`(<missing>, id1);
    __1 = ldf `[` in base;
    r34 = dyn __1(dn12, r33);
    goto L17(r34);
  L85():
    x9 = ld x;
    check L87() else D22();
  L86():
    r35 = dyn base6(<sym x>);
    goto L18(r35);
  D18():
    deopt 64 [dn5, dims8];
  D22():
    deopt 80 [x9];
  L19():
    sym13 = ldf `.Internal`;
    base13 = ldf `.Internal` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L116() else L117();
  L26(r75):
    st z = r75;
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L126() else L127();
  L78():
    dims9 = force? dims8;
    checkMissing(dims9);
    r30 = seq_len(dims9);
    goto L16(dn5, r30);
  L87():
    x10 = force? x9;
    checkMissing(x10);
    c26 = `is.complex`(x10);
    goto L18(c26);
  L88():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L20(r38):
    sym10 = ldf `.Internal`;
    base10 = ldf `.Internal` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L102() else L103();
  L28(r82):
    r84 = `>`(r82, 1);
    c28 = `as.logical`(r84);
    if c28 then L130() else L29();
  L89():
    sym8 = ldf Re;
    base8 = ldf Re in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L91() else L92();
  L90():
    r37 = dyn base7(<lang colSums(Re(x), n, prod(dn), na.rm)>);
    goto L20(r37);
  L116():
    x15 = ld x;
    check L118() else D37();
  L117():
    r76 = dyn base13(<lang colSums(x, n, prod(dn), na.rm)>);
    goto L26(r76);
  L126():
    dn19 = ld dn;
    check L128() else D43();
  L127():
    r81 = dyn base15(<sym dn>);
    goto L28(r81);
  D37():
    deopt 127 [x15];
  D43():
    deopt 144 [dn19];
  L21(r40):
    n = ld n;
    check L95() else D25();
  L23(r51, r52, r53):
    r73 = `*`(r52, r53);
    r74 = `+`(r51, r73);
    goto L26(r74);
  L29():
    sym17 = ldf dimnames;
    base17 = ldf dimnames in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L145() else L146();
  L32():
    z = ld z;
    check L155() else D58();
  L91():
    x11 = ld x;
    check L93() else D23();
  L92():
    r39 = dyn base8(<sym x>);
    goto L21(r39);
  L102():
    sym11 = ldf Im;
    base11 = ldf Im in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L104() else L105();
  L103():
    r50 = dyn base10(<lang colSums(Im(x), n, prod(dn), na.rm)>);
    goto L23(r38, 1.0i, r50);
  L118():
    x16 = force? x15;
    checkMissing(x16);
    n4 = ld n;
    check L119() else D38();
  L128():
    dn20 = force? dn19;
    checkMissing(dn20);
    length2 = ldf length in base;
    r83 = dyn length2(dn20);
    check L129() else D44();
  L130():
    dn21 = ld dn;
    check L131() else D45();
  D23():
    deopt 87 [x11];
  D25():
    deopt 91 [n];
  D38():
    deopt 129 [n4];
  D44():
    deopt 147 [r83];
  D45():
    deopt 150 [dn21];
  D58():
    deopt 188 [z];
  L24(r59, r60, r61):
    n2 = ld n;
    check L108() else D32();
  L33(r95):
    c30 = `is.object`(r95);
    if c30 then L149() else L150(r95);
  L93():
    x12 = force? x11;
    checkMissing(x12);
    Re = ldf Re in base;
    r41 = dyn Re(x12);
    check L94() else D24();
  L95():
    n1 = force? n;
    checkMissing(n1);
    sym9 = ldf prod;
    base9 = ldf prod in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L104():
    x13 = ld x;
    check L106() else D30();
  L105():
    r58 = dyn base11(<sym x>);
    goto L24(r38, 1.0i, r58);
  L119():
    n5 = force? n4;
    checkMissing(n5);
    sym14 = ldf prod;
    base14 = ldf prod in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L120() else L121();
  L129():
    goto L28(r83);
  L131():
    dn22 = force? dn21;
    checkMissing(dn22);
    l = ld z;
    dim__ = ldf `dim<-`;
    check L132() else D46();
  L145():
    x19 = ld x;
    check L147() else D53();
  L146():
    r94 = dyn base17(<sym x>);
    goto L33(r94);
  L155():
    z1 = force? z;
    checkMissing(z1);
    popenv;
    return z1;
  D24():
    deopt 90 [r41];
  D30():
    deopt 107 [r38, 1.0i, x13];
  D32():
    deopt 111 [r59, r60, n2];
  D46():
    deopt 153 [dn22, l, dn22];
  D53():
    deopt 174 [x19];
  L22(r43):
    na_rm1 = ld `na.rm`;
    check L100() else D28();
  L27(r78):
    na_rm5 = ld `na.rm`;
    check L124() else D41();
  L34(dx8):
    l2 = ld z;
    names__ = ldf `names<-`;
    check L153() else D56();
  L94():
    goto L21(r41);
  L96():
    dn13 = ld dn;
    check L98() else D26();
  L97():
    r42 = dyn base9(<sym dn>);
    goto L22(r42);
  L106():
    x14 = force? x13;
    checkMissing(x14);
    Im = ldf Im in base;
    r62 = dyn Im(x14);
    check L107() else D31();
  L108():
    n3 = force? n2;
    checkMissing(n3);
    sym12 = ldf prod;
    base12 = ldf prod in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L109() else L110();
  L120():
    dn17 = ld dn;
    check L122() else D39();
  L121():
    r77 = dyn base14(<sym dn>);
    goto L27(r77);
  L132():
    r85 = dyn dim__(l, NULL, dn22);
    check L133() else D47();
  L147():
    x20 = force? x19;
    checkMissing(x20);
    dimnames1 = ldf dimnames in base;
    r96 = dyn dimnames1(x20);
    check L148() else D54();
  L149():
    dr6 = tryDispatchBuiltin.1("[[", r95);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L151() else L150(dr6);
  L150(r98):
    dims10 = ld dims;
    check L152() else D55();
  D26():
    deopt 95 [dn13];
  D28():
    deopt 99 [na_rm1];
  D31():
    deopt 110 [r38, 1.0i, r62];
  D39():
    deopt 133 [dn17];
  D41():
    deopt 137 [na_rm5];
  D47():
    deopt 155 [dn22, r85];
  D54():
    deopt 177 [r96];
  D55():
    deopt 178 [r98, dims10];
  D56():
    deopt 184 [dx8, l2, dx8];
  L25(r68, r69, r70):
    na_rm3 = ld `na.rm`;
    check L113() else D35();
  L98():
    dn14 = force? dn13;
    checkMissing(dn14);
    prod1 = ldf prod in base;
    r44 = dyn prod1(dn14);
    check L99() else D27();
  L100():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    colSums = ldf colSums in base;
    r45 = dyn colSums(r40, n1, r43, na_rm2);
    check L101() else D29();
  L107():
    goto L24(r38, 1.0i, r62);
  L109():
    dn15 = ld dn;
    check L111() else D33();
  L110():
    r67 = dyn base12(<sym dn>);
    goto L25(r59, r60, r67);
  L122():
    dn18 = force? dn17;
    checkMissing(dn18);
    prod3 = ldf prod in base;
    r79 = dyn prod3(dn18);
    check L123() else D40();
  L124():
    na_rm6 = force? na_rm5;
    checkMissing(na_rm6);
    colSums2 = ldf colSums in base;
    r80 = dyn colSums2(x16, n5, r78, na_rm6);
    check L125() else D42();
  L133():
    st z = r85;
    sym16 = ldf dimnames;
    base16 = ldf dimnames in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L134() else L135();
  L148():
    goto L33(r96);
  L151():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L34(dx7);
  L152():
    dims11 = force? dims10;
    checkMissing(dims11);
    r99 = `+`(dims11, 1);
    __3 = ldf `[[` in base;
    r100 = dyn __3(r98, r99);
    goto L34(r100);
  L153():
    r101 = dyn names__(l2, NULL, dx8);
    check L154() else D57();
  D27():
    deopt 98 [r44];
  D29():
    deopt 102 [r45];
  D33():
    deopt 115 [r59, r60, dn15];
  D35():
    deopt 119 [r68, r69, na_rm3];
  D40():
    deopt 136 [r79];
  D42():
    deopt 140 [r80];
  D57():
    deopt 186 [dx8, r101];
  L30(r87):
    c29 = `is.object`(r87);
    if c29 then L138() else L139(r87);
  L99():
    goto L22(r44);
  L101():
    goto L20(r45);
  L111():
    dn16 = force? dn15;
    checkMissing(dn16);
    prod2 = ldf prod in base;
    r71 = dyn prod2(dn16);
    check L112() else D34();
  L113():
    na_rm4 = force? na_rm3;
    checkMissing(na_rm4);
    colSums1 = ldf colSums in base;
    r72 = dyn colSums1(r61, n3, r70, na_rm4);
    check L114() else D36();
  L123():
    goto L27(r79);
  L125():
    goto L26(r80);
  L134():
    x17 = ld x;
    check L136() else D48();
  L135():
    r86 = dyn base16(<sym x>);
    goto L30(r86);
  L154():
    st z = r101;
    goto L32();
  D34():
    deopt 118 [r59, r60, r71];
  D36():
    deopt 122 [r68, r69, r72];
  D48():
    deopt 159 [x17];
  L31(dx5):
    l1 = ld z;
    dimnames__ = ldf `dimnames<-`;
    check L142() else D51();
  L112():
    goto L25(r59, r60, r71);
  L114():
    goto L23(r68, r69, r72);
  L136():
    x18 = force? x17;
    checkMissing(x18);
    dimnames = ldf dimnames in base;
    r88 = dyn dimnames(x18);
    check L137() else D49();
  L138():
    dr4 = tryDispatchBuiltin.1("[", r87);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L140() else L139(dr4);
  L139(r90):
    id2 = ld id;
    check L141() else D50();
  D49():
    deopt 162 [r88];
  D50():
    deopt 163 [r90, id2];
  D51():
    deopt 168 [dx5, l1, dx5];
  L137():
    goto L30(r88);
  L140():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L141():
    id3 = force? id2;
    checkMissing(id3);
    r91 = `-`(<missing>, id3);
    __2 = ldf `[` in base;
    r92 = dyn __2(r90, r91);
    goto L31(r92);
  L142():
    r93 = dyn dimnames__(l1, NULL, dx5);
    check L143() else D52();
  D52():
    deopt 170 [dx5, r93];
  L143():
    st z = r93;
    goto L32();
  }
}