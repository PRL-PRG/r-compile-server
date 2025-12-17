fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4098042725;
    st splinefunH0 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4098042725(x0, y0, m, dx) {
  (reg x0:*, reg y0:*, reg m:*, reg dx:*) -+> V { var x0:*, var y0:*, var m:*, var dx:*, reg dx_isMissing:L, reg dx_orDefault:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx1:V, reg dx2:V, reg __:cls, reg r:V, reg x5:*, reg x6:V, reg c1:L, reg dx4:V, reg x8:V, reg dr2:V, reg dc1:L, reg dx6:V, reg dx7:V, reg dx8:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg dx11:V, reg x11:V, reg r2:V, reg x12:*, reg x13:V, reg length:cls, reg r3:V, reg r4:V, reg __1:cls, reg r5:V, reg r6:V, reg p:p(V +), reg r8:cls |
    mkenv;
    st x0 = x0;
    st y0 = y0;
    st m = m;
    dx_isMissing = missing.0(dx);
    if dx_isMissing then L0() else L1(dx);
  L0():
    p = prom<V +>{
      x1 = ld x0;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L3() else L4(x2);
    L0(dx2):
      x5 = ld x0;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L6() else L7(dx2, x6);
    L3():
      dr = tryDispatchBuiltin.1("[", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L5() else L4(dr);
    L4(x4):
      __ = ldf `[` in base;
      r = dyn __(x4, -1);
      goto L0(r);
    L1(dx7, dx8):
      r6 = `-`(dx7, dx8);
      return r6;
    L5():
      dx1 = getTryDispatchBuiltinValue(dr);
      goto L0(dx1);
    L6():
      dr2 = tryDispatchBuiltin.1("[", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L8() else L7(dx2, dr2);
    L7(dx4, x8):
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L9() else L10();
    L2(dx11, x11, r2):
      r4 = `-`(<missing>, r2);
      __1 = ldf `[` in base;
      r5 = dyn __1(x11, r4);
      goto L1(dx11, r5);
    L8():
      dx6 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2, dx6);
    L9():
      x12 = ld x0;
      x13 = force? x12;
      checkMissing(x13);
      length = ldf length in base;
      r3 = dyn length(x13);
      goto L2(dx4, x8, r3);
    L10():
      r1 = dyn base(<sym x0>);
      goto L2(dx4, x8, r1);
    };
    goto L1(p);
  L1(dx_orDefault):
    st dx = dx_orDefault;
    r8 = clos inner2121022756;
    popenv;
    return r8;
  }
}
fun inner2121022756(x, deriv, extrapol) {
  (reg x:*, reg deriv:*, reg extrapol:*) -+> V { var x:*, var deriv:*, reg deriv_isMissing:L, reg deriv_orDefault:*, var extrapol:*, reg extrapol_isMissing:L, reg extrapol_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg extrapol1:*, reg extrapol2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg deriv1:*, reg deriv2:V, reg as_integer:cls, reg r8:V, reg deriv3:*, reg deriv4:V, reg r9:V, reg c1:L, reg c2:V, reg deriv5:*, reg deriv6:V, reg r10:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r11:V, reg findInterval:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg x3:*, reg x4:V, reg p3:p(V +), reg extrapol3:*, reg extrapol4:V, reg r15:V, reg p4:p(V +), reg r17:V, reg deriv7:*, reg deriv8:V, reg r18:V, reg c8:L, reg r19:cls, reg deriv9:*, reg deriv10:V, reg r21:V, reg c9:L, reg r22:cls, reg deriv11:*, reg deriv12:V, reg r23:V, reg c10:L, reg r24:cls, reg r25:cls, reg extrapol5:*, reg extrapol6:V, reg r26:V, reg c11:L, reg c13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg c16:L, reg r28:V, reg i:*, reg i1:V, reg r29:V, reg i2:*, reg i3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg c19:L, reg r33:V, reg i6:V, reg r34:V, reg x5:*, reg x6:V, reg length:cls, reg r35:V, reg r36:V, reg r37:V, reg any:cls, reg r38:V, reg c20:L, reg c21:V, reg c23:L, reg x7:*, reg x8:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg iL:*, reg iL1:V, reg any1:cls, reg r41:V, reg c24:L, reg deriv13:*, reg deriv14:V, reg r42:V, reg c25:L, reg y0:*, reg y1:V, reg c26:L, reg y3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r43:V, reg m:*, reg m1:V, reg c27:L, reg dx3:V, reg m3:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r44:V, reg x9:*, reg x10:V, reg c28:L, reg dx10:V, reg dx11:V, reg x12:V, reg dr4:V, reg dc2:L, reg dx14:V, reg dx15:V, reg dx16:V, reg dx17:V, reg iL2:*, reg iL3:V, reg __2:cls, reg r45:V, reg x13:*, reg x14:V, reg c29:L, reg dx21:V, reg dx22:V, reg dx23:V, reg x16:V, reg dr6:V, reg dc3:L, reg dx27:V, reg dx28:V, reg dx29:V, reg dx30:V, reg dx31:V, reg __3:cls, reg r46:V, reg r47:V, reg r48:V, reg r49:V, reg r50:V, reg deriv15:*, reg deriv16:V, reg r51:V, reg c30:L, reg m4:*, reg m5:V, reg c31:L, reg m7:V, reg dr8:V, reg dc4:L, reg dx32:V, reg dx33:V, reg __4:cls, reg r52:V, reg l:*, reg c32:L, reg r54:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx34:V, reg r56:V, reg dx35:V, reg iL4:*, reg iL5:V, reg ___:cls, reg r57:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r59:V, reg r60:V, reg iR:*, reg iR1:V, reg any2:cls, reg r61:V, reg c33:L, reg deriv17:*, reg deriv18:V, reg r62:V, reg c34:L, reg y4:*, reg y5:V, reg c35:L, reg y7:V, reg dr12:V, reg dc6:L, reg dx36:V, reg dx37:V, reg n:*, reg n1:V, reg __5:cls, reg r63:V, reg m8:*, reg m9:V, reg c36:L, reg dx39:V, reg m11:V, reg dr14:V, reg dc7:L, reg dx41:V, reg dx42:V, reg dx43:V, reg n2:*, reg n3:V, reg __6:cls, reg r64:V, reg x17:*, reg x18:V, reg c37:L, reg dx46:V, reg dx47:V, reg x20:V, reg dr16:V, reg dc8:L, reg dx50:V, reg dx51:V, reg dx52:V, reg dx53:V, reg iR2:*, reg iR3:V, reg __7:cls, reg r65:V, reg x21:*, reg x22:V, reg c38:L, reg dx57:V, reg dx58:V, reg dx59:V, reg x24:V, reg dr18:V, reg dc9:L, reg dx63:V, reg dx64:V, reg dx65:V, reg dx66:V, reg dx67:V, reg n4:*, reg n5:V, reg __8:cls, reg r66:V, reg r67:V, reg r68:V, reg r69:V, reg r70:V, reg deriv19:*, reg deriv20:V, reg r71:V, reg c39:L, reg m12:*, reg m13:V, reg c40:L, reg m15:V, reg dr20:V, reg dc10:L, reg dx68:V, reg dx69:V, reg n6:*, reg n7:V, reg __9:cls, reg r72:V, reg l3:*, reg c41:L, reg r74:V, reg l5:*, reg dr22:V, reg dc11:L, reg dx70:V, reg r76:V, reg dx71:V, reg iR4:*, reg iR5:V, reg ___1:cls, reg r77:V, reg iXtra:*, reg iXtra1:V, reg r79:V, reg interp:cls, reg x25:*, reg x26:V, reg c42:L, reg x28:V, reg dr24:V, reg dc12:L, reg dx72:V, reg dx73:V, reg ini:*, reg ini1:V, reg __10:cls, reg r80:V, reg p5:p(V +), reg i7:*, reg i8:V, reg c43:L, reg i10:V, reg dr26:V, reg dc13:L, reg dx74:V, reg dx75:V, reg ini2:*, reg ini3:V, reg __11:cls, reg r82:V, reg p6:p(V +), reg r84:V, reg l6:*, reg c44:L, reg r86:V, reg l8:*, reg dr28:V, reg dc14:L, reg dx76:V, reg dx77:V, reg ini4:*, reg ini5:V, reg ___2:cls, reg r89:V, reg r90:*, reg r91:V, reg interp1:cls, reg x29:*, reg x30:V, reg p7:p(V +), reg i11:*, reg i12:V, reg p8:p(V +), reg r94:V |
    mkenv;
    st x = x;
    deriv_isMissing = missing.0(deriv);
    if deriv_isMissing then L0(0.0) else L0(deriv);
  L0(deriv_orDefault):
    st deriv = deriv_orDefault;
    extrapol_isMissing = missing.0(extrapol);
    if extrapol_isMissing then L1() else L2(extrapol);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("linear", "cubic");
      goto L0(r2);
    L2():
      r = dyn base("linear", "cubic");
      goto L0(r);
    };
    goto L2(p);
  L2(extrapol_orDefault):
    st extrapol = extrapol_orDefault;
    match_arg = ldf `match.arg`;
    check L40() else D0();
  D0():
    deopt 1 [];
  L40():
    p1 = prom<V +>{
      extrapol1 = ld extrapol;
      extrapol2 = force? extrapol1;
      checkMissing(extrapol2);
      return extrapol2;
    };
    r5 = dyn match_arg(p1);
    check L41() else D1();
  D1():
    deopt 3 [r5];
  L41():
    st extrapol = r5;
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  L3(r7):
    st deriv = r7;
    deriv3 = ld deriv;
    check L46() else D4();
  L42():
    deriv1 = ld deriv;
    check L44() else D2();
  L43():
    r6 = dyn base1(<sym deriv>);
    goto L3(r6);
  D2():
    deopt 7 [deriv1];
  D4():
    deopt 12 [deriv3];
  L44():
    deriv2 = force? deriv1;
    checkMissing(deriv2);
    as_integer = ldf `as.integer` in base;
    r8 = dyn as_integer(deriv2);
    check L45() else D3();
  L46():
    deriv4 = force? deriv3;
    checkMissing(deriv4);
    r9 = `<`(deriv4, 0.0);
    c1 = `as.logical`(r9);
    if c1 then L4(c1) else L47();
  D3():
    deopt 10 [r8];
  L4(c2):
    c7 = `as.logical`(c2);
    if c7 then L50() else L5();
  L45():
    goto L3(r8);
  L47():
    deriv5 = ld deriv;
    check L48() else D5();
  D5():
    deopt 16 [c1, deriv5];
  L5():
    goto L6();
  L6():
    findInterval = ldf findInterval;
    check L54() else D8();
  L48():
    deriv6 = force? deriv5;
    checkMissing(deriv6);
    r10 = `>`(deriv6, 3.0);
    c4 = `as.logical`(r10);
    c5 = `||`(c1, c4);
    goto L4(c5);
  L50():
    stop = ldf stop;
    check L51() else D6();
  D6():
    deopt 22 [];
  D8():
    deopt 28 [];
  L51():
    r11 = dyn stop("'deriv' must be between 0 and 3");
    check L52() else D7();
  L54():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      x3 = ld x0;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p4 = prom<V +>{
      extrapol3 = ld extrapol;
      extrapol4 = force? extrapol3;
      checkMissing(extrapol4);
      r15 = `==`(extrapol4, "cubic");
      visible.0();
      return r15;
    };
    r17 = dyn findInterval[, , `all.inside`](p2, p3, p4);
    check L55() else D9();
  D7():
    deopt 24 [r11];
  D9():
    deopt 33 [r17];
  L52():
    goto L6();
  L55():
    st i = r17;
    deriv7 = ld deriv;
    check L56() else D10();
  D10():
    deopt 35 [deriv7];
  L56():
    deriv8 = force? deriv7;
    checkMissing(deriv8);
    r18 = `==`(deriv8, 0.0);
    c8 = `as.logical`(r18);
    if c8 then L57() else L7();
  L7():
    deriv9 = ld deriv;
    check L59() else D11();
  L8():
    extrapol5 = ld extrapol;
    check L65() else D13();
  L57():
    r19 = clos inner3624283997;
    st interp = r19;
    goto L8();
  D11():
    deopt 42 [deriv9];
  D13():
    deopt 59 [extrapol5];
  L59():
    deriv10 = force? deriv9;
    checkMissing(deriv10);
    r21 = `==`(deriv10, 1.0);
    c9 = `as.logical`(r21);
    if c9 then L60() else L9();
  L65():
    extrapol6 = force? extrapol5;
    checkMissing(extrapol6);
    r26 = `==`(extrapol6, "linear");
    c11 = `as.logical`(r26);
    if c11 then L66() else L11(c11);
  L9():
    deriv11 = ld deriv;
    check L62() else D12();
  L11(c13):
    c23 = `as.logical`(c13);
    if c23 then L77() else L14();
  L60():
    r22 = clos inner3624283997;
    st interp = r22;
    goto L8();
  L66():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L67() else L68();
  D12():
    deopt 49 [deriv11];
  L12(c16, r28):
    c20 = `as.logical`(r28);
    c21 = `&&`(c16, c20);
    goto L11(c21);
  L14():
    interp1 = ldf interp;
    check L166() else D51();
  L62():
    deriv12 = force? deriv11;
    checkMissing(deriv12);
    r23 = `==`(deriv12, 2.0);
    c10 = `as.logical`(r23);
    if c10 then L63() else L10();
  L67():
    i = ld i;
    check L69() else D14();
  L68():
    r27 = dyn base2(<lang `<-`(iXtra, `|`(`(`(`<-`(iL, `(`(`==`(i, 0.0)))), `(`(`<-`(iR, `(`(`==`(i, `(`(`<-`(n, length(x0)))))))))>);
    goto L12(c11, r27);
  L77():
    x7 = ld x;
    check L78() else D19();
  D14():
    deopt 65 [c11, i];
  D19():
    deopt 84 [x7];
  D51():
    deopt 200 [];
  L10():
    r25 = clos inner3624283997;
    st interp = r25;
    goto L8();
  L63():
    r24 = clos inner3624283997;
    st interp = r24;
    goto L8();
  L69():
    i1 = force? i;
    checkMissing(i1);
    r29 = `==`(i1, 0.0);
    st iL = r29;
    i2 = ld i;
    check L70() else D15();
  L78():
    x8 = force? x7;
    checkMissing(x8);
    st r = x8;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L79() else L80();
  L166():
    p7 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    p8 = prom<V +>{
      i11 = ld i;
      i12 = force? i11;
      checkMissing(i12);
      return i12;
    };
    r94 = dyn interp1(p7, p8);
    check L167() else D52();
  D15():
    deopt 69 [c11, r29, i2];
  D52():
    deopt 203 [r94];
  L15(r40):
    c24 = `as.logical`(r40);
    if c24 then L83() else L16();
  L70():
    i3 = force? i2;
    checkMissing(i3);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L71() else L72();
  L79():
    iL = ld iL;
    check L81() else D20();
  L80():
    r39 = dyn base4(<sym iL>);
    goto L15(r39);
  L167():
    popenv;
    return r94;
  D20():
    deopt 89 [iL];
  L13(c19, r33, i6, r34):
    st n = r34;
    r36 = `==`(i6, r34);
    st iR = r36;
    r37 = `||`(r33, r36);
    st iXtra = r37;
    any = ldf any in base;
    r38 = dyn any(r37);
    check L75() else D18();
  L16():
    goto L26();
  L26():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L116() else L117();
  L71():
    x5 = ld x0;
    check L73() else D16();
  L72():
    r32 = dyn base3(<sym x0>);
    goto L13(c11, r29, i3, r32);
  L81():
    iL1 = force? iL;
    checkMissing(iL1);
    any1 = ldf any in base;
    r41 = dyn any1(iL1);
    check L82() else D21();
  L83():
    deriv13 = ld deriv;
    check L84() else D22();
  D16():
    deopt 72 [c11, r29, i3, x5];
  D18():
    deopt 82 [c19, r38];
  D21():
    deopt 92 [r41];
  D22():
    deopt 93 [deriv13];
  L27(r60):
    c33 = `as.logical`(r60);
    if c33 then L120() else L28();
  L73():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r35 = dyn length(x6);
    check L74() else D17();
  L75():
    goto L12(c19, r38);
  L82():
    goto L15(r41);
  L84():
    deriv14 = force? deriv13;
    checkMissing(deriv14);
    r42 = `==`(deriv14, 0.0);
    c25 = `as.logical`(r42);
    if c25 then L85() else L17();
  L116():
    iR = ld iR;
    check L118() else D31();
  L117():
    r59 = dyn base5(<sym iR>);
    goto L27(r59);
  D17():
    deopt 75 [c11, r29, i3, r35];
  D31():
    deopt 137 [iR];
  L17():
    deriv15 = ld deriv;
    check L104() else D28();
  L22(r50):
    l = ld r;
    c32 = `is.object`(l);
    if c32 then L111() else L112(r50, l);
  L28():
    goto L38();
  L38():
    iXtra = ld iXtra;
    check L157() else D46();
  L74():
    goto L13(c11, r29, i3, r35);
  L85():
    y0 = ld y0;
    check L86() else D23();
  L118():
    iR1 = force? iR;
    checkMissing(iR1);
    any2 = ldf any in base;
    r61 = dyn any2(iR1);
    check L119() else D32();
  L120():
    deriv17 = ld deriv;
    check L121() else D33();
  D23():
    deopt 97 [y0];
  D28():
    deopt 117 [deriv15];
  D32():
    deopt 140 [r61];
  D33():
    deopt 141 [deriv17];
  D46():
    deopt 183 [iXtra];
  L25(r56, dx35):
    st r = dx35;
    goto L26();
  L86():
    y1 = force? y0;
    checkMissing(y1);
    c26 = `is.object`(y1);
    if c26 then L87() else L88(y1);
  L104():
    deriv16 = force? deriv15;
    checkMissing(deriv16);
    r51 = `==`(deriv16, 1.0);
    c30 = `as.logical`(r51);
    if c30 then L105() else L23();
  L111():
    dr10 = tryDispatchBuiltin.0("[<-", l, r50);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L113() else L112(r50, dr10);
  L112(r54, l2):
    iL4 = ld iL;
    check L114() else D30();
  L119():
    goto L27(r61);
  L121():
    deriv18 = force? deriv17;
    checkMissing(deriv18);
    r62 = `==`(deriv18, 0.0);
    c34 = `as.logical`(r62);
    if c34 then L122() else L29();
  L157():
    iXtra1 = force? iXtra;
    checkMissing(iXtra1);
    r79 = `!`(iXtra1);
    st ini = r79;
    interp = ldf interp;
    check L158() else D47();
  D30():
    deopt 129 [r54, l2, r50, iL4];
  D47():
    deopt 188 [];
  L18(dx1):
    m = ld m;
    check L90() else D24();
  L23():
    goto L22(0.0);
  L29():
    deriv19 = ld deriv;
    check L144() else D42();
  L34(r70):
    l3 = ld r;
    c41 = `is.object`(l3);
    if c41 then L152() else L153(r70, l3);
  L87():
    dr = tryDispatchBuiltin.1("[", y1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L89() else L88(dr);
  L88(y3):
    __ = ldf `[` in base;
    r43 = dyn __(y3, 1);
    goto L18(r43);
  L105():
    m4 = ld m;
    check L106() else D29();
  L113():
    dx34 = getTryDispatchBuiltinValue(dr10);
    goto L25(r50, dx34);
  L114():
    iL5 = force? iL4;
    ___ = ldf `[<-` in base;
    r57 = dyn ___(l2, r50, iL5);
    goto L25(r54, r57);
  L122():
    y4 = ld y0;
    check L123() else D34();
  L158():
    p5 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c42 = `is.object`(x26);
      if c42 then L1() else L2(x26);
    L0(dx73):
      return dx73;
    L1():
      dr24 = tryDispatchBuiltin.1("[", x26);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(x28):
      ini = ld ini;
      ini1 = force? ini;
      __10 = ldf `[` in base;
      r80 = dyn __10(x28, ini1);
      goto L0(r80);
    L3():
      dx72 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx72);
    };
    p6 = prom<V +>{
      i7 = ld i;
      i8 = force? i7;
      checkMissing(i8);
      c43 = `is.object`(i8);
      if c43 then L1() else L2(i8);
    L0(dx75):
      return dx75;
    L1():
      dr26 = tryDispatchBuiltin.1("[", i8);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(i10):
      ini2 = ld ini;
      ini3 = force? ini2;
      __11 = ldf `[` in base;
      r82 = dyn __11(i10, ini3);
      goto L0(r82);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx74);
    };
    r84 = dyn interp(p5, p6);
    check L159() else D48();
  D24():
    deopt 101 [dx1, m];
  D29():
    deopt 121 [m4];
  D34():
    deopt 145 [y4];
  D42():
    deopt 165 [deriv19];
  D48():
    deopt 191 [r84];
  L37(r76, dx71):
    st r = dx71;
    goto L38();
  L89():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L90():
    m1 = force? m;
    checkMissing(m1);
    c27 = `is.object`(m1);
    if c27 then L91() else L92(dx1, m1);
  L106():
    m5 = force? m4;
    checkMissing(m5);
    c31 = `is.object`(m5);
    if c31 then L107() else L108(m5);
  L123():
    y5 = force? y4;
    checkMissing(y5);
    c35 = `is.object`(y5);
    if c35 then L124() else L125(y5);
  L144():
    deriv20 = force? deriv19;
    checkMissing(deriv20);
    r71 = `==`(deriv20, 1.0);
    c39 = `as.logical`(r71);
    if c39 then L145() else L35();
  L152():
    dr22 = tryDispatchBuiltin.0("[<-", l3, r70);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L154() else L153(r70, dr22);
  L153(r74, l5):
    iR4 = ld iR;
    check L155() else D45();
  L159():
    l6 = ld r;
    c44 = `is.object`(l6);
    if c44 then L160() else L161(r84, l6);
  D45():
    deopt 177 [r74, l5, r70, iR4];
  L19(dx6, dx7):
    x9 = ld x;
    check L94() else D25();
  L24(dx33):
    goto L22(dx33);
  L30(dx37):
    m8 = ld m;
    check L128() else D36();
  L35():
    goto L34(0.0);
  L39(dx77):
    st r = dx77;
    r90 = ld r;
    check L164() else D50();
  L91():
    dr2 = tryDispatchBuiltin.1("[", m1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L93() else L92(dx1, dr2);
  L92(dx3, m3):
    __1 = ldf `[` in base;
    r44 = dyn __1(m3, 1);
    goto L19(dx3, r44);
  L107():
    dr8 = tryDispatchBuiltin.1("[", m5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L109() else L108(dr8);
  L108(m7):
    __4 = ldf `[` in base;
    r52 = dyn __4(m7, 1);
    goto L24(r52);
  L124():
    dr12 = tryDispatchBuiltin.1("[", y5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L126() else L125(dr12);
  L125(y7):
    n = ld n;
    check L127() else D35();
  L145():
    m12 = ld m;
    check L146() else D43();
  L154():
    dx70 = getTryDispatchBuiltinValue(dr22);
    goto L37(r70, dx70);
  L155():
    iR5 = force? iR4;
    ___1 = ldf `[<-` in base;
    r77 = dyn ___1(l5, r70, iR5);
    goto L37(r74, r77);
  L160():
    dr28 = tryDispatchBuiltin.0("[<-", l6, r84);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L162() else L161(r84, dr28);
  L161(r86, l8):
    ini4 = ld ini;
    check L163() else D49();
  D25():
    deopt 105 [dx6, dx7, x9];
  D35():
    deopt 147 [y7, n];
  D36():
    deopt 149 [dx37, m8];
  D43():
    deopt 169 [m12];
  D49():
    deopt 193 [r86, l8, r84, ini4];
  D50():
    deopt 197 [r90];
  L93():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx1, dx5);
  L94():
    x10 = force? x9;
    checkMissing(x10);
    c28 = `is.object`(x10);
    if c28 then L95() else L96(dx6, dx7, x10);
  L109():
    dx32 = getTryDispatchBuiltinValue(dr8);
    goto L24(dx32);
  L126():
    dx36 = getTryDispatchBuiltinValue(dr12);
    goto L30(dx36);
  L127():
    n1 = force? n;
    __5 = ldf `[` in base;
    r63 = dyn __5(y7, n1);
    goto L30(r63);
  L128():
    m9 = force? m8;
    checkMissing(m9);
    c36 = `is.object`(m9);
    if c36 then L129() else L130(dx37, m9);
  L146():
    m13 = force? m12;
    checkMissing(m13);
    c40 = `is.object`(m13);
    if c40 then L147() else L148(m13);
  L162():
    dx76 = getTryDispatchBuiltinValue(dr28);
    goto L39(dx76);
  L163():
    ini5 = force? ini4;
    ___2 = ldf `[<-` in base;
    r89 = dyn ___2(l8, r84, ini5);
    goto L39(r89);
  L164():
    r91 = force? r90;
    checkMissing(r91);
    popenv;
    return r91;
  L20(dx15, dx16, dx17):
    x13 = ld x0;
    check L99() else D27();
  L31(dx42, dx43):
    x17 = ld x;
    check L133() else D38();
  L36(dx69):
    goto L34(dx69);
  L95():
    dr4 = tryDispatchBuiltin.1("[", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L97() else L96(dx6, dx7, dr4);
  L96(dx10, dx11, x12):
    iL2 = ld iL;
    check L98() else D26();
  L129():
    dr14 = tryDispatchBuiltin.1("[", m9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L131() else L130(dx37, dr14);
  L130(dx39, m11):
    n2 = ld n;
    check L132() else D37();
  L147():
    dr20 = tryDispatchBuiltin.1("[", m13);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L149() else L148(dr20);
  L148(m15):
    n6 = ld n;
    check L150() else D44();
  D26():
    deopt 107 [dx10, dx11, x12, iL2];
  D27():
    deopt 109 [dx15, dx16, dx17, x13];
  D37():
    deopt 151 [dx39, m11, n2];
  D38():
    deopt 153 [dx42, dx43, x17];
  D44():
    deopt 171 [m15, n6];
  L97():
    dx14 = getTryDispatchBuiltinValue(dr4);
    goto L20(dx6, dx7, dx14);
  L98():
    iL3 = force? iL2;
    __2 = ldf `[` in base;
    r45 = dyn __2(x12, iL3);
    goto L20(dx10, dx11, r45);
  L99():
    x14 = force? x13;
    checkMissing(x14);
    c29 = `is.object`(x14);
    if c29 then L100() else L101(dx15, dx16, dx17, x14);
  L131():
    dx41 = getTryDispatchBuiltinValue(dr14);
    goto L31(dx37, dx41);
  L132():
    n3 = force? n2;
    __6 = ldf `[` in base;
    r64 = dyn __6(m11, n3);
    goto L31(dx39, r64);
  L133():
    x18 = force? x17;
    checkMissing(x18);
    c37 = `is.object`(x18);
    if c37 then L134() else L135(dx42, dx43, x18);
  L149():
    dx68 = getTryDispatchBuiltinValue(dr20);
    goto L36(dx68);
  L150():
    n7 = force? n6;
    __9 = ldf `[` in base;
    r72 = dyn __9(m15, n7);
    goto L36(r72);
  L21(dx28, dx29, dx30, dx31):
    r47 = `-`(dx30, dx31);
    r48 = `*`(dx29, r47);
    r49 = `+`(dx28, r48);
    goto L22(r49);
  L32(dx51, dx52, dx53):
    x21 = ld x0;
    check L138() else D40();
  L100():
    dr6 = tryDispatchBuiltin.1("[", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L102() else L101(dx15, dx16, dx17, dr6);
  L101(dx21, dx22, dx23, x16):
    __3 = ldf `[` in base;
    r46 = dyn __3(x16, 1);
    goto L21(dx21, dx22, dx23, r46);
  L134():
    dr16 = tryDispatchBuiltin.1("[", x18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L136() else L135(dx42, dx43, dr16);
  L135(dx46, dx47, x20):
    iR2 = ld iR;
    check L137() else D39();
  D39():
    deopt 155 [dx46, dx47, x20, iR2];
  D40():
    deopt 157 [dx51, dx52, dx53, x21];
  L102():
    dx27 = getTryDispatchBuiltinValue(dr6);
    goto L21(dx15, dx16, dx17, dx27);
  L136():
    dx50 = getTryDispatchBuiltinValue(dr16);
    goto L32(dx42, dx43, dx50);
  L137():
    iR3 = force? iR2;
    __7 = ldf `[` in base;
    r65 = dyn __7(x20, iR3);
    goto L32(dx46, dx47, r65);
  L138():
    x22 = force? x21;
    checkMissing(x22);
    c38 = `is.object`(x22);
    if c38 then L139() else L140(dx51, dx52, dx53, x22);
  L33(dx64, dx65, dx66, dx67):
    r67 = `-`(dx66, dx67);
    r68 = `*`(dx65, r67);
    r69 = `+`(dx64, r68);
    goto L34(r69);
  L139():
    dr18 = tryDispatchBuiltin.1("[", x22);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L141() else L140(dx51, dx52, dx53, dr18);
  L140(dx57, dx58, dx59, x24):
    n4 = ld n;
    check L142() else D41();
  D41():
    deopt 159 [dx57, dx58, dx59, x24, n4];
  L141():
    dx63 = getTryDispatchBuiltinValue(dr18);
    goto L33(dx51, dx52, dx53, dx63);
  L142():
    n5 = force? n4;
    __8 = ldf `[` in base;
    r66 = dyn __8(x24, n5);
    goto L33(dx57, dx58, dx59, r66);
  }
}
fun inner3624283997(x, i) {
  (reg x:*, reg i:*) -+> V { var x:*, var i:*, reg dx:*, reg dx1:V, reg c:L, reg dx3:V, reg dr:V, reg dc:L, reg dx4:V, reg dx5:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg x1:*, reg x2:V, reg x3:*, reg x4:V, reg c1:L, reg x7:V, reg x8:V, reg dr2:V, reg dc1:L, reg dx6:V, reg x10:V, reg dx7:V, reg i3:*, reg i4:V, reg __1:cls, reg r1:V, reg r2:V, reg h:*, reg h1:V, reg r3:V, reg t:*, reg t1:V, reg r4:V, reg t2:*, reg t3:V, reg t4:*, reg t5:V, reg r5:V, reg t6:*, reg t7:V, reg r6:V, reg r7:V, reg r8:V, reg h2:*, reg h3:V, reg r9:V, reg t8:*, reg t9:V, reg t10:*, reg t11:V, reg r10:V, reg tt1:*, reg tt2:V, reg t12:*, reg t13:V, reg r11:V, reg tt3:*, reg tt4:V, reg t14:*, reg t15:V, reg r12:V, reg y0:*, reg y1:V, reg c2:L, reg y3:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg i5:*, reg i6:V, reg __2:cls, reg r13:V, reg h4:*, reg h5:V, reg r14:V, reg h6:*, reg h7:V, reg m:*, reg m1:V, reg c3:L, reg r16:V, reg h9:V, reg m3:V, reg dr6:V, reg dc3:L, reg dx10:V, reg r18:V, reg h11:V, reg dx11:V, reg i7:*, reg i8:V, reg __3:cls, reg r19:V, reg r20:V, reg h12:*, reg h13:V, reg r21:V, reg r22:V, reg y4:*, reg y5:V, reg c4:L, reg r24:V, reg y7:V, reg dr8:V, reg dc4:L, reg dx12:V, reg r26:V, reg dx13:V, reg i9:*, reg i10:V, reg r27:V, reg __4:cls, reg r28:V, reg h14:*, reg h15:V, reg r29:V, reg r30:V, reg h16:*, reg h17:V, reg m4:*, reg m5:V, reg c5:L, reg r32:V, reg h19:V, reg m7:V, reg dr10:V, reg dc5:L, reg dx14:V, reg r34:V, reg h21:V, reg dx15:V, reg i11:*, reg i12:V, reg r35:V, reg __5:cls, reg r36:V, reg r37:V, reg h22:*, reg h23:V, reg r38:V, reg r39:V |
    mkenv;
    st x = x;
    st i = i;
    dx = ld dx;
    check L6() else D0();
  D0():
    deopt 0 [dx];
  L6():
    dx1 = force? dx;
    checkMissing(dx1);
    c = `is.object`(dx1);
    if c then L7() else L8(dx1);
  L0(dx5):
    st h = dx5;
    x1 = ld x;
    check L11() else D2();
  L7():
    dr = tryDispatchBuiltin.1("[", dx1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(dx3):
    i1 = ld i;
    check L10() else D1();
  D1():
    deopt 2 [dx3, i1];
  D2():
    deopt 6 [x1];
  L9():
    dx4 = getTryDispatchBuiltinValue(dr);
    goto L0(dx4);
  L10():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(dx3, i2);
    goto L0(r);
  L11():
    x2 = force? x1;
    checkMissing(x2);
    x3 = ld x0;
    check L12() else D3();
  D3():
    deopt 7 [x2, x3];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L13() else L14(x2, x4);
  L1(x10, dx7):
    r2 = `-`(x10, dx7);
    h = ld h;
    check L17() else D5();
  L13():
    dr2 = tryDispatchBuiltin.1("[", x4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(x2, dr2);
  L14(x7, x8):
    i3 = ld i;
    check L16() else D4();
  D4():
    deopt 9 [x7, x8, i3];
  D5():
    deopt 12 [r2, h];
  L15():
    dx6 = getTryDispatchBuiltinValue(dr2);
    goto L1(x2, dx6);
  L16():
    i4 = force? i3;
    __1 = ldf `[` in base;
    r1 = dyn __1(x8, i4);
    goto L1(x7, r1);
  L17():
    h1 = force? h;
    checkMissing(h1);
    r3 = `/`(r2, h1);
    st t = r3;
    t = ld t;
    check L18() else D6();
  D6():
    deopt 16 [t];
  L18():
    t1 = force? t;
    checkMissing(t1);
    r4 = `-`(t1, 1.0);
    st t1 = r4;
    t2 = ld t;
    check L19() else D7();
  D7():
    deopt 21 [t2];
  L19():
    t3 = force? t2;
    checkMissing(t3);
    t4 = ld t;
    check L20() else D8();
  D8():
    deopt 22 [t3, t4];
  L20():
    t5 = force? t4;
    checkMissing(t5);
    r5 = `*`(t3, t5);
    t6 = ld t;
    check L21() else D9();
  D9():
    deopt 26 [r5, 3.0, 2.0, t6];
  L21():
    t7 = force? t6;
    checkMissing(t7);
    r6 = `*`(2.0, t7);
    r7 = `-`(3.0, r6);
    r8 = `*`(r5, r7);
    st h01 = r8;
    h2 = ld h01;
    check L22() else D10();
  D10():
    deopt 33 [1.0, h2];
  L22():
    h3 = force? h2;
    checkMissing(h3);
    r9 = `-`(1.0, h3);
    st h00 = r9;
    t8 = ld t;
    check L23() else D11();
  D11():
    deopt 37 [t8];
  L23():
    t9 = force? t8;
    checkMissing(t9);
    t10 = ld t1;
    check L24() else D12();
  D12():
    deopt 38 [t9, t10];
  L24():
    t11 = force? t10;
    checkMissing(t11);
    r10 = `*`(t9, t11);
    st tt1 = r10;
    tt1 = ld tt1;
    check L25() else D13();
  D13():
    deopt 42 [tt1];
  L25():
    tt2 = force? tt1;
    checkMissing(tt2);
    t12 = ld t1;
    check L26() else D14();
  D14():
    deopt 43 [tt2, t12];
  L26():
    t13 = force? t12;
    checkMissing(t13);
    r11 = `*`(tt2, t13);
    st h10 = r11;
    tt3 = ld tt1;
    check L27() else D15();
  D15():
    deopt 47 [tt3];
  L27():
    tt4 = force? tt3;
    checkMissing(tt4);
    t14 = ld t;
    check L28() else D16();
  D16():
    deopt 48 [tt4, t14];
  L28():
    t15 = force? t14;
    checkMissing(t15);
    r12 = `*`(tt4, t15);
    st h11 = r12;
    y0 = ld y0;
    check L29() else D17();
  D17():
    deopt 52 [y0];
  L29():
    y1 = force? y0;
    checkMissing(y1);
    c2 = `is.object`(y1);
    if c2 then L30() else L31(y1);
  L2(dx9):
    h4 = ld h00;
    check L34() else D19();
  L30():
    dr4 = tryDispatchBuiltin.1("[", y1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(dr4);
  L31(y3):
    i5 = ld i;
    check L33() else D18();
  D18():
    deopt 54 [y3, i5];
  D19():
    deopt 56 [dx9, h4];
  L32():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx8);
  L33():
    i6 = force? i5;
    __2 = ldf `[` in base;
    r13 = dyn __2(y3, i6);
    goto L2(r13);
  L34():
    h5 = force? h4;
    checkMissing(h5);
    r14 = `*`(dx9, h5);
    h6 = ld h;
    check L35() else D20();
  D20():
    deopt 58 [r14, h6];
  L35():
    h7 = force? h6;
    checkMissing(h7);
    m = ld m;
    check L36() else D21();
  D21():
    deopt 59 [r14, h7, m];
  L36():
    m1 = force? m;
    checkMissing(m1);
    c3 = `is.object`(m1);
    if c3 then L37() else L38(r14, h7, m1);
  L3(r18, h11, dx11):
    r20 = `*`(h11, dx11);
    h12 = ld h10;
    check L41() else D23();
  L37():
    dr6 = tryDispatchBuiltin.1("[", m1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L39() else L38(r14, h7, dr6);
  L38(r16, h9, m3):
    i7 = ld i;
    check L40() else D22();
  D22():
    deopt 61 [r16, h9, m3, i7];
  D23():
    deopt 64 [r18, r20, h12];
  L39():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L3(r14, h7, dx10);
  L40():
    i8 = force? i7;
    __3 = ldf `[` in base;
    r19 = dyn __3(m3, i8);
    goto L3(r16, h9, r19);
  L41():
    h13 = force? h12;
    checkMissing(h13);
    r21 = `*`(r20, h13);
    r22 = `+`(r18, r21);
    y4 = ld y0;
    check L42() else D24();
  D24():
    deopt 67 [r22, y4];
  L42():
    y5 = force? y4;
    checkMissing(y5);
    c4 = `is.object`(y5);
    if c4 then L43() else L44(r22, y5);
  L4(r26, dx13):
    h14 = ld h01;
    check L47() else D26();
  L43():
    dr8 = tryDispatchBuiltin.1("[", y5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L45() else L44(r22, dr8);
  L44(r24, y7):
    i9 = ld i;
    check L46() else D25();
  D25():
    deopt 69 [r24, y7, i9];
  D26():
    deopt 73 [r26, dx13, h14];
  L45():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L4(r22, dx12);
  L46():
    i10 = force? i9;
    checkMissing(i10);
    r27 = `+`(i10, 1.0);
    __4 = ldf `[` in base;
    r28 = dyn __4(y7, r27);
    goto L4(r24, r28);
  L47():
    h15 = force? h14;
    checkMissing(h15);
    r29 = `*`(dx13, h15);
    r30 = `+`(r26, r29);
    h16 = ld h;
    check L48() else D27();
  D27():
    deopt 76 [r30, h16];
  L48():
    h17 = force? h16;
    checkMissing(h17);
    m4 = ld m;
    check L49() else D28();
  D28():
    deopt 77 [r30, h17, m4];
  L49():
    m5 = force? m4;
    checkMissing(m5);
    c5 = `is.object`(m5);
    if c5 then L50() else L51(r30, h17, m5);
  L5(r34, h21, dx15):
    r37 = `*`(h21, dx15);
    h22 = ld h11;
    check L54() else D30();
  L50():
    dr10 = tryDispatchBuiltin.1("[", m5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L52() else L51(r30, h17, dr10);
  L51(r32, h19, m7):
    i11 = ld i;
    check L53() else D29();
  D29():
    deopt 79 [r32, h19, m7, i11];
  D30():
    deopt 84 [r34, r37, h22];
  L52():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L5(r30, h17, dx14);
  L53():
    i12 = force? i11;
    checkMissing(i12);
    r35 = `+`(i12, 1.0);
    __5 = ldf `[` in base;
    r36 = dyn __5(m7, r35);
    goto L5(r32, h19, r36);
  L54():
    h23 = force? h22;
    checkMissing(h23);
    r38 = `*`(r37, h23);
    r39 = `+`(r34, r38);
    popenv;
    return r39;
  }
}