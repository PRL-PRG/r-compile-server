fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg stepfun:cls, reg p:p(V +), reg y0:*, reg y1:V, reg p1:p(V +), reg r6:V, reg stepfun1:cls, reg p2:p(V +), reg y2:*, reg y3:V, reg p3:p(V +), reg r9:V, reg stepfun2:cls, reg p4:p(V +), reg y4:*, reg y5:V, reg p5:p(V +), reg r12:V, reg stepfun3:cls, reg p6:p(V +), reg y6:*, reg y7:V, reg p7:p(V +), reg r15:V, reg sfun0:*, reg sfun1:V, reg summary:cls, reg sfun2:*, reg sfun3:V, reg p8:p(V +), reg r17:V, reg summary1:cls, reg sfun_2:*, reg sfun_3:V, reg p9:p(V +), reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg sfun4:*, reg sfun5:V, reg unclass:cls, reg r22:V, reg ls:cls, reg environment:cls, reg sfun6:*, reg sfun7:V, reg p10:p(V +), reg r24:V, reg p11:p(V +), reg r26:V, reg seq:cls, reg r27:V, reg rbind:cls, reg x0:*, reg x1:V, reg p12:p(V +), reg sfun8:cls, reg x2:*, reg x3:V, reg p13:p(V +), reg r30:V, reg p14:p(V +), reg sfun_4:cls, reg x4:*, reg x5:V, reg p15:p(V +), reg r33:V, reg p16:p(V +), reg sfun9:cls, reg x6:*, reg x7:V, reg p17:p(V +), reg r36:V, reg p18:p(V +), reg sfun1c:cls, reg x8:*, reg x9:V, reg p19:p(V +), reg r39:V, reg p20:p(V +), reg r41:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg y8:*, reg y9:V, reg c1:L, reg y11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r44:V, reg sfun10:cls, reg p21:p(V +), reg r46:V, reg identical:cls, reg r47:V, reg p22:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r49:V, reg r50:V, reg y12:*, reg y13:V, reg c2:L, reg y15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r51:V, reg sfun1c1:cls, reg p23:p(V +), reg r53:V, reg identical1:cls, reg r54:V, reg p24:p(V +), reg r56:V |
    mkenv;
    r = clos inner3990970097;
    st stepfun = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st y0 = r2;
    stepfun = ldf stepfun;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r3 = dyn c(1.0, 2.0, 4.0, 3.0);
    check L4() else D0();
  L3():
    r1 = dyn base(1.0, 2.0, 4.0, 3.0);
    goto L0(r1);
  D0():
    deopt 10 [r3];
  D1():
    deopt 13 [];
  L4():
    goto L0(r3);
  L5():
    p = prom<V +>{
      return <int 1, 2, 3>;
    };
    p1 = prom<V +>{
      y0 = ld y0;
      y1 = force? y0;
      checkMissing(y1);
      return y1;
    };
    r6 = dyn stepfun[, , f](p, p1, 0.0);
    check L6() else D2();
  D2():
    deopt 18 [r6];
  L6():
    st sfun0 = r6;
    stepfun1 = ldf stepfun;
    check L7() else D3();
  D3():
    deopt 21 [];
  L7():
    p2 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p3 = prom<V +>{
      y2 = ld y0;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r9 = dyn stepfun1[, , f](p2, p3, 0.2);
    check L8() else D4();
  D4():
    deopt 26 [r9];
  L8():
    st `sfun.2` = r9;
    stepfun2 = ldf stepfun;
    check L9() else D5();
  D5():
    deopt 29 [];
  L9():
    p4 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p5 = prom<V +>{
      y4 = ld y0;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    r12 = dyn stepfun2[, , f](p4, p5, 1.0);
    check L10() else D6();
  D6():
    deopt 34 [r12];
  L10():
    st sfun1 = r12;
    stepfun3 = ldf stepfun;
    check L11() else D7();
  D7():
    deopt 37 [];
  L11():
    p6 = prom<V +>{
      return <int 1, 2, 3>;
    };
    p7 = prom<V +>{
      y6 = ld y0;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    r15 = dyn stepfun3[, , right](p6, p7, TRUE);
    check L12() else D8();
  D8():
    deopt 42 [r15];
  L12():
    st sfun1c = r15;
    sfun0 = ld sfun0;
    check L13() else D9();
  D9():
    deopt 44 [sfun0];
  L13():
    sfun1 = force? sfun0;
    checkMissing(sfun1);
    summary = ldf summary;
    check L14() else D10();
  D10():
    deopt 47 [];
  L14():
    p8 = prom<V +>{
      sfun2 = ld sfun0;
      sfun3 = force? sfun2;
      checkMissing(sfun3);
      return sfun3;
    };
    r17 = dyn summary(p8);
    check L15() else D11();
  D11():
    deopt 49 [r17];
  L15():
    summary1 = ldf summary;
    check L16() else D12();
  D12():
    deopt 51 [];
  L16():
    p9 = prom<V +>{
      sfun_2 = ld `sfun.2`;
      sfun_3 = force? sfun_2;
      checkMissing(sfun_3);
      return sfun_3;
    };
    r19 = dyn summary1(p9);
    check L17() else D13();
  D13():
    deopt 53 [r19];
  L17():
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L1():
    ls = ldf ls;
    check L22() else D16();
  L18():
    sfun4 = ld sfun0;
    check L20() else D14();
  L19():
    r20 = dyn base1(<sym sfun0>);
    goto L1();
  D14():
    deopt 56 [sfun4];
  D16():
    deopt 61 [];
  L20():
    sfun5 = force? sfun4;
    checkMissing(sfun5);
    unclass = ldf unclass in base;
    r22 = dyn unclass(sfun5);
    check L21() else D15();
  L22():
    p11 = prom<V +>{
      environment = ldf environment;
      p10 = prom<V +>{
        sfun6 = ld sfun0;
        sfun7 = force? sfun6;
        checkMissing(sfun7);
        return sfun7;
      };
      r24 = dyn environment(p10);
      return r24;
    };
    r26 = dyn ls[envir](p11);
    check L23() else D17();
  D15():
    deopt 59 [r22];
  D17():
    deopt 64 [r26];
  L21():
    goto L1();
  L23():
    seq = ldf seq;
    check L24() else D18();
  D18():
    deopt 66 [];
  L24():
    r27 = dyn seq[, , by](0.5, 3.5, 0.25);
    check L25() else D19();
  D19():
    deopt 71 [r27];
  L25():
    st x0 = r27;
    rbind = ldf rbind;
    check L26() else D20();
  D20():
    deopt 74 [];
  L26():
    p12 = prom<V +>{
      x0 = ld x0;
      x1 = force? x0;
      checkMissing(x1);
      return x1;
    };
    p14 = prom<V +>{
      sfun8 = ldf sfun0;
      p13 = prom<V +>{
        x2 = ld x0;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r30 = dyn sfun8(p13);
      return r30;
    };
    p16 = prom<V +>{
      sfun_4 = ldf `sfun.2`;
      p15 = prom<V +>{
        x4 = ld x0;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      r33 = dyn sfun_4(p15);
      return r33;
    };
    p18 = prom<V +>{
      sfun9 = ldf sfun1;
      p17 = prom<V +>{
        x6 = ld x0;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      r36 = dyn sfun9(p17);
      return r36;
    };
    p20 = prom<V +>{
      sfun1c = ldf sfun1c;
      p19 = prom<V +>{
        x8 = ld x0;
        x9 = force? x8;
        checkMissing(x9);
        return x9;
      };
      r39 = dyn sfun1c(p19);
      return r39;
    };
    r41 = dyn rbind[x, `f.f0`, `f.f02`, `f.f1`, `f.f1c`](p12, p14, p16, p18, p20);
    check L27() else D21();
  D21():
    deopt 85 [r41];
  L27():
    stopifnot = ldf stopifnot;
    check L28() else D22();
  D22():
    deopt 87 [];
  L28():
    p22 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r43):
      return r43;
    L2():
      y8 = ld y0;
      y9 = force? y8;
      checkMissing(y9);
      c1 = `is.object`(y9);
      if c1 then L4() else L5(y9);
    L3():
      r42 = dyn base2(<lang `[`(y0, `-`(1.0))>, <lang sfun0(`:`(1.0, 3.0))>);
      goto L0(r42);
    L1(dx1):
      sfun10 = ldf sfun0;
      p21 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r46 = dyn sfun10(p21);
      identical = ldf identical in base;
      r47 = dyn identical(dx1, r46, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r47);
    L4():
      dr = tryDispatchBuiltin.1("[", y9);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(y11):
      __ = ldf `[` in base;
      r44 = dyn __(y11, -1.0);
      goto L1(r44);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    p24 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r50):
      return r50;
    L2():
      y12 = ld y0;
      y13 = force? y12;
      checkMissing(y13);
      c2 = `is.object`(y13);
      if c2 then L4() else L5(y13);
    L3():
      r49 = dyn base3(<lang `[`(y0, `-`(4.0))>, <lang sfun1c(`:`(1.0, 3.0))>);
      goto L0(r49);
    L1(dx3):
      sfun1c1 = ldf sfun1c;
      p23 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r53 = dyn sfun1c1(p23);
      identical1 = ldf identical in base;
      r54 = dyn identical1(dx3, r53, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r54);
    L4():
      dr2 = tryDispatchBuiltin.1("[", y13);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(y15):
      __1 = ldf `[` in base;
      r51 = dyn __1(y15, -4.0);
      goto L1(r51);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    r56 = dyn stopifnot(p22, p24);
    check L29() else D23();
  D23():
    deopt 90 [r56];
  L29():
    popenv;
    return r56;
  }
}
fun inner3990970097(x, y, f, ties, right) {
  (reg x:*, reg y:*, reg f:*, reg ties:*, reg right:*) -+> V { var x:*, var y:*, var f:*, reg f_isMissing:L, reg f_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg right1:*, reg right2:V, reg as_numeric:cls, reg r2:V, reg p:p(V +), var ties:*, reg ties_isMissing:L, reg ties_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, reg is_unsorted:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg length:cls, reg r10:V, reg n:*, reg n1:V, reg r11:V, reg c1:L, reg stop1:cls, reg r12:V, reg n2:*, reg n3:V, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg y1:*, reg y2:V, reg length1:cls, reg r17:V, reg n4:*, reg n5:V, reg r18:V, reg c2:L, reg stop2:cls, reg r19:V, reg approxfun:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg y3:*, reg y4:V, reg c3:L, reg y6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg right3:*, reg right4:V, reg c4:L, reg n6:*, reg n7:V, reg y9:V, reg n8:V, reg r22:V, reg __:cls, reg r23:V, reg p3:p(V +), reg y10:*, reg y11:V, reg c5:L, reg y13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r25:V, reg p4:p(V +), reg y14:*, reg y15:V, reg c6:L, reg y17:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg n9:*, reg n10:V, reg __2:cls, reg r27:V, reg p5:p(V +), reg f1:*, reg f2:V, reg p6:p(V +), reg ties1:*, reg ties2:V, reg p7:p(V +), reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg rval:*, reg rval1:V, reg class:cls, reg r36:V, reg c7:cls, reg r37:V, reg l:*, reg class__:cls, reg r38:V, reg sys_call:cls, reg r39:V, reg l1:*, reg attr__:cls, reg r40:V, reg rval2:*, reg rval3:V |
    mkenv;
    st x = x;
    st y = y;
    f_isMissing = missing.0(f);
    if f_isMissing then L0() else L1(f);
  L0():
    p = prom<V +>{
      sym = ldf `as.numeric`;
      base = ldf `as.numeric` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      as_numeric = ldf `as.numeric` in base;
      r2 = dyn as_numeric(right2);
      goto L0(r2);
    L2():
      r = dyn base(<sym right>);
      goto L0(r);
    };
    goto L1(p);
  L1(f_orDefault):
    st f = f_orDefault;
    ties_isMissing = missing.0(ties);
    if ties_isMissing then L2("ordered") else L2(ties);
  L2(ties_orDefault):
    st ties = ties_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L3(FALSE) else L3(right);
  L3(right_orDefault):
    st right = right_orDefault;
    is_unsorted = ldf `is.unsorted`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn is_unsorted(p1);
    check L15() else D1();
  D1():
    deopt 3 [r5];
  L15():
    c = `as.logical`(r5);
    if c then L16() else L4();
  L4():
    goto L5();
  L5():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L16():
    stop = ldf stop;
    check L17() else D2();
  D2():
    deopt 5 [];
  L6(r9):
    st n = r9;
    n = ld n;
    check L24() else D6();
  L17():
    r6 = dyn stop("stepfun: 'x' must be ordered increasingly");
    check L18() else D3();
  L20():
    x3 = ld x;
    check L22() else D4();
  L21():
    r8 = dyn base1(<sym x>);
    goto L6(r8);
  D3():
    deopt 7 [r6];
  D4():
    deopt 12 [x3];
  D6():
    deopt 17 [n];
  L18():
    goto L5();
  L22():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r10 = dyn length(x4);
    check L23() else D5();
  L24():
    n1 = force? n;
    checkMissing(n1);
    r11 = `<`(n1, 1.0);
    c1 = `as.logical`(r11);
    if c1 then L25() else L7();
  D5():
    deopt 15 [r10];
  L7():
    goto L8();
  L8():
    n2 = ld n;
    check L29() else D9();
  L23():
    goto L6(r10);
  L25():
    stop1 = ldf stop;
    check L26() else D7();
  D7():
    deopt 22 [];
  D9():
    deopt 27 [n2];
  L26():
    r12 = dyn stop1("'x' must have length >= 1");
    check L27() else D8();
  L29():
    n3 = force? n2;
    checkMissing(n3);
    r14 = `+`(n3, 1);
    st n1 = r14;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D8():
    deopt 24 [r12];
  L9(r16):
    n4 = ld n1;
    check L34() else D12();
  L27():
    goto L8();
  L30():
    y1 = ld y;
    check L32() else D10();
  L31():
    r15 = dyn base2(<sym y>);
    goto L9(r15);
  D10():
    deopt 34 [y1];
  D12():
    deopt 37 [r16, n4];
  L32():
    y2 = force? y1;
    checkMissing(y2);
    length1 = ldf length in base;
    r17 = dyn length1(y2);
    check L33() else D11();
  L34():
    n5 = force? n4;
    checkMissing(n5);
    r18 = `!=`(r16, n5);
    c2 = `as.logical`(r18);
    if c2 then L35() else L10();
  D11():
    deopt 37 [r17];
  L10():
    goto L11();
  L11():
    approxfun = ldf approxfun;
    check L39() else D15();
  L33():
    goto L9(r17);
  L35():
    stop2 = ldf stop;
    check L36() else D13();
  D13():
    deopt 41 [];
  D15():
    deopt 47 [];
  L36():
    r19 = dyn stop2("'y' must be one longer than 'x'");
    check L37() else D14();
  L39():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p3 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      c3 = `is.object`(y4);
      if c3 then L3() else L4(y4);
    L0(dx1):
      return dx1;
    L3():
      dr = tryDispatchBuiltin.1("[", y4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L5() else L4(dr);
    L4(y6):
      right3 = ld right;
      right4 = force? right3;
      checkMissing(right4);
      c4 = `as.logical`(right4);
      if c4 then L6() else L1();
    L1():
      goto L2(y6, 1.0);
    L2(y9, n8):
      r22 = `-`(<missing>, n8);
      __ = ldf `[` in base;
      r23 = dyn __(y9, r22);
      goto L0(r23);
    L5():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L6():
      n6 = ld n1;
      n7 = force? n6;
      checkMissing(n7);
      goto L2(y6, n7);
    };
    p4 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      c5 = `is.object`(y11);
      if c5 then L1() else L2(y11);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", y11);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(y13):
      __1 = ldf `[` in base;
      r25 = dyn __1(y13, 1);
      goto L0(r25);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p5 = prom<V +>{
      y14 = ld y;
      y15 = force? y14;
      checkMissing(y15);
      c6 = `is.object`(y15);
      if c6 then L1() else L2(y15);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", y15);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(y17):
      n9 = ld n1;
      n10 = force? n9;
      __2 = ldf `[` in base;
      r27 = dyn __2(y17, n10);
      goto L0(r27);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p6 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p7 = prom<V +>{
      ties1 = ld ties;
      ties2 = force? ties1;
      checkMissing(ties2);
      return ties2;
    };
    r31 = dyn approxfun[, , method, yleft, yright, f, ties](p2, p3, "constant", p4, p5, p6, p7);
    check L40() else D16();
  D14():
    deopt 43 [r19];
  D16():
    deopt 60 [r31];
  L37():
    goto L11();
  L40():
    st rval = r31;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L12(r33):
    l = ld rval;
    class__ = ldf `class<-`;
    check L48() else D20();
  L41():
    sym4 = ldf class;
    base4 = ldf class in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L42():
    r32 = dyn base3("stepfun", <lang class(rval)>);
    goto L12(r32);
  D20():
    deopt 74 [r33, l, r33];
  L13(r35):
    c7 = ldf c in base;
    r37 = dyn c7("stepfun", r35);
    check L47() else D19();
  L43():
    rval = ld rval;
    check L45() else D17();
  L44():
    r34 = dyn base4(<sym rval>);
    goto L13(r34);
  L48():
    r38 = dyn class__(l, NULL, r33);
    check L49() else D21();
  D17():
    deopt 67 [rval];
  D19():
    deopt 72 [r37];
  D21():
    deopt 76 [r33, r38];
  L45():
    rval1 = force? rval;
    checkMissing(rval1);
    class = ldf class in base;
    r36 = dyn class(rval1);
    check L46() else D18();
  L47():
    goto L12(r37);
  L49():
    st rval = r38;
    sys_call = ldf `sys.call`;
    check L50() else D22();
  D18():
    deopt 70 [r36];
  D22():
    deopt 79 [];
  L46():
    goto L13(r36);
  L50():
    r39 = dyn sys_call();
    check L51() else D23();
  D23():
    deopt 80 [r39];
  L51():
    l1 = ld rval;
    attr__ = ldf `attr<-`;
    check L52() else D24();
  D24():
    deopt 82 [r39, l1, r39];
  L52():
    r40 = dyn attr__(l1, NULL, "call", r39);
    check L53() else D25();
  D25():
    deopt 85 [r39, r40];
  L53():
    st rval = r40;
    rval2 = ld rval;
    check L54() else D26();
  D26():
    deopt 87 [rval2];
  L54():
    rval3 = force? rval2;
    checkMissing(rval3);
    popenv;
    return rval3;
  }
}