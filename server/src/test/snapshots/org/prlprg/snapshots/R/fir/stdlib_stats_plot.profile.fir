fun main() {
  () -+> V { reg r:cls, reg nls:cls, reg __:cls, reg r1:V, reg p:p(V +), reg BOD:*, reg BOD1:V, reg p1:p(V +), reg r4:V, reg profile:cls, reg fm1:*, reg fm2:V, reg p2:p(V +), reg r6:V, reg ___:cls, reg r7:V, reg r8:cls, reg pr1:*, reg pr2:V, reg p3:p(V +), reg r10:V, reg pairs:cls, reg pr3:*, reg pr4:V, reg p4:p(V +), reg r12:V, reg r13:V, reg r14:V, reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:R, reg r22:R, reg r23:V, reg x:*, reg x1:V, reg r24:V, reg r25:V, reg r26:V, reg r27:V, reg rnorm:cls, reg x2:*, reg x3:V, reg p5:p(V +), reg r29:V, reg r30:V, reg r31:V, reg nls1:cls, reg __1:cls, reg r32:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r34:V, reg r35:V, reg list:cls, reg r36:V, reg p7:p(V +), reg r38:V, reg pairs1:cls, reg profile1:cls, reg nlmod:*, reg nlmod1:V, reg p8:p(V +), reg r40:V, reg p9:p(V +), reg r42:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r43:V, reg r44:V, reg c:cls, reg r45:V, reg gl:cls, reg r46:V, reg gl1:cls, reg r47:V, reg glm:cls, reg __2:cls, reg r48:V, reg p10:p(V +), reg poisson:cls, reg r50:V, reg p11:p(V +), reg r52:V, reg profile2:cls, reg glm_D93i:*, reg glm_D93i1:V, reg p12:p(V +), reg r54:V, reg profile3:cls, reg glm_D93i2:*, reg glm_D93i3:V, reg p13:p(V +), reg p14:p(V +), reg r57:V, reg plot:cls, reg pr5:*, reg pr6:V, reg p15:p(V +), reg r59:V, reg plot1:cls, reg pr7:*, reg pr8:V, reg p16:p(V +), reg r61:V, reg pairs2:cls, reg pr9:*, reg pr10:V, reg p17:p(V +), reg r63:V, reg pairs3:cls, reg pr11:*, reg pr12:V, reg p18:p(V +), reg r65:V |
    mkenv;
    r = clos inner2044426018;
    st `plot.profile` = r;
    nls = ldf nls;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym demand>, <lang SSasympOrig(Time, A, lrc)>);
      return r1;
    };
    p1 = prom<V +>{
      BOD = ld BOD;
      BOD1 = force? BOD;
      checkMissing(BOD1);
      return BOD1;
    };
    r4 = dyn nls[, data](p, p1);
    check L3() else D1();
  D1():
    deopt 8 [r4];
  L3():
    st fm1 = r4;
    profile = ldf profile;
    check L4() else D2();
  D2():
    deopt 11 [];
  L4():
    p2 = prom<V +>{
      fm1 = ld fm1;
      fm2 = force? fm1;
      checkMissing(fm2);
      return fm2;
    };
    r6 = dyn profile[, alphamax](p2, 0.1);
    check L5() else D3();
  D3():
    deopt 15 [r6];
  L5():
    st pr1 = r6;
    ___ = ldf `:::`;
    check L6() else D4();
  D4():
    deopt 18 [];
  L6():
    r7 = dyn ___("stats", "plot.profile");
    check L7() else D5();
  D5():
    deopt 21 [r7];
  L7():
    checkFun.0(r7);
    r8 = r7 as cls;
    p3 = prom<V +>{
      pr1 = ld pr1;
      pr2 = force? pr1;
      checkMissing(pr2);
      return pr2;
    };
    r10 = dyn r8(p3);
    check L8() else D6();
  D6():
    deopt 24 [r10];
  L8():
    pairs = ldf pairs;
    check L9() else D7();
  D7():
    deopt 26 [];
  L9():
    p4 = prom<V +>{
      pr3 = ld pr1;
      pr4 = force? pr3;
      checkMissing(pr4);
      return pr4;
    };
    r12 = dyn pairs(p4);
    check L10() else D8();
  D8():
    deopt 28 [r12];
  L10():
    r13 = `:`(1.0, 100.0);
    r14 = `-`(<missing>, r13);
    r15 = `/`(r14, 10.0);
    st x = r15;
    sym = ldf exp;
    base = ldf exp in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r21, r22, r23):
    r26 = `*`(r22, r23);
    r27 = `+`(r21, r26);
    rnorm = ldf rnorm;
    check L14() else D10();
  L11():
    x = ld x;
    check L13() else D9();
  L12():
    r20 = dyn base(<lang `/`(x, 2.0)>);
    goto L0(100.0, 10.0, r20);
  D9():
    deopt 40 [100.0, 10.0, x];
  D10():
    deopt 47 [r27];
  L13():
    x1 = force? x;
    checkMissing(x1);
    r24 = `/`(x1, 2.0);
    r25 = exp(r24);
    goto L0(100.0, 10.0, r25);
  L14():
    p5 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r29 = dyn rnorm(p5);
    check L15() else D11();
  D11():
    deopt 49 [r27, r29];
  L15():
    r30 = `/`(r29, 10.0);
    r31 = `+`(r27, r30);
    st y = r31;
    nls1 = ldf nls;
    check L16() else D12();
  D12():
    deopt 55 [];
  L16():
    p6 = prom<V +>{
      __1 = ldf `~` in base;
      r32 = dyn __1(<sym y>, <lang `+`(Const, `*`(A, exp(`*`(B, x))))>);
      return r32;
    };
    p7 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      list = ldf list in base;
      r36 = dyn list(100.0, 10.0, 1.0);
      goto L0(r36);
    L2():
      r34 = dyn base1[Const, A, B](100.0, 10.0, 1.0);
      goto L0(r34);
    };
    r38 = dyn nls1[, start](p6, p7);
    check L17() else D13();
  D13():
    deopt 59 [r38];
  L17():
    st nlmod = r38;
    pairs1 = ldf pairs;
    check L18() else D14();
  D14():
    deopt 62 [];
  L18():
    p9 = prom<V +>{
      profile1 = ldf profile;
      p8 = prom<V +>{
        nlmod = ld nlmod;
        nlmod1 = force? nlmod;
        checkMissing(nlmod1);
        return nlmod1;
      };
      r40 = dyn profile1(p8);
      return r40;
    };
    r42 = dyn pairs1(p9);
    check L19() else D15();
  D15():
    deopt 64 [r42];
  L19():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L1(r44):
    st counts = r44;
    gl = ldf gl;
    check L23() else D17();
  L20():
    c = ldf c in base;
    r45 = dyn c(18.0, 17.0, 15.0, 20.0, 10.0, 20.0, 25.0, 13.0, 12.0);
    check L22() else D16();
  L21():
    r43 = dyn base2(18.0, 17.0, 15.0, 20.0, 10.0, 20.0, 25.0, 13.0, 12.0);
    goto L1(r43);
  D16():
    deopt 77 [r45];
  D17():
    deopt 80 [];
  L22():
    goto L1(r45);
  L23():
    r46 = dyn gl(3.0, 1.0, 9.0);
    check L24() else D18();
  D18():
    deopt 84 [r46];
  L24():
    st outcome = r46;
    gl1 = ldf gl;
    check L25() else D19();
  D19():
    deopt 87 [];
  L25():
    r47 = dyn gl1(3.0, 3.0);
    check L26() else D20();
  D20():
    deopt 90 [r47];
  L26():
    st treatment = r47;
    glm = ldf glm;
    check L27() else D21();
  D21():
    deopt 93 [];
  L27():
    p10 = prom<V +>{
      __2 = ldf `~` in base;
      r48 = dyn __2(<sym counts>, <lang `*`(outcome, treatment)>);
      return r48;
    };
    p11 = prom<V +>{
      poisson = ldf poisson;
      r50 = dyn poisson();
      return r50;
    };
    r52 = dyn glm[, family](p10, p11);
    check L28() else D22();
  D22():
    deopt 97 [r52];
  L28():
    st `glm.D93i` = r52;
    profile2 = ldf profile;
    check L29() else D23();
  D23():
    deopt 100 [];
  L29():
    p12 = prom<V +>{
      glm_D93i = ld `glm.D93i`;
      glm_D93i1 = force? glm_D93i;
      checkMissing(glm_D93i1);
      return glm_D93i1;
    };
    r54 = dyn profile2(p12);
    check L30() else D24();
  D24():
    deopt 102 [r54];
  L30():
    st pr1 = r54;
    profile3 = ldf profile;
    check L31() else D25();
  D25():
    deopt 105 [];
  L31():
    p13 = prom<V +>{
      glm_D93i2 = ld `glm.D93i`;
      glm_D93i3 = force? glm_D93i2;
      checkMissing(glm_D93i3);
      return glm_D93i3;
    };
    p14 = prom<V +>{
      return <int 6, 7, 8, 9>;
    };
    r57 = dyn profile3[, which](p13, p14);
    check L32() else D26();
  D26():
    deopt 109 [r57];
  L32():
    st pr2 = r57;
    plot = ldf plot;
    check L33() else D27();
  D27():
    deopt 112 [];
  L33():
    p15 = prom<V +>{
      pr5 = ld pr1;
      pr6 = force? pr5;
      checkMissing(pr6);
      return pr6;
    };
    r59 = dyn plot(p15);
    check L34() else D28();
  D28():
    deopt 114 [r59];
  L34():
    plot1 = ldf plot;
    check L35() else D29();
  D29():
    deopt 116 [];
  L35():
    p16 = prom<V +>{
      pr7 = ld pr2;
      pr8 = force? pr7;
      checkMissing(pr8);
      return pr8;
    };
    r61 = dyn plot1(p16);
    check L36() else D30();
  D30():
    deopt 118 [r61];
  L36():
    pairs2 = ldf pairs;
    check L37() else D31();
  D31():
    deopt 120 [];
  L37():
    p17 = prom<V +>{
      pr9 = ld pr1;
      pr10 = force? pr9;
      checkMissing(pr10);
      return pr10;
    };
    r63 = dyn pairs2(p17);
    check L38() else D32();
  D32():
    deopt 122 [r63];
  L38():
    pairs3 = ldf pairs;
    check L39() else D33();
  D33():
    deopt 124 [];
  L39():
    p18 = prom<V +>{
      pr11 = ld pr2;
      pr12 = force? pr11;
      checkMissing(pr12);
      return pr12;
    };
    r65 = dyn pairs3(p18);
    check L40() else D34();
  D34():
    deopt 126 [r65];
  L40():
    popenv;
    return r65;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg is_null:*, reg is_null1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg nulls:*, reg nulls1:V, reg all:cls, reg r5:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nulls2:*, reg nulls3:V, reg r8:V, reg __:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg x7:*, reg x8:V, reg names:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg nm:*, reg nm1:V, reg length:cls, reg r19:V, reg r20:V, reg r21:V, reg par:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg nr:*, reg nr1:V, reg nr2:*, reg nr3:V, reg c2:cls, reg r24:V, reg p2:p(V +), reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg on_exit:cls, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg x9:*, reg x10:V, reg names1:cls, reg r32:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x11:V, reg x12:*, reg x13:V, reg c4:L, reg i6:I, reg x15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg nm2:*, reg nm3:V, reg __1:cls, reg r33:V, reg c5:L, reg i10:I, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg i12:I, reg dx7:V, reg __2:cls, reg r34:V, reg x16:*, reg x17:V, reg c6:L, reg i14:I, reg x19:V, reg dr6:V, reg dc3:L, reg dx8:V, reg i16:I, reg dx9:V, reg nm4:*, reg nm5:V, reg __3:cls, reg r35:V, reg c7:L, reg i18:I, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg i20:I, reg dx13:V, reg __4:cls, reg r36:V, reg c8:L, reg i22:I, reg dx15:V, reg dr10:V, reg dc5:L, reg dx16:V, reg i24:I, reg dx17:V, reg nm6:*, reg nm7:V, reg __5:cls, reg r37:V, reg dev_hold:cls, reg r38:V, reg plot:cls, reg parval:*, reg parval1:V, reg p3:p(V +), reg tau:*, reg tau1:V, reg p4:p(V +), reg nm8:*, reg nm9:V, reg p5:p(V +), reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg i27:I, reg r44:V, reg tau2:*, reg tau3:V, reg r45:V, reg sum:cls, reg r46:V, reg r47:V, reg c9:L, reg points:cls, reg parval2:*, reg parval3:V, reg c10:L, reg parval5:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg tau4:*, reg tau5:V, reg r48:V, reg __6:cls, reg r49:V, reg p6:p(V +), reg r51:V, reg i30:I, reg spline:cls, reg parval6:*, reg parval7:V, reg p7:p(V +), reg tau6:*, reg tau7:V, reg p8:p(V +), reg r55:V, reg lines:cls, reg splineVals:*, reg splineVals1:V, reg c11:L, reg splineVals3:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r56:V, reg p9:p(V +), reg splineVals4:*, reg splineVals5:V, reg c12:L, reg splineVals7:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r58:V, reg p10:p(V +), reg r60:V, reg dev_flush:cls, reg r61:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sapply = ldf sapply;
    check L20() else D0();
  D0():
    deopt 1 [];
  L20():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r2 = dyn sapply(p, p1);
    check L21() else D1();
  D1():
    deopt 4 [r2];
  L21():
    st nulls = r2;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L0(r4):
    c = `as.logical`(r4);
    if c then L26() else L1();
  L22():
    nulls = ld nulls;
    check L24() else D2();
  L23():
    r3 = dyn base(<sym nulls>);
    goto L0(r3);
  D2():
    deopt 8 [nulls];
  L1():
    x3 = ld x;
    check L29() else D4();
  L24():
    nulls1 = force? nulls;
    checkMissing(nulls1);
    all = ldf all in base;
    r5 = dyn all(nulls1);
    check L25() else D3();
  L26():
    popenv;
    return NULL;
  D3():
    deopt 11 [r5];
  D4():
    deopt 17 [x3];
  L25():
    goto L0(r5);
  L29():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L30() else L31(x4);
  L3(dx1):
    st x = dx1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L30():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(x6):
    nulls2 = ld nulls;
    check L33() else D5();
  D5():
    deopt 19 [x6, nulls2];
  L4(r11):
    st nm = r11;
    sym2 = ldf ceiling;
    base2 = ldf ceiling in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L33():
    nulls3 = force? nulls2;
    checkMissing(nulls3);
    r8 = `!`(nulls3);
    __ = ldf `[` in base;
    r9 = dyn __(x6, r8);
    goto L3(r9);
  L34():
    x7 = ld x;
    check L36() else D6();
  L35():
    r10 = dyn base1(<sym x>);
    goto L4(r10);
  D6():
    deopt 26 [x7];
  L5(r14):
    st nr = r14;
    par = ldf par;
    check L46() else D10();
  L36():
    x8 = force? x7;
    checkMissing(x8);
    names = ldf names in base;
    r12 = dyn names(x8);
    check L37() else D7();
  L38():
    sym3 = ldf sqrt;
    base3 = ldf sqrt in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L39():
    r13 = dyn base2(<lang sqrt(length(nm))>);
    goto L5(r13);
  D7():
    deopt 29 [r12];
  D10():
    deopt 43 [];
  L6(r16):
    r21 = ceiling(r16);
    goto L5(r21);
  L37():
    goto L4(r12);
  L40():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L41():
    r15 = dyn base3(<lang length(nm)>);
    goto L6(r15);
  L46():
    p2 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      nr2 = ld nr;
      nr3 = force? nr2;
      checkMissing(nr3);
      c2 = ldf c in base;
      r24 = dyn c2(nr1, nr3);
      goto L0(r24);
    L2():
      r22 = dyn base5(<sym nr>, <sym nr>);
      goto L0(r22);
    };
    r26 = dyn par[mfrow](p2);
    check L47() else D11();
  D11():
    deopt 46 [r26];
  L7(r18):
    r20 = sqrt(r18);
    goto L6(r20);
  L42():
    nm = ld nm;
    check L44() else D8();
  L43():
    r17 = dyn base4(<sym nm>);
    goto L7(r17);
  L47():
    st oldpar = r26;
    sym6 = ldf `on.exit`;
    base6 = ldf `on.exit` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  D8():
    deopt 35 [nm];
  L8():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L50() else L51();
  L44():
    nm1 = force? nm;
    checkMissing(nm1);
    length = ldf length in base;
    r19 = dyn length(nm1);
    check L45() else D9();
  L48():
    on_exit = ldf `on.exit` in base;
    r29 = dyn on_exit(<lang par(oldpar)>);
    goto L8();
  L49():
    r27 = dyn base6(<lang par(oldpar)>);
    goto L8();
  D9():
    deopt 38 [r19];
  L9(r31):
    s = toForSeq(r31);
    l = length(s);
    i = 0;
    goto L10(i);
  L45():
    goto L7(r19);
  L50():
    x9 = ld x;
    check L52() else D12();
  L51():
    r30 = dyn base7(<sym x>);
    goto L9(r30);
  D12():
    deopt 53 [x9];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L54() else L19();
  L52():
    x10 = force? x9;
    checkMissing(x10);
    names1 = ldf names in base;
    r32 = dyn names1(x10);
    check L53() else D13();
  D13():
    deopt 56 [r32];
  L19():
    x11 = `[[`(s, i2, NULL, TRUE);
    st nm = x11;
    x12 = ld x;
    check L55() else D14();
  L53():
    goto L9(r32);
  L54():
    invisible.0();
    popenv;
    return i2;
  D14():
    deopt 57 [i2, x12];
  L55():
    x13 = force? x12;
    checkMissing(x13);
    c4 = `is.object`(x13);
    if c4 then L56() else L57(i2, x13);
  L11(i8, dx3):
    c5 = `is.object`(dx3);
    if c5 then L60() else L61(i8, dx3);
  L56():
    dr2 = tryDispatchBuiltin.1("[[", x13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(i2, dr2);
  L57(i6, x15):
    nm2 = ld nm;
    check L59() else D15();
  D15():
    deopt 59 [i6, x15, nm2];
  L12(i12, dx7):
    st tau = dx7;
    x16 = ld x;
    check L63() else D16();
  L58():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(i2, dx2);
  L59():
    nm3 = force? nm2;
    __1 = ldf `[[` in base;
    r33 = dyn __1(x15, nm3);
    goto L11(i6, r33);
  L60():
    dr4 = tryDispatchBuiltin.1("[[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(i8, dr4);
  L61(i10, dx5):
    __2 = ldf `[[` in base;
    r34 = dyn __2(dx5, 1);
    goto L12(i10, r34);
  D16():
    deopt 66 [i12, x16];
  L62():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L12(i8, dx6);
  L63():
    x17 = force? x16;
    checkMissing(x17);
    c6 = `is.object`(x17);
    if c6 then L64() else L65(i12, x17);
  L13(i16, dx9):
    c7 = `is.object`(dx9);
    if c7 then L68() else L69(i16, dx9);
  L64():
    dr6 = tryDispatchBuiltin.1("[[", x17);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(i12, dr6);
  L65(i14, x19):
    nm4 = ld nm;
    check L67() else D17();
  D17():
    deopt 68 [i14, x19, nm4];
  L14(i20, dx13):
    c8 = `is.object`(dx13);
    if c8 then L71() else L72(i20, dx13);
  L66():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L13(i12, dx8);
  L67():
    nm5 = force? nm4;
    __3 = ldf `[[` in base;
    r35 = dyn __3(x19, nm5);
    goto L13(i14, r35);
  L68():
    dr8 = tryDispatchBuiltin.1("[[", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L70() else L69(i16, dr8);
  L69(i18, dx11):
    __4 = ldf `[[` in base;
    r36 = dyn __4(dx11, 2);
    goto L14(i18, r36);
  L15(i24, dx17):
    st parval = dx17;
    dev_hold = ldf `dev.hold`;
    check L75() else D19();
  L70():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L14(i16, dx12);
  L71():
    dr10 = tryDispatchBuiltin.1("[", dx13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L73() else L72(i20, dr10);
  L72(i22, dx15):
    nm6 = ld nm;
    check L74() else D18();
  D18():
    deopt 75 [i22, dx15, nm6];
  D19():
    deopt 81 [i24];
  L73():
    dx16 = getTryDispatchBuiltinValue(dr10);
    goto L15(i20, dx16);
  L74():
    nm7 = force? nm6;
    __5 = ldf `[` in base;
    r37 = dyn __5(dx13, <missing>, nm7);
    goto L15(i22, r37);
  L75():
    r38 = dyn dev_hold();
    check L76() else D20();
  D20():
    deopt 82 [i24, r38];
  L76():
    plot = ldf plot;
    check L77() else D21();
  D21():
    deopt 84 [i24];
  L77():
    p3 = prom<V +>{
      parval = ld parval;
      parval1 = force? parval;
      checkMissing(parval1);
      return parval1;
    };
    p4 = prom<V +>{
      tau = ld tau;
      tau1 = force? tau;
      checkMissing(tau1);
      return tau1;
    };
    p5 = prom<V +>{
      nm8 = ld nm;
      nm9 = force? nm8;
      checkMissing(nm9);
      return nm9;
    };
    r42 = dyn plot[, , xlab, ylab, type](p3, p4, p5, "tau", "n");
    check L78() else D22();
  D22():
    deopt 93 [i24, r42];
  L78():
    sym8 = ldf sum;
    base8 = ldf sum in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L79() else L80();
  L16(i27, r44):
    r47 = `==`(r44, 1.0);
    c9 = `as.logical`(r47);
    if c9 then L83() else L17();
  L79():
    tau2 = ld tau;
    check L81() else D23();
  L80():
    r43 = dyn base8(<lang `==`(tau, 0.0)>);
    goto L16(i24, r43);
  D23():
    deopt 96 [i24, tau2];
  L17():
    goto L18(i27);
  L18(i30):
    spline = ldf spline;
    check L87() else D27();
  L81():
    tau3 = force? tau2;
    checkMissing(tau3);
    r45 = `==`(tau3, 0.0);
    sum = ldf sum in base;
    r46 = dyn sum(r45);
    check L82() else D24();
  L83():
    points = ldf points;
    check L84() else D25();
  D24():
    deopt 101 [i24, r46];
  D25():
    deopt 105 [i27];
  D27():
    deopt 114 [i30];
  L82():
    goto L16(i24, r46);
  L84():
    p6 = prom<V +>{
      parval2 = ld parval;
      parval3 = force? parval2;
      checkMissing(parval3);
      c10 = `is.object`(parval3);
      if c10 then L1() else L2(parval3);
    L0(dx19):
      return dx19;
    L1():
      dr12 = tryDispatchBuiltin.1("[", parval3);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(parval5):
      tau4 = ld tau;
      tau5 = force? tau4;
      checkMissing(tau5);
      r48 = `==`(tau5, 0.0);
      __6 = ldf `[` in base;
      r49 = dyn __6(parval5, r48);
      goto L0(r49);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    };
    r51 = dyn points[, , pch](p6, 0.0, 3.0);
    check L85() else D26();
  L87():
    p7 = prom<V +>{
      parval6 = ld parval;
      parval7 = force? parval6;
      checkMissing(parval7);
      return parval7;
    };
    p8 = prom<V +>{
      tau6 = ld tau;
      tau7 = force? tau6;
      checkMissing(tau7);
      return tau7;
    };
    r55 = dyn spline(p7, p8);
    check L88() else D28();
  D26():
    deopt 110 [i27, r51];
  D28():
    deopt 117 [i30, r55];
  L85():
    goto L18(i27);
  L88():
    st splineVals = r55;
    lines = ldf lines;
    check L89() else D29();
  D29():
    deopt 120 [i30];
  L89():
    p9 = prom<V +>{
      splineVals = ld splineVals;
      splineVals1 = force? splineVals;
      checkMissing(splineVals1);
      c11 = `is.object`(splineVals1);
      if c11 then L1() else L2(splineVals1);
    L0(dx21):
      return dx21;
    L1():
      dr14 = tryDispatchBuiltin.1("$", splineVals1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(splineVals3):
      r56 = `$`(splineVals3, <sym x>);
      goto L0(r56);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx20);
    };
    p10 = prom<V +>{
      splineVals4 = ld splineVals;
      splineVals5 = force? splineVals4;
      checkMissing(splineVals5);
      c12 = `is.object`(splineVals5);
      if c12 then L1() else L2(splineVals5);
    L0(dx23):
      return dx23;
    L1():
      dr16 = tryDispatchBuiltin.1("$", splineVals5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(splineVals7):
      r58 = `$`(splineVals7, <sym y>);
      goto L0(r58);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx22);
    };
    r60 = dyn lines(p9, p10);
    check L90() else D30();
  D30():
    deopt 123 [i30, r60];
  L90():
    dev_flush = ldf `dev.flush`;
    check L91() else D31();
  D31():
    deopt 125 [i30];
  L91():
    r61 = dyn dev_flush();
    check L92() else D32();
  D32():
    deopt 126 [i30, r61];
  L92():
    goto L10(i30);
  }
}