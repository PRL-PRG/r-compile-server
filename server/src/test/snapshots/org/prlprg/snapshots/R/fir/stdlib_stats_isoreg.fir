fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg isoreg:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg plot:cls, reg ir:*, reg ir1:V, reg p2:p(V +), reg r11:V, reg isoreg1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg c1:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg as_stepfun:cls, reg ir3:*, reg ir4:V, reg p4:p(V +), reg r18:V, reg isoreg2:cls, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg c2:cls, reg r22:V, reg p6:p(V +), reg r24:V, reg cat:cls, reg sprintf:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:R, reg r29:V, reg residuals:cls, reg ir5:*, reg ir6:V, reg p7:p(V +), reg r31:V, reg r32:V, reg sum:cls, reg r33:V, reg var:cls, reg y4:*, reg y5:V, reg p8:p(V +), reg r35:V, reg r36:V, reg r37:V, reg r38:V, reg p9:p(V +), reg r40:V, reg p10:p(V +), reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg with:cls, reg ir7:*, reg ir8:V, reg p11:p(V +), reg cbind:cls, reg iKnots:*, reg iKnots1:V, reg p12:p(V +), reg yf:*, reg yf1:V, reg c3:L, reg yf3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg iKnots2:*, reg iKnots3:V, reg __:cls, reg r47:V, reg p13:p(V +), reg r49:V, reg p14:p(V +), reg r51:V, reg sample:cls, reg r52:V, reg r53:V, reg p15:p(V +), reg r55:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg x:*, reg x1:V, reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg round:cls, reg r61:V, reg plot1:cls, reg isoreg3:cls, reg x_:*, reg x_1:V, reg p16:p(V +), reg y6:*, reg y7:V, reg p17:p(V +), reg r64:V, reg p18:p(V +), reg r66:V, reg stopifnot:cls, reg all_equal:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r67:V, reg r68:V, reg with1:cls, reg m:*, reg m1:V, reg p19:p(V +), reg yf4:*, reg yf5:V, reg c4:L, reg yf7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg iKnots4:*, reg iKnots5:V, reg __1:cls, reg r70:V, reg p20:p(V +), reg r72:V, reg p21:p(V +), reg as_vector:cls, reg tapply:cls, reg y8:*, reg y9:V, reg p22:p(V +), reg x_2:*, reg x_3:V, reg p23:p(V +), reg mean:*, reg mean1:V, reg p24:p(V +), reg r77:V, reg p25:p(V +), reg r79:V, reg p26:p(V +), reg r81:V, reg p27:p(V +), reg r83:V |
    mkenv;
    r = clos inner1252594579;
    st isoreg = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    isoreg = ldf isoreg;
    check L8() else D2();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L6():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c = ldf c in base;
      r7 = dyn c(1.0, 0.0, 4.0, 3.0, 3.0, 5.0, 4.0, 2.0, 0.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(1.0, 0.0, 4.0, 3.0, 3.0, 5.0, 4.0, 2.0, 0.0);
      goto L0(r5);
    };
    r9 = dyn isoreg(p1);
    check L9() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r9];
  L7():
    goto L0();
  L9():
    st ir = r9;
    plot = ldf plot;
    check L10() else D4();
  D4():
    deopt 14 [];
  L10():
    p2 = prom<V +>{
      ir = ld ir;
      ir1 = force? ir;
      checkMissing(ir1);
      return ir1;
    };
    r11 = dyn plot[, `plot.type`](p2, "row");
    check L11() else D5();
  D5():
    deopt 18 [r11];
  L11():
    isoreg1 = ldf isoreg;
    check L12() else D6();
  D6():
    deopt 20 [];
  L12():
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      st y3 = r13;
      invisible.0();
      return r13;
    L1():
      c1 = ldf c in base;
      r14 = dyn c1(1.0, 0.0, 4.0, 3.0, 3.0, 5.0, 4.0, 2.0, 3.0);
      goto L0(r14);
    L2():
      r12 = dyn base2(1.0, 0.0, 4.0, 3.0, 3.0, 5.0, 4.0, 2.0, 3.0);
      goto L0(r12);
    };
    r16 = dyn isoreg1(p3);
    check L13() else D7();
  D7():
    deopt 22 [r16];
  L13():
    st ir3 = r16;
    as_stepfun = ldf `as.stepfun`;
    check L14() else D8();
  D8():
    deopt 25 [];
  L14():
    p4 = prom<V +>{
      ir3 = ld ir3;
      ir4 = force? ir3;
      checkMissing(ir4);
      return ir4;
    };
    r18 = dyn as_stepfun(p4);
    check L15() else D9();
  D9():
    deopt 27 [r18];
  L15():
    st fi3 = r18;
    isoreg2 = ldf isoreg;
    check L16() else D10();
  D10():
    deopt 30 [];
  L16():
    p5 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p6 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      st y4 = r21;
      invisible.0();
      return r21;
    L1():
      c2 = ldf c in base;
      r22 = dyn c2(5.0, 9.0, <int 1, 2>, <int 5, 6, 7, 8>, 3.0, 8.0);
      goto L0(r22);
    L2():
      r20 = dyn base3(5.0, 9.0, <lang `:`(1.0, 2.0)>, <lang `:`(5.0, 8.0)>, 3.0, 8.0);
      goto L0(r20);
    };
    r24 = dyn isoreg2(p5, p6);
    check L17() else D11();
  D11():
    deopt 33 [r24];
  L17():
    st ir4 = r24;
    cat = ldf cat;
    check L18() else D12();
  D12():
    deopt 36 [];
  L18():
    p10 = prom<V +>{
      sprintf = ldf sprintf;
      p9 = prom<V +>{
        sym4 = ldf sum;
        base4 = ldf sum in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r28, r29):
        var = ldf var;
        p8 = prom<V +>{
          y4 = ld y4;
          y5 = force? y4;
          checkMissing(y5);
          return y5;
        };
        r35 = dyn var(p8);
        r36 = `*`(9.0, r35);
        r37 = `/`(r29, r36);
        r38 = `-`(r28, r37);
        return r38;
      L1():
        residuals = ldf residuals;
        p7 = prom<V +>{
          ir5 = ld ir4;
          ir6 = force? ir5;
          checkMissing(ir6);
          return ir6;
        };
        r31 = dyn residuals(p7);
        r32 = `^`(r31, 2.0);
        sum = ldf sum in base;
        r33 = dyn sum(r32);
        goto L0(1.0, r33);
      L2():
        r27 = dyn base4(<lang `^`(residuals(ir4), 2.0)>);
        goto L0(1.0, r27);
      };
      r40 = dyn sprintf("R^2 = %.2f\n", p9);
      return r40;
    };
    r42 = dyn cat(p10);
    check L19() else D13();
  D13():
    deopt 38 [r42];
  L19():
    sym5 = ldf with;
    base5 = ldf with in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L20() else L21();
  L1():
    sample = ldf sample;
    check L24() else D16();
  L20():
    with = ldf with;
    check L22() else D14();
  L21():
    r43 = dyn base5(<sym ir4>, <lang cbind(iKnots, `[`(yf, iKnots))>);
    goto L1();
  D14():
    deopt 41 [];
  D16():
    deopt 46 [];
  L22():
    p11 = prom<V +>{
      ir7 = ld ir4;
      ir8 = force? ir7;
      checkMissing(ir8);
      return ir8;
    };
    p14 = prom<V +>{
      cbind = ldf cbind;
      p12 = prom<V +>{
        iKnots = ld iKnots;
        iKnots1 = force? iKnots;
        checkMissing(iKnots1);
        return iKnots1;
      };
      p13 = prom<V +>{
        yf = ld yf;
        yf1 = force? yf;
        checkMissing(yf1);
        c3 = `is.object`(yf1);
        if c3 then L1() else L2(yf1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", yf1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(yf3):
        iKnots2 = ld iKnots;
        iKnots3 = force? iKnots2;
        __ = ldf `[` in base;
        r47 = dyn __(yf3, iKnots3);
        goto L0(r47);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r49 = dyn cbind(p12, p13);
      return r49;
    };
    r51 = dyn with(p11, p14);
    check L23() else D15();
  L24():
    p15 = prom<V +>{
      r52 = `:`(0.0, 30.0);
      r53 = `/`(r52, 8.0);
      return r53;
    };
    r55 = dyn sample(p15);
    check L25() else D17();
  D15():
    deopt 44 [r51];
  D17():
    deopt 48 [r55];
  L23():
    goto L1();
  L25():
    st x = r55;
    sym6 = ldf exp;
    base6 = ldf exp in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L26() else L27();
  L2(r57):
    st y = r57;
    sym7 = ldf round;
    base7 = ldf round in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L29() else L30();
  L26():
    x = ld x;
    check L28() else D18();
  L27():
    r56 = dyn base6(<sym x>);
    goto L2(r56);
  D18():
    deopt 51 [x];
  L3(r60):
    st `x.` = r60;
    plot1 = ldf plot;
    check L31() else D19();
  L28():
    x1 = force? x;
    checkMissing(x1);
    r58 = exp(x1);
    goto L2(r58);
  L29():
    round = ldf round in base;
    r61 = dyn round(<sym x>);
    goto L3(r61);
  L30():
    r59 = dyn base7(<sym x>);
    goto L3(r59);
  D19():
    deopt 60 [];
  L31():
    p18 = prom<V +>{
      isoreg3 = ldf isoreg;
      p16 = prom<V +>{
        x_ = ld `x.`;
        x_1 = force? x_;
        checkMissing(x_1);
        return x_1;
      };
      p17 = prom<V +>{
        y6 = ld y;
        y7 = force? y6;
        checkMissing(y7);
        return y7;
      };
      r64 = dyn isoreg3(p16, p17);
      st m = r64;
      invisible.0();
      return r64;
    };
    r66 = dyn plot1(p18);
    check L32() else D20();
  D20():
    deopt 62 [r66];
  L32():
    stopifnot = ldf stopifnot;
    check L33() else D21();
  D21():
    deopt 64 [];
  L33():
    p27 = prom<V +>{
      all_equal = ldf `all.equal`;
      p21 = prom<V +>{
        sym8 = ldf with;
        base8 = ldf with in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r68):
        return r68;
      L1():
        with1 = ldf with;
        p19 = prom<V +>{
          m = ld m;
          m1 = force? m;
          checkMissing(m1);
          return m1;
        };
        p20 = prom<V +>{
          yf4 = ld yf;
          yf5 = force? yf4;
          checkMissing(yf5);
          c4 = `is.object`(yf5);
          if c4 then L1() else L2(yf5);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", yf5);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(yf7):
          iKnots4 = ld iKnots;
          iKnots5 = force? iKnots4;
          __1 = ldf `[` in base;
          r70 = dyn __1(yf7, iKnots5);
          goto L0(r70);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r72 = dyn with1(p19, p20);
        goto L0(r72);
      L2():
        r67 = dyn base8(<sym m>, <lang `[`(yf, iKnots)>);
        goto L0(r67);
      };
      p26 = prom<V +>{
        as_vector = ldf `as.vector`;
        p25 = prom<V +>{
          tapply = ldf tapply;
          p22 = prom<V +>{
            y8 = ld y;
            y9 = force? y8;
            checkMissing(y9);
            return y9;
          };
          p23 = prom<V +>{
            x_2 = ld `x.`;
            x_3 = force? x_2;
            checkMissing(x_3);
            return x_3;
          };
          p24 = prom<V +>{
            mean = ld mean;
            mean1 = force? mean;
            checkMissing(mean1);
            return mean1;
          };
          r77 = dyn tapply(p22, p23, p24);
          return r77;
        };
        r79 = dyn as_vector(p25);
        return r79;
      };
      r81 = dyn all_equal(p21, p26);
      return r81;
    };
    r83 = dyn stopifnot(p27);
    check L34() else D22();
  D22():
    deopt 66 [r83];
  L34():
    popenv;
    return r83;
  }
}
fun inner1252594579(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, reg xy_coords:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V, reg xy:*, reg xy1:V, reg c:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg anyNA:cls, reg r6:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c6:L, reg r8:V, reg xy4:*, reg xy5:V, reg c7:L, reg c9:L, reg xy7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c11:L, reg dx3:V, reg r9:V, reg anyNA1:cls, reg r10:V, reg c12:L, reg c13:V, reg c15:L, reg stop:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg xy8:*, reg xy9:V, reg c16:L, reg xy11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r15:V, reg c17:V, reg r16:V, reg c18:L, reg c20:V, reg xy12:*, reg xy13:V, reg c21:L, reg c23:L, reg xy15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c25:L, reg dx7:V, reg r17:V, reg r18:V, reg c26:L, reg c27:V, reg c29:L, reg c30:V, reg is_unsorted:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r20:V, reg r21:V, reg c32:L, reg c33:V, reg isOrd:*, reg isOrd1:V, reg r22:V, reg c35:L, reg xy16:*, reg xy17:V, reg c36:L, reg xy19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r23:V, reg order:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg y3:*, reg y4:V, reg r25:V, reg p4:p(V +), reg r27:V, reg y5:*, reg y6:V, reg c37:L, reg y8:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ord:*, reg ord1:V, reg __:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg C_isoreg:*, reg C_isoreg1:V, reg isOrd2:*, reg isOrd3:V, reg c38:L, reg xy20:*, reg xy21:V, reg c39:L, reg C_isoreg5:V, reg xy23:V, reg dr12:V, reg dc6:L, reg dx13:V, reg C_isoreg7:V, reg dx14:V, reg r31:V, reg C_isoreg8:V, reg dx15:V, reg y9:*, reg y10:V, reg vargs:dots, reg r32:V, reg structure:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg xy24:*, reg xy25:V, reg c40:L, reg xy27:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg xy30:V, reg r36:V, reg c41:cls, reg r37:V, reg __1:cls, reg r38:V, reg z:*, reg z1:V, reg c42:L, reg z3:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg z6:V, reg r40:V, reg c43:cls, reg r41:V, reg __2:cls, reg r42:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg isOrd4:*, reg isOrd5:V, reg isOrd6:*, reg isOrd7:V, reg r45:V, reg c44:L, reg ord2:*, reg ord3:V, reg ord4:V, reg match_call:cls, reg r46:V, reg list:cls, reg r47:V, reg c45:cls, reg r48:V, reg p5:p(V +), reg r50:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    xy_coords = ldf `xy.coords`;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r2 = dyn xy_coords(p, p1);
    check L16() else D1();
  D1():
    deopt 4 [r2];
  L16():
    st xy = r2;
    xy = ld xy;
    check L17() else D2();
  D2():
    deopt 6 [xy];
  L17():
    xy1 = force? xy;
    checkMissing(xy1);
    c = `is.object`(xy1);
    if c then L19() else L20(xy1);
  L18(dx1):
    st x = dx1;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L19():
    dr = tryDispatchBuiltin.1("$", xy1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(xy3):
    r3 = `$`(xy3, <sym x>);
    goto L18(r3);
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L2(c1) else L26();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    x3 = ld x;
    check L24() else D3();
  L23():
    r4 = dyn base(<sym x>);
    goto L1(r4);
  D3():
    deopt 12 [x3];
  L2(c2):
    c15 = `as.logical`(c2);
    if c15 then L36() else L4();
  L24():
    x4 = force? x3;
    checkMissing(x4);
    anyNA = ldf anyNA in base;
    r6 = dyn anyNA(x4);
    check L25() else D4();
  L26():
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  D4():
    deopt 15 [r6];
  L3(c6, r8):
    c12 = `as.logical`(r8);
    c13 = `||`(c6, c12);
    goto L2(c13);
  L4():
    goto L5();
  L5():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L25():
    goto L1(r6);
  L27():
    xy4 = ld xy;
    check L29() else D5();
  L28():
    r7 = dyn base1(<lang `$`(xy, y)>);
    goto L3(c1, r7);
  L36():
    stop = ldf stop;
    check L37() else D7();
  D5():
    deopt 18 [c1, xy4];
  D7():
    deopt 25 [];
  L6(r14):
    r16 = `!`(r14);
    c18 = `as.logical`(r16);
    if c18 then L47() else L7(c18);
  L29():
    xy5 = force? xy4;
    checkMissing(xy5);
    c7 = `is.object`(xy5);
    if c7 then L31() else L32(c1, xy5);
  L37():
    r11 = dyn stop("missing values not allowed");
    check L38() else D8();
  L40():
    xy8 = ld xy;
    check L42() else D9();
  L41():
    r13 = dyn base2(<lang `$`(xy, xlab)>);
    goto L6(r13);
  D8():
    deopt 27 [r11];
  D9():
    deopt 31 [xy8];
  L7(c20):
    c29 = `as.logical`(c20);
    if c29 then L8(c29) else L54();
  L30(c11, dx3):
    anyNA1 = ldf anyNA in base;
    r10 = dyn anyNA1(dx3);
    check L34() else D6();
  L31():
    dr2 = tryDispatchBuiltin.1("$", xy5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(c1, dr2);
  L32(c9, xy7):
    r9 = `$`(xy7, <sym y>);
    goto L30(c9, r9);
  L38():
    goto L5();
  L42():
    xy9 = force? xy8;
    checkMissing(xy9);
    c16 = `is.object`(xy9);
    if c16 then L44() else L45(xy9);
  L47():
    xy12 = ld xy;
    check L48() else D10();
  D6():
    deopt 22 [c11, r10];
  D10():
    deopt 36 [c18, xy12];
  L8(c30):
    st isOrd = c30;
    isOrd = ld isOrd;
    check L58() else D13();
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L30(c1, dx2);
  L34():
    goto L3(c11, r10);
  L43(dx5):
    c17 = `==`(dx5, NULL);
    goto L6(c17);
  L44():
    dr4 = tryDispatchBuiltin.1("$", xy9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(dr4);
  L45(xy11):
    r15 = `$`(xy11, <sym xlab>);
    goto L43(r15);
  L48():
    xy13 = force? xy12;
    checkMissing(xy13);
    c21 = `is.object`(xy13);
    if c21 then L50() else L51(c18, xy13);
  L54():
    is_unsorted = ldf `is.unsorted`;
    check L55() else D11();
  D11():
    deopt 43 [c29];
  D13():
    deopt 51 [isOrd];
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L43(dx4);
  L49(c25, dx7):
    r18 = `==`(dx7, "Index");
    c26 = `as.logical`(r18);
    c27 = `&&`(c25, c26);
    goto L7(c27);
  L50():
    dr6 = tryDispatchBuiltin.1("$", xy13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L52() else L51(c18, dr6);
  L51(c23, xy15):
    r17 = `$`(xy15, <sym xlab>);
    goto L49(c23, r17);
  L55():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r20 = dyn is_unsorted[, strictly](p2, TRUE);
    check L56() else D12();
  L58():
    isOrd1 = force? isOrd;
    checkMissing(isOrd1);
    r22 = `!`(isOrd1);
    c35 = `as.logical`(r22);
    if c35 then L59() else L9();
  D12():
    deopt 47 [c29, r20];
  L9():
    goto L11();
  L11():
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L52():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L49(c18, dx6);
  L56():
    r21 = `!`(r20);
    c32 = `as.logical`(r21);
    c33 = `||`(c29, c32);
    goto L8(c33);
  L59():
    xy16 = ld xy;
    check L60() else D14();
  D14():
    deopt 54 [xy16];
  L12(r30):
    st z = r30;
    structure = ldf structure;
    check L85() else D23();
  L60():
    xy17 = force? xy16;
    checkMissing(xy17);
    c36 = `is.object`(xy17);
    if c36 then L62() else L63(xy17);
  L73():
    C_isoreg = ld C_isoreg;
    check L75() else D19();
  L74():
    r29 = dyn base3(<sym C_isoreg>, <lang if(isOrd, `$`(xy, y), y)>);
    goto L12(r29);
  D19():
    deopt 73 [C_isoreg];
  D23():
    deopt 84 [];
  L61(dx9):
    st y = dx9;
    order = ldf order;
    check L65() else D15();
  L62():
    dr8 = tryDispatchBuiltin.1("$", xy17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L64() else L63(dr8);
  L63(xy19):
    r23 = `$`(xy19, <sym y>);
    goto L61(r23);
  L75():
    C_isoreg1 = force? C_isoreg;
    checkMissing(C_isoreg1);
    isOrd2 = ld isOrd;
    check L76() else D20();
  L85():
    p5 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L8() else L9();
    L0(r34):
      return r34;
    L8():
      xy24 = ld xy;
      xy25 = force? xy24;
      checkMissing(xy25);
      c40 = `is.object`(xy25);
      if c40 then L10() else L11(xy25);
    L9():
      r33 = dyn base4(<lang `[`(xy, c("x", "y"))>, <lang `[`(z, c("yf", "yc", "iKnots"))>, <lang list(isOrd=isOrd, ord=if(`!`(isOrd), ord), call=match.call())>);
      goto L0(r33);
    L1(dx17):
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c42 = `is.object`(z1);
      if c42 then L15() else L16(z1);
    L10():
      dr14 = tryDispatchBuiltin.1("[", xy25);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L12() else L11(dr14);
    L11(xy27):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L13() else L14();
    L2(xy30, r36):
      __1 = ldf `[` in base;
      r38 = dyn __1(xy30, r36);
      goto L1(r38);
    L3(dx19):
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L20() else L21();
    L12():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx16);
    L13():
      c41 = ldf c in base;
      r37 = dyn c41("x", "y");
      goto L2(xy27, r37);
    L14():
      r35 = dyn base5("x", "y");
      goto L2(xy27, r35);
    L15():
      dr16 = tryDispatchBuiltin.1("[", z1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L17() else L16(dr16);
    L16(z3):
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L18() else L19();
    L4(z6, r40):
      __2 = ldf `[` in base;
      r42 = dyn __2(z6, r40);
      goto L3(r42);
    L5(r44):
      c45 = ldf c in base;
      r48 = dyn c45(dx17, dx19, r44);
      goto L0(r48);
    L17():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L3(dx18);
    L18():
      c43 = ldf c in base;
      r41 = dyn c43("yf", "yc", "iKnots");
      goto L4(z3, r41);
    L19():
      r39 = dyn base6("yf", "yc", "iKnots");
      goto L4(z3, r39);
    L20():
      isOrd4 = ld isOrd;
      isOrd5 = force? isOrd4;
      checkMissing(isOrd5);
      isOrd6 = ld isOrd;
      isOrd7 = force? isOrd6;
      checkMissing(isOrd7);
      r45 = `!`(isOrd7);
      c44 = `as.logical`(r45);
      if c44 then L22() else L6();
    L21():
      r43 = dyn base7[isOrd, ord, call](<sym isOrd>, <lang if(`!`(isOrd), ord)>, <lang match.call()>);
      goto L5(r43);
    L6():
      goto L7(NULL);
    L7(ord4):
      match_call = ldf `match.call`;
      r46 = dyn match_call();
      list = ldf list in base;
      r47 = dyn list(isOrd5, ord4, r46);
      goto L5(r47);
    L22():
      ord2 = ld ord;
      ord3 = force? ord2;
      checkMissing(ord3);
      goto L7(ord3);
    };
    r50 = dyn structure[, class](p5, "isoreg");
    check L86() else D24();
  D15():
    deopt 59 [];
  D20():
    deopt 74 [C_isoreg1, isOrd2];
  D24():
    deopt 88 [r50];
  L64():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L61(dx8);
  L65():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p4 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      r25 = `-`(<missing>, y4);
      return r25;
    };
    r27 = dyn order(p3, p4);
    check L66() else D16();
  L76():
    isOrd3 = force? isOrd2;
    checkMissing(isOrd3);
    c38 = `as.logical`(isOrd3);
    if c38 then L77() else L13();
  L86():
    popenv;
    return r50;
  D16():
    deopt 62 [r27];
  L13():
    y9 = ld y;
    check L84() else D22();
  L14(C_isoreg8, dx15):
    vargs = dots[dx15];
    r32 = `.Call`(C_isoreg8, vargs, <missing>);
    goto L12(r32);
  L66():
    st ord = r27;
    y5 = ld y;
    check L67() else D17();
  L77():
    xy20 = ld xy;
    check L78() else D21();
  D17():
    deopt 64 [y5];
  D21():
    deopt 76 [C_isoreg1, xy20];
  D22():
    deopt 79 [C_isoreg1, y9];
  L67():
    y6 = force? y5;
    checkMissing(y6);
    c37 = `is.object`(y6);
    if c37 then L68() else L69(y6);
  L78():
    xy21 = force? xy20;
    checkMissing(xy21);
    c39 = `is.object`(xy21);
    if c39 then L80() else L81(C_isoreg1, xy21);
  L84():
    y10 = force? y9;
    checkMissing(y10);
    goto L14(C_isoreg1, y10);
  L10(dx11):
    st y = dx11;
    goto L11();
  L68():
    dr10 = tryDispatchBuiltin.1("[", y6);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L70() else L69(dr10);
  L69(y8):
    ord = ld ord;
    check L71() else D18();
  L79(C_isoreg7, dx14):
    goto L14(C_isoreg7, dx14);
  L80():
    dr12 = tryDispatchBuiltin.1("$", xy21);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L82() else L81(C_isoreg1, dr12);
  L81(C_isoreg5, xy23):
    r31 = `$`(xy23, <sym y>);
    goto L79(C_isoreg5, r31);
  D18():
    deopt 66 [y8, ord];
  L70():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx10);
  L71():
    ord1 = force? ord;
    __ = ldf `[` in base;
    r28 = dyn __(y8, ord1);
    goto L10(r28);
  L82():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L79(C_isoreg1, dx13);
  }
}