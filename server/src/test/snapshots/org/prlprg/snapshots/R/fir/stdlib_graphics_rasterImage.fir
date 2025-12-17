fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg grDevices:*, reg grDevices1:V, reg p:p(V +), reg r4:V, reg par:cls, reg r5:V, reg plot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg as_raster:cls, reg matrix:cls, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg rasterImage:cls, reg image:*, reg image1:V, reg p5:p(V +), reg r20:V, reg rasterImage1:cls, reg image2:*, reg image3:V, reg p6:p(V +), reg r22:V, reg rasterImage2:cls, reg image4:*, reg image5:V, reg p7:p(V +), reg xinch:cls, reg r24:V, reg r25:V, reg p8:p(V +), reg yinch:cls, reg r27:V, reg r28:V, reg p9:p(V +), reg r30:V, reg rasterImage3:cls, reg image6:*, reg image7:V, reg p10:p(V +), reg r32:V, reg par1:cls, reg op:*, reg op1:V, reg p11:p(V +), reg r34:V |
    mkenv;
    r = clos inner1718327756;
    st rasterImage = r;
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
    r14 = dyn plot[, , type, xlab, ylab](p1, p2, "n", "", "");
    check L8() else D5();
  D5():
    deopt 24 [r14];
  L8():
    as_raster = ldf `as.raster`;
    check L9() else D6();
  D6():
    deopt 26 [];
  L9():
    p4 = prom<V +>{
      matrix = ldf matrix;
      p3 = prom<V +>{
        return <int 0, 1>;
      };
      r16 = dyn matrix[, ncol, nrow](p3, 5.0, 3.0);
      return r16;
    };
    r18 = dyn as_raster(p4);
    check L10() else D7();
  D7():
    deopt 28 [r18];
  L10():
    st image = r18;
    rasterImage = ldf rasterImage;
    check L11() else D8();
  D8():
    deopt 31 [];
  L11():
    p5 = prom<V +>{
      image = ld image;
      image1 = force? image;
      checkMissing(image1);
      return image1;
    };
    r20 = dyn rasterImage[, , , , , interpolate](p5, 100.0, 300.0, 150.0, 350.0, FALSE);
    check L12() else D9();
  D9():
    deopt 39 [r20];
  L12():
    rasterImage1 = ldf rasterImage;
    check L13() else D10();
  D10():
    deopt 41 [];
  L13():
    p6 = prom<V +>{
      image2 = ld image;
      image3 = force? image2;
      checkMissing(image3);
      return image3;
    };
    r22 = dyn rasterImage1(p6, 100.0, 400.0, 150.0, 450.0);
    check L14() else D11();
  D11():
    deopt 47 [r22];
  L14():
    rasterImage2 = ldf rasterImage;
    check L15() else D12();
  D12():
    deopt 49 [];
  L15():
    p7 = prom<V +>{
      image4 = ld image;
      image5 = force? image4;
      checkMissing(image5);
      return image5;
    };
    p8 = prom<V +>{
      xinch = ldf xinch;
      r24 = dyn xinch(0.5);
      r25 = `+`(200.0, r24);
      return r25;
    };
    p9 = prom<V +>{
      yinch = ldf yinch;
      r27 = dyn yinch(0.3);
      r28 = `+`(300.0, r27);
      return r28;
    };
    r30 = dyn rasterImage2[, , , , , interpolate](p7, 200.0, 300.0, p8, p9, FALSE);
    check L16() else D13();
  D13():
    deopt 57 [r30];
  L16():
    rasterImage3 = ldf rasterImage;
    check L17() else D14();
  D14():
    deopt 59 [];
  L17():
    p10 = prom<V +>{
      image6 = ld image;
      image7 = force? image6;
      checkMissing(image7);
      return image7;
    };
    r32 = dyn rasterImage3[, , , , , angle, interpolate](p10, 200.0, 400.0, 250.0, 450.0, 15.0, FALSE);
    check L18() else D15();
  D15():
    deopt 69 [r32];
  L18():
    par1 = ldf par;
    check L19() else D16();
  D16():
    deopt 71 [];
  L19():
    p11 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r34 = dyn par1(p11);
    check L20() else D17();
  D17():
    deopt 73 [r34];
  L20():
    popenv;
    return r34;
  }
}
fun inner1718327756(image, xleft, ybottom, xright, ytop, angle, interpolate, `...`) {
  (reg image:*, reg xleft:*, reg ybottom:*, reg xright:*, reg ytop:*, reg angle:*, reg interpolate:*, reg ddd:dots) -+> V { var image:*, var xleft:*, var ybottom:*, var xright:*, var ytop:*, var angle:*, reg angle_isMissing:L, reg angle_orDefault:*, var interpolate:*, reg interpolate_isMissing:L, reg interpolate_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg _External_graphics:cls, reg C_raster:*, reg C_raster1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg image1:*, reg image2:V, reg inherits:cls, reg r5:V, reg c:L, reg image3:*, reg image4:V, reg as_raster:cls, reg image5:*, reg image6:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg xleft1:*, reg xleft2:V, reg as_double:cls, reg r11:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg ybottom1:*, reg ybottom2:V, reg as_double1:cls, reg r15:V, reg p4:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg xright1:*, reg xright2:V, reg as_double2:cls, reg r19:V, reg p5:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg ytop1:*, reg ytop2:V, reg as_double3:cls, reg r23:V, reg p6:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg angle1:*, reg angle2:V, reg as_double4:cls, reg r27:V, reg p7:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg interpolate1:*, reg interpolate2:V, reg as_logical:cls, reg r31:V, reg p8:p(V +), reg ddd1:dots?, reg r33:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r34:V, reg r35:V, reg invisible:cls, reg r36:V |
    mkenv;
    st image = image;
    st xleft = xleft;
    st ybottom = ybottom;
    st xright = xright;
    st ytop = ytop;
    angle_isMissing = missing.0(angle);
    if angle_isMissing then L0(0.0) else L0(angle);
  L0(angle_orDefault):
    st angle = angle_orDefault;
    interpolate_isMissing = missing.0(interpolate);
    if interpolate_isMissing then L1(TRUE) else L1(interpolate);
  L1(interpolate_orDefault):
    st interpolate = interpolate_orDefault;
    st `...` = ddd;
    sym = ldf `.External.graphics`;
    base = ldf `.External.graphics` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L2():
    sym8 = ldf invisible;
    base8 = ldf invisible in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L8() else L9();
  L4():
    _External_graphics = ldf `.External.graphics`;
    check L6() else D0();
  L5():
    r = dyn base(<sym C_raster>, <lang if(inherits(image, "nativeRaster"), image, as.raster(image))>, <lang as.double(xleft)>, <lang as.double(ybottom)>, <lang as.double(xright)>, <lang as.double(ytop)>, <lang as.double(angle)>, <lang as.logical(interpolate)>, <sym ...>);
    goto L2();
  D0():
    deopt 2 [];
  L3(r35):
    popenv;
    return r35;
  L6():
    p = prom<V +>{
      C_raster = ld C_raster;
      C_raster1 = force? C_raster;
      checkMissing(C_raster1);
      return C_raster1;
    };
    p2 = prom<V +>{
      sym1 = ldf inherits;
      base1 = ldf inherits in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r4):
      c = `as.logical`(r4);
      if c then L4() else L1();
    L2():
      image1 = ld image;
      image2 = force? image1;
      checkMissing(image2);
      inherits = ldf inherits in base;
      r5 = dyn inherits(image2, "nativeRaster", FALSE);
      goto L0(r5);
    L3():
      r3 = dyn base1(<sym image>, "nativeRaster");
      goto L0(r3);
    L1():
      as_raster = ldf `as.raster`;
      p1 = prom<V +>{
        image5 = ld image;
        image6 = force? image5;
        checkMissing(image6);
        return image6;
      };
      r7 = dyn as_raster(p1);
      return r7;
    L4():
      image3 = ld image;
      image4 = force? image3;
      checkMissing(image4);
      return image4;
    };
    p3 = prom<V +>{
      sym2 = ldf `as.double`;
      base2 = ldf `as.double` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      xleft1 = ld xleft;
      xleft2 = force? xleft1;
      checkMissing(xleft2);
      as_double = ldf `as.double` in base;
      r11 = dyn as_double(xleft2);
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym xleft>);
      goto L0(r9);
    };
    p4 = prom<V +>{
      sym3 = ldf `as.double`;
      base3 = ldf `as.double` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      ybottom1 = ld ybottom;
      ybottom2 = force? ybottom1;
      checkMissing(ybottom2);
      as_double1 = ldf `as.double` in base;
      r15 = dyn as_double1(ybottom2);
      goto L0(r15);
    L2():
      r13 = dyn base3(<sym ybottom>);
      goto L0(r13);
    };
    p5 = prom<V +>{
      sym4 = ldf `as.double`;
      base4 = ldf `as.double` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      xright1 = ld xright;
      xright2 = force? xright1;
      checkMissing(xright2);
      as_double2 = ldf `as.double` in base;
      r19 = dyn as_double2(xright2);
      goto L0(r19);
    L2():
      r17 = dyn base4(<sym xright>);
      goto L0(r17);
    };
    p6 = prom<V +>{
      sym5 = ldf `as.double`;
      base5 = ldf `as.double` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      ytop1 = ld ytop;
      ytop2 = force? ytop1;
      checkMissing(ytop2);
      as_double3 = ldf `as.double` in base;
      r23 = dyn as_double3(ytop2);
      goto L0(r23);
    L2():
      r21 = dyn base5(<sym ytop>);
      goto L0(r21);
    };
    p7 = prom<V +>{
      sym6 = ldf `as.double`;
      base6 = ldf `as.double` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      angle1 = ld angle;
      angle2 = force? angle1;
      checkMissing(angle2);
      as_double4 = ldf `as.double` in base;
      r27 = dyn as_double4(angle2);
      goto L0(r27);
    L2():
      r25 = dyn base6(<sym angle>);
      goto L0(r25);
    };
    p8 = prom<V +>{
      sym7 = ldf `as.logical`;
      base7 = ldf `as.logical` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      interpolate1 = ld interpolate;
      interpolate2 = force? interpolate1;
      checkMissing(interpolate2);
      as_logical = ldf `as.logical` in base;
      r31 = dyn as_logical(interpolate2);
      goto L0(r31);
    L2():
      r29 = dyn base7(<sym interpolate>);
      goto L0(r29);
    };
    ddd1 = ld `...`;
    r33 = dyn _External_graphics[, , , , , , , , `...`](p, p2, p3, p4, p5, p6, p7, p8, ddd1);
    check L7() else D1();
  L8():
    invisible = ldf invisible in base;
    r36 = dyn invisible();
    check L10() else D2();
  L9():
    r34 = dyn base8();
    goto L3(r34);
  D1():
    deopt 12 [r33];
  D2():
    deopt 16 [r36];
  L7():
    goto L2();
  L10():
    goto L3(r36);
  }
}