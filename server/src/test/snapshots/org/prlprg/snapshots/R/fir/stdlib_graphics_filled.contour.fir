fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg r3:V, reg filled_contour:cls, reg volcano:*, reg volcano1:V, reg p:p(V +), reg r5:V, reg nrow:cls, reg volcano2:*, reg volcano3:V, reg p1:p(V +), reg r7:V, reg r8:V, reg r9:V, reg ncol:cls, reg volcano4:*, reg volcano5:V, reg p2:p(V +), reg r11:V, reg r12:V, reg r13:V, reg filled_contour1:cls, reg x:*, reg x1:V, reg p3:p(V +), reg y:*, reg y1:V, reg p4:p(V +), reg volcano6:*, reg volcano7:V, reg p5:p(V +), reg r17:cls, reg p6:p(V +), reg title:cls, reg r19:V, reg p7:p(V +), reg axis:cls, reg seq:cls, reg r21:V, reg p8:p(V +), reg axis1:cls, reg seq1:cls, reg r24:V, reg p9:p(V +), reg r26:V, reg p10:p(V +), reg title1:cls, reg r28:V, reg p11:p(V +), reg axis2:cls, reg seq2:cls, reg r30:V, reg p12:p(V +), reg r32:V, reg p13:p(V +), reg r34:V, reg mtext:cls, reg paste:cls, reg R_version_string:*, reg R_version_string1:V, reg p14:p(V +), reg r36:V, reg p15:p(V +), reg r38:V, reg expand_grid:cls, reg r39:V, reg p16:p(V +), reg r41:V, reg p17:p(V +), reg r43:V, reg matrix:cls, reg a:*, reg a1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r44:V, reg a4:*, reg a5:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r45:V, reg r46:V, reg p18:p(V +), reg r48:V, reg filled_contour2:cls, reg r49:V, reg p19:p(V +), reg r51:V, reg p20:p(V +), reg b:*, reg b1:V, reg p21:p(V +), reg axis3:cls, reg axis4:cls, reg points:cls, reg r56:V, reg p22:p(V +), reg r58:V, reg seq3:cls, reg p23:p(V +), reg p24:p(V +), reg r61:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r62:V, reg r63:V, reg outer:cls, reg x2:*, reg x3:V, reg r64:V, reg p25:p(V +), reg y2:*, reg y3:V, reg r66:V, reg p26:p(V +), reg __2:*, reg __3:V, reg p27:p(V +), reg r69:V, reg r70:V, reg filled_contour3:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r71:V, reg r72:V, reg r73:*, reg r74:V, reg r75:V, reg r76:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r79:V, reg r80:V, reg r81:V, reg r82:*, reg r83:V, reg r84:V, reg r85:V, reg r86:V, reg r87:V, reg p28:p(V +), reg r89:V, reg filled_contour4:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r90:V, reg r91:V, reg r92:*, reg r93:V, reg r94:V, reg r95:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r98:V, reg r99:V, reg r100:V, reg r101:*, reg r102:V, reg r103:V, reg r104:V, reg r105:V, reg r106:V, reg p29:p(V +), reg p30:p(V +), reg r109:V |
    mkenv;
    r = clos inner1869391902;
    st `filled.contour` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    filled_contour = ldf `filled.contour`;
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
      volcano = ld volcano;
      volcano1 = force? volcano;
      checkMissing(volcano1);
      return volcano1;
    };
    r5 = dyn filled_contour[, asp](p, 1.0);
    check L7() else D3();
  D1():
    deopt 7 [r3];
  D3():
    deopt 13 [r5];
  L5():
    goto L0();
  L7():
    nrow = ldf nrow;
    check L8() else D4();
  D4():
    deopt 17 [10.0, 1.0];
  L8():
    p1 = prom<V +>{
      volcano2 = ld volcano;
      volcano3 = force? volcano2;
      checkMissing(volcano3);
      return volcano3;
    };
    r7 = dyn nrow(p1);
    check L9() else D5();
  D5():
    deopt 19 [10.0, 1.0, r7];
  L9():
    r8 = `:`(1.0, r7);
    r9 = `*`(10.0, r8);
    st x = r9;
    ncol = ldf ncol;
    check L10() else D6();
  D6():
    deopt 26 [10.0, 1.0];
  L10():
    p2 = prom<V +>{
      volcano4 = ld volcano;
      volcano5 = force? volcano4;
      checkMissing(volcano5);
      return volcano5;
    };
    r11 = dyn ncol(p2);
    check L11() else D7();
  D7():
    deopt 28 [10.0, 1.0, r11];
  L11():
    r12 = `:`(1.0, r11);
    r13 = `*`(10.0, r12);
    st y = r13;
    filled_contour1 = ldf `filled.contour`;
    check L12() else D8();
  D8():
    deopt 33 [];
  L12():
    p3 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p5 = prom<V +>{
      volcano6 = ld volcano;
      volcano7 = force? volcano6;
      checkMissing(volcano7);
      return volcano7;
    };
    p6 = prom<V +>{
      r17 = clos inner2119503979;
      return r17;
    };
    p7 = prom<V +>{
      title = ldf title;
      r19 = dyn title[main, xlab, ylab]("The Topography of Maunga Whau", "Meters North", "Meters West");
      return r19;
    };
    p10 = prom<V +>{
      axis = ldf axis;
      p8 = prom<V +>{
        seq = ldf seq;
        r21 = dyn seq[, , by](100.0, 800.0, 100.0);
        return r21;
      };
      dyn axis(1.0, p8);
      axis1 = ldf axis;
      p9 = prom<V +>{
        seq1 = ldf seq;
        r24 = dyn seq1[, , by](100.0, 600.0, 100.0);
        return r24;
      };
      r26 = dyn axis1(2.0, p9);
      return r26;
    };
    p11 = prom<V +>{
      title1 = ldf title;
      r28 = dyn title1[main]("Height\n(meters)");
      return r28;
    };
    p13 = prom<V +>{
      axis2 = ldf axis;
      p12 = prom<V +>{
        seq2 = ldf seq;
        r30 = dyn seq2[, , by](90.0, 190.0, 10.0);
        return r30;
      };
      r32 = dyn axis2(4.0, p12);
      return r32;
    };
    r34 = dyn filled_contour1[, , , `color.palette`, `plot.title`, `plot.axes`, `key.title`, `key.axes`](p3, p4, p5, p6, p7, p10, p11, p13);
    check L13() else D9();
  D9():
    deopt 47 [r34];
  L13():
    mtext = ldf mtext;
    check L14() else D10();
  D10():
    deopt 49 [];
  L14():
    p15 = prom<V +>{
      paste = ldf paste;
      p14 = prom<V +>{
        R_version_string = ld `R.version.string`;
        R_version_string1 = force? R_version_string;
        checkMissing(R_version_string1);
        return R_version_string1;
      };
      r36 = dyn paste("filled.contour(.) from", p14);
      return r36;
    };
    r38 = dyn mtext[, side, line, adj, cex](p15, 1.0, 4.0, 1.0, 0.66);
    check L15() else D11();
  D11():
    deopt 59 [r38];
  L15():
    expand_grid = ldf `expand.grid`;
    check L16() else D12();
  D12():
    deopt 61 [];
  L16():
    p16 = prom<V +>{
      r39 = `:`(1.0, 20.0);
      return r39;
    };
    p17 = prom<V +>{
      r41 = `:`(1.0, 20.0);
      return r41;
    };
    r43 = dyn expand_grid(p16, p17);
    check L17() else D13();
  D13():
    deopt 64 [r43];
  L17():
    st a = r43;
    matrix = ldf matrix;
    check L18() else D14();
  D14():
    deopt 67 [];
  L18():
    p18 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      c = `is.object`(a1);
      if c then L2() else L3();
    L0(dx1):
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      c1 = `is.object`(a5);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("[", a1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3();
    L3():
      __ = ldf `[` in base;
      r44 = dyn __(a1, <missing>, 1.0);
      goto L0(r44);
    L1(dx6, dx7):
      r46 = `+`(dx6, dx7);
      return r46;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", a5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dx1);
    L6(dx3):
      __1 = ldf `[` in base;
      r45 = dyn __1(a5, <missing>, 2.0);
      goto L1(dx3, r45);
    L7():
      dx5 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx1, dx5);
    };
    r48 = dyn matrix(p18, 20.0);
    check L19() else D15();
  D15():
    deopt 70 [r48];
  L19():
    st b = r48;
    filled_contour2 = ldf `filled.contour`;
    check L20() else D16();
  D16():
    deopt 73 [];
  L20():
    p19 = prom<V +>{
      r49 = `:`(1.0, 20.0);
      return r49;
    };
    p20 = prom<V +>{
      r51 = `:`(1.0, 20.0);
      return r51;
    };
    p21 = prom<V +>{
      b = ld b;
      b1 = force? b;
      checkMissing(b1);
      return b1;
    };
    p22 = prom<V +>{
      axis3 = ldf axis;
      dyn axis3(1.0);
      axis4 = ldf axis;
      dyn axis4(2.0);
      points = ldf points;
      r56 = dyn points(10.0, 10.0);
      return r56;
    };
    r58 = dyn filled_contour2[x, y, z, `plot.axes`](p19, p20, p21, p22);
    check L21() else D17();
  D17():
    deopt 82 [r58];
  L21():
    seq3 = ldf seq;
    check L22() else D18();
  D18():
    deopt 84 [];
  L22():
    p23 = prom<V +>{
      return -12.566370614359172;
    };
    p24 = prom<V +>{
      return 12.566370614359172;
    };
    r61 = dyn seq3[, , `length.out`](p23, p24, 27.0);
    check L23() else D19();
  D19():
    deopt 89 [r61];
  L23():
    st y = r61;
    st x = r61;
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L1(r63):
    st r = r63;
    filled_contour3 = ldf `filled.contour`;
    check L28() else D22();
  L24():
    outer = ldf outer;
    check L26() else D20();
  L25():
    r62 = dyn base1(<lang outer(`^`(x, 2.0), `^`(y, 2.0), `+`)>);
    goto L1(r62);
  D20():
    deopt 94 [];
  D22():
    deopt 102 [];
  L26():
    p25 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      r64 = `^`(x3, 2.0);
      return r64;
    };
    p26 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      r66 = `^`(y3, 2.0);
      return r66;
    };
    p27 = prom<V +>{
      __2 = ld `+`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r69 = dyn outer(p25, p26, p27);
    check L27() else D21();
  L28():
    p28 = prom<V +>{
      sym2 = ldf cos;
      base2 = ldf cos in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r72):
      sym3 = ldf exp;
      base3 = ldf exp in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L2():
      r73 = ld r;
      r74 = force? r73;
      checkMissing(r74);
      r75 = `^`(r74, 2.0);
      r76 = cos(r75);
      goto L0(r76);
    L3():
      r71 = dyn base2(<lang `^`(r, 2.0)>);
      goto L0(r71);
    L1(r80, r81):
      r87 = `*`(r80, r81);
      return r87;
    L4():
      r82 = ld r;
      r83 = force? r82;
      checkMissing(r83);
      r84 = `-`(<missing>, r83);
      r85 = `/`(r84, 6.283185307179586);
      r86 = exp(r85);
      goto L1(r72, r86);
    L5():
      r79 = dyn base3(<lang `/`(`-`(r), `(`(`*`(2.0, pi)))>);
      goto L1(r72, r79);
    };
    r89 = dyn filled_contour3[, axes, `key.border`](p28, FALSE, NA_LGL);
    check L29() else D23();
  D21():
    deopt 98 [r69];
  D23():
    deopt 108 [r89];
  L27():
    r70 = sqrt(r69);
    goto L1(r70);
  L29():
    filled_contour4 = ldf `filled.contour`;
    check L30() else D24();
  D24():
    deopt 110 [];
  L30():
    p29 = prom<V +>{
      sym4 = ldf cos;
      base4 = ldf cos in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r91):
      sym5 = ldf exp;
      base5 = ldf exp in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L2():
      r92 = ld r;
      r93 = force? r92;
      checkMissing(r93);
      r94 = `^`(r93, 2.0);
      r95 = cos(r94);
      goto L0(r95);
    L3():
      r90 = dyn base4(<lang `^`(r, 2.0)>);
      goto L0(r90);
    L1(r99, r100):
      r106 = `*`(r99, r100);
      return r106;
    L4():
      r101 = ld r;
      r102 = force? r101;
      checkMissing(r102);
      r103 = `-`(<missing>, r102);
      r104 = `/`(r103, 6.283185307179586);
      r105 = exp(r104);
      goto L1(r91, r105);
    L5():
      r98 = dyn base5(<lang `/`(`-`(r), `(`(`*`(2.0, pi)))>);
      goto L1(r91, r98);
    };
    p30 = prom<V +>{
      return NULL;
    };
    r109 = dyn filled_contour4[, `frame.plot`, `plot.axes`](p29, FALSE, p30);
    check L31() else D25();
  D25():
    deopt 116 [r109];
  L31():
    popenv;
    return r109;
  }
}
fun inner1869391902(x, y, z, xlim, ylim, zlim, levels, nlevels, `color.palette`, col, `plot.title`, `plot.axes`, `key.title`, `key.axes`, `key.border`, asp, xaxs, yaxs, las, axes, `frame.plot`, `...`) {
  (reg x:*, reg y:*, reg z:*, reg xlim:*, reg ylim:*, reg zlim:*, reg levels:*, reg nlevels:*, reg color_palette:*, reg col:*, reg plot_title:*, reg plot_axes:*, reg key_title:*, reg key_axes:*, reg key_border:*, reg asp:*, reg xaxs:*, reg yaxs:*, reg las:*, reg axes:*, reg frame_plot:*, reg ddd:dots) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg seq:cls, reg nrow:cls, reg z1:*, reg z2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), var y:*, reg y_isMissing:L, reg y_orDefault:*, reg seq1:cls, reg ncol:cls, reg z3:*, reg z4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), var z:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg range:cls, reg r12:V, reg p6:p(V +), var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg y1:*, reg y2:V, reg range1:cls, reg r16:V, reg p7:p(V +), var zlim:*, reg zlim_isMissing:L, reg zlim_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg z5:*, reg z6:V, reg range2:cls, reg r20:V, reg p8:p(V +), var levels:*, reg levels_isMissing:L, reg levels_orDefault:*, reg pretty:cls, reg zlim1:*, reg zlim2:V, reg p9:p(V +), reg nlevels1:*, reg nlevels2:V, reg p10:p(V +), reg r24:V, reg p11:p(V +), var nlevels:*, reg nlevels_isMissing:L, reg nlevels_orDefault:*, var `color.palette`:*, reg color_palette_isMissing:L, reg color_palette_orDefault:*, reg r26:cls, reg p12:p(V +), var col:*, reg col_isMissing:L, reg col_orDefault:*, reg color_palette1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg levels1:*, reg levels2:V, reg length:cls, reg r30:V, reg r31:V, reg p13:p(V +), reg r33:V, reg p14:p(V +), var `plot.title`:*, var `plot.axes`:*, var `key.title`:*, var `key.axes`:*, var `key.border`:*, reg key_border_isMissing:L, reg key_border_orDefault:*, var asp:*, reg asp_isMissing:L, reg asp_orDefault:*, var xaxs:*, reg xaxs_isMissing:L, reg xaxs_orDefault:*, var yaxs:*, reg yaxs_isMissing:L, reg yaxs_orDefault:*, var las:*, reg las_isMissing:L, reg las_orDefault:*, var axes:*, reg axes_isMissing:L, reg axes_orDefault:*, var `frame.plot`:*, reg frame_plot_isMissing:L, reg frame_plot_orDefault:*, reg axes1:*, reg axes2:V, reg p15:p(V +), var `...`:dots?, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg missing:cls, reg r38:V, reg c:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg missing1:cls, reg r41:V, reg r42:V, reg c1:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg x3:*, reg x4:V, reg is_list:cls, reg r45:V, reg c2:L, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r46:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r47:V, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r48:V, reg dx6:V, reg x17:*, reg x18:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg nrow1:cls, reg z7:*, reg z8:V, reg p16:p(V +), reg r52:V, reg seq_int:cls, reg r53:V, reg dx7:V, reg stop:cls, reg r54:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg x19:*, reg x20:V, reg is_list1:cls, reg r57:V, reg c6:L, reg x21:*, reg x22:V, reg c7:L, reg x24:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg r58:V, reg x25:*, reg x26:V, reg c8:L, reg x28:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg r59:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r60:V, reg r61:V, reg diff:cls, reg x29:*, reg x30:V, reg p17:p(V +), reg r63:V, reg r64:V, reg any:cls, reg r65:V, reg c9:L, reg c10:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg c14:L, reg r67:V, reg diff1:cls, reg y3:*, reg y4:V, reg p18:p(V +), reg r69:V, reg r70:V, reg any1:cls, reg r71:V, reg c15:L, reg c16:V, reg c18:L, reg stop1:cls, reg r72:V, reg par:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r74:V, reg r75:V, reg c19:cls, reg r76:V, reg p19:p(V +), reg r78:V, reg c20:L, reg r80:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg r81:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r82:V, reg on_exit:cls, reg r84:V, reg mar_orig:*, reg mar_orig1:V, reg c21:L, reg r86:R, reg mar_orig3:V, reg dr12:V, reg dc6:L, reg dx15:V, reg r88:R, reg dx16:V, reg __:cls, reg r89:V, reg r90:V, reg par1:cls, reg r91:V, reg r92:V, reg r93:V, reg layout:cls, reg matrix:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r94:V, reg r95:V, reg c22:cls, reg r96:V, reg p20:p(V +), reg r98:V, reg p21:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r100:V, reg r101:V, reg lcm:cls, reg w:*, reg w1:V, reg p22:p(V +), reg r103:V, reg c23:cls, reg r104:V, reg p23:p(V +), reg r106:V, reg par2:cls, reg las1:*, reg las2:V, reg p24:p(V +), reg r108:V, reg mar_orig4:*, reg mar_orig5:V, reg mar:*, reg mar1:V, reg c24:L, reg mar3:V, reg dr14:V, reg dc7:L, reg dx17:V, reg dx18:V, reg __1:cls, reg r109:V, reg l:*, reg c25:L, reg dx20:V, reg l2:*, reg dr16:V, reg dc8:L, reg dx22:V, reg dx24:V, reg ___:cls, reg r110:V, reg l3:*, reg c26:L, reg r112:R, reg l5:*, reg dr18:V, reg dc9:L, reg dx25:V, reg dx26:V, reg ___1:cls, reg r115:V, reg par3:cls, reg mar4:*, reg mar5:V, reg p25:p(V +), reg r117:V, reg plot_new:cls, reg r118:V, reg plot_window:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r119:V, reg r120:V, reg c27:cls, reg r121:V, reg p26:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r123:V, reg r124:V, reg levels3:*, reg levels4:V, reg range3:cls, reg r125:V, reg p27:p(V +), reg r127:V, reg rect:cls, reg levels5:*, reg levels6:V, reg c28:L, reg levels8:V, reg dr20:V, reg dc10:L, reg dx27:V, reg dx28:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r128:V, reg levels11:V, reg r129:V, reg levels12:*, reg levels13:V, reg length1:cls, reg r130:V, reg r131:V, reg __2:cls, reg r132:V, reg p28:p(V +), reg levels14:*, reg levels15:V, reg c29:L, reg levels17:V, reg dr22:V, reg dc11:L, reg dx29:V, reg dx30:V, reg __3:cls, reg r134:V, reg p29:p(V +), reg col1:*, reg col2:V, reg p30:p(V +), reg key_border1:*, reg key_border2:V, reg p31:p(V +), reg r138:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r139:V, reg r140:V, reg missing2:cls, reg r141:V, reg c30:L, reg axes3:*, reg axes4:V, reg c31:L, reg axis:cls, reg r142:V, reg r143:V, reg key_axes1:*, reg key_axes2:V, reg box:cls, reg r145:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r146:V, reg r147:V, reg missing3:cls, reg r148:V, reg r149:V, reg c32:L, reg key_title1:*, reg key_title2:V, reg mar_orig6:*, reg mar_orig7:V, reg l6:*, reg c33:L, reg r151:R, reg l8:*, reg dr24:V, reg dc12:L, reg dx31:V, reg dx32:V, reg ___2:cls, reg r154:V, reg par4:cls, reg mar6:*, reg mar7:V, reg p32:p(V +), reg r156:V, reg plot_new1:cls, reg r157:V, reg plot_window1:cls, reg xlim1:*, reg xlim2:V, reg p33:p(V +), reg ylim1:*, reg ylim2:V, reg p34:p(V +), reg xaxs1:*, reg xaxs2:V, reg p35:p(V +), reg yaxs1:*, reg yaxs2:V, reg p36:p(V +), reg asp1:*, reg asp2:V, reg p37:p(V +), reg r163:V, reg _filled_contour:cls, reg x31:*, reg x32:V, reg p38:p(V +), reg y5:*, reg y6:V, reg p39:p(V +), reg z9:*, reg z10:V, reg p40:p(V +), reg levels18:*, reg levels19:V, reg p41:p(V +), reg col3:*, reg col4:V, reg p42:p(V +), reg r169:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r170:V, reg r171:V, reg missing4:cls, reg r172:V, reg c34:L, reg axes5:*, reg axes6:V, reg c35:L, reg title:cls, reg r173:V, reg Axis:cls, reg x33:*, reg x34:V, reg p43:p(V +), reg r175:V, reg Axis1:cls, reg y7:*, reg y8:V, reg p44:p(V +), reg r177:V, reg r178:V, reg plot_axes1:*, reg plot_axes2:V, reg frame_plot1:*, reg frame_plot2:V, reg c36:L, reg box1:cls, reg r180:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r182:V, reg r183:V, reg missing5:cls, reg r184:V, reg c37:L, reg title1:cls, reg ddd1:dots?, reg r185:V, reg plot_title1:*, reg plot_title2:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r187:V, reg r188:V, reg invisible:cls, reg r189:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p2 = prom<V +>{
      seq = ldf seq;
      p1 = prom<V +>{
        nrow = ldf nrow;
        p = prom<V +>{
          z1 = ld z;
          z2 = force? z1;
          checkMissing(z2);
          return z2;
        };
        r1 = dyn nrow(p);
        return r1;
      };
      r3 = dyn seq[, , `length.out`](0.0, 1.0, p1);
      return r3;
    };
    goto L1(p2);
  L1(x_orDefault):
    st x = x_orDefault;
    y_isMissing = missing.0(y);
    if y_isMissing then L2() else L3(y);
  L2():
    p5 = prom<V +>{
      seq1 = ldf seq;
      p4 = prom<V +>{
        ncol = ldf ncol;
        p3 = prom<V +>{
          z3 = ld z;
          z4 = force? z3;
          checkMissing(z4);
          return z4;
        };
        r6 = dyn ncol(p3);
        return r6;
      };
      r8 = dyn seq1[, , `length.out`](0.0, 1.0, p4);
      return r8;
    };
    goto L3(p5);
  L3(y_orDefault):
    st y = y_orDefault;
    st z = z;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L4() else L5(xlim);
  L4():
    p6 = prom<V +>{
      sym = ldf range;
      base = ldf range in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r11):
      return r11;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      range = ldf range in base;
      r12 = dyn range(x2, TRUE);
      goto L0(r12);
    L2():
      r10 = dyn base[, finite](<sym x>, TRUE);
      goto L0(r10);
    };
    goto L5(p6);
  L5(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L6() else L7(ylim);
  L6():
    p7 = prom<V +>{
      sym1 = ldf range;
      base1 = ldf range in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      range1 = ldf range in base;
      r16 = dyn range1(y2, TRUE);
      goto L0(r16);
    L2():
      r14 = dyn base1[, finite](<sym y>, TRUE);
      goto L0(r14);
    };
    goto L7(p7);
  L7(ylim_orDefault):
    st ylim = ylim_orDefault;
    zlim_isMissing = missing.0(zlim);
    if zlim_isMissing then L8() else L9(zlim);
  L8():
    p8 = prom<V +>{
      sym2 = ldf range;
      base2 = ldf range in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      z5 = ld z;
      z6 = force? z5;
      checkMissing(z6);
      range2 = ldf range in base;
      r20 = dyn range2(z6, TRUE);
      goto L0(r20);
    L2():
      r18 = dyn base2[, finite](<sym z>, TRUE);
      goto L0(r18);
    };
    goto L9(p8);
  L9(zlim_orDefault):
    st zlim = zlim_orDefault;
    levels_isMissing = missing.0(levels);
    if levels_isMissing then L10() else L11(levels);
  L10():
    p11 = prom<V +>{
      pretty = ldf pretty;
      p9 = prom<V +>{
        zlim1 = ld zlim;
        zlim2 = force? zlim1;
        checkMissing(zlim2);
        return zlim2;
      };
      p10 = prom<V +>{
        nlevels1 = ld nlevels;
        nlevels2 = force? nlevels1;
        checkMissing(nlevels2);
        return nlevels2;
      };
      r24 = dyn pretty(p9, p10);
      return r24;
    };
    goto L11(p11);
  L11(levels_orDefault):
    st levels = levels_orDefault;
    nlevels_isMissing = missing.0(nlevels);
    if nlevels_isMissing then L12(20.0) else L12(nlevels);
  L12(nlevels_orDefault):
    st nlevels = nlevels_orDefault;
    color_palette_isMissing = missing.0(color_palette);
    if color_palette_isMissing then L13() else L14(color_palette);
  L13():
    p12 = prom<V +>{
      r26 = clos inner2119503979;
      return r26;
    };
    goto L14(p12);
  L14(color_palette_orDefault):
    st `color.palette` = color_palette_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L15() else L16(col);
  L15():
    p14 = prom<V +>{
      color_palette1 = ldf `color.palette`;
      p13 = prom<V +>{
        sym3 = ldf length;
        base3 = ldf length in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r29):
        r31 = `-`(r29, 1.0);
        return r31;
      L1():
        levels1 = ld levels;
        levels2 = force? levels1;
        checkMissing(levels2);
        length = ldf length in base;
        r30 = dyn length(levels2);
        goto L0(r30);
      L2():
        r28 = dyn base3(<sym levels>);
        goto L0(r28);
      };
      r33 = dyn color_palette1(p13);
      return r33;
    };
    goto L16(p14);
  L16(col_orDefault):
    st col = col_orDefault;
    st `plot.title` = plot_title;
    st `plot.axes` = plot_axes;
    st `key.title` = key_title;
    st `key.axes` = key_axes;
    key_border_isMissing = missing.0(key_border);
    if key_border_isMissing then L17(NULL) else L17(key_border);
  L17(key_border_orDefault):
    st `key.border` = key_border_orDefault;
    asp_isMissing = missing.0(asp);
    if asp_isMissing then L18(NA_LGL) else L18(asp);
  L18(asp_orDefault):
    st asp = asp_orDefault;
    xaxs_isMissing = missing.0(xaxs);
    if xaxs_isMissing then L19("i") else L19(xaxs);
  L19(xaxs_orDefault):
    st xaxs = xaxs_orDefault;
    yaxs_isMissing = missing.0(yaxs);
    if yaxs_isMissing then L20("i") else L20(yaxs);
  L20(yaxs_orDefault):
    st yaxs = yaxs_orDefault;
    las_isMissing = missing.0(las);
    if las_isMissing then L21(1.0) else L21(las);
  L21(las_orDefault):
    st las = las_orDefault;
    axes_isMissing = missing.0(axes);
    if axes_isMissing then L22(TRUE) else L22(axes);
  L22(axes_orDefault):
    st axes = axes_orDefault;
    frame_plot_isMissing = missing.0(frame_plot);
    if frame_plot_isMissing then L23() else L24(frame_plot);
  L23():
    p15 = prom<V +>{
      axes1 = ld axes;
      axes2 = force? axes1;
      checkMissing(axes2);
      return axes2;
    };
    goto L24(p15);
  L24(frame_plot_orDefault):
    st `frame.plot` = frame_plot_orDefault;
    st `...` = ddd;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L25(r37):
    c = `as.logical`(r37);
    if c then L69() else L26();
  L67():
    missing = ldf missing in base;
    r38 = dyn missing(<sym z>);
    goto L25(r38);
  L68():
    r36 = dyn base4(<sym z>);
    goto L25(r36);
  L26():
    sym8 = ldf `is.list`;
    base8 = ldf `is.list` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L104() else L105();
  L34():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L120() else L121();
  L69():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L70() else L71();
  L27(r40):
    r42 = `!`(r40);
    c1 = `as.logical`(r42);
    if c1 then L72() else L28();
  L35(r56):
    c6 = `as.logical`(r56);
    if c6 then L108() else L36();
  L37(r61):
    c9 = `as.logical`(r61);
    if c9 then L38(c9) else L125();
  L70():
    missing1 = ldf missing in base;
    r41 = dyn missing1(<sym x>);
    goto L27(r41);
  L71():
    r39 = dyn base5(<sym x>);
    goto L27(r39);
  L104():
    x19 = ld x;
    check L106() else D11();
  L105():
    r55 = dyn base8(<sym x>);
    goto L35(r55);
  L120():
    diff = ldf diff;
    check L122() else D15();
  L121():
    r60 = dyn base9(<lang `<=`(diff(x), 0.0)>);
    goto L37(r60);
  D11():
    deopt 46 [x19];
  D15():
    deopt 63 [];
  L28():
    stop = ldf stop;
    check L101() else D9();
  L33(dx7):
    goto L34();
  L36():
    goto L34();
  L38(c10):
    c18 = `as.logical`(c10);
    if c18 then L132() else L40();
  L72():
    sym6 = ldf `is.list`;
    base6 = ldf `is.list` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L73() else L74();
  L106():
    x20 = force? x19;
    checkMissing(x20);
    is_list1 = ldf `is.list` in base;
    r57 = dyn is_list1(x20);
    check L107() else D12();
  L108():
    x21 = ld x;
    check L109() else D13();
  L122():
    p17 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      return x30;
    };
    r63 = dyn diff(p17);
    check L123() else D16();
  L125():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L126() else L127();
  D9():
    deopt 41 [];
  D12():
    deopt 49 [r57];
  D13():
    deopt 50 [x21];
  D16():
    deopt 65 [r63];
  L29(r44):
    c2 = `as.logical`(r44);
    if c2 then L77() else L30();
  L39(c14, r67):
    c15 = `as.logical`(r67);
    c16 = `||`(c14, c15);
    goto L38(c16);
  L40():
    goto L41();
  L41():
    par = ldf par;
    check L136() else D23();
  L73():
    x3 = ld x;
    check L75() else D0();
  L74():
    r43 = dyn base6(<sym x>);
    goto L29(r43);
  L101():
    r54 = dyn stop("no 'z' matrix specified");
    check L102() else D10();
  L107():
    goto L35(r57);
  L109():
    x22 = force? x21;
    checkMissing(x22);
    c7 = `is.object`(x22);
    if c7 then L111() else L112(x22);
  L123():
    r64 = `<=`(r63, 0.0);
    any = ldf any in base;
    r65 = dyn any(r64);
    check L124() else D17();
  L126():
    diff1 = ldf diff;
    check L128() else D18();
  L127():
    r66 = dyn base10(<lang `<=`(diff(y), 0.0)>);
    goto L39(c9, r66);
  L132():
    stop1 = ldf stop;
    check L133() else D21();
  D0():
    deopt 9 [x3];
  D10():
    deopt 43 [r54];
  D17():
    deopt 69 [r65];
  D18():
    deopt 73 [c9];
  D21():
    deopt 82 [];
  D23():
    deopt 88 [];
  L30():
    x17 = ld x;
    check L94() else D5();
  L31(dx6):
    goto L33(dx6);
  L75():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r45 = dyn is_list(x4);
    check L76() else D1();
  L77():
    x5 = ld x;
    check L78() else D2();
  L102():
    goto L33(r54);
  L110(dx10):
    st y = dx10;
    x25 = ld x;
    check L114() else D14();
  L111():
    dr6 = tryDispatchBuiltin.1("$", x22);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L113() else L112(dr6);
  L112(x24):
    r58 = `$`(x24, <sym y>);
    goto L110(r58);
  L124():
    goto L37(r65);
  L128():
    p18 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r69 = dyn diff1(p18);
    check L129() else D19();
  L133():
    r72 = dyn stop1("increasing 'x' and 'y' values expected");
    check L134() else D22();
  L136():
    p19 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      c19 = ldf c in base;
      r76 = dyn c19("mar", "las", "mfrow");
      goto L0(r76);
    L2():
      r74 = dyn base11("mar", "las", "mfrow");
      goto L0(r74);
    };
    r78 = dyn par(p19);
    check L137() else D24();
  D1():
    deopt 12 [r45];
  D2():
    deopt 13 [x5];
  D5():
    deopt 25 [x17];
  D14():
    deopt 54 [x25];
  D19():
    deopt 75 [c9, r69];
  D22():
    deopt 84 [r72];
  D24():
    deopt 90 [r78];
  L76():
    goto L29(r45);
  L78():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L80() else L81(x6);
  L94():
    x18 = force? x17;
    checkMissing(x18);
    st z = x18;
    sym7 = ldf `seq.int`;
    base7 = ldf `seq.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L95() else L96();
  L113():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L110(dx9);
  L114():
    x26 = force? x25;
    checkMissing(x26);
    c8 = `is.object`(x26);
    if c8 then L116() else L117(x26);
  L129():
    r70 = `<=`(r69, 0.0);
    any1 = ldf any in base;
    r71 = dyn any1(r70);
    check L130() else D20();
  L134():
    goto L41();
  L137():
    st `par.orig` = r78;
    c20 = `is.object`(r78);
    if c20 then L139() else L140(r78);
  D20():
    deopt 79 [c9, r71];
  L32(r50):
    st x = r50;
    goto L31(r50);
  L79(dx1):
    st z = dx1;
    x9 = ld x;
    check L83() else D3();
  L80():
    dr = tryDispatchBuiltin.1("$", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L82() else L81(dr);
  L81(x8):
    r46 = `$`(x8, <sym z>);
    goto L79(r46);
  L95():
    nrow1 = ldf nrow;
    check L97() else D6();
  L96():
    r49 = dyn base7[, , `length.out`](0.0, 1.0, <lang nrow(z)>);
    goto L32(r49);
  L115(dx12):
    st x = dx12;
    goto L34();
  L116():
    dr8 = tryDispatchBuiltin.1("$", x26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L118() else L117(dr8);
  L117(x28):
    r59 = `$`(x28, <sym x>);
    goto L115(r59);
  L130():
    goto L39(c9, r71);
  L138(dx14):
    st `mar.orig` = dx14;
    sym12 = ldf `on.exit`;
    base12 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L142() else L143();
  L139():
    dr10 = tryDispatchBuiltin.1("$", r78);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L141() else L140(dr10);
  L140(r80):
    r81 = `$`(r80, <sym mar>);
    goto L138(r81);
  D3():
    deopt 17 [x9];
  D6():
    deopt 33 [];
  L42():
    mar_orig = ld `mar.orig`;
    check L144() else D25();
  L82():
    dx = getTryDispatchBuiltinValue(dr);
    goto L79(dx);
  L83():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L85() else L86(x10);
  L97():
    p16 = prom<V +>{
      z7 = ld z;
      z8 = force? z7;
      checkMissing(z8);
      return z8;
    };
    r52 = dyn nrow1(p16);
    check L98() else D7();
  L118():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L115(dx11);
  L141():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L138(dx13);
  L142():
    on_exit = ldf `on.exit` in base;
    r84 = dyn on_exit(<lang par(par.orig)>);
    goto L42();
  L143():
    r82 = dyn base12(<lang par(par.orig)>);
    goto L42();
  D7():
    deopt 35 [r52];
  D25():
    deopt 98 [3.0, mar_orig];
  L84(dx3):
    st y = dx3;
    x13 = ld x;
    check L88() else D4();
  L85():
    dr2 = tryDispatchBuiltin.1("$", x10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L87() else L86(dr2);
  L86(x12):
    r47 = `$`(x12, <sym y>);
    goto L84(r47);
  L98():
    seq_int = ldf `seq.int` in base;
    r53 = dyn seq_int(0.0, 1.0, r52);
    check L99() else D8();
  L144():
    mar_orig1 = force? mar_orig;
    checkMissing(mar_orig1);
    c21 = `is.object`(mar_orig1);
    if c21 then L145() else L146(3.0, mar_orig1);
  D4():
    deopt 21 [x13];
  D8():
    deopt 38 [r53];
  L43(r88, dx16):
    r90 = `+`(r88, dx16);
    par1 = ldf par;
    check L148() else D26();
  L87():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L84(dx2);
  L88():
    x14 = force? x13;
    checkMissing(x14);
    c5 = `is.object`(x14);
    if c5 then L90() else L91(x14);
  L99():
    goto L32(r53);
  L145():
    dr12 = tryDispatchBuiltin.1("[", mar_orig1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L147() else L146(3.0, dr12);
  L146(r86, mar_orig3):
    __ = ldf `[` in base;
    r89 = dyn __(mar_orig3, 2);
    goto L43(r86, r89);
  D26():
    deopt 104 [r90];
  L89(dx5):
    st x = dx5;
    goto L31(dx5);
  L90():
    dr4 = tryDispatchBuiltin.1("$", x14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L92() else L91(dr4);
  L91(x16):
    r48 = `$`(x16, <sym x>);
    goto L89(r48);
  L147():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L43(3.0, dx15);
  L148():
    r91 = dyn par1("csi");
    check L149() else D27();
  D27():
    deopt 106 [r90, r91];
  L92():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L89(dx4);
  L149():
    r92 = `*`(r90, r91);
    r93 = `*`(r92, 2.54);
    st w = r93;
    layout = ldf layout;
    check L150() else D28();
  D28():
    deopt 112 [];
  L150():
    p21 = prom<V +>{
      matrix = ldf matrix;
      p20 = prom<V +>{
        sym13 = ldf c;
        base13 = ldf c in base;
        guard13 = `==`.4(sym13, base13);
        if guard13 then L1() else L2();
      L0(r95):
        return r95;
      L1():
        c22 = ldf c in base;
        r96 = dyn c22(2.0, 1.0);
        goto L0(r96);
      L2():
        r94 = dyn base13(2.0, 1.0);
        goto L0(r94);
      };
      r98 = dyn matrix[, ncol](p20, 2);
      return r98;
    };
    p23 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r101):
      return r101;
    L1():
      lcm = ldf lcm;
      p22 = prom<V +>{
        w = ld w;
        w1 = force? w;
        checkMissing(w1);
        return w1;
      };
      r103 = dyn lcm(p22);
      c23 = ldf c in base;
      r104 = dyn c23(1.0, r103);
      goto L0(r104);
    L2():
      r100 = dyn base14(1.0, <lang lcm(w)>);
      goto L0(r100);
    };
    r106 = dyn layout[, widths](p21, p23);
    check L151() else D29();
  D29():
    deopt 116 [r106];
  L151():
    par2 = ldf par;
    check L152() else D30();
  D30():
    deopt 118 [];
  L152():
    p24 = prom<V +>{
      las1 = ld las;
      las2 = force? las1;
      checkMissing(las2);
      return las2;
    };
    r108 = dyn par2[las](p24);
    check L153() else D31();
  D31():
    deopt 121 [r108];
  L153():
    mar_orig4 = ld `mar.orig`;
    check L154() else D32();
  D32():
    deopt 122 [mar_orig4];
  L154():
    mar_orig5 = force? mar_orig4;
    checkMissing(mar_orig5);
    st mar = mar_orig5;
    mar = ld mar;
    check L155() else D33();
  D33():
    deopt 125 [mar];
  L155():
    mar1 = force? mar;
    checkMissing(mar1);
    c24 = `is.object`(mar1);
    if c24 then L156() else L157(mar1);
  L44(dx18):
    l = ld mar;
    c25 = `is.object`(l);
    if c25 then L159() else L160(dx18, l);
  L156():
    dr14 = tryDispatchBuiltin.1("[", mar1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L158() else L157(dr14);
  L157(mar3):
    __1 = ldf `[` in base;
    r109 = dyn __1(mar3, 2);
    goto L44(r109);
  L45(dx24):
    st mar = dx24;
    l3 = ld mar;
    c26 = `is.object`(l3);
    if c26 then L162() else L163(1.0, l3);
  L158():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L44(dx17);
  L159():
    dr16 = tryDispatchBuiltin.0("[<-", l, dx18);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L161() else L160(dx18, dr16);
  L160(dx20, l2):
    ___ = ldf `[<-` in base;
    r110 = dyn ___(l2, dx18, 4);
    goto L45(r110);
  L46(dx26):
    st mar = dx26;
    par3 = ldf par;
    check L165() else D34();
  L161():
    dx22 = getTryDispatchBuiltinValue(dr16);
    goto L45(dx22);
  L162():
    dr18 = tryDispatchBuiltin.0("[<-", l3, 1.0);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L164() else L163(1.0, dr18);
  L163(r112, l5):
    ___1 = ldf `[<-` in base;
    r115 = dyn ___1(l5, 1.0, 2);
    goto L46(r115);
  D34():
    deopt 143 [];
  L164():
    dx25 = getTryDispatchBuiltinValue(dr18);
    goto L46(dx25);
  L165():
    p25 = prom<V +>{
      mar4 = ld mar;
      mar5 = force? mar4;
      checkMissing(mar5);
      return mar5;
    };
    r117 = dyn par3[mar](p25);
    check L166() else D35();
  D35():
    deopt 146 [r117];
  L166():
    plot_new = ldf `plot.new`;
    check L167() else D36();
  D36():
    deopt 148 [];
  L167():
    r118 = dyn plot_new();
    check L168() else D37();
  D37():
    deopt 149 [r118];
  L168():
    plot_window = ldf `plot.window`;
    check L169() else D38();
  D38():
    deopt 151 [];
  L169():
    p26 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r120):
      return r120;
    L1():
      c27 = ldf c in base;
      r121 = dyn c27(0.0, 1.0);
      goto L0(r121);
    L2():
      r119 = dyn base15(0.0, 1.0);
      goto L0(r119);
    };
    p27 = prom<V +>{
      sym16 = ldf range;
      base16 = ldf range in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r124):
      return r124;
    L1():
      levels3 = ld levels;
      levels4 = force? levels3;
      checkMissing(levels4);
      range3 = ldf range in base;
      r125 = dyn range3(levels4);
      goto L0(r125);
    L2():
      r123 = dyn base16(<sym levels>);
      goto L0(r123);
    };
    r127 = dyn plot_window[xlim, ylim, xaxs, yaxs](p26, p27, "i", "i");
    check L170() else D39();
  D39():
    deopt 160 [r127];
  L170():
    rect = ldf rect;
    check L171() else D40();
  D40():
    deopt 162 [];
  L171():
    p28 = prom<V +>{
      levels5 = ld levels;
      levels6 = force? levels5;
      checkMissing(levels6);
      c28 = `is.object`(levels6);
      if c28 then L2() else L3(levels6);
    L0(dx28):
      return dx28;
    L2():
      dr20 = tryDispatchBuiltin.1("[", levels6);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(levels8):
      sym17 = ldf length;
      base17 = ldf length in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L5() else L6();
    L1(levels11, r129):
      r131 = `-`(<missing>, r129);
      __2 = ldf `[` in base;
      r132 = dyn __2(levels11, r131);
      goto L0(r132);
    L4():
      dx27 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx27);
    L5():
      levels12 = ld levels;
      levels13 = force? levels12;
      checkMissing(levels13);
      length1 = ldf length in base;
      r130 = dyn length1(levels13);
      goto L1(levels8, r130);
    L6():
      r128 = dyn base17(<sym levels>);
      goto L1(levels8, r128);
    };
    p29 = prom<V +>{
      levels14 = ld levels;
      levels15 = force? levels14;
      checkMissing(levels15);
      c29 = `is.object`(levels15);
      if c29 then L1() else L2(levels15);
    L0(dx30):
      return dx30;
    L1():
      dr22 = tryDispatchBuiltin.1("[", levels15);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(levels17):
      __3 = ldf `[` in base;
      r134 = dyn __3(levels17, -1);
      goto L0(r134);
    L3():
      dx29 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx29);
    };
    p30 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p31 = prom<V +>{
      key_border1 = ld `key.border`;
      key_border2 = force? key_border1;
      checkMissing(key_border2);
      return key_border2;
    };
    r138 = dyn rect[, , , , col, border](0.0, p28, 1.0, p29, p30, p31);
    check L172() else D41();
  D41():
    deopt 171 [r138];
  L172():
    sym18 = ldf missing;
    base18 = ldf missing in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L173() else L174();
  L47(r140):
    c30 = `as.logical`(r140);
    if c30 then L175() else L48();
  L173():
    missing2 = ldf missing in base;
    r141 = dyn missing2(<sym key.axes>);
    goto L47(r141);
  L174():
    r139 = dyn base18(<sym key.axes>);
    goto L47(r139);
  L48():
    key_axes1 = ld `key.axes`;
    check L182() else D45();
  L51():
    box = ldf box;
    check L183() else D46();
  L175():
    axes3 = ld axes;
    check L176() else D42();
  D42():
    deopt 175 [axes3];
  D45():
    deopt 183 [key_axes1];
  D46():
    deopt 186 [];
  L176():
    axes4 = force? axes3;
    checkMissing(axes4);
    c31 = `as.logical`(axes4);
    if c31 then L177() else L49();
  L182():
    key_axes2 = force? key_axes1;
    checkMissing(key_axes2);
    goto L51();
  L183():
    r145 = dyn box();
    check L184() else D47();
  D47():
    deopt 187 [r145];
  L49():
    goto L50(NULL);
  L50(r143):
    goto L51();
  L177():
    axis = ldf axis;
    check L178() else D43();
  L184():
    sym19 = ldf missing;
    base19 = ldf missing in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L185() else L186();
  D43():
    deopt 178 [];
  L52(r147):
    r149 = `!`(r147);
    c32 = `as.logical`(r149);
    if c32 then L187() else L53();
  L178():
    r142 = dyn axis(4.0);
    check L179() else D44();
  L185():
    missing3 = ldf missing in base;
    r148 = dyn missing3(<sym key.title>);
    goto L52(r148);
  L186():
    r146 = dyn base19(<sym key.title>);
    goto L52(r146);
  D44():
    deopt 180 [r142];
  L53():
    goto L54();
  L54():
    mar_orig6 = ld `mar.orig`;
    check L190() else D49();
  L179():
    goto L50(r142);
  L187():
    key_title1 = ld `key.title`;
    check L188() else D48();
  D48():
    deopt 192 [key_title1];
  D49():
    deopt 196 [mar_orig6];
  L188():
    key_title2 = force? key_title1;
    checkMissing(key_title2);
    goto L54();
  L190():
    mar_orig7 = force? mar_orig6;
    checkMissing(mar_orig7);
    st mar = mar_orig7;
    l6 = ld mar;
    c33 = `is.object`(l6);
    if c33 then L191() else L192(1.0, l6);
  L55(dx32):
    st mar = dx32;
    par4 = ldf par;
    check L194() else D50();
  L191():
    dr24 = tryDispatchBuiltin.0("[<-", l6, 1.0);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L193() else L192(1.0, dr24);
  L192(r151, l8):
    ___2 = ldf `[<-` in base;
    r154 = dyn ___2(l8, 1.0, 4);
    goto L55(r154);
  D50():
    deopt 207 [];
  L193():
    dx31 = getTryDispatchBuiltinValue(dr24);
    goto L55(dx31);
  L194():
    p32 = prom<V +>{
      mar6 = ld mar;
      mar7 = force? mar6;
      checkMissing(mar7);
      return mar7;
    };
    r156 = dyn par4[mar](p32);
    check L195() else D51();
  D51():
    deopt 210 [r156];
  L195():
    plot_new1 = ldf `plot.new`;
    check L196() else D52();
  D52():
    deopt 212 [];
  L196():
    r157 = dyn plot_new1();
    check L197() else D53();
  D53():
    deopt 213 [r157];
  L197():
    plot_window1 = ldf `plot.window`;
    check L198() else D54();
  D54():
    deopt 215 [];
  L198():
    p33 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p34 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    p35 = prom<V +>{
      xaxs1 = ld xaxs;
      xaxs2 = force? xaxs1;
      checkMissing(xaxs2);
      return xaxs2;
    };
    p36 = prom<V +>{
      yaxs1 = ld yaxs;
      yaxs2 = force? yaxs1;
      checkMissing(yaxs2);
      return yaxs2;
    };
    p37 = prom<V +>{
      asp1 = ld asp;
      asp2 = force? asp1;
      checkMissing(asp2);
      return asp2;
    };
    r163 = dyn plot_window1[, , , xaxs, yaxs, asp](p33, p34, "", p35, p36, p37);
    check L199() else D55();
  D55():
    deopt 225 [r163];
  L199():
    _filled_contour = ldf `.filled.contour`;
    check L200() else D56();
  D56():
    deopt 227 [];
  L200():
    p38 = prom<V +>{
      x31 = ld x;
      x32 = force? x31;
      checkMissing(x32);
      return x32;
    };
    p39 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    p40 = prom<V +>{
      z9 = ld z;
      z10 = force? z9;
      checkMissing(z10);
      return z10;
    };
    p41 = prom<V +>{
      levels18 = ld levels;
      levels19 = force? levels18;
      checkMissing(levels19);
      return levels19;
    };
    p42 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    r169 = dyn _filled_contour(p38, p39, p40, p41, p42);
    check L201() else D57();
  D57():
    deopt 233 [r169];
  L201():
    sym20 = ldf missing;
    base20 = ldf missing in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L202() else L203();
  L56(r171):
    c34 = `as.logical`(r171);
    if c34 then L204() else L57();
  L202():
    missing4 = ldf missing in base;
    r172 = dyn missing4(<sym plot.axes>);
    goto L56(r172);
  L203():
    r170 = dyn base20(<sym plot.axes>);
    goto L56(r170);
  L57():
    plot_axes1 = ld `plot.axes`;
    check L215() else D65();
  L60():
    frame_plot1 = ld `frame.plot`;
    check L216() else D66();
  L204():
    axes5 = ld axes;
    check L205() else D58();
  D58():
    deopt 237 [axes5];
  D65():
    deopt 262 [plot_axes1];
  D66():
    deopt 264 [frame_plot1];
  L205():
    axes6 = force? axes5;
    checkMissing(axes6);
    c35 = `as.logical`(axes6);
    if c35 then L206() else L58();
  L215():
    plot_axes2 = force? plot_axes1;
    checkMissing(plot_axes2);
    goto L60();
  L216():
    frame_plot2 = force? frame_plot1;
    checkMissing(frame_plot2);
    c36 = `as.logical`(frame_plot2);
    if c36 then L217() else L61();
  L58():
    goto L59(NULL);
  L59(r178):
    goto L60();
  L61():
    goto L62();
  L62():
    sym21 = ldf missing;
    base21 = ldf missing in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L221() else L222();
  L206():
    title = ldf title;
    check L207() else D59();
  L217():
    box1 = ldf box;
    check L218() else D67();
  D59():
    deopt 240 [];
  D67():
    deopt 267 [];
  L63(r183):
    c37 = `as.logical`(r183);
    if c37 then L223() else L64();
  L207():
    r173 = dyn title[main, xlab, ylab]("", "", "");
    check L208() else D60();
  L218():
    r180 = dyn box1();
    check L219() else D68();
  L221():
    missing5 = ldf missing in base;
    r184 = dyn missing5(<sym plot.title>);
    goto L63(r184);
  L222():
    r182 = dyn base21(<sym plot.title>);
    goto L63(r182);
  D60():
    deopt 247 [r173];
  D68():
    deopt 268 [r180];
  L64():
    plot_title1 = ld `plot.title`;
    check L227() else D71();
  L65():
    sym22 = ldf invisible;
    base22 = ldf invisible in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L228() else L229();
  L208():
    Axis = ldf Axis;
    check L209() else D61();
  L219():
    goto L62();
  L223():
    title1 = ldf title;
    check L224() else D69();
  D61():
    deopt 249 [];
  D69():
    deopt 275 [];
  D71():
    deopt 278 [plot_title1];
  L66(r188):
    popenv;
    return r188;
  L209():
    p43 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      return x34;
    };
    r175 = dyn Axis[, side](p43, 1.0);
    check L210() else D62();
  L224():
    ddd1 = ld `...`;
    r185 = dyn title1[`...`](ddd1);
    check L225() else D70();
  L227():
    plot_title2 = force? plot_title1;
    checkMissing(plot_title2);
    goto L65();
  L228():
    invisible = ldf invisible in base;
    r189 = dyn invisible();
    check L230() else D72();
  L229():
    r187 = dyn base22();
    goto L66(r187);
  D62():
    deopt 253 [r175];
  D70():
    deopt 277 [r185];
  D72():
    deopt 283 [r189];
  L210():
    Axis1 = ldf Axis;
    check L211() else D63();
  L225():
    goto L65();
  L230():
    goto L66(r189);
  D63():
    deopt 255 [];
  L211():
    p44 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r177 = dyn Axis1[, side](p44, 2.0);
    check L212() else D64();
  D64():
    deopt 259 [r177];
  L212():
    goto L59(r177);
  }
}
fun inner2119503979(n) {
  (reg n:*) -+> V { var n:*, reg hcl_colors:cls, reg n1:*, reg n2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st n = n;
    hcl_colors = ldf `hcl.colors`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    r1 = dyn hcl_colors[, , rev](p, "YlOrRd", TRUE);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}