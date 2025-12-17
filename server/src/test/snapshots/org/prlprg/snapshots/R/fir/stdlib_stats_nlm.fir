fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg nlm:cls, reg f:*, reg f1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg nlm1:cls, reg f2:*, reg f3:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg c1:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg __:cls, reg r14:V, reg r15:cls, reg nlm2:cls, reg f4:*, reg f5:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg c2:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg r23:V, reg r24:cls, reg nlm3:cls, reg f6:*, reg f7:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg c3:cls, reg r28:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg c4:cls, reg r32:V, reg p9:p(V +), reg r34:V, reg r35:cls, reg nlm4:cls, reg f8:*, reg f9:V, reg p10:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg c5:cls, reg r39:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg c6:cls, reg r43:V, reg p12:p(V +), reg r45:V |
    mkenv;
    r = clos inner2532465258;
    st nlm = r;
    r1 = clos inner2501545716;
    st f = r1;
    nlm = ldf nlm;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c(10.0, 10.0);
      goto L0(r5);
    L2():
      r3 = dyn base(10.0, 10.0);
      goto L0(r3);
    };
    r7 = dyn nlm(p, p1);
    check L1() else D1();
  D1():
    deopt 10 [r7];
  L1():
    nlm1 = ldf nlm;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p2 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c1 = ldf c in base;
      r11 = dyn c1(10.0, 10.0);
      goto L0(r11);
    L2():
      r9 = dyn base1(10.0, 10.0);
      goto L0(r9);
    };
    r13 = dyn nlm1[, , `print.level`](p2, p3, 2.0);
    check L3() else D3();
  D3():
    deopt 17 [r13];
  L3():
    __ = ldf `::`;
    check L4() else D4();
  D4():
    deopt 19 [];
  L4():
    r14 = dyn __("utils", "str");
    check L5() else D5();
  D5():
    deopt 22 [r14];
  L5():
    checkFun.0(r14);
    r15 = r14 as cls;
    p6 = prom<V +>{
      nlm2 = ldf nlm;
      p4 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      p5 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r18):
        return r18;
      L1():
        c2 = ldf c in base;
        r19 = dyn c2(5.0);
        goto L0(r19);
      L2():
        r17 = dyn base2(5.0);
        goto L0(r17);
      };
      r21 = dyn nlm2[, , hessian](p4, p5, TRUE);
      return r21;
    };
    r23 = dyn r15(p6);
    check L6() else D6();
  D6():
    deopt 25 [r23];
  L6():
    r24 = clos inner741670229;
    st f = r24;
    nlm3 = ldf nlm;
    check L7() else D7();
  D7():
    deopt 30 [];
  L7():
    p7 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      c3 = ldf c in base;
      r28 = dyn c3(10.0, 10.0);
      goto L0(r28);
    L2():
      r26 = dyn base3(10.0, 10.0);
      goto L0(r26);
    };
    p9 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      c4 = ldf c in base;
      r32 = dyn c4(3.0, 5.0);
      goto L0(r32);
    L2():
      r30 = dyn base4(3.0, 5.0);
      goto L0(r30);
    };
    r34 = dyn nlm3[, , a](p7, p8, p9);
    check L8() else D8();
  D8():
    deopt 35 [r34];
  L8():
    r35 = clos inner741670229;
    st f = r35;
    nlm4 = ldf nlm;
    check L9() else D9();
  D9():
    deopt 40 [];
  L9():
    p10 = prom<V +>{
      f8 = ld f;
      f9 = force? f8;
      checkMissing(f9);
      return f9;
    };
    p11 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      c5 = ldf c in base;
      r39 = dyn c5(10.0, 10.0);
      goto L0(r39);
    L2():
      r37 = dyn base5(10.0, 10.0);
      goto L0(r37);
    };
    p12 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      c6 = ldf c in base;
      r43 = dyn c6(3.0, 5.0);
      goto L0(r43);
    L2():
      r41 = dyn base6(3.0, 5.0);
      goto L0(r41);
    };
    r45 = dyn nlm4[, , a](p10, p11, p12);
    check L10() else D10();
  D10():
    deopt 45 [r45];
  L10():
    popenv;
    return r45;
  }
}
fun inner2532465258(f, p, `...`, hessian, typsize, fscale, `print.level`, ndigit, gradtol, stepmax, steptol, iterlim, `check.analyticals`) {
  (reg f:*, reg p:*, reg ddd:dots, reg hessian:*, reg typsize:*, reg fscale:*, reg print_level:*, reg ndigit:*, reg gradtol:*, reg stepmax:*, reg steptol:*, reg iterlim:*, reg check_analyticals:*) -+> V { var f:*, var p:*, var `...`:dots?, var hessian:*, reg hessian_isMissing:L, reg hessian_orDefault:*, var typsize:*, reg typsize_isMissing:L, reg typsize_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p1:p(V +), var fscale:*, reg fscale_isMissing:L, reg fscale_orDefault:*, var `print.level`:*, reg print_level_isMissing:L, reg print_level_orDefault:*, var ndigit:*, reg ndigit_isMissing:L, reg ndigit_orDefault:*, var gradtol:*, reg gradtol_isMissing:L, reg gradtol_orDefault:*, var stepmax:*, reg stepmax_isMissing:L, reg stepmax_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:R, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:R, reg r15:V, reg p2:*, reg p3:V, reg typsize1:*, reg typsize2:V, reg r16:V, reg r17:V, reg sum:cls, reg r18:V, reg r19:V, reg r20:V, reg max:cls, reg r21:V, reg p4:p(V +), var steptol:*, reg steptol_isMissing:L, reg steptol_orDefault:*, var iterlim:*, reg iterlim_isMissing:L, reg iterlim_orDefault:*, var `check.analyticals`:*, reg check_analyticals_isMissing:L, reg check_analyticals_orDefault:*, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg print_level1:*, reg print_level2:V, reg as_integer:cls, reg r25:V, reg print_level3:*, reg print_level4:V, reg r26:V, reg c:L, reg c1:V, reg print_level5:*, reg print_level6:V, reg r27:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:R, reg r34:V, reg c7:cls, reg r35:V, reg r36:V, reg c8:L, reg r38:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg print_level7:*, reg print_level8:V, reg r39:V, reg __:cls, reg r40:V, reg check_analyticals1:*, reg check_analyticals2:V, reg r41:V, reg c9:L, reg msg:*, reg msg1:V, reg r42:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg C_nlm:*, reg C_nlm1:V, reg r46:cls, reg p5:*, reg p6:V, reg hessian1:*, reg hessian2:V, reg typsize3:*, reg typsize4:V, reg fscale1:*, reg fscale2:V, reg msg2:*, reg msg3:V, reg ndigit1:*, reg ndigit2:V, reg gradtol1:*, reg gradtol2:V, reg stepmax1:*, reg stepmax2:V, reg steptol1:*, reg steptol2:V, reg iterlim1:*, reg iterlim2:V, reg _External2:cls, reg r47:V |
    mkenv;
    st f = f;
    st p = p;
    st `...` = ddd;
    hessian_isMissing = missing.0(hessian);
    if hessian_isMissing then L0(FALSE) else L0(hessian);
  L0(hessian_orDefault):
    st hessian = hessian_orDefault;
    typsize_isMissing = missing.0(typsize);
    if typsize_isMissing then L1() else L2(typsize);
  L1():
    p1 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep(1.0, <lang length(p)>);
      goto L0(r2);
    L2():
      r = dyn base(1.0, <lang length(p)>);
      goto L0(r);
    };
    goto L2(p1);
  L2(typsize_orDefault):
    st typsize = typsize_orDefault;
    fscale_isMissing = missing.0(fscale);
    if fscale_isMissing then L3(1.0) else L3(fscale);
  L3(fscale_orDefault):
    st fscale = fscale_orDefault;
    print_level_isMissing = missing.0(print_level);
    if print_level_isMissing then L4(0.0) else L4(print_level);
  L4(print_level_orDefault):
    st `print.level` = print_level_orDefault;
    ndigit_isMissing = missing.0(ndigit);
    if ndigit_isMissing then L5(12.0) else L5(ndigit);
  L5(ndigit_orDefault):
    st ndigit = ndigit_orDefault;
    gradtol_isMissing = missing.0(gradtol);
    if gradtol_isMissing then L6(1.0E-6) else L6(gradtol);
  L6(gradtol_orDefault):
    st gradtol = gradtol_orDefault;
    stepmax_isMissing = missing.0(stepmax);
    if stepmax_isMissing then L7() else L8(stepmax);
  L7():
    p4 = prom<V +>{
      sym1 = ldf max;
      base1 = ldf max in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r5):
      return r5;
    L3():
      sym2 = ldf sqrt;
      base2 = ldf sqrt in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r4 = dyn base1(<lang `*`(1000.0, sqrt(sum(`^`(`(`(`/`(p, typsize)), 2.0))))>, 1000.0);
      goto L0(r4);
    L1(r9, r10):
      r20 = `*`(r9, r10);
      max = ldf max in base;
      r21 = dyn max(r20, 1000.0);
      goto L0(r21);
    L5():
      sym3 = ldf sum;
      base3 = ldf sum in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L7() else L8();
    L6():
      r8 = dyn base2(<lang sum(`^`(`(`(`/`(p, typsize)), 2.0))>);
      goto L1(1000.0, r8);
    L2(r14, r15):
      r19 = sqrt(r15);
      goto L1(r14, r19);
    L7():
      p2 = ld p;
      p3 = force? p2;
      checkMissing(p3);
      typsize1 = ld typsize;
      typsize2 = force? typsize1;
      checkMissing(typsize2);
      r16 = `/`(p3, typsize2);
      r17 = `^`(r16, 2.0);
      sum = ldf sum in base;
      r18 = dyn sum(r17);
      goto L2(1000.0, r18);
    L8():
      r13 = dyn base3(<lang `^`(`(`(`/`(p, typsize)), 2.0)>);
      goto L2(1000.0, r13);
    };
    goto L8(p4);
  L8(stepmax_orDefault):
    st stepmax = stepmax_orDefault;
    steptol_isMissing = missing.0(steptol);
    if steptol_isMissing then L9(1.0E-6) else L9(steptol);
  L9(steptol_orDefault):
    st steptol = steptol_orDefault;
    iterlim_isMissing = missing.0(iterlim);
    if iterlim_isMissing then L10(100.0) else L10(iterlim);
  L10(iterlim_orDefault):
    st iterlim = iterlim_orDefault;
    check_analyticals_isMissing = missing.0(check_analyticals);
    if check_analyticals_isMissing then L11(TRUE) else L11(check_analyticals);
  L11(check_analyticals_orDefault):
    st `check.analyticals` = check_analyticals_orDefault;
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L21() else L22();
  L12(r24):
    st `print.level` = r24;
    print_level3 = ld `print.level`;
    check L25() else D2();
  L21():
    print_level1 = ld `print.level`;
    check L23() else D0();
  L22():
    r23 = dyn base4(<sym print.level>);
    goto L12(r23);
  D0():
    deopt 2 [print_level1];
  D2():
    deopt 7 [print_level3];
  L23():
    print_level2 = force? print_level1;
    checkMissing(print_level2);
    as_integer = ldf `as.integer` in base;
    r25 = dyn as_integer(print_level2);
    check L24() else D1();
  L25():
    print_level4 = force? print_level3;
    checkMissing(print_level4);
    r26 = `<`(print_level4, 0.0);
    c = `as.logical`(r26);
    if c then L13(c) else L26();
  D1():
    deopt 5 [r25];
  L13(c1):
    c6 = `as.logical`(c1);
    if c6 then L29() else L14();
  L24():
    goto L12(r25);
  L26():
    print_level5 = ld `print.level`;
    check L27() else D3();
  D3():
    deopt 11 [c, print_level5];
  L14():
    goto L15();
  L15():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L33() else L34();
  L27():
    print_level6 = force? print_level5;
    checkMissing(print_level6);
    r27 = `>`(print_level6, 2.0);
    c3 = `as.logical`(r27);
    c4 = `||`(c, c3);
    goto L13(c4);
  L29():
    stop = ldf stop;
    check L30() else D4();
  D4():
    deopt 17 [];
  L16(r33, r34):
    r36 = `+`(r33, r34);
    c8 = `is.object`(r36);
    if c8 then L36() else L37(r36);
  L30():
    r28 = dyn stop("'print.level' must be in {0,1,2}");
    check L31() else D5();
  L33():
    c7 = ldf c in base;
    r35 = dyn c7(8.0, 0.0, 16.0);
    check L35() else D6();
  L34():
    r32 = dyn base5(8.0, 0.0, 16.0);
    goto L16(1.0, r32);
  D5():
    deopt 19 [r28];
  D6():
    deopt 29 [1.0, r35];
  L17(dx1):
    st msg = dx1;
    check_analyticals1 = ld `check.analyticals`;
    check L40() else D8();
  L31():
    goto L15();
  L35():
    goto L16(1.0, r35);
  L36():
    dr = tryDispatchBuiltin.1("[", r36);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(r38):
    print_level7 = ld `print.level`;
    check L39() else D7();
  D7():
    deopt 32 [r38, 1.0, print_level7];
  D8():
    deopt 37 [check_analyticals1];
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L39():
    print_level8 = force? print_level7;
    checkMissing(print_level8);
    r39 = `+`(1.0, print_level8);
    __ = ldf `[` in base;
    r40 = dyn __(r38, r39);
    goto L17(r40);
  L40():
    check_analyticals2 = force? check_analyticals1;
    checkMissing(check_analyticals2);
    r41 = `!`(check_analyticals2);
    c9 = `as.logical`(r41);
    if c9 then L41() else L18();
  L18():
    goto L19();
  L19():
    sym6 = ldf `.External2`;
    base6 = ldf `.External2` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L44() else L45();
  L41():
    msg = ld msg;
    check L42() else D9();
  D9():
    deopt 40 [msg];
  L20(r45):
    popenv;
    return r45;
  L42():
    msg1 = force? msg;
    checkMissing(msg1);
    r42 = `+`(msg1, 6.0);
    st msg = r42;
    goto L19();
  L44():
    C_nlm = ld C_nlm;
    check L46() else D10();
  L45():
    r44 = dyn base6(<sym C_nlm>, <lang function((x=), f(x, ...), NULL)>, <sym p>, <sym hessian>, <sym typsize>, <sym fscale>, <sym msg>, <sym ndigit>, <sym gradtol>, <sym stepmax>, <sym steptol>, <sym iterlim>);
    goto L20(r44);
  D10():
    deopt 49 [C_nlm];
  L46():
    C_nlm1 = force? C_nlm;
    checkMissing(C_nlm1);
    r46 = clos inner2501545716;
    p5 = ld p;
    check L47() else D11();
  D11():
    deopt 53 [p5];
  L47():
    p6 = force? p5;
    checkMissing(p6);
    hessian1 = ld hessian;
    check L48() else D12();
  D12():
    deopt 55 [hessian1];
  L48():
    hessian2 = force? hessian1;
    checkMissing(hessian2);
    typsize3 = ld typsize;
    check L49() else D13();
  D13():
    deopt 57 [typsize3];
  L49():
    typsize4 = force? typsize3;
    checkMissing(typsize4);
    fscale1 = ld fscale;
    check L50() else D14();
  D14():
    deopt 59 [fscale1];
  L50():
    fscale2 = force? fscale1;
    checkMissing(fscale2);
    msg2 = ld msg;
    check L51() else D15();
  D15():
    deopt 61 [msg2];
  L51():
    msg3 = force? msg2;
    checkMissing(msg3);
    ndigit1 = ld ndigit;
    check L52() else D16();
  D16():
    deopt 63 [ndigit1];
  L52():
    ndigit2 = force? ndigit1;
    checkMissing(ndigit2);
    gradtol1 = ld gradtol;
    check L53() else D17();
  D17():
    deopt 65 [gradtol1];
  L53():
    gradtol2 = force? gradtol1;
    checkMissing(gradtol2);
    stepmax1 = ld stepmax;
    check L54() else D18();
  D18():
    deopt 67 [stepmax1];
  L54():
    stepmax2 = force? stepmax1;
    checkMissing(stepmax2);
    steptol1 = ld steptol;
    check L55() else D19();
  D19():
    deopt 69 [steptol1];
  L55():
    steptol2 = force? steptol1;
    checkMissing(steptol2);
    iterlim1 = ld iterlim;
    check L56() else D20();
  D20():
    deopt 71 [iterlim1];
  L56():
    iterlim2 = force? iterlim1;
    checkMissing(iterlim2);
    _External2 = ldf `.External2` in base;
    r47 = dyn _External2(C_nlm1, r46, p6, hessian2, typsize4, fscale2, msg3, ndigit2, gradtol2, stepmax2, steptol2, iterlim2);
    check L57() else D21();
  D21():
    deopt 74 [r47];
  L57():
    goto L20(r47);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg f:cls, reg x1:*, reg x2:V, reg p:p(V +), reg ddd:*, reg r1:V |
    mkenv;
    st x = x;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd = ld `...`;
    r1 = dyn f[, `...`](p, ddd);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner741670229(x, a) {
  (reg x:*, reg a:*) -+> V { var x:*, var a:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg a1:*, reg a2:V, reg r2:V, reg r3:V, reg sum:cls, reg r4:V |
    mkenv;
    st x = x;
    st a = a;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `^`(`(`(`-`(x, a)), 2.0)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    a1 = ld a;
    check L4() else D1();
  D1():
    deopt 3 [x2, a1];
  L4():
    a2 = force? a1;
    checkMissing(a2);
    r2 = `-`(x2, a2);
    r3 = `^`(r2, 2.0);
    sum = ldf sum in base;
    r4 = dyn sum(r3);
    check L5() else D2();
  D2():
    deopt 9 [r4];
  L5():
    goto L0(r4);
  }
}