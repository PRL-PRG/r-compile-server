fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3937200048;
    st cancor = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3937200048(x, y, xcenter, ycenter) {
  (reg x:*, reg y:*, reg xcenter:*, reg ycenter:*) -+> V { var x:*, var y:*, var xcenter:*, reg xcenter_isMissing:L, reg xcenter_orDefault:*, var ycenter:*, reg ycenter_isMissing:L, reg ycenter_orDefault:*, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg as_matrix1:cls, reg y1:*, reg y2:V, reg p1:p(V +), reg r3:V, reg nrow:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r5:V, reg nrow1:cls, reg y3:*, reg y4:V, reg p3:p(V +), reg r7:V, reg r8:V, reg c:L, reg stop:cls, reg r9:V, reg ncol:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg r12:V, reg ncol1:cls, reg y5:*, reg y6:V, reg p5:p(V +), reg r14:V, reg nr:*, reg nr1:V, reg r15:V, reg c1:L, reg c2:V, reg ncx:*, reg ncx1:V, reg r16:V, reg c4:L, reg c5:V, reg c7:L, reg c8:V, reg ncy:*, reg ncy1:V, reg r17:V, reg c10:L, reg c11:V, reg c13:L, reg stop1:cls, reg r18:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg xcenter1:*, reg xcenter2:V, reg c14:L, reg c15:L, reg xcenter3:*, reg xcenter4:V, reg c16:L, reg colMeans:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r23:V, reg x9:*, reg x10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg x13:V, reg r25:V, reg rep:cls, reg r26:V, reg r27:V, reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg ncx2:*, reg ncx3:V, reg rep_int:cls, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg xcenter5:*, reg xcenter6:V, reg ncx4:*, reg ncx5:V, reg rep_len:cls, reg r35:V, reg x14:*, reg x15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg x18:V, reg r37:V, reg rep1:cls, reg r38:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r40:V, reg r41:V, reg ycenter1:*, reg ycenter2:V, reg c17:L, reg c18:L, reg ycenter3:*, reg ycenter4:V, reg c19:L, reg colMeans1:cls, reg y7:*, reg y8:V, reg p7:p(V +), reg r43:V, reg y9:*, reg y10:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg y13:V, reg r45:V, reg rep2:cls, reg r46:V, reg r47:V, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg ncy2:*, reg ncy3:V, reg rep_int1:cls, reg r51:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg ycenter5:*, reg ycenter6:V, reg ncy4:*, reg ncy5:V, reg rep_len1:cls, reg r55:V, reg y14:*, reg y15:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg y18:V, reg r57:V, reg rep3:cls, reg r58:V, reg r59:V, reg qr:cls, reg x19:*, reg x20:V, reg p8:p(V +), reg r61:V, reg qr1:cls, reg y19:*, reg y20:V, reg p9:p(V +), reg r63:V, reg qx:*, reg qx1:V, reg c20:L, reg qx3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r64:V, reg dx2:*, reg dx3:V, reg r65:V, reg c21:L, reg stop2:cls, reg r66:V, reg qy:*, reg qy1:V, reg c22:L, reg qy3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r68:V, reg dy:*, reg dy1:V, reg r69:V, reg c23:L, reg stop3:cls, reg r70:V, reg svd:cls, reg qr_qty:cls, reg qx4:*, reg qx5:V, reg p10:p(V +), reg qr_qy:cls, reg qy4:*, reg qy5:V, reg p11:p(V +), reg diag:cls, reg nr2:*, reg nr3:V, reg p12:p(V +), reg dy2:*, reg dy3:V, reg p13:p(V +), reg r76:V, reg p14:p(V +), reg r78:V, reg p15:p(V +), reg r80:V, reg c24:L, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg dx8:*, reg dx9:V, reg r83:V, reg __:cls, reg r84:V, reg p16:p(V +), reg dx10:*, reg dx11:V, reg p17:p(V +), reg dy4:*, reg dy5:V, reg p18:p(V +), reg r88:V, reg backsolve:cls, reg qx6:*, reg qx7:V, reg c25:L, reg qx9:V, reg dr6:V, reg dc3:L, reg dx12:V, reg dx13:V, reg r89:V, reg c26:L, reg dr8:V, reg dc4:L, reg dx16:V, reg dx17:V, reg dx18:*, reg dx19:V, reg r90:V, reg dx20:*, reg dx21:V, reg r91:V, reg __1:cls, reg r92:V, reg p19:p(V +), reg z:*, reg z1:V, reg c27:L, reg z3:V, reg dr10:V, reg dc5:L, reg dx22:V, reg dx23:V, reg r94:V, reg p20:p(V +), reg r96:V, reg colnames:cls, reg x21:*, reg x22:V, reg p21:p(V +), reg r98:V, reg c28:L, reg r100:V, reg dr12:V, reg dc6:L, reg dx24:V, reg dx25:V, reg qx10:*, reg qx11:V, reg c29:L, reg r102:V, reg qx13:V, reg dr14:V, reg dc7:L, reg dx26:V, reg r104:V, reg dx27:V, reg r105:V, reg __2:cls, reg r106:V, reg c30:L, reg dx29:V, reg dr16:V, reg dc8:L, reg dx30:V, reg dx31:V, reg dx32:*, reg dx33:V, reg r107:V, reg __3:cls, reg r108:V, reg l:*, reg rownames__:cls, reg r109:V, reg backsolve1:cls, reg qy6:*, reg qy7:V, reg c31:L, reg qy9:V, reg dr18:V, reg dc9:L, reg dx34:V, reg dx35:V, reg r110:V, reg c32:L, reg dr20:V, reg dc10:L, reg dx38:V, reg dx39:V, reg dy6:*, reg dy7:V, reg r111:V, reg dy8:*, reg dy9:V, reg r112:V, reg __4:cls, reg r113:V, reg p22:p(V +), reg z4:*, reg z5:V, reg c33:L, reg z7:V, reg dr22:V, reg dc11:L, reg dx40:V, reg dx41:V, reg r115:V, reg p23:p(V +), reg r117:V, reg colnames1:cls, reg y21:*, reg y22:V, reg p24:p(V +), reg r119:V, reg c34:L, reg r121:V, reg dr24:V, reg dc12:L, reg dx42:V, reg dx43:V, reg qy10:*, reg qy11:V, reg c35:L, reg r123:V, reg qy13:V, reg dr26:V, reg dc13:L, reg dx44:V, reg r125:V, reg dx45:V, reg r126:V, reg __5:cls, reg r127:V, reg c36:L, reg dx47:V, reg dr28:V, reg dc14:L, reg dx48:V, reg dx49:V, reg dy10:*, reg dy11:V, reg r128:V, reg __6:cls, reg r129:V, reg l1:*, reg rownames__1:cls, reg r130:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r131:V, reg r132:V, reg z8:*, reg z9:V, reg c37:L, reg z11:V, reg dr30:V, reg dc15:L, reg dx50:V, reg dx51:V, reg r133:V, reg xcoef:*, reg xcoef1:V, reg ycoef:*, reg ycoef1:V, reg xcenter7:*, reg xcenter8:V, reg ycenter7:*, reg ycenter8:V, reg list:cls, reg r134:V |
    mkenv;
    st x = x;
    st y = y;
    xcenter_isMissing = missing.0(xcenter);
    if xcenter_isMissing then L0(TRUE) else L0(xcenter);
  L0(xcenter_orDefault):
    st xcenter = xcenter_orDefault;
    ycenter_isMissing = missing.0(ycenter);
    if ycenter_isMissing then L1(TRUE) else L1(ycenter);
  L1(ycenter_orDefault):
    st ycenter = ycenter_orDefault;
    as_matrix = ldf `as.matrix`;
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
    r1 = dyn as_matrix(p);
    check L36() else D1();
  D1():
    deopt 3 [r1];
  L36():
    st x = r1;
    as_matrix1 = ldf `as.matrix`;
    check L37() else D2();
  D2():
    deopt 6 [];
  L37():
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r3 = dyn as_matrix1(p1);
    check L38() else D3();
  D3():
    deopt 8 [r3];
  L38():
    st y = r3;
    nrow = ldf nrow;
    check L39() else D4();
  D4():
    deopt 11 [];
  L39():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn nrow(p2);
    check L40() else D5();
  D5():
    deopt 13 [r5];
  L40():
    st nr = r5;
    nrow1 = ldf nrow;
    check L41() else D6();
  D6():
    deopt 15 [r5];
  L41():
    p3 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r7 = dyn nrow1(p3);
    check L42() else D7();
  D7():
    deopt 17 [r5, r7];
  L42():
    r8 = `!=`(r5, r7);
    c = `as.logical`(r8);
    if c then L43() else L2();
  L2():
    goto L3();
  L3():
    ncol = ldf ncol;
    check L47() else D10();
  L43():
    stop = ldf stop;
    check L44() else D8();
  D8():
    deopt 20 [];
  D10():
    deopt 26 [];
  L44():
    r9 = dyn stop("unequal number of rows in 'cancor'");
    check L45() else D9();
  L47():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r12 = dyn ncol(p4);
    check L48() else D11();
  D9():
    deopt 22 [r9];
  D11():
    deopt 28 [r12];
  L45():
    goto L3();
  L48():
    st ncx = r12;
    ncol1 = ldf ncol;
    check L49() else D12();
  D12():
    deopt 31 [];
  L49():
    p5 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    r14 = dyn ncol1(p5);
    check L50() else D13();
  D13():
    deopt 33 [r14];
  L50():
    st ncy = r14;
    nr = ld nr;
    check L51() else D14();
  D14():
    deopt 35 [nr];
  L51():
    nr1 = force? nr;
    checkMissing(nr1);
    r15 = `!`(nr1);
    c1 = `as.logical`(r15);
    if c1 then L4(c1) else L52();
  L4(c2):
    c7 = `as.logical`(c2);
    if c7 then L5(c7) else L55();
  L52():
    ncx = ld ncx;
    check L53() else D15();
  D15():
    deopt 38 [c1, ncx];
  L5(c8):
    c13 = `as.logical`(c8);
    if c13 then L58() else L6();
  L53():
    ncx1 = force? ncx;
    checkMissing(ncx1);
    r16 = `!`(ncx1);
    c4 = `as.logical`(r16);
    c5 = `||`(c1, c4);
    goto L4(c5);
  L55():
    ncy = ld ncy;
    check L56() else D16();
  D16():
    deopt 42 [c7, ncy];
  L6():
    goto L7();
  L7():
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L62() else L63();
  L56():
    ncy1 = force? ncy;
    checkMissing(ncy1);
    r17 = `!`(ncy1);
    c10 = `as.logical`(r17);
    c11 = `||`(c7, c10);
    goto L5(c11);
  L58():
    stop1 = ldf stop;
    check L59() else D17();
  D17():
    deopt 47 [];
  L8(r21):
    c15 = `as.logical`(r21);
    if c15 then L65() else L9();
  L59():
    r18 = dyn stop1("dimension 0 in 'x' or 'y'");
    check L60() else D18();
  L62():
    xcenter1 = ld xcenter;
    check L64() else D19();
  L63():
    r20 = dyn base(<sym xcenter>);
    goto L8(r20);
  D18():
    deopt 49 [r18];
  D19():
    deopt 53 [xcenter1];
  L9():
    sym3 = ldf rep_len;
    base3 = ldf rep_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L79() else L80();
  L14():
    sym5 = ldf `is.logical`;
    base5 = ldf `is.logical` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L87() else L88();
  L60():
    goto L7();
  L64():
    xcenter2 = force? xcenter1;
    checkMissing(xcenter2);
    c14 = `is.logical`(xcenter2);
    goto L8(c14);
  L65():
    xcenter3 = ld xcenter;
    check L66() else D20();
  D20():
    deopt 56 [xcenter3];
  L15(r34):
    st xcenter = r34;
    x14 = ld x;
    check L84() else D29();
  L17(r41):
    c18 = `as.logical`(r41);
    if c18 then L90() else L18();
  L66():
    xcenter4 = force? xcenter3;
    checkMissing(xcenter4);
    c16 = `as.logical`(xcenter4);
    if c16 then L67() else L10();
  L79():
    xcenter5 = ld xcenter;
    check L81() else D26();
  L80():
    r33 = dyn base3(<sym xcenter>, <sym ncx>);
    goto L15(r33);
  L87():
    ycenter1 = ld ycenter;
    check L89() else D30();
  L88():
    r40 = dyn base5(<sym ycenter>);
    goto L17(r40);
  D26():
    deopt 80 [xcenter5];
  D29():
    deopt 87 [x14];
  D30():
    deopt 94 [ycenter1];
  L10():
    sym2 = ldf `rep.int`;
    base2 = ldf `rep.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L74() else L75();
  L12(r28):
    goto L14();
  L18():
    sym8 = ldf rep_len;
    base8 = ldf rep_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L104() else L105();
  L23():
    qr = ldf qr;
    check L112() else D41();
  L67():
    colMeans = ldf colMeans;
    check L68() else D21();
  L81():
    xcenter6 = force? xcenter5;
    checkMissing(xcenter6);
    ncx4 = ld ncx;
    check L82() else D27();
  L84():
    x15 = force? x14;
    checkMissing(x15);
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L85() else L86();
  L89():
    ycenter2 = force? ycenter1;
    checkMissing(ycenter2);
    c17 = `is.logical`(ycenter2);
    goto L17(c17);
  L90():
    ycenter3 = ld ycenter;
    check L91() else D31();
  D21():
    deopt 59 [];
  D27():
    deopt 82 [ncx4];
  D31():
    deopt 97 [ycenter3];
  D41():
    deopt 134 [];
  L13(r30):
    st xcenter = r30;
    goto L12(r30);
  L16(x18, r37):
    r39 = `-`(x18, r37);
    st x = r39;
    goto L14();
  L24(r54):
    st ycenter = r54;
    y14 = ld y;
    check L109() else D40();
  L68():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r23 = dyn colMeans(p6, <missing>);
    check L69() else D22();
  L74():
    ncx2 = ld ncx;
    check L76() else D24();
  L75():
    r29 = dyn base2(0.0, <sym ncx>);
    goto L13(r29);
  L82():
    ncx5 = force? ncx4;
    checkMissing(ncx5);
    rep_len = ldf rep_len in base;
    r35 = dyn rep_len(xcenter6, ncx5);
    check L83() else D28();
  L85():
    rep1 = ldf rep in base;
    r38 = dyn rep1(<sym xcenter>, <lang rep.int(nr, ncx)>);
    goto L16(x15, r38);
  L86():
    r36 = dyn base4(<sym xcenter>, <lang rep.int(nr, ncx)>);
    goto L16(x15, r36);
  L91():
    ycenter4 = force? ycenter3;
    checkMissing(ycenter4);
    c19 = `as.logical`(ycenter4);
    if c19 then L92() else L19();
  L104():
    ycenter5 = ld ycenter;
    check L106() else D37();
  L105():
    r53 = dyn base8(<sym ycenter>, <sym ncy>);
    goto L24(r53);
  L112():
    p8 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r61 = dyn qr(p8);
    check L113() else D42();
  D22():
    deopt 62 [r23];
  D24():
    deopt 73 [ncx2];
  D28():
    deopt 85 [r35];
  D37():
    deopt 120 [ycenter5];
  D40():
    deopt 127 [y14];
  D42():
    deopt 136 [r61];
  L19():
    sym7 = ldf `rep.int`;
    base7 = ldf `rep.int` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L99() else L100();
  L21(r48):
    goto L23();
  L69():
    st xcenter = r23;
    x9 = ld x;
    check L70() else D23();
  L76():
    ncx3 = force? ncx2;
    checkMissing(ncx3);
    rep_int = ldf `rep.int` in base;
    r31 = dyn rep_int(0.0, ncx3);
    check L77() else D25();
  L83():
    goto L15(r35);
  L92():
    colMeans1 = ldf colMeans;
    check L93() else D32();
  L106():
    ycenter6 = force? ycenter5;
    checkMissing(ycenter6);
    ncy4 = ld ncy;
    check L107() else D38();
  L109():
    y15 = force? y14;
    checkMissing(y15);
    sym9 = ldf rep;
    base9 = ldf rep in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L110() else L111();
  L113():
    st qx = r61;
    qr1 = ldf qr;
    check L114() else D43();
  D23():
    deopt 64 [x9];
  D25():
    deopt 76 [r31];
  D32():
    deopt 100 [];
  D38():
    deopt 122 [ncy4];
  D43():
    deopt 139 [];
  L22(r50):
    st ycenter = r50;
    goto L21(r50);
  L25(y18, r57):
    r59 = `-`(y18, r57);
    st y = r59;
    goto L23();
  L70():
    x10 = force? x9;
    checkMissing(x10);
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L71() else L72();
  L77():
    goto L13(r31);
  L93():
    p7 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r43 = dyn colMeans1(p7);
    check L94() else D33();
  L99():
    ncy2 = ld ncy;
    check L101() else D35();
  L100():
    r49 = dyn base7(0.0, <sym ncy>);
    goto L22(r49);
  L107():
    ncy5 = force? ncy4;
    checkMissing(ncy5);
    rep_len1 = ldf rep_len in base;
    r55 = dyn rep_len1(ycenter6, ncy5);
    check L108() else D39();
  L110():
    rep3 = ldf rep in base;
    r58 = dyn rep3(<sym ycenter>, <lang rep.int(nr, ncy)>);
    goto L25(y15, r58);
  L111():
    r56 = dyn base9(<sym ycenter>, <lang rep.int(nr, ncy)>);
    goto L25(y15, r56);
  L114():
    p9 = prom<V +>{
      y19 = ld y;
      y20 = force? y19;
      checkMissing(y20);
      return y20;
    };
    r63 = dyn qr1(p9);
    check L115() else D44();
  D33():
    deopt 102 [r43];
  D35():
    deopt 113 [ncy2];
  D39():
    deopt 125 [r55];
  D44():
    deopt 141 [r63];
  L11(x13, r25):
    r27 = `-`(x13, r25);
    st x = r27;
    goto L12(r27);
  L71():
    rep = ldf rep in base;
    r26 = dyn rep(<sym xcenter>, <lang rep.int(nr, ncx)>);
    goto L11(x10, r26);
  L72():
    r24 = dyn base1(<sym xcenter>, <lang rep.int(nr, ncx)>);
    goto L11(x10, r24);
  L94():
    st ycenter = r43;
    y9 = ld y;
    check L95() else D34();
  L101():
    ncy3 = force? ncy2;
    checkMissing(ncy3);
    rep_int1 = ldf `rep.int` in base;
    r51 = dyn rep_int1(0.0, ncy3);
    check L102() else D36();
  L108():
    goto L24(r55);
  L115():
    st qy = r63;
    qx = ld qx;
    check L116() else D45();
  D34():
    deopt 104 [y9];
  D36():
    deopt 116 [r51];
  D45():
    deopt 143 [qx];
  L95():
    y10 = force? y9;
    checkMissing(y10);
    sym6 = ldf rep;
    base6 = ldf rep in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L96() else L97();
  L102():
    goto L22(r51);
  L116():
    qx1 = force? qx;
    checkMissing(qx1);
    c20 = `is.object`(qx1);
    if c20 then L118() else L119(qx1);
  L20(y13, r45):
    r47 = `-`(y13, r45);
    st y = r47;
    goto L21(r47);
  L96():
    rep2 = ldf rep in base;
    r46 = dyn rep2(<sym ycenter>, <lang rep.int(nr, ncy)>);
    goto L20(y10, r46);
  L97():
    r44 = dyn base6(<sym ycenter>, <lang rep.int(nr, ncy)>);
    goto L20(y10, r44);
  L117(dx1):
    st dx = dx1;
    dx2 = ld dx;
    check L121() else D46();
  L118():
    dr = tryDispatchBuiltin.1("$", qx1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L120() else L119(dr);
  L119(qx3):
    r64 = `$`(qx3, <sym rank>);
    goto L117(r64);
  D46():
    deopt 147 [dx2];
  L120():
    dx = getTryDispatchBuiltinValue(dr);
    goto L117(dx);
  L121():
    dx3 = force? dx2;
    checkMissing(dx3);
    r65 = `!`(dx3);
    c21 = `as.logical`(r65);
    if c21 then L122() else L26();
  L26():
    goto L27();
  L27():
    qy = ld qy;
    check L126() else D49();
  L122():
    stop2 = ldf stop;
    check L123() else D47();
  D47():
    deopt 151 [];
  D49():
    deopt 156 [qy];
  L123():
    r66 = dyn stop2("'x' has rank 0");
    check L124() else D48();
  L126():
    qy1 = force? qy;
    checkMissing(qy1);
    c22 = `is.object`(qy1);
    if c22 then L128() else L129(qy1);
  D48():
    deopt 153 [r66];
  L124():
    goto L27();
  L127(dx5):
    st dy = dx5;
    dy = ld dy;
    check L131() else D50();
  L128():
    dr2 = tryDispatchBuiltin.1("$", qy1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L130() else L129(dr2);
  L129(qy3):
    r68 = `$`(qy3, <sym rank>);
    goto L127(r68);
  D50():
    deopt 160 [dy];
  L130():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L127(dx4);
  L131():
    dy1 = force? dy;
    checkMissing(dy1);
    r69 = `!`(dy1);
    c23 = `as.logical`(r69);
    if c23 then L132() else L28();
  L28():
    goto L29();
  L29():
    svd = ldf svd;
    check L136() else D53();
  L132():
    stop3 = ldf stop;
    check L133() else D51();
  D51():
    deopt 164 [];
  D53():
    deopt 170 [];
  L133():
    r70 = dyn stop3("'y' has rank 0");
    check L134() else D52();
  L136():
    p16 = prom<V +>{
      qr_qty = ldf `qr.qty`;
      p10 = prom<V +>{
        qx4 = ld qx;
        qx5 = force? qx4;
        checkMissing(qx5);
        return qx5;
      };
      p15 = prom<V +>{
        qr_qy = ldf `qr.qy`;
        p11 = prom<V +>{
          qy4 = ld qy;
          qy5 = force? qy4;
          checkMissing(qy5);
          return qy5;
        };
        p14 = prom<V +>{
          diag = ldf diag;
          p12 = prom<V +>{
            nr2 = ld nr;
            nr3 = force? nr2;
            checkMissing(nr3);
            return nr3;
          };
          p13 = prom<V +>{
            dy2 = ld dy;
            dy3 = force? dy2;
            checkMissing(dy3);
            return dy3;
          };
          r76 = dyn diag(1.0, p12, p13);
          return r76;
        };
        r78 = dyn qr_qy(p11, p14);
        return r78;
      };
      r80 = dyn qr_qty(p10, p15);
      c24 = `is.object`(r80);
      if c24 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr4 = tryDispatchBuiltin.1("[", r80);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      dx8 = ld dx;
      dx9 = force? dx8;
      checkMissing(dx9);
      r83 = `:`(1, dx9);
      __ = ldf `[` in base;
      r84 = dyn __(r80, r83, <missing>, FALSE);
      goto L0(r84);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    p17 = prom<V +>{
      dx10 = ld dx;
      dx11 = force? dx10;
      checkMissing(dx11);
      return dx11;
    };
    p18 = prom<V +>{
      dy4 = ld dy;
      dy5 = force? dy4;
      checkMissing(dy5);
      return dy5;
    };
    r88 = dyn svd(p16, p17, p18);
    check L137() else D54();
  D52():
    deopt 166 [r70];
  D54():
    deopt 174 [r88];
  L134():
    goto L29();
  L137():
    st z = r88;
    backsolve = ldf backsolve;
    check L138() else D55();
  D55():
    deopt 177 [];
  L138():
    p19 = prom<V +>{
      qx6 = ld qx;
      qx7 = force? qx6;
      checkMissing(qx7);
      c25 = `is.object`(qx7);
      if c25 then L2() else L3(qx7);
    L1(dx13):
      c26 = `is.object`(dx13);
      if c26 then L5() else L6();
    L2():
      dr6 = tryDispatchBuiltin.1("$", qx7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(qx9):
      r89 = `$`(qx9, <sym qr>);
      goto L1(r89);
    L0(dx17):
      return dx17;
    L4():
      dx12 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx12);
    L5():
      dr8 = tryDispatchBuiltin.1("[", dx13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6();
    L6():
      dx18 = ld dx;
      dx19 = force? dx18;
      checkMissing(dx19);
      r90 = `:`(1, dx19);
      dx20 = ld dx;
      dx21 = force? dx20;
      checkMissing(dx21);
      r91 = `:`(1, dx21);
      __1 = ldf `[` in base;
      r92 = dyn __1(dx13, r90, r91, FALSE);
      goto L0(r92);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx16);
    };
    p20 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c27 = `is.object`(z1);
      if c27 then L1() else L2(z1);
    L0(dx23):
      return dx23;
    L1():
      dr10 = tryDispatchBuiltin.1("$", z1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(z3):
      r94 = `$`(z3, <sym u>);
      goto L0(r94);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx22);
    };
    r96 = dyn backsolve(p19, p20);
    check L139() else D56();
  D56():
    deopt 180 [r96];
  L139():
    st xcoef = r96;
    colnames = ldf colnames;
    check L140() else D57();
  D57():
    deopt 183 [];
  L140():
    p21 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    r98 = dyn colnames(p21);
    check L141() else D58();
  D58():
    deopt 185 [r98];
  L141():
    c28 = `is.object`(r98);
    if c28 then L142() else L143(r98);
  L30(dx25):
    c30 = `is.object`(dx25);
    if c30 then L150() else L151(dx25);
  L142():
    dr12 = tryDispatchBuiltin.1("[", r98);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L144() else L143(dr12);
  L143(r100):
    qx10 = ld qx;
    check L145() else D59();
  D59():
    deopt 186 [r100, qx10];
  L31(dx31):
    l = ld xcoef;
    rownames__ = ldf `rownames<-`;
    check L154() else D61();
  L144():
    dx24 = getTryDispatchBuiltinValue(dr12);
    goto L30(dx24);
  L145():
    qx11 = force? qx10;
    checkMissing(qx11);
    c29 = `is.object`(qx11);
    if c29 then L147() else L148(r100, qx11);
  L150():
    dr16 = tryDispatchBuiltin.1("[", dx25);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L152() else L151(dr16);
  L151(dx29):
    dx32 = ld dx;
    check L153() else D60();
  D60():
    deopt 191 [dx29, 1, dx32];
  D61():
    deopt 196 [dx31, l, dx31];
  L146(r104, dx27):
    __2 = ldf `[` in base;
    r106 = dyn __2(r104, dx27);
    goto L30(r106);
  L147():
    dr14 = tryDispatchBuiltin.1("$", qx11);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L149() else L148(r100, dr14);
  L148(r102, qx13):
    r105 = `$`(qx13, <sym pivot>);
    goto L146(r102, r105);
  L152():
    dx30 = getTryDispatchBuiltinValue(dr16);
    goto L31(dx30);
  L153():
    dx33 = force? dx32;
    checkMissing(dx33);
    r107 = `:`(1, dx33);
    __3 = ldf `[` in base;
    r108 = dyn __3(dx29, r107);
    goto L31(r108);
  L154():
    r109 = dyn rownames__(l, NULL, dx31);
    check L155() else D62();
  D62():
    deopt 198 [dx31, r109];
  L149():
    dx26 = getTryDispatchBuiltinValue(dr14);
    goto L146(r100, dx26);
  L155():
    st xcoef = r109;
    backsolve1 = ldf backsolve;
    check L156() else D63();
  D63():
    deopt 201 [];
  L156():
    p22 = prom<V +>{
      qy6 = ld qy;
      qy7 = force? qy6;
      checkMissing(qy7);
      c31 = `is.object`(qy7);
      if c31 then L2() else L3(qy7);
    L1(dx35):
      c32 = `is.object`(dx35);
      if c32 then L5() else L6();
    L2():
      dr18 = tryDispatchBuiltin.1("$", qy7);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L4() else L3(dr18);
    L3(qy9):
      r110 = `$`(qy9, <sym qr>);
      goto L1(r110);
    L0(dx39):
      return dx39;
    L4():
      dx34 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx34);
    L5():
      dr20 = tryDispatchBuiltin.1("[", dx35);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L7() else L6();
    L6():
      dy6 = ld dy;
      dy7 = force? dy6;
      checkMissing(dy7);
      r111 = `:`(1, dy7);
      dy8 = ld dy;
      dy9 = force? dy8;
      checkMissing(dy9);
      r112 = `:`(1, dy9);
      __4 = ldf `[` in base;
      r113 = dyn __4(dx35, r111, r112, FALSE);
      goto L0(r113);
    L7():
      dx38 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx38);
    };
    p23 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c33 = `is.object`(z5);
      if c33 then L1() else L2(z5);
    L0(dx41):
      return dx41;
    L1():
      dr22 = tryDispatchBuiltin.1("$", z5);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(z7):
      r115 = `$`(z7, <sym v>);
      goto L0(r115);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx40);
    };
    r117 = dyn backsolve1(p22, p23);
    check L157() else D64();
  D64():
    deopt 204 [r117];
  L157():
    st ycoef = r117;
    colnames1 = ldf colnames;
    check L158() else D65();
  D65():
    deopt 207 [];
  L158():
    p24 = prom<V +>{
      y21 = ld y;
      y22 = force? y21;
      checkMissing(y22);
      return y22;
    };
    r119 = dyn colnames1(p24);
    check L159() else D66();
  D66():
    deopt 209 [r119];
  L159():
    c34 = `is.object`(r119);
    if c34 then L160() else L161(r119);
  L32(dx43):
    c36 = `is.object`(dx43);
    if c36 then L168() else L169(dx43);
  L160():
    dr24 = tryDispatchBuiltin.1("[", r119);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L162() else L161(dr24);
  L161(r121):
    qy10 = ld qy;
    check L163() else D67();
  D67():
    deopt 210 [r121, qy10];
  L33(dx49):
    l1 = ld ycoef;
    rownames__1 = ldf `rownames<-`;
    check L172() else D69();
  L162():
    dx42 = getTryDispatchBuiltinValue(dr24);
    goto L32(dx42);
  L163():
    qy11 = force? qy10;
    checkMissing(qy11);
    c35 = `is.object`(qy11);
    if c35 then L165() else L166(r121, qy11);
  L168():
    dr28 = tryDispatchBuiltin.1("[", dx43);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L170() else L169(dr28);
  L169(dx47):
    dy10 = ld dy;
    check L171() else D68();
  D68():
    deopt 215 [dx47, 1, dy10];
  D69():
    deopt 220 [dx49, l1, dx49];
  L164(r125, dx45):
    __5 = ldf `[` in base;
    r127 = dyn __5(r125, dx45);
    goto L32(r127);
  L165():
    dr26 = tryDispatchBuiltin.1("$", qy11);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L167() else L166(r121, dr26);
  L166(r123, qy13):
    r126 = `$`(qy13, <sym pivot>);
    goto L164(r123, r126);
  L170():
    dx48 = getTryDispatchBuiltinValue(dr28);
    goto L33(dx48);
  L171():
    dy11 = force? dy10;
    checkMissing(dy11);
    r128 = `:`(1, dy11);
    __6 = ldf `[` in base;
    r129 = dyn __6(dx47, r128);
    goto L33(r129);
  L172():
    r130 = dyn rownames__1(l1, NULL, dx49);
    check L173() else D70();
  D70():
    deopt 222 [dx49, r130];
  L167():
    dx44 = getTryDispatchBuiltinValue(dr26);
    goto L164(r121, dx44);
  L173():
    st ycoef = r130;
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L174() else L175();
  L34(r132):
    popenv;
    return r132;
  L174():
    z8 = ld z;
    check L176() else D71();
  L175():
    r131 = dyn base10[cor, xcoef, ycoef, xcenter, ycenter](<lang `$`(z, d)>, <sym xcoef>, <sym ycoef>, <sym xcenter>, <sym ycenter>);
    goto L34(r131);
  D71():
    deopt 226 [z8];
  L176():
    z9 = force? z8;
    checkMissing(z9);
    c37 = `is.object`(z9);
    if c37 then L178() else L179(z9);
  L177(dx51):
    xcoef = ld xcoef;
    check L181() else D72();
  L178():
    dr30 = tryDispatchBuiltin.1("$", z9);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L180() else L179(dr30);
  L179(z11):
    r133 = `$`(z11, <sym d>);
    goto L177(r133);
  D72():
    deopt 230 [xcoef];
  L180():
    dx50 = getTryDispatchBuiltinValue(dr30);
    goto L177(dx50);
  L181():
    xcoef1 = force? xcoef;
    checkMissing(xcoef1);
    ycoef = ld ycoef;
    check L182() else D73();
  D73():
    deopt 233 [ycoef];
  L182():
    ycoef1 = force? ycoef;
    checkMissing(ycoef1);
    xcenter7 = ld xcenter;
    check L183() else D74();
  D74():
    deopt 236 [xcenter7];
  L183():
    xcenter8 = force? xcenter7;
    checkMissing(xcenter8);
    ycenter7 = ld ycenter;
    check L184() else D75();
  D75():
    deopt 239 [ycenter7];
  L184():
    ycenter8 = force? ycenter7;
    checkMissing(ycenter8);
    list = ldf list in base;
    r134 = dyn list(dx51, xcoef1, ycoef1, xcenter8, ycenter8);
    check L185() else D76();
  D76():
    deopt 243 [r134];
  L185():
    goto L34(r134);
  }
}