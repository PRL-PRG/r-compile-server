fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg grDevices:*, reg grDevices1:V, reg p:p(V +), reg r4:V, reg par:cls, reg r5:V, reg plot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg r15:V, reg r16:V, reg rect:cls, reg i:*, reg i1:V, reg r17:V, reg p3:p(V +), reg i2:*, reg i3:V, reg r19:V, reg p4:p(V +), reg i4:*, reg i5:V, reg r21:V, reg p5:p(V +), reg i6:*, reg i7:V, reg r23:V, reg p6:p(V +), reg rainbow:cls, reg r25:V, reg p7:p(V +), reg r27:V, reg rect1:cls, reg i8:*, reg i9:V, reg r28:V, reg p8:p(V +), reg i10:*, reg i11:V, reg r30:V, reg p9:p(V +), reg i12:*, reg i13:V, reg r32:V, reg p10:p(V +), reg i14:*, reg i15:V, reg r34:V, reg p11:p(V +), reg heat_colors:cls, reg r36:V, reg p12:p(V +), reg i16:*, reg i17:V, reg r38:V, reg p13:p(V +), reg r40:V, reg rect2:cls, reg j:*, reg j1:V, reg r41:V, reg p14:p(V +), reg j2:*, reg j3:V, reg r43:V, reg p15:p(V +), reg j4:*, reg j5:V, reg r45:V, reg p16:p(V +), reg j6:*, reg j7:V, reg r47:V, reg r48:V, reg p17:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r50:V, reg r51:V, reg c2:cls, reg r52:V, reg p18:p(V +), reg r54:V, reg rect3:cls, reg j8:*, reg j9:V, reg r55:V, reg p19:p(V +), reg j10:*, reg j11:V, reg r57:V, reg r58:V, reg p20:p(V +), reg j12:*, reg j13:V, reg r60:V, reg p21:p(V +), reg j14:*, reg j15:V, reg r62:V, reg r63:V, reg p22:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r65:V, reg r66:V, reg c3:cls, reg r67:V, reg p23:p(V +), reg r69:V, reg mtext:cls, reg r70:V, reg plot1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r71:V, reg r72:V, reg c4:cls, reg r73:V, reg p24:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r75:V, reg r76:V, reg c5:cls, reg r77:V, reg p25:p(V +), reg r79:V, reg rect4:cls, reg r80:V, reg rect5:cls, reg r81:V, reg rect6:cls, reg par1:cls, reg r82:V, reg p26:p(V +), reg r84:V, reg rect7:cls, reg r85:V, reg rect8:cls, reg p27:p(V +), reg r87:V, reg legend:cls, reg p28:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r89:V, reg r90:V, reg par2:cls, reg r91:V, reg c6:cls, reg r92:V, reg p29:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r94:V, reg r95:V, reg c7:cls, reg r96:V, reg p30:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r98:V, reg r99:V, reg c8:cls, reg r100:V, reg p31:p(V +), reg r102:V, reg par3:cls, reg op:*, reg op1:V, reg p32:p(V +), reg r104:V |
    mkenv;
    r = clos inner3251942248;
    st rect = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    par = ldf par;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym grDevices>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r5 = dyn par[bg]("thistle");
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r5];
  L4():
    goto L0();
  L6():
    st op = r5;
    plot = ldf plot;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c = ldf c in base;
      r8 = dyn c(100.0, 250.0);
      goto L0(r8);
    L2():
      r6 = dyn base1(100.0, 250.0);
      goto L0(r6);
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c1 = ldf c in base;
      r12 = dyn c1(300.0, 450.0);
      goto L0(r12);
    L2():
      r10 = dyn base2(300.0, 450.0);
      goto L0(r10);
    };
    r14 = dyn plot[, , type, xlab, ylab, main](p1, p2, "n", "", "", "2 x 11 rectangles; 'rect(100+i,300+i,  150+i,380+i)'");
    check L8() else D5();
  D5():
    deopt 26 [r14];
  L8():
    r15 = `:`(0.0, 10.0);
    r16 = `*`(4.0, r15);
    st i = r16;
    rect = ldf rect;
    check L9() else D6();
  D6():
    deopt 35 [];
  L9():
    p3 = prom<V +>{
      i = ld i;
      i1 = force? i;
      checkMissing(i1);
      r17 = `+`(100.0, i1);
      return r17;
    };
    p4 = prom<V +>{
      i2 = ld i;
      i3 = force? i2;
      checkMissing(i3);
      r19 = `+`(300.0, i3);
      return r19;
    };
    p5 = prom<V +>{
      i4 = ld i;
      i5 = force? i4;
      checkMissing(i5);
      r21 = `+`(150.0, i5);
      return r21;
    };
    p6 = prom<V +>{
      i6 = ld i;
      i7 = force? i6;
      checkMissing(i7);
      r23 = `+`(380.0, i7);
      return r23;
    };
    p7 = prom<V +>{
      rainbow = ldf rainbow;
      r25 = dyn rainbow[, start, end](11.0, 0.7, 0.1);
      return r25;
    };
    r27 = dyn rect[, , , , col](p3, p4, p5, p6, p7);
    check L10() else D7();
  D7():
    deopt 42 [r27];
  L10():
    rect1 = ldf rect;
    check L11() else D8();
  D8():
    deopt 44 [];
  L11():
    p8 = prom<V +>{
      i8 = ld i;
      i9 = force? i8;
      checkMissing(i9);
      r28 = `-`(240.0, i9);
      return r28;
    };
    p9 = prom<V +>{
      i10 = ld i;
      i11 = force? i10;
      checkMissing(i11);
      r30 = `+`(320.0, i11);
      return r30;
    };
    p10 = prom<V +>{
      i12 = ld i;
      i13 = force? i12;
      checkMissing(i13);
      r32 = `-`(250.0, i13);
      return r32;
    };
    p11 = prom<V +>{
      i14 = ld i;
      i15 = force? i14;
      checkMissing(i15);
      r34 = `+`(410.0, i15);
      return r34;
    };
    p12 = prom<V +>{
      heat_colors = ldf `heat.colors`;
      r36 = dyn heat_colors(11.0);
      return r36;
    };
    p13 = prom<V +>{
      i16 = ld i;
      i17 = force? i16;
      checkMissing(i17);
      r38 = `/`(i17, 5.0);
      return r38;
    };
    r40 = dyn rect1[, , , , col, lwd](p8, p9, p10, p11, p12, p13);
    check L12() else D9();
  D9():
    deopt 53 [r40];
  L12():
    st j = <real 0.0, 10.0, 20.0, 30.0, 40.0, 50.0>;
    rect2 = ldf rect;
    check L13() else D10();
  D10():
    deopt 58 [];
  L13():
    p14 = prom<V +>{
      j = ld j;
      j1 = force? j;
      checkMissing(j1);
      r41 = `+`(125.0, j1);
      return r41;
    };
    p15 = prom<V +>{
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      r43 = `+`(360.0, j3);
      return r43;
    };
    p16 = prom<V +>{
      j4 = ld j;
      j5 = force? j4;
      checkMissing(j5);
      r45 = `+`(141.0, j5);
      return r45;
    };
    p17 = prom<V +>{
      j6 = ld j;
      j7 = force? j6;
      checkMissing(j7);
      r47 = `/`(j7, 2.0);
      r48 = `+`(405.0, r47);
      return r48;
    };
    p18 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      c2 = ldf c in base;
      r52 = dyn c2(NA_LGL, 0.0);
      goto L0(r52);
    L2():
      r50 = dyn base3(NA_LGL, 0.0);
      goto L0(r50);
    };
    r54 = dyn rect2[, , , , col, border, lwd](p14, p15, p16, p17, p18, "gold", 2.0);
    check L14() else D11();
  D11():
    deopt 69 [r54];
  L14():
    rect3 = ldf rect;
    check L15() else D12();
  D12():
    deopt 71 [];
  L15():
    p19 = prom<V +>{
      j8 = ld j;
      j9 = force? j8;
      checkMissing(j9);
      r55 = `+`(125.0, j9);
      return r55;
    };
    p20 = prom<V +>{
      j10 = ld j;
      j11 = force? j10;
      checkMissing(j11);
      r57 = `/`(j11, 2.0);
      r58 = `+`(296.0, r57);
      return r58;
    };
    p21 = prom<V +>{
      j12 = ld j;
      j13 = force? j12;
      checkMissing(j13);
      r60 = `+`(141.0, j13);
      return r60;
    };
    p22 = prom<V +>{
      j14 = ld j;
      j15 = force? j14;
      checkMissing(j15);
      r62 = `/`(j15, 5.0);
      r63 = `+`(331.0, r62);
      return r63;
    };
    p23 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      c3 = ldf c in base;
      r67 = dyn c3(NA_LGL, "midnightblue");
      goto L0(r67);
    L2():
      r65 = dyn base4(NA_LGL, "midnightblue");
      goto L0(r65);
    };
    r69 = dyn rect3[, , , , col](p19, p20, p21, p22, p23);
    check L16() else D13();
  D13():
    deopt 78 [r69];
  L16():
    mtext = ldf mtext;
    check L17() else D14();
  D14():
    deopt 80 [];
  L17():
    r70 = dyn mtext("+  2 x 6 rect(*, col = c(NA,0)) and  col = c(NA,\"m..blue\")");
    check L18() else D15();
  D15():
    deopt 82 [r70];
  L18():
    plot1 = ldf plot;
    check L19() else D16();
  D16():
    deopt 84 [];
  L19():
    p24 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r72):
      return r72;
    L1():
      c4 = ldf c in base;
      r73 = dyn c4(100.0, 200.0);
      goto L0(r73);
    L2():
      r71 = dyn base5(100.0, 200.0);
      goto L0(r71);
    };
    p25 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r76):
      return r76;
    L1():
      c5 = ldf c in base;
      r77 = dyn c5(300.0, 450.0);
      goto L0(r77);
    L2():
      r75 = dyn base6(300.0, 450.0);
      goto L0(r75);
    };
    r79 = dyn plot1[, , type, xlab, ylab](p24, p25, "n", "", "");
    check L20() else D17();
  D17():
    deopt 93 [r79];
  L20():
    rect4 = ldf rect;
    check L21() else D18();
  D18():
    deopt 95 [];
  L21():
    r80 = dyn rect4(100.0, 300.0, 125.0, 350.0);
    check L22() else D19();
  D19():
    deopt 100 [r80];
  L22():
    rect5 = ldf rect;
    check L23() else D20();
  D20():
    deopt 102 [];
  L23():
    r81 = dyn rect5[, , , , col, border](100.0, 400.0, 125.0, 450.0, "green", "blue");
    check L24() else D21();
  D21():
    deopt 111 [r81];
  L24():
    rect6 = ldf rect;
    check L25() else D22();
  D22():
    deopt 113 [];
  L25():
    p26 = prom<V +>{
      par1 = ldf par;
      r82 = dyn par1("bg");
      return r82;
    };
    r84 = dyn rect6[, , , , col, border](115.0, 375.0, 150.0, 425.0, p26, "transparent");
    check L26() else D23();
  D23():
    deopt 122 [r84];
  L26():
    rect7 = ldf rect;
    check L27() else D24();
  D24():
    deopt 124 [];
  L27():
    r85 = dyn rect7[, , , , density, border](150.0, 300.0, 175.0, 350.0, 10.0, "red");
    check L28() else D25();
  D25():
    deopt 133 [r85];
  L28():
    rect8 = ldf rect;
    check L29() else D26();
  D26():
    deopt 135 [];
  L29():
    p27 = prom<V +>{
      return -30.0;
    };
    r87 = dyn rect8[, , , , density, col, angle, border](150.0, 400.0, 175.0, 450.0, 30.0, "blue", p27, "transparent");
    check L30() else D27();
  D27():
    deopt 148 [r87];
  L30():
    legend = ldf legend;
    check L31() else D28();
  D28():
    deopt 150 [];
  L31():
    p28 = prom<V +>{
      return <int 1, 2, 3, 4>;
    };
    p29 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r90):
      return r90;
    L1():
      par2 = ldf par;
      r91 = dyn par2("fg");
      c6 = ldf c in base;
      r92 = dyn c6(NA_LGL, "green", r91, "blue");
      goto L0(r92);
    L2():
      r89 = dyn base7(NA_LGL, "green", <lang par("fg")>, "blue");
      goto L0(r89);
    };
    p30 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r95):
      return r95;
    L1():
      c7 = ldf c in base;
      r96 = dyn c7(NA_LGL, NA_LGL, 10.0, 30.0);
      goto L0(r96);
    L2():
      r94 = dyn base8(NA_LGL, NA_LGL, 10.0, 30.0);
      goto L0(r94);
    };
    p31 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r99):
      return r99;
    L1():
      c8 = ldf c in base;
      r100 = dyn c8(NA_LGL, NA_LGL, 30.0, -30.0);
      goto L0(r100);
    L2():
      r98 = dyn base9(NA_LGL, NA_LGL, 30.0, <lang `-`(30.0)>);
      goto L0(r98);
    };
    r102 = dyn legend[, , legend, fill, density, angle](180.0, 450.0, p28, p29, p30, p31);
    check L32() else D29();
  D29():
    deopt 161 [r102];
  L32():
    par3 = ldf par;
    check L33() else D30();
  D30():
    deopt 163 [];
  L33():
    p32 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r104 = dyn par3(p32);
    check L34() else D31();
  D31():
    deopt 165 [r104];
  L34():
    popenv;
    return r104;
  }
}
fun inner3251942248(xleft, ybottom, xright, ytop, density, angle, col, border, lty, lwd, `...`) {
  (reg xleft:*, reg ybottom:*, reg xright:*, reg ytop:*, reg density:*, reg angle:*, reg col:*, reg border:*, reg lty:*, reg lwd:*, reg ddd:dots) -+> V { var xleft:*, var ybottom:*, var xright:*, var ytop:*, var density:*, reg density_isMissing:L, reg density_orDefault:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var border:*, reg border_isMissing:L, reg border_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, reg par1:cls, reg r2:V, reg p1:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg density1:*, reg density2:V, reg is_numeric:cls, reg r6:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c5:L, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c8:L, reg r10:V, reg density3:*, reg density4:V, reg is_na:cls, reg r11:V, reg density5:*, reg density6:V, reg r12:V, reg r13:V, reg all:cls, reg r14:V, reg c9:L, reg c10:V, reg c12:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg density7:*, reg density8:V, reg c13:V, reg r18:V, reg c14:L, reg c16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg c19:L, reg r20:V, reg angle1:*, reg angle2:V, reg c20:V, reg r21:V, reg c21:L, reg c22:V, reg c24:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg border1:*, reg border2:V, reg c25:L, reg c26:L, reg c28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r24:V, reg c31:L, reg r25:V, reg border3:*, reg border4:V, reg is_na1:cls, reg r26:V, reg r27:V, reg c32:L, reg c33:V, reg c35:L, reg border5:*, reg border6:V, reg c36:L, reg col1:*, reg col2:V, reg col3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg xleft1:*, reg xleft2:V, reg length:cls, reg r32:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg r34:V, reg xright1:*, reg xright2:V, reg length1:cls, reg r35:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r36:V, reg r37:V, reg ybottom1:*, reg ybottom2:V, reg length2:cls, reg r38:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r39:V, reg r40:V, reg ytop1:*, reg ytop2:V, reg length3:cls, reg r41:V, reg range:cls, reg r42:V, reg n:*, reg n1:V, reg c37:L, reg n3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r43:V, reg r44:V, reg c38:L, reg stop:cls, reg r45:V, reg n4:*, reg n5:V, reg c39:L, reg n7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r47:V, reg rbind:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r48:V, reg r49:V, reg n8:*, reg n9:V, reg rep_int:cls, reg r50:V, reg p2:p(V +), reg xleft3:*, reg xleft4:V, reg p3:p(V +), reg xright3:*, reg xright4:V, reg p4:p(V +), reg xright5:*, reg xright6:V, reg p5:p(V +), reg xleft5:*, reg xleft6:V, reg p6:p(V +), reg r56:V, reg c40:L, reg r58:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r59:V, reg rbind1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r60:V, reg r61:V, reg n10:*, reg n11:V, reg rep_int1:cls, reg r62:V, reg p7:p(V +), reg ybottom3:*, reg ybottom4:V, reg p8:p(V +), reg ybottom5:*, reg ybottom6:V, reg p9:p(V +), reg ytop3:*, reg ytop4:V, reg p10:p(V +), reg ytop5:*, reg ytop6:V, reg p11:p(V +), reg r68:V, reg c41:L, reg r70:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r71:V, reg polygon:cls, reg x:*, reg x1:V, reg p12:p(V +), reg y:*, reg y1:V, reg p13:p(V +), reg col5:*, reg col6:V, reg p14:p(V +), reg border7:*, reg border8:V, reg p15:p(V +), reg lty1:*, reg lty2:V, reg p16:p(V +), reg lwd1:*, reg lwd2:V, reg p17:p(V +), reg density9:*, reg density10:V, reg p18:p(V +), reg angle3:*, reg angle4:V, reg p19:p(V +), reg ddd1:dots?, reg r80:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r82:V, reg _External_graphics:cls, reg C_rect:*, reg C_rect1:V, reg p20:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r84:V, reg r85:V, reg xleft7:*, reg xleft8:V, reg as_double:cls, reg r86:V, reg p21:p(V +), reg sym16:cls, reg base16:cls, reg guard16:L, reg r88:V, reg r89:V, reg ybottom7:*, reg ybottom8:V, reg as_double1:cls, reg r90:V, reg p22:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r92:V, reg r93:V, reg xright7:*, reg xright8:V, reg as_double2:cls, reg r94:V, reg p23:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r96:V, reg r97:V, reg ytop7:*, reg ytop8:V, reg as_double3:cls, reg r98:V, reg p24:p(V +), reg col7:*, reg col8:V, reg p25:p(V +), reg border9:*, reg border10:V, reg p26:p(V +), reg lty3:*, reg lty4:V, reg p27:p(V +), reg lwd3:*, reg lwd4:V, reg p28:p(V +), reg ddd2:dots?, reg r104:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r105:V, reg r106:V, reg invisible:cls, reg r107:V |
    mkenv;
    st xleft = xleft;
    st ybottom = ybottom;
    st xright = xright;
    st ytop = ytop;
    density_isMissing = missing.0(density);
    if density_isMissing then L0(NULL) else L0(density);
  L0(density_orDefault):
    st density = density_orDefault;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L1(45.0) else L1(angle);
  L1(angle_orDefault):
    st angle = angle_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L2(NA_LGL) else L2(col);
  L2(col_orDefault):
    st col = col_orDefault;
    border_isMissing = missing.0(border);
    if border_isMissing then L3(NULL) else L3(border);
  L3(border_orDefault):
    st border = border_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L4() else L5(lty);
  L4():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("lty");
      return r;
    };
    goto L5(p);
  L5(lty_orDefault):
    st lty = lty_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L6() else L7(lwd);
  L6():
    p1 = prom<V +>{
      par1 = ldf par;
      r2 = dyn par1("lwd");
      return r2;
    };
    goto L7(p1);
  L7(lwd_orDefault):
    st lwd = lwd_orDefault;
    st `...` = ddd;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L8(r5):
    c = `as.logical`(r5);
    if c then L42() else L9(c);
  L38():
    density1 = ld density;
    check L40() else D0();
  L39():
    r4 = dyn base(<sym density>);
    goto L8(r4);
  D0():
    deopt 2 [density1];
  L9(c2):
    c12 = `as.logical`(c2);
    if c12 then L52() else L12();
  L40():
    density2 = force? density1;
    checkMissing(density2);
    is_numeric = ldf `is.numeric` in base;
    r6 = dyn is_numeric(density2);
    check L41() else D1();
  L42():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  D1():
    deopt 5 [r6];
  L10(c5, r8):
    c9 = `as.logical`(r8);
    c10 = `&&`(c5, c9);
    goto L9(c10);
  L12():
    goto L13();
  L13():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  L41():
    goto L8(r6);
  L43():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L44():
    r7 = dyn base1(<lang `|`(is.na(density), `<`(density, 0.0))>);
    goto L10(c, r7);
  L52():
    st density = NULL;
    goto L13();
  L11(c8, r10):
    density5 = ld density;
    check L49() else D4();
  L14(r17):
    r18 = `!`(r17);
    c14 = `as.logical`(r18);
    if c14 then L57() else L15(c14);
  L45():
    density3 = ld density;
    check L47() else D2();
  L46():
    r9 = dyn base2(<sym density>);
    goto L11(c, r9);
  L54():
    density7 = ld density;
    check L56() else D6();
  L55():
    r16 = dyn base3(<sym density>);
    goto L14(r16);
  D2():
    deopt 10 [c, density3];
  D4():
    deopt 13 [c8, r10, density5];
  D6():
    deopt 27 [density7];
  L15(c16):
    c24 = `as.logical`(c16);
    if c24 then L62() else L17();
  L47():
    density4 = force? density3;
    checkMissing(density4);
    is_na = ldf `is.na` in base;
    r11 = dyn is_na(density4);
    check L48() else D3();
  L49():
    density6 = force? density5;
    checkMissing(density6);
    r12 = `<`(density6, 0.0);
    r13 = `||`(r10, r12);
    all = ldf all in base;
    r14 = dyn all(r13);
    check L50() else D5();
  L56():
    density8 = force? density7;
    checkMissing(density8);
    c13 = `==`(density8, NULL);
    goto L14(c13);
  L57():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  D3():
    deopt 13 [c, r11];
  D5():
    deopt 19 [c8, r14];
  L16(c19, r20):
    r21 = `!`(r20);
    c21 = `as.logical`(r21);
    c22 = `&&`(c19, c21);
    goto L15(c22);
  L17():
    sym14 = ldf `.External.graphics`;
    base14 = ldf `.External.graphics` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L122() else L123();
  L36():
    sym19 = ldf invisible;
    base19 = ldf invisible in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L126() else L127();
  L48():
    goto L11(c, r11);
  L50():
    goto L10(c8, r14);
  L58():
    angle1 = ld angle;
    check L60() else D7();
  L59():
    r19 = dyn base4(<sym angle>);
    goto L16(c14, r19);
  L62():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  D7():
    deopt 32 [c14, angle1];
  L18(r23):
    c26 = `as.logical`(r23);
    if c26 then L66() else L19(c26);
  L37(r106):
    popenv;
    return r106;
  L60():
    angle2 = force? angle1;
    checkMissing(angle2);
    c20 = `==`(angle2, NULL);
    goto L16(c14, c20);
  L63():
    border1 = ld border;
    check L65() else D8();
  L64():
    r22 = dyn base5(<sym border>);
    goto L18(r22);
  L122():
    _External_graphics = ldf `.External.graphics`;
    check L124() else D32();
  L123():
    r82 = dyn base14[, , , , , col, border, lty, lwd, ](<sym C_rect>, <lang as.double(xleft)>, <lang as.double(ybottom)>, <lang as.double(xright)>, <lang as.double(ytop)>, <sym col>, <sym border>, <sym lty>, <sym lwd>, <sym ...>);
    goto L36();
  L126():
    invisible = ldf invisible in base;
    r107 = dyn invisible();
    check L128() else D34();
  L127():
    r105 = dyn base19();
    goto L37(r105);
  D8():
    deopt 38 [border1];
  D32():
    deopt 150 [];
  D34():
    deopt 169 [r107];
  L19(c28):
    c35 = `as.logical`(c28);
    if c35 then L72() else L21();
  L65():
    border2 = force? border1;
    checkMissing(border2);
    c25 = `is.logical`(border2);
    goto L18(c25);
  L66():
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  L124():
    p20 = prom<V +>{
      C_rect = ld C_rect;
      C_rect1 = force? C_rect;
      checkMissing(C_rect1);
      return C_rect1;
    };
    p21 = prom<V +>{
      sym15 = ldf `as.double`;
      base15 = ldf `as.double` in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r85):
      return r85;
    L1():
      xleft7 = ld xleft;
      xleft8 = force? xleft7;
      checkMissing(xleft8);
      as_double = ldf `as.double` in base;
      r86 = dyn as_double(xleft8);
      goto L0(r86);
    L2():
      r84 = dyn base15(<sym xleft>);
      goto L0(r84);
    };
    p22 = prom<V +>{
      sym16 = ldf `as.double`;
      base16 = ldf `as.double` in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r89):
      return r89;
    L1():
      ybottom7 = ld ybottom;
      ybottom8 = force? ybottom7;
      checkMissing(ybottom8);
      as_double1 = ldf `as.double` in base;
      r90 = dyn as_double1(ybottom8);
      goto L0(r90);
    L2():
      r88 = dyn base16(<sym ybottom>);
      goto L0(r88);
    };
    p23 = prom<V +>{
      sym17 = ldf `as.double`;
      base17 = ldf `as.double` in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r93):
      return r93;
    L1():
      xright7 = ld xright;
      xright8 = force? xright7;
      checkMissing(xright8);
      as_double2 = ldf `as.double` in base;
      r94 = dyn as_double2(xright8);
      goto L0(r94);
    L2():
      r92 = dyn base17(<sym xright>);
      goto L0(r92);
    };
    p24 = prom<V +>{
      sym18 = ldf `as.double`;
      base18 = ldf `as.double` in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r97):
      return r97;
    L1():
      ytop7 = ld ytop;
      ytop8 = force? ytop7;
      checkMissing(ytop8);
      as_double3 = ldf `as.double` in base;
      r98 = dyn as_double3(ytop8);
      goto L0(r98);
    L2():
      r96 = dyn base18(<sym ytop>);
      goto L0(r96);
    };
    p25 = prom<V +>{
      col7 = ld col;
      col8 = force? col7;
      checkMissing(col8);
      return col8;
    };
    p26 = prom<V +>{
      border9 = ld border;
      border10 = force? border9;
      checkMissing(border10);
      return border10;
    };
    p27 = prom<V +>{
      lty3 = ld lty;
      lty4 = force? lty3;
      checkMissing(lty4);
      return lty4;
    };
    p28 = prom<V +>{
      lwd3 = ld lwd;
      lwd4 = force? lwd3;
      checkMissing(lwd4);
      return lwd4;
    };
    ddd2 = ld `...`;
    r104 = dyn _External_graphics[, , , , , col, border, lty, lwd, `...`](p20, p21, p22, p23, p24, p25, p26, p27, p28, ddd2);
    check L125() else D33();
  L128():
    goto L37(r107);
  D33():
    deopt 165 [r104];
  L20(c31, r25):
    r27 = `!`(r25);
    c32 = `as.logical`(r27);
    c33 = `&&`(c31, c32);
    goto L19(c33);
  L21():
    goto L24();
  L24():
    sym7 = ldf range;
    base7 = ldf range in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L67():
    border3 = ld border;
    check L69() else D9();
  L68():
    r24 = dyn base6(<sym border>);
    goto L20(c26, r24);
  L72():
    border5 = ld border;
    check L73() else D11();
  L125():
    goto L36();
  D9():
    deopt 43 [c26, border3];
  D11():
    deopt 49 [border5];
  L25(r29):
    st n = r29;
    n = ld n;
    check L97() else D22();
  L69():
    border4 = force? border3;
    checkMissing(border4);
    is_na1 = ldf `is.na` in base;
    r26 = dyn is_na1(border4);
    check L70() else D10();
  L73():
    border6 = force? border5;
    checkMissing(border6);
    c36 = `as.logical`(border6);
    if c36 then L74() else L22();
  L78():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L80() else L81();
  L79():
    r28 = dyn base7(<lang length(xleft)>, <lang length(xright)>, <lang length(ybottom)>, <lang length(ytop)>);
    goto L25(r28);
  D10():
    deopt 46 [c26, r26];
  D22():
    deopt 87 [n];
  L22():
    goto L23(NA_LGL);
  L23(col3):
    st border = col3;
    goto L24();
  L26(r31):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  L70():
    goto L20(c26, r26);
  L74():
    col1 = ld col;
    check L75() else D12();
  L80():
    xleft1 = ld xleft;
    check L82() else D13();
  L81():
    r30 = dyn base8(<sym xleft>);
    goto L26(r30);
  L97():
    n1 = force? n;
    checkMissing(n1);
    c37 = `is.object`(n1);
    if c37 then L98() else L99(n1);
  D12():
    deopt 51 [col1];
  D13():
    deopt 62 [xleft1];
  L27(r34):
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L88() else L89();
  L30(dx1):
    r44 = `==`(dx1, 0.0);
    c38 = `as.logical`(r44);
    if c38 then L101() else L31();
  L75():
    col2 = force? col1;
    checkMissing(col2);
    goto L23(col2);
  L82():
    xleft2 = force? xleft1;
    checkMissing(xleft2);
    length = ldf length in base;
    r32 = dyn length(xleft2);
    check L83() else D14();
  L84():
    xright1 = ld xright;
    check L86() else D15();
  L85():
    r33 = dyn base9(<sym xright>);
    goto L27(r33);
  L98():
    dr = tryDispatchBuiltin.1("[", n1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L100() else L99(dr);
  L99(n3):
    __ = ldf `[` in base;
    r43 = dyn __(n3, 1);
    goto L30(r43);
  D14():
    deopt 65 [r32];
  D15():
    deopt 68 [xright1];
  L28(r37):
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L92() else L93();
  L31():
    goto L32();
  L32():
    n4 = ld n;
    check L105() else D25();
  L83():
    goto L26(r32);
  L86():
    xright2 = force? xright1;
    checkMissing(xright2);
    length1 = ldf length in base;
    r35 = dyn length1(xright2);
    check L87() else D16();
  L88():
    ybottom1 = ld ybottom;
    check L90() else D17();
  L89():
    r36 = dyn base10(<sym ybottom>);
    goto L28(r36);
  L100():
    dx = getTryDispatchBuiltinValue(dr);
    goto L30(dx);
  L101():
    stop = ldf stop;
    check L102() else D23();
  D16():
    deopt 71 [r35];
  D17():
    deopt 74 [ybottom1];
  D23():
    deopt 95 [];
  D25():
    deopt 100 [n4];
  L29(r40):
    range = ldf range in base;
    r42 = dyn range(r31, r34, r37, r40);
    check L96() else D21();
  L87():
    goto L27(r35);
  L90():
    ybottom2 = force? ybottom1;
    checkMissing(ybottom2);
    length2 = ldf length in base;
    r38 = dyn length2(ybottom2);
    check L91() else D18();
  L92():
    ytop1 = ld ytop;
    check L94() else D19();
  L93():
    r39 = dyn base11(<sym ytop>);
    goto L29(r39);
  L102():
    r45 = dyn stop("invalid rectangle specification");
    check L103() else D24();
  L105():
    n5 = force? n4;
    checkMissing(n5);
    c39 = `is.object`(n5);
    if c39 then L106() else L107(n5);
  D18():
    deopt 77 [r38];
  D19():
    deopt 80 [ytop1];
  D21():
    deopt 85 [r42];
  D24():
    deopt 97 [r45];
  L33(dx3):
    st n = dx3;
    rbind = ldf rbind;
    check L109() else D26();
  L91():
    goto L28(r38);
  L94():
    ytop2 = force? ytop1;
    checkMissing(ytop2);
    length3 = ldf length in base;
    r41 = dyn length3(ytop2);
    check L95() else D20();
  L96():
    goto L25(r42);
  L103():
    goto L32();
  L106():
    dr2 = tryDispatchBuiltin.1("[", n5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L108() else L107(dr2);
  L107(n7):
    __1 = ldf `[` in base;
    r47 = dyn __1(n7, 2);
    goto L33(r47);
  D20():
    deopt 83 [r41];
  D26():
    deopt 107 [];
  L95():
    goto L29(r41);
  L108():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L33(dx2);
  L109():
    p2 = prom<V +>{
      sym12 = ldf `rep.int`;
      base12 = ldf `rep.int` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      rep_int = ldf `rep.int` in base;
      r50 = dyn rep_int(NA_LGL, n9);
      goto L0(r50);
    L2():
      r48 = dyn base12(NA_LGL, <sym n>);
      goto L0(r48);
    };
    p3 = prom<V +>{
      xleft3 = ld xleft;
      xleft4 = force? xleft3;
      checkMissing(xleft4);
      return xleft4;
    };
    p4 = prom<V +>{
      xright3 = ld xright;
      xright4 = force? xright3;
      checkMissing(xright4);
      return xright4;
    };
    p5 = prom<V +>{
      xright5 = ld xright;
      xright6 = force? xright5;
      checkMissing(xright6);
      return xright6;
    };
    p6 = prom<V +>{
      xleft5 = ld xleft;
      xleft6 = force? xleft5;
      checkMissing(xleft6);
      return xleft6;
    };
    r56 = dyn rbind(p2, p3, p4, p5, p6);
    check L110() else D27();
  D27():
    deopt 113 [r56];
  L110():
    c40 = `is.object`(r56);
    if c40 then L111() else L112(r56);
  L34(dx5):
    st x = dx5;
    rbind1 = ldf rbind;
    check L114() else D28();
  L111():
    dr4 = tryDispatchBuiltin.1("[", r56);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L113() else L112(dr4);
  L112(r58):
    __2 = ldf `[` in base;
    r59 = dyn __2(r58, -1);
    goto L34(r59);
  D28():
    deopt 119 [];
  L113():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L34(dx4);
  L114():
    p7 = prom<V +>{
      sym13 = ldf `rep.int`;
      base13 = ldf `rep.int` in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      n10 = ld n;
      n11 = force? n10;
      checkMissing(n11);
      rep_int1 = ldf `rep.int` in base;
      r62 = dyn rep_int1(NA_LGL, n11);
      goto L0(r62);
    L2():
      r60 = dyn base13(NA_LGL, <sym n>);
      goto L0(r60);
    };
    p8 = prom<V +>{
      ybottom3 = ld ybottom;
      ybottom4 = force? ybottom3;
      checkMissing(ybottom4);
      return ybottom4;
    };
    p9 = prom<V +>{
      ybottom5 = ld ybottom;
      ybottom6 = force? ybottom5;
      checkMissing(ybottom6);
      return ybottom6;
    };
    p10 = prom<V +>{
      ytop3 = ld ytop;
      ytop4 = force? ytop3;
      checkMissing(ytop4);
      return ytop4;
    };
    p11 = prom<V +>{
      ytop5 = ld ytop;
      ytop6 = force? ytop5;
      checkMissing(ytop6);
      return ytop6;
    };
    r68 = dyn rbind1(p7, p8, p9, p10, p11);
    check L115() else D29();
  D29():
    deopt 125 [r68];
  L115():
    c41 = `is.object`(r68);
    if c41 then L116() else L117(r68);
  L35(dx7):
    st y = dx7;
    polygon = ldf polygon;
    check L119() else D30();
  L116():
    dr6 = tryDispatchBuiltin.1("[", r68);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L118() else L117(dr6);
  L117(r70):
    __3 = ldf `[` in base;
    r71 = dyn __3(r70, -1);
    goto L35(r71);
  D30():
    deopt 131 [];
  L118():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L35(dx6);
  L119():
    p12 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p13 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p14 = prom<V +>{
      col5 = ld col;
      col6 = force? col5;
      checkMissing(col6);
      return col6;
    };
    p15 = prom<V +>{
      border7 = ld border;
      border8 = force? border7;
      checkMissing(border8);
      return border8;
    };
    p16 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    p17 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    p18 = prom<V +>{
      density9 = ld density;
      density10 = force? density9;
      checkMissing(density10);
      return density10;
    };
    p19 = prom<V +>{
      angle3 = ld angle;
      angle4 = force? angle3;
      checkMissing(angle4);
      return angle4;
    };
    ddd1 = ld `...`;
    r80 = dyn polygon[, , col, border, lty, lwd, density, angle, `...`](p12, p13, p14, p15, p16, p17, p18, p19, ddd1);
    check L120() else D31();
  D31():
    deopt 147 [r80];
  L120():
    goto L36();
  }
}