fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg r3:V, reg seq:cls, reg p:p(V +), reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg outer:cls, reg x:*, reg x1:V, reg r9:V, reg p2:p(V +), reg y:*, reg y1:V, reg r11:V, reg p3:p(V +), reg __:*, reg __1:V, reg p4:p(V +), reg r14:V, reg r15:V, reg image:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg r18:*, reg r19:V, reg r20:V, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg r26:V, reg r27:*, reg r28:V, reg r29:V, reg r30:V, reg r31:V, reg r32:V, reg p5:p(V +), reg gray_colors:cls, reg r34:V, reg p6:p(V +), reg r36:V, reg image1:cls, reg z:*, reg z1:V, reg p7:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg expression:cls, reg r40:V, reg p8:p(V +), reg r42:V, reg contour:cls, reg z2:*, reg z3:V, reg p9:p(V +), reg r44:V, reg r45:cls, reg r46:cls, reg outer1:cls, reg p10:p(V +), reg r48:V, reg p11:p(V +), reg r50:V, reg imageM:cls, reg m:*, reg m1:V, reg p12:p(V +), reg r52:V, reg imageM1:cls, reg volcano:*, reg volcano1:V, reg p13:p(V +), reg r54:V, reg nrow:cls, reg volcano2:*, reg volcano3:V, reg p14:p(V +), reg r56:V, reg r57:V, reg r58:V, reg ncol:cls, reg volcano4:*, reg volcano5:V, reg p15:p(V +), reg r60:V, reg r61:V, reg r62:V, reg image2:cls, reg x2:*, reg x3:V, reg p16:p(V +), reg y2:*, reg y3:V, reg p17:p(V +), reg volcano6:*, reg volcano7:V, reg p18:p(V +), reg hcl_colors:cls, reg r66:V, reg p19:p(V +), reg r68:V, reg contour1:cls, reg x4:*, reg x5:V, reg p20:p(V +), reg y4:*, reg y5:V, reg p21:p(V +), reg volcano8:*, reg volcano9:V, reg p22:p(V +), reg seq1:cls, reg r72:V, reg p23:p(V +), reg r74:V, reg axis:cls, reg seq2:cls, reg r75:V, reg p24:p(V +), reg r77:V, reg axis1:cls, reg seq3:cls, reg r78:V, reg p25:p(V +), reg r80:V, reg box:cls, reg r81:V, reg title:cls, reg r82:V |
    mkenv;
    r = clos inner2044426018;
    st image = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    seq = ldf seq;
    check L6() else D2();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base("grDevices");
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L4():
    r3 = dyn require("grDevices");
    check L5() else D1();
  L6():
    p = prom<V +>{
      return -12.566370614359172;
    };
    p1 = prom<V +>{
      return 12.566370614359172;
    };
    r6 = dyn seq[, , `length.out`](p, p1, 27.0);
    check L7() else D3();
  D1():
    deopt 7 [r3];
  D3():
    deopt 14 [r6];
  L5():
    goto L0();
  L7():
    st y = r6;
    st x = r6;
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L1(r8):
    st r = r8;
    image = ldf image;
    check L12() else D6();
  L8():
    outer = ldf outer;
    check L10() else D4();
  L9():
    r7 = dyn base1(<lang outer(`^`(x, 2.0), `^`(y, 2.0), `+`)>);
    goto L1(r7);
  D4():
    deopt 19 [];
  D6():
    deopt 27 [];
  L10():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      r9 = `^`(x1, 2.0);
      return r9;
    };
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      r11 = `^`(y1, 2.0);
      return r11;
    };
    p4 = prom<V +>{
      __ = ld `+`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r14 = dyn outer(p2, p3, p4);
    check L11() else D5();
  L12():
    p5 = prom<V +>{
      sym2 = ldf cos;
      base2 = ldf cos in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r17):
      sym3 = ldf exp;
      base3 = ldf exp in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L2():
      r18 = ld r;
      r19 = force? r18;
      checkMissing(r19);
      r20 = `^`(r19, 2.0);
      r21 = cos(r20);
      goto L0(r21);
    L3():
      r16 = dyn base2(<lang `^`(r, 2.0)>);
      goto L0(r16);
    L1(r25, r26):
      r32 = `*`(r25, r26);
      st z = r32;
      invisible.0();
      return r32;
    L4():
      r27 = ld r;
      r28 = force? r27;
      checkMissing(r28);
      r29 = `-`(<missing>, r28);
      r30 = `/`(r29, 6.0);
      r31 = exp(r30);
      goto L1(r17, r31);
    L5():
      r24 = dyn base3(<lang `/`(`-`(r), 6.0)>);
      goto L1(r17, r24);
    };
    p6 = prom<V +>{
      gray_colors = ldf `gray.colors`;
      r34 = dyn gray_colors(33.0);
      return r34;
    };
    r36 = dyn image[z, col](p5, p6);
    check L13() else D7();
  D5():
    deopt 23 [r14];
  D7():
    deopt 32 [r36];
  L11():
    r15 = sqrt(r14);
    goto L1(r15);
  L13():
    image1 = ldf image;
    check L14() else D8();
  D8():
    deopt 34 [];
  L14():
    p7 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p8 = prom<V +>{
      sym4 = ldf expression;
      base4 = ldf expression in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r39):
      return r39;
    L1():
      expression = ldf expression in base;
      r40 = dyn expression(<lang `*`(cos(`^`(r, 2.0)), `^`(e, {
            `/`(`-`(r), 6.0)
          }))>);
      goto L0(r40);
    L2():
      r38 = dyn base4(<lang `*`(cos(`^`(r, 2.0)), `^`(e, {
            `/`(`-`(r), 6.0)
          }))>);
      goto L0(r38);
    };
    r42 = dyn image1[, axes, main, xlab](p7, FALSE, "Math can be beautiful ...", p8);
    check L15() else D9();
  D9():
    deopt 42 [r42];
  L15():
    contour = ldf contour;
    check L16() else D10();
  D10():
    deopt 44 [];
  L16():
    p9 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r44 = dyn contour[, add, drawlabels](p9, TRUE, FALSE);
    check L17() else D11();
  D11():
    deopt 50 [r44];
  L17():
    r45 = clos inner2296048169;
    st tf = r45;
    r46 = clos inner241609253;
    st imageM = r46;
    outer1 = ldf outer;
    check L18() else D12();
  D12():
    deopt 58 [];
  L18():
    p10 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    p11 = prom<V +>{
      r48 = `:`(1.0, 14.0);
      return r48;
    };
    r50 = dyn outer1(p10, p11);
    check L19() else D13();
  D13():
    deopt 61 [r50];
  L19():
    st m = r50;
    imageM = ldf imageM;
    check L20() else D14();
  D14():
    deopt 64 [];
  L20():
    p12 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    r52 = dyn imageM[, main](p12, "image(<5 x 14 matrix>)   with rows and columns");
    check L21() else D15();
  D15():
    deopt 68 [r52];
  L21():
    imageM1 = ldf imageM;
    check L22() else D16();
  D16():
    deopt 70 [];
  L22():
    p13 = prom<V +>{
      volcano = ld volcano;
      volcano1 = force? volcano;
      checkMissing(volcano1);
      return volcano1;
    };
    r54 = dyn imageM1(p13);
    check L23() else D17();
  D17():
    deopt 72 [r54];
  L23():
    nrow = ldf nrow;
    check L24() else D18();
  D18():
    deopt 76 [10.0, 1.0];
  L24():
    p14 = prom<V +>{
      volcano2 = ld volcano;
      volcano3 = force? volcano2;
      checkMissing(volcano3);
      return volcano3;
    };
    r56 = dyn nrow(p14);
    check L25() else D19();
  D19():
    deopt 78 [10.0, 1.0, r56];
  L25():
    r57 = `:`(1.0, r56);
    r58 = `*`(10.0, r57);
    st x = r58;
    ncol = ldf ncol;
    check L26() else D20();
  D20():
    deopt 85 [10.0, 1.0];
  L26():
    p15 = prom<V +>{
      volcano4 = ld volcano;
      volcano5 = force? volcano4;
      checkMissing(volcano5);
      return volcano5;
    };
    r60 = dyn ncol(p15);
    check L27() else D21();
  D21():
    deopt 87 [10.0, 1.0, r60];
  L27():
    r61 = `:`(1.0, r60);
    r62 = `*`(10.0, r61);
    st y = r62;
    image2 = ldf image;
    check L28() else D22();
  D22():
    deopt 92 [];
  L28():
    p16 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p17 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p18 = prom<V +>{
      volcano6 = ld volcano;
      volcano7 = force? volcano6;
      checkMissing(volcano7);
      return volcano7;
    };
    p19 = prom<V +>{
      hcl_colors = ldf `hcl.colors`;
      r66 = dyn hcl_colors(100.0, "terrain");
      return r66;
    };
    r68 = dyn image2[, , , col, axes](p16, p17, p18, p19, FALSE);
    check L29() else D23();
  D23():
    deopt 100 [r68];
  L29():
    contour1 = ldf contour;
    check L30() else D24();
  D24():
    deopt 102 [];
  L30():
    p20 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p21 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p22 = prom<V +>{
      volcano8 = ld volcano;
      volcano9 = force? volcano8;
      checkMissing(volcano9);
      return volcano9;
    };
    p23 = prom<V +>{
      seq1 = ldf seq;
      r72 = dyn seq1[, , by](90.0, 200.0, 5.0);
      return r72;
    };
    r74 = dyn contour1[, , , levels, add, col](p20, p21, p22, p23, TRUE, "brown");
    check L31() else D25();
  D25():
    deopt 112 [r74];
  L31():
    axis = ldf axis;
    check L32() else D26();
  D26():
    deopt 114 [];
  L32():
    p24 = prom<V +>{
      seq2 = ldf seq;
      r75 = dyn seq2[, , by](100.0, 800.0, 100.0);
      return r75;
    };
    r77 = dyn axis[, at](1.0, p24);
    check L33() else D27();
  D27():
    deopt 118 [r77];
  L33():
    axis1 = ldf axis;
    check L34() else D28();
  D28():
    deopt 120 [];
  L34():
    p25 = prom<V +>{
      seq3 = ldf seq;
      r78 = dyn seq3[, , by](100.0, 600.0, 100.0);
      return r78;
    };
    r80 = dyn axis1[, at](2.0, p25);
    check L35() else D29();
  D29():
    deopt 124 [r80];
  L35():
    box = ldf box;
    check L36() else D30();
  D30():
    deopt 126 [];
  L36():
    r81 = dyn box();
    check L37() else D31();
  D31():
    deopt 127 [r81];
  L37():
    title = ldf title;
    check L38() else D32();
  D32():
    deopt 129 [];
  L38():
    r82 = dyn title[main, `font.main`]("Maunga Whau Volcano", 4.0);
    check L39() else D33();
  D33():
    deopt 134 [r82];
  L39():
    popenv;
    return r82;
  }
}
fun inner2044426018(x, `...`) {
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
    r2 = dyn UseMethod("image");
    goto L0(r2);
  L2():
    r = dyn base("image");
    goto L0(r);
  }
}
fun inner2296048169(m) {
  (reg m:*) -+> V { var m:*, reg t:cls, reg m1:*, reg m2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nrow:cls, reg m3:*, reg m4:V, reg p1:p(V +), reg r5:V, reg r6:V, reg __:cls, reg r7:V |
    mkenv;
    st m = m;
    t = ldf t;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    r1 = dyn t(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    nrow = ldf nrow;
    check L6() else D2();
  D2():
    deopt 6 [r3];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    p1 = prom<V +>{
      m3 = ld m;
      m4 = force? m3;
      checkMissing(m4);
      return m4;
    };
    r5 = dyn nrow(p1);
    check L7() else D3();
  D3():
    deopt 8 [r3, r5];
  L7():
    r6 = `:`(r5, 1.0);
    __ = ldf `[` in base;
    r7 = dyn __(r1, <missing>, r6);
    goto L0(r7);
  }
}
fun inner241609253(m, grid, asp, `...`) {
  (reg m:*, reg grid:*, reg asp:*, reg ddd:dots) -+> V { var m:*, var grid:*, reg grid_isMissing:L, reg grid_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg m1:*, reg m2:V, reg dim:cls, reg r4:V, reg max:cls, reg r5:V, reg r6:V, reg p:p(V +), var asp:*, reg asp_isMissing:L, reg asp_orDefault:*, reg nrow:cls, reg m3:*, reg m4:V, reg p1:p(V +), reg r9:V, reg r10:V, reg ncol:cls, reg m5:*, reg m6:V, reg p2:p(V +), reg r12:V, reg r13:V, reg r14:V, reg p3:p(V +), var `...`:dots?, reg image:cls, reg tf:cls, reg m7:*, reg m8:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg asp1:*, reg asp2:V, reg p6:p(V +), reg ddd1:dots?, reg r20:V, reg r21:cls, reg ncol1:cls, reg m9:*, reg m10:V, reg p7:p(V +), reg r23:V, reg n:*, reg n1:V, reg r24:V, reg n2:*, reg n3:V, reg r25:V, reg mAxis:cls, reg j:*, reg j1:V, reg n4:*, reg n5:V, reg r26:V, reg p8:p(V +), reg r28:V, reg grid1:*, reg grid2:V, reg c:L, reg abline:cls, reg n6:*, reg n7:V, reg r29:V, reg r30:V, reg n8:*, reg n9:V, reg r31:V, reg p9:p(V +), reg r33:V, reg nrow1:cls, reg m11:*, reg m12:V, reg p10:p(V +), reg r36:V, reg n10:*, reg n11:V, reg r37:V, reg n12:*, reg n13:V, reg r38:V, reg mAxis1:cls, reg j2:*, reg j3:V, reg n14:*, reg n15:V, reg r39:V, reg r40:V, reg p11:p(V +), reg r42:V, reg grid3:*, reg grid4:V, reg c1:L, reg abline1:cls, reg n16:*, reg n17:V, reg r43:V, reg r44:V, reg n18:*, reg n19:V, reg r45:V, reg p12:p(V +), reg r47:V |
    mkenv;
    st m = m;
    grid_isMissing = missing.0(grid);
    if grid_isMissing then L0() else L1(grid);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      r6 = `<=`(r1, 25.0);
      return r6;
    L2():
      sym1 = ldf dim;
      base1 = ldf dim in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(<lang dim(m)>);
      goto L0(r);
    L1(r3):
      max = ldf max in base;
      r5 = dyn max(r3);
      goto L0(r5);
    L4():
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      dim = ldf dim in base;
      r4 = dyn dim(m2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym m>);
      goto L1(r2);
    };
    goto L1(p);
  L1(grid_orDefault):
    st grid = grid_orDefault;
    asp_isMissing = missing.0(asp);
    if asp_isMissing then L2() else L3(asp);
  L2():
    p3 = prom<V +>{
      nrow = ldf nrow;
      p1 = prom<V +>{
        m3 = ld m;
        m4 = force? m3;
        checkMissing(m4);
        return m4;
      };
      r9 = dyn nrow(p1);
      r10 = `-`(r9, 1.0);
      ncol = ldf ncol;
      p2 = prom<V +>{
        m5 = ld m;
        m6 = force? m5;
        checkMissing(m6);
        return m6;
      };
      r12 = dyn ncol(p2);
      r13 = `-`(r12, 1.0);
      r14 = `/`(r10, r13);
      return r14;
    };
    goto L3(p3);
  L3(asp_orDefault):
    st asp = asp_orDefault;
    st `...` = ddd;
    image = ldf image;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p5 = prom<V +>{
      tf = ldf tf;
      p4 = prom<V +>{
        m7 = ld m;
        m8 = force? m7;
        checkMissing(m8);
        return m8;
      };
      r17 = dyn tf(p4);
      return r17;
    };
    p6 = prom<V +>{
      asp1 = ld asp;
      asp2 = force? asp1;
      checkMissing(asp2);
      return asp2;
    };
    ddd1 = ld `...`;
    r20 = dyn image[, asp, axes, `...`](p5, p6, FALSE, ddd1);
    check L8() else D1();
  D1():
    deopt 8 [r20];
  L8():
    r21 = clos inner657898296;
    st mAxis = r21;
    ncol1 = ldf ncol;
    check L9() else D2();
  D2():
    deopt 13 [];
  L9():
    p7 = prom<V +>{
      m9 = ld m;
      m10 = force? m9;
      checkMissing(m10);
      return m10;
    };
    r23 = dyn ncol1(p7);
    check L10() else D3();
  D3():
    deopt 15 [r23];
  L10():
    st n = r23;
    n = ld n;
    check L11() else D4();
  D4():
    deopt 17 [n];
  L11():
    n1 = force? n;
    checkMissing(n1);
    r24 = `-`(n1, 1);
    st n1 = r24;
    n2 = ld n1;
    check L12() else D5();
  D5():
    deopt 23 [0, n2];
  L12():
    n3 = force? n2;
    checkMissing(n3);
    r25 = `:`(0, n3);
    st j = r25;
    mAxis = ldf mAxis;
    check L13() else D6();
  D6():
    deopt 28 [];
  L13():
    p8 = prom<V +>{
      j = ld j;
      j1 = force? j;
      checkMissing(j1);
      n4 = ld n1;
      n5 = force? n4;
      checkMissing(n5);
      r26 = `/`(j1, n5);
      return r26;
    };
    r28 = dyn mAxis[, at](1.0, p8);
    check L14() else D7();
  D7():
    deopt 32 [r28];
  L14():
    grid1 = ld grid;
    check L15() else D8();
  D8():
    deopt 33 [grid1];
  L15():
    grid2 = force? grid1;
    checkMissing(grid2);
    c = `as.logical`(grid2);
    if c then L16() else L4();
  L4():
    goto L5();
  L5():
    nrow1 = ldf nrow;
    check L20() else D11();
  L16():
    abline = ldf abline;
    check L17() else D9();
  D9():
    deopt 36 [];
  D11():
    deopt 47 [];
  L17():
    p9 = prom<V +>{
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      r29 = `:`(0.0, n7);
      r30 = `-`(r29, 0.5);
      n8 = ld n1;
      n9 = force? n8;
      checkMissing(n9);
      r31 = `/`(r30, n9);
      return r31;
    };
    r33 = dyn abline[v, col, lty](p9, "gray77", "dotted");
    check L18() else D10();
  L20():
    p10 = prom<V +>{
      m11 = ld m;
      m12 = force? m11;
      checkMissing(m12);
      return m12;
    };
    r36 = dyn nrow1(p10);
    check L21() else D12();
  D10():
    deopt 43 [r33];
  D12():
    deopt 49 [r36];
  L18():
    goto L5();
  L21():
    st n = r36;
    n10 = ld n;
    check L22() else D13();
  D13():
    deopt 51 [n10];
  L22():
    n11 = force? n10;
    checkMissing(n11);
    r37 = `-`(n11, 1);
    st n1 = r37;
    n12 = ld n1;
    check L23() else D14();
  D14():
    deopt 57 [0, n12];
  L23():
    n13 = force? n12;
    checkMissing(n13);
    r38 = `:`(0, n13);
    st j = r38;
    mAxis1 = ldf mAxis;
    check L24() else D15();
  D15():
    deopt 62 [];
  L24():
    p11 = prom<V +>{
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      n14 = ld n1;
      n15 = force? n14;
      checkMissing(n15);
      r39 = `/`(j3, n15);
      r40 = `-`(1.0, r39);
      return r40;
    };
    r42 = dyn mAxis1[, at, las](2.0, p11, 1.0);
    check L25() else D16();
  D16():
    deopt 68 [r42];
  L25():
    grid3 = ld grid;
    check L26() else D17();
  D17():
    deopt 69 [grid3];
  L26():
    grid4 = force? grid3;
    checkMissing(grid4);
    c1 = `as.logical`(grid4);
    if c1 then L27() else L6();
  L6():
    invisible.0();
    popenv;
    return NULL;
  L27():
    abline1 = ldf abline;
    check L28() else D18();
  D18():
    deopt 72 [];
  L28():
    p12 = prom<V +>{
      n16 = ld n;
      n17 = force? n16;
      checkMissing(n17);
      r43 = `:`(0.0, n17);
      r44 = `-`(r43, 0.5);
      n18 = ld n1;
      n19 = force? n18;
      checkMissing(n19);
      r45 = `/`(r44, n19);
      return r45;
    };
    r47 = dyn abline1[h, col, lty](p12, "gray77", "dotted");
    check L29() else D19();
  D19():
    deopt 79 [r47];
  L29():
    popenv;
    return r47;
  }
}
fun inner657898296(side, at, `...`) {
  (reg side:*, reg at:*, reg ddd:dots) -+> V { var side:*, var at:*, var `...`:dots?, reg axis:cls, reg side1:*, reg side2:V, reg p:p(V +), reg at1:*, reg at2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg j:*, reg j1:V, reg r4:V, reg as_character:cls, reg r5:V, reg p2:p(V +), reg ddd1:dots?, reg r7:V |
    mkenv;
    st side = side;
    st at = at;
    st `...` = ddd;
    axis = ldf axis;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    p1 = prom<V +>{
      at1 = ld at;
      at2 = force? at1;
      checkMissing(at2);
      return at2;
    };
    p2 = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      j = ld j;
      j1 = force? j;
      checkMissing(j1);
      r4 = `+`(j1, 1);
      as_character = ldf `as.character` in base;
      r5 = dyn as_character(r4);
      goto L0(r5);
    L2():
      r2 = dyn base(<lang `+`(j, 1)>);
      goto L0(r2);
    };
    ddd1 = ld `...`;
    r7 = dyn axis[, at, labels, col, `col.axis`, `...`](p, p1, p2, "gray", 1.0, ddd1);
    check L1() else D1();
  D1():
    deopt 12 [r7];
  L1():
    popenv;
    return r7;
  }
}