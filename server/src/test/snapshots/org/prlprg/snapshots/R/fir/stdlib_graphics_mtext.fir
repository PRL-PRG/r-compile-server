fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg p:p(V +), reg p1:p(V +), reg r3:V, reg mtext:cls, reg r4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg mtext1:cls, reg paste:cls, reg s1:*, reg s2:V, reg p2:p(V +), reg s3:*, reg s4:V, reg r6:V, reg r7:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg p5:p(V +), reg s5:*, reg s6:V, reg p6:p(V +), reg s7:*, reg s8:V, reg p7:p(V +), reg s9:*, reg s10:V, reg p8:p(V +), reg s11:*, reg s12:V, reg r15:V, reg r16:V, reg p9:p(V +), reg r18:V, reg mtext2:cls, reg p10:p(V +), reg r20:V, reg mtext3:cls, reg p11:p(V +), reg r22:V, reg plot1:cls, reg p12:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r24:V, reg r25:V, reg r26:V, reg p13:p(V +), reg r28:V, reg s13:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg c1:L, reg x1:V, reg mtext4:cls, reg paste1:cls, reg s14:*, reg s15:V, reg p14:p(V +), reg r30:V, reg p15:p(V +), reg s16:*, reg s17:V, reg p16:p(V +), reg r33:V, reg plot2:cls, reg r34:V, reg s18:V, reg l2:I, reg i10:I, reg i11:I, reg i12:I, reg c2:L, reg x2:V, reg mtext5:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r35:V, reg r36:V, reg c3:cls, reg r37:V, reg p17:p(V +), reg si:*, reg si1:V, reg p18:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg c4:cls, reg r42:V, reg p19:p(V +), reg r44:V |
    mkenv;
    r = clos inner3127354442;
    st mtext = r;
    plot = ldf plot;
    check L6() else D0();
  D0():
    deopt 4 [];
  L6():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p1 = prom<V +>{
      return <real 16.0, 9.0, 4.0, 1.0, 0.0, 1.0, 4.0, 9.0, 16.0, 25.0>;
    };
    r3 = dyn plot[, , main, xlab](p, p1, "Parabola Points", "xlab");
    check L7() else D1();
  D1():
    deopt 11 [r3];
  L7():
    mtext = ldf mtext;
    check L8() else D2();
  D2():
    deopt 13 [];
  L8():
    r4 = dyn mtext("10 of them");
    check L9() else D3();
  D3():
    deopt 15 [r4];
  L9():
    s = toForSeq(<int 1, 2, 3, 4>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st s = x;
    mtext1 = ldf mtext;
    check L11() else D4();
  L10():
    mtext2 = ldf mtext;
    check L13() else D6();
  D4():
    deopt 19 [i2];
  D6():
    deopt 36 [];
  L11():
    p4 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      p3 = prom<V +>{
        s3 = ld s;
        s4 = force? s3;
        checkMissing(s4);
        r6 = `+`(1.0, s4);
        r7 = `/`(r6, 2.0);
        return r7;
      };
      r9 = dyn paste("mtext(..., line= -1, {side, col, font} = ", p2, ", cex = ", p3, ")");
      return r9;
    };
    p5 = prom<V +>{
      return -1.0;
    };
    p6 = prom<V +>{
      s5 = ld s;
      s6 = force? s5;
      checkMissing(s6);
      return s6;
    };
    p7 = prom<V +>{
      s7 = ld s;
      s8 = force? s7;
      checkMissing(s8);
      return s8;
    };
    p8 = prom<V +>{
      s9 = ld s;
      s10 = force? s9;
      checkMissing(s10);
      return s10;
    };
    p9 = prom<V +>{
      s11 = ld s;
      s12 = force? s11;
      checkMissing(s12);
      r15 = `+`(1.0, s12);
      r16 = `/`(r15, 2.0);
      return r16;
    };
    r18 = dyn mtext1[, line, side, col, font, cex](p4, p5, p6, p7, p8, p9);
    check L12() else D5();
  L13():
    p10 = prom<V +>{
      return -2.0;
    };
    r20 = dyn mtext2[, line]("mtext(..., line= -2)", p10);
    check L14() else D7();
  D5():
    deopt 31 [i2, r18];
  D7():
    deopt 40 [r20];
  L12():
    goto L0(i2);
  L14():
    mtext3 = ldf mtext;
    check L15() else D8();
  D8():
    deopt 42 [];
  L15():
    p11 = prom<V +>{
      return -2.0;
    };
    r22 = dyn mtext3[, line, adj]("mtext(..., line= -2, adj = 0)", p11, 0.0);
    check L16() else D9();
  D9():
    deopt 48 [r22];
  L16():
    plot1 = ldf plot;
    check L17() else D10();
  D10():
    deopt 50 [];
  L17():
    p12 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p13 = prom<V +>{
      sym = ldf exp;
      base = ldf exp in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r25):
      return r25;
    L1():
      r26 = exp(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
      goto L0(r26);
    L2():
      r24 = dyn base(<lang `:`(1.0, 10.0)>);
      goto L0(r24);
    };
    r28 = dyn plot1[, , log, main, xlab](p12, p13, "y", "log =\"y\"", "xlab");
    check L18() else D11();
  D11():
    deopt 59 [r28];
  L18():
    s13 = toForSeq(<int 1, 2, 3, 4>);
    l1 = length(s13);
    i5 = 0;
    goto L2(i5);
  L2(i6):
    i7 = `+`.1(i6, 1);
    c1 = `<`.1(l1, i7);
    if c1 then L19() else L3();
  L3():
    x1 = `[[`(s13, i7, NULL, TRUE);
    st s = x1;
    mtext4 = ldf mtext;
    check L20() else D12();
  L19():
    plot2 = ldf plot;
    check L22() else D14();
  D12():
    deopt 63 [i7];
  D14():
    deopt 72 [];
  L20():
    p15 = prom<V +>{
      paste1 = ldf paste;
      p14 = prom<V +>{
        s14 = ld s;
        s15 = force? s14;
        checkMissing(s15);
        return s15;
      };
      r30 = dyn paste1("mtext(...,side=", p14, ")");
      return r30;
    };
    p16 = prom<V +>{
      s16 = ld s;
      s17 = force? s16;
      checkMissing(s17);
      return s17;
    };
    r33 = dyn mtext4[, side](p15, p16);
    check L21() else D13();
  L22():
    r34 = dyn plot2[, axes, ann, `frame.plot`](0.0, FALSE, FALSE, TRUE);
    check L23() else D15();
  D13():
    deopt 67 [i7, r33];
  D15():
    deopt 80 [r34];
  L21():
    goto L2(i7);
  L23():
    s18 = toForSeq(<int 1, 2, 3, 4>);
    l2 = length(s18);
    i10 = 0;
    goto L4(i10);
  L4(i11):
    i12 = `+`.1(i11, 1);
    c2 = `<`.1(l2, i12);
    if c2 then L24() else L5();
  L5():
    x2 = `[[`(s18, i12, NULL, TRUE);
    st si = x2;
    mtext5 = ldf mtext;
    check L25() else D16();
  L24():
    invisible.0();
    popenv;
    return i12;
  D16():
    deopt 84 [i12];
  L25():
    p17 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      c3 = ldf c in base;
      r37 = dyn c3("padj=0", "-----------", "padj=1");
      goto L0(r37);
    L2():
      r35 = dyn base1("padj=0", "-----------", "padj=1");
      goto L0(r35);
    };
    p18 = prom<V +>{
      si = ld si;
      si1 = force? si;
      checkMissing(si1);
      return si1;
    };
    p19 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      c4 = ldf c in base;
      r42 = dyn c4(0.0, 0.5, 1.0);
      goto L0(r42);
    L2():
      r40 = dyn base2(0.0, 0.5, 1.0);
      goto L0(r40);
    };
    r44 = dyn mtext5[, side, padj](p17, p18, p19);
    check L26() else D17();
  D17():
    deopt 90 [i12, r44];
  L26():
    goto L4(i12);
  }
}
fun inner3127354442(text, side, line, outer, at, adj, padj, cex, col, font, `...`) {
  (reg text:*, reg side:*, reg line:*, reg outer:*, reg at:*, reg adj:*, reg padj:*, reg cex:*, reg col:*, reg font:*, reg ddd:dots) -+> V { var text:*, var side:*, reg side_isMissing:L, reg side_orDefault:*, var line:*, reg line_isMissing:L, reg line_orDefault:*, var outer:*, reg outer_isMissing:L, reg outer_orDefault:*, var at:*, reg at_isMissing:L, reg at_orDefault:*, var adj:*, reg adj_isMissing:L, reg adj_orDefault:*, var padj:*, reg padj_isMissing:L, reg padj_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var font:*, reg font_isMissing:L, reg font_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg _External_graphics:cls, reg C_mtext:*, reg C_mtext1:V, reg p:p(V +), reg as_graphicsAnnot:cls, reg text1:*, reg text2:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg side1:*, reg side2:V, reg p3:p(V +), reg line1:*, reg line2:V, reg p4:p(V +), reg outer1:*, reg outer2:V, reg p5:p(V +), reg at1:*, reg at2:V, reg p6:p(V +), reg adj1:*, reg adj2:V, reg p7:p(V +), reg padj1:*, reg padj2:V, reg p8:p(V +), reg cex1:*, reg cex2:V, reg p9:p(V +), reg col1:*, reg col2:V, reg p10:p(V +), reg font1:*, reg font2:V, reg p11:p(V +), reg ddd1:dots?, reg r17:V, reg invisible:cls, reg r18:V |
    mkenv;
    st text = text;
    side_isMissing = missing.0(side);
    if side_isMissing then L0(3.0) else L0(side);
  L0(side_orDefault):
    st side = side_orDefault;
    line_isMissing = missing.0(line);
    if line_isMissing then L1(0.0) else L1(line);
  L1(line_orDefault):
    st line = line_orDefault;
    outer_isMissing = missing.0(outer);
    if outer_isMissing then L2(FALSE) else L2(outer);
  L2(outer_orDefault):
    st outer = outer_orDefault;
    at_isMissing = missing.0(at);
    if at_isMissing then L3(NA_LGL) else L3(at);
  L3(at_orDefault):
    st at = at_orDefault;
    adj_isMissing = missing.0(adj);
    if adj_isMissing then L4(NA_LGL) else L4(adj);
  L4(adj_orDefault):
    st adj = adj_orDefault;
    padj_isMissing = missing.0(padj);
    if padj_isMissing then L5(NA_LGL) else L5(padj);
  L5(padj_orDefault):
    st padj = padj_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L6(NA_LGL) else L6(cex);
  L6(cex_orDefault):
    st cex = cex_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L7(NA_LGL) else L7(col);
  L7(col_orDefault):
    st col = col_orDefault;
    font_isMissing = missing.0(font);
    if font_isMissing then L8(NA_LGL) else L8(font);
  L8(font_orDefault):
    st font = font_orDefault;
    st `...` = ddd;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L9(r1):
    popenv;
    return r1;
  L11():
    sym1 = ldf `.External.graphics`;
    base1 = ldf `.External.graphics` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L12():
    r = dyn base(<lang .External.graphics(C_mtext, as.graphicsAnnot(text), side, line, outer, at, adj, padj, cex, col, font, ...)>);
    goto L9(r);
  L10(r3):
    invisible = ldf invisible in base;
    r18 = dyn invisible(r3);
    check L17() else D2();
  L13():
    _External_graphics = ldf `.External.graphics`;
    check L15() else D0();
  L14():
    r2 = dyn base1(<sym C_mtext>, <lang as.graphicsAnnot(text)>, <sym side>, <sym line>, <sym outer>, <sym at>, <sym adj>, <sym padj>, <sym cex>, <sym col>, <sym font>, <sym ...>);
    goto L10(r2);
  D0():
    deopt 4 [];
  D2():
    deopt 19 [r18];
  L15():
    p = prom<V +>{
      C_mtext = ld C_mtext;
      C_mtext1 = force? C_mtext;
      checkMissing(C_mtext1);
      return C_mtext1;
    };
    p2 = prom<V +>{
      as_graphicsAnnot = ldf `as.graphicsAnnot`;
      p1 = prom<V +>{
        text1 = ld text;
        text2 = force? text1;
        checkMissing(text2);
        return text2;
      };
      r6 = dyn as_graphicsAnnot(p1);
      return r6;
    };
    p3 = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    p4 = prom<V +>{
      line1 = ld line;
      line2 = force? line1;
      checkMissing(line2);
      return line2;
    };
    p5 = prom<V +>{
      outer1 = ld outer;
      outer2 = force? outer1;
      checkMissing(outer2);
      return outer2;
    };
    p6 = prom<V +>{
      at1 = ld at;
      at2 = force? at1;
      checkMissing(at2);
      return at2;
    };
    p7 = prom<V +>{
      adj1 = ld adj;
      adj2 = force? adj1;
      checkMissing(adj2);
      return adj2;
    };
    p8 = prom<V +>{
      padj1 = ld padj;
      padj2 = force? padj1;
      checkMissing(padj2);
      return padj2;
    };
    p9 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p10 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p11 = prom<V +>{
      font1 = ld font;
      font2 = force? font1;
      checkMissing(font2);
      return font2;
    };
    ddd1 = ld `...`;
    r17 = dyn _External_graphics[, , , , , , , , , , , `...`](p, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, ddd1);
    check L16() else D1();
  L17():
    goto L9(r18);
  D1():
    deopt 17 [r17];
  L16():
    goto L10(r17);
  }
}