fun main() {
  () -+> V { reg r:cls, reg factor:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg cdplot:cls, reg __:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg cdplot1:cls, reg __1:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg cdplot2:cls, reg __2:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg spineplot:cls, reg __3:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg cdplot3:cls, reg __4:cls, reg r26:V, reg p7:p(V +), reg p8:p(V +), reg r29:V, reg cdplot4:cls, reg __5:cls, reg r30:V, reg p9:p(V +), reg r32:V, reg plot:cls, reg __6:cls, reg r33:V, reg p10:p(V +), reg r35:V, reg lines:cls, reg r36:V, reg p11:p(V +), reg cdens:*, reg cdens1:V, reg c3:L, reg r39:R, reg cdens3:V, reg dr:V, reg dc:L, reg dx:V, reg r41:R, reg dx1:V, reg __7:cls, reg r42:V, reg dx2:cls, reg r43:V, reg p12:p(V +), reg r45:V, reg r46:V, reg p13:p(V +), reg r48:V |
    mkenv;
    r = clos `inner-103057629`;
    st cdplot = r;
    factor = ldf factor;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0);
      goto L0(r3);
    L2():
      r1 = dyn base(2.0, 2.0, 2.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 1.0);
      goto L0(r1);
    };
    p1 = prom<V +>{
      return <int 1, 2>;
    };
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("no", "yes");
      goto L0(r8);
    L2():
      r6 = dyn base1("no", "yes");
      goto L0(r6);
    };
    r10 = dyn factor[, levels, labels](p, p1, p2);
    check L2() else D1();
  D1():
    deopt 10 [r10];
  L2():
    st fail = r10;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L3() else L4();
  L0(r12):
    st temperature = r12;
    cdplot = ldf cdplot;
    check L6() else D3();
  L3():
    c2 = ldf c in base;
    r13 = dyn c2(53.0, 57.0, 58.0, 63.0, 66.0, 67.0, 67.0, 67.0, 68.0, 69.0, 70.0, 70.0, 70.0, 70.0, 72.0, 73.0, 75.0, 75.0, 76.0, 76.0, 78.0, 79.0, 81.0);
    check L5() else D2();
  L4():
    r11 = dyn base2(53.0, 57.0, 58.0, 63.0, 66.0, 67.0, 67.0, 67.0, 68.0, 69.0, 70.0, 70.0, 70.0, 70.0, 72.0, 73.0, 75.0, 75.0, 76.0, 76.0, 78.0, 79.0, 81.0);
    goto L0(r11);
  D2():
    deopt 38 [r13];
  D3():
    deopt 41 [];
  L5():
    goto L0(r13);
  L6():
    p3 = prom<V +>{
      __ = ldf `~` in base;
      r14 = dyn __(<sym fail>, <sym temperature>);
      return r14;
    };
    r16 = dyn cdplot(p3);
    check L7() else D4();
  D4():
    deopt 43 [r16];
  L7():
    cdplot1 = ldf cdplot;
    check L8() else D5();
  D5():
    deopt 45 [];
  L8():
    p4 = prom<V +>{
      __1 = ldf `~` in base;
      r17 = dyn __1(<sym fail>, <sym temperature>);
      return r17;
    };
    r19 = dyn cdplot1[, bw](p4, 2.0);
    check L9() else D6();
  D6():
    deopt 49 [r19];
  L9():
    cdplot2 = ldf cdplot;
    check L10() else D7();
  D7():
    deopt 51 [];
  L10():
    p5 = prom<V +>{
      __2 = ldf `~` in base;
      r20 = dyn __2(<sym fail>, <sym temperature>);
      return r20;
    };
    r22 = dyn cdplot2[, bw](p5, "SJ");
    check L11() else D8();
  D8():
    deopt 55 [r22];
  L11():
    spineplot = ldf spineplot;
    check L12() else D9();
  D9():
    deopt 57 [];
  L12():
    p6 = prom<V +>{
      __3 = ldf `~` in base;
      r23 = dyn __3(<sym fail>, <sym temperature>);
      return r23;
    };
    r25 = dyn spineplot[, breaks](p6, 3.0);
    check L13() else D10();
  D10():
    deopt 61 [r25];
  L13():
    cdplot3 = ldf cdplot;
    check L14() else D11();
  D11():
    deopt 63 [];
  L14():
    p7 = prom<V +>{
      __4 = ldf `~` in base;
      r26 = dyn __4(<sym fail>, <sym temperature>);
      return r26;
    };
    p8 = prom<V +>{
      return <int 2, 1>;
    };
    r29 = dyn cdplot3[, ylevels](p7, p8);
    check L15() else D12();
  D12():
    deopt 67 [r29];
  L15():
    cdplot4 = ldf cdplot;
    check L16() else D13();
  D13():
    deopt 69 [];
  L16():
    p9 = prom<V +>{
      __5 = ldf `~` in base;
      r30 = dyn __5(<sym fail>, <sym temperature>);
      return r30;
    };
    r32 = dyn cdplot4[, plot](p9, FALSE);
    check L17() else D14();
  D14():
    deopt 73 [r32];
  L17():
    st cdens = r32;
    plot = ldf plot;
    check L18() else D15();
  D15():
    deopt 76 [];
  L18():
    p10 = prom<V +>{
      __6 = ldf `~` in base;
      r33 = dyn __6(<lang I(`-`(as.numeric(fail), 1.0))>, <lang jitter(temperature, factor=2.0)>);
      return r33;
    };
    r35 = dyn plot[, xlab, ylab](p10, "Temperature", "Conditional failure probability");
    check L19() else D16();
  D16():
    deopt 82 [r35];
  L19():
    lines = ldf lines;
    check L20() else D17();
  D17():
    deopt 84 [];
  L20():
    p11 = prom<V +>{
      r36 = `:`(53.0, 81.0);
      return r36;
    };
    p13 = prom<V +>{
      cdens = ld cdens;
      cdens1 = force? cdens;
      checkMissing(cdens1);
      c3 = `is.object`(cdens1);
      if c3 then L1() else L2(1.0, cdens1);
    L0(r41, dx1):
      checkFun.0(dx1);
      dx2 = dx1 as cls;
      p12 = prom<V +>{
        r43 = `:`(53.0, 81.0);
        return r43;
      };
      r45 = dyn dx2(p12);
      r46 = `-`(r41, r45);
      return r46;
    L1():
      dr = tryDispatchBuiltin.1("[[", cdens1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(1.0, dr);
    L2(r39, cdens3):
      __7 = ldf `[[` in base;
      r42 = dyn __7(cdens3, 1.0);
      goto L0(r39, r42);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(1.0, dx);
    };
    r48 = dyn lines[, , col](p11, p13, 2.0);
    check L21() else D18();
  D18():
    deopt 89 [r48];
  L21():
    popenv;
    return r48;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("cdplot");
    goto L0(r2);
  L2():
    r = dyn base("cdplot");
    goto L0(r);
  }
}