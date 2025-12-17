fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2112527838;
    st `text.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2112527838(x, y, labels, adj, pos, offset, vfont, cex, col, font, `...`) {
  (reg x:*, reg y:*, reg labels:*, reg adj:*, reg pos:*, reg offset:*, reg vfont:*, reg cex:*, reg col:*, reg font:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg r3:I, reg p:p(V +), var adj:*, reg adj_isMissing:L, reg adj_orDefault:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var vfont:*, reg vfont_isMissing:L, reg vfont_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var font:*, reg font_isMissing:L, reg font_orDefault:*, var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg r8:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c6:L, reg r10:V, reg y1:*, reg y2:V, reg c7:L, reg c8:L, reg c9:L, reg c10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c17:L, reg c18:L, reg r12:V, reg y3:*, reg y4:V, reg is_expression:cls, reg r13:V, reg c19:L, reg c20:V, reg c23:L, reg c24:V, reg c26:L, reg y5:*, reg y6:V, reg xy_coords:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg y7:*, reg y8:V, reg p2:p(V +), reg r17:V, reg as_graphicsAnnot:cls, reg labels1:*, reg labels2:V, reg p3:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg vfont1:*, reg vfont2:V, reg c27:V, reg r22:V, reg c28:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg pmatch:cls, reg vfont3:*, reg vfont4:V, reg c29:L, reg vfont6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r25:V, reg p4:p(V +), reg Hershey:*, reg Hershey1:V, reg c30:L, reg Hershey3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r27:V, reg p5:p(V +), reg r29:V, reg pmatch1:cls, reg vfont7:*, reg vfont8:V, reg c31:L, reg vfont10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r30:V, reg p6:p(V +), reg Hershey4:*, reg Hershey5:V, reg c32:L, reg Hershey7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r32:V, reg p7:p(V +), reg r34:V, reg c33:cls, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg _External_graphics:cls, reg C_text:*, reg C_text1:V, reg p8:p(V +), reg x7:*, reg x8:V, reg p9:p(V +), reg labels3:*, reg labels4:V, reg p10:p(V +), reg adj1:*, reg adj2:V, reg p11:p(V +), reg pos1:*, reg pos2:V, reg p12:p(V +), reg offset1:*, reg offset2:V, reg p13:p(V +), reg vfont11:*, reg vfont12:V, reg p14:p(V +), reg cex1:*, reg cex2:V, reg p15:p(V +), reg col1:*, reg col2:V, reg p16:p(V +), reg font1:*, reg font2:V, reg p17:p(V +), reg ddd1:dots?, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg invisible:cls, reg r52:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L1() else L2(labels);
  L1():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L4() else L5(x2);
    L2():
      r = dyn base(<lang `$`(x, x)>);
      goto L0(r);
    L3(dx1):
      r3 = seq_along(dx1);
      goto L0(r3);
    L4():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(x4):
      r2 = `$`(x4, <sym x>);
      goto L3(r2);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    goto L2(p);
  L2(labels_orDefault):
    st labels = labels_orDefault;
    adj_isMissing = missing.0(adj);
    if adj_isMissing then L3(NULL) else L3(adj);
  L3(adj_orDefault):
    st adj = adj_orDefault;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L4(NULL) else L4(pos);
  L4(pos_orDefault):
    st pos = pos_orDefault;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L5(0.5) else L5(offset);
  L5(offset_orDefault):
    st offset = offset_orDefault;
    vfont_isMissing = missing.0(vfont);
    if vfont_isMissing then L6(NULL) else L6(vfont);
  L6(vfont_orDefault):
    st vfont = vfont_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L7(1.0) else L7(cex);
  L7(cex_orDefault):
    st cex = cex_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L8(NULL) else L8(col);
  L8(col_orDefault):
    st col = col_orDefault;
    font_isMissing = missing.0(font);
    if font_isMissing then L9(NULL) else L9(font);
  L9(font_orDefault):
    st font = font_orDefault;
    st `...` = ddd;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L10(r6):
    r8 = `!`(r6);
    c1 = `as.logical`(r8);
    if c1 then L25() else L11(c1);
  L23():
    missing = ldf missing in base;
    r7 = dyn missing(<sym y>);
    goto L10(r7);
  L24():
    r5 = dyn base1(<sym y>);
    goto L10(r5);
  L11(c3):
    c26 = `as.logical`(c3);
    if c26 then L36() else L15();
  L25():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L12(c6, r10):
    c8 = `as.logical`(r10);
    if c8 then L13(c6, c8) else L29();
  L15():
    goto L16();
  L16():
    xy_coords = ldf `xy.coords`;
    check L39() else D4();
  L26():
    y1 = ld y;
    check L28() else D0();
  L27():
    r9 = dyn base2(<sym y>);
    goto L12(c1, r9);
  L36():
    y5 = ld y;
    check L37() else D3();
  D0():
    deopt 5 [c1, y1];
  D3():
    deopt 16 [y5];
  D4():
    deopt 25 [];
  L13(c9, c10):
    c23 = `as.logical`(c10);
    c24 = `&&`(c9, c23);
    goto L11(c24);
  L28():
    y2 = force? y1;
    checkMissing(y2);
    c7 = `is.character`(y2);
    goto L12(c1, c7);
  L29():
    sym3 = ldf `is.expression`;
    base3 = ldf `is.expression` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L37():
    y6 = force? y5;
    checkMissing(y6);
    st labels = y6;
    st y = NULL;
    goto L16();
  L39():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    r17 = dyn xy_coords[, , recycle, setLab](p1, p2, TRUE, FALSE);
    check L40() else D5();
  D5():
    deopt 32 [r17];
  L14(c17, c18, r12):
    c19 = `as.logical`(r12);
    c20 = `||`(c18, c19);
    goto L13(c17, c20);
  L30():
    y3 = ld y;
    check L32() else D1();
  L31():
    r11 = dyn base3(<sym y>);
    goto L14(c6, c8, r11);
  L40():
    st x = r17;
    as_graphicsAnnot = ldf `as.graphicsAnnot`;
    check L41() else D6();
  D1():
    deopt 10 [c6, c8, y3];
  D6():
    deopt 35 [];
  L32():
    y4 = force? y3;
    checkMissing(y4);
    is_expression = ldf `is.expression` in base;
    r13 = dyn is_expression(y4);
    check L33() else D2();
  L41():
    p3 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    r19 = dyn as_graphicsAnnot(p3);
    check L42() else D7();
  D2():
    deopt 13 [c6, c8, r13];
  D7():
    deopt 37 [r19];
  L33():
    goto L14(c6, c8, r13);
  L42():
    st labels = r19;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L17(r21):
    r22 = `!`(r21);
    c28 = `as.logical`(r22);
    if c28 then L46() else L18();
  L43():
    vfont1 = ld vfont;
    check L45() else D8();
  L44():
    r20 = dyn base4(<sym vfont>);
    goto L17(r20);
  D8():
    deopt 40 [vfont1];
  L18():
    goto L20();
  L20():
    sym6 = ldf `.External.graphics`;
    base6 = ldf `.External.graphics` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L45():
    vfont2 = force? vfont1;
    checkMissing(vfont2);
    c27 = `==`(vfont2, NULL);
    goto L17(c27);
  L46():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L19(r24):
    st vfont = r24;
    goto L20();
  L21():
    sym7 = ldf invisible;
    base7 = ldf invisible in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L59() else L60();
  L47():
    pmatch = ldf pmatch;
    check L49() else D9();
  L48():
    r23 = dyn base5[typeface, fontindex](<lang pmatch(`[`(vfont, 1), `$`(Hershey, typeface))>, <lang pmatch(`[`(vfont, 2), `$`(Hershey, fontindex))>);
    goto L19(r23);
  L55():
    _External_graphics = ldf `.External.graphics`;
    check L57() else D14();
  L56():
    r37 = dyn base6(<sym C_text>, <sym x>, <sym labels>, <sym adj>, <sym pos>, <sym offset>, <sym vfont>, <sym cex>, <sym col>, <sym font>, <sym ...>);
    goto L21();
  D9():
    deopt 47 [];
  D14():
    deopt 65 [];
  L22(r51):
    popenv;
    return r51;
  L49():
    p4 = prom<V +>{
      vfont3 = ld vfont;
      vfont4 = force? vfont3;
      checkMissing(vfont4);
      c29 = `is.object`(vfont4);
      if c29 then L1() else L2(vfont4);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", vfont4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(vfont6):
      __ = ldf `[` in base;
      r25 = dyn __(vfont6, 1);
      goto L0(r25);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p5 = prom<V +>{
      Hershey = ld Hershey;
      Hershey1 = force? Hershey;
      checkMissing(Hershey1);
      c30 = `is.object`(Hershey1);
      if c30 then L1() else L2(Hershey1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", Hershey1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(Hershey3):
      r27 = `$`(Hershey3, <sym typeface>);
      goto L0(r27);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r29 = dyn pmatch(p4, p5);
    check L50() else D10();
  L57():
    p8 = prom<V +>{
      C_text = ld C_text;
      C_text1 = force? C_text;
      checkMissing(C_text1);
      return C_text1;
    };
    p9 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p10 = prom<V +>{
      labels3 = ld labels;
      labels4 = force? labels3;
      checkMissing(labels4);
      return labels4;
    };
    p11 = prom<V +>{
      adj1 = ld adj;
      adj2 = force? adj1;
      checkMissing(adj2);
      return adj2;
    };
    p12 = prom<V +>{
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      return pos2;
    };
    p13 = prom<V +>{
      offset1 = ld offset;
      offset2 = force? offset1;
      checkMissing(offset2);
      return offset2;
    };
    p14 = prom<V +>{
      vfont11 = ld vfont;
      vfont12 = force? vfont11;
      checkMissing(vfont12);
      return vfont12;
    };
    p15 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p16 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p17 = prom<V +>{
      font1 = ld font;
      font2 = force? font1;
      checkMissing(font2);
      return font2;
    };
    ddd1 = ld `...`;
    r49 = dyn _External_graphics[, , , , , , , , , , `...`](p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, ddd1);
    check L58() else D15();
  L59():
    invisible = ldf invisible in base;
    r52 = dyn invisible();
    check L61() else D16();
  L60():
    r50 = dyn base7();
    goto L22(r50);
  D10():
    deopt 50 [r29];
  D15():
    deopt 77 [r49];
  D16():
    deopt 81 [r52];
  L50():
    pmatch1 = ldf pmatch;
    check L51() else D11();
  L58():
    goto L21();
  L61():
    goto L22(r52);
  D11():
    deopt 53 [];
  L51():
    p6 = prom<V +>{
      vfont7 = ld vfont;
      vfont8 = force? vfont7;
      checkMissing(vfont8);
      c31 = `is.object`(vfont8);
      if c31 then L1() else L2(vfont8);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", vfont8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(vfont10):
      __1 = ldf `[` in base;
      r30 = dyn __1(vfont10, 2);
      goto L0(r30);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      Hershey4 = ld Hershey;
      Hershey5 = force? Hershey4;
      checkMissing(Hershey5);
      c32 = `is.object`(Hershey5);
      if c32 then L1() else L2(Hershey5);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", Hershey5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(Hershey7):
      r32 = `$`(Hershey7, <sym fontindex>);
      goto L0(r32);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r34 = dyn pmatch1(p6, p7);
    check L52() else D12();
  D12():
    deopt 56 [r34];
  L52():
    c33 = ldf c in base;
    r35 = dyn c33(r29, r34);
    check L53() else D13();
  D13():
    deopt 59 [r35];
  L53():
    goto L19(r35);
  }
}